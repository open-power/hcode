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

//>> [PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
static const uint64_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG = 0x0301180aull;

static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 = 0;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN = 16;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 = 16;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN = 8;
static const uint32_t PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE = 24;
//<< [PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
// pec/reg00011.H

//>> [TOP0_IOPFIRMASK]
static const uint64_t TOP0_IOPFIRMASK_RW = 0x08011103ull;
static const uint64_t TOP0_IOPFIRMASK_WO_AND = 0x08011104ull;
static const uint64_t TOP0_IOPFIRMASK_WO_OR = 0x08011105ull;

static const uint32_t TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK = 0;
static const uint32_t TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK = 1;
static const uint32_t TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK = 2;
static const uint32_t TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK = 3;
static const uint32_t TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK = 4;
static const uint32_t TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK = 5;
static const uint32_t TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK = 6;
static const uint32_t TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK = 7;
static const uint32_t TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK = 8;
static const uint32_t TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK = 9;
static const uint32_t TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK = 10;
static const uint32_t TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK = 11;
//<< [TOP0_IOPFIRMASK]
// pec/reg00011.H

//>> [TOP1_IOPFIR]
static const uint64_t TOP1_IOPFIR_RW = 0x08011500ull;
static const uint64_t TOP1_IOPFIR_WO_AND = 0x08011501ull;
static const uint64_t TOP1_IOPFIR_WO_OR = 0x08011502ull;

static const uint32_t TOP1_IOPFIR_PHY0_ECC_CE_ERR = 0;
static const uint32_t TOP1_IOPFIR_PHY0_ECC_UE_ERR = 1;
static const uint32_t TOP1_IOPFIR_PHY1_ECC_CE_ERR = 2;
static const uint32_t TOP1_IOPFIR_PHY1_ECC_UE_ERR = 3;
static const uint32_t TOP1_IOPFIR_SCOM0_ECC_CE = 4;
static const uint32_t TOP1_IOPFIR_SCOM0_ECC_UE = 5;
static const uint32_t TOP1_IOPFIR_SCOM1_ECC_CE = 6;
static const uint32_t TOP1_IOPFIR_SCOM1_ECC_UE = 7;
static const uint32_t TOP1_IOPFIR_SCRUB0_ECC_CE = 8;
static const uint32_t TOP1_IOPFIR_SCRUB0_ECC_UE = 9;
static const uint32_t TOP1_IOPFIR_SCRUB1_ECC_CE = 10;
static const uint32_t TOP1_IOPFIR_SCRUB1_ECC_UE = 11;
//<< [TOP1_IOPFIR]
// pec/reg00011.H

//>> [TOP1_IXDATA1]
static const uint64_t TOP1_IXDATA1 = 0x0801150dull;

static const uint32_t TOP1_IXDATA1_IXDATA1_DATA = 0;
static const uint32_t TOP1_IXDATA1_IXDATA1_DATA_LEN = 64;
//<< [TOP1_IXDATA1]
// pec/reg00011.H

//>> [TOP1_IXRADR1]
static const uint64_t TOP1_IXRADR1 = 0x0801150bull;

static const uint32_t TOP1_IXRADR1_IXRADR1_ADDR = 0;
static const uint32_t TOP1_IXRADR1_IXRADR1_ADDR_LEN = 12;
//<< [TOP1_IXRADR1]
// pec/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00011_unused.H"
#endif
#endif
