/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_b_unused.H $     */
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

#ifndef __p10_scom_pec_b_H_UNUSED__
#define __p10_scom_pec_b_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [IOPFIR]
static const uint64_t IOPFIR_RW = 0x08011500ull;
static const uint64_t IOPFIR_WO_AND = 0x08011501ull;
static const uint64_t IOPFIR_WO_OR = 0x08011502ull;

static const uint32_t IOPFIR_PHY0_ECC_CE_ERR = 0;
static const uint32_t IOPFIR_PHY0_ECC_UE_ERR = 1;
static const uint32_t IOPFIR_PHY1_ECC_CE_ERR = 2;
static const uint32_t IOPFIR_PHY1_ECC_UE_ERR = 3;
static const uint32_t IOPFIR_SCOM0_ECC_CE = 4;
static const uint32_t IOPFIR_SCOM0_ECC_UE = 5;
static const uint32_t IOPFIR_SCOM1_ECC_CE = 6;
static const uint32_t IOPFIR_SCOM1_ECC_UE = 7;
static const uint32_t IOPFIR_SCRUB0_ECC_CE = 8;
static const uint32_t IOPFIR_SCRUB0_ECC_UE = 9;
static const uint32_t IOPFIR_SCRUB1_ECC_CE = 10;
static const uint32_t IOPFIR_SCRUB1_ECC_UE = 11;
//<< [IOPFIR]
// pec/reg00011.H

//>> [IOPFIRACT1]
static const uint64_t IOPFIRACT1 = 0x08011507ull;

static const uint32_t IOPFIRACT1_FIR_ACTION1 = 0;
static const uint32_t IOPFIRACT1_FIR_ACTION1_LEN = 12;
//<< [IOPFIRACT1]
// pec/reg00011.H

//>> [IXCS]
static const uint64_t IXCS = 0x08011510ull;
//<< [IXCS]
// pec/reg00011.H

//>> [IXDATA0]
static const uint64_t IXDATA0 = 0x0801150cull;

static const uint32_t IXDATA0_DATA = 0;
static const uint32_t IXDATA0_DATA_LEN = 64;
//<< [IXDATA0]
// pec/reg00011.H

//>> [IXRADR0]
static const uint64_t IXRADR0 = 0x0801150aull;

static const uint32_t IXRADR0_ADDR = 0;
static const uint32_t IXRADR0_ADDR_LEN = 12;
//<< [IXRADR0]
// pec/reg00011.H

//>> [PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
static const uint64_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG = 0x0301180aull;

static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 = 0;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN = 16;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 = 16;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN = 8;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE = 24;
//<< [PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
// pec/reg00011.H

//>> [PIPEDINCTL3]
static const uint64_t PIPEDINCTL3 = 0x0801151cull;

static const uint32_t PIPEDINCTL3_PHY1_HANDSHAKE_RESULT = 0;
static const uint32_t PIPEDINCTL3_PHY0_HANDSHAKE_RESULT = 1;
static const uint32_t PIPEDINCTL3_RESERVED_61_4 = 2;
static const uint32_t PIPEDINCTL3_RESERVED_61_4_LEN = 58;
static const uint32_t PIPEDINCTL3_PHY1_DTB = 60;
static const uint32_t PIPEDINCTL3_PHY1_DTB_LEN = 2;
static const uint32_t PIPEDINCTL3_PHY0_DTB = 62;
static const uint32_t PIPEDINCTL3_PHY0_DTB_LEN = 2;
//<< [PIPEDINCTL3]
// pec/reg00011.H

//>> [PIPEDOUTCTL0]
static const uint64_t PIPEDOUTCTL0 = 0x08011514ull;

static const uint32_t PIPEDOUTCTL0_RESERVED_63_59 = 0;
static const uint32_t PIPEDOUTCTL0_RESERVED_63_59_LEN = 5;
static const uint32_t PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN = 5;
static const uint32_t PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN = 6;
static const uint32_t PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN = 7;
static const uint32_t PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN = 8;
static const uint32_t PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN = 9;
static const uint32_t PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN = 10;
static const uint32_t PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN = 11;
static const uint32_t PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN = 12;
static const uint32_t PIPEDOUTCTL0_RESERVED_50_42 = 13;
static const uint32_t PIPEDOUTCTL0_RESERVED_50_42_LEN = 9;
static const uint32_t PIPEDOUTCTL0_PHY_RTUNE_REQ = 22;
static const uint32_t PIPEDOUTCTL0_RESERVED_40_0 = 23;
static const uint32_t PIPEDOUTCTL0_RESERVED_40_0_LEN = 41;
//<< [PIPEDOUTCTL0]
// pec/reg00011.H

//>> [EPS_DBG_TRACE_MODE_REG_2]
static const uint64_t EPS_DBG_TRACE_MODE_REG_2 = 0x080107cfull;

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
// pec/reg00011.H

//>> [XSTOP4]
static const uint64_t XSTOP4 = 0x08030014ull;

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
// pec/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00011_unused.H"
#endif
#endif
