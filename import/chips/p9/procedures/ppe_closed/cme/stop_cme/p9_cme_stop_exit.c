/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_exit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2021                                                    */
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
#include "p9_cme_pstate.h"

// inline procedures only called by exit
#include "p9_hcd_core_poweron.c"
#include "p9_hcd_core_chiplet_reset.c"
#include "p9_hcd_core_gptr_time_initf.c"
#include "p9_hcd_core_chiplet_init.c"
#include "p9_hcd_core_repair_initf.c"
#include "p9_hcd_core_arrayinit.c"
#include "p9_hcd_core_initf.c"
#include "p9_hcd_core_startclocks.c"
#include "p9_hcd_core_scominit.c"
#include "p9_hcd_core_scomcust.c"
#include "p9_hcd_core_ras_runtime_scom.c"
#include "p9_hcd_core_occ_runtime_scom.c"



extern CmeStopRecord G_cme_stop_record;
extern CmeRecord G_cme_record;
uint64_t G_spattn_mask = 0;

#if HW386841_NDD1_DSL_STOP1_FIX

uint8_t G_dsl[MAX_CORES_PER_CME][MAX_THREADS_PER_CORE] = {{0, 0, 0, 0}, {0, 0, 0, 0}};

#endif


#if NIMBUS_DD_LEVEL != 10

uint8_t G_pls[MAX_CORES_PER_CME][MAX_THREADS_PER_CORE] = {{11, 11, 11, 11}, {11, 11, 11, 11}};

#endif


static void
p9_cme_stop_exit_end(uint32_t core, uint32_t spwu_stop)
{
    uint32_t     core_mask         = 0;
    uint32_t     core_index        = 0;
    uint32_t     act_stop_level    = 0;
    uint32_t     thread            = 0;
    uint32_t     bitloc            = 0;
    uint32_t     pscrs             = 0;
    data64_t     scom_data         = {0};
#if HW386841_NDD1_DSL_STOP1_FIX
    uint8_t      srr1[MAX_THREADS_PER_CORE] = {0, 0, 0, 0};
    uint32_t     temp_dsl          = 0;
#else
    uint32_t     pls               = 0;
    uint32_t     saved_msr         = 0;
#endif


    //--------------------------------------------------------------------------
    PK_TRACE_PERF("+++++ +++++ END OF STOP EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    PK_TRACE_PERF("Restore PSSCR.PLS+SRR1 back to actual level");

#if HW386841_NDD1_DSL_STOP1_FIX

    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            core_index = core_mask & 1;

            if (G_cme_stop_record.act_level[core_index] != STOP_LEVEL_1)
            {
                CME_GETSCOM(PPM_SSHSRC, core_mask, scom_data.value);
                act_stop_level = (scom_data.words.upper & BITS32(8, 4)) >> SHIFT32(11);
            }
            else
            {
                // SSH was not updated for Stop1 so use the internal variable instead
                act_stop_level = STOP_LEVEL_1;
            }

            //set up the next SCOM
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

                // Calculate new DSL, SD bit does not impact PLS reporting

                temp_dsl = ((pscrs & BITS32(20, 4)) >> SHIFT32(23));

                if (temp_dsl >= STOP_LEVEL_11)
                {
                    temp_dsl = STOP_LEVEL_11;
                }
                else if (temp_dsl >= STOP_LEVEL_8)
                {
                    temp_dsl = STOP_LEVEL_8;
                }
                else if (temp_dsl >= STOP_LEVEL_5)
                {
                    temp_dsl = STOP_LEVEL_5;
                }
                else if (temp_dsl >= STOP_LEVEL_4)
                {
                    temp_dsl = STOP_LEVEL_4;
                }
                else if (temp_dsl >= STOP_LEVEL_2)
                {
                    temp_dsl = STOP_LEVEL_2;
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
                    if (pscrs & BIT32(2)) // if state_loss_enable == 1
                    {
                        srr1[thread] = SOME_STATE_LOSS_BUT_NOT_TIMEBASE;
                    }
                    else
                    {
                        srr1[thread] = NO_STATE_LOSS;
                    }
                }

                PK_TRACE_DBG("New Srr1[%d]", srr1[thread]);

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
            CME_GETSCOM(PPM_SSHSRC, core_mask, scom_data.value);
            act_stop_level = (scom_data.words.upper & BITS32(8, 4)) >> SHIFT32(11);
            core_index = core_mask & 1;

            scom_data.words.lower = (BIT64SH(32) | BIT64SH(40) | BIT64SH(48) | BIT64SH(56));
            scom_data.words.upper = 0;

            for(thread = 0, bitloc = 36;
                thread < MAX_THREADS_PER_CORE;
                thread++,   bitloc += 8)
            {
                pls = MAX(act_stop_level, G_pls[core_index][thread]);
                scom_data.words.lower |= (pls << SHIFT64SH(bitloc));

                if (pls >= STOP_LEVEL_8)
                {
                    // MOST_STATE_LOSS(3)
                    scom_data.words.lower |= (MOST_STATE_LOSS << SHIFT64SH((bitloc + 3)));
                }
                else if (pls >= STOP_LEVEL_4)
                {
                    // SOME_STATE_LOSS_BUT_NOT_TIMEBASE(2)
                    scom_data.words.lower |= (SOME_STATE_LOSS_BUT_NOT_TIMEBASE << SHIFT64SH((bitloc + 3)));
                }
                else
                {
                    // address are 0x20 apart between threads and 0x80 apart between cores
                    pscrs = in32((CME_LCL_PSCRS00 + (core_index << 7) + (thread << 5)));

                    // SOME_STATE_LOSS_BUT_NOT_TIMEBASE(2) vs NO_STATE_LOSS(1)
                    scom_data.words.lower |= (((pscrs & BIT32(2)) ?
                                               SOME_STATE_LOSS_BUT_NOT_TIMEBASE : NO_STATE_LOSS) << SHIFT64SH((bitloc + 3)));
                }

                PK_TRACE("core[%d] act_stop_level[%d] G_pls_tX[%d], scom_data.lower[%x]",
                         core_mask, act_stop_level, G_pls[core_index][thread], scom_data.words.lower);
            }

            // Treat the first write with suspicion due to a bug in the PSCOM macro when a previous scom has timed out
            saved_msr = mfmsr();
            mtmsr( saved_msr | MSR_SEM4);  // Mask off timeout

            CME_PUTSCOM(DIRECT_CONTROLS, core_mask, scom_data.value);

            if ((mfmsr() & MSR_SIBRC) != 0)
            {
                // The second write should never fail.   Unmask the error
                mtmsr(saved_msr);
                CME_PUTSCOM(DIRECT_CONTROLS, core_mask, scom_data.value);
            }
            else
            {
                mtmsr(saved_msr);
            }
        }
    }

#endif

    // make sure all direct control scom are completed before wake core up
    sync();

    PK_TRACE_PERF("Core Waking up(pm_exit=1) via SICR[4/5]");
    out32(G_CME_LCL_SICR_OR, core << SHIFT32(5));

    CME_PM_EXIT_DELAY

    PK_TRACE_PERF("Polling for Core Waking up(pm_active=0) via EINR[20/21]");

    while((in32(G_CME_LCL_EINR)) & (core << SHIFT32(21)));

#if defined(USE_CME_QUEUED_SCOM)

    // execute sync before change pcbmux to prevent queued scom issues
    sync();

#endif

    PK_TRACE_PERF("Release PCB Mux back on Core via SICR[10/11]");
    out32(G_CME_LCL_SICR_CLR, core << SHIFT32(11));

    while((core & ~(in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core);

    //PK_TRACE_INF("SX.0A: PCB Mux Released on Core[%d]", core);

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
    out32(G_CME_LCL_LMCR_CLR, (core << SHIFT32(15)));

#if SPWU_AUTO

    PK_TRACE_DBG("Drop auto spwu disable, enable auto spwu via LMCR[12/13]");
    out32(G_CME_LCL_LMCR_CLR, core << SHIFT32(13));

    PK_TRACE_PERF("SX.0B: Core Drop PM_EXIT via SICR[4/5]");
    out32(G_CME_LCL_SICR_CLR, core << SHIFT32(5));

#else

    if ((spwu_stop = (core & spwu_stop)))
    {
        if (in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_SPWU_CHECK_ENABLE))
        {
            CME_GETSCOM_OR(PPM_SSHSRC, spwu_stop, scom_data.value);

            if (scom_data.words.upper & BIT32(0))
            {
//                PK_TRACE_ERR("Protocol Error[2]: Assert SPWU_Done when STOP_GATED=1, SSH[%d][%x]",
//                             spwu_stop, scom_data.words.upper);
                PK_PANIC(CME_STOP_SPWU_PROTOCOL_ERROR);
            }
        }

        // done = spwu + !pm_active + !core_chiplet_fence + !pcbmux_req + !pcbmux_grant
        // chiplet fence forces pm_active to zero
        // Note: pm_exit is asserted above for every core waking up including spwu

        PK_TRACE_DBG("SX.0B: Core[%d] Assert SPWU_DONE via SICR[16/17]", spwu_stop);
        // Note: clear pm_active so that potential stop1 wont use leftover pm_active upon drop spwu later
        out32(G_CME_LCL_EISR_CLR, ((spwu_stop << SHIFT32(15)) | (spwu_stop << SHIFT32(21))));  // clear spwu in EISR
        out32(G_CME_LCL_EIPR_CLR, spwu_stop << SHIFT32(15));  // flip EIPR to falling edge
        out32(G_CME_LCL_SICR_OR,  spwu_stop << SHIFT32(17));  // assert spwu_done now
        G_cme_stop_record.core_in_spwu |= spwu_stop;

#if !DISABLE_PERIODIC_CORE_QUIESCE && (NIMBUS_DD_LEVEL == 20 || NIMBUS_DD_LEVEL == 21 || CUMULUS_DD_LEVEL == 10)

        G_cme_record.fit_record.core_quiesce_fit_trigger = 0;

#endif

    }

    if ((core = (core & (~spwu_stop))))
    {
        PK_TRACE_PERF("SX.0C: Core isnt SPWUed, Drop PM_EXIT via SICR[4/5]");
        out32(G_CME_LCL_SICR_CLR, core << SHIFT32(5));
    }

#endif

}



static void
p9_cme_stop_exit_lv2(uint32_t core)
{
    //--------------------------------------------------------------------------
    PK_TRACE_PERF("+++++ +++++ STOP LEVEL 2 EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    // do this again here for stop2 in addition to chiplet_reset
    // Note IPL doesnt need to do this twice
    PK_TRACE("Assert core glitchless mux to DPLL via CGCR[3]");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(3));

    //=========================
    MARK_TRAP(SX_ENABLE_ANALOG)
    //=========================

    wrteei(0);
    p9_cme_core_stop_analog_control(core, ANALOG_ENABLE);
    wrteei(1);

    // do this after assert glsmux so glitch can have time to resolve
    // catchup to stop2 exit will acquire here

#if HW405292_NDD1_PCBMUX_SAVIOR

    p9_cme_pcbmux_savior_prologue(core);

#endif

    PK_TRACE("SX.20: Request PCB mux via SICR[10/11]");
    out32(G_CME_LCL_SICR_OR, core << SHIFT32(11));

    // Poll Infinitely for PCB Mux Grant
    while((core & (in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core);

    PK_TRACE("SX.20: PCB Mux Granted on Core[%d]", core);

#if HW405292_NDD1_PCBMUX_SAVIOR

    p9_cme_pcbmux_savior_epilogue(core);

#endif

    //============================
    MARK_TAG(SX_STARTCLOCKS, core)
    //============================

    PK_TRACE_PERF("SX.2A: Core Start Clock");
    p9_hcd_core_startclocks(core);

    core &= ~G_cme_stop_record.core_errored;

    if (!core)
    {
        return;
    }

    PK_TRACE("Clear CPPM PECE shadow via PECES");
    CME_PUTSCOM(CPPM_PECES, core, 0);
}



#if !SKIP_EXIT_CATCHUP

static uint32_t
p9_cme_stop_exit_catchup(uint32_t* core,
                         uint32_t* deeper_core,
                         uint32_t* spwu_stop,
                         uint8_t*  target_level,
                         int*      d2u4_flag)
{
    uint32_t rc            = 0;
    uint8_t  catchup_level = 0;
    uint32_t core_mask     = 0;
    uint32_t core_catchup  = 0;
    uint32_t wakeup        = 0;
    data64_t scom_data     = {0};

    wakeup = (in32(G_CME_LCL_EISR) >> SHIFT32(17)) & 0x3F;
    core_catchup = (~(*core)) & ((wakeup >> 4) | wakeup) & CME_MASK_BC;

    // ignore wakeup being blocked, do not clear
    core_catchup &= (~G_cme_stop_record.core_blockwu);

    // ignore wakeup when it suppose to be handled by sgpe, do not clear
    for(core_mask = 2; core_mask; core_mask--)
    {
        if (core_catchup & core_mask)
        {
            CME_GETSCOM(CPPM_CPMMR, core_mask, scom_data.value);

            if (scom_data.words.upper & BIT32(13))
            {
                core_catchup = core_catchup - core_mask;
            }
        }
    }

    // leave spwu alone, clear pcwu/rgwu only if not stop5+ or blocked
    out32(G_CME_LCL_EISR_CLR, ((core_catchup << SHIFT32(13)) | (core_catchup << SHIFT32(17))));

    // override with partial good core mask, also ignore wakeup to running cores
    // these are being cleared and considered done for running or disabled cores
    core_catchup = core_catchup & G_cme_record.core_enabled &
                   (~G_cme_stop_record.core_running);

    if (core_catchup)
    {
        // chtm purge done
        out32(G_CME_LCL_EISR_CLR, (core_catchup << SHIFT32(25)));

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
    uint32_t     core_spattn       = 0;
    data64_t     scom_data         = {0};
#if !SPWU_AUTO
    uint32_t     spwu_stop         = 0;
    uint32_t     spwu_wake         = 0;
#endif
#if HW386841_NDD1_DSL_STOP1_FIX
    uint32_t     core_stop1        = 0;
#endif
    cmeHeader_t* pCmeImgHdr        = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);

    //--------------------------------------------------------------------------
    PK_TRACE_PERF("+++++ +++++ BEGIN OF STOP EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    // extract wakeup signals and clear status
    wakeup = (in32(G_CME_LCL_EISR) >> SHIFT32(17)) & 0x3F;
    core   = ((wakeup >> 4) | (wakeup >> 2) | wakeup) & CME_MASK_BC;

    // ignore wakeup being blocked, do not clear
    core &= (~G_cme_stop_record.core_blockwu);

    // ignore wakeup when it suppose to be handled by sgpe, do not clear
    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(CPPM_CPMMR, core_mask, scom_data.value);

            if (scom_data.words.upper & BIT32(13))
            {
                core = core - core_mask;
            }
        }
    }

    // leave spwu alone, clear pcwu/rgwu only if not stop5+ or blocked
    out32(G_CME_LCL_EISR_CLR, ((core << SHIFT32(13)) | (core << SHIFT32(17))));

    PK_TRACE_INF("SX.00: Core Wakeup[%x] Raw Interrupts[%x] Actual Stop Levels[%d %d]",
                 core, wakeup,
                 G_cme_stop_record.act_level[0],
                 G_cme_stop_record.act_level[1]);

    // override with partial good core mask, also ignore wakeup to running cores
    // these are being cleared and considered done for running or disabled cores
    core = core & G_cme_record.core_enabled &
           (~G_cme_stop_record.core_running);



#if !SPWU_AUTO

    // for spwu assert, figure out who is already awake and who needs to exit
    // leaving spwu drop to the handler to process
    spwu_stop = (wakeup >> 2) & G_cme_record.core_enabled &
                (~G_cme_stop_record.core_in_spwu);
    spwu_wake = spwu_stop &   G_cme_stop_record.core_running;
    spwu_stop = spwu_stop & (~G_cme_stop_record.core_running) &
                (~G_cme_stop_record.core_blockwu);

    if (spwu_wake)
    {
        if (in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_SPWU_CHECK_ENABLE))
        {
            CME_GETSCOM_OR(PPM_SSHSRC, spwu_wake, scom_data.value);

            if (scom_data.words.upper & BIT32(0))
            {
//                PK_TRACE_ERR("Protocol Error[1]: Assert SPWU_Done when STOP_GATED=1, SSH[%d][%x]",
//                             spwu_wake, scom_data.words.upper);
                PK_PANIC(CME_STOP_SPWU_PROTOCOL_ERROR);
            }
        }

        // Process special wakeup on a core that is already running
        PK_TRACE_DBG("SP.WU: Core[%d] Assert PM_EXIT and SPWU_DONE via SICR[4/5, 16/17]", spwu_wake);
        // Note: clear pm_active so that potential stop1 wont use leftover pm_active upon drop spwu later
        out32(G_CME_LCL_SICR_OR,  spwu_wake << SHIFT32(5));  // assert pm_exit
        out32(G_CME_LCL_EISR_CLR, ((spwu_wake << SHIFT32(15)) | (spwu_wake << SHIFT32(21)))); // clear spwu in EISR
        out32(G_CME_LCL_EIPR_CLR, spwu_wake << SHIFT32(15)); // flip EIPR to falling edge
        out32(G_CME_LCL_SICR_OR,  spwu_wake << SHIFT32(17)); // assert spwu_done now
        G_cme_stop_record.core_in_spwu |= spwu_wake;

#if !DISABLE_PERIODIC_CORE_QUIESCE && (NIMBUS_DD_LEVEL == 20 || NIMBUS_DD_LEVEL == 21 || CUMULUS_DD_LEVEL == 10)

        G_cme_record.fit_record.core_quiesce_fit_trigger = 0;

#endif

        if (!core)
        {
            PK_TRACE_DBG("Only processed Special Wakeup on running cores. Return");
            return;
        }
    }

#endif

    if (!core)
    {
        //PK_TRACE_ERR("ERROR: No Wakeup Fired to a Stopped and Enabled Core.");

        if (pCmeImgHdr->g_cme_mode_flags & CME_STOP_PHANTOM_HALT_ENABLE_BIT_POS)
        {
            PK_PANIC(CME_STOP_EXIT_PHANTOM_WAKEUP);
        }

        return;
    }



#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

    uint32_t dual_core   = core;
    uint32_t single_core = CME_MASK_C0;

    // NDD2: dual cast workaround loop start
    for(; single_core; single_core = single_core >> 1)
    {
        if (single_core & dual_core)
        {
            core = single_core;
        }
        else
        {
            continue;
        }

#endif

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
            //PK_TRACE_INF("SX.1A: Core[%d] Requested Stop1 Exit", core_stop1);
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
        out32(G_CME_LCL_EISR_CLR, (core << SHIFT32(25)));

        PK_TRACE("Update STOP history: in transition of exit");
        scom_data.words.lower = 0;
        scom_data.words.upper = SSH_EXIT_IN_SESSION;
        CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);

        // when one core enters and wakeup from stop1prime
        // the other core can only be running state(no wakeup)
        // if the other core was in either also stop1prime
        // or deeper stop state, both cores would also enter
        // deeper stop state and cleared stop1prime state.
        // thus it is safe to return here
        if( G_cme_stop_record.core_stop1prime & core )
        {
            if( (~G_cme_stop_record.core_stop1prime) & core )
            {
                PKTRACE("Stop1 Prime Exit Error");
                //pk_halt();
            }

            p9_cme_stop_exit_end(core, spwu_stop);
            G_cme_stop_record.core_stop1prime = 0;
            return;
        }

        if (target_level == STOP_LEVEL_2)
        {
            core = core - deeper_core;

            p9_cme_stop_exit_lv2(core);

            // remove errored cores from the list to be porcessed
            // only continue if a core is left that does not have an error
            core &= ~G_cme_stop_record.core_errored;

            if (!core)
            {

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

                continue;

#else

                if (!deeper_core)
                {
                    return;
                }

#endif

            }
            else
            {
                p9_cme_stop_exit_end(core, spwu_stop);
            }

            core         = deeper_core;
            target_level = deeper_level;

            if (!core)
            {
                //===========================
                MARK_TRAP(ENDSCOPE_STOP_EXIT)
                //===========================

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

                continue;

#else

                return;

#endif

            }
        }

        if (deeper_level >= STOP_LEVEL_4)
        {

            //--------------------------------------------------------------------------
            PK_TRACE_PERF("+++++ +++++ STOP LEVEL 4 EXIT +++++ +++++");
            //--------------------------------------------------------------------------

            // if deeper_core is set, then core must be 0b11
            if (deeper_core && target_level < STOP_LEVEL_4)
            {
                d2u4_flag = 1;
                core      = deeper_core;
            }


#if !SKIP_BCE_SCOM_RESTORE

            PK_TRACE("BCE Runtime Kickoff to Copy Scom Restore core");
            //right now a blocking call. Need to confirm this.
            start_cme_block_copy(CME_BCEBAR_0,
                                 CORE_SCOM_RESTORE_CPMR_OFFSET,
                                 pCmeImgHdr->g_cme_scom_offset,
                                 (pCmeImgHdr->g_cme_scom_length >> 5));

#endif


            do   //catchup loop
            {


                // Can't do the read of cplt_stat after flipping the mux before the core is powered on
                // catchup to stop4 exit will acquire here

#if HW405292_NDD1_PCBMUX_SAVIOR

                p9_cme_pcbmux_savior_prologue(core);

#endif

                PK_TRACE("SX.40: Request PCB mux via SICR[10/11]");
                out32(G_CME_LCL_SICR_OR, core << SHIFT32(11));

                // Poll Infinitely for PCB Mux Grant
                while((core & (in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core);

                PK_TRACE_PERF("SX.40: PCB Mux Granted on Core");

                // Note: in this case, no need to call p9_cme_pcbmux_savior_epilogue

                if(in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_VDM_OPERABLE))
                {
                    // Poweron the VDM giving it time to powerup prior to enabling
                    PK_TRACE_DBG("Set Poweron bit in VDMCR");
                    CME_PUTSCOM(PPM_VDMCR_OR, core, BIT64(0));
                }

                //========================
                MARK_TAG(SX_POWERON, core)
                //========================

                PK_TRACE_PERF("SX.4A: Core Poweron");
                p9_hcd_core_poweron(core);

                //=========================
                MARK_TRAP(SX_CHIPLET_RESET)
                //=========================

                PK_TRACE_PERF("SX.4B: Core Chiplet Reset");
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

                PK_TRACE_PERF("SX.4C: Core Gptr/Time Initf after catchup A");
                p9_hcd_core_gptr_time_initf(core);

#endif

                PK_TRACE_PERF("Core Chiplet Inits");
                p9_hcd_core_chiplet_init(core);

#if !SKIP_INITF

                PK_TRACE_PERF("SX.4D: Core Repair Initf");
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

                PK_TRACE_PERF("SX.4E: Core Array Init after catchup B");
                p9_hcd_core_arrayinit(core);

#endif

                //=====================
                MARK_TRAP(SX_FUNC_INIT)
                //=====================

#if !SKIP_INITF

                PK_TRACE_PERF("SX.4F: Core Func Scan");
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

        p9_cme_stop_exit_lv2(core);

        core &= ~G_cme_stop_record.core_errored;

        if (!core)
        {

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

            continue;

#else

            return;

#endif

        }

        if (deeper_level >= STOP_LEVEL_4)
        {

            //--------------------------------------------------------------------------
            PK_TRACE_PERF("+++++ +++++ STOP LEVEL 4 EXIT CONTINUE +++++ +++++");
            //--------------------------------------------------------------------------

            if (d2u4_flag)
            {
                core = deeper_core;
            }

#if !STOP_PRIME

            //===========================
            MARK_TAG(SX_SCOM_INITS, core)
            //===========================

            // disable the SPURR scale override by writing 0x40 into bits 0:7
            // if the VPD data resulted in a bad reference value, write all 0x0 to stop the SPURR
            CME_PUTSCOM(SPURR_FREQ_SCALE, core, ((G_cme_record.spurr_freq_ref_upper & BIT32(0)) ? BIT64(1) : 0x0));
            // setup the SPURR reference to the nominal pre-calculated value
            CME_PUTSCOM(SPURR_FREQ_REF,   core, (uint64_t)G_cme_record.spurr_freq_ref_upper << 32);

            PK_TRACE_DBG("SX.4G: Core[%d] Scom Inits", core);
            p9_hcd_core_scominit(core);

            //==========================
            MARK_TAG(SX_BCE_CHECK, core)
            //==========================

#if !SKIP_BCE_SCOM_RESTORE

            PK_TRACE_DBG("BCE Runtime Check Scom Restore Copy Completed");

            if( BLOCK_COPY_SUCCESS != check_cme_block_copy() )
            {
                PK_TRACE_DBG("ERROR: BCE Scom Restore Copy Failed. HALT CME!");
                PK_PANIC(CME_STOP_EXIT_BCE_SCOM_FAILED);
            }

#endif

            PK_TRACE_PERF("Core XIP Customized Scoms");
            p9_hcd_core_scomcust(core);

            core &= ~G_cme_stop_record.core_errored;

            if (!core)
            {

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

                continue;

#else

                if (d2u4_flag)
                {
                    p9_cme_stop_exit_end((CME_MASK_BC - deeper_core), spwu_stop);
                }

                return;

#endif

            }

            p9_cme_pstate_pmsr_updt();

            //==============================
            MARK_TAG(SX_RUNTIME_INITS, core)
            //==============================

            PK_TRACE_PERF("RAS Runtime Scom on Core");
            p9_hcd_core_ras_runtime_scom(core);

            PK_TRACE_PERF("OCC Runtime Scom on Core");
            p9_hcd_core_occ_runtime_scom(core);

#endif

            //=============================
            MARK_TAG(SX_SELF_RESTORE, core)
            //=============================

#if !SKIP_SELF_RESTORE

            p9_cme_stop_self_execute(core, SPR_SELF_RESTORE);

            //==========================
            MARK_TRAP(SX_SRESET_THREADS)
            //==========================

            PK_TRACE("Poll for core stop again(pm_active=1)");

            while((~(in32(G_CME_LCL_EINR))) & (core << SHIFT32(21)))
            {
                core_spattn = (in32_sh(CME_LCL_SISR) >> SHIFT64SH(33)) & core;

                if (core_spattn)
                {
                    PK_TRACE_ERR("ERROR: Core[%d] Special Attention Detected. Gard Core!", core_spattn);
                    CME_STOP_CORE_ERROR_HANDLER(core, core_spattn, CME_STOP_EXIT_SELF_RES_SPATTN);

                    PK_TRACE("Release PCB Mux back on Core via SICR[10/11]");
                    out32(G_CME_LCL_SICR_CLR, core_spattn << SHIFT32(11));

                    while((core_spattn & ~(in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core_spattn);

                    PK_TRACE("PCB Mux Released on Core[%d]", core_spattn);
                }

                if (!core)
                {

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

                    continue;

#else

                    if (d2u4_flag)
                    {
                        p9_cme_stop_exit_end((CME_MASK_BC - deeper_core), spwu_stop);
                    }

                    return;

#endif

                }
            }

            PK_TRACE_PERF("SF.RS: Self Restore Completed, Core Stopped Again(pm_exit=0/pm_active=1)");

            p9_cme_stop_self_cleanup(core);

#endif

            if (d2u4_flag)
            {
                core = CME_MASK_BC;
            }
        }

        p9_cme_stop_exit_end(core, spwu_stop);

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

        // NDD2: dual cast workaround loop end
    }

#endif

    //===========================
    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    //===========================

    return;
}

void
p9_cme_stop_self_cleanup(uint32_t core)
{
    data64_t scom_data;

    //Cleaning up thread scratch register after self restore.
    if( CME_MASK_C0 & core )
    {
        CME_PUTSCOM(SCRATCH0, CME_MASK_C0, 0);
    }

    if( CME_MASK_C1 & core )
    {
        CME_PUTSCOM(SCRATCH1, CME_MASK_C1, 0);
    }

    PK_TRACE("Restore SPATTN after self-restore");
    CME_PUTSCOM(SPATTN_MASK, core, G_spattn_mask);

    PK_TRACE("Always Unfreeze IMA (by clearing bit 34) in case the CHTM is enabled to sample it");
    CME_GETSCOM(IMA_EVENT_MASK, core, scom_data.value);
    CME_PUTSCOM(IMA_EVENT_MASK, core, scom_data.value & ~BIT64(34));

    PK_TRACE("Drop block interrupt to PC via SICR[2/3]");
    out32(G_CME_LCL_SICR_CLR, core << SHIFT32(3));

    PK_TRACE("Clear pm_active status via EISR[20/21]");
    out32(G_CME_LCL_EISR_CLR, core << SHIFT32(21));

}

void
p9_cme_stop_self_execute(uint32_t core, uint32_t i_saveRestore )
{
    uint32_t core_mask;
    data64_t scom_data;
    cmeHeader_t* pCmeImgHdr = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
    scom_data.value = pCmeImgHdr->g_cme_cpmr_PhyAddr & BITS64(13, 30); //HRMOR[13:42]

    PK_TRACE("Assert block interrupt to PC via SICR[2/3]");

    out32(G_CME_LCL_SICR_OR, core << SHIFT32(3));

    PK_TRACE_PERF("SF.RS: Self Restore Prepare, Core Waking up(pm_exit=1) via SICR[4/5]");
    out32(G_CME_LCL_SICR_OR, core << SHIFT32(5));

    CME_PM_EXIT_DELAY

    PK_TRACE("Polling for core wakeup(pm_active=0) via EINR[20/21]");

    while((in32(G_CME_LCL_EINR)) & (core << SHIFT32(21)));

#if NIMBUS_DD_LEVEL == 10
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

            PK_TRACE_DBG("Load SCRATCH0 with HOMER+2MB address %x", scom_data.value);

#if EPM_P9_TUNING

            CME_PUTSCOM((SCRATCH0 + (core_mask & 1)), core_mask, 0xA200000);

#else

            CME_PUTSCOM((SCRATCH0 + (core_mask & 1)), core_mask, scom_data.value);

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
        CME_PUTSCOM(SCRATCH0,  CME_MASK_C0, 0);
    }

    if (core & CME_MASK_C1)
    {
        CME_PUTSCOM(SCRATCH1,  CME_MASK_C1, 0);
    }

#endif
// Nimbus DD2+
#else

#if SMF_SUPPORT_ENABLE

#if EPM_P9_TUNING

    CME_PUTSCOM(URMOR, core, 0xA200000);
    CME_PUTSCOM(HRMOR, core, 0xA200000);
#else

    CME_PUTSCOM(URMOR, core, scom_data.value);
    PK_TRACE_DBG("SMF core wakes up, write URMOR with HOMER address" );
    scom_data.words.upper =  scom_data.words.upper & ~BIT32(15);

    if( SPR_SELF_SAVE == i_saveRestore )
    {
        scom_data.value = pCmeImgHdr->g_cme_unsec_cpmr_PhyAddr & BITS64(13, 30); //Unsecure HOMER
        PK_TRACE_DBG("SMF core self save, write un-secure HOMER address");
    }

    CME_PUTSCOM(HRMOR, core, scom_data.value);

#endif  //EPM_P9_TUNING

#else  //SMF Not supported

#if EPM_P9_TUNING

    CME_PUTSCOM(HRMOR, core, 0xA200000);
#else

    PK_TRACE_DBG("Non SMF core wakes up, write HRMOR with HOMER address");
    scom_data.words.upper =  scom_data.words.upper & ~BIT32(15);
    CME_PUTSCOM(HRMOR, core, scom_data.value);

#endif   //EPM_P9_TUNING

#endif //SMF_SUPPORT_ENABLE

#endif //Nimbus DD2+

    PK_TRACE("Save off and mask SPATTN before self-restore");
    CME_GETSCOM(SPATTN_MASK, core, G_spattn_mask);
    CME_PUTSCOM(SPATTN_MASK, core, BITS64(0, 64));

#if !DISABLE_CORE_XSTOP_INJECTION

    PK_TRACE("Read WKUP_ERR_INJECT_MODE via CPMMR[8]");

    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(CPPM_CPMMR, core_mask, scom_data.value);

            if (scom_data.words.upper & BIT32(8))
            {
                //PK_TRACE_INF("WARNING: Injecting a core[%d] xstop via C_LFIR[11]", core);
                CME_PUTSCOM(C_LFIR_OR, core_mask, BIT64(11));
            }

            if( SPR_SELF_SAVE == i_saveRestore )
            {
                //Writing thread scratch register to
                //Signal Self Save Restore code for save operation.
                scom_data.words.upper     =   0;
                scom_data.words.lower     =   1;
            }
            else
            {
                //Writing thread scratch register to
                // 1. Init Runtime wakeup mode for core.
                // 2. Signal Self Save Restore code for restore operation.

                if (scom_data.words.upper & BIT32(3))
                {
                    scom_data.value = BIT64(59);
                }
                else
                {
                    scom_data.value = 0;
                }
            }

            if( CME_MASK_C0 & core_mask )
            {
                CME_PUTSCOM(SCRATCH0, CME_MASK_C0, scom_data.value);
            }

            if( CME_MASK_C1 & core_mask )
            {
                CME_PUTSCOM(SCRATCH1, CME_MASK_C1, scom_data.value);
            }
        }
    }

#endif

    PK_TRACE_PERF("SF.RS: Self Restore Kickoff, S-Reset All Core Threads");

    // Disable interrupts around the sreset to polling check to not miss the self-restore
    wrteei(0);

    CME_PUTSCOM(DIRECT_CONTROLS, core,
                BIT64(4) | BIT64(12) | BIT64(20) | BIT64(28));
    sync();

    //**DISABLE CHECK FOR instruction running to avoid race condition**
    //PK_TRACE_INF("Poll for instruction running before drop pm_exit");
    //while((~(in32_sh(CME_LCL_SISR))) & (core << SHIFT64SH(47)));

    wrteei(1);

    PK_TRACE_DBG("Allow threads to run(pm_exit=0)");
    out32(G_CME_LCL_SICR_CLR, core << SHIFT32(5));

}
