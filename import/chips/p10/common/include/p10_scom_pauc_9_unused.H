/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_9_unused.H $    */
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

#ifndef __p10_scom_pauc_9_H_UNUSED__
#define __p10_scom_pauc_9_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_SCOM_FLAGS]
static const uint64_t DL_PPE_WRAP_SCOM_FLAGS_RW = 0x10012c63ull;
static const uint64_t DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR = 0x10012c65ull;
static const uint64_t DL_PPE_WRAP_SCOM_FLAGS_WO_OR = 0x10012c64ull;

static const uint32_t DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD = 0;
static const uint32_t DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD_LEN = 16;
//<< [DL_PPE_WRAP_SCOM_FLAGS]
// pauc/reg00009.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK3 = 0x10040083ull;

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
// pauc/reg00009.H

//>> [EPS_THERM_WSUB_SKITTER_DATA2]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA2 = 0x1005001bull;
//<< [EPS_THERM_WSUB_SKITTER_DATA2]
// pauc/reg00009.H

//>> [EPS_THERM_WSUB_SKITTER_FORCE_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_FORCE_REG = 0x10050014ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ = 0;
//<< [EPS_THERM_WSUB_SKITTER_FORCE_REG]
// pauc/reg00009.H

//>> [MULTICAST_GROUP_2]
static const uint64_t MULTICAST_GROUP_2 = 0x100f0002ull;

static const uint32_t MULTICAST_GROUP_2_MULTICAST2_GROUP = 3;
static const uint32_t MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN = 3;
//<< [MULTICAST_GROUP_2]
// pauc/reg00009.H

//>> [PB_CFG_TLPM_MUX1_REG]
static const uint64_t PB_CFG_TLPM_MUX1_REG = 0x1001182cull;

static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0 = 0;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1 = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2 = 14;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3 = 21;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4 = 28;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5 = 35;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6 = 42;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7 = 49;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8 = 56;
static const uint32_t PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX1_REG_ALT_EVENTS = 63;
//<< [PB_CFG_TLPM_MUX1_REG]
// pauc/reg00009.H

//>> [PB_CFG_TLPM_MUX2_REG]
static const uint64_t PB_CFG_TLPM_MUX2_REG = 0x1001182dull;

static const uint32_t PB_CFG_TLPM_MUX2_REG_9 = 0;
static const uint32_t PB_CFG_TLPM_MUX2_REG_9_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX2_REG_10 = 7;
static const uint32_t PB_CFG_TLPM_MUX2_REG_10_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX2_REG_11 = 14;
static const uint32_t PB_CFG_TLPM_MUX2_REG_11_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX2_REG_12 = 21;
static const uint32_t PB_CFG_TLPM_MUX2_REG_12_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX2_REG_13 = 28;
static const uint32_t PB_CFG_TLPM_MUX2_REG_13_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX2_REG_14 = 35;
static const uint32_t PB_CFG_TLPM_MUX2_REG_14_LEN = 7;
static const uint32_t PB_CFG_TLPM_MUX2_REG_15 = 42;
static const uint32_t PB_CFG_TLPM_MUX2_REG_15_LEN = 7;
//<< [PB_CFG_TLPM_MUX2_REG]
// pauc/reg00009.H

//>> [PB_EN_DOB_ECC_ERR_REG]
static const uint64_t PB_EN_DOB_ECC_ERR_REG = 0x10011818ull;

static const uint32_t PB_EN_DOB_ECC_ERR_REG_01_UE = 0;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_01_UE_LEN = 4;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_01_CE = 4;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_01_CE_LEN = 4;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_01_SUE = 8;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_01_SUE_LEN = 4;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_23_UE = 12;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_23_UE_LEN = 4;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_23_CE = 16;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_23_CE_LEN = 4;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_23_SUE = 20;
static const uint32_t PB_EN_DOB_ECC_ERR_REG_23_SUE_LEN = 4;
//<< [PB_EN_DOB_ECC_ERR_REG]
// pauc/reg00009.H

//>> [PB_PERFTRACE_CFG_REG]
static const uint64_t PB_PERFTRACE_CFG_REG = 0x1001182bull;

static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE = 0;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE = 1;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE = 2;
static const uint32_t PB_PERFTRACE_CFG_REG_TSPARE6 = 3;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE = 4;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE = 5;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE = 6;
static const uint32_t PB_PERFTRACE_CFG_REG_TSPARE7 = 7;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT = 8;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT_LEN = 2;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT = 10;
static const uint32_t PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT_LEN = 2;
//<< [PB_PERFTRACE_CFG_REG]
// pauc/reg00009.H

//>> [PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
static const uint64_t PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB = 0x10012c26ull;

static const uint32_t PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE = 0;
static const uint32_t PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 = 1;
static const uint32_t PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0 = 2;
static const uint32_t PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0_LEN = 8;
static const uint32_t PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1 = 10;
static const uint32_t PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1_LEN = 22;
//<< [PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
// pauc/reg00009.H

//>> [PHY_PPE_WRAP_SCOM_WORK_REG2]
static const uint64_t PHY_PPE_WRAP_SCOM_WORK_REG2 = 0x10012c22ull;

static const uint32_t PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2 = 0;
static const uint32_t PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2_LEN = 32;
//<< [PHY_PPE_WRAP_SCOM_WORK_REG2]
// pauc/reg00009.H

//>> [TRA0_TR0_CONFIG_0]
static const uint64_t TRA0_TR0_CONFIG_0 = 0x10010403ull;

static const uint32_t TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [TRA0_TR0_CONFIG_0]
// pauc/reg00009.H

//>> [TRA0_TR1_CONFIG_9]
static const uint64_t TRA0_TR1_CONFIG_9 = 0x10010449ull;

static const uint32_t TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t TRA0_TR1_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t TRA0_TR1_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t TRA0_TR1_CONFIG_9_SPARE_LT = 37;
//<< [TRA0_TR1_CONFIG_9]
// pauc/reg00009.H

//>> [TRA0_TR1_TRACE_HI_DATA_REG]
static const uint64_t TRA0_TR1_TRACE_HI_DATA_REG = 0x10010440ull;

static const uint32_t TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [TRA0_TR1_TRACE_HI_DATA_REG]
// pauc/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00009_unused.H"
#endif
#endif
