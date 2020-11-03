/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_a_unused.H $      */
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

#ifndef __p10_scom_mc_a_H_UNUSED__
#define __p10_scom_mc_a_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [CC_PROTECT_MODE_REG]
static const uint64_t CC_PROTECT_MODE_REG = 0x0c0303feull;

static const uint32_t CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE = 0;
static const uint32_t CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE = 1;
//<< [CC_PROTECT_MODE_REG]
// mc/reg00010.H

//>> [EPS_DBG_INST1_COND_REG_1]
static const uint64_t EPS_DBG_INST1_COND_REG_1 = 0x0c0107c1ull;

static const uint32_t EPS_DBG_INST1_COND_REG_1_COND1_SEL_A = 0;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND1_SEL_A_LEN = 8;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND1_SEL_B = 8;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND1_SEL_B_LEN = 8;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND2_SEL_A = 16;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND2_SEL_A_LEN = 8;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND2_SEL_B = 24;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND2_SEL_B_LEN = 8;
static const uint32_t EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE = 32;
static const uint32_t EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 = 33;
static const uint32_t EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 = 34;
static const uint32_t EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 = 35;
static const uint32_t EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE = 39;
static const uint32_t EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 = 40;
static const uint32_t EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 = 41;
static const uint32_t EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 = 42;
static const uint32_t EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET = 46;
static const uint32_t EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE = 47;
static const uint32_t EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 = 48;
static const uint32_t EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 = 49;
static const uint32_t EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE = 50;
static const uint32_t EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO = 51;
static const uint32_t EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT = 52;
static const uint32_t EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT_LEN = 4;
static const uint32_t EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT = 56;
static const uint32_t EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT_LEN = 4;
static const uint32_t EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT = 60;
static const uint32_t EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT_LEN = 3;
//<< [EPS_DBG_INST1_COND_REG_1]
// mc/reg00010.H

//>> [EPS_DBG_INST2_COND_REG_1]
static const uint64_t EPS_DBG_INST2_COND_REG_1 = 0x0c0107c4ull;

static const uint32_t EPS_DBG_INST2_COND_REG_1_COND1_SEL_A = 0;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND1_SEL_A_LEN = 8;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND1_SEL_B = 8;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND1_SEL_B_LEN = 8;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND2_SEL_A = 16;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND2_SEL_A_LEN = 8;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND2_SEL_B = 24;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND2_SEL_B_LEN = 8;
static const uint32_t EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE = 32;
static const uint32_t EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 = 33;
static const uint32_t EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 = 34;
static const uint32_t EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 = 35;
static const uint32_t EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE = 39;
static const uint32_t EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 = 40;
static const uint32_t EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 = 41;
static const uint32_t EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 = 42;
static const uint32_t EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET = 46;
static const uint32_t EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE = 47;
static const uint32_t EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 = 48;
static const uint32_t EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 = 49;
static const uint32_t EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE = 50;
static const uint32_t EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO = 51;
static const uint32_t EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT = 52;
static const uint32_t EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT_LEN = 4;
static const uint32_t EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT = 56;
static const uint32_t EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT_LEN = 4;
static const uint32_t EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT = 60;
static const uint32_t EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT_LEN = 3;
//<< [EPS_DBG_INST2_COND_REG_1]
// mc/reg00010.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4 = 0x0c040084ull;

static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR = 0;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR = 1;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR = 2;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR = 3;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR = 4;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR = 5;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR = 6;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR = 7;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01 = 12;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02 = 13;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03 = 14;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04 = 15;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05 = 16;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06 = 17;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07 = 18;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08 = 19;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09 = 20;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10 = 21;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11 = 22;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12 = 23;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13 = 24;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14 = 25;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15 = 26;
//<< [EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]
// mc/reg00010.H

//>> [EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]
static const uint64_t EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG = 0x0c010007ull;

static const uint32_t EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK = 0;
static const uint32_t EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN = 32;
//<< [EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]
// mc/reg00010.H

//>> [MBA_SCOMFIR_MCWATCNTL]
static const uint64_t MBA_SCOMFIR_MCWATCNTL = 0x0c010f99ull;

static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_DEBUG_SELECT = 0;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_DEBUG_SELECT_LEN = 7;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_EVENT_BUS_SELECT = 7;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_EVENT_BUS_SELECT_LEN = 5;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_SELECT = 12;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_SELECT_LEN = 4;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_ENABLE = 16;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_DBG_COUNT_RESET = 17;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_RCTRL_WAT_SELECT = 18;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_RCTRL_WAT_SELECT_LEN = 4;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_RESERVED_22_23 = 22;
static const uint32_t MBA_SCOMFIR_MCWATCNTL_RESERVED_22_23_LEN = 2;
//<< [MBA_SCOMFIR_MCWATCNTL]
// mc/reg00010.H

//>> [MBA_SCOMFIR_WATFNC]
static const uint64_t MBA_SCOMFIR_WATFNC = 0x0c010f8eull;

static const uint32_t MBA_SCOMFIR_WATFNC_5_CFG = 0;
static const uint32_t MBA_SCOMFIR_WATFNC_5_CFG_LEN = 22;
static const uint32_t MBA_SCOMFIR_WATFNC_6_CFG = 22;
static const uint32_t MBA_SCOMFIR_WATFNC_6_CFG_LEN = 22;
//<< [MBA_SCOMFIR_WATFNC]
// mc/reg00010.H

//>> [MBA_SCOMFIR_WATFNSEL]
static const uint64_t MBA_SCOMFIR_WATFNSEL = 0x0c010f90ull;

static const uint32_t MBA_SCOMFIR_WATFNSEL_WAT_FN_SELECT = 0;
static const uint32_t MBA_SCOMFIR_WATFNSEL_WAT_FN_SELECT_LEN = 55;
//<< [MBA_SCOMFIR_WATFNSEL]
// mc/reg00010.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00010_unused.H"
#endif
#endif
