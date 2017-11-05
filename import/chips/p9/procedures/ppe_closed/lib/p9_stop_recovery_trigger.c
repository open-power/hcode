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
#include "gpehw_common.h"
#include "p9_stop_recovery_trigger.h"

// When an error occurs that affects the STOP portion of the PM subsystem,
// HYP is notified via a malfunction alert that is injected by programming
// the ADU AFTER a respective bit is set in the OCC LFIR.

void
p9_stop_recovery_trigger()
{
    uint64_t scom_data = 0;
    PK_TRACE_INF("WARNING: STOP RECOVERY TRIGGER!");

    //1. Set ADU lock for exclusive use for a timeout of 500ms.

    do
    {

        GPE_PUTSCOM(0x90001, 0x0010000000000000ull);
        GPE_GETSCOM(0x90001, scom_data);

    }
    while (!(scom_data  &  0x0010000000000000ull));

    //2. Cleanup/reset ADU
    GPE_PUTSCOM(0x90001, 0x1810000000000000ull);

    //3. Setup PowerBus 'address' field for malf alert
    GPE_PUTSCOM(0x90000, 0x0000100000000000ull);

    //4. Setup PowerBus command type and launch malfunction
    GPE_PUTSCOM(0x90001, 0x2210A03104000000ull);
}
