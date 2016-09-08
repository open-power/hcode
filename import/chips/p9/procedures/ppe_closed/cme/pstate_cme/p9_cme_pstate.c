/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_pstate.c $ */
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
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file   p9_cme_pstate.c
/// \brief  CME and QCME codes enforcing the Power protocols for Pstate, DPLL
///         actuation, iVRM, resonant clocking, and VDM.
/// \owner  Rahul Batra Email: rbatra@us.ibm.com
///

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
#include "p9_pstate_common.h"
#include "p9_pstate_vpd.h"
#include "ppe42_cache.h"


//
//Globals
//
extern CmePstateRecord G_cme_pstate_record;
cme_pstate_db_data_t G_db_thread_data;
cme_pstate_pmcr_data_t G_pmcr_thread_data;

//\todo Use PState Parameter Block structures. RTC
extern global_pstate_table_t G_gpst;
extern freq_2_idx_entry_t G_freq2idx[NUM_FREQ_REGIONS];
extern uint16_t G_cgm_table[CGM_TRANSITIONS];
extern uint8_t G_resclkEnabled;

//
//Function Prototypes
//
void freq_update(uint64_t dbData);
void resclk_update();
int send_pig_packet(uint64_t data, uint32_t coreMask);

//
//PMCR Interrupt Handler
//
void p9_cme_pstate_pmcr_handler(void* arg, PkIrqId irq)
{
    pk_semaphore_post((PkSemaphore*)arg);
}

//
//Doorbell0 interrupt handler
//
//Only enabled on QuadManager-CME
void p9_cme_pstate_db_handler(void* arg, PkIrqId irq)
{
    pk_semaphore_post((PkSemaphore*)arg);
}

//
//InterCME_IN0 handler
//
void p9_cme_pstate_intercme_in0_handler(void* arg, PkIrqId irq)
{
    pgpe_db0_glb_bcast_t db0C0Data, db0C1Data;
    uint8_t localPS = 0;
    uint32_t cme_flags = in32(CME_LCL_FLAGS);
    uint64_t pmsrData;
    PkMachineContext  ctx;

    //read DB0 for both cores and update PMSR
    if (cme_flags & CME_FLAGS_CORE0_GOOD)
    {
        CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C0, CME_SCOM_EQ, db0C0Data.value);
        localPS = (db0C0Data.value >>
                   ((MAX_QUADS - G_db_thread_data.quadNum - 1) * 8)) & 0xFF;
        pmsrData = (db0C0Data.value << 8) & 0xFF00000000000000;
        pmsrData |= ((uint64_t)localPS << 48) & 0x00FF000000000000;

        out64(CME_LCL_PMSRS0, pmsrData);
        out32_sh(CME_LCL_EISR_CLR, BIT32(4));//Clear DB0_C0
    }

    if (cme_flags & CME_FLAGS_CORE1_GOOD)
    {
        CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C1, CME_SCOM_EQ, db0C1Data.value);
        localPS = (db0C1Data.value >>
                   ((MAX_QUADS - G_db_thread_data.quadNum - 1) * 8)) & 0xFF;
        pmsrData = (db0C1Data.value << 8) & 0xFF00000000000000;
        pmsrData |= ((uint64_t)localPS << 48) & 0x00FF000000000000;

        out64(CME_LCL_PMSRS1, pmsrData);
        out32_sh(CME_LCL_EISR_CLR, BIT32(5));//Clear DB0_C1
    }

    out32(CME_LCL_ICCR_OR, BIT32(5));//Send Direct InterCME_IN0(Ack to QM-CME)
    out32(CME_LCL_ICCR_CLR, BIT32(5));//Clear Ack
    out32(CME_LCL_EISR_CLR, BIT32(7));//Clear InterCME_IN0

    pk_irq_vec_restore(&ctx);
}

//
//p9_cme_pmcr_thread
//
void p9_cme_pstate_pmcr_thread(void* arg)
{
    int32_t c;
    PkMachineContext  ctx;
    cme_scom_pmcrs0_t  pmcr[2];
    ppm_pig_t ppmPigData;
    uint32_t eisr;
    uint32_t coreMask[CORES_PER_EX];
    coreMask[0] = CME_MASK_C0;
    coreMask[1] = CME_MASK_C1;

    G_pmcr_thread_data.seqNum = 0;

    G_pmcr_thread_data.coreGood[0] = 0;
    G_pmcr_thread_data.coreGood[1] = 0;
    G_pmcr_thread_data.cmeFlags = in32(CME_LCL_FLAGS);

    if (G_pmcr_thread_data.cmeFlags & CME_FLAGS_CORE0_GOOD)
    {
        G_pmcr_thread_data.coreGood[0] = 1;
        out64(CME_LCL_EIMR_CLR,  BIT64(34));//Enable PMCR0
    }

    if (G_pmcr_thread_data.cmeFlags & CME_FLAGS_CORE1_GOOD)
    {
        G_pmcr_thread_data.coreGood[1] = 1;
        out64(CME_LCL_EIMR_CLR,  BIT64(35));//Enable PMCR1
    }

    pk_semaphore_create(&G_cme_pstate_record.sem[0], 0, 1);

    while(1)
    {
        //pend on sempahore
        pk_semaphore_pend(&G_cme_pstate_record.sem[0], PK_WAIT_FOREVER);
        wrteei(1);

        //Determine which core have pending request
        for(c = 0; c < CORES_PER_EX; c++)
        {
            if (G_pmcr_thread_data.coreGood[c])
            {
                eisr = in32_sh(CME_LCL_EISR); //EISR

                if (eisr & (BIT32(2) >> c))
                {
                    //Clear interrupt and read PMCR
                    out32_sh(CME_LCL_EISR_CLR, BIT32(2) >> c);
                    pmcr[c].value = in64(CME_LCL_PMCRS0 + (c << 5));

                    //Send Phase 1
                    ppmPigData.value = 0;
                    ppmPigData.fields.req_intr_type = 0;
                    ppmPigData.value |= (((pmcr[c].value & PIG_PAYLOAD_PS_PHASE1_MASK)));
                    ppmPigData.value |= ((G_pmcr_thread_data.seqNum & 0x6) << 57);
                    send_pig_packet(ppmPigData.value, coreMask[c]);
                    G_pmcr_thread_data.seqNum++;

                    //Send Phase 2
                    ppmPigData.value = 0;
                    ppmPigData.fields.req_intr_type = 1;
                    ppmPigData.value |= ((pmcr[c].value & PIG_PAYLOAD_PS_PHASE2_MASK) << 16);
                    ppmPigData.value |= ((G_pmcr_thread_data.seqNum & 0x6) << 57);
                    send_pig_packet(ppmPigData.value, coreMask[c]);
                    G_pmcr_thread_data.seqNum++;
                }
            }
        }

        pk_irq_vec_restore(&ctx);
    }
}

//
//p9_cme_db_thread
//
void p9_cme_pstate_db_thread(void* arg)
{
    uint32_t cme_flags;
    PkMachineContext  ctx;
    //int rc = 0;
    cppm_cmedb0_t dbData;
    uint8_t intercme_acked;
    uint64_t eisr, pmsrData;
    ppm_pig_t ppmPigData;
    uint32_t pir;
    uint8_t localPS;

    //\todo Read the data from HOMER code. RTC
    p9_pstate_vpd_init();

    //Read CME_LCL_FLAGS
    cme_flags = in32(CME_LCL_FLAGS);

    //Determine quad number and exID for this CME
    asm volatile ("mfpir %[data] \n" : [data]"=r"(pir) );

    //We found a bug in HW late, so this is a workaround. However, in SIMICS the model
    //is as per original spec.
#ifndef SIMICS_ENVIRONMENT
    G_db_thread_data.quadNum = (pir & PIR_INSTANCE_NUM_MASK);
#else
    G_db_thread_data.quadNum = QUAD_FROM_CME_INSTANCE_NUM((pir & PIR_INSTANCE_NUM_MASK));
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


    //\todo (RTC) Set intial GlobalPS, LocalPS, resClkIdx, etc.
    //Most likely will come from SGPE. Need to know precisely

    //Only Quad Manager CME executes. The sibling CME
    //has intercme_in0 enabled
    if (G_db_thread_data.qmFlag)
    {
        pk_semaphore_create(&G_cme_pstate_record.sem[1], 0, 1);

        while(1)
        {
            //pend on sempahore
            pk_semaphore_pend(&G_cme_pstate_record.sem[1], PK_WAIT_FOREVER);
            wrteei(1);

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

            //Update analog
            if (G_resclkEnabled)
            {
                resclk_update();
            }

#ifndef SIMICS_ENVIRONMENT
            freq_update(dbData.value);
#endif

            //Notify sibling CME(if any)
            if (G_db_thread_data.siblingCMEFlag == 1)
            {
                //Send interCME interrupt
                out32(CME_LCL_ICCR_OR, BIT32(5)); //Send direct InterCME_IN0
                out32(CME_LCL_ICCR_CLR, BIT32(5));//Clear

#ifndef SIMICS_ENVIRONMENT
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
                       ((MAX_QUADS - G_db_thread_data.quadNum - 1) * 8)) & 0xFF;
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
            ppmPigData.fields.req_intr_payload = 0;
            send_pig_packet(ppmPigData.value, G_db_thread_data.cmeMaskGoodCore);

            pk_irq_vec_restore(&ctx);
        }
    }
}

//
//freq_update
//
void freq_update(uint64_t dbData)
{
    uint8_t localPS = (dbData >>
                       ((MAX_QUADS - G_db_thread_data.quadNum - 1) * 8)) & 0xFF;

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
//resclk_update
//
void resclk_update()
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

#ifndef SIMICS_ENVIRONMENT
        //int rc = 0;
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

//
//send_pig_packet
//
int send_pig_packet(uint64_t data, uint32_t coreMask)
{
    int               rc = 0;
    uint64_t          data_tmp;

    // First make sure no interrupt request is currently granted
    do
    {
        // Read PPMPIG status
        CME_GETSCOM(PPM_PIG, coreMask, CME_SCOM_EQ, data_tmp);
    }
    while (((ppm_pig_t)data_tmp).fields.intr_granted);

    // Send PIG packet
    CME_PUTSCOM(PPM_PIG, coreMask, data);

    return rc;
}
