/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_8_unused.H $      */
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

#ifndef __p10_scom_eq_8_H_UNUSED__
#define __p10_scom_eq_8_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY = 0x20018316ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1 = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1_LEN = 8;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2 = 8;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2_LEN = 8;
//<< [CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]
// eq/reg00008.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE = 0x20018302ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD = 1;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]
// eq/reg00008.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE = 0x20018333ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
// eq/reg00008.H

//>> [CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT = 0x20014319ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN = 8;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q = 9;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN = 7;
// ERROR Duplicate Dial         static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q = 9;
// ERROR Duplicate Dial         static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN = 7;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT = 17;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN = 7;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE = 25;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN = 7;
//<< [CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]
// eq/reg00008.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY = 0x2001430aull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]
// eq/reg00008.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_DEC]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_DEC = 0x20014310ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN = 8;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_DEC]
// eq/reg00008.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC = 0x2001430eull;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]
// eq/reg00008.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE = 0x20014303ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 = 3;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]
// eq/reg00008.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT = 0x2001431aull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK = 4;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR = 5;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN = 6;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE = 7;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN = 2;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR = 9;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE = 10;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE = 11;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN = 5;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT = 16;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN = 16;
//<< [CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]
// eq/reg00008.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA = 0x20014339ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE = 3;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST = 4;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN = 4;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE = 11;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST = 12;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN = 4;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
// eq/reg00008.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE = 0x20014321ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET = 1;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET = 3;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET = 4;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
// eq/reg00008.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE = 0x20014323ull;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
// eq/reg00008.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY = 0x2001230bull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]
// eq/reg00008.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC = 0x2001230dull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN = 2;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]
// eq/reg00008.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES = 0x20012336ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE = 10;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN = 6;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE = 26;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN = 6;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
// eq/reg00008.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE = 0x20012323ull;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
// eq/reg00008.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY = 0x2001130aull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]
// eq/reg00008.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC = 0x2001130eull;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]
// eq/reg00008.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET = 0x20011305ull;
//<< [CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]
// eq/reg00008.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES = 0x20011337ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN = 4;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 = 4;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN = 4;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 = 8;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN = 4;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 = 12;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN = 4;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 = 16;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN = 4;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
// eq/reg00008.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE = 0x20011322ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET = 1;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET = 2;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET = 3;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET = 4;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
// eq/reg00008.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE = 0x2001132aull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
// eq/reg00008.H

//>> [ASSIST_INTERRUPT_REG]
static const uint64_t ASSIST_INTERRUPT_REG = 0x200f0011ull;

static const uint32_t ASSIST_INTERRUPT_REG_ATTN = 0;
static const uint32_t ASSIST_INTERRUPT_REG_RECOV = 1;
static const uint32_t ASSIST_INTERRUPT_REG_XSTOP = 2;
static const uint32_t ASSIST_INTERRUPT_REG_LXSTOP = 3;
static const uint32_t ASSIST_INTERRUPT_REG_TYPE4 = 4;
//<< [ASSIST_INTERRUPT_REG]
// eq/reg00008.H

//>> [EDRAM_STATUS]
static const uint64_t EDRAM_STATUS = 0x200f0029ull;

static const uint32_t EDRAM_STATUS_EDRAM_STAT = 0;
static const uint32_t EDRAM_STATUS_EDRAM_STAT_LEN = 4;
//<< [EDRAM_STATUS]
// eq/reg00008.H

//>> [EPS_DBG_TRACE_REG_0]
static const uint64_t EPS_DBG_TRACE_REG_0 = 0x200183edull;

static const uint32_t EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE = 0;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE = 1;
static const uint32_t EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE = 3;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE = 4;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE = 5;
static const uint32_t EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE = 6;
static const uint32_t EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE = 7;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL = 8;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL = 10;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL = 12;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL = 14;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL = 16;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL = 18;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP = 32;
static const uint32_t EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE = 33;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL = 34;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN = 5;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL = 39;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN = 5;
static const uint32_t EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL = 44;
static const uint32_t EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_DBG_ARM_SEL = 46;
static const uint32_t EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN = 4;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL = 50;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN = 4;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL = 54;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN = 4;
//<< [EPS_DBG_TRACE_REG_0]
// eq/reg00008.H

//>> [L3TRA1_TR0_CONFIG_0]
static const uint64_t L3TRA1_TR0_CONFIG_0 = 0x20018243ull;

static const uint32_t L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [L3TRA1_TR0_CONFIG_0]
// eq/reg00008.H

//>> [L3TRA1_TR1_CONFIG_9]
static const uint64_t L3TRA1_TR1_CONFIG_9 = 0x20018269ull;

static const uint32_t L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t L3TRA1_TR1_CONFIG_9_SPARE_LT = 37;
//<< [L3TRA1_TR1_CONFIG_9]
// eq/reg00008.H

//>> [L3TRA3_TR1_CONFIG_1]
static const uint64_t L3TRA3_TR1_CONFIG_1 = 0x200182e4ull;

static const uint32_t L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [L3TRA3_TR1_CONFIG_1]
// eq/reg00008.H

//>> [SCAN_CAPTUREDR_LONG]
static const uint64_t SCAN_CAPTUREDR_LONG = 0x2003d000ull;

static const uint32_t SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG = 0;
static const uint32_t SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN = 32;
//<< [SCAN_CAPTUREDR_LONG]
// eq/reg00008.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00008_unused.H"
#endif
#endif
