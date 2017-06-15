/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_thread_db.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#include "pk.h"
#include "ppe42_scom.h"

#include "cme_firmware_registers.h"
#include "cme_register_addresses.h"
#include "cppm_firmware_registers.h"
#include "cppm_register_addresses.h"
#include "ppm_firmware_registers.h"
#include "ppm_register_addresses.h"
#include "qppm_firmware_registers.h"
#include "qppm_register_addresses.h"

#include "ppehw_common.h"
#include "cmehw_common.h"
#include "cmehw_interrupts.h"

#include "p9_cme_irq.h"
#include "p9_cme_pstate.h"
#include "pstate_pgpe_cme_api.h"
#include "ppe42_cache.h"
#include "p9_hcode_image_defines.H"
#include "p9_cme_pstate.h"
#include "cme_panic_codes.h"


//
//External Globals and globals
//
extern CmeRecord G_cme_record;
extern CmePstateRecord G_cme_pstate_record;
extern cmeHeader_t* G_cmeHeader;
extern LocalPstateParmBlock* G_lppb;
uint32_t G_cme_flags;
cppm_cmedb0_t G_dbData;
uint32_t G_next_pstate;
extern uint8_t G_vdm_threshold_table[];

//
//Function Prototypes
//
inline void p9_cme_pstate_process_db0() __attribute__((always_inline));
inline void p9_cme_pstate_register() __attribute__((always_inline));
inline void p9_cme_pstate_db0_start() __attribute__((always_inline));
inline void p9_cme_pstate_db0_glb_bcast() __attribute__((always_inline));
inline void p9_cme_pstate_db0_suspend() __attribute__((always_inline));
inline void p9_cme_pstate_freq_update() __attribute__((always_inline));
inline void p9_cme_pstate_notify_sib() __attribute__((always_inline));
void p9_cme_pstate_update();
void p9_cme_pstate_pig_send();

//
//Doorbell0 interrupt handler
//
//Only enabled on QuadManager-CME
void p9_cme_pstate_db_handler(void* arg, PkIrqId irq)
{
    PK_TRACE_INF("DB_HDL: Entered\n");
#if defined(__IOTA__)
    wrteei(1);

    p9_cme_pstate_process_db0();

    iota_uih_irq_vec_restore();
#else
    pk_semaphore_post((PkSemaphore*)arg);
#endif
    PK_TRACE_INF("DB_HDL: Exited\n");
}

//
//p9_cme_db_thread
//
void p9_cme_pstate_db_thread(void* arg)
{
    PK_TRACE_INF("DB_TH: Started\n");
    PkMachineContext  ctx __attribute__((unused));
    uint32_t cores = 0;
    uint64_t scom_data;
    uint32_t resclk_data;

    G_cmeHeader = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
    G_lppb = (LocalPstateParmBlock*)(G_cmeHeader->g_cme_pstate_region_offset + CME_SRAM_BASE_ADDR);
    PK_TRACE_INF("DB_TH: Hdr=0x%x, LPPB=0x%x\n", (uint32_t)G_cmeHeader, (uint32_t)G_lppb);

    // Mask PMCR interrupts, these will be unmasked when starting Pstates
    g_eimr_override |= BITS64(34, 2);
    out32_sh(CME_LCL_EIMR_OR, (SHIFT64SH(34) | SHIFT64SH(35)));

    //Read CME_LCL_FLAGS
    G_cme_flags = in32(CME_LCL_FLAGS);

    G_cme_pstate_record.qmFlag = G_cme_flags & BIT32(CME_FLAGS_QMGR_MASTER);
    G_cme_pstate_record.siblingCMEFlag = G_cme_flags & BIT32(CME_FLAGS_SIBLING_FUNCTIONAL);
    G_cme_pstate_record.pmcrSeenErr = 0;

    //Enable Interrupts depending on whether this CME is
    //a quadManager or siblingCME. DB0 is enabled only
    //on quadManager. Whereas, InterCME_IN0 only on
    //siblingCME.
    //
    //if quadManager
    if (G_cme_pstate_record.qmFlag)
    {
#if !defined(__IOTA__)
        pk_semaphore_create(&G_cme_pstate_record.sem[1], 0, 1);
#endif

        if (G_cme_flags & BIT32(CME_FLAGS_CORE0_GOOD))
        {
            out32_sh(CME_LCL_EIMR_CLR, BIT32(4));//Enable DB0_0
            out32_sh(CME_LCL_EIMR_OR, BIT32(5));//Disable DB0_1
            g_eimr_override |= BIT64(37);
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C0;
            cores |= CME_MASK_C0;
        }
        else if (G_cme_flags & BIT32(CME_FLAGS_CORE1_GOOD))
        {
            out32_sh(CME_LCL_EIMR_OR, BIT32(4));//Disable DB0_0
            out32_sh(CME_LCL_EIMR_CLR, BIT32(5));//Enable DB0_1
            g_eimr_override |= BIT64(36);
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C1;
            cores |= CME_MASK_C1;
        }

        out32(CME_LCL_EIMR_OR, BIT32(7));//Disable  InterCME_IN0
        g_eimr_override |= BIT64(7);

        // Pstate Clocking Initialization (QM)
        // Calculate the initial pstate
        ippm_read(QPPM_DPLL_STAT, &scom_data);
        G_cme_pstate_record.quadPstate = (uint32_t)G_lppb->dpll_pstate0_value
                                         - (uint32_t)((scom_data & BITS64(1, 11)) >> SHIFT64(11));
        PK_TRACE_INF("qm | initial pstate=%d", G_cme_pstate_record.quadPstate);

#ifdef USE_CME_VDM_FEATURE

        // VDM Enablement (QM)
        // Do this prior to synchronizing the Pstate w/ its Sibling CME
        if(G_cme_pstate_record.qmFlag
           && (G_cmeHeader->g_cme_qm_mode_flags & CME_QM_FLAG_SYS_VDM_ENABLE))
        {
            uint32_t i;
            uint32_t region = pstate_to_vpd_region(G_cme_pstate_record.quadPstate);
            // VID compare
            scom_data = (uint64_t)(pstate_to_vid_compare(G_cme_pstate_record.quadPstate, region)
                                   & BITS32(24, 8)) << 56;
            // Calculate the new index for each threshold
            calc_vdm_threshold_indices(G_cme_pstate_record.quadPstate, region,
                                       G_cme_pstate_record.vdmData.vdm_threshold_idx);

            // Thresholds; no stepping is required since the VDMs are still
            // disabled at this point.
            for(i = 0; i < NUM_THRESHOLD_POINTS; ++i)
            {
                scom_data |= (uint64_t)G_vdm_threshold_table[
                                 G_cme_pstate_record.vdmData.vdm_threshold_idx[i]]
                             << (52 - (i * 4));
            }

            PK_TRACE_INF("qm | initial vdmcfgr=%08x%08x", scom_data >> 32,
                         scom_data);
            ippm_write(QPPM_VDMCFGR, scom_data);
            // Assumes 100us has elapsed during cache chiplet wakeup after
            // enabling the full-speed cache clock grid
            // Clear VDM Disable
            ippm_write(PPM_VDMCR_CLR, BIT64(1));
        }

#endif//USE_CME_VDM_FEATURE

        // Synchronize initial pstate w/ sibling CME
        if(G_cme_pstate_record.siblingCMEFlag)
        {
            out32(CME_LCL_EITR_OR, BIT32(30));
            out32(CME_LCL_EIPR_OR, BIT32(30));
            intercme_msg_send(G_cme_pstate_record.quadPstate,
                              IMT_INIT_PSTATE);
        }
    }
    else
    {
        out32_sh(CME_LCL_EIMR_OR, BIT32(4) | BIT32(5));//Disable DB0_0 and DB0_1

        if(G_cme_flags & BIT32(CME_FLAGS_CORE0_GOOD))
        {
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C0;
            cores |= CME_MASK_C0;
        }
        else if(G_cme_flags & BIT32(CME_FLAGS_CORE1_GOOD))
        {
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C1;
            cores |= CME_MASK_C1;
        }

        // Pstate Initialization (Sibling)
        out32(CME_LCL_EITR_OR, BIT32(29));
        out32(CME_LCL_EIPR_OR, BIT32(29));

        intercme_msg_recv(&G_cme_pstate_record.quadPstate, IMT_INIT_PSTATE);
        PK_TRACE_INF("sib | initial pstate=%d", G_cme_pstate_record.quadPstate);

        out32(CME_LCL_EIMR_CLR, BIT32(7)); //Enable InterCME_IN0
        g_eimr_override |= BIT64(37);
        g_eimr_override |= BIT64(36);
    }

    // At this point, both QM and Sib can set their initial global Pstate
    G_cme_pstate_record.globalPstate = G_cme_pstate_record.quadPstate;

    // Resonant Clocking Check (QM + Sibling)
    // Check that resonance is not enabled in CACCR and EXCGCR
    CME_GETSCOM(CPPM_CACCR, cores, scom_data);
    // Ignore clk_sync_enable and reserved
    resclk_data = (scom_data >> 32) & ~BITS32(15, 17);

    if(resclk_data != 0)
    {
        PK_PANIC(CME_PSTATE_RESCLK_ENABLED_AT_BOOT);
    }

    ippm_read(QPPM_EXCGCR, &scom_data);
    // Ignore clk_sync_enable, clkglm_async_reset, clkglm_sel, and reserved
    scom_data &= ~(BITS64(29, 9) | BITS64(42, 22));

    if(scom_data != 0)
    {
        PK_PANIC(CME_PSTATE_RESCLK_ENABLED_AT_BOOT);
    }

#ifdef USE_CME_RESCLK_FEATURE

    // Resonant Clocking Initialization (QM + Sibling)
    if(G_cmeHeader->g_cme_qm_mode_flags & CME_QM_FLAG_RESCLK_ENABLE)
    {
        // Initialize the Resclk indices
        G_cme_pstate_record.resclkData.core0_resclk_idx =
            (uint32_t)G_lppb->resclk.resclk_index[0];
        G_cme_pstate_record.resclkData.core1_resclk_idx =
            (uint32_t)G_lppb->resclk.resclk_index[0];

        if(G_cme_pstate_record.qmFlag)
        {
            G_cme_pstate_record.resclkData.l2_ex0_resclk_idx =
                (uint32_t)G_lppb->resclk.resclk_index[0];
            G_cme_pstate_record.resclkData.l2_ex1_resclk_idx =
                (uint32_t)G_lppb->resclk.resclk_index[0];

            // Extract the resclk value from QCCR
            ippm_read(QPPM_QACCR, &scom_data);
            scom_data = (scom_data & BITS64(0, 13)) >> SHIFT64(15);
            p9_cme_resclk_get_index(G_cme_pstate_record.quadPstate,
                                    &G_cme_pstate_record.resclkData.common_resclk_idx);
            // Read QACCR and clear out the resclk settings
            ippm_read(QPPM_QACCR, &scom_data);
            scom_data &= ~BITS64(0, 13);
            // OR-in the resclk settings which match the current Pstate
            scom_data |= (((uint64_t)G_lppb->resclk.steparray
                           [G_cme_pstate_record.resclkData.common_resclk_idx].value)
                          << 48);
            // Write QACCR
            ippm_write(QPPM_QACCR, scom_data);
        }

        out32(CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_RCLK_OPERABLE));
    }

#endif//USE_CME_RESCLK_FEATURE

#ifdef USE_CME_VDM_FEATURE

    // Set VDM Operable flag for both QM and Sib, at this point the QM has
    // completed all initialization for VDMs and QM and Sib are interlocked
    if(G_cmeHeader->g_cme_qm_mode_flags & CME_QM_FLAG_SYS_VDM_ENABLE)
    {
        out32(CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_VDM_OPERABLE));
    }

#endif//USE_CME_VDM_FEATURE

    //Doorbell Thread(this thread) will continue to run on
    //Quad Manager CME. The sibling CME has intercme_in0 enabled
    //and won't run this thread past this point.
    if (G_cme_pstate_record.qmFlag)
    {
        //Register with PGPE
        p9_cme_pstate_register();

        PK_TRACE_INF("DB_TH: Inited\n");

#if !defined(__IOTA__)

        while(1)
        {
            //pend on sempahore
            pk_semaphore_pend(&G_cme_pstate_record.sem[1], PK_WAIT_FOREVER);
            wrteei(1);

            p9_cme_pstate_process_db0();

            pk_irq_vec_restore(&ctx);
        }

#endif
    }

    PK_TRACE_INF("DB_TH: Exit\n");
}

//
//Process Doorbell0
//
inline void p9_cme_pstate_process_db0()
{
    ppm_pig_t ppmPigData;
    G_cme_flags = in32(CME_LCL_FLAGS);

    PK_TRACE_INF("DB_TH: Process DB0 Enter\n");

    //Read DB0 value
    if (G_cme_flags & BIT32(CME_FLAGS_CORE0_GOOD))
    {
        out32_sh(CME_LCL_EISR_CLR, BIT32(4));
        out32_sh(CME_LCL_EISR_CLR, BIT32(5));
        CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C0, G_dbData.value);
    }
    else if (G_cme_flags & BIT32(CME_FLAGS_CORE1_GOOD))
    {
        out32_sh(CME_LCL_EISR_CLR, BIT32(5));
        CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C1, G_dbData.value);
    }

    PK_TRACE_INF("DB_TH: DB0 0x%x\n"dbData.value);

    //Process DB0
    //Start Pstates and Pstates NOT enabled
    if(G_dbData.fields.cme_message_number0 == MSGID_DB0_START_PSTATE_BROADCAST &&
       !(G_cme_flags & BIT32(CME_FLAGS_PSTATES_ENABLED)))
    {
        p9_cme_pstate_db0_start();
    }
    //Global Actual Broadcast and Pstates enabled
    else if(G_dbData.fields.cme_message_number0 == MSGID_DB0_GLOBAL_ACTUAL_BROADCAST)
    {
        //Process Global Bcast only if Pstates are enabled.
        //Otherwise, ignore. The reason is PGPE multicasts Global Bcast, and doorbell0
        //can be written while this CME is powered-off. For Pstate Start and Stop
        //PGPE only unicasts.
        if (G_cme_flags & BIT32(CME_FLAGS_PSTATES_ENABLED))
        {
            p9_cme_pstate_db0_glb_bcast();
        }
    }
    //Stop Pstates and Pstates enabled
    else if(G_dbData.fields.cme_message_number0 == MSGID_DB0_STOP_PSTATE_BROADCAST &&
            (G_cme_flags & BIT32(CME_FLAGS_PSTATES_ENABLED)))
    {
        p9_cme_pstate_db0_suspend();
    }
    //Otherwise, send an ERR ACK to PGPE and Halt
    else
    {
        ppmPigData.value = 0;
        ppmPigData.fields.req_intr_type = 4;
        ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_ERROR;
        send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);
        PK_TRACE_INF("DB_TH: Bad DB0=0x%x Pstate=0x%x", G_dbData.fields.cme_message_number0, G_cme_flags);

        if(G_dbData.fields.cme_message_number0 < MSGID_DB0_VALID_START ||
           G_dbData.fields.cme_message_number0 > MSGID_DB0_VALID_END)
        {
            PK_PANIC(CME_PSTATE_UNEXPECTED_DB0_MSGID);
        }
        else
        {
            PK_PANIC(CME_PSTATE_INVALID_DB0_MSGID);
        }
    }

    PK_TRACE_INF("DB_TH: Process DB0 Exit\n");
}


inline void p9_cme_pstate_register()
{
    //Send type4(ack doorbell)
    ppm_pig_t ppmPigData;
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload =  MSGID_PCB_TYPE4_QUAD_MGR_AVAILABLE;
    send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);

    PK_TRACE_INF("DB_TH: Register Msg Sent\n");
}

//
//Doorbell0 Start
//
inline void p9_cme_pstate_db0_start()
{
    PK_TRACE_INF("DB_TH: DB0 Start Enter\n");
    ppm_pig_t ppmPigData;

    //\TODO RTC: 152965
    //Check operable bits
    //Check if resonant clkss are either all 0s or "OFF" encode(from the Parm)
    //Check for iVRM disable
    //Check for VDM disable

    p9_cme_pstate_update();

    //\TODO RTC: 152965
    //Enable Resonant Clks if flag
    //Enable ivrm if flag
    //Enable vdm if flag

    //G_cme_pstate_record.pstatesEnabled = 1;
    out32(CME_LCL_FLAGS_OR, BIT32(24));//Set Pstates Enabled

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);

    //Clear Pending PMCR interrupts and Enable PMCR Interrupts (for good cores)
    out32_sh(CME_LCL_EISR_CLR, G_cme_record.core_enabled << 28 );
    out32_sh(CME_LCL_EIMR_CLR, G_cme_record.core_enabled << 28 );
    g_eimr_override |= BITS64(34, 2);
    g_eimr_override &= ~(uint64_t)(G_cme_record.core_enabled << 28);

    PK_TRACE_INF("DB_TH: DB0 Start Exit\n");
}

//
//Doorbell0 Global Broadcast
//
inline void p9_cme_pstate_db0_glb_bcast(cppm_cmedb0_t dbData)
{
    PK_TRACE_INF("DB_TH: DB0 GlbBcast Enter\n");
    ppm_pig_t ppmPigData;

    p9_cme_pstate_update();

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);
    PK_TRACE_INF("DB_TH: DB0 GlbBcast Exit\n");
}

//
//Doorbell0 Suspend
//
inline void p9_cme_pstate_db0_suspend()
{
    PK_TRACE_INF("DB_TH: DB0 Suspend Enter\n");
    ppm_pig_t ppmPigData;

    out32(CME_LCL_FLAGS_CLR, BIT32(24));//Set Pstates Disabled

    // Disable both PMCR regs ignoring partial-goodness
    out32_sh(CME_LCL_EIMR_OR, (SHIFT64SH(34) | SHIFT64SH(35)));
    g_eimr_override |= BITS64(34, 2);

    p9_cme_pstate_notify_sib(); //Notify sibling

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED;
    send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);
    PK_TRACE_INF("DB_TH: DB0 Suspend Exit\n");
}

inline void p9_cme_pstate_notify_sib()
{
    uint32_t intercme_acked = 0;
    uint32_t eisr;

    PK_TRACE_INF("DB_TH: Notify Enter\n");

    //Notify sibling CME(if any)
    if (G_cme_pstate_record.siblingCMEFlag)
    {
        //Send interCME interrupt
        out32(CME_LCL_ICCR_OR, BIT32(5)); //Send direct InterCME_IN0
        out32(CME_LCL_ICCR_CLR, BIT32(5));//Clear

#if SIMICS_TUNING == 1
        intercme_acked = 1;
#endif

        while (!intercme_acked)
        {
            eisr = in32(CME_LCL_EISR);

            if (eisr & 0x01000000)
            {
                intercme_acked = 1;
            }
        }

        out32(CME_LCL_EISR_CLR, BIT32(7));//Clear InterCME_IN0
    }

    PK_TRACE_INF("DB_TH: Notify Exit\n");
}

//
//p9_cme_pstate_freq_update
//
inline void p9_cme_pstate_freq_update()
{
    if(G_cme_flags & BIT32(CME_FLAGS_FREQ_UPDT_DISABLE))
    {
        PK_TRACE_INF("DB_TH: Freq Updt Disabled\n");
    }
    else
    {
        PK_TRACE_INF("DB_TH: Freq Updt Enter\n");
        PK_TRACE_INF("DB_TH: Dpll0=0x%x\n", G_lppb->dpll_pstate0_value);
        PK_TRACE_INF("DB_TH: Hdr=0x%x, LPPB=0x%x\n", (uint32_t)G_cmeHeader, (uint32_t)G_lppb);
        //Adjust DPLL
        qppm_dpll_freq_t dpllFreq;

        //Write new value of DPLL using INTERPPM
        //Currently, fmax, fmin and fmult are all written with the same value
        dpllFreq.value = 0;
        dpllFreq.fields.fmax  = G_lppb->dpll_pstate0_value - G_next_pstate;
        dpllFreq.fields.fmult = dpllFreq.fields.fmax;
        dpllFreq.fields.fmin  = dpllFreq.fields.fmax;

        if (dpllFreq.fields.fmult > DPLL_MAX_VALUE ||
            dpllFreq.fields.fmult < DPLL_MIN_VALUE)
        {
            PK_PANIC(CME_PSTATE_DPLL_OUT_OF_BOUNDS_REQ);
        }

        ippm_write(QPPM_DPLL_FREQ, dpllFreq.value);

        if(in32(CME_LCL_FLAGS) & BIT32(CME_FLAGS_VDM_OPERABLE))
        {
            // TODO DPLL Mode 3.5 will require some other stuffs
            data64_t scom_data = { 0 };

            PK_TRACE_INF("Poll on DPLL_STAT[update_complete]");
            // ... to indicate that the DPLL has sampled the newly requested
            // frequency into its internal registers as a target,
            // but may not yet be there

            do
            {
                ippm_read(QPPM_DPLL_STAT, &scom_data.value);
            }
            while(!(scom_data.words.lower & BIT32(28)));

            PK_TRACE_INF("Poll on DPLL_STAT[block_active|lock]");
            // ... to indicate that the DPLL is safely either at the new frequency
            // or in droop protection below the new frequency

            do
            {
                ippm_read(QPPM_DPLL_STAT, &scom_data.value);
            }
            while(!(scom_data.words.lower & BITS32(30, 2)));
        }

        PK_TRACE_INF("DB_TH: Freq Updt Exit\n");
    }
}

void p9_cme_pstate_update()
{
    PK_TRACE_INF("DB_TH: Pstate Updt Enter");

    G_next_pstate = (G_dbData.value >> (in32(CME_LCL_SRTCH0) &
                                        (BITS32(CME_SCRATCH_LOCAL_PSTATE_IDX_START,
                                                CME_SCRATCH_LOCAL_PSTATE_IDX_LENGTH)))) & 0xFF;

    if(G_next_pstate != G_cme_pstate_record.quadPstate)
    {
        if(G_cme_pstate_record.siblingCMEFlag)
        {
            // "Lock" the sibling until the pstate transition is complete
            intercme_msg_send(0, IMT_LOCK_SIBLING);
            // The Sibling is a "pumpkin" from this point forward until calling
            // p9_cme_pstate_notify_sib()
        }

        G_cme_pstate_record.globalPstate = (G_dbData.value & BITS64(8, 8))
                                           >> SHIFT64(15);

        PK_TRACE_INF("DB_TH: DBData=0x%08x%08x\n", G_dbData.value >> 32,
                     G_dbData.value);

        // Dropping frequency: freq update, resclk, vdms, then ivrms (TODO)
        if(G_next_pstate > G_cme_pstate_record.quadPstate)
        {
            p9_cme_pstate_freq_update();
        }

#ifdef USE_CME_RESCLK_FEATURE

        if(G_cme_flags & BIT32(CME_FLAGS_RCLK_OPERABLE))
        {
            PkMachineContext ctx;
            pk_critical_section_enter(&ctx);

            p9_cme_resclk_update(ANALOG_COMMON, G_next_pstate,
                                 G_cme_pstate_record.resclkData.common_resclk_idx);

            pk_critical_section_exit(&ctx);
        }

#endif//USE_CME_RESCLK_FEATURE
#ifdef USE_CME_VDM_FEATURE

        if(G_cme_flags & BIT32(CME_FLAGS_VDM_OPERABLE))
        {
            p9_cme_vdm_update(G_next_pstate);
        }

#endif//USE_CME_VDM_FEATURE

        // Raising frequency: ivrm (TODO), vdm, resclk, freq update
        if(G_next_pstate < G_cme_pstate_record.quadPstate)
        {
            p9_cme_pstate_freq_update();
        }

        p9_cme_pstate_notify_sib(); // Release Sibling to change Pstate as well
        // Must update quadPstate before calling PMSR update
        G_cme_pstate_record.quadPstate = G_next_pstate;
        p9_cme_pstate_pmsr_updt(G_cme_record.core_enabled);
    }

    PK_TRACE_INF("DB_TH: Pstate Updt Exit");
}
