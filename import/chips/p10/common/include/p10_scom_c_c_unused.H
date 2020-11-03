/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_c_unused.H $       */
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

#ifndef __p10_scom_c_c_H_UNUSED__
#define __p10_scom_c_c_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]
static const uint64_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0 = 0x20020600ull;

static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0 = 0;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FBC_EAT_OVERFLOW_HOLD_OUT = 0; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1 = 1;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FBC_EAT_UNDERFLOW_HOLD_OUT = 1; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2 = 2;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FBC_EATAG_MISMATCHES_IFAR_HOLD_OUT = 2; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3 = 3;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FBC_IFAR_PARITY_HOLD_OUT = 3; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4 = 4;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FBC_LNK_STK_OR_CC_PTY_HOLD_OUT = 4; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5 = 5;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FBC_MULTI_THREAD_HOLD_OUT = 5; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6 = 6;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FLC_WRITE_COLL_HOLD_OUT = 6; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7 = 7;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_FCP_CIABR_PERR_HOLD_OUT = 7; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8 = 8;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DFE_IBUF_OVERRUN_ERROR_HOLD_OUT = 8; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9 = 9;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DFE_IDU_FETCH_LENGTH_ERROR_HOLD_OUT = 9; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10 = 10;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DCTL_IBUF_PERR_HOLD_OUT_0 = 10; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11 = 11;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DCTL_IBUF_PERR_HOLD_OUT_1 = 11; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12 = 12;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DCTL_IBUF_PERR_HOLD_OUT_2 = 12; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13 = 13;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DCTL_IBUF_PERR_HOLD_OUT_3 = 13; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14 = 14;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DCTL_IBUF_PERR_HOLD_OUT_4 = 14; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15 = 15;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_DCTL_IBUF_PERR_HOLD_OUT_5 = 15; // p10:20,
//<< [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]
// c/reg00012.H

//>> [EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]
static const uint64_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT = 0x2002040bull;

static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT = 0;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT = 2;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT = 13;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT_LEN = 4;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT = 17;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT_LEN = 4;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT = 21;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT_LEN = 4;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT = 25;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT_LEN = 4;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT = 29;
static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT = 29; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT_LEN = 7;
//<< [EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]
// c/reg00012.H

//>> [EC_PC_SPURR_FREQ_SCALE]
static const uint64_t EC_PC_SPURR_FREQ_SCALE = 0x200204a0ull;

static const uint32_t EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN = 0;
static const uint32_t EC_PC_SPURR_FREQ_SCALE_FACTOR = 1;
static const uint32_t EC_PC_SPURR_FREQ_SCALE_FACTOR_LEN = 7;
//<< [EC_PC_SPURR_FREQ_SCALE]
// c/reg00012.H

//>> [L2TRA_TR0_CONFIG_1]
static const uint64_t L2TRA_TR0_CONFIG_1 = 0x20020044ull;

static const uint32_t L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [L2TRA_TR0_CONFIG_1]
// c/reg00012.H

//>> [L2_L2MISC_L2CERRS_WR_EPS_REG]
static const uint64_t L2_L2MISC_L2CERRS_WR_EPS_REG = 0x20020011ull;

static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE = 0;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE_LEN = 12;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE = 12;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE_LEN = 12;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE = 24;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE_LEN = 4;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL = 28;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN = 29;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE = 30;
static const uint32_t L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE_LEN = 4;
//<< [L2_L2MISC_L2CERRS_WR_EPS_REG]
// c/reg00012.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00012_unused.H"
#endif
#endif
