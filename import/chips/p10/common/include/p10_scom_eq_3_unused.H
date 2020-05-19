/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_3_unused.H $      */
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

#ifndef __p10_scom_eq_3_H_UNUSED__
#define __p10_scom_eq_3_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC = 0x2001830full;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]
// eq/reg00003.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC = 0x2001830dull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN = 2;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]
// eq/reg00003.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE = 0x20018324ull;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
// eq/reg00003.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES = 0x2001433bull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
// eq/reg00003.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES = 0x2001433aull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
// eq/reg00003.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES = 0x20014335ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
// eq/reg00003.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC = 0x2001230full;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]
// eq/reg00003.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY = 0x20012309ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]
// eq/reg00003.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE = 0x20012326ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
// eq/reg00003.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE = 0x2001232aull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
// eq/reg00003.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE = 0x20011303ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 = 3;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]
// eq/reg00003.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT = 0x2001131aull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK = 4;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR = 5;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN = 6;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE = 7;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN = 2;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR = 9;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE = 10;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE = 11;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN = 5;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT = 16;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN = 16;
//<< [CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]
// eq/reg00003.H

//>> [QMETRA0_TR0_TRACE_HI_DATA_REG]
static const uint64_t QMETRA0_TR0_TRACE_HI_DATA_REG = 0x20018400ull;

static const uint32_t QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [QMETRA0_TR0_TRACE_HI_DATA_REG]
// eq/reg00003.H

//>> [QMETRA0_TR1_CONFIG_3]
static const uint64_t QMETRA0_TR1_CONFIG_3 = 0x20018446ull;

static const uint32_t QMETRA0_TR1_CONFIG_3_C = 0;
static const uint32_t QMETRA0_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t QMETRA0_TR1_CONFIG_3_D = 24;
static const uint32_t QMETRA0_TR1_CONFIG_3_D_LEN = 24;
//<< [QMETRA0_TR1_CONFIG_3]
// eq/reg00003.H

//>> [EPS_FIR_ANY_LOCAL_ERR_MASK]
static const uint64_t EPS_FIR_ANY_LOCAL_ERR_MASK = 0x20040080ull;

static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB = 0;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB = 1;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB = 2;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB = 3;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB = 4;
//<< [EPS_FIR_ANY_LOCAL_ERR_MASK]
// eq/reg00003.H

//>> [EPS_THERM_WSUB_SKITTER_DATA1]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA1 = 0x2005001aull;
//<< [EPS_THERM_WSUB_SKITTER_DATA1]
// eq/reg00003.H

//>> [EPS_THERM_WSUB2_INJECT_REG]
static const uint64_t EPS_THERM_WSUB2_INJECT_REG = 0x20050031ull;

static const uint32_t EPS_THERM_WSUB2_INJECT_REG_TRIP = 0;
static const uint32_t EPS_THERM_WSUB2_INJECT_REG_TRIP_LEN = 2;
static const uint32_t EPS_THERM_WSUB2_INJECT_REG_MODE = 2;
static const uint32_t EPS_THERM_WSUB2_INJECT_REG_MODE_LEN = 2;
//<< [EPS_THERM_WSUB2_INJECT_REG]
// eq/reg00003.H

//>> [L3TRA0_TR0_CONFIG_3]
static const uint64_t L3TRA0_TR0_CONFIG_3 = 0x20018206ull;

static const uint32_t L3TRA0_TR0_CONFIG_3_C = 0;
static const uint32_t L3TRA0_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA0_TR0_CONFIG_3_D = 24;
static const uint32_t L3TRA0_TR0_CONFIG_3_D_LEN = 24;
//<< [L3TRA0_TR0_CONFIG_3]
// eq/reg00003.H

//>> [L3TRA1_TR1_TRACE_LO_DATA_REG]
static const uint64_t L3TRA1_TR1_TRACE_LO_DATA_REG = 0x20018261ull;

static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA1_TR1_TRACE_LO_DATA_REG]
// eq/reg00003.H

//>> [L3TRA1_TR1_CONFIG_5]
static const uint64_t L3TRA1_TR1_CONFIG_5 = 0x20018268ull;

static const uint32_t L3TRA1_TR1_CONFIG_5_C = 0;
static const uint32_t L3TRA1_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA1_TR1_CONFIG_5_D = 24;
static const uint32_t L3TRA1_TR1_CONFIG_5_D_LEN = 24;
//<< [L3TRA1_TR1_CONFIG_5]
// eq/reg00003.H

//>> [L3TRA2_TR0_TRACE_HI_DATA_REG]
static const uint64_t L3TRA2_TR0_TRACE_HI_DATA_REG = 0x20018280ull;

static const uint32_t L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA2_TR0_TRACE_HI_DATA_REG]
// eq/reg00003.H

//>> [L3TRA2_TR0_CONFIG]
static const uint64_t L3TRA2_TR0_CONFIG = 0x20018282ull;

static const uint32_t L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t L3TRA2_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t L3TRA2_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [L3TRA2_TR0_CONFIG]
// eq/reg00003.H

//>> [L3TRA2_TR1_CONFIG_2]
static const uint64_t L3TRA2_TR1_CONFIG_2 = 0x200182a5ull;

static const uint32_t L3TRA2_TR1_CONFIG_2_A = 0;
static const uint32_t L3TRA2_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA2_TR1_CONFIG_2_B = 24;
static const uint32_t L3TRA2_TR1_CONFIG_2_B_LEN = 24;
//<< [L3TRA2_TR1_CONFIG_2]
// eq/reg00003.H

//>> [L3TRA3_TR0_CONFIG_4]
static const uint64_t L3TRA3_TR0_CONFIG_4 = 0x200182c7ull;

static const uint32_t L3TRA3_TR0_CONFIG_4_A = 0;
static const uint32_t L3TRA3_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA3_TR0_CONFIG_4_B = 24;
static const uint32_t L3TRA3_TR0_CONFIG_4_B_LEN = 24;
//<< [L3TRA3_TR0_CONFIG_4]
// eq/reg00003.H

//>> [L3TRA3_TR1_CONFIG]
static const uint64_t L3TRA3_TR1_CONFIG = 0x200182e2ull;

static const uint32_t L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t L3TRA3_TR1_CONFIG_BANK_MODE = 10;
static const uint32_t L3TRA3_TR1_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [L3TRA3_TR1_CONFIG]
// eq/reg00003.H

//>> [LOCAL_XSTOP]
static const uint64_t LOCAL_XSTOP = 0x20040003ull;

static const uint32_t LOCAL_XSTOP_ANY_LOCAL_XSTOP = 0;
static const uint32_t LOCAL_XSTOP_RESERVED1L = 1;
static const uint32_t LOCAL_XSTOP_RESERVED2L = 2;
static const uint32_t LOCAL_XSTOP_RESERVED3L = 3;
static const uint32_t LOCAL_XSTOP_PERV = 4;
static const uint32_t LOCAL_XSTOP_IN05 = 5;
static const uint32_t LOCAL_XSTOP_IN06 = 6;
static const uint32_t LOCAL_XSTOP_IN07 = 7;
static const uint32_t LOCAL_XSTOP_IN08 = 8;
static const uint32_t LOCAL_XSTOP_IN09 = 9;
static const uint32_t LOCAL_XSTOP_IN10 = 10;
static const uint32_t LOCAL_XSTOP_IN11 = 11;
static const uint32_t LOCAL_XSTOP_IN12 = 12;
static const uint32_t LOCAL_XSTOP_IN13 = 13;
static const uint32_t LOCAL_XSTOP_IN14 = 14;
static const uint32_t LOCAL_XSTOP_IN15 = 15;
//<< [LOCAL_XSTOP]
// eq/reg00003.H

//>> [LXSTOP_INTERRUPT_REG]
static const uint64_t LXSTOP_INTERRUPT_REG = 0x200f002aull;

static const uint32_t LXSTOP_INTERRUPT_REG_LXSTOP = 0;
//<< [LXSTOP_INTERRUPT_REG]
// eq/reg00003.H

//>> [PHASE_COUNTER_RESET]
static const uint64_t PHASE_COUNTER_RESET = 0x20030028ull;

static const uint32_t PHASE_COUNTER_RESET_PHASECOUNTER_RESET = 0;
//<< [PHASE_COUNTER_RESET]
// eq/reg00003.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00003_unused.H"
#endif
#endif
