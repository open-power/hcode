/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_2.H $               */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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

#ifndef __p10_ppe_c_2_H_
#define __p10_ppe_c_2_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


static const uint32_t CPMS_DTIR = 0xc000e800ull;
// ppe_c/reg00002.H

static const uint32_t CPMS_FMMR = 0xc000e4c0ull;

static const uint32_t CPMS_FMMR_ADJ_WARN_STAGGER_DISABLE = 0;
static const uint32_t CPMS_FMMR_ADJ_WARN_STAGGER_CYCLES = 1;
static const uint32_t CPMS_FMMR_ADJ_WARN_STAGGER_CYCLES_LEN = 3;
static const uint32_t CPMS_FMMR_ADJ_WARN_WEIGHT = 4;
static const uint32_t CPMS_FMMR_ADJ_WARN_RESPONSE = 5;
static const uint32_t CPMS_FMMR_ADJ_WARN_OUTPUT_SELECT = 6;
static const uint32_t CPMS_FMMR_ADJ_WARN_OUTPUT_SELECT_LEN = 3;
static const uint32_t CPMS_FMMR_DDP_TRIP_SELECT = 9;
static const uint32_t CPMS_FMMR_DDP_TRIP_SELECT_LEN = 3;
static const uint32_t CPMS_FMMR_SLOPEA_TYPE_SELECT = 12;
static const uint32_t CPMS_FMMR_SLOPEA_TYPE_SELECT_LEN = 2;
static const uint32_t CPMS_FMMR_SLOPEB_TYPE_SELECT = 14;
static const uint32_t CPMS_FMMR_SLOPEB_TYPE_SELECT_LEN = 2;
static const uint32_t CPMS_FMMR_SMALL_ASSERT_STABILITY = 16;
static const uint32_t CPMS_FMMR_SMALL_ASSERT_STABILITY_LEN = 2;
static const uint32_t CPMS_FMMR_SMALL_DEASSERT_STABILITY = 18;
static const uint32_t CPMS_FMMR_SMALL_DEASSERT_STABILITY_LEN = 2;
static const uint32_t CPMS_FMMR_SMALL_INITIAL_CYCLES = 20;
static const uint32_t CPMS_FMMR_SMALL_INITIAL_CYCLES_LEN = 4;
static const uint32_t CPMS_FMMR_SMALL_INITIAL_ACTION = 24;
static const uint32_t CPMS_FMMR_SMALL_INITIAL_ACTION_LEN = 6;
static const uint32_t CPMS_FMMR_SMALL_PREFETCH_ACTION = 30;
static const uint32_t CPMS_FMMR_SMALL_PREFETCH_ACTION_LEN = 2;
static const uint32_t CPMS_FMMR_SMALL_DITHER_WINDOW_SEL = 32;
static const uint32_t CPMS_FMMR_SMALL_VECTOR_ACTION = 33;
static const uint32_t CPMS_FMMR_SMALL_VECTOR_ACTION_LEN = 3;
static const uint32_t CPMS_FMMR_SLOPE_TIMEOUT_SELECT = 36;
static const uint32_t CPMS_FMMR_SMALL_THROTTLE_ACTION = 37;
static const uint32_t CPMS_FMMR_SMALL_THROTTLE_ACTION_LEN = 3;
static const uint32_t CPMS_FMMR_SMALL_DITHER_REPEAT = 40;
static const uint32_t CPMS_FMMR_SMALL_DITHER_REPEAT_LEN = 4;
static const uint32_t CPMS_FMMR_SMALL_DITHER_INCREASE = 44;
static const uint32_t CPMS_FMMR_SMALL_DITHER_INCREASE_LEN = 4;
static const uint32_t CPMS_FMMR_SMALL_DITHER_INITIAL = 48;
static const uint32_t CPMS_FMMR_SMALL_DITHER_INITIAL_LEN = 5;
static const uint32_t CPMS_FMMR_DPLL_DATA2_SEL = 53;
static const uint32_t CPMS_FMMR_DPLL_DATA1_SEL = 54;
static const uint32_t CPMS_FMMR_DPLL_DATA1_SEL_LEN = 2;
static const uint32_t CPMS_FMMR_DPLL_DATA0_SEL = 56;
static const uint32_t CPMS_FMMR_DPLL_DATA0_SEL_LEN = 2;
static const uint32_t CPMS_FMMR_DDS_ERROR_ENCODE_DISABLE = 58;
static const uint32_t CPMS_FMMR_SMALL_RESPONSE_DISABLE = 59;
static const uint32_t CPMS_FMMR_SLOPE_REPORT_SEL = 60;
static const uint32_t CPMS_FMMR_OVERRIDE_VECTOR_LIMIT = 61;
static const uint32_t CPMS_FMMR_OVERRIDE_VECTOR_LIMIT_LEN = 3;
// ppe_c/reg00002.H

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00002.H"
#endif
#endif
