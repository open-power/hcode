/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_4_unused.H $    */
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

#ifndef __p10_scom_pauc_4_H_UNUSED__
#define __p10_scom_pauc_4_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_ARB_CSCR]
static const uint64_t DL_PPE_WRAP_ARB_CSCR_RW = 0x10012c4aull;
static const uint64_t DL_PPE_WRAP_ARB_CSCR_WO_CLEAR = 0x10012c4bull;
static const uint64_t DL_PPE_WRAP_ARB_CSCR_WO_OR = 0x10012c4cull;

static const uint32_t DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE = 0;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE = 1;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS = 2;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS = 3;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE = 4;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR = 5;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_SPARE_6_7 = 6;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_SPARE_6_7_LEN = 2;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX = 47;
static const uint32_t DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX_LEN = 13;
//<< [DL_PPE_WRAP_ARB_CSCR]
// pauc/reg00004.H

//>> [PB_TL_LINK_RT_DELAY_CTL_REG]
static const uint64_t PB_TL_LINK_RT_DELAY_CTL_REG = 0x10011819ull;

static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET = 0;
static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET_LEN = 2;
static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET = 2;
static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET_LEN = 2;
static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT = 4;
static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT_LEN = 2;
static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT = 6;
static const uint32_t PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT_LEN = 2;
//<< [PB_TL_LINK_RT_DELAY_CTL_REG]
// pauc/reg00004.H

//>> [PB_TL_LINK_SYN_23_REG]
static const uint64_t PB_TL_LINK_SYN_23_REG = 0x10011813ull;

static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0 = 0;
static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0_LEN = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1 = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1_LEN = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2 = 16;
static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2_LEN = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3 = 24;
static const uint32_t PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3_LEN = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0 = 32;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0_LEN = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1 = 40;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1_LEN = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2 = 48;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2_LEN = 8;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3 = 56;
static const uint32_t PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3_LEN = 8;
//<< [PB_TL_LINK_SYN_23_REG]
// pauc/reg00004.H

//>> [PHY_PPE_WRAP_XIRAMGA]
static const uint64_t PHY_PPE_WRAP_XIRAMGA = 0x10012c12ull;

static const uint32_t PHY_PPE_WRAP_XIRAMGA_GA_IR = 0;
static const uint32_t PHY_PPE_WRAP_XIRAMGA_GA_IR_LEN = 32;
static const uint32_t PHY_PPE_WRAP_XIRAMGA_RA_SPRG0 = 32;
static const uint32_t PHY_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN = 32;
//<< [PHY_PPE_WRAP_XIRAMGA]
// pauc/reg00004.H

//>> [REGION_CCFLUSH_STATUS]
static const uint64_t REGION_CCFLUSH_STATUS = 0x10030016ull;

static const uint32_t REGION_CCFLUSH_STATUS_REGION_CCFLUSH = 4;
static const uint32_t REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN = 15;
//<< [REGION_CCFLUSH_STATUS]
// pauc/reg00004.H

//>> [TXIRLM_REGS_TX_IMPCAL1_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL1_PB = 0x800f05c010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL = 49;
static const uint32_t TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL = 50;
//<< [TXIRLM_REGS_TX_IMPCAL1_PB]
// pauc/reg00004.H

//>> [TXIRLM_REGS_TX_IMPCAL_NVAL_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_NVAL_PB = 0x800f1dc010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N_LEN = 9;
//<< [TXIRLM_REGS_TX_IMPCAL_NVAL_PB]
// pauc/reg00004.H

//>> [TXIRLM_REGS_TX_IMPCAL_SWO3_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_SWO3_PB = 0x800f45c010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15 = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15_LEN = 16;
//<< [TXIRLM_REGS_TX_IMPCAL_SWO3_PB]
// pauc/reg00004.H

//>> [TXIRLM_REGS_ZCAL_FIR_PB]
static const uint64_t TXIRLM_REGS_ZCAL_FIR_PB = 0x800f89c010012c3full;

static const uint32_t TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL = 48;
static const uint32_t TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL_LEN = 2;
//<< [TXIRLM_REGS_ZCAL_FIR_PB]
// pauc/reg00004.H

//>> [EPS_THERM_WSUB_INJECT_REG]
static const uint64_t EPS_THERM_WSUB_INJECT_REG = 0x10050011ull;

static const uint32_t EPS_THERM_WSUB_INJECT_REG_TRIP = 0;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_TRIP_LEN = 2;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_MODE = 2;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_MODE_LEN = 2;
//<< [EPS_THERM_WSUB_INJECT_REG]
// pauc/reg00004.H

//>> [PCB_OPCG_GO]
static const uint64_t PCB_OPCG_GO = 0x10030020ull;

static const uint32_t PCB_OPCG_GO_PCB_OPCGGO = 0;
//<< [PCB_OPCG_GO]
// pauc/reg00004.H

//>> [TRA0_TR1_CONFIG_4]
static const uint64_t TRA0_TR1_CONFIG_4 = 0x10010447ull;

static const uint32_t TRA0_TR1_CONFIG_4_A = 0;
static const uint32_t TRA0_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t TRA0_TR1_CONFIG_4_B = 24;
static const uint32_t TRA0_TR1_CONFIG_4_B_LEN = 24;
//<< [TRA0_TR1_CONFIG_4]
// pauc/reg00004.H

//>> [TRA1_TR0_CONFIG_2]
static const uint64_t TRA1_TR0_CONFIG_2 = 0x10010485ull;

static const uint32_t TRA1_TR0_CONFIG_2_A = 0;
static const uint32_t TRA1_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t TRA1_TR0_CONFIG_2_B = 24;
static const uint32_t TRA1_TR0_CONFIG_2_B_LEN = 24;
//<< [TRA1_TR0_CONFIG_2]
// pauc/reg00004.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00004_unused.H"
#endif
#endif
