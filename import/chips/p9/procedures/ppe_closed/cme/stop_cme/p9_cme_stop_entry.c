/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_entry.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */
/// \file p9_cme_stop_enter_thread.c
/// \brief CME Stop Entey Thread
///
/// Features of this code file:
/// - main() registers an IRQ handler which gets interrupted on a STOP update
///   by a core.
/// - main creates a thread which pends on semaphore to be posted by the IRQ
///   handler.
/// - p9_cme_stop_enter_thread() pends on semaphore from IRQ handler.
/// - On interrupt, stop_handler() does as follows:
///   - masks the IRQ
///   - posts a semaphore
///   - exits.
/// - On semaphore post, p9_cme_stop_enter_thread() does as follows:
///   - clears the IRQ
///   - reads STOP
///   - call p9_cme_stop_entry() sequence
///   - unmasks the IRQ
///   - pends on next semaphore post.
///

#include "p9_cme_stop.h"
#include "p9_cme_stop_enter_marks.h"

extern CmeStopRecord G_cme_stop_record;

int
p9_cme_stop_entry()
{
    int             catchup_ongoing     = 0;
    int             entry_ongoing       = 1;
    uint8_t         target_level        = 0;
    uint8_t         deeper_level        = 0;
    uint8_t         origin_level        = 0;
    uint32_t        origin_core         = 0;
    uint32_t        deeper_core         = 0;
    uint32_t        core_aborted        = 0;
    uint32_t        core_catchup        = 0;
    uint32_t        core_stop1          = 0;
    uint32_t        core_raw            = 0;
    uint32_t        core;
    uint32_t        loop;
    uint32_t        pm_states;
    uint32_t        lclr_data;
    uint64_t        scom_data;
    ppm_sshsrc_t    hist;
    ppm_pig_t       pig;

    //--------------------------------------------------------------------------
    PK_TRACE_INF("+++++ +++++ BEGIN OF STOP ENTRY +++++ +++++");
    //--------------------------------------------------------------------------

    // First we need to determine which of the two STOP interrupts fired.
    // Iow, which of the two cores, "left-0" or "right-1", updated their
    // STOP PM_STATE. If both have fired by the time we get to this point,
    // CME will do Daul-cast to both cores at the same time in entry flow.

    // pm_active is edge trigger because its level can be phantom
    // due to common-core constantly gives pm_active when core is stopped,
    // reading from EINR for raw signal, ignore EISR if EINR signal is gone
    core     = (in32(CME_LCL_EISR) & BITS32(20, 2));
    core_raw = (in32(CME_LCL_EINR) & BITS32(20, 2));
    out32(CME_LCL_EISR_CLR, core);
    core     = (core & core_raw) >> SHIFT32(21);

    // filter with partial good and running core mask
    // core cannot enter stop if core is already stopped
    core = core & G_cme_stop_record.core_enabled &
           G_cme_stop_record.core_running;

    PK_TRACE_DBG("Check: Core Select[%d] Enabled[%d] Running[%d]",
                 core, G_cme_stop_record.core_enabled,
                 G_cme_stop_record.core_running);

    if (!core)
    {
        // PM_ACTIVE can be phantom, only gives warning
        PK_TRACE_INF("WARNING: Only Phantom PM_ACTIVE to be Ignored. Return");
        return CME_STOP_SUCCESS;
    }

    // NDD2: OOB bits wired to SISR
    //       not implemented in DD1
    // bit1 is Recoverable Error
    // bit2 is Special Attention
    if (((core & CME_MASK_C0) && (in32(CME_LCL_SISR)    & BITS32(13, 2))) ||
        ((core & CME_MASK_C1) && (in32_sh(CME_LCL_SISR) & BITS32(29, 2))))
    {
        PK_TRACE_INF("WARNING: Attn/Recov Present, Abort Entry and Return");
        return CME_STOP_SUCCESS;
    }

    //===================================
    MARK_TAG(BEGINSCOPE_STOP_ENTRY, core)
    //===================================

    do   // while(0) loop for stop flow control
    {

        // Read SISR for pm_state_cX
        pm_states = in32_sh(CME_LCL_SISR);

        // entry:      req_level = target stop level
        //             act_level = current stop level
        //             running   = FALSE, TRUE if aborted
        // stopped:    req_level = act_level = target and current stop level
        //                                     (if<=5)
        //             running   = FALSE
        // exit/abort: req_level = requested stop level
        //             act_level = latest stop level
        //             running   = FALSE
        // running:    req_level = act_level = 0
        //             running   = TRUE
        // pm_active AND running   : req_level = New requested stop level
        // pm_active AND !running  : req_level = Not possible,
        //                                       ignore false re-entry
        // !pm_active AND running  : req_level = 0 by exit,
        //                                       not changing req_level
        // !pm_active AND !running : req_level = Current req_level
        if (core & CME_MASK_C0)
        {
            G_cme_stop_record.req_level_c0 =
                (pm_states & BITS32(4, 4)) >> SHIFT32(7);

            if (G_cme_stop_record.req_level_c0 == STOP_LEVEL_1)
            {
                G_cme_stop_record.act_level_c0 = STOP_LEVEL_1;
                core_stop1 |= CME_MASK_C0;
            }

            if ((G_cme_stop_record.header_flags & MAP_11_TO_8) &&
                (G_cme_stop_record.req_level_c0 == STOP_LEVEL_11))
            {

                G_cme_stop_record.req_level_c0 = STOP_LEVEL_8;
            }

            if ((G_cme_stop_record.header_flags & MAP_8_TO_5) &&
                (G_cme_stop_record.req_level_c0 == STOP_LEVEL_8))
            {
                G_cme_stop_record.req_level_c0 = STOP_LEVEL_5;
            }

            if ((G_cme_stop_record.header_flags & MAP_5_TO_4) &&
                (G_cme_stop_record.req_level_c0 == STOP_LEVEL_5))
            {
                G_cme_stop_record.req_level_c0 = STOP_LEVEL_4;
            }

            if ((G_cme_stop_record.header_flags & MAP_4_TO_2) &&
                (G_cme_stop_record.req_level_c0 == STOP_LEVEL_4))
            {
                G_cme_stop_record.req_level_c0 = STOP_LEVEL_2;
            }
        }

        if (core & CME_MASK_C1)
        {
            G_cme_stop_record.req_level_c1 =
                (pm_states & BITS32(8, 4)) >> SHIFT32(11);

            if (G_cme_stop_record.req_level_c1 == STOP_LEVEL_1)
            {
                G_cme_stop_record.act_level_c1 = STOP_LEVEL_1;
                core_stop1 |= CME_MASK_C1;
            }

            if ((G_cme_stop_record.header_flags & MAP_11_TO_8) &&
                (G_cme_stop_record.req_level_c1 == STOP_LEVEL_11))
            {
                G_cme_stop_record.req_level_c1 = STOP_LEVEL_8;
            }

            if ((G_cme_stop_record.header_flags & MAP_8_TO_5) &&
                (G_cme_stop_record.req_level_c1 == STOP_LEVEL_8))
            {
                G_cme_stop_record.req_level_c1 = STOP_LEVEL_5;
            }

            if ((G_cme_stop_record.header_flags & MAP_5_TO_4) &&
                (G_cme_stop_record.req_level_c1 == STOP_LEVEL_5))
            {
                G_cme_stop_record.req_level_c1 = STOP_LEVEL_4;
            }

            if ((G_cme_stop_record.header_flags & MAP_4_TO_2) &&
                (G_cme_stop_record.req_level_c1 == STOP_LEVEL_4))
            {
                G_cme_stop_record.req_level_c1 = STOP_LEVEL_2;
            }
        }

        PK_TRACE_DBG("Check: Stop Levels Request[%d %d] Actual[%d, %d]",
                     G_cme_stop_record.req_level_c0,
                     G_cme_stop_record.req_level_c1,
                     G_cme_stop_record.act_level_c0,
                     G_cme_stop_record.act_level_c1);

        // Mark core as to be stopped
        G_cme_stop_record.core_running &= ~core;

        if(core_stop1)
        {
            PK_TRACE_DBG("Check: core[%d] core_stop1[%d]", core, core_stop1);

#if HW386841_DD1_PLS_SRR1_DLS_STOP1_FIX

            //----------------------------------------------------------------------
            PK_TRACE_INF("+++++ +++++ STOP LEVEL 1 ENTRY +++++ +++++");
            //----------------------------------------------------------------------

            PK_TRACE("Pulse STOP entry acknowledgement to PC via SICR[0/1]");
            out32(CME_LCL_SICR_OR,  core_stop1 << SHIFT32(1));
            out32(CME_LCL_SICR_CLR, core_stop1 << SHIFT32(1));

            PK_TRACE("Update STOP history: in core stop level 1");
            CME_STOP_UPDATE_HISTORY(core_stop1,
                                    STOP_CORE_IS_GATED,
                                    STOP_TRANS_COMPLETE,
                                    STOP_LEVEL_1,
                                    STOP_LEVEL_1,
                                    STOP_REQ_ENABLE,
                                    STOP_ACT_ENABLE);

            core = core & ~core_stop1;

            if (!core)
            {
                break;
            }

#else

            // Nap should be done by hardware when auto_stop1 is enabled
            // Halt on error if target STOP level == 1(Nap)
            PK_TRACE_INF("ERROR: Stop 1 Requested to CME When AUTO_STOP1 Enabled, HALT CME!");
            pk_halt();

#endif

        }

        //----------------------------------------------------------------------
        PK_TRACE_INF("+++++ +++++ STOP LEVEL 2 ENTRY +++++ +++++");
        //----------------------------------------------------------------------

        PK_TRACE("Request PCB mux via SICR[10/11]");
        out32(CME_LCL_SICR_OR, core << SHIFT32(11));

        PK_TRACE("Pulse STOP entry acknowledgement to PC via SICR[0/1]");
        out32(CME_LCL_SICR_OR,  core << SHIFT32(1));
        out32(CME_LCL_SICR_CLR, core << SHIFT32(1));

        // set target_level from pm_state for both cores or just one core
        target_level = (core == CME_MASK_C0) ? G_cme_stop_record.req_level_c0 :
                       G_cme_stop_record.req_level_c1;

        // If both cores are going into STOP but targeting different levels,
        if ((core == CME_MASK_BC) &&
            (G_cme_stop_record.req_level_c0 != G_cme_stop_record.req_level_c1))
        {
            // set target_level to the lighter level targeted by one core
            // set deeper_level to the deeper level targeted by deeper core
            deeper_level = G_cme_stop_record.req_level_c0;
            deeper_core  = CME_MASK_C0;

            if (G_cme_stop_record.req_level_c0 < G_cme_stop_record.req_level_c1)
            {
                target_level = G_cme_stop_record.req_level_c0;
                deeper_level = G_cme_stop_record.req_level_c1;
                deeper_core  = CME_MASK_C1;
            }
        }

        PK_TRACE("Update STOP history: in transition of entry");
        // Set req_level_level to target_level of either both or just one core
        CME_STOP_UPDATE_HISTORY(core,
                                STOP_CORE_READY_RUN,
                                STOP_TRANS_ENTRY,
                                target_level,
                                STOP_LEVEL_0,
                                STOP_REQ_ENABLE,
                                STOP_ACT_DISABLE);

        // Set req_level_level to deeper_level for deeper core
        if (deeper_core)
        {
            CME_STOP_UPDATE_HISTORY(deeper_core,
                                    STOP_CORE_READY_RUN,
                                    STOP_TRANS_ENTRY,
                                    deeper_level,
                                    STOP_LEVEL_0,
                                    STOP_REQ_ENABLE,
                                    STOP_ACT_DISABLE);
        }

        PK_TRACE_DBG("Check: core[%d] target_lv[%d] deeper_lv[%d] deeper_core[%d]",
                     core, target_level, deeper_level, deeper_core);

        // Poll Infinitely for PCB Mux Grant
        // MF: change watchdog timer in pk to ensure forward progress
        while((core & (in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

        PK_TRACE_INF("SE2.A: PCB Mux Granted");

        //=============================
        MARK_TRAP(SE_QUIESCE_CORE_INTF)
        //=============================

        PK_TRACE("Assert halt STOP override disable via LMCR[14/15]");
        out32(CME_LCL_LMCR_OR, (core << SHIFT32(15)));

#if SPWU_AUTO
        PK_TRACE("Assert auto special wakeup disable via LMCR[12/13]");
        out32(CME_LCL_LMCR_OR, (core << SHIFT32(13)));
#endif

        PK_TRACE("Assert core-L2 + core-CC quiesces via SICR[6/7,8/9]");
        out32(CME_LCL_SICR_OR, (core << SHIFT32(7)) | (core << SHIFT32(9)));

        PK_TRACE("Poll for L2 interface quiesced via SISR[30/31]");

        do
        {
            lclr_data = in32(CME_LCL_SISR);
        }
        while((lclr_data & core) != core);

        // Waits quiesce done for at least 512 core cycles
        // MF: verify generate FCB otherwise math is wrong.
        PPE_WAIT_CORE_CYCLES(loop, 512)

        PK_TRACE_INF("SE2.B: Interfaces Quiesced");

        //==========================
        MARK_TRAP(SE_STOP_CORE_CLKS)
        //==========================

        PK_TRACE("Assert core chiplet fence via NET_CTRL0[18]");
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(18));

        PK_TRACE("Clear SCAN_REGION_TYPE prior to stop core clocks");
        CME_PUTSCOM(C_SCAN_REGION_TYPE, core, 0);

        PK_TRACE("Stop Core Clocks via CLK_REGION");
        CME_PUTSCOM(C_CLK_REGION, core,
                    (CLK_STOP_CMD | CLK_REGION_ALL_BUT_PLL | CLK_THOLD_ALL));

        PK_TRACE("Poll for core clocks stopped via CPLT_STAT0[8]");

        do
        {
            CME_GETSCOM(C_CPLT_STAT0, core, CME_SCOM_AND, scom_data);
        }
        while((~scom_data) & BIT64(8));

        PK_TRACE("Check core clock is stopped via CLOCK_STAT_SL[4-13]");
        CME_GETSCOM(C_CLOCK_STAT_SL, core, CME_SCOM_AND, scom_data);

        if (((~scom_data) & CLK_REGION_ALL_BUT_PLL) != 0)
        {
            PK_TRACE_INF("ERROR: Core Clock Stop Failed. HALT CME!");
            pk_halt();
        }

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE_INF("SE2.C: Core Clock Stopped");

        //==============================
        MARK_TRAP(SE_STOP_CORE_GRID)
        //==============================

        PK_TRACE("Drop clock sync enable before switch to refclk via CACCR[15]");
        CME_PUTSCOM(CPPM_CACCR_CLR, core, BIT64(15));

        PK_TRACE("Poll for clock sync done to drop via CACSR[13]");

        do
        {
            CME_GETSCOM(CPPM_CACSR, core, CME_SCOM_OR, scom_data);
        }
        while(scom_data & BIT64(13));

        PK_TRACE("Switch glsmux to refclk to save clock grid power via CGCR[3]");
        CME_PUTSCOM(C_PPM_CGCR, core, 0);

        PK_TRACE("Assert skew sense to skewadjust fence via NET_CTRL0[22]");
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(22));

        PK_TRACE("Assert vital fence via CPLT_CTRL1[3]");
        CME_PUTSCOM(C_CPLT_CTRL1_OR, core, BIT64(3));

        PK_TRACE("Assert regional fences via CPLT_CTRL1[4-13]");
        CME_PUTSCOM(C_CPLT_CTRL1_OR, core, BITS64(4, 11));

        PK_TRACE("Drop sdis_n(flushing LCBES condition) via CPLT_CONF0[34]");
        CME_PUTSCOM(C_CPLT_CONF0_CLEAR, core, BIT64(34));

        /// @todo add VDM_ENABLE attribute control
        PK_TRACE("Drop vdm enable via CPPM_VDMCR[0]");
        CME_PUTSCOM(PPM_VDMCR_CLR, core, BIT64(0));

        PK_TRACE("Copy PECE CME sample to PPM Shadow via PECES");

        if (core & CME_MASK_C0)
        {
            scom_data = in64(CME_LCL_PECESR0);
            CME_PUTSCOM(CPPM_PECES, core, scom_data);
            G_cme_stop_record.act_level_c0 = STOP_LEVEL_2;
        }

        if (core & CME_MASK_C1)
        {
            scom_data = in64(CME_LCL_PECESR1);
            CME_PUTSCOM(CPPM_PECES, core, scom_data);
            G_cme_stop_record.act_level_c1 = STOP_LEVEL_2;
        }

        PK_TRACE_INF("SE2.D: Clock Sync Dropped");

        //===========================
        MARK_TAG(SE_STOP2_DONE, core)
        //===========================

        PK_TRACE("Update STOP history: in core stop level 2");
        // Check if STOP level 2 reaches the target for both or one core
        entry_ongoing =
            target_level == STOP_LEVEL_2 ?
            STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;

        CME_STOP_UPDATE_HISTORY(core,
                                STOP_CORE_IS_GATED,
                                entry_ongoing,
                                target_level,
                                STOP_LEVEL_2,
                                STOP_REQ_DISABLE,
                                STOP_ACT_ENABLE);

        // If both cores targeting different levels
        // deeper core should have at least deeper stop level than 2
        // but only need to modify deeper core history if another one was done
        if (deeper_core && !entry_ongoing)
        {
            CME_STOP_UPDATE_HISTORY(deeper_core,
                                    STOP_CORE_IS_GATED,
                                    STOP_TRANS_ENTRY,
                                    deeper_level,
                                    STOP_LEVEL_2,
                                    STOP_REQ_DISABLE,
                                    STOP_ACT_DISABLE);
            // from now on, proceed with only deeper core
            core          = deeper_core;
            target_level  = deeper_level;
            deeper_level  = 0;
            deeper_core   = 0;
            entry_ongoing = 1;
        }

#if !SKIP_ENTRY_CATCHUP

        if (catchup_ongoing)
        {
            // Y = 2 eo = 0 same if X = 2
            // Y > 2 eo = 1 c=c t=t same if X = 2
            // if X > 2 eo = 1
            //   if Y = 2 c=o t=o
            //   else (Y > 2) c=2
            //     if X != Y (X = Y: dl=0 dc=0 t=t)
            //       dl=o dc=o (X > Y)
            //       if X < Y
            //         dl=t dc=c t=o
            if (origin_level > STOP_LEVEL_2)
            {
                if (target_level == STOP_LEVEL_2)
                {
                    core         = origin_core;
                    target_level = origin_level;
                }
                else
                {
                    if (origin_level != target_level)
                    {
                        deeper_core  = origin_core;
                        deeper_level = origin_level;

                        if (origin_level < target_level)
                        {
                            deeper_core  = core;
                            deeper_level = target_level;
                            target_level = origin_level;
                        }
                    }

                    core = CME_MASK_BC;
                }

                entry_ongoing = 1;
            }

            break;
        }

        core_catchup = (in32(CME_LCL_EISR) & BITS32(20, 2)) >> SHIFT32(21);
        core_catchup = core_catchup & G_cme_stop_record.core_enabled &
                       G_cme_stop_record.core_running;

        if (core_catchup)
        {
            out32(CME_LCL_EISR_CLR, core_catchup << SHIFT32(21));
            origin_core  = core;
            origin_level = target_level;
            core = core_catchup;
            catchup_ongoing = 1;

            //========================
            MARK_TAG(SE_CATCHUP, core)
            //========================
        }

        PK_TRACE_DBG("Catch: core[%d] running[%d] core_catchup[%d] origin_core[%d]",
                     core, G_cme_stop_record.core_running, core_catchup, origin_core);

#endif

    }
    while(catchup_ongoing);

    do
    {

        // If we are done at STOP level 2
        if (!entry_ongoing)
        {
            break;
        }

        //===========================
        MARK_TRAP(SE_IS0_BEGIN)
        //===========================

#if !SKIP_ABORT
        out32(CME_LCL_EIMR_CLR, (core << SHIFT32(13)) |
              (core << SHIFT32(15)) |
              (core << SHIFT32(17)));
        sync();
        out32(CME_LCL_EIMR_OR,  (core << SHIFT32(13)) |
              (core << SHIFT32(15)) |
              (core << SHIFT32(17)));
#endif

        //===================
        MARK_TRAP(SE_IS0_END)
        //===================

        core_aborted = core &  G_cme_stop_record.core_running;
        core         = core & ~G_cme_stop_record.core_running;

        PK_TRACE_DBG("Abort: core[%d] running[%d] core_aborted[%d]",
                     core, G_cme_stop_record.core_running, core_aborted);

        if (!core)
        {
            core |= core_aborted;
            entry_ongoing = 0;
            break;
        }

        if (core_aborted && deeper_core)
        {
            if (core_aborted != deeper_core)
            {
                target_level = deeper_level;
            }

            deeper_core  = 0;
        }

        PK_TRACE_DBG("Check: core[%d] deeper_core[%d] target_level[%d] deeper_level[%d]",
                     core, deeper_core, target_level, deeper_level);

        //----------------------------------------------------------------------
        PK_TRACE_INF("+++++ +++++ STOP LEVEL 3 ENTRY +++++ +++++");
        //----------------------------------------------------------------------

        if (target_level == 3)
        {
            /*
                        //==========================
                        MARK_TAG(SE_CORE_VMIN, core)
                        //==========================

                        PK_TRACE("SE3.a");
                        // Enable IVRM if not already

                        PK_TRACE("SE3.b");

                        // Drop to Vmin
                        if(core & CME_MASK_C0)
                        {
                            G_cme_stop_record.act_level_c0 = STOP_LEVEL_3;
                        }

                        if(core & CME_MASK_C1)
                        {
                            G_cme_stop_record.act_level_c1 = STOP_LEVEL_3;
                        }

                        //===========================
                        MARK_TAG(SE_STOP3_DONE, core)
                        //===========================

                        PK_TRACE("SE3.c");
                        // Update Stop History: In Core Stop Level 3

                        CME_STOP_UPDATE_HISTORY(core,
                                                STOP_CORE_IS_GATED,
                                                STOP_TRANS_COMPLETE,
                                                target_level,
                                                STOP_LEVEL_3,
                                                STOP_REQ_DISABLE,
                                                STOP_ACT_ENABLE);
            */
            // If both cores targeting different levels
            // deeper core should have at least deeper stop level than 3
            // only need to modify deeper core history if another one was done
            if (deeper_core)
            {
                /*
                                CME_STOP_UPDATE_HISTORY(deeper_core,
                                                        STOP_CORE_IS_GATED,
                                                        STOP_TRANS_ENTRY,
                                                        deeper_level,
                                                        STOP_LEVEL_2,
                                                        STOP_REQ_DISABLE,
                                                        STOP_ACT_ENABLE);
                */
                // from now on, proceed with only deeper core
                core          = deeper_core;
                target_level  = deeper_level;
                deeper_level  = 0;
                deeper_core   = 0;
                entry_ongoing = 1;
            }
            else
            {
                entry_ongoing = 0;
            }

            // If we are done at STOP level 3
            if (!entry_ongoing)
            {
                break;
            }
        }

        //----------------------------------------------------------------------
        PK_TRACE_INF("+++++ +++++ STOP LEVEL 4 ENTRY +++++ +++++");
        //----------------------------------------------------------------------

        //===============================
        MARK_TAG(SE_POWER_OFF_CORE, core)
        //===============================

        PK_TRACE("Assert PCB fence via NET_CTRL0[25]");
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(25));

        PK_TRACE("Assert electrical fence via NET_CTRL0[26]");
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(26));

        PK_TRACE("Assert vital thold via NET_CTRL0[16]");
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(16));

#if !STOP_PRIME

        // NDD2: OOB bits wired to SISR
        //       not implemented in DD1
        // bit0 is System checkstop
        // bit1 is Recoverable Error
        // bit2 is Special Attention
        // bit3 is Core Checkstop
        if (((core & CME_MASK_C0) && (in32(CME_LCL_SISR)    & BITS32(12, 4))) ||
            ((core & CME_MASK_C1) && (in32_sh(CME_LCL_SISR) & BITS32(28, 4))))
        {
            PK_TRACE_INF("WARNING: Xstop/Attn/Recov Present, Skip Core Power Off");
        }
        else
        {
            PK_TRACE("Drop vdd_pfet_val/sel_override/regulation_finger_en via PFCS[4,5,8]");
            // vdd_pfet_val/sel_override     = 0 (disbaled)
            // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
            CME_PUTSCOM(PPM_PFCS_CLR, core, BIT64(4) | BIT64(5) | BIT64(8));

            PK_TRACE("Power off core VDD via PFCS[0-1]");
            // vdd_pfet_force_state = 01 (Force Voff)
            CME_PUTSCOM(PPM_PFCS_OR, core, BIT64(1));

            PK_TRACE("Poll for power gate sequencer state: 0x8 (FSM Idle) via PFCS[42]");

            do
            {
                CME_GETSCOM(PPM_PFCS, core, CME_SCOM_AND, scom_data);
            }
            while(!(scom_data & BIT64(42)));

            PK_TRACE("Turn off force voff via PFCS[0-1]");
            // vdd_pfet_force_state = 00 (Nop)
            CME_PUTSCOM(PPM_PFCS_CLR, core, BITS64(0, 2));

            PK_TRACE_INF("SE4.A: Core Powered Off");
        }

#endif

        if (core & CME_MASK_C0)
        {
            G_cme_stop_record.act_level_c0 = STOP_LEVEL_4;
        }

        if (core & CME_MASK_C1)
        {
            G_cme_stop_record.act_level_c1 = STOP_LEVEL_4;
        }

        //===========================
        MARK_TAG(SE_STOP4_DONE, core)
        //===========================

        PK_TRACE("Update STOP history: in core stop level 4");
        // Check if STOP level 4 reaches the target for both or one core
        entry_ongoing =
            target_level == STOP_LEVEL_4 ? STOP_TRANS_COMPLETE :
            STOP_TRANS_ENTRY;
        CME_STOP_UPDATE_HISTORY(core,
                                STOP_CORE_IS_GATED,
                                entry_ongoing,
                                target_level,
                                STOP_LEVEL_4,
                                STOP_REQ_DISABLE,
                                STOP_ACT_ENABLE);

        // If both cores targeting different levels
        // deeper core should have at least deeper stop level than 4
        // only need to modify deeper core history if another one was done
        if (deeper_core && !entry_ongoing)
        {
            CME_STOP_UPDATE_HISTORY(deeper_core,
                                    STOP_CORE_IS_GATED,
                                    STOP_TRANS_ENTRY,
                                    deeper_level,
                                    STOP_LEVEL_4,
                                    STOP_REQ_DISABLE,
                                    STOP_ACT_DISABLE);
            // from now on, proceed with only deeper core
            core          = deeper_core;
            target_level  = deeper_level;
            deeper_level  = 0;
            deeper_core   = 0;
            entry_ongoing = 1;
        }

        // If we are done at STOP level 4
        if (!entry_ongoing)
        {
            break;
        }

        //===========================
        MARK_TRAP(SE_IS1_BEGIN)
        //===========================

#if !SKIP_ABORT
        out32(CME_LCL_EIMR_CLR, (core << SHIFT32(13)) |
              (core << SHIFT32(15)) |
              (core << SHIFT32(17)));
        sync();
        out32(CME_LCL_EIMR_OR,  (core << SHIFT32(13)) |
              (core << SHIFT32(15)) |
              (core << SHIFT32(17)));
#endif

        //===================
        MARK_TRAP(SE_IS1_END)
        //===================

        core_aborted = core &  G_cme_stop_record.core_running;
        core         = core & ~G_cme_stop_record.core_running;

        PK_TRACE_DBG("Abort: core[%d] running[%d] core_aborted[%d]",
                     core, G_cme_stop_record.core_running, core_aborted);

        if (!core)
        {
            core |= core_aborted;
            entry_ongoing = 0;
            break;
        }

        if (core_aborted && deeper_core)
        {
            if (core_aborted != deeper_core)
            {
                target_level = deeper_level;
            }

            deeper_core = 0;
        }

        PK_TRACE_DBG("Check: core[%d] deeper_core[%d] target_level[%d] deeper_level[%d]",
                     core, deeper_core, target_level, deeper_level);

        //----------------------------------------------------------------------
        PK_TRACE_INF("+++++ +++++ STOP LEVEL 5-7 ENTRY +++++ +++++");
        //----------------------------------------------------------------------

        if ((G_cme_stop_record.req_level_c0 >= STOP_LEVEL_8) &&
            (G_cme_stop_record.req_level_c1 >= STOP_LEVEL_8))
        {

            //================================
            MARK_TAG(SE_PURGE_L2, CME_MASK_BC)
            //================================

            PK_TRACE("Assert L2+NCU purge and NCU tlbie quiesce via SICR[18,21,22]");
            // insert tlbie quiesce before ncu purge to avoid window condition
            // of ncu traffic still happening when purging starts
            // Note: chtm purge will be done in SGPE
            out32(CME_LCL_SICR_OR, BIT32(18) | BIT32(21));
            out32(CME_LCL_SICR_OR, BIT32(22));

            // todo: poll for tlbie quiesce done?

            PK_TRACE("Poll for purged done via EISR[22,23]");

            do
            {

#if !SKIP_L2_PURGE_ABORT

                if (!core_aborted &&
                    (in32(CME_LCL_EINR) & BITS32(12, 6)))
                {
                    if (in32(CME_LCL_EINR) &
                        (((core & CME_MASK_C0) ? BIT32(12) : 0) | BIT32(14) | BIT32(16)))
                    {
                        core_aborted |= CME_MASK_C0;
                    }

                    if (in32(CME_LCL_EINR) &
                        (((core & CME_MASK_C1) ? BIT32(13) : 0) | BIT32(15) | BIT32(17)))
                    {
                        core_aborted |= CME_MASK_C1;
                    }

                    //=======================================
                    MARK_TAG(SE_PURGE_L2_ABORT, core_aborted)
                    //=======================================

                    PK_TRACE_DBG("Abort: L2+NCU purge aborted by core[%d]", core_aborted);
                    out32(CME_LCL_SICR_OR, BIT32(19) | BIT32(23));
                }

#endif

            }
            while((in32(CME_LCL_EISR) & BITS32(22, 2)) != BITS32(22, 2));

            PK_TRACE("Drop L2+NCU purges and their possible aborts via SICR[18,19,22,23]");
            out32(CME_LCL_SICR_CLR, (BITS32(18, 2) | BITS32(22, 2)));

            PK_TRACE_INF("SE5.A: L2 and NCU Purged");

            //===================================================================
            MARK_TAG(SE_PURGE_L2_DONE, core_aborted ? core_aborted : CME_MASK_BC)
            //===================================================================

            // if core = 3 aborted = 1, core = 2(sgpe handoff) aborted (cme wakeup)
            // if core = 1 aborted = 2, core = 1(sgpe handoff) aborted (sgpe wakeup)
            // if core = 1 aborted = 1, core = 0(break)        aborted (cme wakeup)
            // if core = 2 aborted = 3, core = 0(break)        aborted (cme wakeup)
            if (core != (core_aborted & core))
            {
                core &= ~core_aborted;
            }
            else
            {
                break;
            }
        }

        //=============================
        MARK_TAG(SE_SGPE_HANDOFF, core)
        //=============================

        PK_TRACE("Update STOP history: in core stop level 5");
        CME_STOP_UPDATE_HISTORY(core,
                                STOP_CORE_IS_GATED,
                                STOP_TRANS_CORE_PORTION,
                                target_level,
                                STOP_LEVEL_5,
                                STOP_REQ_DISABLE,
                                STOP_ACT_ENABLE);

        PK_TRACE("Send PCB interrupt per core via PIG, select irq type via CPMMR[10]");

        if (core & CME_MASK_C0)
        {
            if (G_cme_stop_record.req_level_c0 < STOP_LEVEL_11)
            {
                CME_PUTSCOM(CPPM_CPMMR_OR, CME_MASK_C0, BIT64(10));
                pig.fields.req_intr_type = PIG_TYPE3;
            }
            else
            {
                CME_PUTSCOM(CPPM_CPMMR_CLR, CME_MASK_C0, BIT64(10));
                pig.fields.req_intr_type = PIG_TYPE2;
            }

            pig.fields.req_intr_payload = G_cme_stop_record.req_level_c0;
            CME_PUTSCOM(PPM_PIG, CME_MASK_C0, pig.value);
            G_cme_stop_record.core_stopgpe |= core;
            G_cme_stop_record.act_level_c0 = STOP_LEVEL_5;
        }

        if (core & CME_MASK_C1)
        {
            if (G_cme_stop_record.req_level_c1 < STOP_LEVEL_11)
            {
                CME_PUTSCOM(CPPM_CPMMR_OR, CME_MASK_C1, BIT64(10));
                pig.fields.req_intr_type = PIG_TYPE3;
            }
            else
            {
                CME_PUTSCOM(CPPM_CPMMR_CLR, CME_MASK_C1, BIT64(10));
                pig.fields.req_intr_type = PIG_TYPE2;
            }

            pig.fields.req_intr_payload = G_cme_stop_record.req_level_c1;
            CME_PUTSCOM(PPM_PIG, CME_MASK_C1, pig.value);
            G_cme_stop_record.core_stopgpe |= core;
            G_cme_stop_record.act_level_c1 = STOP_LEVEL_5;
        }

        PK_TRACE("Switch PPM wakeup to STOP-GPE via CPMMR[13]");
        CME_PUTSCOM(CPPM_CPMMR_OR, core, BIT64(13));

        PK_TRACE_INF("SE5.B: Handed off to SGPE");

    }
    while(0);

    //--------------------------------------------------------------------------
    PK_TRACE_INF("+++++ +++++ END OF STOP ENTRY +++++ +++++");
    //--------------------------------------------------------------------------

    //============================
    MARK_TRAP(ENDSCOPE_STOP_ENTRY)
    //============================

    return CME_STOP_SUCCESS;
}
