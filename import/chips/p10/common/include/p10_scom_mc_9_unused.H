/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_9_unused.H $      */
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

#ifndef __p10_scom_mc_9_H_UNUSED__
#define __p10_scom_mc_9_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3 = 0x0c040083ull;

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
// mc/reg00009.H

//>> [EPS_THERM_WSUB_SKITTER_DATA2]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA2 = 0x0c05001bull;
//<< [EPS_THERM_WSUB_SKITTER_DATA2]
// mc/reg00009.H

//>> [EPS_THERM_WSUB_SKITTER_FORCE_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_FORCE_REG = 0x0c050014ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ = 0;
//<< [EPS_THERM_WSUB_SKITTER_FORCE_REG]
// mc/reg00009.H

//>> [MBA_SCOMFIR_AADR]
static const uint64_t MBA_SCOMFIR_AADR = 0x0c010f2aull;

static const uint32_t MBA_SCOMFIR_AADR_AADR_DATA = 0;
static const uint32_t MBA_SCOMFIR_AADR_AADR_DATA_LEN = 64;
//<< [MBA_SCOMFIR_AADR]
// mc/reg00009.H

//>> [MBA_SCOMFIR_WATCFG2]
static const uint64_t MBA_SCOMFIR_WATCFG2 = 0x0c010f8aull;

static const uint32_t MBA_SCOMFIR_WATCFG2_WAT_2_CFG = 0;
static const uint32_t MBA_SCOMFIR_WATCFG2_WAT_2_CFG_LEN = 60;
//<< [MBA_SCOMFIR_WATCFG2]
// mc/reg00009.H

//>> [MBA_SCOMFIR_WATFND]
static const uint64_t MBA_SCOMFIR_WATFND = 0x0c010f8full;

static const uint32_t MBA_SCOMFIR_WATFND_WAT_FN7_CFG = 0;
static const uint32_t MBA_SCOMFIR_WATFND_WAT_FN7_CFG_LEN = 22;
//<< [MBA_SCOMFIR_WATFND]
// mc/reg00009.H

//>> [MULTICAST_GROUP_2]
static const uint64_t MULTICAST_GROUP_2 = 0x0c0f0002ull;

static const uint32_t MULTICAST_GROUP_2_MULTICAST2_GROUP = 3;
static const uint32_t MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN = 3;
//<< [MULTICAST_GROUP_2]
// mc/reg00009.H

//>> [SCOMFIR_MCFIRWOF]
static const uint64_t SCOMFIR_MCFIRWOF = 0x0c010c08ull;

static const uint32_t SCOMFIR_MCFIRWOF_MCFIRWOF_WOF = 0;
static const uint32_t SCOMFIR_MCFIRWOF_MCFIRWOF_WOF_LEN = 24;
//<< [SCOMFIR_MCFIRWOF]
// mc/reg00009.H

//>> [TRA0_TR0_CONFIG_0]
static const uint64_t TRA0_TR0_CONFIG_0 = 0x0c010403ull;

static const uint32_t TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [TRA0_TR0_CONFIG_0]
// mc/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00009_unused.H"
#endif
#endif
