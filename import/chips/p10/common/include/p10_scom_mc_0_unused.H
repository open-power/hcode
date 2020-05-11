/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_0_unused.H $      */
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

#ifndef __p10_scom_mc_0_H_UNUSED__
#define __p10_scom_mc_0_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [MBA_SCOMFIR_MISCFIRQ]
static const uint64_t MBA_SCOMFIR_MISCFIRQ_RW = 0x0c010f00ull;
static const uint64_t MBA_SCOMFIR_MISCFIRQ_WO_AND = 0x0c010f01ull;
static const uint64_t MBA_SCOMFIR_MISCFIRQ_WO_OR = 0x0c010f02ull;

static const uint32_t MBA_SCOMFIR_MISCFIRQ_WAT_DEBUG_ATTN = 0;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_WAT_DEBUG_REG_PE = 1;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_SCOM_RECOVERABLE_REG_PE = 2;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_RESERVED_3 = 3;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_CHAN0A_APPLICATION_INTERRUPT = 4;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_CHAN0B_APPLICATION_INTERRUPT = 5;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_CHAN1A_APPLICATION_INTERRUPT = 6;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_CHAN1B_APPLICATION_INTERRUPT = 7;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_MCEBUSEN_REGS_PE = 8;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_MCWAT_REGS_PE = 9;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_RESERVED_10 = 10;
static const uint32_t MBA_SCOMFIR_MISCFIRQ_RESERVED_11 = 11;
//<< [MBA_SCOMFIR_MISCFIRQ]
// mc/reg00000.H

//>> [SCOMFIR_MCFIRACT2]
static const uint64_t SCOMFIR_MCFIRACT2 = 0x0c010c09ull;

static const uint32_t SCOMFIR_MCFIRACT2_MCFIRACT2_ACTION_2 = 0;
static const uint32_t SCOMFIR_MCFIRACT2_MCFIRACT2_ACTION_2_LEN = 24;
//<< [SCOMFIR_MCFIRACT2]
// mc/reg00000.H

//>> [EPS_DBG_INST1_COND_REG_2]
static const uint64_t EPS_DBG_INST1_COND_REG_2 = 0x0c0107c2ull;

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
// mc/reg00000.H

//>> [EPS_DBG_INST2_COND_REG_2]
static const uint64_t EPS_DBG_INST2_COND_REG_2 = 0x0c0107c5ull;

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
// mc/reg00000.H

//>> [EPS_DBG_XTRA_TRACE_MODE]
static const uint64_t EPS_DBG_XTRA_TRACE_MODE = 0x0c0107d1ull;

static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA = 0;
static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN = 42;
//<< [EPS_DBG_XTRA_TRACE_MODE]
// mc/reg00000.H

//>> [EPS_FIR_MODE_REG]
static const uint64_t EPS_FIR_MODE_REG = 0x0c040088ull;

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
// mc/reg00000.H

//>> [EPS_THERM_WSUB_DTS_TRC_RESULT]
static const uint64_t EPS_THERM_WSUB_DTS_TRC_RESULT = 0x0c050003ull;

static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE = 0;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT = 48;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN = 16;
//<< [EPS_THERM_WSUB_DTS_TRC_RESULT]
// mc/reg00000.H

//>> [HOSTATTN]
static const uint64_t HOSTATTN = 0x0c040004ull;

static const uint32_t HOSTATTN_ANY_HOSTATTN = 0;
static const uint32_t HOSTATTN_RESERVED1H = 1;
static const uint32_t HOSTATTN_RESERVED2H = 2;
static const uint32_t HOSTATTN_RESERVED3H = 3;
static const uint32_t HOSTATTN_PERV = 4;
static const uint32_t HOSTATTN_IN05 = 5;
static const uint32_t HOSTATTN_IN06 = 6;
static const uint32_t HOSTATTN_IN07 = 7;
static const uint32_t HOSTATTN_IN08 = 8;
static const uint32_t HOSTATTN_IN09 = 9;
static const uint32_t HOSTATTN_IN10 = 10;
static const uint32_t HOSTATTN_IN11 = 11;
static const uint32_t HOSTATTN_IN12 = 12;
static const uint32_t HOSTATTN_IN13 = 13;
static const uint32_t HOSTATTN_IN14 = 14;
static const uint32_t HOSTATTN_IN15 = 15;
static const uint32_t HOSTATTN_IN16 = 16;
static const uint32_t HOSTATTN_IN17 = 17;
static const uint32_t HOSTATTN_IN18 = 18;
static const uint32_t HOSTATTN_IN19 = 19;
static const uint32_t HOSTATTN_IN20 = 20;
static const uint32_t HOSTATTN_IN21 = 21;
static const uint32_t HOSTATTN_IN22 = 22;
static const uint32_t HOSTATTN_IN23 = 23;
static const uint32_t HOSTATTN_IN24 = 24;
static const uint32_t HOSTATTN_IN25 = 25;
static const uint32_t HOSTATTN_IN26 = 26;
static const uint32_t HOSTATTN_IN27 = 27;
static const uint32_t HOSTATTN_IN28 = 28;
static const uint32_t HOSTATTN_IN29 = 29;
static const uint32_t HOSTATTN_IN30 = 30;
static const uint32_t HOSTATTN_IN31 = 31;
static const uint32_t HOSTATTN_IN32 = 32;
static const uint32_t HOSTATTN_IN33 = 33;
static const uint32_t HOSTATTN_IN34 = 34;
static const uint32_t HOSTATTN_IN35 = 35;
static const uint32_t HOSTATTN_IN36 = 36;
static const uint32_t HOSTATTN_IN37 = 37;
static const uint32_t HOSTATTN_IN38 = 38;
static const uint32_t HOSTATTN_IN39 = 39;
static const uint32_t HOSTATTN_IN40 = 40;
static const uint32_t HOSTATTN_IN41 = 41;
static const uint32_t HOSTATTN_IN42 = 42;
static const uint32_t HOSTATTN_IN43 = 43;
static const uint32_t HOSTATTN_IN44 = 44;
static const uint32_t HOSTATTN_IN45 = 45;
static const uint32_t HOSTATTN_IN46 = 46;
static const uint32_t HOSTATTN_IN47 = 47;
static const uint32_t HOSTATTN_IN48 = 48;
static const uint32_t HOSTATTN_IN49 = 49;
static const uint32_t HOSTATTN_IN50 = 50;
static const uint32_t HOSTATTN_IN51 = 51;
static const uint32_t HOSTATTN_IN52 = 52;
static const uint32_t HOSTATTN_IN53 = 53;
//<< [HOSTATTN]
// mc/reg00000.H

//>> [HOSTATTN_MASK]
static const uint64_t HOSTATTN_MASK_RW = 0x0c040044ull;
static const uint64_t HOSTATTN_MASK_WO_CLEAR = 0x0c040064ull;
static const uint64_t HOSTATTN_MASK_WO_OR = 0x0c040054ull;

static const uint32_t HOSTATTN_MASK_01 = 1;
static const uint32_t HOSTATTN_MASK_02 = 2;
static const uint32_t HOSTATTN_MASK_03 = 3;
static const uint32_t HOSTATTN_MASK_04 = 4;
static const uint32_t HOSTATTN_MASK_05 = 5;
static const uint32_t HOSTATTN_MASK_06 = 6;
static const uint32_t HOSTATTN_MASK_07 = 7;
static const uint32_t HOSTATTN_MASK_08 = 8;
static const uint32_t HOSTATTN_MASK_09 = 9;
static const uint32_t HOSTATTN_MASK_10 = 10;
static const uint32_t HOSTATTN_MASK_11 = 11;
static const uint32_t HOSTATTN_MASK_12 = 12;
static const uint32_t HOSTATTN_MASK_13 = 13;
static const uint32_t HOSTATTN_MASK_14 = 14;
static const uint32_t HOSTATTN_MASK_15 = 15;
static const uint32_t HOSTATTN_MASK_16 = 16;
static const uint32_t HOSTATTN_MASK_17 = 17;
static const uint32_t HOSTATTN_MASK_18 = 18;
static const uint32_t HOSTATTN_MASK_19 = 19;
static const uint32_t HOSTATTN_MASK_20 = 20;
static const uint32_t HOSTATTN_MASK_21 = 21;
static const uint32_t HOSTATTN_MASK_22 = 22;
static const uint32_t HOSTATTN_MASK_23 = 23;
static const uint32_t HOSTATTN_MASK_24 = 24;
static const uint32_t HOSTATTN_MASK_25 = 25;
static const uint32_t HOSTATTN_MASK_26 = 26;
static const uint32_t HOSTATTN_MASK_27 = 27;
static const uint32_t HOSTATTN_MASK_28 = 28;
static const uint32_t HOSTATTN_MASK_29 = 29;
static const uint32_t HOSTATTN_MASK_30 = 30;
static const uint32_t HOSTATTN_MASK_31 = 31;
static const uint32_t HOSTATTN_MASK_32 = 32;
static const uint32_t HOSTATTN_MASK_33 = 33;
static const uint32_t HOSTATTN_MASK_34 = 34;
static const uint32_t HOSTATTN_MASK_35 = 35;
static const uint32_t HOSTATTN_MASK_36 = 36;
static const uint32_t HOSTATTN_MASK_37 = 37;
static const uint32_t HOSTATTN_MASK_38 = 38;
static const uint32_t HOSTATTN_MASK_39 = 39;
static const uint32_t HOSTATTN_MASK_40 = 40;
static const uint32_t HOSTATTN_MASK_41 = 41;
static const uint32_t HOSTATTN_MASK_42 = 42;
static const uint32_t HOSTATTN_MASK_43 = 43;
static const uint32_t HOSTATTN_MASK_44 = 44;
static const uint32_t HOSTATTN_MASK_45 = 45;
static const uint32_t HOSTATTN_MASK_46 = 46;
static const uint32_t HOSTATTN_MASK_47 = 47;
static const uint32_t HOSTATTN_MASK_48 = 48;
static const uint32_t HOSTATTN_MASK_49 = 49;
static const uint32_t HOSTATTN_MASK_50 = 50;
static const uint32_t HOSTATTN_MASK_51 = 51;
static const uint32_t HOSTATTN_MASK_52 = 52;
static const uint32_t HOSTATTN_MASK_53 = 53;
//<< [HOSTATTN_MASK]
// mc/reg00000.H

//>> [SCAN_CAPTUREDR]
static const uint64_t SCAN_CAPTUREDR = 0x0c03c000ull;

static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG = 0;
static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN = 32;
//<< [SCAN_CAPTUREDR]
// mc/reg00000.H

//>> [TRA0_TR0_CONFIG_4]
static const uint64_t TRA0_TR0_CONFIG_4 = 0x0c010407ull;

static const uint32_t TRA0_TR0_CONFIG_4_A = 0;
static const uint32_t TRA0_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B_LEN = 24;
//<< [TRA0_TR0_CONFIG_4]
// mc/reg00000.H

//>> [TRA1_TR0_TRACE_LO_DATA_REG]
static const uint64_t TRA1_TR0_TRACE_LO_DATA_REG = 0x0c010481ull;

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
// mc/reg00000.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00000_unused.H"
#endif
#endif
