/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_c_unused.H $     */
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

#ifndef __p10_scom_pec_c_H_UNUSED__
#define __p10_scom_pec_c_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [CTRL_PROTECT_MODE_REG]
static const uint64_t CTRL_PROTECT_MODE_REG = 0x080003feull;

static const uint32_t CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE = 0;
static const uint32_t CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE = 1;
//<< [CTRL_PROTECT_MODE_REG]
// pec/reg00012.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK5 = 0x08040085ull;

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
// pec/reg00012.H

//>> [EPS_PSC_WRITE_PROTECT_ENABLE_REG]
static const uint64_t EPS_PSC_WRITE_PROTECT_ENABLE_REG = 0x08010005ull;

static const uint32_t EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING = 0;
static const uint32_t EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING = 1;
//<< [EPS_PSC_WRITE_PROTECT_ENABLE_REG]
// pec/reg00012.H

//>> [HOSTATTN_UNMASKED]
static const uint64_t HOSTATTN_UNMASKED = 0x08040014ull;

static const uint32_t HOSTATTN_UNMASKED_IN = 1;
static const uint32_t HOSTATTN_UNMASKED_IN_LEN = 53;
//<< [HOSTATTN_UNMASKED]
// pec/reg00012.H

//>> [MULTICAST_GROUP_4]
static const uint64_t MULTICAST_GROUP_4 = 0x080f0004ull;

static const uint32_t MULTICAST_GROUP_4_MULTICAST4_GROUP = 3;
static const uint32_t MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN = 3;
//<< [MULTICAST_GROUP_4]
// pec/reg00012.H

//>> [PRE_COUNTER_REG]
static const uint64_t PRE_COUNTER_REG = 0x080f0028ull;

static const uint32_t PRE_COUNTER_REG_PRE_COUNTER = 0;
static const uint32_t PRE_COUNTER_REG_PRE_COUNTER_LEN = 8;
//<< [PRE_COUNTER_REG]
// pec/reg00012.H

//>> [TOP0_IXERRPT]
static const uint64_t TOP0_IXERRPT = 0x0801110full;

static const uint32_t TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD = 0;
static const uint32_t TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD = 1;
static const uint32_t TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD = 2;
static const uint32_t TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD = 3;
static const uint32_t TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD = 4;
static const uint32_t TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD = 5;
static const uint32_t TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD = 6;
static const uint32_t TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD = 7;
static const uint32_t TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD = 8;
static const uint32_t TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD = 9;
static const uint32_t TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD = 10;
static const uint32_t TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD = 11;
//<< [TOP0_IXERRPT]
// pec/reg00012.H

//>> [TOP0_PIPEDOUTCTL0]
static const uint64_t TOP0_PIPEDOUTCTL0 = 0x08011114ull;

static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_63_59 = 0;
static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_63_59_LEN = 5;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN = 5;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN = 6;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN = 7;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN = 8;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN = 9;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN = 10;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN = 11;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN = 12;
static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_50_42 = 13;
static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_50_42_LEN = 9;
static const uint32_t TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ = 22;
static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_40_0 = 23;
static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_40_0_LEN = 41;
static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_40_6 = 23; // p10:20,
static const uint32_t TOP0_PIPEDOUTCTL0_RESERVED_40_6_LEN = 35;
static const uint32_t TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS = 58; // p10:20,
static const uint32_t TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS = 59; // p10:20,
static const uint32_t TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN = 5;
//<< [TOP0_PIPEDOUTCTL0]
// pec/reg00012.H

//>> [TOP1_PIPEDINCTL1]
static const uint64_t TOP1_PIPEDINCTL1 = 0x0801151aull;

static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N = 0;
static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N = 1;
static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N = 2;
static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N = 3;
static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N = 4;
static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N = 5;
static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N = 6;
static const uint32_t TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N = 7;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD = 8;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT = 9;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_LEN = 6;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD = 15;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT = 16;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_LEN = 6;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD = 22;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT = 23;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_LEN = 6;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD = 29;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT = 30;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_LEN = 6;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD = 36;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT = 37;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_LEN = 6;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD = 43;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT = 44;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_LEN = 6;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD = 50;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT = 51;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_LEN = 6;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD = 57;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT = 58;
static const uint32_t TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_LEN = 6;
//<< [TOP1_PIPEDINCTL1]
// pec/reg00012.H

//>> [TOP1_PIPEDOUTCTL1]
static const uint64_t TOP1_PIPEDOUTCTL1 = 0x08011515ull;

static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_63_31 = 0;
static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_63_31_LEN = 33;
static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_30 = 33;
static const uint32_t TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN = 34;
static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_28 = 35;
static const uint32_t TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN = 36;
static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_26 = 37;
static const uint32_t TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN = 38;
static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_24 = 39;
static const uint32_t TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN = 40;
static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_22_0 = 41;
static const uint32_t TOP1_PIPEDOUTCTL1_RESERVED_22_0_LEN = 23;
//<< [TOP1_PIPEDOUTCTL1]
// pec/reg00012.H

//>> [XSTOP_INTERRUPT_REG]
static const uint64_t XSTOP_INTERRUPT_REG = 0x080f001cull;

static const uint32_t XSTOP_INTERRUPT_REG_XSTOP = 0;
//<< [XSTOP_INTERRUPT_REG]
// pec/reg00012.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00012_unused.H"
#endif
#endif
