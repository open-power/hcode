/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_e_unused.H $      */
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

#ifndef __p10_scom_mc_e_H_UNUSED__
#define __p10_scom_mc_e_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [MBA_SCOMFIR_AACR]
static const uint64_t MBA_SCOMFIR_AACR = 0x0c010f29ull;

static const uint32_t MBA_SCOMFIR_AACR_BUFFER = 0;
static const uint32_t MBA_SCOMFIR_AACR_ADDRESS = 1;
static const uint32_t MBA_SCOMFIR_AACR_ADDRESS_LEN = 10;
static const uint32_t MBA_SCOMFIR_AACR_AUTOINC = 11;
static const uint32_t MBA_SCOMFIR_AACR_ECCGEN = 12;
static const uint32_t MBA_SCOMFIR_AACR_CHANNEL = 13;
static const uint32_t MBA_SCOMFIR_AACR_CHANNEL_LEN = 2;
//<< [MBA_SCOMFIR_AACR]
// mc/reg00014.H

//>> [MBA_SCOMFIR_MCWATDATA0]
static const uint64_t MBA_SCOMFIR_MCWATDATA0 = 0x0c010f9aull;

static const uint32_t MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW = 47;
static const uint32_t MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT = 48;
static const uint32_t MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_LEN = 16;
//<< [MBA_SCOMFIR_MCWATDATA0]
// mc/reg00014.H

//>> [MBA_SCOMFIR_MISCFIRACT1]
static const uint64_t MBA_SCOMFIR_MISCFIRACT1 = 0x0c010f07ull;

static const uint32_t MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1 = 0;
static const uint32_t MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1_LEN = 12;
//<< [MBA_SCOMFIR_MISCFIRACT1]
// mc/reg00014.H

//>> [MBA_SCOMFIR_SPARE]
static const uint64_t MBA_SCOMFIR_SPARE = 0x0c010f0full;

static const uint32_t MBA_SCOMFIR_SPARE_SPARE = 0;
static const uint32_t MBA_SCOMFIR_SPARE_SPARE_LEN = 8;
//<< [MBA_SCOMFIR_SPARE]
// mc/reg00014.H

//>> [MBA_SCOMFIR_WATPATA1]
static const uint64_t MBA_SCOMFIR_WATPATA1 = 0x0c010f85ull;

static const uint32_t MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1 = 0;
static const uint32_t MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1_LEN = 44;
//<< [MBA_SCOMFIR_WATPATA1]
// mc/reg00014.H

//>> [SCOMFIR_AAER]
static const uint64_t SCOMFIR_AAER = 0x0c010c2eull;

static const uint32_t SCOMFIR_AAER_AAER_TAG_ECC = 0;
static const uint32_t SCOMFIR_AAER_AAER_TAG_ECC_LEN = 9;
//<< [SCOMFIR_AAER]
// mc/reg00014.H

//>> [SCOMFIR_MCFGP0E]
static const uint64_t SCOMFIR_MCFGP0E = 0x0c010c16ull;

static const uint32_t SCOMFIR_MCFGP0E_VALID = 0;
static const uint32_t SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE = 1;
static const uint32_t SCOMFIR_MCFGP0E_LOWER_ADDRESS = 2;
static const uint32_t SCOMFIR_MCFGP0E_LOWER_ADDRESS_LEN = 19;
static const uint32_t SCOMFIR_MCFGP0E_UPPER_ADDRESS = 21;
static const uint32_t SCOMFIR_MCFGP0E_UPPER_ADDRESS_LEN = 19;
//<< [SCOMFIR_MCFGP0E]
// mc/reg00014.H

//>> [EPS_DBG_TRACE_REG_1]
static const uint64_t EPS_DBG_TRACE_REG_1 = 0x0c0107ceull;

static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO = 0;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO = 4;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO = 6;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO = 8;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO = 10;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN = 24;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN = 25;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN = 26;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN = 27;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN = 28;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN = 29;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK = 36;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK = 37;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK = 38;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK = 39;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK = 40;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK = 41;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT = 48;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN = 3;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR = 51;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT = 52;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN = 3;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR = 55;
//<< [EPS_DBG_TRACE_REG_1]
// mc/reg00014.H

//>> [TRA1_TR0_CONFIG_1]
static const uint64_t TRA1_TR0_CONFIG_1 = 0x0c010484ull;

static const uint32_t TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [TRA1_TR0_CONFIG_1]
// mc/reg00014.H

//>> [XSTOP2]
static const uint64_t XSTOP2 = 0x0c03000dull;

static const uint32_t XSTOP2_ENABLE = 0;
static const uint32_t XSTOP2_WAIT_SNOPA = 1;
static const uint32_t XSTOP2_TRIGGER_OPCG_GO = 2;
static const uint32_t XSTOP2_WAIT_ALWAYS = 3;
static const uint32_t XSTOP2_REGION_PERV = 4;
static const uint32_t XSTOP2_REGION_UNIT1 = 5;
static const uint32_t XSTOP2_REGION_UNIT2 = 6;
static const uint32_t XSTOP2_REGION_UNIT3 = 7;
static const uint32_t XSTOP2_REGION_UNIT4 = 8;
static const uint32_t XSTOP2_REGION_UNIT5 = 9;
static const uint32_t XSTOP2_REGION_UNIT6 = 10;
static const uint32_t XSTOP2_REGION_UNIT7 = 11;
static const uint32_t XSTOP2_REGION_UNIT8 = 12;
static const uint32_t XSTOP2_REGION_UNIT9 = 13;
static const uint32_t XSTOP2_REGION_UNIT10 = 14;
static const uint32_t XSTOP2_REGION_UNIT11 = 15;
static const uint32_t XSTOP2_REGION_UNIT12 = 16;
static const uint32_t XSTOP2_REGION_UNIT13 = 17;
static const uint32_t XSTOP2_REGION_UNIT14 = 18;
static const uint32_t XSTOP2_WAIT_CYCLES = 48;
static const uint32_t XSTOP2_WAIT_CYCLES_LEN = 12;
//<< [XSTOP2]
// mc/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00014_unused.H"
#endif
#endif
