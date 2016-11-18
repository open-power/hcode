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
#include "p9_cme_header.h"
#include "pstate_pgpe_cme_api.h"
#include "p9_pstate_vpd.h"
#include "ppe42_cache.h"


//
//Globals
//
extern CmePstateRecord G_cme_pstate_record;
cme_pstate_db_data_t G_db_thread_data;

//\todo Use PState Parameter Block structures. RTC
extern global_pstate_table_t G_gpst;
extern freq_2_idx_entry_t G_freq2idx[NUM_FREQ_REGIONS];
extern uint16_t G_cgm_table[CGM_TRANSITIONS];
extern uint8_t G_resclkEnabled;
extern cme_header_t* G_cme_header;

//
//Function Prototypes
//
inline void p9_cme_pstate_process_db0();
inline void p9_cme_pstate_db0_start(cppm_cmedb0_t dbData, uint32_t cme_flags);
inline void p9_cme_pstate_db0_glb_bcast(cppm_cmedb0_t dbData, uint32_t cme_flags);
inline void p9_cme_pstate_db0_suspend(cppm_cmedb0_t dbData, uint32_t cme_flags);
inline void p9_cme_pstate_freq_update(uint64_t dbData);
inline void p9_cme_pstate_resclk_update();

//
//Doorbell0 interrupt handler
//
//Only enabled on QuadManager-CME
void p9_cme_pstate_db_handler(void* arg, PkIrqId irq)
{
    pk_semaphore_post((PkSemaphore*)arg);
}

//
//p9_cme_db_thread
//
void p9_cme_pstate_db_thread(void* arg)
{
    PK_TRACE("DB_TH: Started\n");
    uint32_t cme_flags;
    PkMachineContext  ctx;
    uint32_t pir;

    //\todo Read the data from HOMER code. RTC
    p9_pstate_vpd_init();

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

    if (cme_flags & CME_FLAGS_QMGR_MASTER)
    {
        G_db_thread_data.qmFlag = 1;

        if (cme_flags & CME_FLAGS_SIBLING_FUNCTIONAL)
        {
            G_db_thread_data.siblingCMEFlag = 1;
        }
        else
        {
            G_db_thread_data.siblingCMEFlag = 0;
        }
    }
    else
    {
        G_db_thread_data.qmFlag = 0;
        G_db_thread_data.siblingCMEFlag = 0;
    }

    //if quadManager
    if (G_db_thread_data.qmFlag)
    {
        if (cme_flags & CME_FLAGS_CORE0_GOOD)
        {
            out32_sh(CME_LCL_EIMR_CLR, BIT32(4));//Enable DB0_0
            out32_sh(CME_LCL_EIMR_OR, BIT32(5));//Disable DB0_1
            g_eimr_override |= BIT64(37);
            G_db_thread_data.cmeMaskGoodCore = CME_MASK_C0;
        }
        else if (cme_flags & CME_FLAGS_CORE1_GOOD)
        {
            out32_sh(CME_LCL_EIMR_OR, BIT32(4));//Disable DB0_0
            out32_sh(CME_LCL_EIMR_CLR, BIT32(5));//Enable DB0_1
            g_eimr_override |= BIT64(36);
            G_db_thread_data.cmeMaskGoodCore = CME_MASK_C1;
        }

        out64(CME_LCL_EIMR_OR, BIT64(7));//Disable  InterCME_IN0
        g_eimr_override |= BIT64(7);

        G_db_thread_data.dpll_pstate0_value = G_gpst.pstate0_frequency_khz / G_gpst.frequency_step_khz;
    }
    else
    {
        out64(CME_LCL_EIMR_OR, BIT64(36) | BIT64(37));//Disable DB0_0 and DB0_1
        out64(CME_LCL_EIMR_CLR, BIT64(7)); //Enable InterCME_IN0
        g_eimr_override |= BIT64(37);
        g_eimr_override |= BIT64(36);
    }

    //Only Quad Manager CME executes this. The sibling CME
    //has intercme_in0 enabled
    if (G_db_thread_data.qmFlag)
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

    PK_TRACE("DB_TH: Exit\n");
}

//
//Process Doorbell0
//
inline void p9_cme_pstate_process_db0()
{
    cppm_cmedb0_t dbData;
    uint32_t cme_flags = in32(CME_LCL_FLAGS);

    PK_TRACE("DB_TH: Process DB0 Enter\n");

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

    PK_TRACE("DB_TH: DB0 0x%x\n"dbData.value);

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

    PK_TRACE("DB_TH: Process DB0 Exit\n");
}

//
//Doorbell0 Start
//
inline void p9_cme_pstate_db0_start(cppm_cmedb0_t dbData, uint32_t cme_flags)
{
    PK_TRACE("DB_TH: DB0 Start Enter\n");
    uint32_t intercme_acked;
    uint64_t eisr, pmsrData;
    uint8_t localPS;
    ppm_pig_t ppmPigData;

    if (G_cme_pstate_record.pstatesEnabled == 1)
    {
        //Send type4(ack doorbell)
        ppmPigData.value = 0;
        ppmPigData.fields.req_intr_type = 4;
        ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_ERROR;
        send_pig_packet(ppmPigData.value, G_db_thread_data.cmeMaskGoodCore);
        PK_TRACE("DB_TH: DB0  Start while already started\n");
        pk_halt();
    }

    //\TODO RTC: 152965
    //Check operable bits
    //Check if resonant clkss are either all 0s or "OFF" encode(from the Parm)
    //Check for iVRM disable
    //Check for VDM disable

    //Pstate Update
#if !SIMICS_TUNING
    p9_cme_pstate_freq_update(dbData.value);
#endif

    //Notify sibling CME(if any)
    if (G_db_thread_data.siblingCMEFlag == 1)
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

    //Update PMSR
    localPS = (dbData.value >>
               ((MAX_QUADS - G_cme_pstate_record.quadNum - 1) * 8)) & 0xFF;
    pmsrData = (dbData.value << 8) & 0xFF00000000000000;
    pmsrData |= ((uint64_t)localPS << 48) & 0x00FF000000000000;

    if (cme_flags & CME_FLAGS_CORE0_GOOD)
    {
        out64(CME_LCL_PMSRS0, pmsrData);
    }

    if (cme_flags & CME_FLAGS_CORE1_GOOD)
    {
        out64(CME_LCL_PMSRS1, pmsrData);
    }

    //\TODO RTC: 152965
    //Enable Resonant Clks if flag
    //Enable ivrm if flag
    //Enable vdm if flag

    G_cme_pstate_record.pstatesEnabled = 1;

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    send_pig_packet(ppmPigData.value, G_db_thread_data.cmeMaskGoodCore);

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

    PK_TRACE("DB_TH: DB0 Start Exit\n");
}

//
//Doorbell0 Global Broadcast
//
inline void p9_cme_pstate_db0_glb_bcast(cppm_cmedb0_t dbData, uint32_t cme_flags)
{
    PK_TRACE("DB_TH: DB0 GlbBcast Enter\n");
    uint32_t intercme_acked;
    uint64_t eisr, pmsrData;
    uint8_t localPS;
    ppm_pig_t ppmPigData;

    if (G_cme_pstate_record.pstatesEnabled == 0)
    {
        //Send type4(ack doorbell)
        ppmPigData.value = 0;
        ppmPigData.fields.req_intr_type = 4;
        ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_ERROR;
        send_pig_packet(ppmPigData.value, G_db_thread_data.cmeMaskGoodCore);
        PK_TRACE("DB_TH: DB0Bcast while PS disabled\n");
        pk_halt();
    }

    //Update analog
    if (G_resclkEnabled)
    {
        p9_cme_pstate_resclk_update();
    }

#if !SIMICS_TUNING
    p9_cme_pstate_freq_update(dbData.value);
#endif

    //Notify sibling CME(if any)
    if (G_db_thread_data.siblingCMEFlag == 1)
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

    //Update PMSR
    localPS = (dbData.value >>
               ((MAX_QUADS - G_cme_pstate_record.quadNum - 1) * 8)) & 0xFF;
    pmsrData = (dbData.value << 8) & 0xFF00000000000000;
    pmsrData |= ((uint64_t)localPS << 48) & 0x00FF000000000000;

    if (cme_flags & CME_FLAGS_CORE0_GOOD)
    {
        out64(CME_LCL_PMSRS0, pmsrData);
    }

    if (cme_flags & CME_FLAGS_CORE1_GOOD)
    {
        out64(CME_LCL_PMSRS1, pmsrData);
    }

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    send_pig_packet(ppmPigData.value, G_db_thread_data.cmeMaskGoodCore);
    PK_TRACE("DB_TH: DB0 GlbBcast Exit\n");
}

//
//Doorbell0 Suspend
//
inline void p9_cme_pstate_db0_suspend(cppm_cmedb0_t dbData, uint32_t cme_flags)
{
    PK_TRACE("DB_TH: DB0 Suspend Enter\n");
    ppm_pig_t ppmPigData;

    if (G_cme_pstate_record.pstatesEnabled == 0)
    {
        //Send type4(ack doorbell)
        ppmPigData.value = 0;
        ppmPigData.fields.req_intr_type = 4;
        ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_ERROR;
        send_pig_packet(ppmPigData.value, G_db_thread_data.cmeMaskGoodCore);
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

    //\TODO RTC: 152965
    //Disable iVRM, move into bypass
    //Disable resonant clocking, move to non-resonant value

    //Send type4(ack doorbell)
    ppmPigData.value = 0;
    ppmPigData.fields.req_intr_type = 4;
    ppmPigData.fields.req_intr_payload = MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED;
    send_pig_packet(ppmPigData.value, G_db_thread_data.cmeMaskGoodCore);
    PK_TRACE("DB_TH: DB0 Suspend Exit\n");
}

//
//p9_cme_pstate_freq_update
//
inline void p9_cme_pstate_freq_update(uint64_t dbData)
{
    uint8_t localPS = (dbData >>
                       ((MAX_QUADS - G_cme_pstate_record.quadNum - 1) * 8)) & 0xFF;

    //Adjust DPLL
    cppm_ippmcmd_t  cppm_ippmcmd;
    qppm_dpll_freq_t dpllFreq;

    //Write new value of DPLL using INTERPPM
    dpllFreq.value = 0;
    dpllFreq.fields.fmax  = (uint16_t)(G_db_thread_data.dpll_pstate0_value - localPS) << 3;
    dpllFreq.fields.fmult = (uint16_t)(G_db_thread_data.dpll_pstate0_value - localPS) << 3;
    dpllFreq.fields.fmin  = (uint16_t)(G_db_thread_data.dpll_pstate0_value - localPS) << 3;
    CME_PUTSCOM(CPPM_IPPMWDATA, G_db_thread_data.cmeMaskGoodCore, dpllFreq.value);
    cppm_ippmcmd.value = 0;
    cppm_ippmcmd.fields.qppm_reg = QPPM_DPLL_FREQ & 0x000000ff;
    cppm_ippmcmd.fields.qppm_rnw = 0;
    CME_PUTSCOM(CPPM_IPPMCMD, G_db_thread_data.cmeMaskGoodCore, cppm_ippmcmd.value);
}

//
//p9_cme_pstate_resclk_update
//
inline void p9_cme_pstate_resclk_update()
{
    uint64_t val;
    uint8_t tidx, step;
    int32_t i;

    //get targetIndex from Table1(ControlIndex) by indexing with localPState
    tidx = G_db_thread_data.resClkTblIdx;

    for (i = NUM_FREQ_REGIONS - 1; i >= 0; i--)
    {
        if (G_freq2idx[i].pstate > G_db_thread_data.localPS)
        {
            tidx = i;
            break;
        }
    }

    //walk Table2[Resonant Grids Control Data)
    if (tidx > G_db_thread_data.resClkTblIdx)
    {
        step = 1;
    }
    else
    {
        step = -1;
    }

    while(G_db_thread_data.resClkTblIdx != tidx)
    {
        G_db_thread_data.resClkTblIdx += step;
        val = (uint64_t)(G_cgm_table[G_db_thread_data.resClkTblIdx]) << 48;
        val |= G_db_thread_data.qaccr21_23InitVal;

#if !SIMICS_TUNING
        cppm_ippmcmd_t  cppm_ippmcmd;
        //Write val to QACCR
        CME_PUTSCOM(CPPM_IPPMWDATA, G_db_thread_data.cmeMaskGoodCore, val);
        cppm_ippmcmd.value = 0;
        cppm_ippmcmd.fields.qppm_reg = QPPM_QACCR & 0x000000ff;
        cppm_ippmcmd.fields.qppm_rnw = 0;
        CME_PUTSCOM(CPPM_IPPMCMD, G_db_thread_data.cmeMaskGoodCore, cppm_ippmcmd.value);
#endif
    }
}
