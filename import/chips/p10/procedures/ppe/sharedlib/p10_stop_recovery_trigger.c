/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/p10_stop_recovery_trigger.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2021                                                    */
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

#include "iota.h"
#include "gpehw_common.h"
#include "ppe42_scom.h"
#include "ppehw_common.h"
#include "ocb_register_addresses.h"
#include "iota_trace.h"
#include "p10_hcd_common.H"
#include "p10_pm_hcd_flags.h"
#include "p10_stop_recovery_trigger.h"

static const uint64_t QME_FLAGS_WO_CLEAR = 0x200e0123ull;
static const uint64_t TP_TPBR_AD_ALTD_CMD_REG = 0x00090001ull;
static const uint64_t TP_TPBR_AD_ALTD_ADDR_REG = 0x00090000ull;
// When an error occurs that affects the STOP portion of the PM subsystem,
// HYP is notified via a malfunction alert that is injected by programming
// the ADU AFTER a respective bit is set in the OCC LFIR.

void
p10_stop_recovery_trigger()
{
    uint64_t    scom_data = 0;

    // Clear ALL the error injections to have any hope that the next
    // special wake-up will succeed.  These have to be done first to
    // avoid races with Hypervisors setting special wake-ups

    // PGPE
    scom_data = BIT64(PGPE_HW_ERROR_INJECT) |
                BITS64(PGPE_HCODE_ERROR_INJECT, 2);
    out64(OCB_OCCFLG2_CLR, scom_data);

    // XGPE
    scom_data = BIT64(XGPE_HW_ERROR_INJECT) |
                BITS64(XGPE_HCODE_ERROR_INJECT, 2);
    out64(OCB_OCCFLG3_CLR, scom_data);

    // QMEs
    scom_data = BIT64(QME_FLAGS_CORE_WKUP_ERR_INJECT) |
                BIT64(QME_FLAGS_PSTATE_HCODE_ERR_INJECT) |
                BIT64(QME_FLAGS_STOP_EXIT_INJECT) |
                BIT64(QME_FLAGS_STOP_ENTRY_INJECT);

    PPE_PUTSCOM_MC_Q(QME_FLAGS_WO_CLEAR, scom_data);

    if (in32(OCB_OCCFLG3) & BIT32(STOP_RECOVERY_TRIGGER_ENABLE))
    {
        PK_TRACE_INF("WARNING: STOP RECOVERY TRIGGER!");

        // Has to be set first to avoid races with Hypervisors reading
        // this bit
        PK_TRACE("1. Set OCCFLG2[28] PM Callout Active");
        out32(OCB_OCCFLG2_OR, BIT32(PM_CALLOUT_ACTIVE));

        PK_TRACE("2. Set ADU lock for exclusive use for a timeout of 500ms.");

        do
        {
            PPE_PUTSCOM(TP_TPBR_AD_ALTD_CMD_REG, 0x0010000000000000ull);
            PPE_GETSCOM(TP_TPBR_AD_ALTD_CMD_REG, scom_data);
        }
        while (!(scom_data &  0x0010000000000000ull));

        PK_TRACE("3. Cleanup/reset ADU");
        // 3      Clear Status
        // 4      Reset FSM
        // 11     Locked
        PPE_PUTSCOM(TP_TPBR_AD_ALTD_CMD_REG, 0x1810000000000000ull);

        PK_TRACE("4. Setup PowerBus 'address' field for malf alert");
        // 10     Set Malfunction Alert Error
        PPE_PUTSCOM(TP_TPBR_AD_ALTD_ADDR_REG, 0x0000100000000000ull);

        PK_TRACE("4. Setup PowerBus command type and launch malfunction");
        // 2      Start Op
        // 6      AX Type
        // 11     Locked
        // 16:18  Scope 16:18 = VG = 101.
        // 25:31  TType = 011 0100
        // 32:39  TSize = 0000 0100 = 2B
        PPE_PUTSCOM(TP_TPBR_AD_ALTD_CMD_REG, 0x2210A03104000000ull);

        PK_TRACE("5. Cleanup/reset ADU");
        // See above
        PPE_PUTSCOM(TP_TPBR_AD_ALTD_CMD_REG, 0x1810000000000000ull);

        PK_TRACE("6: Unlock ADU");
        // 11      Clear to remove lock
        PPE_PUTSCOM(TP_TPBR_AD_ALTD_CMD_REG, 0x0000000000000000ull);
    }
}
