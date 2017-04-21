/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_exit.c $ */
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

#include "p9_cme_stop.h"
#include "p9_cme_stop_exit_marks.h"
#include "p9_cme_copy_scan_ring.h"

extern CmeStopRecord G_cme_stop_record;

#if HW386841_NDD1_DSL_STOP1_FIX

uint8_t G_dsl[MAX_CORES_PER_CME][MAX_THREADS_PER_CORE] = {{0, 0, 0, 0}, {0, 0, 0, 0}};

#endif

void p9_cme_stop_exit_end(uint32_t core, uint32_t spwu_stop)
{
    uint32_t     core_mask         = 0;
    uint32_t     act_stop_level    = 0;
    data64_t     scom_data         = {0};
#if HW386841_NDD1_DSL_STOP1_FIX
    uint8_t      srr1[MAX_THREADS_PER_CORE] = {0, 0, 0, 0};
    uint32_t     pscrs             = 0;
    uint32_t     bitloc            = 0;
    uint32_t     thread            = 0;
    uint32_t     temp_dsl          = 0;
    uint32_t     temp_srr1         = 0;
    uint32_t     core_index        = 0;
#endif

    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ END OF STOP EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    PK_TRACE_DBG("Restore PSSCR.PLS+SRR1 back to actual level");

#if HW386841_NDD1_DSL_STOP1_FIX

    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(PPM_SSHSRC, core_mask, CME_SCOM_AND, scom_data.value);

            core_index            = core_mask & 1;
            act_stop_level        = (scom_data.words.upper & BITS32(8, 4)) >> SHIFT32(11);
            scom_data.words.lower = (BIT64SH(32) | BIT64SH(40) | BIT64SH(48) | BIT64SH(56));
            scom_data.words.upper = 0;

            for (thread = 0, bitloc = 36;
                 thread < MAX_THREADS_PER_CORE;
                 thread++,   bitloc += 8)
            {
                // address are 0x20 apart between threads and 0x80 apart between cores
                pscrs = in32((CME_LCL_PSCRS00 + (core_index << 7) + (thread << 5)));

                PK_TRACE_DBG("Old DSL[%d] of Core[%d] Thread[%d], current PSCRS[%x]",
                             G_dsl[core_index][thread], core_index, thread, pscrs);

                // Calculate new DSL
                temp_dsl  = 0;
                temp_srr1 = NO_STATE_LOSS;

                if (pscrs & BIT32(2))
                {
                    temp_srr1 = SOME_STATE_LOSS_BUT_NOT_TIMEBASE;
                    temp_dsl  = ((pscrs & BITS32(20, 4)) >> SHIFT32(23));

                    if (temp_dsl >= STOP_LEVEL_11)
                    {
                        temp_dsl = STOP_LEVEL_11;
                    }
                    else if (temp_dsl >= STOP_LEVEL_8)
                    {
                        temp_dsl = STOP_LEVEL_8;
                    }
                    else if (temp_dsl >= STOP_LEVEL_4)
                    {
                        temp_dsl = STOP_LEVEL_4;
                    }
                    else if (temp_dsl >= STOP_LEVEL_2)
                    {
                        temp_dsl = STOP_LEVEL_2;
                    }
                }

                G_dsl[core_index][thread] =
                    MIN(temp_dsl, MAX(act_stop_level, G_dsl[core_index][thread]));

                PK_TRACE_DBG("New DSL[%d]", G_dsl[core_index][thread]);

                // Calculate new SRR1
                if (G_dsl[core_index][thread] >= STOP_LEVEL_8)
                {
                    srr1[thread] = MOST_STATE_LOSS;
                }
                else if (G_dsl[core_index][thread] >= STOP_LEVEL_4)
                {
                    srr1[thread] = SOME_STATE_LOSS_BUT_NOT_TIMEBASE;
                }
                else
                {
                    srr1[thread] = temp_srr1;
                }

                PK_TRACE_DBG("Srr1[%d]", srr1[thread]);

                // 36-39|44-47|52-55|60-63
                scom_data.words.lower |=
                    ((((uint32_t)G_dsl[core_index][thread]) << SHIFT64SH(bitloc)) |
                     (((uint32_t)srr1[thread]) << SHIFT64SH((bitloc + 3))));
            }

            // Report PLS+SRR1
            CME_PUTSCOM(DIRECT_CONTROLS, core_mask, scom_data.value);
        }
    }

#else

    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(PPM_SSHSRC, core_mask, CME_SCOM_AND, scom_data.value);

            act_stop_level = (scom_data.words.upper & BITS32(8, 4)) >> SHIFT32(11);
            scom_data.words.upper = 0;

            if (act_stop_level >= STOP_LEVEL_8)
            {
                // MOST_STATE_LOSS(3) + b32/40/48/56
                scom_data.words.lower =
                    ((BIT64SH(32) | BITS64SH(38, 3) | BITS64SH(46, 3)  |
                      BITS64SH(54, 3) | BITS64SH(62, 2)) |
                     (act_stop_level << SHIFT64SH(36)) |
                     (act_stop_level << SHIFT64SH(44)) |
                     (act_stop_level << SHIFT64SH(52)) |
                     (act_stop_level << SHIFT64SH(60)));
            }
            else if (act_stop_level >= STOP_LEVEL_4)
            {
                // SOME_STATE_LOSS_BUT_NOT_TIMEBASE(2)
                scom_data.words.lower =
                    ((BIT64SH(32) | BIT64SH(40) | BIT64SH(48) | BIT64SH(56)) |
                     (BIT64SH(38) | BIT64SH(46) | BIT64SH(54) | BIT64SH(62)) |
                     (act_stop_level << SHIFT64SH(36)) |
                     (act_stop_level << SHIFT64SH(44)) |
                     (act_stop_level << SHIFT64SH(52)) |
                     (act_stop_level << SHIFT64SH(60)));
            }
            else
            {
                // SOME_STATE_LOSS_BUT_NOT_TIMEBASE(2) vs NO_STATE_LOSS(1)
                scom_data.words.lower =
                    ((BIT64SH(32) | BIT64SH(40) | BIT64SH(48) | BIT64SH(56)) |
                     (act_stop_level << SHIFT64SH(36)) |
                     (act_stop_level << SHIFT64SH(44)) |
                     (act_stop_level << SHIFT64SH(52)) |
                     (act_stop_level << SHIFT64SH(60)) |
                     (((in32(CME_LCL_PSCRS00) & BIT32(2)) ?
                       SOME_STATE_LOSS_BUT_NOT_TIMEBASE : NO_STATE_LOSS) << SHIFT64SH(39)) |
                     (((in32(CME_LCL_PSCRS10) & BIT32(2)) ?
                       SOME_STATE_LOSS_BUT_NOT_TIMEBASE : NO_STATE_LOSS) << SHIFT64SH(47)) |
                     (((in32(CME_LCL_PSCRS20) & BIT32(2)) ?
                       SOME_STATE_LOSS_BUT_NOT_TIMEBASE : NO_STATE_LOSS) << SHIFT64SH(55)) |
                     (((in32(CME_LCL_PSCRS30) & BIT32(2)) ?
                       SOME_STATE_LOSS_BUT_NOT_TIMEBASE : NO_STATE_LOSS)));
            }

            CME_PUTSCOM(DIRECT_CONTROLS, core_mask, scom_data.value);
        }
    }

#endif

    PK_TRACE_INF("SX.0A: Core[%d] Waking up(pm_exit=1) via SICR[4/5]", core);
    out32(CME_LCL_SICR_OR, core << SHIFT32(5));

    PK_TRACE_DBG("Polling for Core Waking up(pm_active=0) via EINR[20/21]");

    while((in32(CME_LCL_EINR)) & (core << SHIFT32(21)));

#if defined(USE_CME_QUEUED_SCOM) && defined(USE_PPE_IMPRECISE_MODE)

    // execute sync before change pcbmux to prevent queued scom issues
    sync();

#endif

    PK_TRACE("Release PCB Mux back on Core via SICR[10/11]");
    out32(CME_LCL_SICR_CLR, core << SHIFT32(11));

    while((core & ~(in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

    PK_TRACE("PCB Mux Released on Core[%d]", core);

    PK_TRACE("Update STOP history: STOP exit completed, core ready");
    scom_data.words.lower = 0;
    scom_data.words.upper = SSH_EXIT_COMPLETE;
    CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);

    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            G_cme_stop_record.req_level[core_mask & 1] = 0;
            G_cme_stop_record.act_level[core_mask & 1] = 0;
        }
    }

    G_cme_stop_record.core_running |=  core;
    G_cme_stop_record.core_stopgpe &= ~core;
    G_cme_stop_record.core_blockpc &= ~core;

    PK_TRACE_DBG("Drop halt STOP override disable via LMCR[14/15]");
    out32(CME_LCL_LMCR_CLR, (core << SHIFT32(15)));

#if SPWU_AUTO

    PK_TRACE_DBG("Drop auto spwu disable, enable auto spwu via LMCR[12/13]");
    out32(CME_LCL_LMCR_CLR, core << SHIFT32(13));

    PK_TRACE_INF("SX.0B: Core Drop PM_EXIT via SICR[4/5]");
    out32(CME_LCL_SICR_CLR, core << SHIFT32(5));

#else

    if (spwu_stop)
    {
        // done = spwu + !pm_active + !core_chiplet_fence + !pcbmux_req + !pcbmux_grant
        // chiplet fence forces pm_active to zero
        // Note: pm_exit is asserted above for every core waking up including spwu
        PK_TRACE_INF("SX.0B: Core[%d] Assert SPWU_DONE via SICR[16/17]", spwu_stop);
        out32(CME_LCL_EISR_CLR, spwu_stop << SHIFT32(15));  // clear spwu in EISR
        out32(CME_LCL_EIPR_CLR, spwu_stop << SHIFT32(15));  // flip EIPR to falling edge
        out32(CME_LCL_SICR_OR,  spwu_stop << SHIFT32(17));  // assert spwu_done now
        G_cme_stop_record.core_in_spwu |= spwu_stop;
    }

    if ((core = (core & (~spwu_stop))))
    {
        PK_TRACE_INF("SX.0C: Core[%d] isnt SPWUed, Drop PM_EXIT via SICR[4/5]", core);
        out32(CME_LCL_SICR_CLR, core << SHIFT32(5));
    }

#endif

}


void p9_cme_stop_exit_lv2(uint32_t core)
{
    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ STOP LEVEL 2 EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    //============================
    MARK_TAG(SX_STARTCLOCKS, core)
    //============================

    // do this again here for stop2 in addition to chiplet_reset
    // Note IPL doesnt need to do this twice
    PK_TRACE("Assert core glitchless mux to DPLL via CGCR[3]");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(3));

    // do this after assert glsmux so glitch can have time to resolve
    // catchup to stop2 exit will acquire here

#if HW405292_NDD1_PCBMUX_SAVIOR

    p9_cme_pcbmux_savior_prologue(core);

#endif

    PK_TRACE("SX.20: Request PCB mux via SICR[10/11]");
    out32(CME_LCL_SICR_OR, core << SHIFT32(11));

    // Poll Infinitely for PCB Mux Grant
    // MF: change watchdog timer in pk to ensure forward progress
    while((core & (in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

    PK_TRACE("SX.20: PCB Mux Granted on Core[%d]", core);

#if HW405292_NDD1_PCBMUX_SAVIOR

    p9_cme_pcbmux_savior_epilogue(core);

#endif

    PK_TRACE_INF("SX.2A: Core[%d] Start Clock", core);
    p9_hcd_core_startclocks(core);

    PK_TRACE("Clear CPPM PECE shadow via PECES");
    CME_PUTSCOM(CPPM_PECES, core, 0);
}



#if !SKIP_EXIT_CATCHUP

int
p9_cme_stop_exit_catchup(uint32_t* core,
                         uint32_t* deeper_core,
                         uint32_t* spwu_stop,
                         uint8_t*  target_level,
                         int*      d2u4_flag)
{
    int      rc            = 0;
    uint8_t  catchup_level = 0;
    uint32_t core_mask     = 0;
    uint32_t core_catchup  = 0;
    uint32_t wakeup        = 0;
    data64_t scom_data     = {0};

    wakeup = (in32(CME_LCL_EISR) >> SHIFT32(17)) & 0x3F;
    core_catchup = (~(*core)) &
                   ((wakeup >> 4) | (wakeup >> 2) | wakeup);
    core_catchup = core_catchup & G_cme_stop_record.core_enabled &
                   (~G_cme_stop_record.core_running);

    for(core_mask = 2; core_mask; core_mask--)
    {
        if (core_catchup & core_mask)
        {
            CME_GETSCOM(CPPM_CPMMR, core_mask, CME_SCOM_AND, scom_data.value);

            if (scom_data.words.upper & BIT32(13))
            {
                core_catchup = core_catchup - core_mask;
            }
        }
    }

    if (core_catchup)
    {
        // chtm purge done
        out32(CME_LCL_EISR_CLR, (core_catchup << SHIFT32(25)));

        scom_data.words.lower = 0;
        scom_data.words.upper = SSH_EXIT_IN_SESSION;
        CME_PUTSCOM(PPM_SSHSRC, core_catchup, scom_data.value);

        catchup_level = (core_catchup & CME_MASK_C0)   ?
                        G_cme_stop_record.act_level[0] :
                        G_cme_stop_record.act_level[1] ;

        *spwu_stop |= (core_catchup) & (wakeup >> 2);

        PK_TRACE_DBG("Catch: core[%d] running[%d] \
                             core_catchup[%d] catchup_level[%d]",
                     *core, G_cme_stop_record.core_running,
                     core_catchup, catchup_level);

        if (catchup_level < STOP_LEVEL_4)
        {
            *target_level = catchup_level;
            *deeper_core  = *core;
            *d2u4_flag    = 1;
        }
        else
        {
            *core = core_catchup;
            rc    = 1;
        }
    }

    return rc;
}

#endif

void
p9_cme_stop_exit()
{
    int          d2u4_flag         = 0;
    int          catchup_ongoing_a = 0;
    int          catchup_ongoing_b = 0;
    uint8_t      target_level      = 0;
    uint8_t      deeper_level      = 0;
    uint32_t     deeper_core       = 0;
    uint32_t     wakeup            = 0;
    uint32_t     core              = 0;
    uint32_t     core_mask         = 0;
    data64_t     scom_data         = {0};
#if !SPWU_AUTO
    uint32_t     spwu_stop         = 0;
    uint32_t     spwu_wake         = 0;
#endif
#if HW386841_NDD1_DSL_STOP1_FIX
    uint32_t     core_stop1        = 0;
#endif

    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ BEGIN OF STOP EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    // extract wakeup signals, clear status, and mask wakeup interrupts
    wakeup = (in32(CME_LCL_EISR) >> SHIFT32(17)) & 0x3F;
    core   = ((wakeup >> 4) | (wakeup >> 2) | wakeup) & CME_MASK_BC;

    // ignore wakeup when it suppose to be handled by sgpe
    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(CPPM_CPMMR, core_mask, CME_SCOM_AND, scom_data.value);

            if (scom_data.words.upper & BIT32(13))
            {
                core = core - core_mask;
            }
        }
    }

    // override with partial good core mask, also ignore wakeup to running cores
    core = core & G_cme_stop_record.core_enabled &
           (~G_cme_stop_record.core_running);

    PK_TRACE_DBG("Check: Core Select[%d] Wakeup[%x] Actual Stop Levels[%d %d]",
                 core, wakeup,
                 G_cme_stop_record.act_level[0],
                 G_cme_stop_record.act_level[1]);



#if !SPWU_AUTO

    // for spwu assert, figure out who is already awake and who needs to exit
    // leaving spwu drop to the handler to process
    spwu_stop = (wakeup >> 2) & G_cme_stop_record.core_enabled &
                (~G_cme_stop_record.core_in_spwu);
    spwu_wake = spwu_stop &   G_cme_stop_record.core_running;
    spwu_stop = spwu_stop & (~G_cme_stop_record.core_running);

    if (spwu_wake)
    {
        // Process special wakeup on a core that is already running
        PK_TRACE_INF("SP.WU: Core[%d] Assert PM_EXIT and SPWU_DONE via SICR[4/5, 16/17]", spwu_wake);
        out32(CME_LCL_SICR_OR,  spwu_wake << SHIFT32(5));  // assert pm_exit
        out32(CME_LCL_EISR_CLR, spwu_wake << SHIFT32(15)); // clear spwu in EISR
        out32(CME_LCL_EIPR_CLR, spwu_wake << SHIFT32(15)); // flip EIPR to falling edge
        out32(CME_LCL_SICR_OR,  spwu_wake << SHIFT32(17)); // assert spwu_done now
        G_cme_stop_record.core_in_spwu |= spwu_wake;

        if (!core)
        {
            PK_TRACE_INF("WARNING: Only Freebie Special Wakeup Processed. Return");
            return;
        }
    }

#endif

    if (!core)
    {
        PK_TRACE_ERR("ERROR: No Wakeup Fired to a Stopped and Enabled Core. HALT CME!");
        PK_PANIC(CME_STOP_EXIT_PHANTOM_WAKEUP);
    }



    //==================================
    MARK_TAG(BEGINSCOPE_STOP_EXIT, core)
    //==================================

#if HW386841_NDD1_DSL_STOP1_FIX

    // figure out who needs stop1 exit
    for (core_mask = 2; core_mask; core_mask--)
    {
        if((core & core_mask) &&
           G_cme_stop_record.act_level[core_mask & 1] == STOP_LEVEL_1)
        {
            core_stop1 |= core_mask;
        }
    }

    if (core_stop1)
    {
        PK_TRACE_INF("SX.1A: Core[%d] Requested Stop1 Exit", core_stop1);
        p9_cme_stop_exit_end(core_stop1, spwu_stop);

        core = core - core_stop1;

        if (!core)
        {
            //===========================
            MARK_TRAP(ENDSCOPE_STOP_EXIT)
            //===========================

            return;
        }
    }

#endif



    // set target_level to STOP level for c0
    // unless c1(also or only) wants to wakeup
    target_level = deeper_level =
                       (core == CME_MASK_C0) ? G_cme_stop_record.act_level[0] :
                       G_cme_stop_record.act_level[1];

    // If both cores want to wakeup but are in different STOP levels,
    // set deeper_level to the deeper level targeted by deeper core
    if ((core == CME_MASK_BC) &&
        (G_cme_stop_record.act_level[0] != G_cme_stop_record.act_level[1]))
    {
        // Assume C0 is deeper, target_level is already set to C1
        deeper_level = G_cme_stop_record.act_level[0];
        deeper_core  = CME_MASK_C0;

        // Otherwise correct assumption on which one is in lighter level
        if (G_cme_stop_record.act_level[0] < G_cme_stop_record.act_level[1])
        {
            target_level = G_cme_stop_record.act_level[0];
            deeper_level = G_cme_stop_record.act_level[1];
            deeper_core  = CME_MASK_C1;
        }
    }

    PK_TRACE_DBG("Check: core[%d] target_lv[%d], deeper_lv[%d], deeper_c[%d]",
                 core, target_level, deeper_level, deeper_core);

    PK_TRACE("Clear chtm purge done via EISR[24/25]");
    out32(CME_LCL_EISR_CLR, (core << SHIFT32(25)));

    PK_TRACE("Update STOP history: in transition of exit");
    scom_data.words.lower = 0;
    scom_data.words.upper = SSH_EXIT_IN_SESSION;
    CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);

    if (target_level == STOP_LEVEL_2)
    {
        core = core - deeper_core;

        p9_cme_stop_exit_lv2(core);

        PK_TRACE("Drop chiplet fence via NC0INDIR[18]");
        CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(18));

        p9_cme_stop_exit_end(core, spwu_stop);

        core         = deeper_core;
        target_level = deeper_level;

        if (!core)
        {
            //===========================
            MARK_TRAP(ENDSCOPE_STOP_EXIT)
            //===========================

            return;
        }
    }

    if (deeper_level >= STOP_LEVEL_4)
    {

        //--------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ STOP LEVEL 4 EXIT +++++ +++++");
        //--------------------------------------------------------------------------

        // if deeper_core is set, then core must be 0b11
        if (deeper_core && target_level < STOP_LEVEL_4)
        {
            d2u4_flag = 1;
            core      = deeper_core;
        }

        do   //catchup loop
        {

#if !SKIP_BCE_SCOM_RESTORE

            PK_TRACE_DBG("BCE Runtime Kickoff to Copy Scom Restore");
            //right now a blocking call. Need to confirm this.
            instance_scom_restore();

#endif

            // Can't do the read of cplt_stat after flipping the mux before the core is powered on
            // catchup to stop4 exit will acquire here

#if HW405292_NDD1_PCBMUX_SAVIOR

            p9_cme_pcbmux_savior_prologue(core);

#endif

            PK_TRACE("SX.40: Request PCB mux via SICR[10/11]");
            out32(CME_LCL_SICR_OR, core << SHIFT32(11));

            // Poll Infinitely for PCB Mux Grant
            // MF: change watchdog timer in pk to ensure forward progress
            while((core & (in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

            PK_TRACE("SX.40: PCB Mux Granted on Core[%d]", core);

            // Note: in this case, no need to call p9_cme_pcbmux_savior_epilogue

            //========================
            MARK_TAG(SX_POWERON, core)
            //========================

            PK_TRACE_INF("SX.4A: Core[%d] Poweron", core);
            p9_hcd_core_poweron(core);

            //=========================
            MARK_TRAP(SX_CHIPLET_RESET)
            //=========================

            PK_TRACE_INF("SX.4B: Core Chiplet Reset");
            p9_hcd_core_chiplet_reset(core);

#if !STOP_PRIME
#if !SKIP_EXIT_CATCHUP

            if (catchup_ongoing_a && (!catchup_ongoing_b))
            {
                core = CME_MASK_BC;
                catchup_ongoing_a = 0;
            }
            else if ((core != CME_MASK_BC) && (!deeper_core) && (!catchup_ongoing_b))
            {
                if (p9_cme_stop_exit_catchup(&core,
                                             &deeper_core,
                                             &spwu_stop,
                                             &target_level,
                                             &d2u4_flag))
                {
                    //==========================
                    MARK_TAG(SX_CATCHUP_A, core)
                    //==========================
                    catchup_ongoing_a = 1;
                    continue;
                }
            }

#endif

            //==============================
            MARK_TAG(SX_CHIPLET_INITS, core)
            //==============================


#if !SKIP_INITF

            PK_TRACE_INF("SX.4C: Core[%d] Gptr/Time Initf after catchup A", core);
            p9_hcd_core_gptr_time_initf(core);

#endif

            PK_TRACE_DBG("Core Chiplet Inits");
            p9_hcd_core_chiplet_init(core);

#if !SKIP_INITF

            PK_TRACE_INF("SX.4D: Core Repair Initf");
            p9_hcd_core_repair_initf(core);

#endif

#if !SKIP_EXIT_CATCHUP

            if (catchup_ongoing_b)
            {
                core = CME_MASK_BC;
                catchup_ongoing_b = 0;
            }
            else if ((core != CME_MASK_BC) && (!deeper_core))
            {
                if (p9_cme_stop_exit_catchup(&core,
                                             &deeper_core,
                                             &spwu_stop,
                                             &target_level,
                                             &d2u4_flag))
                {
                    //==========================
                    MARK_TAG(SX_CATCHUP_B, core)
                    //==========================
                    catchup_ongoing_b = 1;
                    continue;
                }
            }

#endif

            //===========================
            MARK_TAG(SX_ARRAY_INIT, core)
            //===========================

#if !SKIP_ARRAYINIT

            PK_TRACE_INF("SX.4E: Core[%d] Array Init after catchup B", core);
            p9_hcd_core_arrayinit(core);

#endif

            //=====================
            MARK_TRAP(SX_FUNC_INIT)
            //=====================

#if !SKIP_INITF

            PK_TRACE_INF("SX.4F: Core Func Scan");
            p9_hcd_core_initf(core);

#endif
#endif

        }
        while(catchup_ongoing_a || catchup_ongoing_b);

        if (d2u4_flag)
        {
            core = CME_MASK_BC;
        }
    }



    if (deeper_level == STOP_LEVEL_3 || target_level == STOP_LEVEL_3)
    {
        //--------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ STOP LEVEL 3 EXIT +++++ +++++");
        //--------------------------------------------------------------------------

        //======================
        MARK_TAG(SX_STOP3, core)
        //======================

        PK_TRACE_DBG("SX.3A: Core[%d] Return to Full Voltage", core);
        //disable ivrm?
    }

    p9_cme_stop_exit_lv2(core);

    if (target_level < STOP_LEVEL_4)
    {
        if (deeper_core && deeper_level == STOP_LEVEL_4)
        {
            PK_TRACE_DBG("Core[%d] Dropping Chiplet Fence via NC0INDIR[18] with deeper_core[%d]",
                         (CME_MASK_BC - deeper_core), deeper_core);
            CME_PUTSCOM(CPPM_NC0INDIR_CLR, (CME_MASK_BC - deeper_core), BIT64(18));
        }
        else
        {
            PK_TRACE_DBG("Core[%d] Dropping Chiplet Fence via NC0INDIR[18]", core);
            CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(18));
        }
    }

    if (deeper_level >= STOP_LEVEL_4)
    {

        //--------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ STOP LEVEL 4 EXIT CONTINUE +++++ +++++");
        //--------------------------------------------------------------------------

        if (d2u4_flag)
        {
            core = deeper_core;
        }

#if !STOP_PRIME

        //===========================
        MARK_TAG(SX_SCOM_INITS, core)
        //===========================

        PK_TRACE_INF("SX.4G: Core[%d] Scom Inits", core);
        p9_hcd_core_scominit(core);

        //==========================
        MARK_TAG(SX_BCE_CHECK, core)
        //==========================

#if !SKIP_BCE_SCOM_RESTORE

        PK_TRACE_DBG("BCE Runtime Check Scom Restore Copy Completed");

        if( BLOCK_COPY_SUCCESS != isScanRingCopyDone() )
        {
            PK_TRACE_ERR("ERROR: BCE Scom Restore Copy Failed. HALT CME!");
            PK_PANIC(CME_STOP_EXIT_BCE_SCOM_FAILED);
        }

#endif

        PK_TRACE("Core XIP Customized Scoms");
        p9_hcd_core_scomcust(core);

        //==============================
        MARK_TAG(SX_RUNTIME_INITS, core)
        //==============================

        PK_TRACE("RAS Runtime Scom on Core", core);
        p9_hcd_core_ras_runtime_scom(core);

        PK_TRACE("OCC Runtime Scom on Core", core);
        p9_hcd_core_occ_runtime_scom(core);

#endif

        //=============================
        MARK_TAG(SX_SELF_RESTORE, core)
        //=============================

#if !SKIP_SELF_RESTORE

        PK_TRACE("Assert block interrupt to PC via SICR[2/3]");
        out32(CME_LCL_SICR_OR, core << SHIFT32(3));

        PK_TRACE_INF("SF.RS: Self Restore Prepare, Core Waking up(pm_exit=1) via SICR[4/5]");
        out32(CME_LCL_SICR_OR, core << SHIFT32(5));

        PK_TRACE("Polling for core wakeup(pm_active=0) via EINR[20/21]");

        while((in32(CME_LCL_EINR)) & (core << SHIFT32(21)));

        cmeHeader_t* pCmeImgHdr = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
        scom_data.value = pCmeImgHdr->g_cme_cpmr_PhyAddr & BITS64(13, 30); //HRMOR[13:42]

#if NIMBUS_DD_LEVEL == 1
#if !SKIP_RAM_HRMOR

        PK_TRACE("Activate thread0 for RAM via THREAD_INFO[18]");
        CME_PUTSCOM(THREAD_INFO, core, BIT64(18));

        PK_TRACE("Enable RAM mode via RAM_MODEREG[0]");
        CME_PUTSCOM(RAM_MODEREG, core, BIT64(0));

        PK_TRACE("Set SPR mode to LT0-7 via SPR_MODE[20-27]");
        CME_PUTSCOM(SPR_MODE, core, BITS64(20, 8));

        for (core_mask = 2; core_mask; core_mask--)
        {
            if (core & core_mask)
            {
                PK_TRACE_DBG("Set SPRC to scratch for core[%d] via SCOM_SPRC", core_mask);
                CME_PUTSCOM(SCOM_SPRC, core_mask, ((core_mask & 1) ? BIT64(60) : 0));

                PK_TRACE_DBG("Load SCRACTH with HOMER+2MB address %x", scom_data.value);

#if EPM_P9_TUNING

                CME_PUTSCOM((SCRACTH0 + (core_mask & 1)), core_mask, 0xA200000);

#else

                CME_PUTSCOM((SCRACTH0 + (core_mask & 1)), core_mask, scom_data.value);

#endif
            }
        }

        PK_TRACE("RAM: mfspr sprd , gpr0 via RAM_CTRL");
        CME_PUTSCOM(RAM_CTRL, core, RAM_MFSPR_SPRD_GPR0);

        PK_TRACE("RAM: mtspr hrmor, gpr0 via RAM_CTRL");
        CME_PUTSCOM(RAM_CTRL, core, RAM_MTSPR_HRMOR_GPR0);

        PK_TRACE("Disable thread0 for RAM via THREAD_INFO");
        CME_PUTSCOM(THREAD_INFO, core, 0);

        PK_TRACE("Disable RAM mode via RAM_MODEREG");
        CME_PUTSCOM(RAM_MODEREG, core, 0);

        PK_TRACE("Clear scratch/spr used in RAM");
        CME_PUTSCOM(SPR_MODE,  core, 0);
        CME_PUTSCOM(SCOM_SPRC, core, 0);

        if (core & CME_MASK_C0)
        {
            CME_PUTSCOM(SCRACTH0,  CME_MASK_C0, 0);
        }

        if (core & CME_MASK_C1)
        {
            CME_PUTSCOM(SCRACTH1,  CME_MASK_C1, 0);
        }

#endif
// Nimbus DD2+
#else


#if EPM_P9_TUNING

        CME_PUTSCOM(HRMOR, core, 0xA200000);

#else

        PK_TRACE_DBG("Core Wakes Up, Write HRMOR with HOMER address %x", scom_data.value);
        CME_PUTSCOM(HRMOR, core, scom_data.value);

#endif

#endif

        PK_TRACE("Save off and mask SPATTN before self-restore");
        CME_GETSCOM(SPATTN_MASK, core, CME_SCOM_AND, scom_data.value);
        CME_PUTSCOM(SPATTN_MASK, core, BITS64(0, 64));

        PK_TRACE_INF("SF.RS: Self Restore Kickoff, S-Reset All Core Threads");

        // Disable interrupts around the sreset to polling check to not miss the self-restore
        wrteei(0);
        CME_PUTSCOM(DIRECT_CONTROLS, core,
                    BIT64(4) | BIT64(12) | BIT64(20) | BIT64(28));
        sync();

        PK_TRACE("Poll for instruction running before drop pm_exit");

        while((~(in32_sh(CME_LCL_SISR))) & (core << SHIFT64SH(47)));

        wrteei(1);

        //==========================
        MARK_TRAP(SX_SRESET_THREADS)
        //==========================

        PK_TRACE("Allow threads to run(pm_exit=0)");
        out32(CME_LCL_SICR_CLR, core << SHIFT32(5));

        PK_TRACE("Poll for core stop again(pm_active=1)");

        while((~(in32(CME_LCL_EINR))) & (core << SHIFT32(21)))
        {
            if (in32_sh(CME_LCL_SISR) & (core << SHIFT64SH(33)))
            {
                PK_TRACE_ERR("ERROR: Core Special Attention Detected. HALT CME!");
                PK_PANIC(CME_STOP_EXIT_SELF_RES_SPATTN);
            }
        }

        PK_TRACE_INF("SF.RS: Self Restore Completed, Core Stopped Again(pm_exit=0/pm_active=1)");

        PK_TRACE("Restore SPATTN after self-restore");
        CME_PUTSCOM(SPATTN_MASK, core, scom_data.value);

        PK_TRACE("Drop block interrupt to PC via SICR[2/3]");
        out32(CME_LCL_SICR_CLR, core << SHIFT32(3));

        PK_TRACE("Clear pm_active status via EISR[20/21]");
        out32(CME_LCL_EISR_CLR, core << SHIFT32(21));

#endif

        if (d2u4_flag)
        {
            core = CME_MASK_BC;
        }
    }

    //=========================
    MARK_TRAP(SX_ENABLE_ANALOG)
    //=========================

    p9_cme_stop_exit_end(core, spwu_stop);

    //===========================
    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    //===========================

    return;
}
