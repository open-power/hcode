/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_c_unused.H $      */
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

#ifndef __p10_scom_eq_c_H_UNUSED__
#define __p10_scom_eq_c_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC = 0x2001832full;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
// eq/reg00012.H

//>> [CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE = 0x20014306ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN = 8;
//<< [CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]
// eq/reg00012.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET = 0x20014308ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN = 7;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]
// eq/reg00012.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET = 0x20012305ull;
//<< [CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]
// eq/reg00012.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE = 0x20012320ull;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
// eq/reg00012.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE = 0x20012324ull;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
// eq/reg00012.H

//>> [CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT = 0x20011318ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL = 1;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN = 7;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL = 8;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL = 9;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN = 7;
//<< [CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]
// eq/reg00012.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES = 0x2001133aull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
// eq/reg00012.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES = 0x20011335ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR = 0;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
// eq/reg00012.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT = 0x20011329ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN = 3;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
// eq/reg00012.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS = 0x2001132cull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT = 0;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
// eq/reg00012.H

//>> [QME_PPEDBG]
static const uint64_t QME_PPEDBG_RW = 0x200e0244ull;
static const uint64_t QME_PPEDBG_WO_CLEAR = 0x200e0247ull;
static const uint64_t QME_PPEDBG_WO_OR = 0x200e0246ull;

static const uint32_t QME_PPEDBG_EN_DBG = 0;
static const uint32_t QME_PPEDBG_HALT_ON_XSTOP = 1;
static const uint32_t QME_PPEDBG_HALT_ON_TRIG = 2;
static const uint32_t QME_PPEDBG_EN_COVERAGE_MODE = 3;
static const uint32_t QME_PPEDBG_EN_INTR_ADDR = 4;
static const uint32_t QME_PPEDBG_EN_TRACE_EXTRA = 5;
static const uint32_t QME_PPEDBG_EN_TRACE_STALL = 6;
static const uint32_t QME_PPEDBG_EN_WAIT_CYCLES = 7;
static const uint32_t QME_PPEDBG_EN_FULL_SPEED = 8;
static const uint32_t QME_PPEDBG_DIS_FLOW_CHANGE = 9;
static const uint32_t QME_PPEDBG_TRACE_MODE_SEL = 10;
static const uint32_t QME_PPEDBG_TRACE_MODE_SEL_LEN = 2;
static const uint32_t QME_PPEDBG_EN_MARK_TRACE = 12;
static const uint32_t QME_PPEDBG_EN_EE_TRACE = 13;
static const uint32_t QME_PPEDBG_TRACE_LOWER_SEL1 = 14;
static const uint32_t QME_PPEDBG_TRACE_LOWER_SEL1_LEN = 2;
static const uint32_t QME_PPEDBG_FIR_TRIGGER = 16;
static const uint32_t QME_PPEDBG_MIB_GPIO = 17;
static const uint32_t QME_PPEDBG_MIB_GPIO_LEN = 3;
static const uint32_t QME_PPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t QME_PPEDBG_TRACE_DATA_SEL_LEN = 4;
static const uint32_t QME_PPEDBG_QHTM_TRACE_SEL = 25;
static const uint32_t QME_PPEDBG_TRACE_EXT_SEL0 = 26;
static const uint32_t QME_PPEDBG_TRACE_MODE_SEL1 = 27;
static const uint32_t QME_PPEDBG_TRACE_DATA_SEL1 = 28;
static const uint32_t QME_PPEDBG_TRACE_DATA_SEL1_LEN = 4;
//<< [QME_PPEDBG]
// eq/reg00012.H

//>> [QME_PTSR]
static const uint64_t QME_PTSR = 0x200e013cull;

static const uint32_t QME_PTSR_0_DATA = 0;
static const uint32_t QME_PTSR_0_DATA_LEN = 8;
static const uint32_t QME_PTSR_1_DATA = 8;
static const uint32_t QME_PTSR_1_DATA_LEN = 8;
static const uint32_t QME_PTSR_2_DATA = 16;
static const uint32_t QME_PTSR_2_DATA_LEN = 8;
static const uint32_t QME_PTSR_3_DATA = 24;
static const uint32_t QME_PTSR_3_DATA_LEN = 8;
static const uint32_t QME_PTSR_4_DATA = 32;
static const uint32_t QME_PTSR_4_DATA_LEN = 8;
static const uint32_t QME_PTSR_5_DATA = 40;
static const uint32_t QME_PTSR_5_DATA_LEN = 8;
static const uint32_t QME_PTSR_6_DATA = 48;
static const uint32_t QME_PTSR_6_DATA_LEN = 8;
static const uint32_t QME_PTSR_7_DATA = 56;
static const uint32_t QME_PTSR_7_DATA_LEN = 8;
//<< [QME_PTSR]
// eq/reg00012.H

//>> [QME_RCTAR1]
static const uint64_t QME_RCTAR1 = 0x200e0194ull;

static const uint32_t QME_RCTAR1_DATA = 0;
static const uint32_t QME_RCTAR1_DATA_LEN = 64;
//<< [QME_RCTAR1]
// eq/reg00012.H

//>> [QME_SCOM_XIRAMGA]
static const uint64_t QME_SCOM_XIRAMGA = 0x200e0208ull;

static const uint32_t QME_SCOM_XIRAMGA_QME_SCOM_XIRAMEDR_IR = 0;
static const uint32_t QME_SCOM_XIRAMGA_QME_SCOM_XIRAMEDR_IR_LEN = 32;
static const uint32_t QME_SCOM_XIRAMGA_SPRG0 = 32;
static const uint32_t QME_SCOM_XIRAMGA_SPRG0_LEN = 32;
//<< [QME_SCOM_XIRAMGA]
// eq/reg00012.H

//>> [QME_SCOM_XISIB]
static const uint64_t QME_SCOM_XISIB = 0x200e0218ull;

static const uint32_t QME_SCOM_XISIB_ADDR = 0;
static const uint32_t QME_SCOM_XISIB_ADDR_LEN = 32;
static const uint32_t QME_SCOM_XISIB_R_NW = 32;
static const uint32_t QME_SCOM_XISIB_BUSY = 33;
static const uint32_t QME_SCOM_XISIB_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t QME_SCOM_XISIB_RSP_INFO = 49;
static const uint32_t QME_SCOM_XISIB_RSP_INFO_LEN = 3;
static const uint32_t QME_SCOM_XISIB_RESET_PENDING = 61;
static const uint32_t QME_SCOM_XISIB_IFETCH_PENDING = 62;
static const uint32_t QME_SCOM_XISIB_DATAOP_PENDING = 63;
//<< [QME_SCOM_XISIB]
// eq/reg00012.H

//>> [CPLT_MASK0]
static const uint64_t CPLT_MASK0 = 0x20000101ull;

static const uint32_t CPLT_MASK0_ITR_MASK = 0;
static const uint32_t CPLT_MASK0_ITR_MASK_LEN = 32;
//<< [CPLT_MASK0]
// eq/reg00012.H

//>> [CTRL_PROTECT_MODE_REG]
static const uint64_t CTRL_PROTECT_MODE_REG = 0x200003feull;

static const uint32_t CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE = 0;
static const uint32_t CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE = 1;
//<< [CTRL_PROTECT_MODE_REG]
// eq/reg00012.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5 = 0x20040085ull;

static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR = 0;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR = 1;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR = 2;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR = 3;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR = 4;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR = 5;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR = 6;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR = 7;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 = 12;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 = 13;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 = 14;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 = 15;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 = 16;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 = 17;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 = 18;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 = 19;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 = 20;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 = 21;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 = 22;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 = 23;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 = 24;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 = 25;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 = 26;
//<< [EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
// eq/reg00012.H

//>> [HOSTATTN_UNMASKED]
static const uint64_t HOSTATTN_UNMASKED = 0x20040014ull;

static const uint32_t HOSTATTN_UNMASKED_IN = 1;
static const uint32_t HOSTATTN_UNMASKED_IN_LEN = 53;
//<< [HOSTATTN_UNMASKED]
// eq/reg00012.H

//>> [L3TRA1_TR0_CONFIG_9]
static const uint64_t L3TRA1_TR0_CONFIG_9 = 0x20018249ull;

static const uint32_t L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t L3TRA1_TR0_CONFIG_9_SPARE_LT = 37;
//<< [L3TRA1_TR0_CONFIG_9]
// eq/reg00012.H

//>> [L3TRA1_TR1_CONFIG_0]
static const uint64_t L3TRA1_TR1_CONFIG_0 = 0x20018263ull;

static const uint32_t L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [L3TRA1_TR1_CONFIG_0]
// eq/reg00012.H

//>> [L3TRA3_TR0_CONFIG_1]
static const uint64_t L3TRA3_TR0_CONFIG_1 = 0x200182c4ull;

static const uint32_t L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [L3TRA3_TR0_CONFIG_1]
// eq/reg00012.H

//>> [MULTICAST_GROUP_4]
static const uint64_t MULTICAST_GROUP_4 = 0x200f0004ull;

static const uint32_t MULTICAST_GROUP_4_MULTICAST4_GROUP = 3;
static const uint32_t MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN = 3;
//<< [MULTICAST_GROUP_4]
// eq/reg00012.H

//>> [PRE_COUNTER_REG]
static const uint64_t PRE_COUNTER_REG = 0x200f0028ull;

static const uint32_t PRE_COUNTER_REG_PRE_COUNTER = 0;
static const uint32_t PRE_COUNTER_REG_PRE_COUNTER_LEN = 8;
//<< [PRE_COUNTER_REG]
// eq/reg00012.H

//>> [XSTOP_INTERRUPT_REG]
static const uint64_t XSTOP_INTERRUPT_REG = 0x200f001cull;

static const uint32_t XSTOP_INTERRUPT_REG_XSTOP = 0;
//<< [XSTOP_INTERRUPT_REG]
// eq/reg00012.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00012_unused.H"
#endif
#endif
