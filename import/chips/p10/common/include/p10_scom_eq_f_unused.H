/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_f_unused.H $      */
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

#ifndef __p10_scom_eq_f_H_UNUSED__
#define __p10_scom_eq_f_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET = 0x20018308ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN = 7;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]
// eq/reg00015.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_DEC]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_DEC = 0x20018310ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN = 8;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_DEC]
// eq/reg00015.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE = 0x20018304ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT = 1;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN = 16;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
// eq/reg00015.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES = 0x20018337ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN = 4;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 = 4;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN = 4;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 = 8;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN = 4;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 = 12;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN = 4;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 = 16;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN = 4;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
// eq/reg00015.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE = 0x20014300ull;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]
// eq/reg00015.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS = 0x2001432cull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
// eq/reg00015.H

//>> [CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT = 0x20012319ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN = 8;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q = 9;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN = 7;
// ERROR Duplicate Dial         static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q = 9;
// ERROR Duplicate Dial         static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN = 7;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT = 17;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN = 7;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE = 25;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN = 7;
//<< [CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]
// eq/reg00015.H

//>> [CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE = 0x20012306ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN = 8;
//<< [CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]
// eq/reg00015.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE = 0x20011320ull;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
// eq/reg00015.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC = 0x2001132full;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
// eq/reg00015.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2 = 0x20040082ull;

static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR = 0;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR = 1;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR = 2;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR = 3;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR = 4;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR = 5;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR = 6;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR = 7;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 = 12;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 = 13;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 = 14;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 = 15;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 = 16;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 = 17;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 = 18;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 = 19;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 = 20;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 = 21;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 = 22;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 = 23;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 = 24;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 = 25;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 = 26;
//<< [EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
// eq/reg00015.H

//>> [EPS_THERM_WSUB2_DTS_RESULT2]
static const uint64_t EPS_THERM_WSUB2_DTS_RESULT2 = 0x20050022ull;

static const uint32_t EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT = 0;
static const uint32_t EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT_LEN = 16;
//<< [EPS_THERM_WSUB2_DTS_RESULT2]
// eq/reg00015.H

//>> [L3TRA0_TR0_CONFIG_1]
static const uint64_t L3TRA0_TR0_CONFIG_1 = 0x20018204ull;

static const uint32_t L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [L3TRA0_TR0_CONFIG_1]
// eq/reg00015.H

//>> [L3TRA0_TR0_TRACE_LO_DATA_REG]
static const uint64_t L3TRA0_TR0_TRACE_LO_DATA_REG = 0x20018201ull;

static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA0_TR0_TRACE_LO_DATA_REG]
// eq/reg00015.H

//>> [L3TRA2_TR0_CONFIG_9]
static const uint64_t L3TRA2_TR0_CONFIG_9 = 0x20018289ull;

static const uint32_t L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t L3TRA2_TR0_CONFIG_9_SPARE_LT = 37;
//<< [L3TRA2_TR0_CONFIG_9]
// eq/reg00015.H

//>> [L3TRA2_TR1_CONFIG_0]
static const uint64_t L3TRA2_TR1_CONFIG_0 = 0x200182a3ull;

static const uint32_t L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [L3TRA2_TR1_CONFIG_0]
// eq/reg00015.H

//>> [L3TRA3_TR1_TRACE_HI_DATA_REG]
static const uint64_t L3TRA3_TR1_TRACE_HI_DATA_REG = 0x200182e0ull;

static const uint32_t L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA3_TR1_TRACE_HI_DATA_REG]
// eq/reg00015.H

//>> [MULTICAST_GROUP_3]
static const uint64_t MULTICAST_GROUP_3 = 0x200f0003ull;

static const uint32_t MULTICAST_GROUP_3_MULTICAST3_GROUP = 3;
static const uint32_t MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN = 3;
//<< [MULTICAST_GROUP_3]
// eq/reg00015.H

//>> [PROTECT_MODE_REG]
static const uint64_t PROTECT_MODE_REG = 0x200f03feull;

static const uint32_t PROTECT_MODE_REG_READ_PROTECT_ENABLE = 0;
static const uint32_t PROTECT_MODE_REG_WRITE_PROTECT_ENABLE = 1;
//<< [PROTECT_MODE_REG]
// eq/reg00015.H

//>> [QMETRA0_TR1_CONFIG_1]
static const uint64_t QMETRA0_TR1_CONFIG_1 = 0x20018444ull;

static const uint32_t QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [QMETRA0_TR1_CONFIG_1]
// eq/reg00015.H

//>> [P10_20_QME_DB3]
static const uint64_t QME_DB3 = 0x200e010cull; // p10:20,

static const uint32_t P10_20_QME_DB3_MESSAGE_NUMBER = 0;
static const uint32_t P10_20_QME_DB3_MESSAGE_NUMBER_LEN = 8;
//<< [P10_20_QME_DB3]
// eq/reg00015.H

//>> [VITAL_SCAN_OUT]
static const uint64_t VITAL_SCAN_OUT = 0x200f0017ull;
//<< [VITAL_SCAN_OUT]
// eq/reg00015.H

//>> [XSTOP_UNMASKED]
static const uint64_t XSTOP_UNMASKED = 0x20040010ull;

static const uint32_t XSTOP_UNMASKED_IN = 1;
static const uint32_t XSTOP_UNMASKED_IN_LEN = 53;
//<< [XSTOP_UNMASKED]
// eq/reg00015.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00015_unused.H"
#endif
#endif
