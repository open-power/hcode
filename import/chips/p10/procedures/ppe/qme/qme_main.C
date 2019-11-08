/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_main.C $              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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

#include "qme.h"
#include <fapi2.H>
#include <fapi2_target.H>

int main()
{
    PK_TRACE("Main: Configure Trace Timebase");
    uint32_t trace_timebase = PPE_TIMEBASE_HZ;
    pk_trace_set_freq(trace_timebase);

    PK_TRACE("Main: Clear SPRG0");
    ppe42_app_ctx_set(0);

#if defined(USE_QME_QUEUED_SCOM) || defined(USE_QME_QUEUED_SCAN)
    PK_TRACE("Main: QME Enabling Queued Scom/Scan");
    out32(QME_LCL_QMCR_OR, BITS32(12, 2));
#endif

    fapi2::ReturnCode fapiRc = fapi2::plat_TargetsInit();

    if( fapiRc != fapi2::FAPI2_RC_SUCCESS )
    {
        PK_TRACE_ERR("ERROR: FAPI2 Init Failed. HALT QME!");
        IOTA_PANIC(QME_MAIN_FAPI2_INIT_FAILED);
    }

    // Initialize the Stop state and Pstate tasks
    qme_init();

#if (ENABLE_FIT_TIMER || ENABLE_DEC_TIMER)

    uint32_t TCR_VAL = 0;
    PK_TRACE("Main: Set Watch Dog Timer Rate to 6 and FIT Timer Rate to 8");
    //out32(QME_LCL_TSEL, (BITS32(1, 2) | BIT32(4)));

#if ENABLE_FIT_TIMER
    PK_TRACE("Main: Register and Enable FIT Timer");
    IOTA_FIT_HANDLER(qme_fit_handler);
    TCR_VAL |= TCR_FIE;
#endif

#if ENABLE_DEC_TIMER
    PK_TRACE("Main: Register and Enable DEC Timer");
    IOTA_DEC_HANDLER(qme_dec_handler);
    TCR_VAL |= TCR_DIE;
#endif

    mtspr(SPRN_TCR, TCR_VAL);

#endif

    // start IOTA and never return!
    iota_run();

    return 0;
}

