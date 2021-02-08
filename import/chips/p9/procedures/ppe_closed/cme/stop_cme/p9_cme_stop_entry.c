/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_entry.c $ */
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
#include "p9_cme_pstate.h"
#include "p9_hcode_image_defines.H"

extern CmeStopRecord G_cme_stop_record;
extern CmeRecord G_cme_record;
extern uint64_t G_spattn_mask;

#if NIMBUS_DD_LEVEL != 10

extern uint8_t  G_pls[MAX_CORES_PER_CME][MAX_THREADS_PER_CORE];
uint64_t        G_scratch[2] = {0};

#endif



#if HW402407_NDD1_TLBIE_STOP_WORKAROUND


void prepare_for_ramming (uint32_t core)
{
    uint64_t        scom_data;

    // Now core thinks its awake and ramming is allowed
    PK_TRACE("RAMMING Put in core maintenance mode via direct controls");
    CME_PUTSCOM(DIRECT_CONTROLS, core, (BIT64(7) | BIT64(15) | BIT64(23) | BIT64(31)));

    PK_TRACE("RAMMING Activate thread0-3 for RAM via THREAD_INFO 18-21");
    CME_PUTSCOM(THREAD_INFO, core, BITS64(18, 4));

    CME_GETSCOM(THREAD_INFO, core, scom_data);
    PK_TRACE("THREAD_INFO core 0x%X 0x%X", core, (uint32_t) (scom_data & 0xFFFFFFFF));


    PK_TRACE("LPID Enable RAM mode via RAM_MODEREG[0]");
    CME_PUTSCOM(RAM_MODEREG, core, BIT64(0));

    PK_TRACE("LPID Set SPR mode to LT0-7 via SPR_MODE[20-27]");
    CME_PUTSCOM(SPR_MODE, core, BITS64(20, 8));

    if (core & CME_MASK_C0)
    {
        PK_TRACE("LPID Set SPRC to scratch0 for core0 via SCOM_SPRC");
        CME_PUTSCOM(SCOM_SPRC, CME_MASK_C0, 0);
    }

    if (core & CME_MASK_C1)
    {
        PK_TRACE("LPID Set SPRC to scratch1 for core1 via SCOM_SPRC");
        CME_PUTSCOM(SCOM_SPRC, CME_MASK_C1, BIT64(60));
    }
}

uint16_t ram_read_lpid( uint32_t core, uint32_t thread )
{
    uint64_t        scom_data = 0;

    PK_TRACE("RAM: mfspr lpidr, gpr0 via RAM_CTRL");
    CME_PUTSCOM(RAM_CTRL, core, RAM_MFSPR_LPIDR_GPR0 | (((uint64_t) thread) << 62));

    PK_TRACE("LPID RAM: mtspr sprd , gpr0 via RAM_CTRL");
    CME_PUTSCOM(RAM_CTRL, core, RAM_MTSPR_SPRD_GPR0 | (((uint64_t) thread) << 62));

    if (core & CME_MASK_C0)
    {
        CME_GETSCOM(SCRATCH0, CME_MASK_C0, scom_data);
    }

    if (core & CME_MASK_C1)
    {
        CME_GETSCOM(SCRATCH1, CME_MASK_C1, scom_data);
    }

    PK_TRACE("RAMMING LPID read for core 0x%X 0x%X", core, (uint32_t) (scom_data & 0xFFFFFFFF));

    if (scom_data > 0xFFF )
    {
        PK_TRACE_ERR("ERROR: Unexpected LPID core %d : 0x%lX 0xFFF. HALT CME!", core, scom_data);
        PK_PANIC(CME_STOP_ENTRY_BAD_LPID_ERROR);
    }

    return ((uint16_t) scom_data);
}

void ram_write_lpid( uint32_t core, uint32_t thread, uint16_t lpid )
{

    PK_TRACE("LPID2 Writing LPID to 0x%X for core 0x%X thread %d", lpid, core, thread);

    if (core & CME_MASK_C0)
    {
        PK_TRACE("LPID Set SPRC to scratch0 for core0 via SCOM_SPRC");
        CME_PUTSCOM(SCOM_SPRC, CME_MASK_C0, 0);
        CME_PUTSCOM(SCRATCH0, CME_MASK_C0, (uint64_t) lpid);
    }

    if (core & CME_MASK_C1)
    {
        PK_TRACE("LPID Set SPRC to scratch1 for core1 via SCOM_SPRC");
        CME_PUTSCOM(SCOM_SPRC, CME_MASK_C1, BIT64(60));
        CME_PUTSCOM(SCRATCH1, CME_MASK_C1, (uint64_t) lpid);
    }

    PK_TRACE("LPID RAM: mfspr sprd , gpr0 via RAM_CTRL");
    CME_PUTSCOM(RAM_CTRL, core, RAM_MFSPR_SPRD_GPR0 | (((uint64_t) thread) << 62));

    PK_TRACE("RAM: mtspr lpidr, gpr0 via RAM_CTRL");
    CME_PUTSCOM(RAM_CTRL, core, RAM_MTSPR_LPIDR_GPR0 | (((uint64_t) thread) << 62));
}


void turn_off_ram_mode (uint32_t core)
{
    PK_TRACE("LPID Disable thread0-3 for RAM via THREAD_INFO");
    CME_PUTSCOM(THREAD_INFO, core, 0);

    PK_TRACE("LPID Disable RAM mode via RAM_MODEREG");
    CME_PUTSCOM(RAM_MODEREG, core, 0);

    PK_TRACE("LPID Clear scratch/spr used in RAM");
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

    PK_TRACE("LPID Clear core maintenance mode via direct controls");
    CME_PUTSCOM(DIRECT_CONTROLS, core, (BIT64(3) | BIT64(11) | BIT64(19) | BIT64(27)));

}

#endif



#if HW405292_NDD1_PCBMUX_SAVIOR

void p9_cme_pcbmux_savior_prologue(uint32_t core)
{
    uint32_t old_msr   = 0;
    uint32_t new_msr   = 0;
    uint64_t scom_data = 0;

    old_msr = mfmsr();
    new_msr = old_msr | 0x7F000000;
    mtmsr(new_msr);
    CME_GETSCOM(0x8F0002, core, scom_data);
    mtmsr(old_msr);
}

void p9_cme_pcbmux_savior_epilogue(uint32_t core)
{
    uint64_t scom_data  = 0;
    uint32_t old_msr   = 0;
    uint32_t new_msr   = 0;

    // Read the value from core CPLT_STAT0.  Ignore the data
    old_msr = mfmsr();
    new_msr = old_msr | 0x7F000000;
    mtmsr(new_msr);
    CME_GETSCOM(0x00000100, core, scom_data);
    mtmsr(old_msr);

}

#endif



void
p9_cme_stop_entry()
{
    int          i = 0;
    uint32_t     timeout = 0;
    uint32_t     the_other_core      = 0;
    int          catchup_ongoing     = 0;
    int          entry_ongoing       = 1;
    uint8_t      target_level        = 0;
    uint8_t      deeper_level        = 0;
    uint32_t     deeper_core         = 0;
#if !SKIP_ENTRY_CATCHUP
    uint8_t      origin_level        = 0;
    uint32_t     origin_core         = 0;
    uint32_t     core_catchup        = 0;
#endif
#if !SKIP_ABORT
    uint32_t     core_wakeup         = 0;
#endif
    uint32_t     core_aborted        = 0;
    uint32_t     core_stop1          = 0;
    uint32_t     core_index          = 0;
    uint32_t     core_mask           = 0;
    uint32_t     core_raw            = 0;
    uint32_t     core                = 0;
#if SMF_SUPPORT_ENABLE
    uint32_t     core_spattn         = 0;
    uint32_t     self_save_core      = 0;
#endif
    uint32_t     thread              = 0;
    uint32_t     pscrs               = 0;
    uint32_t     no_state_loss       = 0;
    uint32_t     pm_states           = 0;
    uint32_t     wake_mask           = 0;
    uint32_t     lclr_data           = 0;
    data64_t     scom_data           = {0};
    ppm_pig_t    pig                 = {0};
    cmeHeader_t* pCmeImgHdr          = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);

#if HW402407_NDD1_TLBIE_STOP_WORKAROUND

    uint16_t     lpid_c0[4]          = {0, 0, 0, 0};
    uint16_t     lpid_c1[4]          = {0, 0, 0, 0};

#endif  // tlbie stop workaround

    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ BEGIN OF STOP ENTRY +++++ +++++");
    //--------------------------------------------------------------------------

    // First we need to determine which of the two STOP interrupts fired.
    // Iow, which of the two cores, "left-0" or "right-1", updated their
    // STOP PM_STATE. If both have fired by the time we get to this point,
    // CME will do Daul-cast to both cores at the same time in entry flow.

    // pm_active is edge trigger because its level can be phantom
    // due to common-core constantly gives pm_active when core is stopped,
    // reading from EINR for raw signal, ignore EISR if EINR signal is gone
    core     = (in32(G_CME_LCL_EISR) & BITS32(20, 2));
    core_raw = (in32(G_CME_LCL_EINR) & BITS32(20, 2));
    out32(G_CME_LCL_EISR_CLR, core);
    core     = (core & core_raw) >> SHIFT32(21);

    // filter with partial good and running core mask
    // core cannot enter stop if core is already stopped
    core = core & G_cme_record.core_enabled &
           G_cme_stop_record.core_running;

    PK_TRACE_DBG("Check: Core Select[%d] Enabled[%d] Running[%d]",
                 core, G_cme_record.core_enabled,
                 G_cme_stop_record.core_running);

    if (!core)
    {
        // PM_ACTIVE can be phantom, only gives warning
        //PK_TRACE_INF("WARNING: Only Phantom PM_ACTIVE to be Ignored. Return");
        return;
    }

    // NDD2: OOB bits wired to SISR
    //       not implemented in DD1
    // bit1 is Recoverable Error
    // bit2 is Special Attention
    if (((core & CME_MASK_C0) && (in32(G_CME_LCL_SISR)    & BITS32(13, 2))) ||
        ((core & CME_MASK_C1) && (in32_sh(CME_LCL_SISR) & BITS64SH(61, 2))))
    {
        //PK_TRACE_INF("WARNING: Attn/Recov Present, Abort Entry and Return");
        return;
    }

    // clear and resample wakeup to make sure
    // only wakeup requested after pm_active
    // is used to wakeup after current stop
    wake_mask = ((core << SHIFT32(13)) | (core << SHIFT32(17)));
    out32(G_CME_LCL_EISR_CLR, wake_mask);
    core_raw = in32(G_CME_LCL_EINR) & wake_mask;
    out32(G_CME_LCL_EISR_OR, core_raw);

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

            for (core_mask = 2; core_mask; core_mask--)
            {
                if (core & core_mask)
                {
                    core_index = core_mask & 1;
                    no_state_loss = 0;

                    for (thread = 0; thread < MAX_THREADS_PER_CORE; thread++)
                    {
                        // address are 0x20 apart between threads and 0x80 apart between cores
                        pscrs = in32((CME_LCL_PSCRS00 + (core_index << 7) + (thread << 5)));

                        // if either esl or ec bit is off with at least one thread
                        if ((~pscrs) & BITS32(2, 2))
                        {
                            no_state_loss = 1;
                            break;
                        }
                    }

                    G_cme_stop_record.req_level[core_index] =
                        (pm_states & BITS64SH((36 + (core_index << 2)), 4)) >>
                        SHIFT64SH((39 + (core_index << 2)));

                    if (G_cme_stop_record.req_level[core_index] == STOP_LEVEL_1)
                    {
                        G_cme_stop_record.act_level[core_index] = STOP_LEVEL_1;
                        core &= ~core_mask;
                    }

                    if ((pCmeImgHdr->g_cme_mode_flags & CME_STOP_11_TO_8_BIT_POS) &&
                        (G_cme_stop_record.req_level[core_index] >= STOP_LEVEL_11))
                    {
                        G_cme_stop_record.req_level[core_index] = STOP_LEVEL_8;
                    }

                    if ((pCmeImgHdr->g_cme_mode_flags & CME_STOP_8_TO_5_BIT_POS) &&
                        (G_cme_stop_record.req_level[core_index] >= STOP_LEVEL_8 &&
                         G_cme_stop_record.req_level[core_index] <  STOP_LEVEL_11))
                    {
                        G_cme_stop_record.req_level[core_index] = STOP_LEVEL_5;
                    }

                    if ((pCmeImgHdr->g_cme_mode_flags & CME_STOP_5_TO_4_BIT_POS) &&
                        (G_cme_stop_record.req_level[core_index] >= STOP_LEVEL_5 &&
                         G_cme_stop_record.req_level[core_index] <  STOP_LEVEL_8))
                    {
                        G_cme_stop_record.req_level[core_index] = STOP_LEVEL_4;
                    }

                    // Convert everything to stop2 if no state loss
                    // stop1 doesnt use req_level variable so doesnt matter
                    if (no_state_loss ||
                        ((pCmeImgHdr->g_cme_mode_flags & CME_STOP_4_TO_2_BIT_POS) &&
                         (G_cme_stop_record.req_level[core_index] == STOP_LEVEL_4)))
                    {
                        G_cme_stop_record.req_level[core_index] = STOP_LEVEL_2;
                    }
                }
            }

            PK_TRACE_DBG("Check: Stop Levels Request[%d %d] Actual[%d, %d]",
                         G_cme_stop_record.req_level[0],
                         G_cme_stop_record.req_level[1],
                         G_cme_stop_record.act_level[0],
                         G_cme_stop_record.act_level[1]);

            if (!core)
            {
                //PK_TRACE_INF("WARNING: STOP1 PM_ACTIVE to be Ignored. Return");
                return;
            }

            // Mark core as to be stopped
            G_cme_stop_record.core_running &= ~core;


#if !DISABLE_PERIODIC_CORE_QUIESCE && (NIMBUS_DD_LEVEL == 20 || NIMBUS_DD_LEVEL == 21 || CUMULUS_DD_LEVEL == 10)

            G_cme_record.fit_record.core_quiesce_fit_trigger = 0;

#endif

            // Stop 1

            if(core_stop1)
            {
                PK_TRACE_DBG("Check: core[%d] core_stop1[%d]", core, core_stop1);


#if HW386841_NDD1_DSL_STOP1_FIX

                //----------------------------------------------------------------------
                PK_TRACE("+++++ +++++ STOP LEVEL 1 ENTRY +++++ +++++");
                //----------------------------------------------------------------------

                // Note: Only Stop1 requires pulsing entry ack to pc,
                //       thus this is NDD1 only as well.
                PK_TRACE("Pulse STOP entry acknowledgement to PC via SICR[0/1]");
                out32(G_CME_LCL_SICR_OR,  core_stop1 << SHIFT32(1));
                out32(G_CME_LCL_SICR_CLR, core_stop1 << SHIFT32(1));

                if (core & CME_MASK_C0)
                {
                    scom_data.value = in64(CME_LCL_PECESR0);
                    CME_PUTSCOM(CPPM_PECES, CME_MASK_C0, scom_data.value);
                }

                if (core & CME_MASK_C1)
                {
                    scom_data.value = in64(CME_LCL_PECESR1);
                    CME_PUTSCOM(CPPM_PECES, CME_MASK_C1, scom_data.value);
                }

                // Removed: Do not want users to become accustomed to
                //          seeing Stop1 reflected in Stop History on DD1
                /*
                PK_TRACE("Update STOP history: in core stop level 1");
                scom_data.words.lower = 0;
                scom_data.words.upper = SSH_ACT_LV1_COMPLETE;
                CME_PUTSCOM(PPM_SSHSRC, core_stop1, scom_data.value);
                */

                core = core & ~core_stop1;

                if (!core)
                {
                    // not catchup or catchup with stop2, terminates
                    entry_ongoing = 0;

#if !SKIP_ENTRY_CATCHUP

                    // otherwise, go back to origin core and continue
                    if (origin_core && (origin_level > STOP_LEVEL_2))
                    {
                        core          = origin_core;
                        target_level  = origin_level;
                        entry_ongoing = 1;
                    }

#endif

                    break;
                }

#else

                // Nap should be done by hardware when auto_stop1 is enabled
                // Halt on error if target STOP level == 1(Nap)
                PK_TRACE_ERR("ERROR: Stop 1 Requested to CME When AUTO_STOP1 Enabled, HALT CME!");
                PK_PANIC(CME_STOP_ENTRY_WITH_AUTO_NAP);

#endif

            }

            //----------------------------------------------------------------------
            PK_TRACE("+++++ +++++ STOP LEVEL 2 ENTRY +++++ +++++");
            //----------------------------------------------------------------------

            // set target_level from pm_state for both cores or just one core
            target_level = (core == CME_MASK_C0) ? G_cme_stop_record.req_level[0] :
                           G_cme_stop_record.req_level[1];

            // If both cores are going into STOP but targeting different levels,
            if ((core == CME_MASK_BC) &&
                (G_cme_stop_record.req_level[0] != G_cme_stop_record.req_level[1]))
            {
                // set target_level to the lighter level targeted by one core
                // set deeper_level to the deeper level targeted by deeper core
                deeper_level = G_cme_stop_record.req_level[0];
                deeper_core  = CME_MASK_C0;

                if (G_cme_stop_record.req_level[0] < G_cme_stop_record.req_level[1])
                {
                    target_level = G_cme_stop_record.req_level[0];
                    deeper_level = G_cme_stop_record.req_level[1];
                    deeper_core  = CME_MASK_C1;
                }
            }

            PK_TRACE("Update STOP history: in transition of entry");
            // Set req_level_level to target_level of either both or just one core
            scom_data.words.lower = 0;
            scom_data.words.upper = (SSH_REQ_LEVEL_UPDATE |
                                     (((uint32_t)target_level) << SHIFT32(7)));
            CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);

            // Set req_level_level to deeper_level for deeper core
            if (deeper_core)
            {
                scom_data.words.lower = 0;
                scom_data.words.upper = (SSH_REQ_LEVEL_UPDATE |
                                         (((uint32_t)deeper_level) << SHIFT32(7)));
                CME_PUTSCOM(PPM_SSHSRC, deeper_core, scom_data.value);
            }

            PK_TRACE_DBG("Check: core[%d] target_lv[%d] deeper_lv[%d] deeper_core[%d]",
                         core, target_level, deeper_level, deeper_core);

            // Request PCB Mux

#if HW405292_NDD1_PCBMUX_SAVIOR

            p9_cme_pcbmux_savior_prologue(core);

#endif

            PK_TRACE("Request PCB mux via SICR[10/11]");
            out32(G_CME_LCL_SICR_OR, core << SHIFT32(11));

            // Poll Infinitely for PCB Mux Grant
            while((core & (in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core);

            PK_TRACE("PCB Mux Granted on Core[%d]", core);

#if HW405292_NDD1_PCBMUX_SAVIOR

            p9_cme_pcbmux_savior_epilogue(core);

#endif


            // ---------------------------------
            // Permanent workaround for HW407385

            wrteei(0);

            PK_TRACE("HW407385: Assert block interrupt to PC via SICR[2/3]");
            out32(G_CME_LCL_SICR_OR, core << SHIFT32(3));

            PK_TRACE("HW407385: Waking up the core(pm_exit=1) via SICR[4/5]");
            out32(G_CME_LCL_SICR_OR, core << SHIFT32(5));

            CME_PM_EXIT_DELAY

            PK_TRACE("HW407385: Polling for core wakeup(pm_active=0) via EINR[20/21]");

            while((in32(G_CME_LCL_EINR)) & (core << SHIFT32(21)));

            wrteei(1);

            // end of HW407385
            // ---------------------------------


#if NIMBUS_DD_LEVEL != 10

#ifdef PLS_DEBUG

            PK_TRACE("RAMMING Read RAS_STATUS[(0 + 8*T)] CORE_MAINT_MODE to find out which threads are in maintenance mode");

            if (core & CME_MASK_C0)
            {
                CME_GETSCOM(RAS_STATUS, CME_MASK_C0, scom_data.value);
                //PKTRACE("CheckA RAS_STATUS_UPPER Core0 %X", scom_data.words.upper);
            }

            if (core & CME_MASK_C1)
            {
                CME_GETSCOM(RAS_STATUS, CME_MASK_C1, scom_data.value);
                //PKTRACE("CheckA RAS_STATUS_UPPER Core1 %X", scom_data.words.upper);
            }

#endif

            // This will quiesce the active threads, put all threads into core maintenance mode,
            // and eventually quiesce the entire core. Now core thinks its awake and ramming is allowed
            PK_TRACE("RAMMING Assert DC_CORE_STOP for ALL threads via DIRECT_CONTROL");
            CME_PUTSCOM(DIRECT_CONTROLS, core, (BIT64(7) | BIT64(15) | BIT64(23) | BIT64(31)));

            PK_TRACE("RAMMING Loop on RAS_STATUS [(3 + 8*T)]LSU_QUIESCED and [(1 + 8*T)]THREAD_QUIESCE are active");

            do
            {

                CME_GETSCOM_AND(RAS_STATUS, core, scom_data.value);
#ifdef PLS_DEBUG
                //PKTRACE("CheckB RAS_STATUS_AND_UPPER %X", scom_data.words.upper);
#endif
            }
            while((scom_data.words.upper & (BIT32(1) | BIT32(3) | BIT32(9) | BIT32(11) | BIT32(17) | BIT32(19) | BIT32(25) | BIT32(
                                                27)))
                  != (BIT32(1) | BIT32(3) | BIT32(9) | BIT32(11) | BIT32(17) | BIT32(19) | BIT32(25) | BIT32(27)));

            PK_TRACE("RAMMING Loop on RAS_STATUS[32] NEST_ACTIVE is 0");

            do
            {

                CME_GETSCOM_OR(RAS_STATUS, core, scom_data.value);
#ifdef PLS_DEBUG
                //PKTRACE("CheckC RAS_STATUS_OR_LOWER[0] %X", scom_data.words.lower);
#endif
            }
            while(scom_data.words.lower & BIT32(0));

            PK_TRACE("RAMMING Loop on THREAD_INFO[23] THREAD_ACTION_IN_PROGRESS is 0");

            do
            {

                CME_GETSCOM_OR(THREAD_INFO, core, scom_data.value);
#ifdef PLS_DEBUG
                //PKTRACE("CheckD THREAD_INFO_OR_UPPER[23] %X", scom_data.words.upper);
#endif
            }
            while(scom_data.words.upper & BIT32(23));

#ifdef PLS_DEBUG

            PK_TRACE("RAMMING Read THREAD_INFO[0:3] to find out which threads are active");

            if (core & CME_MASK_C0)
            {
                CME_GETSCOM(THREAD_INFO, CME_MASK_C0, scom_data.value);
                //PKTRACE("CheckE THREAD_INFO_UPPER[0:3] Core0 %X", scom_data.words.upper);
            }

            if (core & CME_MASK_C1)
            {
                CME_GETSCOM(THREAD_INFO, CME_MASK_C1, scom_data.value);
                //PKTRACE("CheckE THREAD_INFO_UPPER[0:3] Core1 %X", scom_data.words.upper);
            }

            PK_TRACE("RAMMING Read CORE_THREAD_STATE[56:59] to find out which threads are stopped");

            if (core & CME_MASK_C0)
            {
                CME_GETSCOM(CORE_THREAD_STATE, CME_MASK_C0, scom_data.value);
                //PKTRACE("CheckF CORE_THREAD_STATE[56:59] Core0 %X %X", scom_data.words.upper, scom_data.words.lower);
            }

            if (core & CME_MASK_C1)
            {
                CME_GETSCOM(CORE_THREAD_STATE, CME_MASK_C1, scom_data.value);
                //PKTRACE("CheckF CORE_THREAD_STATE[56:59] Core1 %X %X", scom_data.words.upper, scom_data.words.lower);
            }

#endif

            PK_TRACE("RAMMING Activate thread[0:3] for RAM via THREAD_INFO[18:21]");
            CME_PUTSCOM(THREAD_INFO, core, BITS64(18, 4));

            do
            {

                CME_GETSCOM_AND(THREAD_INFO, core, scom_data.value);
#ifdef PLS_DEBUG
                //PKTRACE("CheckG THREAD_INFO_AND_UPPER[0:3] %X", scom_data.words.upper);
#endif
            }
            while((scom_data.words.upper & BITS32(0, 4)) != BITS32(0, 4));

            PK_TRACE("RAMMING Enable RAM mode via RAM_MODEREG[0]");
            CME_PUTSCOM(RAM_MODEREG, core, BIT64(0));

            PK_TRACE("RAMMING Set SPR mode to LT0-7 via SPR_MODE[20-27]");
            CME_PUTSCOM(SPR_MODE, core, BITS64(20, 8));

            PK_TRACE("RAMMING Set SPRC to scratch1 for cores via SCOM_SPRC");
            CME_PUTSCOM(SCOM_SPRC, core, BIT64(60));

            PK_TRACE("Save off Scratch1 Register from cores");

            if (core & CME_MASK_C0)
            {
                CME_GETSCOM(SCRATCH1, CME_MASK_C0, G_scratch[0]);
            }

            if (core & CME_MASK_C1)
            {
                CME_GETSCOM(SCRATCH1, CME_MASK_C1, G_scratch[1]);
            }

            PK_TRACE("Write default Data into Scratch1 Register");
            CME_PUTSCOM(SCRATCH1, core, 0xDEADBEEFDEADBEEF);

            for(core_mask = CME_MASK_C0; core_mask > 0; core_mask --)
            {
                if (core_mask & core)
                {
                    for(thread = 0; thread < 4; thread++)
                    {
                        PK_TRACE("PSSCR RAM: mfspr psscr, gpr0 via RAM_CTRL");
                        CME_PUTSCOM(RAM_CTRL, core_mask, RAM_MFSPR_PSSCR_GPR0 | (((uint64_t) thread) << 62));

                        do
                        {
                            CME_GETSCOM(RAM_STATUS, core_mask, scom_data.value);
                        }
                        while(!(scom_data.words.upper & BIT32(1)));

                        PK_TRACE("PSSCR RAM: mtspr sprd , gpr0 via RAM_CTRL");
                        CME_PUTSCOM(RAM_CTRL, core_mask, RAM_MTSPR_SPRD_GPR0 | (((uint64_t) thread) << 62));

                        do
                        {
                            CME_GETSCOM(RAM_STATUS, core_mask, scom_data.value);
                        }
                        while(!(scom_data.words.upper & BIT32(1)));

                        do
                        {
                            CME_GETSCOM(SCRATCH1, core_mask, scom_data.value);
                        }
                        while ((scom_data.words.upper == 0xDEADBEEF) || (scom_data.words.lower == 0xDEADBEEF));

                        if (scom_data.words.lower & BIT64SH(41))
                        {
                            G_pls[core_mask & 1][thread] = 11;
                        }
                        else
                        {
                            G_pls[core_mask & 1][thread] = (scom_data.words.upper & BITS32(0, 4)) >> SHIFT32(3);
                        }

#ifdef PLS_DEBUG
                        /*                        PKTRACE("cXtX PSSCR %X %X G_pls %x core %d",
                                                        scom_data.words.upper, scom_data.words.lower, G_pls[core_mask & 1][thread], core);
                        */
#endif

                    }
                }
            }

            PK_TRACE("RAMMING Disable thread0-3 for RAM via THREAD_INFO");
            CME_PUTSCOM(THREAD_INFO, core, 0);

            PK_TRACE("RAMMING Disable RAM mode via RAM_MODEREG");
            CME_PUTSCOM(RAM_MODEREG, core, 0);

            PK_TRACE("RAMMING Clear scratch/spr used in RAM");
            CME_PUTSCOM(SPR_MODE,  core, 0);
            CME_PUTSCOM(SCOM_SPRC, core, 0);

            if (core & CME_MASK_C0)
            {
#ifdef PLS_DEBUG
                //PKTRACE("SCRATCH1 %x %x", (G_scratch[0] >> 32), (G_scratch[0] & 0xffffffff));
#endif
                CME_PUTSCOM(SCRATCH1, CME_MASK_C0, G_scratch[0]);
            }

            if (core & CME_MASK_C1)
            {
#ifdef PLS_DEBUG
                //PKTRACE("SCRATCH1 %x %x", (G_scratch[1] >> 32), (G_scratch[1] & 0xffffffff));
#endif
                CME_PUTSCOM(SCRATCH1, CME_MASK_C1, G_scratch[1]);
            }

            PK_TRACE("RAMMING Clear core maintenance mode via direct controls");
            CME_PUTSCOM(DIRECT_CONTROLS, core, (BIT64(3) | BIT64(11) | BIT64(19) | BIT64(27)));

            sync();

#endif

            // ---------------------------------
            // Permanent workaround for HW407385

            wrteei(0);

            PK_TRACE("HW407385: Drop pm_exit via SICR[4/5]");
            out32(G_CME_LCL_SICR_CLR, core << SHIFT32(5));

            PK_TRACE("HW407385: Polling for core to stop(pm_active=1) via EINR[20/21]");

            while((~(in32(G_CME_LCL_EINR))) & (core << SHIFT32(21)));

            PK_TRACE("HW407385: Clear pm_active status via EISR[20/21]");
            out32(G_CME_LCL_EISR_CLR, core << SHIFT32(21));

            PK_TRACE("HW407385: Drop block interrupt to PC via SICR[2/3]");
            out32(G_CME_LCL_SICR_CLR, core << SHIFT32(3));

            wrteei(1);

            // end of HW407385
            // ---------------------------------

            PK_TRACE_INF("entering core %x core_running %x, stop1prime %x",
                         core, G_cme_stop_record.core_running, G_cme_stop_record.core_stop1prime);

            // Check if the entry is dealing with only 1 core
            if( core != CME_MASK_BC )
            {
                // check if the non-targeted core is running
                the_other_core = G_cme_stop_record.core_running & (~core) & CME_MASK_BC;

                // if other core is running, pause stop2+ stop entry
                // wait until the other core comes to stop2+
                if( the_other_core )
                {
                    G_cme_stop_record.core_stop1prime |= core;
                    scom_data.words.lower = 0;
                    scom_data.words.upper = SSH_ACT_LV1_COMPLETE;
                    CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);
                    return;
                }
                // if other core is stopped:
                // A) the other core is also previously entered stop1prime
                //    then continue stop2+ with both cores targeted
                // B) the other core is previously entered stop2+(did not wakeup)
                //    then still target the current core to continue on stop2+
                else
                {
                    // consider the other core for its in stop(without running qualifier)
                    the_other_core = (~core) & CME_MASK_BC;

                    if( G_cme_stop_record.core_stop1prime & the_other_core )
                    {
                        // Handle cases that request level from both cores are different
                        //   if same, deeper_core has to be 0, target level doesnt need to change
                        if (G_cme_stop_record.req_level[the_other_core & 1] > target_level )
                        {
                            deeper_level = G_cme_stop_record.req_level[the_other_core & 1];
                            deeper_core = the_other_core;
                        }

                        if (G_cme_stop_record.req_level[the_other_core & 1] < target_level )
                        {
                            deeper_level = target_level;
                            target_level = G_cme_stop_record.req_level[the_other_core & 1];
                            deeper_core = core;
                        }

                        //both core enters now
                        core = CME_MASK_BC;

                        // reset the prime state if core into deeper stop state
                        // thus their wakeup and re-entry will be counted without prime
                        G_cme_stop_record.core_stop1prime = 0;
                    }
                }
            }

            // ---------------------------------
            // Permanent workaround for HW407385

            wrteei(0);

            PK_TRACE("HW407385: Assert block interrupt to PC via SICR[2/3]");
            out32(G_CME_LCL_SICR_OR, core << SHIFT32(3));

            PK_TRACE("HW407385: Waking up the core(pm_exit=1) via SICR[4/5]");
            out32(G_CME_LCL_SICR_OR, core << SHIFT32(5));

            CME_PM_EXIT_DELAY

            PK_TRACE("HW407385: Polling for core wakeup(pm_active=0) via EINR[20/21]");

            while((in32(G_CME_LCL_EINR)) & (core << SHIFT32(21)));

            wrteei(1);

            // end of HW407385
            // ---------------------------------

#if SMF_SUPPORT_ENABLE

            if (G_cme_stop_record.req_level[0] >= STOP_LEVEL_4)
            {
                self_save_core  |=   CME_MASK_C0;
            }

            if (G_cme_stop_record.req_level[1] >= STOP_LEVEL_4)
            {
                self_save_core  |=   CME_MASK_C1;
            }

            self_save_core = self_save_core & core;

            if ( self_save_core )
            {

                p9_cme_stop_self_execute(self_save_core, SPR_SELF_SAVE);

                PK_TRACE("Poll for core stop again(pm_active=1)");

                while((~(in32(G_CME_LCL_EINR))) & (self_save_core << SHIFT32(21)))
                {
                    core_spattn = (in32_sh(CME_LCL_SISR) >> SHIFT64SH(33)) & self_save_core;

                    if (core_spattn)
                    {
                        PK_TRACE_ERR("ERROR: Core[%d] Special Attention Detected. Gard Core!", core_spattn);
                        CME_STOP_CORE_ERROR_HANDLER(self_save_core, core_spattn, CME_STOP_EXIT_SELF_RES_SPATTN);

                        PK_TRACE("Release PCB Mux back on Core via SICR[10/11]");
                        out32(G_CME_LCL_SICR_CLR, core_spattn << SHIFT32(11));

                        while((core_spattn & ~(in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core_spattn);

                        PK_TRACE("PCB Mux Released on Core[%d]", core_spattn);
                    }

                    if (!self_save_core)
                    {

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

                        continue;

#else

                        return;

#endif

                    }
                }

                PK_TRACE("SF.RS: Self Save Completed, Core Stopped Again(pm_exit=0/pm_active=1)");

                p9_cme_stop_self_cleanup(self_save_core);

            }// if self_save_core

#endif


// ====================================
#if HW402407_NDD1_TLBIE_STOP_WORKAROUND

            // Save thread's LPIDs and overwrite with POWMAN_RESERVED_LPID
            prepare_for_ramming(core);

            for (thread = 0; thread < 4; thread++ )
            {
                if (core & CME_MASK_C0)
                {
                    lpid_c0[thread] = ram_read_lpid(CME_MASK_C0, thread);
                    PK_TRACE("c0lpid %X thread %X", (uint32_t) lpid_c0[thread], thread);
                }

                if (core & CME_MASK_C1)
                {
                    lpid_c1[thread] = ram_read_lpid(CME_MASK_C1, thread);
                    PK_TRACE("c1lpid %X thread %X", (uint32_t) lpid_c1[thread], thread);
                }
            }

            for (thread = 0; thread < 4; thread++ )
            {
                if (core & CME_MASK_C0)
                {
                    ram_write_lpid(CME_MASK_C0, thread, POWMAN_RESERVED_LPID);

#if HW402407_PARANOID_LPID_MODE

                    if (ram_read_lpid(CME_MASK_C0, thread) != POWMAN_RESERVED_LPID)
                    {
                        PK_TRACE_ERR("ERROR: C0 READ LPID not equal to expected value. HALT CME!");
                        PK_PANIC(CME_STOP_ENTRY_BAD_LPID_ERROR);
                    }

#endif
                }

                if (core & CME_MASK_C1)
                {
                    ram_write_lpid(CME_MASK_C1, thread, POWMAN_RESERVED_LPID);

#if HW402407_PARANOID_LPID_MODE

                    if (ram_read_lpid(CME_MASK_C1, thread) != POWMAN_RESERVED_LPID)
                    {
                        PK_TRACE_ERR("ERROR: C1 READ LPID not equal to expected value. HALT CME!");
                        PK_PANIC(CME_STOP_ENTRY_BAD_LPID_ERROR);
                    }

#endif
                }
            }

            sync();

#endif // tlbie stop workaround
// ====================================



            //PK_TRACE_INF("SE.2A: Core[%d] PCB Mux Granted", core);

            //=============================
            MARK_TRAP(SE_QUIESCE_CORE_INTF)
            //=============================

            PK_TRACE("Assert halt STOP override disable via LMCR[14/15]");
            out32(G_CME_LCL_LMCR_OR, (core << SHIFT32(15)));

#if SPWU_AUTO
            PK_TRACE("Assert auto special wakeup disable via LMCR[12/13]");
            out32(G_CME_LCL_LMCR_OR, (core << SHIFT32(13)));
#endif


#if HW402407_NDD1_TLBIE_STOP_WORKAROUND
            // Need to wait for any pending TLBIEs to complete
            PPE_WAIT_CORE_CYCLES(2000)
#endif

            PK_TRACE("Assert core-L2 + core-CC quiesces via SICR[6/7,8/9]");
            out32(G_CME_LCL_SICR_OR, (core << SHIFT32(7)) | (core << SHIFT32(9)));

            PK_TRACE("Poll for L2 interface quiesced via SISR[30/31]");

            do
            {
                lclr_data = in32(G_CME_LCL_SISR);
            }
            while((lclr_data & core) != core);

            // Waits quiesce done for at least 512 core cycles
            PPE_WAIT_CORE_CYCLES(512)

            PK_TRACE_DBG("SE.2B: Interfaces Quiesced");


// ====================================
#if HW402407_NDD1_TLBIE_STOP_WORKAROUND

            // Restore thread's LPIDs

            for (thread = 0; thread < 4; thread++ )
            {
                if (core & CME_MASK_C0)
                {
                    ram_write_lpid(CME_MASK_C0, thread, lpid_c0[thread]);
                }

                if (core & CME_MASK_C1)
                {
                    ram_write_lpid(CME_MASK_C1, thread, lpid_c1[thread]);
                }
            }

#if HW402407_PARANOID_LPID_MODE

            // Read back and check
            for (thread = 0; thread < 4; thread++ )
            {
                if (core & CME_MASK_C0)
                {
                    if (ram_read_lpid(CME_MASK_C0, thread) != lpid_c0[thread])
                    {
                        PK_TRACE_ERR("ERROR: Core0 READ LPID not equal to expected value. HALT CME!");
                        PK_PANIC(CME_STOP_ENTRY_BAD_LPID_ERROR);
                    }
                }

                if (core & CME_MASK_C1)
                {
                    if (ram_read_lpid(CME_MASK_C1, thread) != lpid_c1[thread])
                    {
                        PK_TRACE_ERR("ERROR: Core1 READ LPID not equal to expected value. HALT CME!");
                        PK_PANIC(CME_STOP_ENTRY_BAD_LPID_ERROR);
                    }
                }
            }

#endif
            turn_off_ram_mode (core);

            sync();

#endif // tlbie stop workaround
// ====================================


            // ---------------------------------
            // Permanent workaround for HW407385

            wrteei(0);

            PK_TRACE("HW407385: Drop pm_exit via SICR[4/5]");
            out32(G_CME_LCL_SICR_CLR, core << SHIFT32(5));

            PK_TRACE("HW407385: Polling for core to stop(pm_active=1) via EINR[20/21]");

            while((~(in32(G_CME_LCL_EINR))) & (core << SHIFT32(21)));

            PK_TRACE("HW407385: Clear pm_active status via EISR[20/21]");
            out32(G_CME_LCL_EISR_CLR, core << SHIFT32(21));

            PK_TRACE("HW407385: Drop block interrupt to PC via SICR[2/3]");
            out32(G_CME_LCL_SICR_CLR, core << SHIFT32(3));

            wrteei(1);

            // end of HW407385
            // ---------------------------------

            //==========================
            MARK_TRAP(SE_STOP_CORE_CLKS)
            //==========================

            sync();

            PK_TRACE("Assert core chiplet fence via NET_CTRL0[18]");
            CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(18));

            sync();

            PK_TRACE("Clear SCAN_REGION_TYPE prior to stop core clocks");
            CME_PUTSCOM(C_SCAN_REGION_TYPE, core, 0);

#if NIMBUS_DD_LEVEL == 10

            // NDD1: Core Global Xstop FIR
            for (core_mask = 2; core_mask > 0; core_mask--)
            {
                if (core & core_mask)
                {
                    CME_GETSCOM(0x20040000, core_mask, scom_data.value);

                    if (scom_data.value)
                    {
                        PK_TRACE_ERR("ERROR: Core[%d] GLOBAL XSTOP[%x] DETECTED. Gard Core!",
                                     core_mask, scom_data.words.upper);
                        CME_STOP_CORE_ERROR_HANDLER(core, core_mask, CME_STOP_ENTRY_XSTOP_ERROR)
                    }

                    if (!core)
                    {
                        return;
                    }
                }

            }

#endif

            PK_TRACE("Stop Core Clocks via CLK_REGION");
            CME_PUTSCOM(C_CLK_REGION, core,
                        (CLK_STOP_CMD | CLK_REGION_ALL_BUT_PLL | CLK_THOLD_ALL));

            PK_TRACE("Poll for core clocks stopped via CPLT_STAT0[8]");

            do
            {
                CME_GETSCOM_AND(C_CPLT_STAT0, core, scom_data.value);
            }
            while(!(scom_data.words.upper & BIT32(8)));

            PK_TRACE("Check core clock is stopped via CLOCK_STAT_SL[4-13]");

            for (core_mask = 2; core_mask > 0; core_mask--)
            {
                if (core & core_mask)
                {
                    CME_GETSCOM(C_CLOCK_STAT_SL, core_mask, scom_data.value);

                    if (((~scom_data.value) & CLK_REGION_ALL_BUT_PLL) != 0)
                    {
                        PK_TRACE_ERR("ERROR: Core[%d] Clock Stop Failed. Gard Core!", core_mask);
                        CME_STOP_CORE_ERROR_HANDLER(core, core_mask, CME_STOP_ENTRY_STOPCLK_FAILED);

                        if (!core)
                        {
                            return;
                        }
                    }
                }
            }

            PK_TRACE_DBG("SE.2C: Core Clock Stopped");

            //==============================
            MARK_TRAP(SE_STOP_CORE_GRID)
            //==============================

            sync();

            PK_TRACE("Drop clock sync enable before switch to refclk via CACCR[15]");
            CME_PUTSCOM(CPPM_CACCR_CLR, core, BIT64(15));

            PK_TRACE("Poll for clock sync done to drop via CACSR[13]");

            do
            {
                CME_GETSCOM_OR(CPPM_CACSR, core, scom_data.value);
            }
            while(scom_data.words.upper & BIT32(13));

            wrteei(0);
            p9_cme_core_stop_analog_control(core, ANALOG_DISABLE);
            wrteei(1);

            PK_TRACE("Switch glsmux to refclk to save clock grid power via CGCR[3]");
            CME_PUTSCOM(C_PPM_CGCR, core, 0);

            PK_TRACE("Assert skew sense to skewadjust fence via NET_CTRL0[22]");
            CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(22));

            sync();

            PK_TRACE("Drop ABIST_SRAM_MODE_DC to support ABIST Recovery via BIST[1]");
            CME_GETSCOM(C_BIST, core, scom_data.value);
            scom_data.words.upper &= ~BIT32(1);
            CME_PUTSCOM(C_BIST, core, scom_data.value);

            PK_TRACE("Assert vital fence via CPLT_CTRL1[3]");
            CME_PUTSCOM(C_CPLT_CTRL1_OR, core, BIT64(3));

            PK_TRACE("Assert regional fences via CPLT_CTRL1[4-13]");
            CME_PUTSCOM(C_CPLT_CTRL1_OR, core, BITS64(4, 11));

#if NIMBUS_DD_LEVEL == 10

            PK_TRACE("Drop sdis_n(flushing LCBES condition) via CPLT_CONF0[34]");
            CME_PUTSCOM(C_CPLT_CONF0_CLEAR, core, BIT64(34));

#endif

            // Allow queued scoms to complete to Core EPS before switching to Core PPM
            sync();

            PK_TRACE("Copy PECE CME sample to PPM Shadow via PECES");

            if (core & CME_MASK_C0)
            {
                scom_data.value = in64(CME_LCL_PECESR0);
                CME_PUTSCOM(CPPM_PECES, CME_MASK_C0, scom_data.value);
                G_cme_stop_record.act_level[0] = STOP_LEVEL_2;
            }

            if (core & CME_MASK_C1)
            {
                scom_data.value = in64(CME_LCL_PECESR1);
                CME_PUTSCOM(CPPM_PECES, CME_MASK_C1, scom_data.value);
                G_cme_stop_record.act_level[1] = STOP_LEVEL_2;
            }

            PK_TRACE_DBG("SE.2D: Clock Sync Dropped");

            //===========================
            MARK_TAG(SE_STOP2_DONE, core)
            //===========================

            // Round Stop3 to Stop2
            if (target_level == STOP_LEVEL_3)
            {
                target_level = STOP_LEVEL_2;
            }

            if (deeper_level == STOP_LEVEL_3)
            {
                deeper_core  = 0;
                deeper_level = 0;
            }

            PK_TRACE("Update STOP history: in core stop level 2");
            // Check if STOP level 2 reaches the target for both or one core
            entry_ongoing =
                target_level == STOP_LEVEL_2 ?
                STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;

            scom_data.words.lower = 0;
            scom_data.words.upper = (SSH_ACT_LV2_COMPLETE |
                                     (((uint32_t)entry_ongoing) << SHIFT32(3)));
            CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);

            // If both cores targeting different levels
            // deeper core should have at least deeper stop level than 2
            // but only need to modify deeper core history if another one was done
            if (deeper_core && !entry_ongoing)
            {
                scom_data.words.lower = 0;
                scom_data.words.upper = SSH_ACT_LV2_CONTINUE;
                CME_PUTSCOM(PPM_SSHSRC, deeper_core, scom_data.value);

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

            core_catchup = (in32(G_CME_LCL_EISR) & BITS32(20, 2)) >> SHIFT32(21);
            core_catchup = core_catchup & G_cme_record.core_enabled &
                           G_cme_stop_record.core_running;

            if (core_catchup)
            {
                out32(G_CME_LCL_EISR_CLR, core_catchup << SHIFT32(21));
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

            /*** DISABLE STOP4 to STOP2 abort due to UV mode incorrectly reached on such case ***
            #if !SKIP_ABORT

                        core_wakeup = core & (~G_cme_stop_record.core_blockwu);
                        out32(G_CME_LCL_EIMR_CLR, (core_wakeup << SHIFT32(13)) |
                              (core_wakeup << SHIFT32(15)) |
                              (core_wakeup << SHIFT32(17)));
                        sync();
                        wrteei(0);
                        out32(G_CME_LCL_EIMR_OR, BITS32(10, 12));
                        wrteei(1);

            #endif
            */

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
            PK_TRACE("+++++ +++++ STOP LEVEL 4 ENTRY +++++ +++++");
            //----------------------------------------------------------------------

            // NDD2: OOB bits wired to SISR
            //       not implemented in DD1
            // bit0 is System checkstop
            // bit1 is Recoverable Error
            // bit2 is Special Attention
            // bit3 is Core Checkstop

            if ((core & CME_MASK_C0) && (in32(G_CME_LCL_SISR) & BITS32(12, 4)))
            {
                //PK_TRACE_INF("WARNING: Core0 Xstop/Attn/Recov Present, Abort Entry");
                core -= CME_MASK_C0;
            }

            if ((core & CME_MASK_C1) && (in32_sh(CME_LCL_SISR) & BITS64SH(60, 4)))
            {
                //PK_TRACE_INF("WARNING: Core1 Xstop/Attn/Recov Present, Abort Entry");
                core -= CME_MASK_C1;
            }

            if (!core)
            {
                break;
            }

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

            if(in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_VDM_OPERABLE))
            {
                PK_TRACE_DBG("Clear Poweron bit in VDMCR");
                CME_PUTSCOM(PPM_VDMCR_CLR, core, BIT64(0));
            }

            uint32_t TCR_VAL = 0;
            //Disable fit
            TCR_VAL = mfspr(SPRN_TCR);
            TCR_VAL &= ~TCR_FIE;
            mtspr(SPRN_TCR, TCR_VAL);

            PK_TRACE("Drop vdd_pfet_val/sel_override/regulation_finger_en via PFCS[4,5,8]");
            // vdd_pfet_val/sel_override     = 0 (disbaled)
            // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
            CME_PUTSCOM(PPM_PFCS_CLR, core, BIT64(4) | BIT64(5) | BIT64(8));

            PK_TRACE("Power off core VDD via PFCS[0-1]");
            // vdd_pfet_force_state = 01 (Force Voff)
            CME_PUTSCOM(PPM_PFCS_OR, core, BIT64(1));

            PK_TRACE("Poll for vdd_pfets_disabled_sense via PFSNS[1]");

            CME_GETSCOM_OR( CPPM_CSAR, core, scom_data.value );

            if( BIT64(CPPM_CSAR_STOP_HCODE_ERROR_INJECT) & scom_data.value )
            {
                // Clear the injection so things are not permenently stuck
                CME_PUTSCOM(CPPM_CSAR_CLR, core, BIT64(CPPM_CSAR_STOP_HCODE_ERROR_INJECT));
                PK_TRACE_DBG("CME STOP ENTRY ERROR INJECT TRAP");
                PK_PANIC(CME_STOP_ENTRY_TRAP_INJECT);
            }

            //500Mhz gives 2ns per ppe cycle
            //pfet or stop should finish within 1ms
            //set delay to 20ns
#define PFET_DELAY    20
#define PFET_TIMEOUT  20000

            timeout = PFET_TIMEOUT;

            do
            {
                CME_GETSCOM_AND(PPM_PFSNS, core, scom_data.value);

                timeout--;

                if( !timeout )
                {
                    CME_PUTSCOM_NOP(CPPM_CPMMR_OR, core, ((uint64_t)(core) << SHIFT64(6)));
                    //PK_TRACE_ERR("PFET SENSE TIMED OUT, HALT CME!");

//                    if( in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_PFET_DELAY_TO_TIMEOUT) )
//                    {
                    PK_PANIC(CME_PFET_ENTRY_SENSE_TIMEOUT);
//                    }
//                    else
//                    {
//                        break;
//                    }
                }

                for(i = 0; i < PFET_DELAY; i++)
                {
                    asm volatile ("tw 0, 0, 0");
                }
            }
            while(!(scom_data.words.upper & BIT32(1)));

            //enable fit
            TCR_VAL |= TCR_FIE;
            mtspr(SPRN_TCR, TCR_VAL);

            PK_TRACE("Turn off force voff via PFCS[0-1]");
            // vdd_pfet_force_state = 00 (Nop)
            CME_PUTSCOM(PPM_PFCS_CLR, core, BITS64(0, 2));

            PK_TRACE_DBG("SE.4A: Core[%d] Powered Off", core);

#endif

            if (core & CME_MASK_C0)
            {
                G_cme_stop_record.act_level[0] = STOP_LEVEL_4;
            }

            if (core & CME_MASK_C1)
            {
                G_cme_stop_record.act_level[1] = STOP_LEVEL_4;
            }

            //===========================
            MARK_TAG(SE_STOP4_DONE, core)
            //===========================

            PK_TRACE("Update STOP history: in core stop level 4");
            // Check if STOP level 4 reaches the target for both or one core
            entry_ongoing =
                target_level == STOP_LEVEL_4 ? STOP_TRANS_COMPLETE :
                STOP_TRANS_ENTRY;

            scom_data.words.lower = 0;
            scom_data.words.upper = (SSH_ACT_LV4_COMPLETE |
                                     (((uint32_t)entry_ongoing) << SHIFT32(3)));
            CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);

            // If both cores targeting different levels
            // deeper core should have at least deeper stop level than 4
            // only need to modify deeper core history if another one was done
            if (deeper_core && !entry_ongoing)
            {
                scom_data.words.lower = 0;
                scom_data.words.upper = SSH_ACT_LV4_CONTINUE;
                CME_PUTSCOM(PPM_SSHSRC, deeper_core, scom_data.value);

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

            core_wakeup = core & (~G_cme_stop_record.core_blockwu);
            out32(G_CME_LCL_EIMR_CLR, (core_wakeup << SHIFT32(13)) |
                  (core_wakeup << SHIFT32(15)) |
                  (core_wakeup << SHIFT32(17)));
            sync();
            wrteei(0);
            out32(G_CME_LCL_EIMR_OR, BITS32(10, 12));
            wrteei(1);

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
            PK_TRACE("+++++ +++++ STOP LEVEL 5-7 ENTRY +++++ +++++");
            //----------------------------------------------------------------------

// NDD1 workaround to save cme image size
#if NIMBUS_DD_LEVEL != 10 && DISABLE_STOP8 != 1

            if ((G_cme_stop_record.req_level[0] >= STOP_LEVEL_8) &&
                (G_cme_stop_record.req_level[1] >= STOP_LEVEL_8))
            {

                //================================
                MARK_TAG(SE_PURGE_L2, CME_MASK_BC)
                //================================

                PK_TRACE("Assert L2+NCU purge and NCU tlbie quiesce via SICR[18,21,22]");
                // insert tlbie quiesce before ncu purge to avoid window condition
                // of ncu traffic still happening when purging starts
                // Note: chtm purge and drop tlbie quiesce will be done in SGPE
                out32(G_CME_LCL_SICR_OR, BIT32(18) | BIT32(21));
                out32(G_CME_LCL_SICR_OR, BIT32(22));

                PK_TRACE("Poll for purged done via EISR[22,23]");

                do
                {

#if !SKIP_L2_PURGE_ABORT

                    if (!core_aborted &&
                        (in32(G_CME_LCL_EINR) & BITS32(12, 6)))
                    {
                        if (in32(G_CME_LCL_EINR) &
                            (((core & CME_MASK_C0) ? BIT32(12) : 0) | BIT32(14) | BIT32(16)))
                        {
                            core_aborted |= CME_MASK_C0;
                        }

                        if (in32(G_CME_LCL_EINR) &
                            (((core & CME_MASK_C1) ? BIT32(13) : 0) | BIT32(15) | BIT32(17)))
                        {
                            core_aborted |= CME_MASK_C1;
                        }

                        if (core_aborted)
                        {
                            //=======================================
                            MARK_TAG(SE_PURGE_L2_ABORT, core_aborted)
                            //=======================================

                            //PK_TRACE_INF("Abort: L2+NCU purge aborted by core[%d]", core_aborted);
                            out32(G_CME_LCL_SICR_OR, BIT32(19) | BIT32(23));
                        }
                    }

#endif

                }
                while((in32(G_CME_LCL_EISR) & BITS32(22, 2)) != BITS32(22, 2));

                PK_TRACE("Drop L2+NCU purges and their possible aborts via SICR[18,19,22,23]");
                out32(G_CME_LCL_SICR_CLR, (BITS32(18, 2) | BITS32(22, 2)));

                PK_TRACE_DBG("SE.5A: L2 and NCU Purged");

                //===================================================================
                MARK_TAG(SE_PURGE_L2_DONE, core_aborted ? core_aborted : CME_MASK_BC)
                //===================================================================



                // 1) if core = 3 aborted = 1, core = 2(sgpe handoff) aborted (cme wakeup)
                // 2) if core = 1 aborted = 1, core = 0(break)        aborted (cme wakeup)
                // 3) if core = 2 aborted = 3, core = 0(break)        aborted (cme/sgpe wakeup)
                // 4) if core = 1 aborted = 2, core = 1(sgpe handoff) aborted (sgpe wakeup)
                // for case 3) and 4) on the other core already handoff to sgpe
                //    if rgwu or spwu, fine because it will be sgpe wakeup
                //    if pc, there wont be sgpe wakeup due to notify bug,
                //      so ignore this case for abortion. otherwise,
                //      for case 3) core is waking up by tag along with another core
                //                  but leave stop8 record at sgpe
                //      for case 4) l2 is not purged and sgpe will do stop8
                if (core != (core_aborted & core))
                {
                    core &= ~core_aborted;
                }
                else
                {
                    break;
                }
            }

#endif

            if (G_cme_record.disableSGPEHandoff)
            {
                //PK_TRACE_INF("SE.4+: Disable SGPE Handoff due to SGPE Halt");
                break;
            }

            //=============================
            MARK_TAG(SE_SGPE_HANDOFF, core)
            //=============================

            PK_TRACE("Update STOP history: in core stop level 5");
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_ACT_LV5_CONTINUE;
            CME_PUTSCOM(PPM_SSHSRC, core, scom_data.value);

#if NIMBUS_DD_LEVEL != 10

            PK_TRACE("Drop PPM_WRITE_DISABLE via CPMMR[0]");
            CME_PUTSCOM(CPPM_CPMMR_CLR, core, BIT64(0));

#endif

            PK_TRACE("Send PCB interrupt per core via PIG, select irq type via CPMMR[10]");

            for (core_mask = 2; core_mask; core_mask--)
            {
                if (core & core_mask)
                {
                    core_index = core_mask & 1;

#if DISABLE_STOP8

                    if (G_cme_stop_record.req_level[core_index] >= STOP_LEVEL_11)

#else

                    if (G_cme_stop_record.req_level[core_index] >= STOP_LEVEL_8)

#endif

                    {
                        CME_PUTSCOM(CPPM_CPMMR_OR, core_mask, BIT64(10));
                        pig.fields.req_intr_type = PIG_TYPE3;
                        G_cme_stop_record.core_blockpc |= core_mask;
                    }
                    else if (G_cme_stop_record.req_level[core_index] >= STOP_LEVEL_5)
                    {
                        CME_PUTSCOM(CPPM_CPMMR_CLR, core_mask, BIT64(10));
                        pig.fields.req_intr_type = PIG_TYPE2;
                        G_cme_stop_record.core_blockpc &= ~core_mask;
                    }
                    else
                    {
//                        PK_TRACE_ERR("ERROR: Core[%d] Handoff to SGPE with Requested Stop Level[%d]",
//                                     core_mask, G_cme_stop_record.req_level[core_index]);
                        PK_PANIC(CME_STOP_ENTRY_HANDOFF_LESSTHAN5);
                    }

                    pig.fields.req_intr_payload = G_cme_stop_record.req_level[core_index];


                    // If in block wakeup mode, disable all interrupts so the PPM PIG doesn't
                    // send one that could overwrite the stop entry request
                    // The SGPE will restore the CPPM PECE Shadow
                    if (G_cme_stop_record.core_blockwu & core_mask)
                    {
                        CME_PUTSCOM(CPPM_PECES, core_mask, BITS64(32, 4));
                    }

                    // put PIG and Wakeup_Notify_Select back to back as possible
                    send_pig_packet(pig.value, core_mask);

                    do
                    {
                        CME_GETSCOM(PPM_PIG, core_mask, scom_data.value);
                    }
                    while (scom_data.words.lower & BIT64SH(39));

                    CME_PUTSCOM(CPPM_CPMMR_OR, core_mask, BIT64(13));
                    PK_TRACE_DBG("Switch Core[%d] PPM wakeup to STOP-GPE via CPMMR[13]", core_mask);

                    G_cme_stop_record.core_stopgpe |= core_mask;
                    G_cme_stop_record.act_level[core_index] = STOP_LEVEL_5;
                }
            }

            sync();

            PK_TRACE("Clear special/regular wakeup after wakeup_notify = 1 since it is edge triggered");
            out32(G_CME_LCL_EISR_CLR, (core << SHIFT32(15)) | (core << SHIFT32(17)));

//            PK_TRACE_INF("SE.5B: Core[%d] Handed off to SGPE", core);

        }
        while(0);

        //--------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ END OF STOP ENTRY +++++ +++++");
        //--------------------------------------------------------------------------

        //============================
        MARK_TRAP(ENDSCOPE_STOP_ENTRY)
        //============================

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

        // NDD2: dual cast workaround loop end
    }

#endif

    return;
}
