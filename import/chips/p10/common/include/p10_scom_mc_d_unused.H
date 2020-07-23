/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_d_unused.H $      */
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

#ifndef __p10_scom_mc_d_H_UNUSED__
#define __p10_scom_mc_d_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [MBA_SCOMFIR_DBG1_SCOM1Q]
static const uint64_t MBA_SCOMFIR_DBG1_SCOM1Q = 0x0c010f97ull;

static const uint32_t MBA_SCOMFIR_DBG1_SCOM1Q_DBG1_SCOM1Q_DEBUG_BUS_44_87 = 0;
static const uint32_t MBA_SCOMFIR_DBG1_SCOM1Q_DBG1_SCOM1Q_DEBUG_BUS_44_87_LEN = 44;
//<< [MBA_SCOMFIR_DBG1_SCOM1Q]
// mc/reg00013.H

//>> [MBA_SCOMFIR_MCEBUSEN2]
static const uint64_t MBA_SCOMFIR_MCEBUSEN2 = 0x0c010fa6ull;

static const uint32_t MBA_SCOMFIR_MCEBUSEN2_MCEBUSEN2_EVENT_BUS_SELECTS = 0;
static const uint32_t MBA_SCOMFIR_MCEBUSEN2_MCEBUSEN2_EVENT_BUS_SELECTS_LEN = 64;
//<< [MBA_SCOMFIR_MCEBUSEN2]
// mc/reg00013.H

//>> [MBA_SCOMFIR_MISCFIRMASK]
static const uint64_t MBA_SCOMFIR_MISCFIRMASK_RW = 0x0c010f03ull;
static const uint64_t MBA_SCOMFIR_MISCFIRMASK_WO_AND = 0x0c010f04ull;
static const uint64_t MBA_SCOMFIR_MISCFIRMASK_WO_OR = 0x0c010f05ull;

static const uint32_t MBA_SCOMFIR_MISCFIRMASK_MISCFIRMASK_FIR_MASK = 0;
static const uint32_t MBA_SCOMFIR_MISCFIRMASK_MISCFIRMASK_FIR_MASK_LEN = 12;
//<< [MBA_SCOMFIR_MISCFIRMASK]
// mc/reg00013.H

//>> [MBA_SCOMFIR_MISCFIRWOF]
static const uint64_t MBA_SCOMFIR_MISCFIRWOF = 0x0c010f08ull;

static const uint32_t MBA_SCOMFIR_MISCFIRWOF_MISCFIRWOF_FIR_WOF = 0;
static const uint32_t MBA_SCOMFIR_MISCFIRWOF_MISCFIRWOF_FIR_WOF_LEN = 12;
//<< [MBA_SCOMFIR_MISCFIRWOF]
// mc/reg00013.H

//>> [MBA_SCOMFIR_WATPATB1]
static const uint64_t MBA_SCOMFIR_WATPATB1 = 0x0c010f87ull;

static const uint32_t MBA_SCOMFIR_WATPATB1_WAT_PATTERN_B1 = 0;
static const uint32_t MBA_SCOMFIR_WATPATB1_WAT_PATTERN_B1_LEN = 44;
//<< [MBA_SCOMFIR_WATPATB1]
// mc/reg00013.H

//>> [CC_ATOMIC_LOCK_REG]
static const uint64_t CC_ATOMIC_LOCK_REG = 0x0c0303ffull;

static const uint32_t CC_ATOMIC_LOCK_REG_LOCK_ENABLE = 0;
static const uint32_t CC_ATOMIC_LOCK_REG_ID = 1;
static const uint32_t CC_ATOMIC_LOCK_REG_ID_LEN = 4;
static const uint32_t CC_ATOMIC_LOCK_REG_ACTIVITY = 8;
static const uint32_t CC_ATOMIC_LOCK_REG_ACTIVITY_LEN = 8;
//<< [CC_ATOMIC_LOCK_REG]
// mc/reg00013.H

//>> [PRIMARY_ADDRESS_REG]
static const uint64_t PRIMARY_ADDRESS_REG = 0x0c0f0000ull;

static const uint32_t PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS = 0;
static const uint32_t PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN = 6;
//<< [PRIMARY_ADDRESS_REG]
// mc/reg00013.H

//>> [SCAN_UPDATEDR_LONG]
static const uint64_t SCAN_UPDATEDR_LONG = 0x0c03b000ull;

static const uint32_t SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG = 0;
static const uint32_t SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN = 32;
//<< [SCAN_UPDATEDR_LONG]
// mc/reg00013.H

//>> [TRA0_TR0_CONFIG_9]
static const uint64_t TRA0_TR0_CONFIG_9 = 0x0c010409ull;

static const uint32_t TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t TRA0_TR0_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t TRA0_TR0_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t TRA0_TR0_CONFIG_9_SPARE_LT = 37;
//<< [TRA0_TR0_CONFIG_9]
// mc/reg00013.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00013_unused.H"
#endif
#endif
