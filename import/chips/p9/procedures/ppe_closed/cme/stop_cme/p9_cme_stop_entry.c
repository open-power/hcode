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

    int             rc                  = 0;
    uint8_t         core_aborted        = 0;
    uint8_t         core_catchup        = 0;
    uint8_t         catchup_ongoing     = 0;
    uint8_t         entry_ongoing       = 1;
    uint8_t         target_level;
    uint8_t         deeper_level        = 0;
    uint32_t        deeper_core         = 0;
    uint32_t        core;
    uint32_t        loop;
    uint32_t        pm_states;
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

    // override with partial good core mask
    core = core & G_cme_stop_record.cme_flags & CME_MASK_BC;

    PK_TRACE("SE0: Core Select[%d]", core);

    // Return error if None of both fired
    if (!core)
    {
        return CME_STOP_ENTRY_PM_NOT_ACTIVE;
    }

    //===================================
    MARK_TAG(BEGINSCOPE_STOP_ENTRY, core)
    //===================================

    do   // while(0) loop for stop flow control
    {

        //--------------------------------------------------------------------------
        // STOP LEVEL 1 (should be done by hardware)
        //--------------------------------------------------------------------------

        // Read SISR for pm_state_cX
        pm_states = in32_sh(CME_LCL_SISR);
        G_cme_stop_record.req_stop_c0 = (pm_states & BITS32(4, 4)) >> SHIFT32(7);
        G_cme_stop_record.req_stop_c1 = (pm_states & BITS32(8, 4)) >> SHIFT32(11);

        // pm_active AND waken_up   : pm_state = sisr (new state)
        // pm_active AND !waken_up  : pm_state = sisr (only with auto promote)
        // !pm_active AND waken_up  : pm_state = 0    (out dated state)
        // !pm_active AND !waken_up : pm_state = sisr (current state)
        if (~core & G_cme_stop_record.active_core & CME_MASK_C0)
        {
            G_cme_stop_record.req_stop_c0 = 0;
        }

        if (~core & G_cme_stop_record.active_core & CME_MASK_C1)
        {
            G_cme_stop_record.req_stop_c1 = 0;
        }

        G_cme_stop_record.active_core &= ~core;

        PK_TRACE("SE1: Request Stop Levels[%d %d]",
                 G_cme_stop_record.req_stop_c0, G_cme_stop_record.req_stop_c1);

        // Return error if target STOP level == 1(Nap)
        if((core == CME_MASK_C0 && G_cme_stop_record.req_stop_c0 <= STOP_LEVEL_1) ||
           (core == CME_MASK_C1 && G_cme_stop_record.req_stop_c1 <= STOP_LEVEL_1) ||
           (core == CME_MASK_BC && (G_cme_stop_record.req_stop_c0 <= STOP_LEVEL_1 ||
                                    G_cme_stop_record.req_stop_c1 <= STOP_LEVEL_1)))
        {
            return CME_STOP_ENTRY_STOP1_SENT_IRQ;
        }

        //--------------------------------------------------------------------------
        // STOP LEVEL 2
        //--------------------------------------------------------------------------

        PK_TRACE("SE2.a");
        // Disable fired Stop and corresponding Wakeup interrupts
        out32(CME_LCL_EIMR_OR, (CME_MASK_BC << SHIFT32(21)) |
              (core << SHIFT32(13)) |
              (core << SHIFT32(15)) |
              (core << SHIFT32(17)));

        PK_TRACE("SE2.b");
        // Also clear the status of the currently fired STOP interrupt(s)
        out32(CME_LCL_EISR_CLR, core << SHIFT32(21));

        PK_TRACE("SE2.c");
        // Request PCB Mux
        out32(CME_LCL_SICR_OR, core << SHIFT32(11));

        PK_TRACE("SE2.d");
        // Protect PPM Register Write
        CME_PUTSCOM(CPPM_CPMMR_OR, core, BIT64(0));

        // set target_level from pm_state for both cores or just one core
        target_level = (core == CME_MASK_C0) ? G_cme_stop_record.req_stop_c0 :
                       G_cme_stop_record.req_stop_c1;

        // If both cores are going into STOP but targeting different levels,
        if ((core == CME_MASK_BC) &&
            (G_cme_stop_record.req_stop_c0 != G_cme_stop_record.req_stop_c1))
        {
            // set target_level to the lighter level targeted by one core
            // set deeper_level to the deeper level targeted by deeper core
            deeper_level = G_cme_stop_record.req_stop_c0;
            deeper_core  = CME_MASK_C0;

            if (G_cme_stop_record.req_stop_c0 < G_cme_stop_record.req_stop_c1)
            {
                target_level = G_cme_stop_record.req_stop_c0;
                deeper_level = G_cme_stop_record.req_stop_c1;
                deeper_core  = CME_MASK_C1;
            }
        }

        PK_TRACE("SE2.e");
        // Update STOP History: In Transition of Entry
        // Set req_stop_level to target_level of either both or just one core
        CME_STOP_UPDATE_HISTORY(core,
                                STOP_CORE_READY_RUN,
                                STOP_TRANS_ENTRY,
                                target_level,
                                STOP_LEVEL_0,
                                STOP_REQ_ENABLE,
                                STOP_ACT_DISABLE);

        // Set req_stop_level to deeper_level for deeper core
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

        PK_TRACE("SE2: target_lv[%d], deeper_lv[%d], deeper_core[%d]",
                 target_level, deeper_level, deeper_core);

        //=============================
        MARK_TRAP(SE_POLL_PCBMUX_GRANT)
        //=============================

        PK_TRACE("SE2.f");

        // Poll Infinitely for PCB Mux Grant
        // MF: change watchdog timer in pk to ensure forward progress
        while((core & (in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

        PK_TRACE("SE2: PCB Mux Granted");

        //==========================
        MARK_TRAP(SE_STOP_CORE_CLKS)
        //==========================

        PK_TRACE("SE2.g");
        // Acknowledge the STOP Entry to PC with a pulse
        out32(CME_LCL_SICR_OR, core << SHIFT32(1));
        out32(CME_LCL_SICR_CLR, core << SHIFT32(1));

        PK_TRACE("SE2.h");
        // Raise Core-L2 + Core-CC Quiesces
        out32(CME_LCL_SICR_OR, (core << SHIFT32(7)) | (core << SHIFT32(9)));

        PK_TRACE("SE2.i");
        // Waits quiesce done for at least 512 core cycles
        // MF: verify generate FCB otherwise math is wrong.
        PPE_WAIT_CORE_CYCLES(loop, 512)

        PK_TRACE("SE2.j");
        // Raise Core Chiplet Fence
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(18));

        PK_TRACE("SE2.k");
        // Set all bits to zero prior stop core clocks
        CME_PUTSCOM(C_SCAN_REGION_TYPE, core, 0);

        PK_TRACE("SE2.l");
        // Stop Core Clocks
        CME_PUTSCOM(C_CLK_REGION, core, 0x9FFC00000000E000);

        PK_TRACE("SE2.m");

        // Poll for core clocks stopped
        do
        {
            CME_GETSCOM(C_CLOCK_STAT_SL, core, CME_SCOM_AND, scom_data);
        }
        while((scom_data & BITS64(4, 10)) != BITS64(4, 10));

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE("SE2: Core Clock Stopped");

        //=========================
        MARK_TRAP(SE_DROP_CLK_SYNC)
        //=========================

        PK_TRACE("SE2.n");
        // Drop clock sync enable before switch to refclk
        CME_PUTSCOM(CPPM_CACCR_CLR, core, BIT64(15));

#if !EPM_P9_TUNING
        PK_TRACE("SE2.o");

        // Poll for clock sync done to drop
        do
        {
            CME_GETSCOM(CPPM_CACSR, core, CME_SCOM_OR, scom_data);
        }
        while(scom_data & BIT64(13));

#endif

        PK_TRACE("SE2.p");
        // Switch glsmux to refclk to save clock grid power
        CME_PUTSCOM(C_PPM_CGCR, core, BIT64(3));

        // Assert PCB Fence
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(25));

        PK_TRACE("SE2.q");
        // Update Stop History: In Core Stop Level 2
        // Check if STOP level 2 reaches the target for both or one core
        entry_ongoing =
            target_level == STOP_LEVEL_2 ? STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;
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

        if (core & CME_MASK_C0)
        {
            G_cme_stop_record.act_stop_c0 = STOP_LEVEL_2;
        }

        if (core & CME_MASK_C1)
        {
            G_cme_stop_record.act_stop_c1 = STOP_LEVEL_2;
        }

        PK_TRACE("SE2: Clock Sync Dropped");

        //===========================
        MARK_TAG(SE_STOP2_DONE, core)
        //===========================

        //===========================
        MARK_TRAP(SE_IS0_BEGIN)
        //===========================
#if !SKIP_ABORT
        out32(CME_LCL_EIMR_CLR, /*TODO(core << SHIFT32(13)) |*/
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

        core_aborted = 0;

        if ((core & CME_MASK_C0) &&
            G_cme_stop_record.act_stop_c0 == STOP_LEVEL_0 &&
            G_cme_stop_record.req_stop_c0 != STOP_LEVEL_0)
        {
            core_aborted |= CME_MASK_C0;
            core -= CME_MASK_C0;
            deeper_core = 0;

            if (deeper_core == CME_MASK_C1)
            {
                target_level = deeper_level;
            }

        }

        if ((core & CME_MASK_C1) &&
            G_cme_stop_record.act_stop_c1 == STOP_LEVEL_0 &&
            G_cme_stop_record.req_stop_c1 != STOP_LEVEL_0)
        {
            core_aborted |= CME_MASK_C1;
            core -= CME_MASK_C1;
            deeper_core = 0;

            if (deeper_core == CME_MASK_C0)
            {
                target_level = deeper_level;
            }
        }

        if (!core)
        {
            core |= core_aborted;
            entry_ongoing = 0;
            break;
        }

        if (catchup_ongoing)
        {
            core = CME_MASK_BC;
            break;
        }

#if !SKIP_CATCHUP
        core_catchup = (in32(CME_LCL_EISR) & BITS32(20, 2)) >> SHIFT32(21);
#endif

        if (core_catchup > core)
        {
            core = core_catchup - core;
            catchup_ongoing = 1;
        }

    }
    while(catchup_ongoing);

    do
    {

        // If we are done at STOP level 2 or aborted
        if (!entry_ongoing)
        {
            break;
        }

        PK_TRACE("SE2+:core[%d],deeper_core[%d],\
                  target_level[%d],deeper_level[%d]",
                 core, deeper_core, target_level, deeper_level);

        //--------------------------------------------------------------------------
        // STOP LEVEL 3
        //--------------------------------------------------------------------------

        if (target_level == 3)
        {

            //==========================
            MARK_TAG(SE_CORE_VMIN, core)
            //==========================

            PK_TRACE("SE3.a");
            // Enable IVRM if not already

            PK_TRACE("SE3.b");
            // Drop to Vmin

            PK_TRACE("SE3.c");
            // Update Stop History: In Core Stop Level 3
            CME_STOP_UPDATE_HISTORY(core,
                                    STOP_CORE_IS_GATED,
                                    STOP_TRANS_COMPLETE,
                                    target_level,
                                    STOP_LEVEL_3,
                                    STOP_REQ_DISABLE,
                                    STOP_ACT_ENABLE);

            // If both cores targeting different levels
            // deeper core should have at least deeper stop level than 3
            // only need to modify deeper core history if another one was done
            if (deeper_core)
            {
                CME_STOP_UPDATE_HISTORY(deeper_core,
                                        STOP_CORE_IS_GATED,
                                        STOP_TRANS_ENTRY,
                                        deeper_level,
                                        STOP_LEVEL_2,
                                        STOP_REQ_DISABLE,
                                        STOP_ACT_ENABLE);
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

            if(core & CME_MASK_C0)
            {
                G_cme_stop_record.act_stop_c0 = STOP_LEVEL_3;
            }

            if(core & CME_MASK_C1)
            {
                G_cme_stop_record.act_stop_c1 = STOP_LEVEL_3;
            }

            //===========================
            MARK_TAG(SE_STOP3_DONE, core)
            //===========================

            // If we are done at STOP level 3
            if (!entry_ongoing)
            {
                break;
            }
        }

        //--------------------------------------------------------------------------
        // STOP LEVEL 4
        //--------------------------------------------------------------------------

        //===============================
        MARK_TAG(SE_POWER_OFF_CORE, core)
        //===============================

#if !STOP_PRIME
        // Assert Cores Electrical Fences
        PK_TRACE("SE4.a");
        CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(26));

        // Make sure we are not forcing PFET for VDD off
        // vdd_pfet_force_state == 00 (Nop)
        PK_TRACE("SE4.b");
        CME_GETSCOM(PPM_PFCS, core, CME_SCOM_AND, scom_data);

        if (scom_data & BITS64(0, 2))
        {
            return CME_STOP_ENTRY_VDD_PFET_NOT_IDLE;
        }

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

#if !EPM_P9_TUNING
        // Optional: Poll for vdd_pg_sel being: 0x8
        PK_TRACE("SE4.f");

        do
        {
            CME_GETSCOM(PPM_PFCS, core, CME_SCOM_AND, scom_data);
        }
        while(!(scom_data & BIT64(46)));

#endif

        // Turn Off Force Voff
        // vdd_pfet_force_state = 00 (Nop)
        PK_TRACE("SE4.g");
        CME_PUTSCOM(PPM_PFCS_CLR, core, BITS64(0, 2));
#endif

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
        // deeper core should have at least deeper stop level than 2
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

        if (core & CME_MASK_C0)
        {
            G_cme_stop_record.act_stop_c0 = STOP_LEVEL_4;
        }

        if (core & CME_MASK_C1)
        {
            G_cme_stop_record.act_stop_c1 = STOP_LEVEL_4;
        }

        PK_TRACE("SE4: Core Powered Off");

        //===========================
        MARK_TAG(SE_STOP4_DONE, core)
        //===========================

        //===========================
        MARK_TRAP(SE_IS1_BEGIN)
        //===========================
#if !SKIP_ABORT
        out32(CME_LCL_EIMR_CLR, /*TODO(core << SHIFT32(13)) |*/
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

        if ((core & CME_MASK_C0) &&
            G_cme_stop_record.act_stop_c0 == STOP_LEVEL_0 &&
            G_cme_stop_record.req_stop_c0 != STOP_LEVEL_0)
        {
            core_aborted |= CME_MASK_C0;
            core -= CME_MASK_C0;
            deeper_core = 0;

            if (deeper_core == CME_MASK_C1)
            {
                target_level = deeper_level;
            }

        }

        if ((core & CME_MASK_C1) &&
            G_cme_stop_record.act_stop_c1 == STOP_LEVEL_0 &&
            G_cme_stop_record.req_stop_c1 != STOP_LEVEL_0)
        {
            core_aborted |= CME_MASK_C1;
            core -= CME_MASK_C1;
            deeper_core = 0;

            if (deeper_core == CME_MASK_C0)
            {
                target_level = deeper_level;
            }
        }

        if (!core)
        {
            core |= core_aborted;
            entry_ongoing = 0;
        }

        // If we are done at STOP level 4 or aborted
        if (!entry_ongoing)
        {
            break;
        }

        PK_TRACE("SE4+:core[%d],deeper_core[%d],\
                  target_level[%d],deeper_level[%d]",
                 core, deeper_core, target_level, deeper_level);

        //--------------------------------------------------------------------------
        // STOP LEVEL 5 (preparsion of STOP LEVEL 8 and above)
        //--------------------------------------------------------------------------

        // block all wake up before purge L2,
        // this is last chance either core can exit
        out32(CME_LCL_EIMR_OR, BITS32(12, 6));

        if ((G_cme_stop_record.req_stop_c0 >= STOP_LEVEL_8) &&
            (G_cme_stop_record.req_stop_c1 >= STOP_LEVEL_8))
        {

            //=========================
            MARK_TAG(SE_PURGE_L2, core)
            //=========================

            // Assert L2+NCU Purges(chtm purge will be done in SGPE),
            // and NCU tlbie quiesce
            PK_TRACE("SE5.1a");
            out32(CME_LCL_SICR_OR, BIT32(18) | BIT32(21) | BIT32(22));

            // todo: poll for tlbie quiesce done?

            // Poll for Purged Done
            PK_TRACE("SE5.1b");
            //===========================
            MARK_TRAP(SE_IS2_BEGIN)

            //===========================
            do
            {
#if !SKIP_ABORT

                if(in32(CME_LCL_EINR) & BITS32(12, 6))
                {
                    // abort L2+NCU purges
                    out32(CME_LCL_SICR_OR, BIT32(19) | BIT32(23));
                }

#endif
            }
            while((in32(CME_LCL_EISR) & BITS32(22, 2)) != BITS32(22, 2));

            //===================
            MARK_TRAP(SE_IS2_END)
            //===================

            // Deassert L2+NCU Purges, their possible aborts, NCU tlbie quiesce
            PK_TRACE("SE5.1c");
            out32(CME_LCL_SICR_CLR, BITS32(18, 6));

            PK_TRACE("SE5.1: L2/NCU/CHTM Purged");

            //=========================
            MARK_TRAP(SE_L2_PURGE_DONE)
            //=========================
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

        if (core & CME_MASK_C0)
        {
            G_cme_stop_record.act_stop_c0 = STOP_LEVEL_5;
        }

        if (core & CME_MASK_C1)
        {
            G_cme_stop_record.act_stop_c1 = STOP_LEVEL_5;
        }

        // Send PCB Interrupt per core
        PK_TRACE("SE5.2b");
        pig.fields.req_intr_type = 2; //0b010: STOP State Change

        if (core & CME_MASK_C0)
        {
            pig.fields.req_intr_payload = G_cme_stop_record.req_stop_c0;
            CME_PUTSCOM(PPM_PIG, CME_MASK_C0, pig.value);
        }

        if (core & CME_MASK_C1)
        {
            pig.fields.req_intr_payload = G_cme_stop_record.req_stop_c1;
            CME_PUTSCOM(PPM_PIG, CME_MASK_C1, pig.value);
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

    // Enable Wakeup Interrupts of this entry core if no handoff to SGPE
    // Otherwise enable Doorbell interrupts of this entry core
    out32(CME_LCL_EIMR_CLR,
          ((~core & G_cme_stop_record.active_core & CME_MASK_BC) << SHIFT32(21)));

    if (!entry_ongoing)
        out32(CME_LCL_EIMR_CLR,
              /*TODO((core & ~core_aborted & CME_MASK_BC) << SHIFT32(13)) |*/
              ((core & ~core_aborted & CME_MASK_BC) << SHIFT32(15)) |
              ((core & ~core_aborted & CME_MASK_BC) << SHIFT32(17)));
    else
    {
        out32_sh(CME_LCL_EIMR_CLR, (core << SHIFT32((41 - 32))));
    }

    //============================
    MARK_TRAP(ENDSCOPE_STOP_ENTRY)
    //============================

    return CME_STOP_SUCCESS;
}
