/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_9_unused.H $     */
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

#ifndef __p10_scom_pec_9_H_UNUSED__
#define __p10_scom_pec_9_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [IXERRPT]
static const uint64_t IXERRPT = 0x0801150full;

static const uint32_t IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD = 0;
static const uint32_t IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD = 1;
static const uint32_t IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD = 2;
static const uint32_t IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD = 3;
static const uint32_t IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD = 4;
static const uint32_t IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD = 5;
static const uint32_t IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD = 6;
static const uint32_t IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD = 7;
static const uint32_t IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD = 8;
static const uint32_t IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD = 9;
static const uint32_t IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD = 10;
static const uint32_t IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD = 11;
//<< [IXERRPT]
// pec/reg00009.H

//>> [PB_PBCQ_PEPBREGS_PBCQEINJ_REG]
static const uint64_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG = 0x03011802ull;

static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_INJECT_TYPE = 0;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_INJECT_TYPE_LEN = 2;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_CQ_ECC_INJECT_ENABLE = 2;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_CQ_SRAM_ARRAY = 3;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_CQ_SRAM_ARRAY_LEN = 4;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_CQ_PAR_INJECT_ENABLE = 7;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_CQ_REGISTER_ARRAY = 8;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_CQ_REGISTER_ARRAY_LEN = 3;
static const uint32_t PB_PBCQ_PEPBREGS_PBCQEINJ_REG_CONSTANT_EINJ = 11;
//<< [PB_PBCQ_PEPBREGS_PBCQEINJ_REG]
// pec/reg00009.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3 = 0x08040083ull;

static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR = 0;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR = 1;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR = 2;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR = 3;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR = 4;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR = 5;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR = 6;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR = 7;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 = 12;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 = 13;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 = 14;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 = 15;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 = 16;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 = 17;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 = 18;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 = 19;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 = 20;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 = 21;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 = 22;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 = 23;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 = 24;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 = 25;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 = 26;
//<< [EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
// pec/reg00009.H

//>> [EPS_THERM_WSUB_SKITTER_DATA2]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA2 = 0x0805001bull;
//<< [EPS_THERM_WSUB_SKITTER_DATA2]
// pec/reg00009.H

//>> [EPS_THERM_WSUB_SKITTER_FORCE_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_FORCE_REG = 0x08050014ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ = 0;
//<< [EPS_THERM_WSUB_SKITTER_FORCE_REG]
// pec/reg00009.H

//>> [MULTICAST_GROUP_2]
static const uint64_t MULTICAST_GROUP_2 = 0x080f0002ull;

static const uint32_t MULTICAST_GROUP_2_MULTICAST2_GROUP = 3;
static const uint32_t MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN = 3;
//<< [MULTICAST_GROUP_2]
// pec/reg00009.H

//>> [TRA0_TR0_CONFIG_0]
static const uint64_t TRA0_TR0_CONFIG_0 = 0x08010403ull;

static const uint32_t TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [TRA0_TR0_CONFIG_0]
// pec/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00009_unused.H"
#endif
#endif
