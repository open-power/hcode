/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_b_unused.H $      */
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

#ifndef __p10_scom_mc_b_H_UNUSED__
#define __p10_scom_mc_b_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [EPS_DBG_TRACE_MODE_REG_2]
static const uint64_t EPS_DBG_TRACE_MODE_REG_2 = 0x0c0107cfull;

static const uint32_t EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE = 0;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN = 16;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE = 16;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR = 17;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH = 18;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE = 19;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE = 20;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON = 21;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK = 22;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN = 2;
//<< [EPS_DBG_TRACE_MODE_REG_2]
// mc/reg00011.H

//>> [MBA_SCOMFIR_MCEBUSEN3]
static const uint64_t MBA_SCOMFIR_MCEBUSEN3 = 0x0c010fa7ull;

static const uint32_t MBA_SCOMFIR_MCEBUSEN3_N = 0;
static const uint32_t MBA_SCOMFIR_MCEBUSEN3_N_LEN = 16;
static const uint32_t MBA_SCOMFIR_MCEBUSEN3_NABLE = 16;
static const uint32_t MBA_SCOMFIR_MCEBUSEN3_XTENDED_SELECT = 17;
static const uint32_t MBA_SCOMFIR_MCEBUSEN3_XTENDED_SELECT_LEN = 3;
//<< [MBA_SCOMFIR_MCEBUSEN3]
// mc/reg00011.H

//>> [MBA_SCOMFIR_WATCTL]
static const uint64_t MBA_SCOMFIR_WATCTL = 0x0c010f91ull;

static const uint32_t MBA_SCOMFIR_WATCTL_WAT_CONTROL = 0;
static const uint32_t MBA_SCOMFIR_WATCTL_WAT_CONTROL_LEN = 26;
//<< [MBA_SCOMFIR_WATCTL]
// mc/reg00011.H

//>> [MBA_SCOMFIR_WATPATB0]
static const uint64_t MBA_SCOMFIR_WATPATB0 = 0x0c010f86ull;

static const uint32_t MBA_SCOMFIR_WATPATB0_WAT_PATTERN_B0 = 0;
static const uint32_t MBA_SCOMFIR_WATPATB0_WAT_PATTERN_B0_LEN = 44;
//<< [MBA_SCOMFIR_WATPATB0]
// mc/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00011_unused.H"
#endif
#endif
