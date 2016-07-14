/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_entry.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
    uint8_t         target_level;
    uint8_t         deeper_level        = 0;
    uint8_t         origin_level        = 0;
    uint32_t        origin_core         = 0;
    uint32_t        deeper_core         = 0;
    uint32_t        core_aborted        = 0;
    uint32_t        core_catchup        = 0;
    uint32_t        core;
    uint32_t        loop;
    uint32_t        pm_states;
    uint32_t        lclr_data;
    uint64_t        scom_data;
    ppm_sshsrc_t    hist;
    ppm_pig_t       pig;

    //--------------------------------------------------------------------------
    // BEGIN OF STOP ENTRY
    //--------------------------------------------------------------------------

    // First we need to determine which of the two STOP interrupts fired.
    // Iow, which of the two cores, "left-0" or "right-1", updated their
    // STOP PM_STATE. If both have fired by the time we get to this point,
    // CME will do Daul-cast to both cores at the same time in entry flow.
    core = (in32(CME_LCL_EISR) & BITS32(20, 2)) >> SHIFT32(21);

    // filter with partial good and running core mask
    // core cannot enter stop if core is already stopped
    core = core & G_cme_stop_record.core_enabled &
           G_cme_stop_record.core_running;

    PK_TRACE("SE0: Core Select[%d] Enabled[%d] Running[%d]",
             core, G_cme_stop_record.core_enabled,
             G_cme_stop_record.core_running);

    // Return error if None of both fired
    if (!core)
    {
        PK_TRACE("Error: no pm_active fired");
        pk_halt();
    }

    //===================================
    MARK_TAG(BEGINSCOPE_STOP_ENTRY, core)
    //===================================

    do   // while(0) loop for stop flow control
    {

        //----------------------------------------------------------------------
        // STOP LEVEL 1 (should be done by hardware)
        //----------------------------------------------------------------------

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
        }

        if (core & CME_MASK_C1)
        {
            G_cme_stop_record.req_level_c1 =
                (pm_states & BITS32(8, 4)) >> SHIFT32(11);
        }

        G_cme_stop_record.core_running &= ~core;

        PK_TRACE("SE1: Stop Levels Request[%d %d] Actual[%d, %d]",
                 G_cme_stop_record.req_level_c0,
                 G_cme_stop_record.req_level_c1,
                 G_cme_stop_record.act_level_c0,
                 G_cme_stop_record.act_level_c1);

        // Return error if target STOP level == 1(Nap)
        if((core == CME_MASK_C0 &&
            G_cme_stop_record.req_level_c0 <= STOP_LEVEL_1) ||
           (core == CME_MASK_C1 &&
            G_cme_stop_record.req_level_c1 <= STOP_LEVEL_1) ||
           (core == CME_MASK_BC &&
            (G_cme_stop_record.req_level_c0 <= STOP_LEVEL_1 ||
             G_cme_stop_record.req_level_c1 <= STOP_LEVEL_1)))
        {
            PK_TRACE("Error: stop 1 requested to hcode");
            pk_halt();
        }

        //----------------------------------------------------------------------
        // STOP LEVEL 2
        //----------------------------------------------------------------------

        PK_TRACE("SE2.c");
        // Request PCB Mux
        out32(CME_LCL_SICR_OR, core << SHIFT32(11));

        PK_TRACE("SE2.d");
        // Protect PPM Register Write
        CME_PUTSCOM(CPPM_CPMMR_OR, core, BIT64(0));

        PK_TRACE("SE2.g");
        // Acknowledge the STOP Entry to PC with a pulse
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

        PK_TRACE("SE2.e");
        // Update STOP History: In Transition of Entry
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

        PK_TRACE("SE2: core[%d], target_lv[%d], deeper_lv[%d], deeper_core[%d]",
                 core, target_level, deeper_level, deeper_core);

        // Poll Infinitely for PCB Mux Grant
        // MF: change watchdog timer in pk to ensure forward progress
        while((core & (in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

        PK_TRACE("SE2: PCB Mux Granted");

        //=============================
        MARK_TRAP(SE_QUIESCE_CORE_INTF)
        //=============================

        /// Set LMCR bits 12/13, 14/15 (override disables)
#if SPWU_AUTO
        out32(CME_LCL_LMCR_OR, (core << SHIFT32(13)));
#endif
        out32(CME_LCL_LMCR_OR, (core << SHIFT32(15)));
        PK_TRACE("SE2.h");
        // Raise Core-L2 + Core-CC Quiesces
        out32(CME_LCL_SICR_OR, (core << SHIFT32(7)) | (core << SHIFT32(9)));

        PK_TRACE("SE2.i");

        do
        {
            lclr_data = in32(CME_LCL_SISR);
        }
        while((lclr_data & core) != core);

        // Waits quiesce done for at least 512 core cycles
        // MF: verify generate FCB otherwise math is wrong.
        PPE_WAIT_CORE_CYCLES(loop, 512)

        //==========================
        MARK_TRAP(SE_STOP_CORE_CLKS)
        //==========================

        PK_TRACE("SE2.j");
        // Raise Core Chiplet Fence
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(18));

        PK_TRACE("SE2.k");
        // Set all bits to zero prior stop core clocks
        CME_PUTSCOM(C_SCAN_REGION_TYPE, core, 0);

        PK_TRACE("SE2.l");
        // Stop Core Clocks
        CME_PUTSCOM(C_CLK_REGION, core, (CLK_STOP_CMD | CLK_REGION_ALL_BUT_PLL | CLK_THOLD_ALL));

        PK_TRACE("SE2.m");

        // Poll for core clocks stopped
        do
        {
            CME_GETSCOM(C_CPLT_STAT0, core, CME_SCOM_AND, scom_data);
        }
        while((~scom_data) & BIT64(8));

        PK_TRACE("Check core clock is stopped via CLOCK_STAT_SL[4-13]");
        CME_GETSCOM(C_CLOCK_STAT_SL, core, CME_SCOM_AND, scom_data);

        if (((~scom_data) & CLK_REGION_ALL_BUT_PLL) != 0)
        {
            PK_TRACE("Core clock stop failed");
            pk_halt();
        }

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE("SE2: Core Clock Stopped");

        //==============================
        MARK_TRAP(SE_STOP_CORE_GRID)
        //==============================

        PK_TRACE("SE2.n");
        // Drop clock sync enable before switch to refclk
        CME_PUTSCOM(CPPM_CACCR_CLR, core, BIT64(15));

        PK_TRACE("SE2.o");

        // Poll for clock sync done to drop
        do
        {
            CME_GETSCOM(CPPM_CACSR, core, CME_SCOM_OR, scom_data);
        }
        while(scom_data & BIT64(13));

        PK_TRACE("SE2.p");
        // Switch glsmux to refclk to save clock grid power
        CME_PUTSCOM(C_PPM_CGCR, core, 0);

        // Assert skew sense to skewadjust Fence
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(22));
        // Assert Vital Fence
        CME_PUTSCOM(C_CPLT_CTRL1_OR, core, BIT64(3));
        // Assert Regional Fences
        CME_PUTSCOM(C_CPLT_CTRL1_OR, core, BITS64(4, 11));
        /// @todo add DD1 attribute control
        PK_TRACE("DD1 only: reset sdis_n(flushing LCBES condition workaround");
        CME_PUTSCOM(C_CPLT_CONF0_CLEAR, core, BIT64(34));
        /// @todo add VDM_ENABLE attribute control
        PK_TRACE("Drop vdm enable via CPPM_VDMCR[0]");
        CME_PUTSCOM(PPM_VDMCR_CLR, core, BIT64(0));

        PK_TRACE("SE2: Clock Sync Dropped");

        // Copy PECE CME sample to PPM Shadow
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

        //===========================
        MARK_TAG(SE_STOP2_DONE, core)
        //===========================

        PK_TRACE("SE2.q");
        // Update Stop History: In Core Stop Level 2
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
            origin_core  = core;
            origin_level = target_level;
            core = core_catchup;
            catchup_ongoing = 1;

            //========================
            MARK_TAG(SE_CATCHUP, core)
            //========================
        }

        PK_TRACE("core[%d] running[%d] core_catchup[%d] origin_core[%d]",
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

        PK_TRACE("core[%d] running[%d] core_aborted[%d]",
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

        PK_TRACE("SE2+:core[%d],deeper_core[%d],\
                  target_level[%d],deeper_level[%d]",
                 core, deeper_core, target_level, deeper_level);

        //----------------------------------------------------------------------
        // STOP LEVEL 3
        //----------------------------------------------------------------------

        if (target_level == 3)
        {

            //==========================
            MARK_TAG(SE_CORE_VMIN, core)
            //==========================

            PK_TRACE("SE3.a");
            // Enable IVRM if not already

            PK_TRACE("SE3.b");

            // Drop to Vmin
            /*
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
        // STOP LEVEL 4
        //----------------------------------------------------------------------

        //===============================
        MARK_TAG(SE_POWER_OFF_CORE, core)
        //===============================

        // DD: Assert Cores Vital Thold/PCB Fence/Electrical Fence
        PK_TRACE("SE4.a");
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(25));
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(26));
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(16));

#if !STOP_PRIME

        // Prepare PFET Controls
        // vdd_pfet_val/sel_override     = 0 (disbaled)
        // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
        PK_TRACE("SE4.c");
        CME_PUTSCOM(PPM_PFCS_CLR, core, BIT64(4) | BIT64(5) | BIT64(8));

        // Power Off Core VDD
        // vdd_pfet_force_state = 01 (Force Voff)
        PK_TRACE("SE4.d");
        CME_PUTSCOM(PPM_PFCS_OR, core, BIT64(1));

        // Poll for power gate sequencer state: 0x8 (FSM Idle)
        PK_TRACE("SE4.e");

        do
        {
            CME_GETSCOM(PPM_PFCS, core, CME_SCOM_AND, scom_data);
        }
        while(!(scom_data & BIT64(42)));

        // Turn Off Force Voff
        // vdd_pfet_force_state = 00 (Nop)
        PK_TRACE("SE4.g");
        CME_PUTSCOM(PPM_PFCS_CLR, core, BITS64(0, 2));

#endif

        PK_TRACE("SE4: Core Powered Off");

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

        PK_TRACE("SE4.h");
        // Update Stop History: In Core Stop Level 4
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

        PK_TRACE("core[%d] running[%d] core_aborted[%d]",
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

        PK_TRACE("SE4+:core[%d],deeper_core[%d],\
                  target_level[%d],deeper_level[%d]",
                 core, deeper_core, target_level, deeper_level);

        //----------------------------------------------------------------------
        // STOP LEVEL 5 (preparsion of STOP LEVEL 8 and above)
        //----------------------------------------------------------------------

        if ((G_cme_stop_record.req_level_c0 >= STOP_LEVEL_8) &&
            (G_cme_stop_record.req_level_c1 >= STOP_LEVEL_8))
        {

            //================================
            MARK_TAG(SE_PURGE_L2, CME_MASK_BC)
            //================================

            // Assert L2+NCU Purge and NCU tlbie quiesce
            // (chtm purge will be done in SGPE),
            // insert tlbie quiesce before ncu purge to avoid window condition
            // of ncu traffic still happening when purging starts
            PK_TRACE("SE5.1a");
            out32(CME_LCL_SICR_OR, BIT32(18) | BIT32(21));
            out32(CME_LCL_SICR_OR, BIT32(22));

            // todo: poll for tlbie quiesce done?

            // Poll for Purged Done
            PK_TRACE("SE5.1b");

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

                    PK_TRACE("L2 Purge aborted by core[%d]", core_aborted);
                    //=======================================
                    MARK_TAG(SE_PURGE_L2_ABORT, core_aborted)
                    //=======================================
                    // abort L2+NCU purges
                    out32(CME_LCL_SICR_OR, BIT32(19) | BIT32(23));
                }

#endif
            }
            while((in32(CME_LCL_EISR) & BITS32(22, 2)) != BITS32(22, 2));

            // Deassert L2+NCU Purges, their possible aborts
            PK_TRACE("SE5.1c");
            out32(CME_LCL_SICR_CLR, (BITS32(18, 2) | BITS32(22, 2)));

            PK_TRACE("SE5.1: L2/NCU/CHTM Purged");

            //===============================================================
            MARK_TAG(SE_PURGE_L2_DONE, core_aborted ? core_aborted : CME_MASK_BC)
            //===============================================================

            // if core = 3 aborted = 1, core = 2(sgpe handoff) aborted (cme wakeup)
            // if core = 1 aborted = 1, core = 0(break)        aborted (cme wakeup)
            // if core = 1 aborted = 2, core = 1(sgpe handoff) aborted (sgpe wakeup)
            if (core !=  core_aborted)
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

        // Update Stop History: In Core Stop Level 5
        PK_TRACE("SE5.2a");
        CME_STOP_UPDATE_HISTORY(core,
                                STOP_CORE_IS_GATED,
                                STOP_TRANS_CORE_PORTION,
                                target_level,
                                STOP_LEVEL_5,
                                STOP_REQ_DISABLE,
                                STOP_ACT_ENABLE);

        // Send PCB Interrupt per core
        PK_TRACE("SE5.2b");

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

        // Change PPM Wakeup to STOPGPE
        PK_TRACE("SE5.2c");
        CME_PUTSCOM(CPPM_CPMMR_OR, core, BIT64(13));

        PK_TRACE("SE5.2: Handed off to SGPE");

    }
    while(0);

    //--------------------------------------------------------------------------
    // END OF STOP ENTRY
    //--------------------------------------------------------------------------

    // Release PPM Write Protection
    CME_PUTSCOM(CPPM_CPMMR_CLR, core, BIT64(0));

    //============================
    MARK_TRAP(ENDSCOPE_STOP_ENTRY)
    //============================

    return CME_STOP_SUCCESS;
}
