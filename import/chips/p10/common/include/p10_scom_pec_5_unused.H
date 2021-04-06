/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_5_unused.H $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __p10_scom_pec_5_H_UNUSED__
#define __p10_scom_pec_5_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [EPS_THERM_WSUB_SKITTER_DATA0]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA0 = 0x08050019ull;
//<< [EPS_THERM_WSUB_SKITTER_DATA0]
// pec/reg00005.H

//>> [EPS_THERM_WSUB_SKITTER_MODE_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_MODE_REG = 0x08050010ull;

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
// pec/reg00005.H

//>> [PB_PBCQ_PEPBREGS_PREDV_REG]
static const uint64_t PB_PBCQ_PEPBREGS_PREDV_REG = 0x03011806ull;

static const uint32_t PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK = 0;
static const uint32_t PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK_LEN = 8;
static const uint32_t PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK = 8;
static const uint32_t PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK_LEN = 8;
//<< [PB_PBCQ_PEPBREGS_PREDV_REG]
// pec/reg00005.H

//>> [TOP0_PIPEDINCTL3]
static const uint64_t TOP0_PIPEDINCTL3 = 0x0801111cull;

static const uint32_t TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT = 0;
static const uint32_t TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT = 1;
static const uint32_t TOP0_PIPEDINCTL3_RESERVED_61_4 = 2;
static const uint32_t TOP0_PIPEDINCTL3_RESERVED_61_4_LEN = 58;
static const uint32_t TOP0_PIPEDINCTL3_PHY1_DTB = 60;
static const uint32_t TOP0_PIPEDINCTL3_PHY1_DTB_LEN = 2;
static const uint32_t TOP0_PIPEDINCTL3_PHY0_DTB = 62;
static const uint32_t TOP0_PIPEDINCTL3_PHY0_DTB_LEN = 2;
//<< [TOP0_PIPEDINCTL3]
// pec/reg00005.H

//>> [TOP0_PIPEDOUTCTL4]
static const uint64_t TOP0_PIPEDOUTCTL4 = 0x08011118ull;

static const uint32_t TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0 = 0;
static const uint32_t TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0_LEN = 64;
//<< [TOP0_PIPEDOUTCTL4]
// pec/reg00005.H

//>> [TRA0_TR0_CONFIG_2]
static const uint64_t TRA0_TR0_CONFIG_2 = 0x08010405ull;

static const uint32_t TRA0_TR0_CONFIG_2_A = 0;
static const uint32_t TRA0_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_2_B = 24;
static const uint32_t TRA0_TR0_CONFIG_2_B_LEN = 24;
//<< [TRA0_TR0_CONFIG_2]
// pec/reg00005.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00005_unused.H"
#endif
#endif
