/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_e_unused.H $     */
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

#ifndef __p10_scom_pec_e_H_UNUSED__
#define __p10_scom_pec_e_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [EPS_DBG_TRACE_REG_1]
static const uint64_t EPS_DBG_TRACE_REG_1 = 0x080107ceull;

static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO = 0;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO = 4;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO = 6;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO = 8;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO = 10;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN = 24;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN = 25;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN = 26;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN = 27;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN = 28;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN = 29;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK = 36;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK = 37;
static const uint32_t EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK = 38;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK = 39;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK = 40;
static const uint32_t EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK = 41;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT = 48;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN = 3;
static const uint32_t EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR = 51;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT = 52;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN = 3;
static const uint32_t EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR = 55;
//<< [EPS_DBG_TRACE_REG_1]
// pec/reg00014.H

//>> [PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]
static const uint64_t PB_PBCQ_PEPBREGS_ADDREXTMASK_REG = 0x03011805ull;

static const uint32_t PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK = 0;
static const uint32_t PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK_LEN = 7;
//<< [PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]
// pec/reg00014.H

//>> [TOP0_IOPFIRACT0]
static const uint64_t TOP0_IOPFIRACT0 = 0x08011106ull;

static const uint32_t TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0 = 0;
static const uint32_t TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0_LEN = 12;
//<< [TOP0_IOPFIRACT0]
// pec/reg00014.H

//>> [TOP0_IXDATA0]
static const uint64_t TOP0_IXDATA0 = 0x0801110cull;

static const uint32_t TOP0_IXDATA0_IXDATA0_DATA = 0;
static const uint32_t TOP0_IXDATA0_IXDATA0_DATA_LEN = 64;
//<< [TOP0_IXDATA0]
// pec/reg00014.H

//>> [TOP0_IXRADR0]
static const uint64_t TOP0_IXRADR0 = 0x0801110aull;

static const uint32_t TOP0_IXRADR0_IXRADR0_ADDR = 0;
static const uint32_t TOP0_IXRADR0_IXRADR0_ADDR_LEN = 12;
//<< [TOP0_IXRADR0]
// pec/reg00014.H

//>> [TOP1_IXMODE]
static const uint64_t TOP1_IXMODE = 0x0801150eull;

static const uint32_t TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE = 0;
static const uint32_t TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE = 1;
static const uint32_t TOP1_IXMODE_RAM_SCOM_ACCESS_MODE = 2;
static const uint32_t TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE = 3;
static const uint32_t TOP1_IXMODE_SCRUB_EN = 17;
static const uint32_t TOP1_IXMODE_SCRUB_PERIOD = 18;
static const uint32_t TOP1_IXMODE_SCRUB_PERIOD_LEN = 8;
static const uint32_t TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN = 26;
static const uint32_t TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE = 27;
static const uint32_t TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION = 28;
static const uint32_t TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN = 31;
static const uint32_t TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE = 32;
static const uint32_t TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION = 33;
//<< [TOP1_IXMODE]
// pec/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00014_unused.H"
#endif
#endif
