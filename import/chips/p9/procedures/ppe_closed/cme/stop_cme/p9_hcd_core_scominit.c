/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_hcd_core_scominit.c $ */
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

#include "p9_cme_stop.h"
#include "p9_cme_stop_exit_marks.h"

int
p9_hcd_core_scominit(uint32_t core)
{
    int rc = CME_STOP_SUCCESS;
    data64_t scom_data;

    // how about bit 6?
    PK_TRACE("Restore SYNC_CONFIG[8] for stop1");
    CME_GETSCOM(C_SYNC_CONFIG, core, CME_SCOM_AND, scom_data.value);
    scom_data.words.upper |= BIT32(8);
    CME_PUTSCOM(C_SYNC_CONFIG, core, scom_data.value);

    PK_TRACE("Enable DTS via THERM_MODE_REG[5,6-9,20-21]");
    CME_GETSCOM(C_THERM_MODE_REG, core, CME_SCOM_AND, scom_data.value);
    scom_data.words.upper |= BIT32(5);     // DTS sampling enable
    scom_data.words.upper |= BITS32(6, 4); // sample pulse count
    scom_data.words.upper |= BITS32(20, 2);// DTS loop1 enable
    CME_PUTSCOM(C_THERM_MODE_REG, core, scom_data.value);

    return rc;
}
