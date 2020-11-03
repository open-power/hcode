/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_7_unused.H $    */
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

#ifndef __p10_scom_pauc_7_H_UNUSED__
#define __p10_scom_pauc_7_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_SCOM_CNTL]
static const uint64_t DL_PPE_WRAP_SCOM_CNTL = 0x10012c60ull;

static const uint32_t DL_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET = 0;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN = 1;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR = 2;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING = 3;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING_LEN = 2;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY = 5;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY_LEN = 3;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY = 8;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY_LEN = 3;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN = 11;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN = 12;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN = 13;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN = 14;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES = 15;
static const uint32_t DL_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES_LEN = 9;
//<< [DL_PPE_WRAP_SCOM_CNTL]
// pauc/reg00007.H

//>> [EPS_FIR_LOCAL_WOF]
static const uint64_t EPS_FIR_LOCAL_WOF = 0x10040108ull;

static const uint32_t EPS_FIR_LOCAL_WOF_00 = 0;
static const uint32_t EPS_FIR_LOCAL_WOF_01 = 1;
static const uint32_t EPS_FIR_LOCAL_WOF_02 = 2;
static const uint32_t EPS_FIR_LOCAL_WOF_03 = 3;
static const uint32_t EPS_FIR_LOCAL_WOF_04 = 4;
static const uint32_t EPS_FIR_LOCAL_WOF_05 = 5;
static const uint32_t EPS_FIR_LOCAL_WOF_06 = 6;
static const uint32_t EPS_FIR_LOCAL_WOF_07 = 7;
static const uint32_t EPS_FIR_LOCAL_WOF_08 = 8;
static const uint32_t EPS_FIR_LOCAL_WOF_09 = 9;
static const uint32_t EPS_FIR_LOCAL_WOF_10 = 10;
static const uint32_t EPS_FIR_LOCAL_WOF_11 = 11;
static const uint32_t EPS_FIR_LOCAL_WOF_12 = 12;
static const uint32_t EPS_FIR_LOCAL_WOF_13 = 13;
static const uint32_t EPS_FIR_LOCAL_WOF_14 = 14;
static const uint32_t EPS_FIR_LOCAL_WOF_15 = 15;
static const uint32_t EPS_FIR_LOCAL_WOF_16 = 16;
static const uint32_t EPS_FIR_LOCAL_WOF_17 = 17;
static const uint32_t EPS_FIR_LOCAL_WOF_18 = 18;
static const uint32_t EPS_FIR_LOCAL_WOF_19 = 19;
static const uint32_t EPS_FIR_LOCAL_WOF_20 = 20;
static const uint32_t EPS_FIR_LOCAL_WOF_21 = 21;
static const uint32_t EPS_FIR_LOCAL_WOF_22 = 22;
static const uint32_t EPS_FIR_LOCAL_WOF_23 = 23;
static const uint32_t EPS_FIR_LOCAL_WOF_24 = 24;
static const uint32_t EPS_FIR_LOCAL_WOF_25 = 25;
static const uint32_t EPS_FIR_LOCAL_WOF_26 = 26;
static const uint32_t EPS_FIR_LOCAL_WOF_27 = 27;
static const uint32_t EPS_FIR_LOCAL_WOF_28 = 28;
static const uint32_t EPS_FIR_LOCAL_WOF_29 = 29;
static const uint32_t EPS_FIR_LOCAL_WOF_30 = 30;
static const uint32_t EPS_FIR_LOCAL_WOF_31 = 31;
static const uint32_t EPS_FIR_LOCAL_WOF_32 = 32;
static const uint32_t EPS_FIR_LOCAL_WOF_33 = 33;
static const uint32_t EPS_FIR_LOCAL_WOF_34 = 34;
static const uint32_t EPS_FIR_LOCAL_WOF_35 = 35;
static const uint32_t EPS_FIR_LOCAL_WOF_36 = 36;
static const uint32_t EPS_FIR_LOCAL_WOF_37 = 37;
static const uint32_t EPS_FIR_LOCAL_WOF_38 = 38;
static const uint32_t EPS_FIR_LOCAL_WOF_39 = 39;
static const uint32_t EPS_FIR_LOCAL_WOF_40 = 40;
static const uint32_t EPS_FIR_LOCAL_WOF_41 = 41;
static const uint32_t EPS_FIR_LOCAL_WOF_42 = 42;
static const uint32_t EPS_FIR_LOCAL_WOF_43 = 43;
static const uint32_t EPS_FIR_LOCAL_WOF_44 = 44;
static const uint32_t EPS_FIR_LOCAL_WOF_45 = 45;
static const uint32_t EPS_FIR_LOCAL_WOF_46 = 46;
static const uint32_t EPS_FIR_LOCAL_WOF_47 = 47;
static const uint32_t EPS_FIR_LOCAL_WOF_48 = 48;
static const uint32_t EPS_FIR_LOCAL_WOF_49 = 49;
static const uint32_t EPS_FIR_LOCAL_WOF_50 = 50;
static const uint32_t EPS_FIR_LOCAL_WOF_51 = 51;
static const uint32_t EPS_FIR_LOCAL_WOF_52 = 52;
static const uint32_t EPS_FIR_LOCAL_WOF_53 = 53;
static const uint32_t EPS_FIR_LOCAL_WOF_54 = 54;
static const uint32_t EPS_FIR_LOCAL_WOF_55 = 55;
static const uint32_t EPS_FIR_LOCAL_WOF_56 = 56;
static const uint32_t EPS_FIR_LOCAL_WOF_57 = 57;
static const uint32_t EPS_FIR_LOCAL_WOF_58 = 58;
static const uint32_t EPS_FIR_LOCAL_WOF_59 = 59;
static const uint32_t EPS_FIR_LOCAL_WOF_60 = 60;
static const uint32_t EPS_FIR_LOCAL_WOF_61 = 61;
static const uint32_t EPS_FIR_LOCAL_WOF_62 = 62;
static const uint32_t EPS_FIR_LOCAL_WOF_63 = 63;
//<< [EPS_FIR_LOCAL_WOF]
// pauc/reg00007.H

//>> [EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG = 0x10050016ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC = 0;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN = 3;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT = 36;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN = 2;
//<< [EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
// pauc/reg00007.H

//>> [HANG_PULSE_6_REG]
static const uint64_t HANG_PULSE_6_REG = 0x100f0026ull;

static const uint32_t HANG_PULSE_6_REG_HANG_PULSE_REG_6 = 0;
static const uint32_t HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN = 6;
static const uint32_t HANG_PULSE_6_REG_SUPPRESS_HANG_6 = 6;
//<< [HANG_PULSE_6_REG]
// pauc/reg00007.H

//>> [HOSTATTN_INTERRUPT_REG]
static const uint64_t HOSTATTN_INTERRUPT_REG = 0x100f002bull;

static const uint32_t HOSTATTN_INTERRUPT_REG_TYPE4 = 0;
//<< [HOSTATTN_INTERRUPT_REG]
// pauc/reg00007.H

//>> [PB_PMU1_TLPM_COUNTER]
static const uint64_t PB_PMU1_TLPM_COUNTER = 0x1001181cull;

static const uint32_t PB_PMU1_TLPM_COUNTER_0 = 0;
static const uint32_t PB_PMU1_TLPM_COUNTER_0_LEN = 16;
static const uint32_t PB_PMU1_TLPM_COUNTER_1 = 16;
static const uint32_t PB_PMU1_TLPM_COUNTER_1_LEN = 16;
static const uint32_t PB_PMU1_TLPM_COUNTER_2 = 32;
static const uint32_t PB_PMU1_TLPM_COUNTER_2_LEN = 16;
static const uint32_t PB_PMU1_TLPM_COUNTER_3 = 48;
static const uint32_t PB_PMU1_TLPM_COUNTER_3_LEN = 16;
//<< [PB_PMU1_TLPM_COUNTER]
// pauc/reg00007.H

//>> [RECOV_UNMASKED]
static const uint64_t RECOV_UNMASKED = 0x10040011ull;

static const uint32_t RECOV_UNMASKED_IN = 1;
static const uint32_t RECOV_UNMASKED_IN_LEN = 53;
//<< [RECOV_UNMASKED]
// pauc/reg00007.H

//>> [SCAN_UPDATEDR]
static const uint64_t SCAN_UPDATEDR = 0x1003a000ull;

static const uint32_t SCAN_UPDATEDR_SCAN_UPDATEDR_REG = 0;
static const uint32_t SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN = 32;
//<< [SCAN_UPDATEDR]
// pauc/reg00007.H

//>> [SPATTN_UNMASKED]
static const uint64_t SPATTN_UNMASKED = 0x10040012ull;

static const uint32_t SPATTN_UNMASKED_IN = 1;
static const uint32_t SPATTN_UNMASKED_IN_LEN = 35;
//<< [SPATTN_UNMASKED]
// pauc/reg00007.H

//>> [TRA0_TR1_CONFIG_3]
static const uint64_t TRA0_TR1_CONFIG_3 = 0x10010446ull;

static const uint32_t TRA0_TR1_CONFIG_3_C = 0;
static const uint32_t TRA0_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t TRA0_TR1_CONFIG_3_D = 24;
static const uint32_t TRA0_TR1_CONFIG_3_D_LEN = 24;
//<< [TRA0_TR1_CONFIG_3]
// pauc/reg00007.H

//>> [TRA1_TR0_CONFIG_5]
static const uint64_t TRA1_TR0_CONFIG_5 = 0x10010488ull;

static const uint32_t TRA1_TR0_CONFIG_5_C = 0;
static const uint32_t TRA1_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t TRA1_TR0_CONFIG_5_D = 24;
static const uint32_t TRA1_TR0_CONFIG_5_D_LEN = 24;
//<< [TRA1_TR0_CONFIG_5]
// pauc/reg00007.H

//>> [TXIRLM_REGS_TX_IMPCAL_PVAL_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_PVAL_PB = 0x800f25c010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_PVAL_PB_TX_ZCAL_P = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_PVAL_PB_TX_ZCAL_P_LEN = 9;
//<< [TXIRLM_REGS_TX_IMPCAL_PVAL_PB]
// pauc/reg00007.H

//>> [TXIRLM_REGS_ZCAL_FIR_MASK_PB]
static const uint64_t TXIRLM_REGS_ZCAL_FIR_MASK_PB = 0x800f91c010012c3full;

static const uint32_t TXIRLM_REGS_ZCAL_FIR_MASK_PB_ZCAL_FIR_ERRS_MASK = 48;
static const uint32_t TXIRLM_REGS_ZCAL_FIR_MASK_PB_ZCAL_FIR_ERRS_MASK_LEN = 2;
//<< [TXIRLM_REGS_ZCAL_FIR_MASK_PB]
// pauc/reg00007.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00007_unused.H"
#endif
#endif
