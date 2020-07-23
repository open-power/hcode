/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_b_unused.H $    */
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

#ifndef __p10_scom_pauc_b_H_UNUSED__
#define __p10_scom_pauc_b_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_XIRAMGA]
static const uint64_t DL_PPE_WRAP_XIRAMGA = 0x10012c52ull;

static const uint32_t DL_PPE_WRAP_XIRAMGA_GA_IR = 0;
static const uint32_t DL_PPE_WRAP_XIRAMGA_GA_IR_LEN = 32;
static const uint32_t DL_PPE_WRAP_XIRAMGA_RA_SPRG0 = 32;
static const uint32_t DL_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN = 32;
//<< [DL_PPE_WRAP_XIRAMGA]
// pauc/reg00011.H

//>> [DL_SCOM_MAC_FIR_REG]
static const uint64_t DL_SCOM_MAC_FIR_REG_RW = 0x10012c40ull;
static const uint64_t DL_SCOM_MAC_FIR_REG_WO_AND = 0x10012c41ull;
static const uint64_t DL_SCOM_MAC_FIR_REG_WO_OR = 0x10012c42ull;

static const uint32_t DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR = 0;
static const uint32_t DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR = 1;
static const uint32_t DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR = 2;
static const uint32_t DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR = 3;
static const uint32_t DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR = 4;
static const uint32_t DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR = 5;
static const uint32_t DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR = 6;
static const uint32_t DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR = 7;
static const uint32_t DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR = 8;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR = 9;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR = 10;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT = 11;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG = 12;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_HALTED = 13;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT = 14;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK = 15;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR = 16;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR = 17;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT = 18;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR = 19;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING = 20;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR = 21;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN = 22;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED = 23;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_6 = 24;
static const uint32_t DL_SCOM_MAC_FIR_REG_PPE_CODE_7 = 25;
//<< [DL_SCOM_MAC_FIR_REG]
// pauc/reg00011.H

//>> [PB_MAILBOX_00_REG]
static const uint64_t PB_MAILBOX_00_REG = 0x10011830ull;
//<< [PB_MAILBOX_00_REG]
// pauc/reg00011.H

//>> [PB_MAILBOX_01_REG]
static const uint64_t PB_MAILBOX_01_REG = 0x10011831ull;
//<< [PB_MAILBOX_01_REG]
// pauc/reg00011.H

//>> [PHY_PPE_WRAP_XIDBGINF]
static const uint64_t PHY_PPE_WRAP_XIDBGINF = 0x10012c1full;

static const uint32_t PHY_PPE_WRAP_XIDBGINF_SRR0 = 0;
static const uint32_t PHY_PPE_WRAP_XIDBGINF_SRR0_LEN = 30;
static const uint32_t PHY_PPE_WRAP_XIDBGINF_LR = 32;
static const uint32_t PHY_PPE_WRAP_XIDBGINF_LR_LEN = 32;
//<< [PHY_PPE_WRAP_XIDBGINF]
// pauc/reg00011.H

//>> [EPS_DBG_TRACE_MODE_REG_2]
static const uint64_t EPS_DBG_TRACE_MODE_REG_2 = 0x100107cfull;

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
// pauc/reg00011.H

//>> [TRA0_TR1_CONFIG_1]
static const uint64_t TRA0_TR1_CONFIG_1 = 0x10010444ull;

static const uint32_t TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [TRA0_TR1_CONFIG_1]
// pauc/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00011_unused.H"
#endif
#endif
