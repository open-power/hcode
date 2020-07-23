/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_d_unused.H $    */
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

#ifndef __p10_scom_pauc_d_H_UNUSED__
#define __p10_scom_pauc_d_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [PB_PTL_FIR_WOF_REG]
static const uint64_t PB_PTL_FIR_WOF_REG = 0x10011808ull;

static const uint32_t PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF = 0;
static const uint32_t PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF_LEN = 40;
//<< [PB_PTL_FIR_WOF_REG]
// pauc/reg00013.H

//>> [PHY_PPE_WRAP_XIDBGPRO]
static const uint64_t PHY_PPE_WRAP_XIDBGPRO = 0x10012c15ull;

static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_HS = 0;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_HC = 1;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_HC_LEN = 3;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_HCP = 4;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_RIP = 5;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_SIP = 6;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP = 7;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_IAC = 8;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC = 9;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN = 3;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC = 12;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC = 13;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE = 14;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_TRH = 15;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_SMS = 16;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN = 4;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP = 20;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_EP = 21;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_PTR = 24;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_ST = 25;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_MFE = 28;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_MCS = 29;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN = 3;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_IAR = 32;
static const uint32_t PHY_PPE_WRAP_XIDBGPRO_IAR_LEN = 30;
//<< [PHY_PPE_WRAP_XIDBGPRO]
// pauc/reg00013.H

//>> [TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_SWO4_PB = 0x800f4dc010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31 = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31_LEN = 16;
//<< [TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
// pauc/reg00013.H

//>> [CC_ATOMIC_LOCK_REG]
static const uint64_t CC_ATOMIC_LOCK_REG = 0x100303ffull;

static const uint32_t CC_ATOMIC_LOCK_REG_LOCK_ENABLE = 0;
static const uint32_t CC_ATOMIC_LOCK_REG_ID = 1;
static const uint32_t CC_ATOMIC_LOCK_REG_ID_LEN = 4;
static const uint32_t CC_ATOMIC_LOCK_REG_ACTIVITY = 8;
static const uint32_t CC_ATOMIC_LOCK_REG_ACTIVITY_LEN = 8;
//<< [CC_ATOMIC_LOCK_REG]
// pauc/reg00013.H

//>> [PRIMARY_ADDRESS_REG]
static const uint64_t PRIMARY_ADDRESS_REG = 0x100f0000ull;

static const uint32_t PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS = 0;
static const uint32_t PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN = 6;
//<< [PRIMARY_ADDRESS_REG]
// pauc/reg00013.H

//>> [SCAN_UPDATEDR_LONG]
static const uint64_t SCAN_UPDATEDR_LONG = 0x1003b000ull;

static const uint32_t SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG = 0;
static const uint32_t SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN = 32;
//<< [SCAN_UPDATEDR_LONG]
// pauc/reg00013.H

//>> [TRA0_TR0_CONFIG_9]
static const uint64_t TRA0_TR0_CONFIG_9 = 0x10010409ull;

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
// pauc/reg00013.H

//>> [TRA0_TR1_CONFIG_0]
static const uint64_t TRA0_TR1_CONFIG_0 = 0x10010443ull;

static const uint32_t TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [TRA0_TR1_CONFIG_0]
// pauc/reg00013.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00013_unused.H"
#endif
#endif
