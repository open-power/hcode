/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_e_unused.H $        */
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

#ifndef __p10_ppe_c_e_H_UNUSED__
#define __p10_ppe_c_e_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_DESR]
static const uint32_t CPMS_DESR = 0xc000e5c0ull;

static const uint32_t CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL = 0;
static const uint32_t CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL_LEN = 3;
static const uint32_t CPMS_DESR_COUNTA_FTC_EVENT_SEL = 3;
static const uint32_t CPMS_DESR_COUNTA_FTC_EVENT_SEL_LEN = 3;
static const uint32_t CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL = 6;
static const uint32_t CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL_LEN = 3;
static const uint32_t CPMS_DESR_COUNTB_FTC_EVENT_SEL = 9;
static const uint32_t CPMS_DESR_COUNTB_FTC_EVENT_SEL_LEN = 3;
static const uint32_t CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL = 12;
static const uint32_t CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL_LEN = 3;
static const uint32_t CPMS_DESR_COUNTC_FTC_EVENT_SEL = 15;
static const uint32_t CPMS_DESR_COUNTC_FTC_EVENT_SEL_LEN = 3;
static const uint32_t CPMS_DESR_COUNTA_FTC_STATE_SELECT = 18;
static const uint32_t CPMS_DESR_COUNTA_FTC_STATE_SELECT_LEN = 3;
static const uint32_t CPMS_DESR_COUNTB_FTC_STATE_SELECT = 21;
static const uint32_t CPMS_DESR_COUNTB_FTC_STATE_SELECT_LEN = 3;
static const uint32_t CPMS_DESR_COUNTC_FTC_STATE_SELECT = 24;
static const uint32_t CPMS_DESR_COUNTC_FTC_STATE_SELECT_LEN = 3;
static const uint32_t CPMS_DESR_FTC_INVERT_SEL = 27;
static const uint32_t CPMS_DESR_FTC_INVERT_SEL_LEN = 3;
static const uint32_t CPMS_DESR_FTC_SPARE = 30;
static const uint32_t CPMS_DESR_FTC_SPARE_LEN = 2;
static const uint32_t CPMS_DESR_FTC_EVENT_INVERT = 32;
static const uint32_t CPMS_DESR_FTC_EVENT_INVERT_LEN = 3;
static const uint32_t CPMS_DESR_STATEW_ENABLE = 35;
static const uint32_t CPMS_DESR_STATEW_ENABLE_LEN = 3;
static const uint32_t CPMS_DESR_STATEZ_ENABLE = 38;
static const uint32_t CPMS_DESR_STATEZ_ENABLE_LEN = 3;
static const uint32_t CPMS_DESR_SPARE_COUNT_SEL = 41;
static const uint32_t CPMS_DESR_SECONDARY_QUAL_SEL = 42;
static const uint32_t CPMS_DESR_SECONDARY_QUAL_SEL_LEN = 2;
static const uint32_t CPMS_DESR_SECONDARY_EVENT_SEL = 44;
static const uint32_t CPMS_DESR_SECONDARY_EVENT_SEL_LEN = 2;
//<< [CPMS_DESR]
// ppe_c/reg00014.H

//>> [CPMS_DTTR]
static const uint32_t CPMS_DTTR = 0xc000e880ull;

static const uint32_t CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT = 0;
static const uint32_t CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN = 8;
static const uint32_t CPMS_DTTR_T1_DPT_RATE_LIMIT = 8;
static const uint32_t CPMS_DTTR_T1_DPT_RATE_LIMIT_LEN = 8;
static const uint32_t CPMS_DTTR_T2_DPT_RATE_LIMIT = 16;
static const uint32_t CPMS_DTTR_T2_DPT_RATE_LIMIT_LEN = 8;
static const uint32_t CPMS_DTTR_T3_DPT_RATE_LIMIT = 24;
static const uint32_t CPMS_DTTR_T3_DPT_RATE_LIMIT_LEN = 8;
static const uint32_t CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT = 32;
static const uint32_t CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN = 8;
static const uint32_t CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT = 40;
static const uint32_t CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT_LEN = 8;
static const uint32_t CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT = 48;
static const uint32_t CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT_LEN = 8;
static const uint32_t CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT = 56;
static const uint32_t CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT_LEN = 8;
//<< [CPMS_DTTR]
// ppe_c/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00014_unused.H"
#endif
#endif
