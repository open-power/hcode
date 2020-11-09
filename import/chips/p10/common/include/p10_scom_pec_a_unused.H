/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_a_unused.H $     */
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

#ifndef __p10_scom_pec_a_H_UNUSED__
#define __p10_scom_pec_a_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [CC_PROTECT_MODE_REG]
static const uint64_t CC_PROTECT_MODE_REG = 0x080303feull;

static const uint32_t CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE = 0;
static const uint32_t CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE = 1;
//<< [CC_PROTECT_MODE_REG]
// pec/reg00010.H

//>> [EPS_DBG_INST1_COND_REG_1]
static const uint64_t EPS_DBG_INST1_COND_REG_1 = 0x080107c1ull;

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
// pec/reg00010.H

//>> [EPS_DBG_INST2_COND_REG_1]
static const uint64_t EPS_DBG_INST2_COND_REG_1 = 0x080107c4ull;

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
// pec/reg00010.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK4 = 0x08040084ull;

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
// pec/reg00010.H

//>> [EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]
static const uint64_t EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG = 0x08010007ull;

static const uint32_t EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK = 0;
static const uint32_t EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN = 32;
//<< [EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]
// pec/reg00010.H

//>> [PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]
static const uint64_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG = 0x03011807ull;

static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN = 0;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN = 1;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN = 2;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG = 3;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG_LEN = 17;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1 = 20;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1_LEN = 3;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG = 23;
static const uint32_t PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG_LEN = 17;
//<< [PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]
// pec/reg00010.H

//>> [PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]
static const uint64_t PB_PBCQ_PEPBREGS_NRDSTKOVR_REG = 0x03011808ull;

static const uint32_t PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0 = 0;
static const uint32_t PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0_LEN = 32;
static const uint32_t PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1 = 32;
static const uint32_t PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1_LEN = 16;
static const uint32_t PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE = 48;
//<< [PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]
// pec/reg00010.H

//>> [TOP0_PIPEDOUTCTL1]
static const uint64_t TOP0_PIPEDOUTCTL1 = 0x08011115ull;

static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_63_31 = 0;
static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_63_31_LEN = 33;
static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_30 = 33;
static const uint32_t TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN = 34;
static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_28 = 35;
static const uint32_t TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN = 36;
static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_26 = 37;
static const uint32_t TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN = 38;
static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_24 = 39;
static const uint32_t TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN = 40;
static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_22_0 = 41;
static const uint32_t TOP0_PIPEDOUTCTL1_RESERVED_22_0_LEN = 23;
//<< [TOP0_PIPEDOUTCTL1]
// pec/reg00010.H

//>> [TOP1_PIPEDINCTL0]
static const uint64_t TOP1_PIPEDINCTL0 = 0x08011519ull;

static const uint32_t TOP1_PIPEDINCTL0_RESERVED_63_17 = 0;
static const uint32_t TOP1_PIPEDINCTL0_RESERVED_63_17_LEN = 47;
static const uint32_t TOP1_PIPEDINCTL0_PHY_RTUNE_ACK = 47;
static const uint32_t TOP1_PIPEDINCTL0_RESERVED_15_12 = 48;
static const uint32_t TOP1_PIPEDINCTL0_RESERVED_15_12_LEN = 4;
static const uint32_t TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT = 52;
static const uint32_t TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT = 53;
static const uint32_t TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK = 54;
static const uint32_t TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK = 55;
static const uint32_t TOP1_PIPEDINCTL0_RESERVED_7_4 = 56;
static const uint32_t TOP1_PIPEDINCTL0_RESERVED_7_4_LEN = 4;
static const uint32_t TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT = 60;
static const uint32_t TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT = 61;
static const uint32_t TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK = 62;
static const uint32_t TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK = 63;
//<< [TOP1_PIPEDINCTL0]
// pec/reg00010.H

//>> [TOP1_PIPEDOUTCTL0]
static const uint64_t TOP1_PIPEDOUTCTL0 = 0x08011514ull;

static const uint32_t TOP1_PIPEDOUTCTL0_RESERVED_63_59 = 0;
static const uint32_t TOP1_PIPEDOUTCTL0_RESERVED_63_59_LEN = 5;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN = 5;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN = 6;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN = 7;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN = 8;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN = 9;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN = 10;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN = 11;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN = 12;
static const uint32_t TOP1_PIPEDOUTCTL0_RESERVED_50_42 = 13;
static const uint32_t TOP1_PIPEDOUTCTL0_RESERVED_50_42_LEN = 9;
static const uint32_t TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ = 22;
static const uint32_t TOP1_PIPEDOUTCTL0_RESERVED_40_0 = 23;
static const uint32_t TOP1_PIPEDOUTCTL0_RESERVED_40_0_LEN = 41;
static const uint32_t P10_20_TOP1_PIPEDOUTCTL0_RESERVED_40_6 = 23; // p10:20,
static const uint32_t P10_20_TOP1_PIPEDOUTCTL0_RESERVED_40_6_LEN = 35;
static const uint32_t P10_20_TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS = 58; // p10:20,
static const uint32_t P10_20_TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS = 59; // p10:20,
static const uint32_t P10_20_TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN = 5;
//<< [TOP1_PIPEDOUTCTL0]
// pec/reg00010.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00010_unused.H"
#endif
#endif
