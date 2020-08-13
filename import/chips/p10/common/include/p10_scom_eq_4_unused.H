/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_4_unused.H $      */
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

#ifndef __p10_scom_eq_4_H_UNUSED__
#define __p10_scom_eq_4_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_SET_HOLD_MODE]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_HOLD_MODE = 0x20018301ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD = 0;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_HOLD_MODE]
// eq/reg00004.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SOFT_RESET]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SOFT_RESET = 0x20018305ull;
//<< [CLK_ADJ_00_DCADJ_WRAP_SOFT_RESET]
// eq/reg00004.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES = 0x2001833aull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
// eq/reg00004.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES = 0x20018335ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
// eq/reg00004.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE = 0x20018331ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE = 1;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
// eq/reg00004.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT = 0x20018328ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN = 6;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
// eq/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE = 0x2001433cull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM = 3;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN = 5;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
// eq/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE = 0x2001432bull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
// eq/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS = 0x2001432dull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
// eq/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE = 0x20014324ull;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
// eq/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE = 0x20014333ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
// eq/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE = 0x20014332ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
// eq/reg00004.H

//>> [CLK_ADJ_02_DCADJ_WRAP_MEASURE_HISTORY]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_MEASURE_HISTORY = 0x20012316ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MEASURE_HISTORY_1 = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MEASURE_HISTORY_1_LEN = 8;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MEASURE_HISTORY_2 = 8;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_MEASURE_HISTORY_2_LEN = 8;
//<< [CLK_ADJ_02_DCADJ_WRAP_MEASURE_HISTORY]
// eq/reg00004.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_ADJUST_MODE = 0x20012302ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD = 1;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_ADJUST_MODE]
// eq/reg00004.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE = 0x2001233cull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM = 3;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN = 5;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
// eq/reg00004.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_SINGLE_STEP_MODE = 0x20011304ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT = 1;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN = 16;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
// eq/reg00004.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC = 0x2001132eull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
// eq/reg00004.H

//>> [QMETRA0_TR0_CONFIG_4]
static const uint64_t QMETRA0_TR0_CONFIG_4 = 0x20018407ull;

static const uint32_t QMETRA0_TR0_CONFIG_4_A = 0;
static const uint32_t QMETRA0_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t QMETRA0_TR0_CONFIG_4_B = 24;
static const uint32_t QMETRA0_TR0_CONFIG_4_B_LEN = 24;
//<< [QMETRA0_TR0_CONFIG_4]
// eq/reg00004.H

//>> [REGION_CCFLUSH_STATUS]
static const uint64_t REGION_CCFLUSH_STATUS = 0x20030016ull;

static const uint32_t REGION_CCFLUSH_STATUS_REGION_CCFLUSH = 4;
static const uint32_t REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN = 15;
//<< [REGION_CCFLUSH_STATUS]
// eq/reg00004.H

//>> [EPS_THERM_WSUB_INJECT_REG]
static const uint64_t EPS_THERM_WSUB_INJECT_REG = 0x20050011ull;

static const uint32_t EPS_THERM_WSUB_INJECT_REG_TRIP = 0;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_TRIP_LEN = 2;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_MODE = 2;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_MODE_LEN = 2;
//<< [EPS_THERM_WSUB_INJECT_REG]
// eq/reg00004.H

//>> [EPS_THERM_WSUB2_SKITTER_CLKSRC_REG]
static const uint64_t EPS_THERM_WSUB2_SKITTER_CLKSRC_REG = 0x20050036ull;

static const uint32_t EPS_THERM_WSUB2_SKITTER_CLKSRC_REG_CLKSRC = 0;
static const uint32_t EPS_THERM_WSUB2_SKITTER_CLKSRC_REG_CLKSRC_LEN = 3;
static const uint32_t EPS_THERM_WSUB2_SKITTER_CLKSRC_REG_DELAY_SELECT = 36;
static const uint32_t EPS_THERM_WSUB2_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN = 2;
//<< [EPS_THERM_WSUB2_SKITTER_CLKSRC_REG]
// eq/reg00004.H

//>> [L3TRA0_TR1_CONFIG_4]
static const uint64_t L3TRA0_TR1_CONFIG_4 = 0x20018227ull;

static const uint32_t L3TRA0_TR1_CONFIG_4_A = 0;
static const uint32_t L3TRA0_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA0_TR1_CONFIG_4_B = 24;
static const uint32_t L3TRA0_TR1_CONFIG_4_B_LEN = 24;
//<< [L3TRA0_TR1_CONFIG_4]
// eq/reg00004.H

//>> [L3TRA1_TR0_CONFIG_2]
static const uint64_t L3TRA1_TR0_CONFIG_2 = 0x20018245ull;

static const uint32_t L3TRA1_TR0_CONFIG_2_A = 0;
static const uint32_t L3TRA1_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA1_TR0_CONFIG_2_B = 24;
static const uint32_t L3TRA1_TR0_CONFIG_2_B_LEN = 24;
//<< [L3TRA1_TR0_CONFIG_2]
// eq/reg00004.H

//>> [L3TRA2_TR0_CONFIG_5]
static const uint64_t L3TRA2_TR0_CONFIG_5 = 0x20018288ull;

static const uint32_t L3TRA2_TR0_CONFIG_5_C = 0;
static const uint32_t L3TRA2_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA2_TR0_CONFIG_5_D = 24;
static const uint32_t L3TRA2_TR0_CONFIG_5_D_LEN = 24;
//<< [L3TRA2_TR0_CONFIG_5]
// eq/reg00004.H

//>> [L3TRA3_TR1_CONFIG_3]
static const uint64_t L3TRA3_TR1_CONFIG_3 = 0x200182e6ull;

static const uint32_t L3TRA3_TR1_CONFIG_3_C = 0;
static const uint32_t L3TRA3_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA3_TR1_CONFIG_3_D = 24;
static const uint32_t L3TRA3_TR1_CONFIG_3_D_LEN = 24;
//<< [L3TRA3_TR1_CONFIG_3]
// eq/reg00004.H

//>> [PCB_OPCG_GO]
static const uint64_t PCB_OPCG_GO = 0x20030020ull;

static const uint32_t PCB_OPCG_GO_PCB_OPCGGO = 0;
//<< [PCB_OPCG_GO]
// eq/reg00004.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00004_unused.H"
#endif
#endif
