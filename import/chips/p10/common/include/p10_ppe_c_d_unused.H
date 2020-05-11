/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_d_unused.H $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_ppe_c_d_H_UNUSED__
#define __p10_ppe_c_d_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_PPSR]
static const uint32_t CPMS_PPSR = 0xc000e980ull;

static const uint32_t CPMS_PPSR_ENERGY_PROXY_UPPER = 0;
static const uint32_t CPMS_PPSR_ENERGY_PROXY_UPPER_LEN = 32;
static const uint32_t CPMS_PPSR_ENERGY_PROXY_LOWER = 32;
static const uint32_t CPMS_PPSR_ENERGY_PROXY_LOWER_LEN = 8;
static const uint32_t CPMS_PPSR_PERIOD_PROXY_REMAIN = 40;
static const uint32_t CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN = 20;
static const uint32_t CPMS_PPSR_FTX_SATURATED = 60;
static const uint32_t CPMS_PPSR_PITCH_SATURATED = 61;
static const uint32_t CPMS_PPSR_PITCH_ABORTED = 62;
static const uint32_t CPMS_PPSR_PITCH_ACTIVE = 63;
//<< [CPMS_PPSR]
// ppe_c/reg00013.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00013_unused.H"
#endif
#endif
