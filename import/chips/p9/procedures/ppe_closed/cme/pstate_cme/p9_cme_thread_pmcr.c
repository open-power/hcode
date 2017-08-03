/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_thread_pmcr.c $ */
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
#include "cme_panic_codes.h"

//
//Globals
//
cme_pstate_pmcr_data_t G_pmcr_thread_data;
extern CmePstateRecord G_cme_pstate_record;
uint32_t G_pmcr_cme_flags;

void cme_pstate_pmcr_action()
{
    // In IOTA, any task function is executed with EE=1
#if !defined(__IOTA__)
    wrteei(1);
#endif
    PkMachineContext  ctx __attribute__((unused));
    uint64_t pmcr;
    ppm_pig_t ppmPigData;
    uint32_t eisr;
    static
    uint32_t coreMask[CORES_PER_EX] __attribute__((aligned(8))) =
    {
        CME_MASK_C0,
        CME_MASK_C1
    };

    int c;

    //Determine which core have pending request
    for(c = 0; c < CORES_PER_EX; c++)
    {
        if (G_pmcr_cme_flags & (BIT32(CME_FLAGS_CORE0_GOOD) >> c))
        {
            eisr = in32_sh(CME_LCL_EISR); //EISR

            if (eisr & (BIT32(2) >> c))
            {
                //Clear interrupt and read PMCR
                out32_sh(CME_LCL_EISR_CLR, BIT32(2) >> c);
                //We read the pmcr into a local variable, so that
                //both phases use the same PMCR value. Otherwise, it's possible
                //for pmcr to change between sending phase 1 and phase 2
                pmcr = in64(CME_LCL_PMCRS0 + (c << 5));

                //Send Phase 1
                ppmPigData.value = 0;
                ppmPigData.fields.req_intr_type = 0;
                ppmPigData.value |= ((pmcr & PIG_PAYLOAD_PS_PHASE1_MASK) >> 8);
                ppmPigData.value |= ((uint64_t)(G_pmcr_thread_data.seqNum & 0x6) << 57);
                send_pig_packet(ppmPigData.value, coreMask[c]);
                G_pmcr_thread_data.seqNum++;

                //Send Phase 2
                ppmPigData.value = 0;
                ppmPigData.fields.req_intr_type = 1;
                ppmPigData.value |= (pmcr & PIG_PAYLOAD_PS_PHASE2_MASK);
                ppmPigData.value |= ((uint64_t)(G_pmcr_thread_data.seqNum & 0x6) << 57);
                send_pig_packet(ppmPigData.value, coreMask[c]);
                G_pmcr_thread_data.seqNum++;
                PK_TRACE_INF("PMCR_TH: Fwd PMCR[%d]=0x%08x%08x\n", c, pmcr >> 32, pmcr);
            }
        }
    }

    pk_irq_vec_restore(&ctx);
}

//
//PMCR Interrupt Handler
//
void p9_cme_pstate_pmcr_handler(void* arg, PkIrqId irq)
{
#if defined(__IOTA__)
    cme_pstate_pmcr_action();
#else
    pk_semaphore_post((PkSemaphore*)arg);
#endif
}

//
//p9_cme_pmcr_thread
//
void p9_cme_pstate_pmcr_thread(void* arg)
{
    PK_TRACE_INF("PMCR_TH: Enter\n");
    uint32_t msg;

    G_pmcr_thread_data.seqNum = 0; //Initialize seqNum to zero

    G_pmcr_cme_flags = in32(CME_LCL_FLAGS);;

#if !defined(__IOTA__)
    pk_semaphore_create(&G_cme_pstate_record.sem[0], 0, 1);
#endif

    // Synchronization between QM and Sibling
    // @todo RTC173279 move into CME init function
    if(G_cme_pstate_record.qmFlag)
    {
        // Synchronize QACCR setting w/ sibling CME
        if(G_cme_pstate_record.siblingCMEFlag)
        {
            intercme_msg_send(0, IMT_SYNC_SIBLING);
        }
    }
    else
    {
        intercme_msg_recv(&msg, IMT_SYNC_SIBLING);
        // Unmask the COMM_RECVD interrupt for the intercme msg handler
        out32(CME_LCL_EIMR_CLR, BIT32(29));
    }

    // This is the current barrier for SGPE booting the CMEs, any and all
    // initialization must be completed prior!
    out32(CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_PMCR_READY));

    PK_TRACE_INF("PMCR_TH: Inited\n");

#if !defined(__IOTA__)

    while(1)
    {
        //pend on sempahore
        pk_semaphore_pend(&G_cme_pstate_record.sem[0], PK_WAIT_FOREVER);
        cme_pstate_pmcr_action();
    }

#endif

    PK_TRACE_INF("PMCR_TH: Exit\n");
}
