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

enum P9_HCD_CORE_SCOMINIT_CONSTANTS
{
    CORE_HANG_LIMIT_3_HANG_PULSES   = 0x9F,
    CORE_HANG_LIMIT_5_HANG_PULSES   = 0x27,
    CORE_HANG_LIMIT_10_HANG_PULSES  = 0xA1,
    CORE_HANG_LIMIT_50_HANG_PULSES  = 0x99,
    CORE_HANG_LIMIT_100_HANG_PULSES = 0x2D,
    CORE_HANG_LIMIT_150_HANG_PULSES = 0xF6,
    CORE_HANG_LIMIT_200_HANG_PULSES = 0x64,

    NEST_HANG_LIMIT_20_HANG_PULSES  = 0x5F,
    NEST_HANG_LIMIT_50_HANG_PULSES  = 0x99,
    NEST_HANG_LIMIT_100_HANG_PULSES = 0x2D,
    NEST_HANG_LIMIT_150_HANG_PULSES = 0xF6,
    NEST_HANG_LIMIT_200_HANG_PULSES = 0x64
};

void
p9_hcd_core_scominit(uint32_t core)
{
    data64_t scom_data = {0};

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

    // content of p9_core_scom
    PK_TRACE("Initialize FIR MASK/ACT0/ACT1");
    CME_PUTSCOM(CORE_ACTION0, core, 0x0000000000000000);
    CME_PUTSCOM(CORE_ACTION1, core, 0xA854009775100008);
    CME_PUTSCOM(CORE_FIRMASK, core, 0x0301D70000AB7696);

    PK_TRACE("Update Core Hang Pulse Dividers via C_HANG_CONTROL[0-15]");
    CME_GETSCOM(C_HANG_CONTROL, core, CME_SCOM_AND, scom_data.value);
    scom_data.words.upper &= ~BITS32(0, 16);
#if NIMBUS_DD_LEVEL == 1
    scom_data.words.upper |= (CORE_HANG_LIMIT_100_HANG_PULSES << SHIFT32(7));
#else
    scom_data.words.upper |= (CORE_HANG_LIMIT_3_HANG_PULSES   << SHIFT32(7));
#endif
    scom_data.words.upper |= (NEST_HANG_LIMIT_100_HANG_PULSES << SHIFT32(15));
    CME_PUTSCOM(C_HANG_CONTROL, core, scom_data.value);
}
