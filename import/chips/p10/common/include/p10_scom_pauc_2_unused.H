/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_2_unused.H $    */
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

#ifndef __p10_scom_pauc_2_H_UNUSED__
#define __p10_scom_pauc_2_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_XIRAMEDR]
static const uint64_t DL_PPE_WRAP_XIRAMEDR = 0x10012c54ull;

static const uint32_t DL_PPE_WRAP_XIRAMEDR_GA_IR = 0;
static const uint32_t DL_PPE_WRAP_XIRAMEDR_GA_IR_LEN = 32;
static const uint32_t DL_PPE_WRAP_XIRAMEDR_EDR = 32;
static const uint32_t DL_PPE_WRAP_XIRAMEDR_EDR_LEN = 32;
//<< [DL_PPE_WRAP_XIRAMEDR]
// pauc/reg00002.H

//>> [DL_PPE_WRAP_XIXCR]
static const uint64_t DL_PPE_WRAP_XIXCR = 0x10012c50ull;

static const uint32_t DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR = 1;
static const uint32_t DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR_LEN = 3;
static const uint32_t DL_PPE_WRAP_XIXCR_NULL_CTR = 32;
static const uint32_t DL_PPE_WRAP_XIXCR_NULL_CTR_LEN = 32;
//<< [DL_PPE_WRAP_XIXCR]
// pauc/reg00002.H

//>> [DL_SCOM_MAC_FIR_MASK_REG]
static const uint64_t DL_SCOM_MAC_FIR_MASK_REG_RW = 0x10012c43ull;
static const uint64_t DL_SCOM_MAC_FIR_MASK_REG_WO_AND = 0x10012c44ull;
static const uint64_t DL_SCOM_MAC_FIR_MASK_REG_WO_OR = 0x10012c45ull;

static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK = 0;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK = 1;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK = 2;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK = 3;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK = 4;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK = 5;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK = 6;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK = 7;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK = 8;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK = 9;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK = 10;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK = 11;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK = 12;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK = 13;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK = 14;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK = 15;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK = 16;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK = 17;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK = 18;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK = 19;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK = 20;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK = 21;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK = 22;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK = 23;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK = 24;
static const uint32_t DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK = 25;
//<< [DL_SCOM_MAC_FIR_MASK_REG]
// pauc/reg00002.H

//>> [DL_SCOM_MAC_FIR_WOF_REG]
static const uint64_t DL_SCOM_MAC_FIR_WOF_REG = 0x10012c48ull;

static const uint32_t DL_SCOM_MAC_FIR_WOF_REG_WOF = 0;
static const uint32_t DL_SCOM_MAC_FIR_WOF_REG_WOF_LEN = 26;
//<< [DL_SCOM_MAC_FIR_WOF_REG]
// pauc/reg00002.H

//>> [PB_FP23_CFG]
static const uint64_t PB_FP23_CFG = 0x1001180bull;

static const uint32_t PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8 = 0;
static const uint32_t PB_FP23_CFG_2_DISABLE_GATHERING = 1;
static const uint32_t PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION = 2;
static const uint32_t PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION = 3;
static const uint32_t PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT = 4;
static const uint32_t PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT_LEN = 6;
static const uint32_t PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT = 10;
static const uint32_t PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT_LEN = 6;
static const uint32_t PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT = 16;
static const uint32_t PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT_LEN = 4;
static const uint32_t PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP = 20;
static const uint32_t PB_FP23_CFG_23_CMD_EXP_TIME = 21;
static const uint32_t PB_FP23_CFG_23_CMD_EXP_TIME_LEN = 3;
static const uint32_t PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR = 24;
static const uint32_t PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST = 25;
static const uint32_t PB_FP23_CFG_2_PRS_SPARE = 26;
static const uint32_t PB_FP23_CFG_2_PRS_SPARE_LEN = 6;
static const uint32_t PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8 = 32;
static const uint32_t PB_FP23_CFG_3_DISABLE_GATHERING = 33;
static const uint32_t PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION = 34;
static const uint32_t PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION = 35;
static const uint32_t PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT = 36;
static const uint32_t PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT_LEN = 6;
static const uint32_t PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT = 42;
static const uint32_t PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT_LEN = 6;
static const uint32_t PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT = 48;
static const uint32_t PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT_LEN = 4;
static const uint32_t PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP = 52;
static const uint32_t PB_FP23_CFG_3_FMR_SPARE = 53;
static const uint32_t PB_FP23_CFG_3_FMR_SPARE_LEN = 3;
static const uint32_t PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR = 56;
static const uint32_t PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST = 57;
static const uint32_t PB_FP23_CFG_3_PRS_SPARE = 58;
static const uint32_t PB_FP23_CFG_3_PRS_SPARE_LEN = 6;
//<< [PB_FP23_CFG]
// pauc/reg00002.H

//>> [PB_TRACE_CFG]
static const uint64_t PB_TRACE_CFG = 0x10011826ull;

static const uint32_t PB_TRACE_CFG_0L_SEL = 0;
static const uint32_t PB_TRACE_CFG_0L_SEL_LEN = 8;
static const uint32_t PB_TRACE_CFG_0R_SEL = 8;
static const uint32_t PB_TRACE_CFG_0R_SEL_LEN = 8;
static const uint32_t PB_TRACE_CFG_1L_SEL = 16;
static const uint32_t PB_TRACE_CFG_1L_SEL_LEN = 8;
static const uint32_t PB_TRACE_CFG_1R_SEL = 24;
static const uint32_t PB_TRACE_CFG_1R_SEL_LEN = 8;
//<< [PB_TRACE_CFG]
// pauc/reg00002.H

//>> [TRA0_TR1_CONFIG_5]
static const uint64_t TRA0_TR1_CONFIG_5 = 0x10010448ull;

static const uint32_t TRA0_TR1_CONFIG_5_C = 0;
static const uint32_t TRA0_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t TRA0_TR1_CONFIG_5_D = 24;
static const uint32_t TRA0_TR1_CONFIG_5_D_LEN = 24;
//<< [TRA0_TR1_CONFIG_5]
// pauc/reg00002.H

//>> [TRA1_TR0_CONFIG_3]
static const uint64_t TRA1_TR0_CONFIG_3 = 0x10010486ull;

static const uint32_t TRA1_TR0_CONFIG_3_C = 0;
static const uint32_t TRA1_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t TRA1_TR0_CONFIG_3_D = 24;
static const uint32_t TRA1_TR0_CONFIG_3_D_LEN = 24;
//<< [TRA1_TR0_CONFIG_3]
// pauc/reg00002.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00002_unused.H"
#endif
#endif
