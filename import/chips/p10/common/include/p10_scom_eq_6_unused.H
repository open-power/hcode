/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_6_unused.H $      */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __p10_scom_eq_6_H_UNUSED__
#define __p10_scom_eq_6_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE = 0x20018311ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 = 4;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
// eq/reg00006.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT = 0x20018329ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN = 3;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
// eq/reg00006.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE = 0x2001832bull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
// eq/reg00006.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE = 0x20018332ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
// eq/reg00006.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC = 0x2001832eull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
// eq/reg00006.H

//>> [CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG = 0x2001431bull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE = 2;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN = 6;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT = 13;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD = 14;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START = 15;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP = 16;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP = 17;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC = 18;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC = 19;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN = 20;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE = 21;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP = 22;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL = 23;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH = 24;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR = 25;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK = 26;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD = 27;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST = 28;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT = 29;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP = 30;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY = 31;
//<< [CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]
// eq/reg00006.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC = 0x2001430dull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN = 2;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]
// eq/reg00006.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE = 0x20014304ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT = 1;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN = 16;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
// eq/reg00006.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE = 0x20014326ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
// eq/reg00006.H

//>> [CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG = 0x2001231bull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE = 2;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN = 6;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT = 13;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD = 14;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START = 15;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP = 16;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP = 17;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC = 18;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC = 19;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN = 20;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE = 21;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP = 22;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL = 23;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH = 24;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR = 25;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK = 26;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD = 27;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST = 28;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT = 29;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP = 30;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY = 31;
//<< [CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]
// eq/reg00006.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE = 0x20012303ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 = 3;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]
// eq/reg00006.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT = 0x2001231aull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK = 4;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR = 5;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN = 6;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE = 7;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN = 2;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR = 9;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE = 10;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE = 11;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN = 5;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT = 16;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN = 16;
//<< [CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]
// eq/reg00006.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE = 0x20011331ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE = 1;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
// eq/reg00006.H

//>> [EPS_DBG_INST1_COND_REG_3]
static const uint64_t EPS_DBG_INST1_COND_REG_3 = 0x200183e3ull;
//<< [EPS_DBG_INST1_COND_REG_3]
// eq/reg00006.H

//>> [EPS_DBG_INST2_COND_REG_3]
static const uint64_t EPS_DBG_INST2_COND_REG_3 = 0x200183e6ull;
//<< [EPS_DBG_INST2_COND_REG_3]
// eq/reg00006.H

//>> [EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]
static const uint64_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ = 0x2005001cull;

static const uint32_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE = 0;
static const uint32_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE_LEN = 44;
static const uint32_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR = 44;
//<< [EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]
// eq/reg00006.H

//>> [L3TRA0_TR0_CONFIG_5]
static const uint64_t L3TRA0_TR0_CONFIG_5 = 0x20018208ull;

static const uint32_t L3TRA0_TR0_CONFIG_5_C = 0;
static const uint32_t L3TRA0_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA0_TR0_CONFIG_5_D = 24;
static const uint32_t L3TRA0_TR0_CONFIG_5_D_LEN = 24;
//<< [L3TRA0_TR0_CONFIG_5]
// eq/reg00006.H

//>> [L3TRA1_TR1_CONFIG_3]
static const uint64_t L3TRA1_TR1_CONFIG_3 = 0x20018266ull;

static const uint32_t L3TRA1_TR1_CONFIG_3_C = 0;
static const uint32_t L3TRA1_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA1_TR1_CONFIG_3_D = 24;
static const uint32_t L3TRA1_TR1_CONFIG_3_D_LEN = 24;
//<< [L3TRA1_TR1_CONFIG_3]
// eq/reg00006.H

//>> [L3TRA1_TR1_TRACE_HI_DATA_REG]
static const uint64_t L3TRA1_TR1_TRACE_HI_DATA_REG = 0x20018260ull;

static const uint32_t L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA1_TR1_TRACE_HI_DATA_REG]
// eq/reg00006.H

//>> [L3TRA2_TR0_TRACE_LO_DATA_REG]
static const uint64_t L3TRA2_TR0_TRACE_LO_DATA_REG = 0x20018281ull;

static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA2_TR0_TRACE_LO_DATA_REG]
// eq/reg00006.H

//>> [L3TRA2_TR1_CONFIG_4]
static const uint64_t L3TRA2_TR1_CONFIG_4 = 0x200182a7ull;

static const uint32_t L3TRA2_TR1_CONFIG_4_A = 0;
static const uint32_t L3TRA2_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA2_TR1_CONFIG_4_B = 24;
static const uint32_t L3TRA2_TR1_CONFIG_4_B_LEN = 24;
//<< [L3TRA2_TR1_CONFIG_4]
// eq/reg00006.H

//>> [L3TRA3_TR0_CONFIG_2]
static const uint64_t L3TRA3_TR0_CONFIG_2 = 0x200182c5ull;

static const uint32_t L3TRA3_TR0_CONFIG_2_A = 0;
static const uint32_t L3TRA3_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA3_TR0_CONFIG_2_B = 24;
static const uint32_t L3TRA3_TR0_CONFIG_2_B_LEN = 24;
//<< [L3TRA3_TR0_CONFIG_2]
// eq/reg00006.H

//>> [LOCAL_XSTOP_UNMASKED]
static const uint64_t LOCAL_XSTOP_UNMASKED = 0x20040013ull;

static const uint32_t LOCAL_XSTOP_UNMASKED_IN = 1;
static const uint32_t LOCAL_XSTOP_UNMASKED_IN_LEN = 15;
//<< [LOCAL_XSTOP_UNMASKED]
// eq/reg00006.H

//>> [QMETRA0_TR0_TRACE_LO_DATA_REG]
static const uint64_t QMETRA0_TR0_TRACE_LO_DATA_REG = 0x20018401ull;

static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t QMETRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [QMETRA0_TR0_TRACE_LO_DATA_REG]
// eq/reg00006.H

//>> [QMETRA0_TR1_CONFIG_5]
static const uint64_t QMETRA0_TR1_CONFIG_5 = 0x20018448ull;

static const uint32_t QMETRA0_TR1_CONFIG_5_C = 0;
static const uint32_t QMETRA0_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t QMETRA0_TR1_CONFIG_5_D = 24;
static const uint32_t QMETRA0_TR1_CONFIG_5_D_LEN = 24;
//<< [QMETRA0_TR1_CONFIG_5]
// eq/reg00006.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00006_unused.H"
#endif
#endif
