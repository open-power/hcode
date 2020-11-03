/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_e_unused.H $    */
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

#ifndef __p10_scom_pauc_e_H_UNUSED__
#define __p10_scom_pauc_e_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_SCOM_FUNC]
static const uint64_t DL_PPE_WRAP_SCOM_FUNC = 0x10012c67ull;

static const uint32_t DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE = 0;
static const uint32_t DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE = 1;
static const uint32_t DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT = 2;
static const uint32_t DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES = 3;
static const uint32_t DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES_LEN = 13;
//<< [DL_PPE_WRAP_SCOM_FUNC]
// pauc/reg00014.H

//>> [EPS_DBG_TRACE_REG_1]
static const uint64_t EPS_DBG_TRACE_REG_1 = 0x100107ceull;

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
// pauc/reg00014.H

//>> [PB_DOB23_DIB23_INT_ERR_REG]
static const uint64_t PB_DOB23_DIB23_INT_ERR_REG = 0x1001182aull;

static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR = 0;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR = 1;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR = 2;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR = 3;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR = 4;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR = 5;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR = 6;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR = 7;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR = 8;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR = 9;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR = 10;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW = 11;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW = 12;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW = 13;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW = 14;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW = 15;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW = 16;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW = 17;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW = 18;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW = 19;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW = 20;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW = 21;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW = 22;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW = 23;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW = 24;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW = 25;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW = 26;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW = 27;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW = 28;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW = 29;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW = 30;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW = 31;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW = 32;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR = 33;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR = 34;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR = 35;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW = 36;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW = 37;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW = 38;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW = 39;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW = 40;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW = 41;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW = 42;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW = 43;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW = 44;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW = 45;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW = 46;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW = 47;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW = 48;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW = 49;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW = 50;
static const uint32_t PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW = 51;
//<< [PB_DOB23_DIB23_INT_ERR_REG]
// pauc/reg00014.H

//>> [PB_MAILBOX_10_REG]
static const uint64_t PB_MAILBOX_10_REG = 0x10011832ull;
//<< [PB_MAILBOX_10_REG]
// pauc/reg00014.H

//>> [PB_MAILBOX_11_REG]
static const uint64_t PB_MAILBOX_11_REG = 0x10011833ull;
//<< [PB_MAILBOX_11_REG]
// pauc/reg00014.H

//>> [PB_PMU2_CNPM_COUNTER]
static const uint64_t PB_PMU2_CNPM_COUNTER = 0x10011823ull;

static const uint32_t PB_PMU2_CNPM_COUNTER_0 = 0;
static const uint32_t PB_PMU2_CNPM_COUNTER_0_LEN = 16;
static const uint32_t PB_PMU2_CNPM_COUNTER_1 = 16;
static const uint32_t PB_PMU2_CNPM_COUNTER_1_LEN = 16;
static const uint32_t PB_PMU2_CNPM_COUNTER_2 = 32;
static const uint32_t PB_PMU2_CNPM_COUNTER_2_LEN = 16;
static const uint32_t PB_PMU2_CNPM_COUNTER_3 = 48;
static const uint32_t PB_PMU2_CNPM_COUNTER_3_LEN = 16;
//<< [PB_PMU2_CNPM_COUNTER]
// pauc/reg00014.H

//>> [RCMD_RATE_CFG]
static const uint64_t RCMD_RATE_CFG = 0x1001180cull;

static const uint32_t RCMD_RATE_CFG_X_RCMD_RATE = 0;
static const uint32_t RCMD_RATE_CFG_X_RCMD_RATE_LEN = 8;
static const uint32_t RCMD_RATE_CFG_Y_RCMD_RATE = 8;
static const uint32_t RCMD_RATE_CFG_Y_RCMD_RATE_LEN = 8;
static const uint32_t RCMD_RATE_CFG_X_RCMD_RATE_ADDER = 16;
static const uint32_t RCMD_RATE_CFG_X_RCMD_RATE_ADDER_LEN = 4;
static const uint32_t RCMD_RATE_CFG_Y_RCMD_RATE_ADDER = 20;
static const uint32_t RCMD_RATE_CFG_Y_RCMD_RATE_ADDER_LEN = 4;
static const uint32_t RCMD_RATE_CFG_X_DISABLE_TURBO = 24;
static const uint32_t RCMD_RATE_CFG_X_CMD_GAP_REFERENCE = 25;
static const uint32_t RCMD_RATE_CFG_X_CMD_GAP_MODE = 26;
static const uint32_t RCMD_RATE_CFG_X_CMD_GAP_TABLE = 27;
static const uint32_t RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK = 28;
static const uint32_t RCMD_RATE_CFG_X_CMD_GAP_CFG = 29;
static const uint32_t RCMD_RATE_CFG_X_CMD_GAP_CFG_LEN = 3;
static const uint32_t RCMD_RATE_CFG_Y_DISABLE_TURBO = 32;
static const uint32_t RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE = 33;
static const uint32_t RCMD_RATE_CFG_Y_CMD_GAP_MODE = 34;
static const uint32_t RCMD_RATE_CFG_Y_CMD_GAP_TABLE = 35;
static const uint32_t RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK = 36;
static const uint32_t RCMD_RATE_CFG_Y_CMD_GAP_CFG = 37;
static const uint32_t RCMD_RATE_CFG_Y_CMD_GAP_CFG_LEN = 3;
//<< [RCMD_RATE_CFG]
// pauc/reg00014.H

//>> [TRA1_TR0_CONFIG_1]
static const uint64_t TRA1_TR0_CONFIG_1 = 0x10010484ull;

static const uint32_t TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [TRA1_TR0_CONFIG_1]
// pauc/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00014_unused.H"
#endif
#endif
