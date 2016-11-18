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
#include "p9_cme_flags.h"
#include "p9_cme_pstate.h"
#include "pstate_pgpe_cme_api.h"
#include "p9_pstate_vpd.h"
#include "ppe42_cache.h"

//
//Globals
//
extern CmePstateRecord G_cme_pstate_record;

//
//InterCME_IN0 handler
//
void p9_cme_pstate_intercme_in0_handler(void* arg, PkIrqId irq)
{
    cppm_cmedb0_t dbData;
    dbData.value = 0;
    uint32_t localPS = 0;
    uint32_t cme_flags = in32(CME_LCL_FLAGS);
    uint64_t pmsrData = 0;
    int32_t c = 0;
    PkMachineContext  ctx;

    PK_TRACE("INTERCME_IN0: Enter\n");

    for (c = 0; c < CORES_PER_EX; c++ )
    {
        if (cme_flags & (CME_FLAGS_CORE0_GOOD >> c))
        {
            if(dbData.fields.cme_message_number0 == MSGID_DB0_START_PSTATE_BROADCAST)
            {
                PK_TRACE("INTERCME_IN0: DB0 Start\n");
                //Clear any pending PMCR interrupts
                out32_sh(CME_LCL_EISR_CLR, BIT32(2) >> c);
                out32_sh(CME_LCL_EIMR_CLR, BIT32(2) >> c);//Enable PMCR0/1
            }
            else if(dbData.fields.cme_message_number0 == MSGID_DB0_GLOBAL_ACTUAL_BROADCAST)
            {
                PK_TRACE("INTERCME_IN0: DB0 GlbBcast\n");
                localPS = (dbData.value >>
                           ((MAX_QUADS - G_cme_pstate_record.quadNum - 1) << 8)) & 0xFF;
                pmsrData = (dbData.value << 8) & 0xFF00000000000000;
                pmsrData |= ((uint64_t)localPS << 48) & 0x00FF000000000000;
                out64((CME_LCL_PMSRS0 + (c << 5)), pmsrData);
                out32_sh(CME_LCL_EISR_CLR, BIT32(4) >> c);//Clear DB0_C0
            }
            else if(dbData.fields.cme_message_number0 == MSGID_DB0_STOP_PSTATE_BROADCAST)
            {
                PK_TRACE("INTERCME_IN0: DB0 Stop\n");
                out32_sh(CME_LCL_EIMR_OR,  BIT32(2) >> c);//Enable PMCR0/1
            }
            else
            {
                pk_halt();
            }
        }
    }

    out32(CME_LCL_ICCR_OR, BIT32(5));//Send Direct InterCME_IN0(Ack to QM-CME)
    out32(CME_LCL_ICCR_CLR, BIT32(5));//Clear Ack
    out32(CME_LCL_EISR_CLR, BIT32(7));//Clear InterCME_IN0

    pk_irq_vec_restore(&ctx);
    PK_TRACE("INTERCME_IN0: Exit\n");
}
