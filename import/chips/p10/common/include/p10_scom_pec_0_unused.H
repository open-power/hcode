/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_0_unused.H $     */
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

#ifndef __p10_scom_pec_0_H_UNUSED__
#define __p10_scom_pec_0_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [EPS_DBG_INST1_COND_REG_2]
static const uint64_t EPS_DBG_INST1_COND_REG_2 = 0x080107c2ull;

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
// pec/reg00000.H

//>> [EPS_DBG_INST2_COND_REG_2]
static const uint64_t EPS_DBG_INST2_COND_REG_2 = 0x080107c5ull;

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
// pec/reg00000.H

//>> [EPS_DBG_XTRA_TRACE_MODE]
static const uint64_t EPS_DBG_XTRA_TRACE_MODE = 0x080107d1ull;

static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA = 0;
static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN = 42;
//<< [EPS_DBG_XTRA_TRACE_MODE]
// pec/reg00000.H

//>> [EPS_FIR_MODE_REG]
static const uint64_t EPS_FIR_MODE_REG = 0x08040088ull;

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
// pec/reg00000.H

//>> [EPS_THERM_WSUB_DTS_TRC_RESULT]
static const uint64_t EPS_THERM_WSUB_DTS_TRC_RESULT = 0x08050003ull;

static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE = 0;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT = 48;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN = 16;
//<< [EPS_THERM_WSUB_DTS_TRC_RESULT]
// pec/reg00000.H

//>> [SCAN_CAPTUREDR]
static const uint64_t SCAN_CAPTUREDR = 0x0803c000ull;

static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG = 0;
static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN = 32;
//<< [SCAN_CAPTUREDR]
// pec/reg00000.H

//>> [TOP0_IXMODE]
static const uint64_t TOP0_IXMODE = 0x0801110eull;

static const uint32_t TOP0_IXMODE_PHY0_SRAM_EXT_LD_DONE = 0;
static const uint32_t TOP0_IXMODE_PHY1_SRAM_EXT_LD_DONE = 1;
static const uint32_t TOP0_IXMODE_RAM_SCOM_ACCESS_MODE = 2;
static const uint32_t TOP0_IXMODE_RAM_SCOM_AUTOINC_RW_MODE = 3;
static const uint32_t TOP0_IXMODE_SCRUB_EN = 17;
static const uint32_t TOP0_IXMODE_SCRUB_PERIOD = 18;
static const uint32_t TOP0_IXMODE_SCRUB_PERIOD_LEN = 8;
static const uint32_t TOP0_IXMODE_PHY0_ARRAY_ERR_INJ_EN = 26;
static const uint32_t TOP0_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE = 27;
static const uint32_t TOP0_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION = 28;
static const uint32_t TOP0_IXMODE_PHY1_ARRAY_ERR_INJ_EN = 31;
static const uint32_t TOP0_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE = 32;
static const uint32_t TOP0_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION = 33;
//<< [TOP0_IXMODE]
// pec/reg00000.H

//>> [TOP1_PIPEDINCTL3]
static const uint64_t TOP1_PIPEDINCTL3 = 0x0801151cull;

static const uint32_t TOP1_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT = 0;
static const uint32_t TOP1_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT = 1;
static const uint32_t TOP1_PIPEDINCTL3_RESERVED_61_4 = 2;
static const uint32_t TOP1_PIPEDINCTL3_RESERVED_61_4_LEN = 58;
static const uint32_t TOP1_PIPEDINCTL3_PHY1_DTB = 60;
static const uint32_t TOP1_PIPEDINCTL3_PHY1_DTB_LEN = 2;
static const uint32_t TOP1_PIPEDINCTL3_PHY0_DTB = 62;
static const uint32_t TOP1_PIPEDINCTL3_PHY0_DTB_LEN = 2;
//<< [TOP1_PIPEDINCTL3]
// pec/reg00000.H

//>> [TOP1_PIPEDOUTCTL3]
static const uint64_t TOP1_PIPEDOUTCTL3 = 0x08011517ull;

static const uint32_t TOP1_PIPEDOUTCTL3_PHY1_HANDSHAKE = 0;
static const uint32_t TOP1_PIPEDOUTCTL3_PHY0_HANDSHAKE = 1;
static const uint32_t TOP1_PIPEDOUTCTL3_RESERVED_61_0 = 2;
static const uint32_t TOP1_PIPEDOUTCTL3_RESERVED_61_0_LEN = 62;
//<< [TOP1_PIPEDOUTCTL3]
// pec/reg00000.H

//>> [TRA0_TR0_CONFIG_4]
static const uint64_t TRA0_TR0_CONFIG_4 = 0x08010407ull;

static const uint32_t TRA0_TR0_CONFIG_4_A = 0;
static const uint32_t TRA0_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B_LEN = 24;
//<< [TRA0_TR0_CONFIG_4]
// pec/reg00000.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00000_unused.H"
#endif
#endif
