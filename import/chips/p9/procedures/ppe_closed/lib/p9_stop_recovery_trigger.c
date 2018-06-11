/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/lib/p9_stop_recovery_trigger.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017,2018                                                    */
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

#include "stdint.h"
#include "pk.h"
#include "ppe42_scom.h"
#include "ppehw_common.h"
#include "gpehw_common.h"
#include "ocb_firmware_registers.h"
#include "cppm_register_addresses.h"
#include "ocb_register_addresses.h"
#include "p9_pm_hcd_flags.h"
#include "p9_stop_recovery_trigger.h"

// When an error occurs that affects the STOP portion of the PM subsystem,
// HYP is notified via a malfunction alert that is injected by programming
// the ADU AFTER a respective bit is set in the OCC LFIR.

void
p9_stop_recovery_trigger()
{
    data64_t    scom_data  = {0};
    uint32_t    qloop      = 0;
    uint32_t    cloop      = 0;
    uint32_t    cindex     = 0;
    uint32_t    m_1c       = 0;
    ocb_ccsr_t  ccsr       = {0};

    // Clear ALL the error injections to have any hope that the next
    // special wake-up will succeed.  These have to be done first to
    // avoid races with Hypervisors setting special wake-ups

    // SGPE and PGPE.
    scom_data.words.upper = BIT32(OCCFLG2_SGPE_HCODE_STOP_REQ_ERR_INJ) |
                            BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ) |
                            BIT32(OCCFLG2_PGPE_HCODE_FIT_ERR_INJ);
    out64(OCB_OCCFLG2_CLR, scom_data.value);

    // CMEs
    // The in-progress bit are not checked as this is an error case
    ccsr.value = in32(OCB_CCSR);

    for(qloop = 0;
        qloop < MAX_QUADS;
        qloop++)
    {
        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            scom_data.value = 0;
            cindex = (qloop << 2) + cloop;
            m_1c = BIT32(cindex);

            if(ccsr.value & m_1c)
            {
                PK_TRACE_DBG("core[%d][%d] error inject being cleared", qloop, cindex);
                scom_data.words.upper = BIT32(CPPM_CSAR_FIT_HCODE_ERROR_INJECT) |
                                        BIT32(CPPM_CSAR_PSTATE_HCODE_ERROR_INJECT) |
                                        BIT32(CPPM_CSAR_STOP_HCODE_ERROR_INJECT);
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CSAR_CLR, cindex), scom_data.value);
            }
        }
    }

    if (in32(OCB_OCCFLG2) & BIT32(STOP_RECOVERY_TRIGGER_ENABLE))
    {
        PK_TRACE_INF("WARNING: STOP RECOVERY TRIGGER!");

        // Has to be set first to avoid races with Hypervisors reading
        // this bit
        PK_TRACE("1. Set OCCFLG2[28] PM Callout Active");
        out32(OCB_OCCFLG2_OR, BIT32(PM_CALLOUT_ACTIVE));

        PK_TRACE("2. Set ADU lock for exclusive use for a timeout of 500ms.");

        do
        {
            GPE_PUTSCOM(0x90001, 0x0010000000000000ull);
            GPE_GETSCOM(0x90001, scom_data.value);
        }
        while (!(scom_data.value  &  0x0010000000000000ull));

        PK_TRACE("3. Cleanup/reset ADU");
        // 3      Clear Status
        // 4      Reset FSM
        // 11     Locked
        GPE_PUTSCOM(0x90001, 0x1810000000000000ull);

        PK_TRACE("4. Setup PowerBus 'address' field for malf alert");
        // 10     Set Malfunction Alert Error
        GPE_PUTSCOM(0x90000, 0x0000100000000000ull);

        PK_TRACE("4. Setup PowerBus command type and launch malfunction");
        // 2      Start Op
        // 6      AX Type
        // 11     Locked
        // 16:18  Scope 16:18 = VG = 101.
        // 25:31  TType = 011 0100
        // 32:39  TSize = 0000 0100 = 2B
        GPE_PUTSCOM(0x90001, 0x2210A03104000000ull);

        PK_TRACE("5. Cleanup/reset ADU");
        // See above
        GPE_PUTSCOM(0x90001, 0x1810000000000000ull);

        PK_TRACE("6: Unlock ADU");
        // 11      Clear to remove lock
        GPE_PUTSCOM(0x90001, 0x0000000000000000ull);
    }
}
