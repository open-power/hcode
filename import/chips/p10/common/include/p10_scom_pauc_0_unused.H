/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_0_unused.H $    */
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

#ifndef __p10_scom_pauc_0_H_UNUSED__
#define __p10_scom_pauc_0_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [PB_MAILBOX_20_REG]
static const uint64_t PB_MAILBOX_20_REG = 0x10011834ull;
//<< [PB_MAILBOX_20_REG]
// pauc/reg00000.H

//>> [PB_MAILBOX_21_REG]
static const uint64_t PB_MAILBOX_21_REG = 0x10011835ull;
//<< [PB_MAILBOX_21_REG]
// pauc/reg00000.H

//>> [PHY_PPE_WRAP_XIRAMDBG]
static const uint64_t PHY_PPE_WRAP_XIRAMDBG = 0x10012c13ull;

static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_HS = 0;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_HC = 1;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_HC_LEN = 3;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_HCP = 4;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_RIP = 5;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_SIP = 6;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP = 7;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_IAC = 8;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC = 9;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN = 3;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC = 12;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC = 13;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE = 14;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_TRH = 15;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_SMS = 16;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN = 4;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP = 20;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_EP = 21;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_PTR = 24;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_ST = 25;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_MFE = 28;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_MCS = 29;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN = 3;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 = 32;
static const uint32_t PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN = 32;
//<< [PHY_PPE_WRAP_XIRAMDBG]
// pauc/reg00000.H

//>> [PHY_PPE_WRAP_XIRAMRA]
static const uint64_t PHY_PPE_WRAP_XIRAMRA = 0x10012c11ull;

static const uint32_t PHY_PPE_WRAP_XIRAMRA_XCR = 1;
static const uint32_t PHY_PPE_WRAP_XIRAMRA_XCR_LEN = 3;
static const uint32_t PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0 = 32;
static const uint32_t PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0_LEN = 32;
//<< [PHY_PPE_WRAP_XIRAMRA]
// pauc/reg00000.H

//>> [TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_SWO9_PB = 0x800f75c010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP_LEN = 10;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN = 58;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP = 59;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN = 60;
//<< [TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
// pauc/reg00000.H

//>> [TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
static const uint64_t TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB = 0x800f99c010012c3full;

static const uint32_t TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ = 48;
static const uint32_t TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ_LEN = 2;
//<< [TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
// pauc/reg00000.H

//>> [EPS_DBG_INST1_COND_REG_2]
static const uint64_t EPS_DBG_INST1_COND_REG_2 = 0x100107c2ull;

static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A = 0;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A = 10;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B = 15;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_TO_CMP_LT = 20;
static const uint32_t EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN = 24;
//<< [EPS_DBG_INST1_COND_REG_2]
// pauc/reg00000.H

//>> [EPS_DBG_INST2_COND_REG_2]
static const uint64_t EPS_DBG_INST2_COND_REG_2 = 0x100107c5ull;

static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A = 0;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A = 10;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B = 15;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_TO_CMP_LT = 20;
static const uint32_t EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN = 24;
//<< [EPS_DBG_INST2_COND_REG_2]
// pauc/reg00000.H

//>> [EPS_DBG_XTRA_TRACE_MODE]
static const uint64_t EPS_DBG_XTRA_TRACE_MODE = 0x100107d1ull;

static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA = 0;
static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN = 42;
//<< [EPS_DBG_XTRA_TRACE_MODE]
// pauc/reg00000.H

//>> [EPS_FIR_MODE_REG]
static const uint64_t EPS_FIR_MODE_REG = 0x10040088ull;

static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK = 0;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV = 1;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN = 2;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP = 3;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN = 4;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG05 = 5;
static const uint32_t EPS_FIR_MODE_REG_DISABLE_IOPB_ERR = 6;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG07 = 7;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG08 = 8;
static const uint32_t EPS_FIR_MODE_REG_MASK_DIRECT_ERROR = 9;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG10 = 10;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG11 = 11;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG12 = 12;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG13 = 13;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG14 = 14;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG15 = 15;
//<< [EPS_FIR_MODE_REG]
// pauc/reg00000.H

//>> [EPS_THERM_WSUB_DTS_TRC_RESULT]
static const uint64_t EPS_THERM_WSUB_DTS_TRC_RESULT = 0x10050003ull;

static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE = 0;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT = 48;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN = 16;
//<< [EPS_THERM_WSUB_DTS_TRC_RESULT]
// pauc/reg00000.H

//>> [SCAN_CAPTUREDR]
static const uint64_t SCAN_CAPTUREDR = 0x1003c000ull;

static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG = 0;
static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN = 32;
//<< [SCAN_CAPTUREDR]
// pauc/reg00000.H

//>> [TRA0_TR0_CONFIG_4]
static const uint64_t TRA0_TR0_CONFIG_4 = 0x10010407ull;

static const uint32_t TRA0_TR0_CONFIG_4_A = 0;
static const uint32_t TRA0_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B_LEN = 24;
//<< [TRA0_TR0_CONFIG_4]
// pauc/reg00000.H

//>> [TRA1_TR0_TRACE_LO_DATA_REG]
static const uint64_t TRA1_TR0_TRACE_LO_DATA_REG = 0x10010481ull;

static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [TRA1_TR0_TRACE_LO_DATA_REG]
// pauc/reg00000.H

//>> [PB_PSAVE01_MISC_CFG]
static const uint64_t PB_PSAVE01_MISC_CFG = 0x10011815ull;

static const uint32_t PB_PSAVE01_MISC_CFG_HALF_LUC = 0;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_LUC_LEN = 8;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_HUC = 8;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_HUC_LEN = 8;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_LUT = 16;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_LUT_LEN = 5;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_HUT = 21;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_HUT_LEN = 5;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_SPARE = 26;
static const uint32_t PB_PSAVE01_MISC_CFG_HALF_SPARE_LEN = 2;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_LUC = 28;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_LUC_LEN = 8;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_HUC = 36;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_HUC_LEN = 8;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_LUT = 44;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_LUT_LEN = 5;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_HUT = 49;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_HUT_LEN = 5;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_SPARE = 54;
static const uint32_t PB_PSAVE01_MISC_CFG_QTR_SPARE_LEN = 2;
static const uint32_t PB_PSAVE01_MISC_CFG_WSIZE = 56;
static const uint32_t PB_PSAVE01_MISC_CFG_WSIZE_LEN = 3;
//<< [PB_PSAVE01_MISC_CFG]
// pauc/reg00000.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00000_unused.H"
#endif
#endif
