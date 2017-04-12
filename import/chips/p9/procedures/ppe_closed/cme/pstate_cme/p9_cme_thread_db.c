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
#include "p9_cme_flags.h"
#include "p9_cme_pstate.h"
//#include "p9_cme_header.h"
#include "pstate_pgpe_cme_api.h"
//#include "p9_pstate_vpd.h"
#include "ppe42_cache.h"
#include "p9_hcode_image_defines.H"
#include "p9_cme_pstate.h"
#include "cme_panic_codes.h"


//
//External Globals and globals
//
extern CmePstateRecord G_cme_pstate_record;
extern cmeHeader_t* G_cmeHeader;
extern LocalPstateParmBlock* G_lppb;
cme_pstate_db_data_t G_db_thread_data;

//
//Function Prototypes
//
inline void p9_cme_pstate_process_db0();
inline void p9_cme_pstate_db0_start(cppm_cmedb0_t dbData, uint32_t cme_flags);
inline void p9_cme_pstate_db0_glb_bcast(cppm_cmedb0_t dbData, uint32_t cme_flags);
inline void p9_cme_pstate_db0_suspend(cppm_cmedb0_t dbData, uint32_t cme_flags);
inline void p9_cme_pstate_freq_update(uint32_t next_pstate);
inline void p9_cme_pstate_pmsr_updt(uint64_t dbData, uint32_t cme_flags);
inline void p9_cme_pstate_notify_sib();
inline void p9_cme_pstate_update(uint64_t dbData, uint32_t cme_flags);

//
//Doorbell0 interrupt handler
//
//Only enabled on QuadManager-CME
void p9_cme_pstate_db_handler(void* arg, PkIrqId irq)
{
    PK_TRACE_INF("DB_HDL: Entered\n");
    pk_semaphore_post((PkSemaphore*)arg);
    PK_TRACE_INF("DB_HDL: Exited\n");
}

//
//p9_cme_db_thread
//
void p9_cme_pstate_db_thread(void* arg)
{
    PK_TRACE_INF("DB_TH: Started\n");
    uint32_t cme_flags;
    PkMachineContext  ctx;
    uint32_t pir;
    uint32_t cores = 0;
    uint64_t scom_data;
    uint32_t resclk_data;

    G_cmeHeader = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
    G_lppb = (LocalPstateParmBlock*)(G_cmeHeader->g_cme_pstate_region_offset + CME_SRAM_BASE_ADDR);
    PK_TRACE_INF("DB_TH: Hdr=0x%x, LPPB=0x%x\n", (uint32_t)G_cmeHeader, (uint32_t)G_lppb);

    //Read CME_LCL_FLAGS
    cme_flags = in32(CME_LCL_FLAGS);

    //Determine quad number and exID for this CME
    asm volatile ("mfpir %[data] \n" : [data]"=r"(pir) );

    //We found a bug in HW late, so this is a workaround. However, in SIMICS the model
    //is as per original spec.
#if !SIMICS_TUNING
    G_cme_pstate_record.quadNum = (pir & PIR_INSTANCE_NUM_MASK);
#else
    G_cme_pstate_record.quadNum = QUAD_FROM_CME_INSTANCE_NUM((pir & PIR_INSTANCE_NUM_MASK));
#endif

    //Determine if this CME is quadManager
    //CME 1, check if CME0 is functional
    if (cme_flags & CME_FLAGS_EX_ID)
    {
        //CME0 is functional
        if (cme_flags & CME_FLAGS_SIBLING_FUNCTIONAL)
        {
            G_cme_pstate_record.qmFlag = 0;
            G_cme_pstate_record.siblingCMEFlag = 1;
        }
        else
        {
            //CME0 is not functional, so CME1 is quadMgr
            G_cme_pstate_record.qmFlag = 1;
            G_cme_pstate_record.siblingCMEFlag = 0;
        }
    }
    else
    {
        // A functional CME0 is always the quad manager
        G_cme_pstate_record.qmFlag = 1;

        if (cme_flags & CME_FLAGS_SIBLING_FUNCTIONAL)
        {
            G_cme_pstate_record.siblingCMEFlag = 1;
        }
        else
        {
            G_cme_pstate_record.siblingCMEFlag = 0;
        }
    }

    //Enable Interrupts depending on whether this CME is
    //a quadManager or siblingCME. DB0 is enabled only
    //on quadManager. Whereas, InterCME_IN0 only on
    //siblingCME.
    //
    //if quadManager
    if (G_cme_pstate_record.qmFlag)
    {
        if (cme_flags & CME_FLAGS_CORE0_GOOD)
        {
            out32_sh(CME_LCL_EIMR_CLR, BIT32(4));//Enable DB0_0
            out32_sh(CME_LCL_EIMR_OR, BIT32(5));//Disable DB0_1
            g_eimr_override |= BIT64(37);
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C0;
            cores |= CME_MASK_C0;
        }
        else if (cme_flags & CME_FLAGS_CORE1_GOOD)
        {
            out32_sh(CME_LCL_EIMR_OR, BIT32(4));//Disable DB0_0
            out32_sh(CME_LCL_EIMR_CLR, BIT32(5));//Enable DB0_1
            g_eimr_override |= BIT64(36);
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C1;
            cores |= CME_MASK_C1;
        }

        out64(CME_LCL_EIMR_OR, BIT64(7));//Disable  InterCME_IN0
        g_eimr_override |= BIT64(7);
        G_db_thread_data.dpll_pstate0_value   = G_lppb->dpll_pstate0_value;

        // Pstate Clocking Initialization (QM)
        // Calculate the initial pstate
        ippm_read(QPPM_DPLL_STAT, &scom_data);
        G_cme_pstate_record.quadPstate = (uint32_t)G_db_thread_data.dpll_pstate0_value
                                         - (uint32_t)((scom_data & BITS64(1, 11)) >> SHIFT64(11));
        PK_TRACE_INF("qm | initial pstate=%d", G_cme_pstate_record.quadPstate);

        // Synchronize initial pstate w/ sibling CME
        if(G_cme_pstate_record.siblingCMEFlag)
        {
            out64(CME_LCL_EITR_OR, BIT64(30));
            out64(CME_LCL_EIPR_OR, BIT64(30));
            intercme_msg_send(G_cme_pstate_record.quadPstate,
                              IMT_INIT_PSTATE);
        }
    }
    else
    {
        out64(CME_LCL_EIMR_OR, BIT64(36) | BIT64(37));//Disable DB0_0 and DB0_1

        if(cme_flags & CME_FLAGS_CORE0_GOOD)
        {
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C0;
            cores |= CME_MASK_C0;
        }
        else if(cme_flags & CME_FLAGS_CORE1_GOOD)
        {
            G_cme_pstate_record.cmeMaskGoodCore = CME_MASK_C1;
            cores |= CME_MASK_C1;
        }

        // Resonant Clocking Initialization (Sibling)
        out64(CME_LCL_EITR_OR, BIT64(29));
        out64(CME_LCL_EIPR_OR, BIT64(29));

        intercme_msg_recv(&G_cme_pstate_record.quadPstate, IMT_INIT_PSTATE);
        PK_TRACE_INF("sib | initial pstate=%d", G_cme_pstate_record.quadPstate);

        out64(CME_LCL_EIMR_CLR, BIT64(7)); //Enable InterCME_IN0
        g_eimr_override |= BIT64(37);
        g_eimr_override |= BIT64(36);
    }

    // At this point, both QM and Sib can set their initial global Pstate
    G_cme_pstate_record.globalPstate = G_cme_pstate_record.quadPstate;

    // Resonant Clocking Check (QM + Sibling)
    // Check that resonance is not enabled in CACCR and EXCGCR
    CME_GETSCOM(CPPM_CACCR, cores, CME_SCOM_EQ, scom_data);
    // Ignore clk_sync_enable and reserved
    resclk_data = (scom_data >> 32) & ~BITS32(15, 31);

    if(resclk_data != 0)
    {
        PK_PANIC(CME_PSTATE_RESCLK_ENABLED_AT_BOOT);
    }

    ippm_read(QPPM_EXCGCR, &scom_data);
    // Ignore clk_sync_enable, clkglm_async_reset, clkglm_sel, and reserved
    scom_data &= ~(BITS64(29, 37) | BITS64(42, 63));

    if(scom_data != 0)
    {
        PK_PANIC(CME_PSTATE_RESCLK_ENABLED_AT_BOOT);
    }

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
            scom_data = (scom_data & BITS64(0, 12)) >> SHIFT64(15);
            p9_cme_resclk_get_index(G_cme_pstate_record.quadPstate,
                                    &G_cme_pstate_record.resclkData.common_resclk_idx);
            // Read QACCR and clear out the resclk settings
            ippm_read(QPPM_QACCR, &scom_data);
            scom_data &= ~BITS64(0, 12);
            // OR-in the resclk settings which match the current Pstate
            scom_data |= (((uint64_t)G_lppb->resclk.steparray
                           [G_cme_pstate_record.resclkData.common_resclk_idx].value)
                          << 48);
            // Write QACCR
            ippm_write(QPPM_QACCR, scom_data);
        }

        out32(CME_LCL_FLAGS_OR, CME_FLAGS_RCLK_OPERABLE);
    }

    //Doorbell Thread(this thread) will continue to run on
    //Quad Manager CME. The sibling CME has intercme_in0 enabled
    //and won't run this thread past this point.
    if (G_cme_pstate_record.qmFlag)
    {
        pk_semaphore_create(&G_cme_pstate_record.sem[1], 0, 1);

        PK_TRACE("DB_TH: Inited\n");

        while(1)
        {
            //pend on sempahore
            pk_semaphore_pend(&G_cme_pstate_record.sem[1], PK_WAIT_FOREVER);
            wrteei(1);

            p9_cme_pstate_process_db0();

            pk_irq_vec_restore(&ctx);
        }
    }

    PK_TRACE_INF("DB_TH: Exit\n");
}

//
//Process Doorbell0
//
inline void p9_cme_pstate_process_db0()
{
    cppm_cmedb0_t dbData;
    uint32_t cme_flags = in32(CME_LCL_FLAGS);

    PK_TRACE_INF("DB_TH: Process DB0 Enter\n");

    //Read DB0 value
    if (cme_flags & CME_FLAGS_CORE0_GOOD)
    {
        out32_sh(CME_LCL_EISR_CLR, BIT32(4));
        out32_sh(CME_LCL_EISR_CLR, BIT32(5));
        CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C0, CME_SCOM_EQ, dbData.value);
    }
    else if (cme_flags & CME_FLAGS_CORE1_GOOD)
    {
        out32_sh(CME_LCL_EISR_CLR, BIT32(5));
        CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C1, CME_SCOM_EQ, dbData.value);
    }

    PK_TRACE_INF("DB_TH: DB0 0x%x\n"dbData.value);

    //Process DB0
    if(dbData.fields.cme_message_number0 == MSGID_DB0_START_PSTATE_BROADCAST)
    {
        p9_cme_pstate_db0_start(dbData, cme_flags);
    }
    else if(dbData.fields.cme_message_number0 == MSGID_DB0_GLOBAL_ACTUAL_BROADCAST)
    {
        p9_cme_pstate_db0_glb_bcast(dbData, cme_flags);
    }
    else if(dbData.fields.cme_message_number0 == MSGID_DB0_STOP_PSTATE_BROADCAST)
    {
        p9_cme_pstate_db0_suspend(dbData, cme_flags);
    }
    else
    {
        pk_halt();
    }

    PK_TRACE_INF("DB_TH: Process DB0 Exit\n");
}

//
//Doorbell0 Start
//
inline void p9_cme_pstate_db0_start(cppm_cmedb0_t dbData, uint32_t cme_flags)
{
    PK_TRACE_INF("DB_TH: DB0 Start Enter\n");
    ppm_pig_t ppmPigData;

    //Respond with error if already started
    if (G_cme_pstate_record.pstatesEnabled == 1)
    {
        //Send type4(ack doorbell)
        ppmPigData.value = 0;
        ppmPigData.fields.req_intr_type = 4;
        ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_ERROR;
        send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);
        PK_TRACE_INF("DB_TH: DB0  Start while already started\n");
        pk_halt();
    }

    //\TODO RTC: 152965
    //Check operable bits
    //Check if resonant clkss are either all 0s or "OFF" encode(from the Parm)
    //Check for iVRM disable
    //Check for VDM disable

    p9_cme_pstate_update(dbData.value, cme_flags);

    //\TODO RTC: 152965
    //Enable Resonant Clks if flag
    //Enable ivrm if flag
    //Enable vdm if flag

    G_cme_pstate_record.pstatesEnabled = 1;

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);

    //Clear Pending PMCR interrupts and Enable PMCR Interrupts
    if (cme_flags & CME_FLAGS_CORE0_GOOD)
    {
        out32_sh(CME_LCL_EISR_CLR, BIT32(2));
        out64(CME_LCL_EIMR_CLR,  BIT64(34));//Enable PMCR0
    }

    if (cme_flags & CME_FLAGS_CORE1_GOOD)
    {
        out32_sh(CME_LCL_EISR_CLR, BIT32(3));
        out64(CME_LCL_EIMR_CLR,  BIT64(35));//Enable PMCR1
    }

    PK_TRACE_INF("DB_TH: DB0 Start Exit\n");
}

//
//Doorbell0 Global Broadcast
//
inline void p9_cme_pstate_db0_glb_bcast(cppm_cmedb0_t dbData, uint32_t cme_flags)
{
    PK_TRACE_INF("DB_TH: DB0 GlbBcast Enter\n");
    ppm_pig_t ppmPigData;

    if (G_cme_pstate_record.pstatesEnabled == 0)
    {
        //Send type4(ack doorbell)
        ppmPigData.value = 0;
        ppmPigData.fields.req_intr_type = 4;
        ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_ERROR;
        send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);
        PK_TRACE_INF("DB_TH: DB0Bcast while PS disabled\n");
        pk_halt();
    }

    p9_cme_pstate_update(dbData.value, cme_flags);

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
inline void p9_cme_pstate_db0_suspend(cppm_cmedb0_t dbData, uint32_t cme_flags)
{
    PK_TRACE_INF("DB_TH: DB0 Suspend Enter\n");
    ppm_pig_t ppmPigData;

    if (G_cme_pstate_record.pstatesEnabled == 0)
    {
        //Send type4(ack doorbell)
        ppmPigData.value = 0;
        ppmPigData.fields.req_intr_type = 4;
        ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_ERROR;
        send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);
        pk_halt();
    }

    G_cme_pstate_record.pstatesEnabled = 0;

    if (cme_flags & CME_FLAGS_CORE0_GOOD)
    {
        out64(CME_LCL_EIMR_OR,  BIT64(34));//Disable PMCR0
    }

    if (cme_flags & CME_FLAGS_CORE1_GOOD)
    {
        out64(CME_LCL_EIMR_OR,  BIT64(35));//Disable PMCR1
    }

    p9_cme_pstate_notify_sib(); //Notify sibling

    //\TODO RTC: 152965
    //Disable iVRM, move into bypass
    //Disable resonant clocking, move to non-resonant value

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED;
    send_pig_packet(ppmPigData.value, G_cme_pstate_record.cmeMaskGoodCore);
    PK_TRACE_INF("DB_TH: DB0 Suspend Exit\n");
}

//
//p9_cme_pstate_pmsr_updt
//
inline void p9_cme_pstate_pmsr_updt(uint64_t dbData, uint32_t cme_flags)
{
    PK_TRACE_INF("DB_TH: PMSR Enter\n");
    uint64_t pmsrData;
    uint8_t localPS;

    //Update PMSR
    localPS = (dbData >>
               ((MAX_QUADS - G_cme_pstate_record.quadNum - 1) << 3)) & 0xFF;
    pmsrData = (dbData << 8) & 0xFF00000000000000;
    pmsrData |= ((uint64_t)localPS << 48) & 0x00FF000000000000;

    if (cme_flags & CME_FLAGS_CORE0_GOOD)
    {
        PK_TRACE_INF("DB_TH: PMSR=0x%08x%08x\n", pmsrData >> 32, pmsrData);
        out64(CME_LCL_PMSRS0, pmsrData);
    }

    if (cme_flags & CME_FLAGS_CORE1_GOOD)
    {
        PK_TRACE_INF("DB_TH: PMSR=0x%08x%08x\n", pmsrData >> 32, pmsrData);
        out64(CME_LCL_PMSRS1, pmsrData);
    }

    PK_TRACE_INF("DB_TH: PMSR Exit\n");
}

inline void p9_cme_pstate_notify_sib()
{
    uint32_t intercme_acked;
    uint64_t eisr;

    PK_TRACE_INF("DB_TH: Notify Enter\n");

    //Notify sibling CME(if any)
    if (G_cme_pstate_record.siblingCMEFlag == 1)
    {
        //Send interCME interrupt
        out32(CME_LCL_ICCR_OR, BIT32(5)); //Send direct InterCME_IN0
        out32(CME_LCL_ICCR_CLR, BIT32(5));//Clear

#if !SIMICS_TUNING
        //poll on interCME interrupt
        intercme_acked = 0;
#else
        intercme_acked = 1;
#endif

        while (!intercme_acked)
        {
            eisr = in64(CME_LCL_EISR);

            if (eisr & 0x0100000000000000)
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
inline void p9_cme_pstate_freq_update(uint32_t next_pstate)
{
    PK_TRACE_INF("DB_TH: Freq Updt Enter\n");
    PK_TRACE_INF("DB_TH: Dpll0=0x%x\n", G_db_thread_data.dpll_pstate0_value);
    PK_TRACE_INF("DB_TH: Hdr=0x%x, LPPB=0x%x\n", (uint32_t)G_cmeHeader, (uint32_t)G_lppb);
    //Adjust DPLL
    qppm_dpll_freq_t dpllFreq;

    //Write new value of DPLL using INTERPPM
    dpllFreq.value = 0;
    dpllFreq.fields.fmax  = (uint16_t)(G_db_thread_data.dpll_pstate0_value - next_pstate);
    dpllFreq.fields.fmult = (uint16_t)(G_db_thread_data.dpll_pstate0_value - next_pstate);
    dpllFreq.fields.fmin  = (uint16_t)(G_db_thread_data.dpll_pstate0_value - next_pstate);
    ippm_write(QPPM_DPLL_FREQ, dpllFreq.value);
    PK_TRACE_INF("DB_TH: Freq Updt Exit\n");
}

inline void p9_cme_pstate_update(uint64_t dbData, uint32_t cme_flags)
{
    PK_TRACE_INF("DB_TH: Pstate Updt Enter");

    if(G_cme_pstate_record.siblingCMEFlag)
    {
        // "Lock" the sibling until the pstate transition is complete
        intercme_msg_send(0, IMT_LOCK_SIBLING);
        // The Sibling is a "pumpkin" from this point forward until calling
        // p9_cme_pstate_notify_sib()
    }

    uint32_t next_pstate = (dbData >>
                            ((MAX_QUADS - G_cme_pstate_record.quadNum - 1) << 3)) & 0x000000ff;
    G_cme_pstate_record.globalPstate = (dbData & BITS64(8, 15)) >> SHIFT64(15);

    PK_TRACE_INF("DB_TH: DBData=0x%08x%08x\n", dbData >> 32, dbData);

    if(next_pstate > G_cme_pstate_record.quadPstate)
    {
        p9_cme_pstate_freq_update(next_pstate);

        if(cme_flags & CME_FLAGS_RCLK_OPERABLE)
        {
            PkMachineContext ctx;
            pk_critical_section_enter(&ctx);

            p9_cme_resclk_update(ANALOG_COMMON, next_pstate,
                                 G_cme_pstate_record.resclkData.common_resclk_idx);

            pk_critical_section_exit(&ctx);
        }
    }
    else if(next_pstate < G_cme_pstate_record.quadPstate)
    {
        if(cme_flags & CME_FLAGS_RCLK_OPERABLE)
        {
            PkMachineContext ctx;
            pk_critical_section_enter(&ctx);

            p9_cme_resclk_update(ANALOG_COMMON, next_pstate,
                                 G_cme_pstate_record.resclkData.common_resclk_idx);

            pk_critical_section_exit(&ctx);
        }

        p9_cme_pstate_freq_update(next_pstate);
    }

    p9_cme_pstate_notify_sib(); //Notify sibling
    p9_cme_pstate_pmsr_updt(dbData, cme_flags);

    G_cme_pstate_record.quadPstate = next_pstate;

    PK_TRACE_INF("DB_TH: Pstate Updt Exit");
}
