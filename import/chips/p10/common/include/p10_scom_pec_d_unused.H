/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_d_unused.H $     */
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

#ifndef __p10_scom_pec_d_H_UNUSED__
#define __p10_scom_pec_d_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [CC_ATOMIC_LOCK_REG]
static const uint64_t CC_ATOMIC_LOCK_REG = 0x080303ffull;

static const uint32_t CC_ATOMIC_LOCK_REG_LOCK_ENABLE = 0;
static const uint32_t CC_ATOMIC_LOCK_REG_ID = 1;
static const uint32_t CC_ATOMIC_LOCK_REG_ID_LEN = 4;
static const uint32_t CC_ATOMIC_LOCK_REG_ACTIVITY = 8;
static const uint32_t CC_ATOMIC_LOCK_REG_ACTIVITY_LEN = 8;
//<< [CC_ATOMIC_LOCK_REG]
// pec/reg00013.H

//>> [PB_PBCQ_PEPBREGS_DRPPRICTL_REG]
static const uint64_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG = 0x03011801ull;

static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK = 0;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK_LEN = 6;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY = 6;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING = 7;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT = 8;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT_LEN = 9;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC = 17;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC_LEN = 6;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER = 23;
static const uint32_t PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER_LEN = 3;
//<< [PB_PBCQ_PEPBREGS_DRPPRICTL_REG]
// pec/reg00013.H

//>> [PRIMARY_ADDRESS_REG]
static const uint64_t PRIMARY_ADDRESS_REG = 0x080f0000ull;

static const uint32_t PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS = 0;
static const uint32_t PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN = 6;
//<< [PRIMARY_ADDRESS_REG]
// pec/reg00013.H

//>> [SCAN_UPDATEDR_LONG]
static const uint64_t SCAN_UPDATEDR_LONG = 0x0803b000ull;

static const uint32_t SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG = 0;
static const uint32_t SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN = 32;
//<< [SCAN_UPDATEDR_LONG]
// pec/reg00013.H

//>> [TOP0_IXCS]
static const uint64_t TOP0_IXCS = 0x08011110ull;
//<< [TOP0_IXCS]
// pec/reg00013.H

//>> [TOP1_IXDATA0]
static const uint64_t TOP1_IXDATA0 = 0x0801150cull;

static const uint32_t TOP1_IXDATA0_IXDATA0_DATA = 0;
static const uint32_t TOP1_IXDATA0_IXDATA0_DATA_LEN = 64;
//<< [TOP1_IXDATA0]
// pec/reg00013.H

//>> [TOP1_IXRADR0]
static const uint64_t TOP1_IXRADR0 = 0x0801150aull;

static const uint32_t TOP1_IXRADR0_IXRADR0_ADDR = 0;
static const uint32_t TOP1_IXRADR0_IXRADR0_ADDR_LEN = 12;
//<< [TOP1_IXRADR0]
// pec/reg00013.H

//>> [TRA0_TR0_CONFIG_9]
static const uint64_t TRA0_TR0_CONFIG_9 = 0x08010409ull;

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
// pec/reg00013.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00013_unused.H"
#endif
#endif
