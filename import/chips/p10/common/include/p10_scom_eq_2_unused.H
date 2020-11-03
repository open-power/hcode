/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_2_unused.H $      */
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

#ifndef __p10_scom_eq_2_H_UNUSED__
#define __p10_scom_eq_2_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT = 0x20018318ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL = 1;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN = 7;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL = 8;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL = 9;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN = 7;
//<< [CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]
// eq/reg00002.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY = 0x20018309ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]
// eq/reg00002.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES = 0x2001833bull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
// eq/reg00002.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC = 0x2001432full;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
// eq/reg00002.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET = 0x20014325ull;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]
// eq/reg00002.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES = 0x20014338ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE = 10;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE = 11;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE = 14;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE = 15;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR = 18;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR = 19;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE = 20;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE = 21;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE = 22;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE = 23;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE = 26;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED = 27;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE = 31;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
// eq/reg00002.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE = 0x2001232bull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
// eq/reg00002.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE = 0x20012332ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
// eq/reg00002.H

//>> [CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY = 0x20011316ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1 = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1_LEN = 8;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2 = 8;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2_LEN = 8;
//<< [CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]
// eq/reg00002.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE = 0x20011302ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD = 1;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]
// eq/reg00002.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE = 0x20011312ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL = 1;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
// eq/reg00002.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET = 0x20011325ull;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]
// eq/reg00002.H

//>> [L3TRA0_TR1_CONFIG_5]
static const uint64_t L3TRA0_TR1_CONFIG_5 = 0x20018228ull;

static const uint32_t L3TRA0_TR1_CONFIG_5_C = 0;
static const uint32_t L3TRA0_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA0_TR1_CONFIG_5_D = 24;
static const uint32_t L3TRA0_TR1_CONFIG_5_D_LEN = 24;
//<< [L3TRA0_TR1_CONFIG_5]
// eq/reg00002.H

//>> [L3TRA0_TR1_TRACE_HI_DATA_REG]
static const uint64_t L3TRA0_TR1_TRACE_HI_DATA_REG = 0x20018220ull;

static const uint32_t L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA0_TR1_TRACE_HI_DATA_REG]
// eq/reg00002.H

//>> [L3TRA1_TR0_CONFIG_3]
static const uint64_t L3TRA1_TR0_CONFIG_3 = 0x20018246ull;

static const uint32_t L3TRA1_TR0_CONFIG_3_C = 0;
static const uint32_t L3TRA1_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA1_TR0_CONFIG_3_D = 24;
static const uint32_t L3TRA1_TR0_CONFIG_3_D_LEN = 24;
//<< [L3TRA1_TR0_CONFIG_3]
// eq/reg00002.H

//>> [L3TRA2_TR0_CONFIG_4]
static const uint64_t L3TRA2_TR0_CONFIG_4 = 0x20018287ull;

static const uint32_t L3TRA2_TR0_CONFIG_4_A = 0;
static const uint32_t L3TRA2_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA2_TR0_CONFIG_4_B = 24;
static const uint32_t L3TRA2_TR0_CONFIG_4_B_LEN = 24;
//<< [L3TRA2_TR0_CONFIG_4]
// eq/reg00002.H

//>> [L3TRA3_TR0_TRACE_LO_DATA_REG]
static const uint64_t L3TRA3_TR0_TRACE_LO_DATA_REG = 0x200182c1ull;

static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA3_TR0_TRACE_LO_DATA_REG]
// eq/reg00002.H

//>> [L3TRA3_TR1_CONFIG_2]
static const uint64_t L3TRA3_TR1_CONFIG_2 = 0x200182e5ull;

static const uint32_t L3TRA3_TR1_CONFIG_2_A = 0;
static const uint32_t L3TRA3_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA3_TR1_CONFIG_2_B = 24;
static const uint32_t L3TRA3_TR1_CONFIG_2_B_LEN = 24;
//<< [L3TRA3_TR1_CONFIG_2]
// eq/reg00002.H

//>> [QMETRA0_TR0_CONFIG_5]
static const uint64_t QMETRA0_TR0_CONFIG_5 = 0x20018408ull;

static const uint32_t QMETRA0_TR0_CONFIG_5_C = 0;
static const uint32_t QMETRA0_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t QMETRA0_TR0_CONFIG_5_D = 24;
static const uint32_t QMETRA0_TR0_CONFIG_5_D_LEN = 24;
//<< [QMETRA0_TR0_CONFIG_5]
// eq/reg00002.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00002_unused.H"
#endif
#endif
