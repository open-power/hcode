/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_e_unused.H $      */
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

#ifndef __p10_scom_eq_e_H_UNUSED__
#define __p10_scom_eq_e_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS = 0x2001832cull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
// eq/reg00014.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE = 0x20018330ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE = 1;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
// eq/reg00014.H

//>> [CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY = 0x20014316ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1 = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1_LEN = 8;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2 = 8;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2_LEN = 8;
//<< [CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]
// eq/reg00014.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE = 0x20014302ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD = 1;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]
// eq/reg00014.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE = 0x20014301ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD = 0;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]
// eq/reg00014.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE = 0x2001432aull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
// eq/reg00014.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT = 0x20014328ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE = 0;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN = 6;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
// eq/reg00014.H

//>> [CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE = 0x20011306ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN = 8;
//<< [CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]
// eq/reg00014.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE = 0x20011311ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 = 4;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
// eq/reg00014.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE = 0x20011321ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET = 1;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET = 2;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET = 3;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET = 4;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
// eq/reg00014.H

//>> [QMETRA0_TR1_TRACE_LO_DATA_REG]
static const uint64_t QMETRA0_TR1_TRACE_LO_DATA_REG = 0x20018441ull;

static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [QMETRA0_TR1_TRACE_LO_DATA_REG]
// eq/reg00014.H

//>> [QMETRA0_TR1_CONFIG]
static const uint64_t QMETRA0_TR1_CONFIG = 0x20018442ull;

static const uint32_t QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t QMETRA0_TR1_CONFIG_BANK_MODE = 10;
static const uint32_t QMETRA0_TR1_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [QMETRA0_TR1_CONFIG]
// eq/reg00014.H

//>> [QME_PCBSII]
static const uint64_t QME_PCBSII = 0x200e0038ull;

static const uint32_t QME_PCBSII_PCB_REQ_ACK = 0;
static const uint32_t QME_PCBSII_PCB_RSP_P = 1;
static const uint32_t QME_PCBSII_PCB_RSP_VLD = 4;
static const uint32_t QME_PCBSII_PCB_RSP_INFO = 5;
static const uint32_t QME_PCBSII_PCB_RSP_INFO_LEN = 3;
static const uint32_t QME_PCBSII_QUAD_ID = 33;
static const uint32_t QME_PCBSII_QUAD_ID_LEN = 3;
//<< [QME_PCBSII]
// eq/reg00014.H

//>> [EPS_DBG_TRACE_REG_1]
static const uint64_t EPS_DBG_TRACE_REG_1 = 0x200183eeull;

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
// eq/reg00014.H

//>> [L3TRA0_TR0_CONFIG]
static const uint64_t L3TRA0_TR0_CONFIG = 0x20018202ull;

static const uint32_t L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t L3TRA0_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t L3TRA0_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [L3TRA0_TR0_CONFIG]
// eq/reg00014.H

//>> [L3TRA1_TR0_TRACE_HI_DATA_REG]
static const uint64_t L3TRA1_TR0_TRACE_HI_DATA_REG = 0x20018240ull;

static const uint32_t L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA1_TR0_TRACE_HI_DATA_REG]
// eq/reg00014.H

//>> [L3TRA1_TR0_CONFIG_1]
static const uint64_t L3TRA1_TR0_CONFIG_1 = 0x20018244ull;

static const uint32_t L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [L3TRA1_TR0_CONFIG_1]
// eq/reg00014.H

//>> [L3TRA1_TR1_CONFIG]
static const uint64_t L3TRA1_TR1_CONFIG = 0x20018262ull;

static const uint32_t L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t L3TRA1_TR1_CONFIG_BANK_MODE = 10;
static const uint32_t L3TRA1_TR1_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [L3TRA1_TR1_CONFIG]
// eq/reg00014.H

//>> [L3TRA2_TR1_TRACE_LO_DATA_REG]
static const uint64_t L3TRA2_TR1_TRACE_LO_DATA_REG = 0x200182a1ull;

static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA2_TR1_TRACE_LO_DATA_REG]
// eq/reg00014.H

//>> [L3TRA3_TR0_CONFIG_9]
static const uint64_t L3TRA3_TR0_CONFIG_9 = 0x200182c9ull;

static const uint32_t L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t L3TRA3_TR0_CONFIG_9_SPARE_LT = 37;
//<< [L3TRA3_TR0_CONFIG_9]
// eq/reg00014.H

//>> [L3TRA3_TR1_CONFIG_0]
static const uint64_t L3TRA3_TR1_CONFIG_0 = 0x200182e3ull;

static const uint32_t L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [L3TRA3_TR1_CONFIG_0]
// eq/reg00014.H

//>> [XSTOP2]
static const uint64_t XSTOP2 = 0x2003000dull;

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
// eq/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00014_unused.H"
#endif
#endif
