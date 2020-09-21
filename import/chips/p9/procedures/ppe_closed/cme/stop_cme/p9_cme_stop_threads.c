/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_threads.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2020                                                    */
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
#include "p9_cme_irq.h"

extern CmeStopRecord G_cme_stop_record;
extern CmeRecord G_cme_record;

// NDD2: OOB bits wired to SISR
//       not implemented in DD1
// bit0 is System checkstop
// bit1 is Recoverable Error
// bit2 is Special Attention
// bit3 is Core Checkstop
#define bad_error_present (((in32 (G_CME_LCL_SISR) & (BIT32(12) |   BITS32(14,2)))) || \
                           ((in32_sh(CME_LCL_SISR) & (BIT64SH(60) | BITS64SH(62,2)))))

void
p9_cme_stop_core_error_handler(uint32_t core, uint32_t core_error, uint32_t panic_code)
{
    core                           &= ~core_error;
    G_cme_stop_record.core_running |=  core_error;
    G_cme_stop_record.core_errored |=  core_error;
    G_cme_stop_record.error_code[core_error & 1] = panic_code;

    // set the WKUP_FAIL_STATUS breadcrumbs
    out32(G_CME_LCL_SICR_OR, core_error << SHIFT32(15));

    // this pulses the FIR trigger using CME Local Debug register
    // to optionally set a recoverable or xstop on error
    // Note: the following to due to OR/CLR interface is lack in hw
    uint32_t cme_lcl_debug = in32(G_CME_LCL_DBG);
    out32(G_CME_LCL_DBG, cme_lcl_debug | BIT32(16));
    out32(G_CME_LCL_DBG, cme_lcl_debug);
}

void
p9_cme_stop_eval_eimr_override()
{
    wrteei(0);

    g_eimr_override      &= ~BITS64(12, 10);
    data64_t mask_irqs    = {0};
    mask_irqs.words.lower = 0;

    mask_irqs.words.upper =
        ((((~G_cme_record.core_enabled)   |
           G_cme_stop_record.core_running |
           G_cme_stop_record.core_errored |
           G_cme_stop_record.core_blockpc |
           G_cme_stop_record.core_blockwu |
           G_cme_stop_record.core_suspendwu) & CME_MASK_BC) << SHIFT32(13)) |
#if SPWU_AUTO
        ((((~G_cme_record.core_enabled)   |
           G_cme_stop_record.core_running |
           G_cme_stop_record.core_errored) & CME_MASK_BC) << SHIFT32(15)) |
#else
        ((((~G_cme_stop_record.core_running) &
           (G_cme_stop_record.core_blockwu |
            G_cme_stop_record.core_suspendwu)) & CME_MASK_BC) << SHIFT32(15)) |
#endif
        ((((~G_cme_record.core_enabled)   |
           G_cme_stop_record.core_running |
           G_cme_stop_record.core_errored |
           G_cme_stop_record.core_blockwu |
           G_cme_stop_record.core_suspendwu) & CME_MASK_BC) << SHIFT32(17)) |
        ((((~G_cme_record.core_enabled)      |
           (~G_cme_stop_record.core_running) |
           G_cme_stop_record.core_errored    |
           G_cme_stop_record.core_in_spwu    |
           G_cme_stop_record.core_blockey    |
           G_cme_stop_record.core_vdm_droop  |
           G_cme_stop_record.core_suspendey) & CME_MASK_BC) << SHIFT32(21));

    g_eimr_override |= mask_irqs.value;

    if (G_cme_stop_record.core_vdm_droop)
    {
        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_DROOP_SUSPEND_ENTRY));
    }
    else
    {
        out32(G_CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_DROOP_SUSPEND_ENTRY));
    }

    wrteei(1);
}

#if !DISABLE_PERIODIC_CORE_QUIESCE && (NIMBUS_DD_LEVEL == 20 || NIMBUS_DD_LEVEL == 21 || CUMULUS_DD_LEVEL == 10)
extern CmeRecord G_cme_fit_record;
void
p9_cme_core_livelock_buster()
{

    uint32_t core_quiesce_cpmmr_disable;
    uint32_t core;
    uint32_t core_instr_running;
    uint32_t scom_op;
    data64_t scom_data;

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

    scom_op = CME_SCOM_NOP;

    for(core = CME_MASK_C0; core > 0; core--)
    {

#else

    scom_op = CME_SCOM_OR;
    core    = CME_MASK_BC;

#endif

        CME_GETSCOM_OP(CPPM_CPMMR, core, scom_op, scom_data.value);
        core_quiesce_cpmmr_disable = scom_data.words.upper & BIT32(2);

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

    }

#endif

    if (!core_quiesce_cpmmr_disable)
    {
        out32(G_CME_LCL_FLAGS_OR,  BIT32(CME_FLAGS_CORE_QUIESCE_ACTIVE));
    }
    else
    {
        out32(G_CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_CORE_QUIESCE_ACTIVE));
    }

    // only run workaround if
    // 1) both cores are enabled
    // 2) at least one core is running
    //    (stop entry clears the counter)
    // 3) both cores doesnt have special_wakeup_done asserted
    //    (spwu_done clears the counter)
    // 4) both core doesnt have cpmmr[2] asserted
    // 5) no bad error occurs

    // Get instruction running per core
    core_instr_running = (in32_sh(CME_LCL_SISR) >> SHIFT64SH(47))& CME_MASK_BC;

    if((G_cme_record.core_enabled == CME_MASK_BC) &&
       (core_instr_running != 0) &&
       (!(in32(G_CME_LCL_SISR) & BITS32(16, 2))) &&
       (!core_quiesce_cpmmr_disable) &&
       (!bad_error_present))
    {
        if (G_cme_fit_record.core_quiesce_fit_trigger < 10)
        {
            G_cme_fit_record.core_quiesce_fit_trigger++;
        }
        else
        {
            G_cme_fit_record.core_quiesce_fit_trigger = 0;
            periodic_core_quiesce_workaround(core_instr_running);
        }
    }
}


inline static
void periodic_core_quiesce_workaround(uint32_t core_instruction_running)
{
    uint32_t core;
    uint32_t core_accessible;
    uint32_t fused_core_mode;
    uint32_t spattn_offset;
    uint32_t spattn[2];
    uint32_t maint_mode[2];
    uint32_t time_stamp[2];
    data64_t scom_data;
    uint32_t sample_error = 0;
    uint32_t saved_msr = 0;

    CME_GETSCOM_AND(CPPM_CPMMR, CME_MASK_BC, scom_data.value);
    fused_core_mode = scom_data.words.upper & BIT32(9);

    PK_TRACE("PCQW: Fused Core Mode[%x]", fused_core_mode);

    //0) in case in stop0/1 that we dont know about

    PK_TRACE("PCQW: Assert block interrupt to PC via SICR[2/3]");
    out32(G_CME_LCL_SICR_OR, core_instruction_running << SHIFT32(3));

    PK_TRACE("PCQW: Waking up the core(pm_exit=1) via SICR[4/5]");
    out32(G_CME_LCL_SICR_OR, core_instruction_running << SHIFT32(5));

    CME_PM_EXIT_DELAY

    PK_TRACE("PCQW: Polling for core wakeup(pm_active=0) via EINR[20/21]");

    while((in32(G_CME_LCL_EINR)) & (core_instruction_running << SHIFT32(21)));

    //1) Acquire Pcb Mux

    core_accessible = ((~in32(G_CME_LCL_SISR)) >> SHIFT32(11)) & core_instruction_running;

    PK_TRACE("PCQW: Request PCB Mux via SICR[10/11]");
    out32(G_CME_LCL_SICR_OR, core_accessible << SHIFT32(11));

    // Poll Infinitely for PCB Mux Grant
    while((core_accessible & (in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core_accessible);

    PK_TRACE("PCQW: PCB Mux Granted");

    //2) Read RAS_STATUS Scom Addr(20:31) = x0A02
    //   bit (0 + 8*T) where (T= thread) CORE_MAINT_MODE
    //   to find out which threads are in maintenance mode

    // vector = 0 + 8*T as a shifting base used below
#define THREAD_VECTOR (BIT32(0)|BIT32(8)|BIT32(16)|BIT32(24))

    for(core = CME_MASK_C0; core > 0; core--)
    {
        if (core & core_instruction_running)
        {
            CME_GETSCOM(RAS_STATUS, core, scom_data.value) ;
            maint_mode[core & 1] = scom_data.words.upper & THREAD_VECTOR;
        }
    }


    //3) Write DIRECT_CONTROLS Scom Addr(20:31) = x0A9C
    //   bit (7 + 8*T) where (T= thread) DC_CORE_STOP for ALL threads.
    //   This will quiesce the active threads,
    //   put all threads into core maintenance mode,
    //   and eventually quiesce the entire core.

    scom_data.words.lower = 0;
    scom_data.words.upper = THREAD_VECTOR >> 7;

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

    for(core = CME_MASK_C0; core > 0; core--)
    {
        if (core & core_instruction_running)
        {
#else

    core = core_instruction_running;

#endif

            // The SCOM can be delayed by traffic on PC on the SPR bus, so it is possible
            // to get a RC=4 (Address Error), which really indicates a timeout.   Need to mask
            // this return code and retry until we get a clean return code
            saved_msr = mfmsr();
            mtmsr( saved_msr | MSR_SEM4);  // Mask off timeout

            do
            {
                CME_PUTSCOM_NOP(DIRECT_CONTROLS, core, scom_data.value);
            }
            while ((mfmsr() & MSR_SIBRC) != 0);

            mtmsr(saved_msr);

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1
        }
    }

#endif


    //4) Loop on RAS_STATUS Scom Addr(20:31) = x0A02
    //   until bit(1 + 8*T) THREAD_QUIESCE are all active b1

    time_stamp[0] = in32(G_CME_LCL_TBR);

#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1

    for(core = CME_MASK_C0; core > 0; core--)
    {
        if (core & core_instruction_running)
        {
#else

    core = core_instruction_running;

#endif

#define THREAD_VECTOR_CHECK (THREAD_VECTOR>>1 | THREAD_VECTOR>>3)

// In a future release of this patch, it should be based on the Nest Frequency, but
// plumbing for that sill needs to be created.
// 200us in 32ns timer ticks
#define QUIESCE_ABORT_TICKS 0x186A

            // Poll on THREAD_QUIESCE, LSU_QUIESCE, and NEST_ACTIVE.
            // If they do not quiesce in 200us abort the patch and restart the cores.

            do
            {
                CME_GETSCOM_AND(RAS_STATUS, core, scom_data.value);

                time_stamp[1] = in32(G_CME_LCL_TBR);

                if (time_stamp[1] > time_stamp[0])
                {
                    G_cme_fit_record.core_quiesce_time_latest =
                        time_stamp[1] - time_stamp[0];
                }
                else
                {
                    G_cme_fit_record.core_quiesce_time_latest =
                        0xFFFFFFFF - time_stamp[0] + time_stamp[1] + 1;
                }
            }
            while((((scom_data.words.upper& THREAD_VECTOR_CHECK) != THREAD_VECTOR_CHECK)
                   ||    //THREAD_ and LSU_QUIESCE must be ones
                   ((scom_data.words.lower& BIT64SH(32))))  // NEST_ACTIVE must be zero
                  && !(sample_error = bad_error_present)
                  && (G_cme_fit_record.core_quiesce_time_latest < QUIESCE_ABORT_TICKS)    // 200us in 32ns timer ticks
                 );


#if NIMBUS_DD_LEVEL == 20 || DISABLE_CME_DUAL_CAST == 1
        }
    }

#endif

    if (!sample_error && (G_cme_fit_record.core_quiesce_time_latest < QUIESCE_ABORT_TICKS) )
    {
        PK_TRACE("PCQW: Both Cores Quiesced");
    }
    else
    {
        PK_TRACE_DBG("PCQW: Error while trying to Quiesce Cores.  Bad Error %d, QuiesceTime (ns) %d", sample_error,
                     (G_cme_fit_record.core_quiesce_time_latest << 5));
        G_cme_fit_record.core_quiesce_failed_count++;
    }


    for(core = CME_MASK_C0; core > 0; core--)
    {
        if (core & core_instruction_running)
        {
            //5) Read SPATTN Scom Addr(20:31) = x0A98 to check for ATTN
            //   (need to do this after all threads quiesce to close windows)

            CME_GETSCOM(SPATTN_READ, core, scom_data.value);

            if (fused_core_mode)
            {
                //Fused Core Mode
                // C0 vtid0=ltid0 bit1  -> tv.bit0
                // C0 vtid1=ltid2 bit9  -> tv.bit8
                // C0 vtid2=ltid4 bit17 -> tv.bit16
                // C0 vtid3=ltid6 bit25 -> tv.bit24
                //
                // C1 vtid0=ltid1 bit5  -> tv.bit0
                // C1 vtid1=ltid3 bit13 -> tv.bit8
                // C1 vtid2=ltid5 bit21 -> tv.bit16
                // C1 vtid3=ltid7 bit29 -> tv.bit24
                spattn_offset = ((core & 1) << 2) + 1; // C0:1, C1:5
                spattn[core & 1] = ((scom_data.words.upper & BIT32((0 + spattn_offset))) << spattn_offset) | //0
                                   ((scom_data.words.upper & BIT32((8 + spattn_offset))) << spattn_offset) | //8
                                   ((scom_data.words.upper & BIT32((16 + spattn_offset))) << spattn_offset) | //16
                                   ((scom_data.words.upper & BIT32((24 + spattn_offset))) << spattn_offset); //24
            }
            else
            {
                // Normal Mode
                // vtid0=ltid0 bit1  -> tv.bit0
                // vtid1=ltid1 bit5  -> tv.bit8
                // vtid2=ltid2 bit9  -> tv.bit16
                // vtid3=ltid3 bit13 -> tv.bit24
                spattn[core & 1] = ((scom_data.words.upper & BIT32(1))  << 1 ) | //0
                                   ((scom_data.words.upper & BIT32(5))  >> 3 ) | //8
                                   ((scom_data.words.upper & BIT32(9))  >> 7 ) | //16
                                   ((scom_data.words.upper & BIT32(13)) >> 11);  //24
            }


            //6) Write DIRECT_CONTROLS Scom Addr(20:31) = x0A9C
            //   bit (3 + 8*T) where (T= thread) DC_CLEAR_MAINT for all threads
            //   which were not in maintenance mode in step 1 AND do not have ATTN set in step 4

            scom_data.words.lower = 0;
            scom_data.words.upper =
                (THREAD_VECTOR & (~maint_mode[core & 1]) & (~spattn[core & 1])) >> 3;
            CME_PUTSCOM_NOP(DIRECT_CONTROLS, core, scom_data.value);
        }
    }

    PK_TRACE("PCQW: Both Cores Started");

    //7) Drop pm_exit

    PK_TRACE("PCQW: Drop pm_exit via SICR[4/5]");
    out32(G_CME_LCL_SICR_CLR, core_instruction_running << SHIFT32(5));

    PK_TRACE("PCQW: Drop block interrupt to PC via SICR[2/3]");
    out32(G_CME_LCL_SICR_CLR, core_instruction_running << SHIFT32(3));

    //8) Release Pcb Mux on Both Cores

    PK_TRACE("PCQW: Release PCB Mux back on Both Cores via SICR[10/11]");
    out32(G_CME_LCL_SICR_CLR, core_accessible << SHIFT32(11));

    while((core_accessible & ~(in32(G_CME_LCL_SISR) >> SHIFT32(11))) != core_accessible);

    PK_TRACE("PCQW: PCB Mux Released on Both Cores");


    G_cme_fit_record.core_quiesce_total_count += 1;

    //Profile time

    // timestamp delta was computed above to handle the abort case

    if (G_cme_fit_record.core_quiesce_time_latest <
        G_cme_fit_record.core_quiesce_time_min)
    {
        G_cme_fit_record.core_quiesce_time_min =
            G_cme_fit_record.core_quiesce_time_latest;
    }
    else if (G_cme_fit_record.core_quiesce_time_latest >
             G_cme_fit_record.core_quiesce_time_max)
    {
        G_cme_fit_record.core_quiesce_time_max =
            G_cme_fit_record.core_quiesce_time_latest;
    }
}

#endif
