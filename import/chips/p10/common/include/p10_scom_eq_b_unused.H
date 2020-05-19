/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_b_unused.H $      */
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

#ifndef __p10_scom_eq_b_H_UNUSED__
#define __p10_scom_eq_b_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE = 0x2001833cull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM = 3;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN = 5;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
// eq/reg00011.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE = 0x20018321ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET = 1;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET = 3;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET = 4;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
// eq/reg00011.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY = 0x2001430bull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]
// eq/reg00011.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC = 0x2001430full;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]
// eq/reg00011.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES = 0x2001233aull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
// eq/reg00011.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA = 0x20012339ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE = 3;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST = 4;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN = 4;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE = 11;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST = 12;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN = 4;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
// eq/reg00011.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES = 0x20012335ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
// eq/reg00011.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC = 0x2001130full;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]
// eq/reg00011.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE = 0x20011301ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD = 0;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]
// eq/reg00011.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY = 0x20011309ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]
// eq/reg00011.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE = 0x20011327ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
// eq/reg00011.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE = 0x2001133cull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM = 3;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN = 5;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
// eq/reg00011.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE = 0x20011324ull;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
// eq/reg00011.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT = 0x20011328ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN = 6;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
// eq/reg00011.H

//>> [QMETRA0_TR0_CONFIG_1]
static const uint64_t QMETRA0_TR0_CONFIG_1 = 0x20018404ull;

static const uint32_t QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [QMETRA0_TR0_CONFIG_1]
// eq/reg00011.H

//>> [QMETRA0_TR1_TRACE_HI_DATA_REG]
static const uint64_t QMETRA0_TR1_TRACE_HI_DATA_REG = 0x20018440ull;

static const uint32_t QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [QMETRA0_TR1_TRACE_HI_DATA_REG]
// eq/reg00011.H

//>> [EPS_DBG_TRACE_MODE_REG_2]
static const uint64_t EPS_DBG_TRACE_MODE_REG_2 = 0x200183efull;

static const uint32_t EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE = 0;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN = 16;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE = 16;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR = 17;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH = 18;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE = 19;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE = 20;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON = 21;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK = 22;
static const uint32_t EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN = 2;
//<< [EPS_DBG_TRACE_MODE_REG_2]
// eq/reg00011.H

//>> [EPS_THERM_WSUB2_SKITTER_DATA2]
static const uint64_t EPS_THERM_WSUB2_SKITTER_DATA2 = 0x2005003bull;
//<< [EPS_THERM_WSUB2_SKITTER_DATA2]
// eq/reg00011.H

//>> [L3TRA0_TR1_CONFIG_1]
static const uint64_t L3TRA0_TR1_CONFIG_1 = 0x20018224ull;

static const uint32_t L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [L3TRA0_TR1_CONFIG_1]
// eq/reg00011.H

//>> [L3TRA1_TR0_TRACE_LO_DATA_REG]
static const uint64_t L3TRA1_TR0_TRACE_LO_DATA_REG = 0x20018241ull;

static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA1_TR0_TRACE_LO_DATA_REG]
// eq/reg00011.H

//>> [L3TRA2_TR0_CONFIG_0]
static const uint64_t L3TRA2_TR0_CONFIG_0 = 0x20018283ull;

static const uint32_t L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [L3TRA2_TR0_CONFIG_0]
// eq/reg00011.H

//>> [L3TRA2_TR1_TRACE_HI_DATA_REG]
static const uint64_t L3TRA2_TR1_TRACE_HI_DATA_REG = 0x200182a0ull;

static const uint32_t L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA2_TR1_TRACE_HI_DATA_REG]
// eq/reg00011.H

//>> [L3TRA2_TR1_CONFIG_9]
static const uint64_t L3TRA2_TR1_CONFIG_9 = 0x200182a9ull;

static const uint32_t L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t L3TRA2_TR1_CONFIG_9_SPARE_LT = 37;
//<< [L3TRA2_TR1_CONFIG_9]
// eq/reg00011.H

//>> [XSTOP4]
static const uint64_t XSTOP4 = 0x20030014ull;

static const uint32_t XSTOP4_ENABLE = 0;
static const uint32_t XSTOP4_WAIT_SNOPA = 1;
static const uint32_t XSTOP4_TRIGGER_OPCG_GO = 2;
static const uint32_t XSTOP4_WAIT_ALWAYS = 3;
static const uint32_t XSTOP4_REGION_PERV = 4;
static const uint32_t XSTOP4_REGION_UNIT1 = 5;
static const uint32_t XSTOP4_REGION_UNIT2 = 6;
static const uint32_t XSTOP4_REGION_UNIT3 = 7;
static const uint32_t XSTOP4_REGION_UNIT4 = 8;
static const uint32_t XSTOP4_REGION_UNIT5 = 9;
static const uint32_t XSTOP4_REGION_UNIT6 = 10;
static const uint32_t XSTOP4_REGION_UNIT7 = 11;
static const uint32_t XSTOP4_REGION_UNIT8 = 12;
static const uint32_t XSTOP4_REGION_UNIT9 = 13;
static const uint32_t XSTOP4_REGION_UNIT10 = 14;
static const uint32_t XSTOP4_REGION_UNIT11 = 15;
static const uint32_t XSTOP4_REGION_UNIT12 = 16;
static const uint32_t XSTOP4_REGION_UNIT13 = 17;
static const uint32_t XSTOP4_REGION_UNIT14 = 18;
static const uint32_t XSTOP4_WAIT_CYCLES = 48;
static const uint32_t XSTOP4_WAIT_CYCLES_LEN = 12;
//<< [XSTOP4]
// eq/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00011_unused.H"
#endif
#endif
