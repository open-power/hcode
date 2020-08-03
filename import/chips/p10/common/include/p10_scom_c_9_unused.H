/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_9_unused.H $       */
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

#ifndef __p10_scom_c_9_H_UNUSED__
#define __p10_scom_c_9_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_PC_COMMON_SPR_CTRL]
static const uint64_t EC_PC_COMMON_SPR_CTRL = 0x20020485ull;

static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q = 48;
static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q = 49;
static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q = 50;
static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q = 51;
static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q = 52;
static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q = 53;
static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q = 54;
static const uint32_t EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q = 55;
static const uint32_t EC_PC_COMMON_SPR_CTRL_RUN_LATCH = 63;
//<< [EC_PC_COMMON_SPR_CTRL]
// c/reg00009.H

//>> [EC_PC_IMA_TRACE]
static const uint64_t EC_PC_IMA_TRACE = 0x20020401ull;

static const uint32_t EC_PC_IMA_TRACE_SAMPSEL = 0;
static const uint32_t EC_PC_IMA_TRACE_SAMPSEL_LEN = 2;
static const uint32_t EC_PC_IMA_TRACE_CPMC_LOAD = 2;
static const uint32_t EC_PC_IMA_TRACE_CPMC_LOAD_LEN = 32;
static const uint32_t EC_PC_IMA_TRACE_CPMC1SEL = 36;
static const uint32_t EC_PC_IMA_TRACE_CPMC1SEL_LEN = 5;
static const uint32_t EC_PC_IMA_TRACE_CPMC2SEL = 43;
static const uint32_t EC_PC_IMA_TRACE_CPMC2SEL_LEN = 5;
static const uint32_t EC_PC_IMA_TRACE_BUFFERSIZE = 48;
static const uint32_t EC_PC_IMA_TRACE_BUFFERSIZE_LEN = 3;
//<< [EC_PC_IMA_TRACE]
// c/reg00009.H

//>> [EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]
static const uint64_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL = 0x20020452ull;

static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT = 0;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT_LEN = 8;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT = 8;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT_LEN = 8;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP = 16;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT = 17;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT_LEN = 8;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT = 25;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT_LEN = 3;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT = 28;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK = 29;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK_LEN = 5;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT = 34;
static const uint32_t EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT_LEN = 8;
//<< [EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]
// c/reg00009.H

//>> [EC_PC_TRACE1_TR_TR0_CONFIG_1]
static const uint64_t EC_PC_TRACE1_TR_TR0_CONFIG_1 = 0x20020a44ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [EC_PC_TRACE1_TR_TR0_CONFIG_1]
// c/reg00009.H

//>> [L3_MISC_L3CERRS_PHYP_PURGE_REG]
static const uint64_t L3_MISC_L3CERRS_PHYP_PURGE_REG = 0x20010614ull;

static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ = 0;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE = 1;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE_LEN = 4;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE = 5;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE = 6;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1 = 7;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1_LEN = 2;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR = 9;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2 = 10;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2_LEN = 2;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER = 12;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER_LEN = 4;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR = 16;
static const uint32_t L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR_LEN = 11;
//<< [L3_MISC_L3CERRS_PHYP_PURGE_REG]
// c/reg00009.H

//>> [L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]
static const uint64_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG = 0x2001062aull;

static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL = 0;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL_LEN = 12;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL = 12;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL_LEN = 12;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO = 24;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE = 25;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE = 26;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE_LEN = 4;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE = 30;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE_LEN = 4;
static const uint32_t L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN = 34;
static const uint32_t P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL = 35; // p10:20,
static const uint32_t P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL_LEN = 2;
//<< [L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]
// c/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00009_unused.H"
#endif
#endif
