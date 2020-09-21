/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_thread_pmcr.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
extern CmePstateRecord G_cme_pstate_record;

void cme_pstate_pmcr_action()
{
    PkMachineContext  ctx __attribute__((unused));
    ppm_pig_t ppmPigData;
    uint64_t request;
    uint32_t eisr_mask, core, cm;

    //Determine which cores have pending request & clear interrupt
    eisr_mask = in32_sh(CME_LCL_EISR) & BITS64SH(34, 2);
    core = eisr_mask >> SHIFT64SH(35);
    out32_sh(CME_LCL_EISR_CLR, eisr_mask);

    //Read PMCR and send request to PGPE (Type1 only, previously sent 2 phases)
    for(cm = 2; cm > 0; cm--)
    {
        if (core & cm)
        {
            request = in64(CME_LCL_PMCRS0 + ((cm & 1) << 5)) & PMCR_LOWERPS_MASK;
            PK_TRACE_INF("PMCR: Fwd Core[%d] Pstate Request = 0x%02x", cm, (uint32_t)(request >> PMCR_PSTATE_SHIFT_AMOUNT));

            //NOTE: that LowerPS coincidentally is in the correct place for the PIG payload
            //Send Type1(previously Phase 2) only.
            //Phase 1 is deprecated(Previously used Type0 which is now re-defined)
            ppmPigData.value = 0;
            ppmPigData.fields.req_intr_type = 1;
            ppmPigData.value |= request;
            send_pig_packet(ppmPigData.value, cm);
        }
    }
}

//
//PMCR Interrupt Handler
//
void p9_cme_pstate_pmcr_handler(void)
{
    wrteei(1);
    cme_pstate_pmcr_action();
}

//
// Run this when all inits are done
//
void p9_cme_init_done()
{
    PK_TRACE_DBG("CME INIT DONE: Enter");
    uint32_t msg;

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
        out32(G_CME_LCL_EIMR_CLR, BIT32(29));
    }

    // This is the current barrier for SGPE booting the CMEs, any and all
    // initialization must be completed prior!
    out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_PMCR_READY));

    PK_TRACE_INF("CME INIT DONE: Exit");
}
