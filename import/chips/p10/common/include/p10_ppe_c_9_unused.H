/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_9_unused.H $        */
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

#ifndef __p10_ppe_c_9_H_UNUSED__
#define __p10_ppe_c_9_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_DDSR]
static const uint32_t CPMS_DDSR = 0xc000e500ull;

static const uint32_t CPMS_DDSR_DDS_DATA = 3;
static const uint32_t CPMS_DDSR_DDS_DATA_LEN = 5;
static const uint32_t CPMS_DDSR_DDS_MIN = 11;
static const uint32_t CPMS_DDSR_DDS_MIN_LEN = 5;
static const uint32_t CPMS_DDSR_DDS_MAX = 19;
static const uint32_t CPMS_DDSR_DDS_MAX_LEN = 5;
static const uint32_t CPMS_DDSR_DPLL_ENCODED_DATA = 33;
static const uint32_t CPMS_DDSR_DPLL_ENCODED_DATA_LEN = 3;
static const uint32_t CPMS_DDSR_DPLL_ENCODED_MIN = 37;
static const uint32_t CPMS_DDSR_DPLL_ENCODED_MIN_LEN = 3;
static const uint32_t CPMS_DDSR_DPLL_ENCODED_MAX = 41;
static const uint32_t CPMS_DDSR_DPLL_ENCODED_MAX_LEN = 3;
static const uint32_t CPMS_DDSR_STOP_STATE_ACTIVE = 60;
static const uint32_t CPMS_DDSR_CORE_SAMPLE_DISABLED = 61;
static const uint32_t CPMS_DDSR_STOP_STATE_OCCURRED = 62;
static const uint32_t CPMS_DDSR_SAMPLE_DISABLE_OCCURRED = 63;
//<< [CPMS_DDSR]
// ppe_c/reg00009.H

//>> [QME_CDBB]
static const uint32_t QME_CDBB = 0xc0008040ull;

static const uint32_t QME_CDBB_MESSAGE_NUMBER = 0;
static const uint32_t QME_CDBB_MESSAGE_NUMBER_LEN = 8;
//<< [QME_CDBB]
// ppe_c/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00009_unused.H"
#endif
#endif
