/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_5_unused.H $      */
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

#ifndef __p10_scom_eq_5_H_UNUSED__
#define __p10_scom_eq_5_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE = 0x20018312ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL = 1;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
// eq/reg00005.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE = 0x20018300ull;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]
// eq/reg00005.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE = 0x20018326ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
// eq/reg00005.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE = 0x2001832aull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
// eq/reg00005.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES = 0x20018338ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE = 10;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE = 11;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE = 14;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE = 15;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR = 18;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR = 19;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE = 20;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE = 21;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE = 22;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE = 23;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE = 26;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED = 27;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE = 31;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
// eq/reg00005.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE = 0x20014331ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE = 0;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE = 1;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
// eq/reg00005.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG = 0x2001230cull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR = 1;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR = 2;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE = 3;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]
// eq/reg00005.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC = 0x2001232eull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
// eq/reg00005.H

//>> [QMETRA0_TR1_CONFIG_2]
static const uint64_t QMETRA0_TR1_CONFIG_2 = 0x20018445ull;

static const uint32_t QMETRA0_TR1_CONFIG_2_A = 0;
static const uint32_t QMETRA0_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t QMETRA0_TR1_CONFIG_2_B = 24;
static const uint32_t QMETRA0_TR1_CONFIG_2_B_LEN = 24;
//<< [QMETRA0_TR1_CONFIG_2]
// eq/reg00005.H

//>> [EPS_THERM_WSUB_SKITTER_DATA0]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA0 = 0x20050019ull;
//<< [EPS_THERM_WSUB_SKITTER_DATA0]
// eq/reg00005.H

//>> [EPS_THERM_WSUB_SKITTER_MODE_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_MODE_REG = 0x20050010ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE = 0;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS = 1;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL = 4;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN = 2;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL = 6;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN = 2;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS = 8;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN = 2;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER = 44;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT = 45;
//<< [EPS_THERM_WSUB_SKITTER_MODE_REG]
// eq/reg00005.H

//>> [L3TRA0_TR0_CONFIG_2]
static const uint64_t L3TRA0_TR0_CONFIG_2 = 0x20018205ull;

static const uint32_t L3TRA0_TR0_CONFIG_2_A = 0;
static const uint32_t L3TRA0_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA0_TR0_CONFIG_2_B = 24;
static const uint32_t L3TRA0_TR0_CONFIG_2_B_LEN = 24;
//<< [L3TRA0_TR0_CONFIG_2]
// eq/reg00005.H

//>> [L3TRA1_TR1_CONFIG_4]
static const uint64_t L3TRA1_TR1_CONFIG_4 = 0x20018267ull;

static const uint32_t L3TRA1_TR1_CONFIG_4_A = 0;
static const uint32_t L3TRA1_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA1_TR1_CONFIG_4_B = 24;
static const uint32_t L3TRA1_TR1_CONFIG_4_B_LEN = 24;
//<< [L3TRA1_TR1_CONFIG_4]
// eq/reg00005.H

//>> [L3TRA2_TR1_CONFIG_3]
static const uint64_t L3TRA2_TR1_CONFIG_3 = 0x200182a6ull;

static const uint32_t L3TRA2_TR1_CONFIG_3_C = 0;
static const uint32_t L3TRA2_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA2_TR1_CONFIG_3_D = 24;
static const uint32_t L3TRA2_TR1_CONFIG_3_D_LEN = 24;
//<< [L3TRA2_TR1_CONFIG_3]
// eq/reg00005.H

//>> [L3TRA3_TR0_CONFIG_5]
static const uint64_t L3TRA3_TR0_CONFIG_5 = 0x200182c8ull;

static const uint32_t L3TRA3_TR0_CONFIG_5_C = 0;
static const uint32_t L3TRA3_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA3_TR0_CONFIG_5_D = 24;
static const uint32_t L3TRA3_TR0_CONFIG_5_D_LEN = 24;
//<< [L3TRA3_TR0_CONFIG_5]
// eq/reg00005.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00005_unused.H"
#endif
#endif
