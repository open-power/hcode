/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_b_unused.H $        */
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

#ifndef __p10_ppe_c_b_H_UNUSED__
#define __p10_ppe_c_b_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_DHDR]
static const uint32_t CPMS_DHDR = 0xc000e580ull;

static const uint32_t CPMS_DHDR_FTC_EVENT_HISTORY0 = 0;
static const uint32_t CPMS_DHDR_FTC_EVENT_HISTORY0_LEN = 8;
static const uint32_t CPMS_DHDR_FTC_EVENT_HISTORY1 = 8;
static const uint32_t CPMS_DHDR_FTC_EVENT_HISTORY1_LEN = 8;
static const uint32_t CPMS_DHDR_FTC_EVENT_DATA = 16;
static const uint32_t CPMS_DHDR_FTC_EVENT_DATA_LEN = 8;
static const uint32_t CPMS_DHDR_FTC_RAW_EVENT_HISTORY = 24;
static const uint32_t CPMS_DHDR_FTC_RAW_EVENT_HISTORY_LEN = 4;
static const uint32_t CPMS_DHDR_ADJ_WARN_EVENT_HISTORY = 28;
static const uint32_t CPMS_DHDR_ADJ_WARN_EVENT_HISTORY_LEN = 2;
static const uint32_t CPMS_DHDR_ADJ_WARN_ACTIVE = 30;
static const uint32_t CPMS_DHDR_ADJ_WARN_ACTIVE_LEN = 2;
static const uint32_t CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA = 32;
static const uint32_t CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA_LEN = 3;
static const uint32_t CPMS_DHDR_CPMS_DDSR_DDS_DATA = 35;
static const uint32_t CPMS_DHDR_CPMS_DDSR_DDS_DATA_LEN = 5;
static const uint32_t CPMS_DHDR_DPLL_ENCODED_MIN = 40;
static const uint32_t CPMS_DHDR_DPLL_ENCODED_MIN_LEN = 3;
static const uint32_t CPMS_DHDR_MIN_DATA = 43;
static const uint32_t CPMS_DHDR_MIN_DATA_LEN = 5;
static const uint32_t CPMS_DHDR_DPLL_ENCODED_MAX = 48;
static const uint32_t CPMS_DHDR_DPLL_ENCODED_MAX_LEN = 3;
static const uint32_t CPMS_DHDR_MAX_DATA = 51;
static const uint32_t CPMS_DHDR_MAX_DATA_LEN = 5;
static const uint32_t CPMS_DHDR_DDP_EVENT_HISTORY = 56;
static const uint32_t CPMS_DHDR_DDP_EVENT_HISTORY_LEN = 2;
static const uint32_t CPMS_DHDR_DDP_ACTIVE = 58;
static const uint32_t CPMS_DHDR_DDP_ACTIVE_LEN = 2;
static const uint32_t CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE = 60;
static const uint32_t CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED = 61;
static const uint32_t CPMS_DHDR_STOP_STATE_OCCURRED = 62;
static const uint32_t CPMS_DHDR_SAMPLE_DISABLE_OCCURRED = 63;
//<< [CPMS_DHDR]
// ppe_c/reg00011.H

//>> [CPMS_WPMR]
static const uint32_t CPMS_WPMR = 0xc000e900ull;
static const uint32_t CPMS_WPMR_PPE2 = 0xc000e920ull;
static const uint32_t CPMS_WPMR_WO_CLEAR = 0xc000e930ull;

static const uint32_t CPMS_WPMR_PITCH_ENABLE = 0;
static const uint32_t CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE = 1;
static const uint32_t CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE = 2;
static const uint32_t CPMS_WPMR_PITCH_INTERRUPT_ENABLE = 3;
static const uint32_t CPMS_WPMR_SPARE = 4;
static const uint32_t CPMS_WPMR_SPARE_LEN = 2;
static const uint32_t CPMS_WPMR_PITCH_PERIOD_TIME = 18;
static const uint32_t CPMS_WPMR_PITCH_PERIOD_TIME_LEN = 14;
static const uint32_t CPMS_WPMR_RESET_ACTIVITY_PROXY = 32;
static const uint32_t CPMS_WPMR_RESET_ENERGY_PROXY = 33;
//<< [CPMS_WPMR]
// ppe_c/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00011_unused.H"
#endif
#endif
