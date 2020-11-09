/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_3_unused.H $    */
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

#ifndef __p10_scom_pauc_3_H_UNUSED__
#define __p10_scom_pauc_3_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_ARB_CSDR]
static const uint64_t DL_PPE_WRAP_ARB_CSDR = 0x10012c4eull;

static const uint32_t DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA = 0;
static const uint32_t DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA_LEN = 64;
//<< [DL_PPE_WRAP_ARB_CSDR]
// pauc/reg00003.H

//>> [DL_PPE_WRAP_XIDBGINF]
static const uint64_t DL_PPE_WRAP_XIDBGINF = 0x10012c5full;

static const uint32_t DL_PPE_WRAP_XIDBGINF_SRR0 = 0;
static const uint32_t DL_PPE_WRAP_XIDBGINF_SRR0_LEN = 30;
static const uint32_t DL_PPE_WRAP_XIDBGINF_LR = 32;
static const uint32_t DL_PPE_WRAP_XIDBGINF_LR_LEN = 32;
//<< [DL_PPE_WRAP_XIDBGINF]
// pauc/reg00003.H

//>> [EPS_FIR_ANY_LOCAL_ERR_MASK]
static const uint64_t EPS_FIR_ANY_LOCAL_ERR_MASK = 0x10040080ull;

static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB = 0;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB = 1;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB = 2;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB = 3;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB = 4;
//<< [EPS_FIR_ANY_LOCAL_ERR_MASK]
// pauc/reg00003.H

//>> [EPS_THERM_WSUB_SKITTER_DATA1]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA1 = 0x1005001aull;
//<< [EPS_THERM_WSUB_SKITTER_DATA1]
// pauc/reg00003.H

//>> [LXSTOP_INTERRUPT_REG]
static const uint64_t LXSTOP_INTERRUPT_REG = 0x100f002aull;

static const uint32_t LXSTOP_INTERRUPT_REG_LXSTOP = 0;
//<< [LXSTOP_INTERRUPT_REG]
// pauc/reg00003.H

//>> [PB_CFG_CNPM_REG]
static const uint64_t PB_CFG_CNPM_REG = 0x1001181full;

static const uint32_t PB_CFG_CNPM_REG_EN = 0;
static const uint32_t PB_CFG_CNPM_REG_RESET_MODE = 1;
static const uint32_t PB_CFG_CNPM_REG_COUNTER_MODE = 2;
static const uint32_t PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS = 3;
static const uint32_t PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE = 4;
static const uint32_t PB_CFG_CNPM_REG_EXTERNAL_FREEZE = 5;
static const uint32_t PB_CFG_CNPM_REG_0_1_OP = 6;
static const uint32_t PB_CFG_CNPM_REG_0_1_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_2_3_OP = 8;
static const uint32_t PB_CFG_CNPM_REG_2_3_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_4_5_OP = 10;
static const uint32_t PB_CFG_CNPM_REG_4_5_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_6_7_OP = 12;
static const uint32_t PB_CFG_CNPM_REG_6_7_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_8_9_OP = 14;
static const uint32_t PB_CFG_CNPM_REG_8_9_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_10_11_OP = 16;
static const uint32_t PB_CFG_CNPM_REG_10_11_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_12_13_OP = 18;
static const uint32_t PB_CFG_CNPM_REG_12_13_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_14_15_OP = 20;
static const uint32_t PB_CFG_CNPM_REG_14_15_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_16_17_OP = 22;
static const uint32_t PB_CFG_CNPM_REG_16_17_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_18_19_OP = 24;
static const uint32_t PB_CFG_CNPM_REG_18_19_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_20_21_OP = 26;
static const uint32_t PB_CFG_CNPM_REG_20_21_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_22_23_OP = 28;
static const uint32_t PB_CFG_CNPM_REG_22_23_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_24_25_OP = 30;
static const uint32_t PB_CFG_CNPM_REG_24_25_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_26_27_OP = 32;
static const uint32_t PB_CFG_CNPM_REG_26_27_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_28_29_OP = 34;
static const uint32_t PB_CFG_CNPM_REG_28_29_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_30_31_OP = 36;
static const uint32_t PB_CFG_CNPM_REG_30_31_OP_LEN = 2;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU0 = 38;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU0_LEN = 3;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU1 = 41;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU1_LEN = 3;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU2 = 44;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU2_LEN = 3;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU3 = 47;
static const uint32_t PB_CFG_CNPM_REG_CASCADE_PMU3_LEN = 3;
static const uint32_t PB_CFG_CNPM_REG_SPARE = 50;
static const uint32_t PB_CFG_CNPM_REG_SPARE_LEN = 6;
//<< [PB_CFG_CNPM_REG]
// pauc/reg00003.H

//>> [PB_MAILBOX_DATA_REG]
static const uint64_t PB_MAILBOX_DATA_REG = 0x1001182full;
//<< [PB_MAILBOX_DATA_REG]
// pauc/reg00003.H

//>> [PB_PMU0_CNPM_COUNTER]
static const uint64_t PB_PMU0_CNPM_COUNTER = 0x10011821ull;

static const uint32_t PB_PMU0_CNPM_COUNTER_0 = 0;
static const uint32_t PB_PMU0_CNPM_COUNTER_0_LEN = 16;
static const uint32_t PB_PMU0_CNPM_COUNTER_1 = 16;
static const uint32_t PB_PMU0_CNPM_COUNTER_1_LEN = 16;
static const uint32_t PB_PMU0_CNPM_COUNTER_2 = 32;
static const uint32_t PB_PMU0_CNPM_COUNTER_2_LEN = 16;
static const uint32_t PB_PMU0_CNPM_COUNTER_3 = 48;
static const uint32_t PB_PMU0_CNPM_COUNTER_3_LEN = 16;
//<< [PB_PMU0_CNPM_COUNTER]
// pauc/reg00003.H

//>> [PB_TL_LINK_DATA_01_CFG_REG]
static const uint64_t PB_TL_LINK_DATA_01_CFG_REG = 0x10011810ull;

static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0 = 0;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT = 1;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT_LEN = 7;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1 = 8;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT = 9;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT_LEN = 7;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT = 16;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT_LEN = 8;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT = 24;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT_LEN = 8;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT = 32;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT_LEN = 5;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT = 37;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2 = 38;
static const uint32_t PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2_LEN = 2;
//<< [PB_TL_LINK_DATA_01_CFG_REG]
// pauc/reg00003.H

//>> [PHASE_COUNTER_RESET]
static const uint64_t PHASE_COUNTER_RESET = 0x10030028ull;

static const uint32_t PHASE_COUNTER_RESET_PHASECOUNTER_RESET = 0;
//<< [PHASE_COUNTER_RESET]
// pauc/reg00003.H

//>> [PHY_PPE_WRAP_MIB_XISGB]
static const uint64_t PHY_PPE_WRAP_MIB_XISGB = 0x10012c18ull;

static const uint32_t PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS = 0;
static const uint32_t PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS_LEN = 32;
static const uint32_t P10_20_PHY_PPE_WRAP_MIB_XISGB_STORE_ADDRESS = 0; // p10:20,
static const uint32_t P10_20_PHY_PPE_WRAP_MIB_XISGB_STORE_ADDRESS_LEN = 32;
static const uint32_t PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING = 35;
static const uint32_t P10_20_PHY_PPE_WRAP_MIB_XISGB_PPE_XIMEM_MEM_IMPRECISE_ERROR_PENDING = 35; // p10:20,
static const uint32_t PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID = 36;
static const uint32_t PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID_LEN = 4;
static const uint32_t P10_20_PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID = 36; // p10:20,
static const uint32_t P10_20_PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID_LEN = 4;
static const uint32_t PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING = 63;
static const uint32_t P10_20_PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING = 63; // p10:20,
//<< [PHY_PPE_WRAP_MIB_XISGB]
// pauc/reg00003.H

//>> [PHY_PPE_WRAP_SCOM_WORK_REG1]
static const uint64_t PHY_PPE_WRAP_SCOM_WORK_REG1 = 0x10012c21ull;

static const uint32_t PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 = 0;
static const uint32_t PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN = 32;
//<< [PHY_PPE_WRAP_SCOM_WORK_REG1]
// pauc/reg00003.H

//>> [TRA0_TR0_CONFIG_3]
static const uint64_t TRA0_TR0_CONFIG_3 = 0x10010406ull;

static const uint32_t TRA0_TR0_CONFIG_3_C = 0;
static const uint32_t TRA0_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_3_D = 24;
static const uint32_t TRA0_TR0_CONFIG_3_D_LEN = 24;
//<< [TRA0_TR0_CONFIG_3]
// pauc/reg00003.H

//>> [TXIRLM_REGS_SPARE_MODE_PB]
static const uint64_t TXIRLM_REGS_SPARE_MODE_PB = 0x800f7dc010012c3full;

static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_0 = 48;
static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_1 = 49;
static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_2 = 50;
static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_3 = 51;
static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_4 = 52;
static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_5 = 53;
static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_6 = 54;
static const uint32_t TXIRLM_REGS_SPARE_MODE_PB_7 = 55;
//<< [TXIRLM_REGS_SPARE_MODE_PB]
// pauc/reg00003.H

//>> [TXIRLM_REGS_TX_IMPCAL_SWO7_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_SWO7_PB = 0x800f65c010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31 = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31_LEN = 16;
//<< [TXIRLM_REGS_TX_IMPCAL_SWO7_PB]
// pauc/reg00003.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00003_unused.H"
#endif
#endif
