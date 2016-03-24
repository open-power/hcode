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

int
p9_cme_stop_exit()
{
    int          rc              = 0;
    int          d2u4_flag       = 0;
    int          catchup_ongoing = 0;
    uint8_t      target_level;
    uint8_t      deeper_level    = 0;
    uint32_t     deeper_core     = 0;
    uint32_t     wakeup;
    uint32_t     pcwu;
    uint32_t     spwu;
    uint32_t     rgwu;
    uint32_t     core;
#if !SKIP_EXIT_CATCHUP
    uint32_t     core_catchup;
#endif
    //uint32_t      grant;
    ppm_sshsrc_t hist;

    //--------------------------------------------------------------------------
    // BEGIN OF STOP EXIT
    //--------------------------------------------------------------------------

    // extract wakeup signals, clear status, and mask wakeup interrupts
    wakeup = (in32(CME_LCL_EISR) >> SHIFT32(17)) & 0x3F;
    out32(CME_LCL_EISR_CLR, (wakeup << SHIFT32(17)) | BITS32(24, 2));
    out32_sh(CME_LCL_EISR_CLR, (in32_sh(CME_LCL_EISR) & BITS32(8, 2)));

    // build the core select for wakeup
    pcwu   = (wakeup >> 4) & CME_MASK_BC;
    spwu   = (wakeup >> 2) & CME_MASK_BC;
    rgwu   = (wakeup >> 0) & CME_MASK_BC;
    core   = pcwu | spwu | rgwu;

    // override with partial good core mask
    core = core & G_cme_stop_record.core_enabled;

    PK_TRACE("X0: Core Select[%d], pcwu[%d], spwu[%d], rgwu[%d]",
             core, pcwu, spwu, rgwu);

    // Code Error: function should never be entered without wakeup source active
    if (!core)
    {
        PK_TRACE("Error: no wakeup fired");
        pk_halt();
    }

    //==================================
    MARK_TAG(BEGINSCOPE_STOP_EXIT, core)
    //==================================

    PK_TRACE("X0: Actual Stop Levels[%d %d]",
             G_cme_stop_record.act_level_c0, G_cme_stop_record.act_level_c1);

    // Code Error: by default stop 1 auto wakeup should be enabled
    if ((core == CME_MASK_C0 && G_cme_stop_record.act_level_c0 < 2) ||
        (core == CME_MASK_C1 && G_cme_stop_record.act_level_c1 < 2) ||
        (core == CME_MASK_BC && (G_cme_stop_record.act_level_c0 < 2 ||
                                 G_cme_stop_record.act_level_c1 < 2)))
    {
        pk_halt();
    }

    // set target_level to STOP level for c0
    // unless c1(also or only) wants to wakeup
    target_level = deeper_level =
                       (core == CME_MASK_C0) ? G_cme_stop_record.act_level_c0 :
                       G_cme_stop_record.act_level_c1;

    // If both cores want to wakeup but are in different STOP levels,
    // set deeper_level to the deeper level targeted by deeper core
    if ((core == CME_MASK_BC) &&
        (G_cme_stop_record.act_level_c0 != G_cme_stop_record.act_level_c1))
    {
        // Assume C0 is deeper, target_level is already set to C1
        deeper_level = G_cme_stop_record.act_level_c0;
        deeper_core  = CME_MASK_C0;

        // Otherwise correct assumption on which one is in lighter level
        if (G_cme_stop_record.act_level_c0 < G_cme_stop_record.act_level_c1)
        {
            target_level = G_cme_stop_record.act_level_c0;
            deeper_level = G_cme_stop_record.act_level_c1;
            deeper_core  = CME_MASK_C1;
        }
    }

    PK_TRACE("X0: target_lv[%d], deeper_lv[%d], deeper_c[%d]",
             target_level, deeper_level, deeper_core);

    PK_TRACE("X0: Update STOP History: In Transition of Exit");
    CME_STOP_UPDATE_HISTORY(core,
                            STOP_CORE_IS_GATED,
                            STOP_TRANS_EXIT,
                            STOP_LEVEL_0,
                            STOP_LEVEL_0,
                            STOP_REQ_DISABLE,
                            STOP_ACT_DISABLE);

    // ensure PCB Mux grant is present for all cores that wants to wakeup
    // only stop 11 needs to request for new grant
    //if (!(grant=(core & (in32(CME_LCL_SISR) >> SHIFT32(11))))) {
    PK_TRACE("X0: Check and Request PCB Mux");
    //    if (((~grant & CME_MASK_C0 & core) &&
    //        (G_cme_stop_record.pm_state_c0 < 11)) ||
    //        ((~grant & CME_MASK_C1 & core) &&
    //        (G_cme_stop_record.pm_state_c1 < 11)))
    //        pk_halt();
    out32(CME_LCL_SICR_OR, core << SHIFT32(11));

    while((core & (in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

    //}

    //--------------------------------------------------------------------------
    // STOP LEVEL 4
    //--------------------------------------------------------------------------

    if (deeper_level >= STOP_LEVEL_4)
    {
        PK_TRACE("STOP Level 4+ Sequence");

        // if deeper_core is set, then core must be 0b11
        if (deeper_core && target_level < STOP_LEVEL_4)
        {
            d2u4_flag = 1;
            core      = deeper_core;
        }

        do   //catchup loop
        {

#if !SKIP_BCE
            PK_TRACE("BCE Runtime Kickoff");
            //right now a blocking call. Need to confirm this.
            instance_scan_init();
#endif

            // todo for catch up case
            //PK_TRACE("X1: Request PCB Arbiter");
            //p9_hcd_core_pcb_arb(core, 1);

            //========================
            MARK_TAG(SX_POWERON, core)
            //========================

            PK_TRACE("X1: Core Poweron");
            p9_hcd_core_poweron(core);

            //=========================
            MARK_TRAP(SX_CHIPLET_RESET)
            //=========================

            PK_TRACE("X2: Core Chiplet Reset");
            p9_hcd_core_chiplet_reset(core);

#if !STOP_PRIME
#if !SKIP_EXIT_CATCHUP

            //catchup
            if (catchup_ongoing)
            {
                core = CME_MASK_BC;
                catchup_ongoing = 0;
            }
            else
            {
                wakeup = (in32(CME_LCL_EISR) >> SHIFT32(17)) & 0x3F;
                out32(CME_LCL_EISR_CLR, wakeup << SHIFT32(17));
                core_catchup =
                    ((wakeup >> 4) | (wakeup >> 2) | (wakeup >> 0)) &
                    CME_MASK_BC;

                if (core_catchup && (core_catchup + core) == CME_MASK_BC)
                {
                    out32(CME_LCL_SICR_OR, core_catchup << SHIFT32(11));

                    if(((core_catchup & CME_MASK_C0) &&
                        G_cme_stop_record.act_level_c0 == STOP_LEVEL_2) ||
                       ((core_catchup & CME_MASK_C1) &&
                        G_cme_stop_record.act_level_c1 == STOP_LEVEL_2))
                    {
                        deeper_core = core;
                        d2u4_flag = 1;
                    }
                    else if(((core_catchup & CME_MASK_C0) &&
                             G_cme_stop_record.act_level_c0 == STOP_LEVEL_4) ||
                            ((core_catchup & CME_MASK_C1) &&
                             G_cme_stop_record.act_level_c1 == STOP_LEVEL_4))
                    {
                        core = core_catchup;
                        catchup_ongoing = 1;
                        continue;
                    }

                    while((core_catchup & (in32(CME_LCL_SISR) >>
                                           SHIFT32(11))) != core_catchup);
                }

                //==========================
                MARK_TAG(SX_CATCHUP_A, core)
                //==========================
            }

#endif

#if !SKIP_INITF
            //==============================
            MARK_TAG(SX_CHIPLET_INITS, core)
            //==============================

            PK_TRACE("X3: Core GPTR Time Initf");
            p9_hcd_core_gptr_time_initf(core);
#endif

            PK_TRACE("X5: Core Chiplet Init");
            p9_hcd_core_chiplet_init(core);

#if !SKIP_INITF
            PK_TRACE("X6: Core Repair Initf");
            p9_hcd_core_repair_initf(core);
#endif

#if !SKIP_EXIT_CATCHUP

            //catchup
            if (catchup_ongoing)
            {
                core = CME_MASK_BC;
                catchup_ongoing = 0;
            }
            else
            {
                wakeup = (in32(CME_LCL_EISR) >> SHIFT32(17)) & 0x3F;
                out32(CME_LCL_EISR_CLR, wakeup << SHIFT32(17));
                core_catchup =
                    ((wakeup >> 4) | (wakeup >> 2) | (wakeup >> 0)) &
                    CME_MASK_BC;

                if (core_catchup && (core_catchup + core) == CME_MASK_BC)
                {
                    out32(CME_LCL_SICR_OR, core_catchup << SHIFT32(11));

                    if(((core_catchup & CME_MASK_C0) &&
                        G_cme_stop_record.act_level_c0 == STOP_LEVEL_2) ||
                       ((core_catchup & CME_MASK_C1) &&
                        G_cme_stop_record.act_level_c1 == STOP_LEVEL_2))
                    {
                        deeper_core = core;
                        d2u4_flag = 1;
                    }
                    else if(((core_catchup & CME_MASK_C0) &&
                             G_cme_stop_record.act_level_c0 == STOP_LEVEL_4) ||
                            ((core_catchup & CME_MASK_C1) &&
                             G_cme_stop_record.act_level_c1 == STOP_LEVEL_4))
                    {
                        core = core_catchup;
                        catchup_ongoing = 1;
                        continue;
                    }

                    while((core_catchup & (in32(CME_LCL_SISR) >>
                                           SHIFT32(11))) != core_catchup);
                }

                //==========================
                MARK_TAG(SX_CATCHUP_B, core)
                //==========================
            }

#endif

#if !SKIP_ARY_INIT
            //===========================
            MARK_TAG(SX_ARRAY_INIT, core)
            //===========================

            PK_TRACE("X7: Core Array Init");
            p9_hcd_core_arrayinit(core);
#endif

#if !SKIP_INITF
            //=====================
            MARK_TRAP(SX_FUNC_INIT)
            //=====================

            PK_TRACE("X8: Core Func Scan");
            p9_hcd_core_initf(core);
#endif
#endif

        }
        while(catchup_ongoing);

        if (d2u4_flag)
        {
            core = CME_MASK_BC;
        }
    }

    //--------------------------------------------------------------------------
    // STOP LEVEL 3
    //--------------------------------------------------------------------------
    if (deeper_level == STOP_LEVEL_3 || target_level == STOP_LEVEL_3)
    {
        //======================
        MARK_TAG(SX_STOP3, core)
        //======================

        PK_TRACE("STOP Level 3 Sequence");
        //Return to full voltage
        //disable ivrm?
    }

    //--------------------------------------------------------------------------
    // STOP LEVEL 2
    //--------------------------------------------------------------------------

    //============================
    MARK_TAG(SX_STARTCLOCKS, core)
    //============================

    PK_TRACE("X9: Start Core Clock");
    p9_hcd_core_startclocks(core);

    // Clear CPPM PECE Shadow
    CME_PUTSCOM(CPPM_PECES, core, 0);

    //--------------------------------------------------------------------------
    // STOP LEVEL 4
    //--------------------------------------------------------------------------

    if (deeper_level >= STOP_LEVEL_4)
    {
        PK_TRACE("STOP Level 4+ Sequence");

        if (d2u4_flag)
        {
            core = deeper_core;
        }

#if !STOP_PRIME
        //===========================
        MARK_TAG(SX_SCOM_INITS, core)
        //===========================

        PK_TRACE("X10: Image Hardcoded Scoms");
        p9_hcd_core_scominit(core);

        //==========================
        MARK_TAG(SX_BCE_CHECK, core)
        //==========================

#if !SKIP_BCE
        PK_TRACE("BCE Runtime Check");

        if( BLOCK_COPY_SUCCESS != isScanRingCopyDone() )
        {
            PK_TRACE("BC2: Copy of Instance Specific Scan ring failed");
            // TODO should return an error code.
        }

#endif

        // todo
        //PK_TRACE("X11: XIP Customized Scoms");
        //MARK_TRAP(SX_SCOMCUST)
        //p9_hcd_core_scomcust(core);

        //==============================
        MARK_TAG(SX_RUNTIME_INITS, core)
        //==============================

        // todo
        //PK_TRACE("X12: RAS Runtime Scom");
        //p9_hcd_core_ras_runtime_scom(core);

        // todo
        //PK_TRACE("X13: OCC Runtime Scom");
        //p9_hcd_core_occ_runtime_scom(core);
#endif

        //=============================
        MARK_TAG(SX_SELF_RESTORE, core)
        //=============================

        PK_TRACE("X14: Core Self Restore");

#if !SKIP_SELF_RESTORE
        PK_TRACE("Raise block interrupt to PC");
        out32(CME_LCL_SICR_OR, core << SHIFT32(3));

        PK_TRACE("RAM HRMOR");

        PK_TRACE("Now Wakeup the Core(pm_exit=1)");
        out32(CME_LCL_SICR_OR, core << SHIFT32(5));

        PK_TRACE("Polling for Core Wakeup(pm_active=0)");

        while((in32(CME_LCL_EINR)) & (core << SHIFT32(21)));

        PK_TRACE("S-Reset all threads");
        CME_PUTSCOM(DIRECT_CONTROLS, core,
                    BIT64(4) | BIT64(12) | BIT64(20) | BIT64(28));

        //==========================
        MARK_TRAP(SX_SRESET_THREADS)
        //==========================

        PK_TRACE("Allow threads to run(pm_exit=0)");
        out32(CME_LCL_SICR_CLR, core << SHIFT32(5));

        PK_TRACE("Poll for Core stop again(pm_active=1)");

        while((~(in32(CME_LCL_EINR))) & (core << SHIFT32(21)));

        //PK_TRACE("Restore PSSCR back to actual level");
        //PLS here:
        if (core & CME_MASK_C0)
            CME_PUTSCOM(DIRECT_CONTROLS, CME_MASK_C0,
                        (((uint64_t)G_cme_stop_record.act_level_c0 <<
                          SHIFT64(36)) | BIT64(32)));

        if (core & CME_MASK_C1)
            CME_PUTSCOM(DIRECT_CONTROLS, CME_MASK_C1,
                        (((uint64_t)G_cme_stop_record.act_level_c1 <<
                          SHIFT64(36)) | BIT64(32)));

        PK_TRACE("Drop block interrupt to PC");
        out32(CME_LCL_SICR_CLR, core << SHIFT32(3));
#endif

        if (d2u4_flag)
        {
            core = CME_MASK_BC;
        }
    }

    //=========================
    MARK_TRAP(SX_ENABLE_ANALOG)
    //=========================

    //--------------------------------------------------------------------------
    // END OF STOP EXIT
    //--------------------------------------------------------------------------

    PK_TRACE("XF: Now Wakeup the Core(pm_exit=1)");
    out32(CME_LCL_SICR_OR, core << SHIFT32(5));

    PK_TRACE("XF: Polling for Core Waking up(pm_active=0)");

    while((in32(CME_LCL_EINR)) & (core << SHIFT32(21)));

    PK_TRACE("XF: Release PCB Mux back to Core");
    out32(CME_LCL_SICR_CLR, core << SHIFT32(11));

    while((core & ~(in32(CME_LCL_SISR) >> SHIFT32(11))) != core);

    PK_TRACE("XF: Update STOP History: STOP Exit Completed");
    CME_STOP_UPDATE_HISTORY(core,
                            STOP_CORE_READY_RUN,
                            STOP_TRANS_COMPLETE,
                            STOP_LEVEL_0,
                            STOP_LEVEL_0,
                            STOP_REQ_DISABLE,
                            STOP_ACT_DISABLE)

    G_cme_stop_record.core_running |=  core;
    G_cme_stop_record.core_stopgpe &= ~core;
    out32(CME_LCL_LMCR_CLR, ((core << SHIFT32(13)) | (core << SHIFT32(15))));

    if (core & CME_MASK_C0)
    {
        G_cme_stop_record.req_level_c0 = 0;
        G_cme_stop_record.act_level_c0 = 0;
    }

    if (core & CME_MASK_C1)
    {
        G_cme_stop_record.req_level_c1 = 0;
        G_cme_stop_record.act_level_c1 = 0;
    }

    PK_TRACE("XF: Drop pm_exit to allow core to run if spwu is not present");
    out32(CME_LCL_SICR_CLR, core << SHIFT32(5));

    //===========================
    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    //===========================

    return CME_STOP_SUCCESS;
}
