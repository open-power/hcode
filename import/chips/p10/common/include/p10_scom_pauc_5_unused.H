/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_5_unused.H $    */
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

#ifndef __p10_scom_pauc_5_H_UNUSED__
#define __p10_scom_pauc_5_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_XIDBGPRO]
static const uint64_t DL_PPE_WRAP_XIDBGPRO = 0x10012c55ull;

static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_HS = 0;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_HC = 1;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_HC_LEN = 3;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_HCP = 4;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_RIP = 5;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_SIP = 6;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_TRAP = 7;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_IAC = 8;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC = 9;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN = 3;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_RDAC = 12;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_WDAC = 13;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE = 14;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_TRH = 15;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_SMS = 16;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN = 4;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP = 20;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_EP = 21;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_PTR = 24;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_ST = 25;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_MFE = 28;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_MCS = 29;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN = 3;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_IAR = 32;
static const uint32_t DL_PPE_WRAP_XIDBGPRO_IAR_LEN = 30;
//<< [DL_PPE_WRAP_XIDBGPRO]
// pauc/reg00005.H

//>> [DL_PPE_WRAP_SCOM_WORK_REG1]
static const uint64_t DL_PPE_WRAP_SCOM_WORK_REG1 = 0x10012c61ull;

static const uint32_t DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 = 0;
static const uint32_t DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN = 32;
//<< [DL_PPE_WRAP_SCOM_WORK_REG1]
// pauc/reg00005.H

//>> [PB_CNPM_PMU_PRESCALER]
static const uint64_t PB_CNPM_PMU_PRESCALER = 0x10011820ull;

static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0 = 0;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1 = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2 = 4;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3 = 6;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0 = 8;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1 = 10;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2 = 12;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3 = 14;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0 = 16;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1 = 18;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2 = 20;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3 = 22;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0 = 24;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1 = 26;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2 = 28;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3 = 30;
static const uint32_t PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0 = 32;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1 = 34;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2 = 36;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3 = 38;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0 = 40;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1 = 42;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2 = 44;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3 = 46;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0 = 48;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1 = 50;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2 = 52;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3 = 54;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0 = 56;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1 = 58;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2 = 60;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2_LEN = 2;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3 = 62;
static const uint32_t PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3_LEN = 2;
//<< [PB_CNPM_PMU_PRESCALER]
// pauc/reg00005.H

//>> [PB_DOB01_DIB01_INT_ERR_REG]
static const uint64_t PB_DOB01_DIB01_INT_ERR_REG = 0x10011828ull;

static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR = 0;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR = 1;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR = 2;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR = 3;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR = 4;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR = 5;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR = 6;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR = 7;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR = 8;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR = 9;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR = 10;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW = 11;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW = 12;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW = 13;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW = 14;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW = 15;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW = 16;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW = 17;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW = 18;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW = 19;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW = 20;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW = 21;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW = 22;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW = 23;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW = 24;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW = 25;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW = 26;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW = 27;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW = 28;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW = 29;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW = 30;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW = 31;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW = 32;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR = 33;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR = 34;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR = 35;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW = 36;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW = 37;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW = 38;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW = 39;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW = 40;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW = 41;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW = 42;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW = 43;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW = 44;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW = 45;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW = 46;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW = 47;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW = 48;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW = 49;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW = 50;
static const uint32_t PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW = 51;
//<< [PB_DOB01_DIB01_INT_ERR_REG]
// pauc/reg00005.H

//>> [PB_MAILBOX_30_REG]
static const uint64_t PB_MAILBOX_30_REG = 0x10011836ull;
//<< [PB_MAILBOX_30_REG]
// pauc/reg00005.H

//>> [PB_MAILBOX_31_REG]
static const uint64_t PB_MAILBOX_31_REG = 0x10011837ull;
//<< [PB_MAILBOX_31_REG]
// pauc/reg00005.H

//>> [PB_PMU1_CNPM_COUNTER]
static const uint64_t PB_PMU1_CNPM_COUNTER = 0x10011822ull;

static const uint32_t PB_PMU1_CNPM_COUNTER_0 = 0;
static const uint32_t PB_PMU1_CNPM_COUNTER_0_LEN = 16;
static const uint32_t PB_PMU1_CNPM_COUNTER_1 = 16;
static const uint32_t PB_PMU1_CNPM_COUNTER_1_LEN = 16;
static const uint32_t PB_PMU1_CNPM_COUNTER_2 = 32;
static const uint32_t PB_PMU1_CNPM_COUNTER_2_LEN = 16;
static const uint32_t PB_PMU1_CNPM_COUNTER_3 = 48;
static const uint32_t PB_PMU1_CNPM_COUNTER_3_LEN = 16;
//<< [PB_PMU1_CNPM_COUNTER]
// pauc/reg00005.H

//>> [PB_TL_LINK_ERR_INJECT_REG]
static const uint64_t PB_TL_LINK_ERR_INJECT_REG = 0x1001180dull;

static const uint32_t PB_TL_LINK_ERR_INJECT_REG_STUCK = 0;
static const uint32_t PB_TL_LINK_ERR_INJECT_REG_SINGLE = 1;
static const uint32_t PB_TL_LINK_ERR_INJECT_REG_BIT_17 = 2;
static const uint32_t PB_TL_LINK_ERR_INJECT_REG_BIT_23 = 3;
static const uint32_t PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN = 4;
static const uint32_t PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD = 5;
static const uint32_t PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN = 6;
static const uint32_t PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD = 7;
//<< [PB_TL_LINK_ERR_INJECT_REG]
// pauc/reg00005.H

//>> [TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_SWO8_PB = 0x800f6dc010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39 = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39_LEN = 8;
//<< [TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
// pauc/reg00005.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK1]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1 = 0x10040081ull;

static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_XSTOP_ERR = 0;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_RECOV_ERR = 1;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_SPATTN_ERR = 2;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_LXSTOP_ERR = 3;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_HOSTATTN_ERR = 4;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_SYS_XSTOP_ERR = 5;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_SYS_XSTOP_STAGED_ERR = 6;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_DBG_TRIG_ERR = 7;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP01 = 12;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP02 = 13;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP03 = 14;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP04 = 15;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP05 = 16;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP06 = 17;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP07 = 18;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP08 = 19;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP09 = 20;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP10 = 21;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP11 = 22;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP12 = 23;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP13 = 24;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP14 = 25;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP15 = 26;
//<< [EPS_FIR_CLKSTOP_ON_XSTOP_MASK1]
// pauc/reg00005.H

//>> [EPS_THERM_WSUB_SKITTER_DATA0]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA0 = 0x10050019ull;
//<< [EPS_THERM_WSUB_SKITTER_DATA0]
// pauc/reg00005.H

//>> [EPS_THERM_WSUB_SKITTER_MODE_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_MODE_REG = 0x10050010ull;

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
// pauc/reg00005.H

//>> [TRA0_TR0_CONFIG_2]
static const uint64_t TRA0_TR0_CONFIG_2 = 0x10010405ull;

static const uint32_t TRA0_TR0_CONFIG_2_A = 0;
static const uint32_t TRA0_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_2_B = 24;
static const uint32_t TRA0_TR0_CONFIG_2_B_LEN = 24;
//<< [TRA0_TR0_CONFIG_2]
// pauc/reg00005.H

//>> [TRA1_TR0_TRACE_HI_DATA_REG]
static const uint64_t TRA1_TR0_TRACE_HI_DATA_REG = 0x10010480ull;

static const uint32_t TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [TRA1_TR0_TRACE_HI_DATA_REG]
// pauc/reg00005.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00005_unused.H"
#endif
#endif
