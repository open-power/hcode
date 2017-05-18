/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_intercme.c $ */
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
#include "cppm_register_addresses.h"
#include "cppm_firmware_registers.h"
#include "cme_register_addresses.h"
#include "cmehw_common.h"
#include "ppehw_common.h"

#include "p9_cme_irq.h"
#include "p9_cme_pstate.h"
#include "pstate_pgpe_cme_api.h"
#include "ppe42_cache.h"
#include "p9_cme_pstate.h"
#include "cme_panic_codes.h"

//
//Globals
//
extern CmePstateRecord G_cme_pstate_record;
extern CmeRecord G_cme_record;

//
//InterCME_IN0 handler
//
void p9_cme_pstate_intercme_in0_handler(void* arg, PkIrqId irq)
{
    cppm_cmedb0_t dbData;
    dbData.value = 0;
    uint32_t cme_flags = in32(CME_LCL_FLAGS);
    PkMachineContext  ctx;

    PK_TRACE("INTER0: Enter\n");

    //Read DB0 from first good core since PGPE
    //writes same value for both cores
    do
    {
        if (cme_flags & (BIT32(CME_FLAGS_CORE0_GOOD)))
        {
            CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C0, CME_SCOM_EQ, dbData.value);
        }
        else
        {
            CME_GETSCOM(CPPM_CMEDB0, CME_MASK_C1, CME_SCOM_EQ, dbData.value);
        }
    }
    while(dbData.value == 0);

    //Extract localPS value from DB
    //Update the Pstate variables
    G_cme_pstate_record.quadPstate = (dbData.value >>
                                      (in32(CME_LCL_SRTCH0) &
                                       (BITS32(CME_SCRATCH_LOCAL_PSTATE_IDX_START, CME_SCRATCH_LOCAL_PSTATE_IDX_LENGTH)
                                       ))) & 0xFF;
    G_cme_pstate_record.globalPstate = (dbData.value & BITS64(8, 8)) >> SHIFT64(15);

    if(dbData.fields.cme_message_number0 == MSGID_DB0_START_PSTATE_BROADCAST)
    {
        PK_TRACE("INTER0: DB0 Start");

        p9_cme_pstate_pmsr_updt(G_cme_record.core_enabled);

        //Clear any pending PMCR interrupts
        out32_sh(CME_LCL_EISR_CLR, G_cme_record.core_enabled << 28);
        out32_sh(CME_LCL_EIMR_CLR, G_cme_record.core_enabled << 28);//Enable PMCR0/1

    }
    else if(dbData.fields.cme_message_number0 == MSGID_DB0_GLOBAL_ACTUAL_BROADCAST)
    {
        PK_TRACE("INTER0: DB0 GlbBcast");
        p9_cme_pstate_pmsr_updt(G_cme_record.core_enabled);
    }
    else if(dbData.fields.cme_message_number0 == MSGID_DB0_STOP_PSTATE_BROADCAST)
    {
        PK_TRACE("INTER0: DB0 Stop");
        out32_sh(CME_LCL_EIMR_CLR, G_cme_record.core_enabled << 28);//Enable PMCR0/1
    }
    else
    {
        PK_PANIC(CME_PSTATE_INVALID_DB0_MSGID);
    }

    out32_sh(CME_LCL_EISR_CLR, G_cme_record.core_enabled << 25);//Clear DB0_C0/C1

    out32(CME_LCL_ICCR_OR, BIT32(5));//Send Direct InterCME_IN0(Ack to QM-CME)
    out32(CME_LCL_ICCR_CLR, BIT32(5));//Clear Ack
    out32(CME_LCL_EISR_CLR, BIT32(7));//Clear InterCME_IN0

    pk_irq_vec_restore(&ctx);

    PK_TRACE("INTER0: Exit");
}

void p9_cme_pstate_intercme_msg_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;
    // Override mask, disable every interrupt except high-priority ones via the
    // priority mask for this interrupt (p9_pk_irq.c)
    uint32_t msg;
    intercme_msg_recv(&msg, IMT_LOCK_SIBLING);

    // Block on the intercme0 interrupt
    while(!(in32(CME_LCL_EISR) & BIT32(8))) {}

    // Restore the mask, cede control to the intercme0 interrupt handler
    pk_irq_vec_restore(&ctx);
}
