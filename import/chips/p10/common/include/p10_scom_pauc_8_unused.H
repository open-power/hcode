/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pauc_8_unused.H $    */
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

#ifndef __p10_scom_pauc_8_H_UNUSED__
#define __p10_scom_pauc_8_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> [DL_PPE_WRAP_MIB_XIMEM]
static const uint64_t DL_PPE_WRAP_MIB_XIMEM = 0x10012c57ull;

static const uint32_t DL_PPE_WRAP_MIB_XIMEM_ADDR = 0;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_ADDR_LEN = 32;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_R_NW = 32;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_BUSY = 33;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE = 35;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE_LEN = 8;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_LINE_MODE = 43;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_ERROR = 49;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_ERROR_LEN = 3;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING = 62;
static const uint32_t DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING = 63;
//<< [DL_PPE_WRAP_MIB_XIMEM]
// pauc/reg00008.H

//>> [DL_PPE_WRAP_XIRAMDBG]
static const uint64_t DL_PPE_WRAP_XIRAMDBG = 0x10012c53ull;

static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_HS = 0;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_HC = 1;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_HC_LEN = 3;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_HCP = 4;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_RIP = 5;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_SIP = 6;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_TRAP = 7;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_IAC = 8;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC = 9;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN = 3;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_RDAC = 12;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_WDAC = 13;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE = 14;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_TRH = 15;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_SMS = 16;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN = 4;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP = 20;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_EP = 21;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_PTR = 24;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_ST = 25;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_MFE = 28;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_MCS = 29;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN = 3;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 = 32;
static const uint32_t DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN = 32;
//<< [DL_PPE_WRAP_XIRAMDBG]
// pauc/reg00008.H

//>> [PB_CFG_TLPM_REG]
static const uint64_t PB_CFG_TLPM_REG = 0x1001181aull;

static const uint32_t PB_CFG_TLPM_REG_EN = 0;
static const uint32_t PB_CFG_TLPM_REG_RESET_MODE = 1;
static const uint32_t PB_CFG_TLPM_REG_COUNTER_MODE = 2;
static const uint32_t PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS = 3;
static const uint32_t PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE = 4;
static const uint32_t PB_CFG_TLPM_REG_EXTERNAL_FREEZE = 5;
static const uint32_t PB_CFG_TLPM_REG_0_1_OP = 6;
static const uint32_t PB_CFG_TLPM_REG_0_1_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_2_3_OP = 8;
static const uint32_t PB_CFG_TLPM_REG_2_3_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_4_5_OP = 10;
static const uint32_t PB_CFG_TLPM_REG_4_5_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_6_7_OP = 12;
static const uint32_t PB_CFG_TLPM_REG_6_7_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_8_9_OP = 14;
static const uint32_t PB_CFG_TLPM_REG_8_9_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_10_11_OP = 16;
static const uint32_t PB_CFG_TLPM_REG_10_11_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_12_13_OP = 18;
static const uint32_t PB_CFG_TLPM_REG_12_13_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_14_15_OP = 20;
static const uint32_t PB_CFG_TLPM_REG_14_15_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_16_17_OP = 22;
static const uint32_t PB_CFG_TLPM_REG_16_17_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_18_19_OP = 24;
static const uint32_t PB_CFG_TLPM_REG_18_19_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_20_21_OP = 26;
static const uint32_t PB_CFG_TLPM_REG_20_21_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_22_23_OP = 28;
static const uint32_t PB_CFG_TLPM_REG_22_23_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_24_25_OP = 30;
static const uint32_t PB_CFG_TLPM_REG_24_25_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_26_27_OP = 32;
static const uint32_t PB_CFG_TLPM_REG_26_27_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_28_29_OP = 34;
static const uint32_t PB_CFG_TLPM_REG_28_29_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_30_31_OP = 36;
static const uint32_t PB_CFG_TLPM_REG_30_31_OP_LEN = 2;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU0 = 38;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU0_LEN = 3;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU1 = 41;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU1_LEN = 3;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU2 = 44;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU2_LEN = 3;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU3 = 47;
static const uint32_t PB_CFG_TLPM_REG_CASCADE_PMU3_LEN = 3;
static const uint32_t PB_CFG_TLPM_REG_SPARE = 50;
static const uint32_t PB_CFG_TLPM_REG_SPARE_LEN = 6;
//<< [PB_CFG_TLPM_REG]
// pauc/reg00008.H

//>> [PB_PMU3_CNPM_COUNTER]
static const uint64_t PB_PMU3_CNPM_COUNTER = 0x10011824ull;

static const uint32_t PB_PMU3_CNPM_COUNTER_0 = 0;
static const uint32_t PB_PMU3_CNPM_COUNTER_0_LEN = 16;
static const uint32_t PB_PMU3_CNPM_COUNTER_1 = 16;
static const uint32_t PB_PMU3_CNPM_COUNTER_1_LEN = 16;
static const uint32_t PB_PMU3_CNPM_COUNTER_2 = 32;
static const uint32_t PB_PMU3_CNPM_COUNTER_2_LEN = 16;
static const uint32_t PB_PMU3_CNPM_COUNTER_3 = 48;
static const uint32_t PB_PMU3_CNPM_COUNTER_3_LEN = 16;
//<< [PB_PMU3_CNPM_COUNTER]
// pauc/reg00008.H

//>> [PB_TL_LINK_DATA_23_CFG_REG]
static const uint64_t PB_TL_LINK_DATA_23_CFG_REG = 0x10011811ull;

static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0 = 0;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT = 1;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT_LEN = 7;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1 = 8;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT = 9;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT_LEN = 7;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT = 16;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT_LEN = 8;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT = 24;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT_LEN = 8;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT = 32;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT_LEN = 5;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT = 37;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2 = 38;
static const uint32_t PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2_LEN = 2;
//<< [PB_TL_LINK_DATA_23_CFG_REG]
// pauc/reg00008.H

//>> [PHY_PPE_WRAP_SCOM_CNTL]
static const uint64_t PHY_PPE_WRAP_SCOM_CNTL = 0x10012c20ull;

static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET = 0;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN = 1;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR = 2;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING = 3;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING_LEN = 2;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY = 5;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY_LEN = 3;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY = 8;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY_LEN = 3;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN = 11;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN = 12;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN = 13;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN = 14;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES = 15;
static const uint32_t PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES_LEN = 9;
//<< [PHY_PPE_WRAP_SCOM_CNTL]
// pauc/reg00008.H

//>> [TXIRLM_REGS_TX_IMPCAL_P_4X_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_P_4X_PB = 0x800f2dc010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X_LEN = 5;
//<< [TXIRLM_REGS_TX_IMPCAL_P_4X_PB]
// pauc/reg00008.H

//>> [TXIRLM_REGS_TX_IMPCAL_SWO5_PB]
static const uint64_t TXIRLM_REGS_TX_IMPCAL_SWO5_PB = 0x800f55c010012c3full;

static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39 = 48;
static const uint32_t TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39_LEN = 8;
//<< [TXIRLM_REGS_TX_IMPCAL_SWO5_PB]
// pauc/reg00008.H

//>> [TXIRLM_REGS_ZCAL_FIR_RESET_PB]
static const uint64_t TXIRLM_REGS_ZCAL_FIR_RESET_PB = 0x800f81c010012c3full;

static const uint32_t TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS = 62;
static const uint32_t TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET = 63;
//<< [TXIRLM_REGS_ZCAL_FIR_RESET_PB]
// pauc/reg00008.H

//>> [ASSIST_INTERRUPT_REG]
static const uint64_t ASSIST_INTERRUPT_REG = 0x100f0011ull;

static const uint32_t ASSIST_INTERRUPT_REG_ATTN = 0;
static const uint32_t ASSIST_INTERRUPT_REG_RECOV = 1;
static const uint32_t ASSIST_INTERRUPT_REG_XSTOP = 2;
static const uint32_t ASSIST_INTERRUPT_REG_LXSTOP = 3;
static const uint32_t ASSIST_INTERRUPT_REG_TYPE4 = 4;
//<< [ASSIST_INTERRUPT_REG]
// pauc/reg00008.H

//>> [EDRAM_STATUS]
static const uint64_t EDRAM_STATUS = 0x100f0029ull;

static const uint32_t EDRAM_STATUS_EDRAM_STAT = 0;
static const uint32_t EDRAM_STATUS_EDRAM_STAT_LEN = 4;
//<< [EDRAM_STATUS]
// pauc/reg00008.H

//>> [EPS_DBG_TRACE_REG_0]
static const uint64_t EPS_DBG_TRACE_REG_0 = 0x100107cdull;

static const uint32_t EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE = 0;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE = 1;
static const uint32_t EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE = 3;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE = 4;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE = 5;
static const uint32_t EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE = 6;
static const uint32_t EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE = 7;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL = 8;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL = 10;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL = 12;
static const uint32_t EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL = 14;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL = 16;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL = 18;
static const uint32_t EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP = 32;
static const uint32_t EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE = 33;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL = 34;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN = 5;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL = 39;
static const uint32_t EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN = 5;
static const uint32_t EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL = 44;
static const uint32_t EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN = 2;
static const uint32_t EPS_DBG_TRACE_REG_0_DBG_ARM_SEL = 46;
static const uint32_t EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN = 4;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL = 50;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN = 4;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL = 54;
static const uint32_t EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN = 4;
//<< [EPS_DBG_TRACE_REG_0]
// pauc/reg00008.H

//>> [EPS_PSC_PSCOM_ERROR_MASK]
static const uint64_t EPS_PSC_PSCOM_ERROR_MASK = 0x10010002ull;

static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR = 0;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR = 1;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR = 2;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR = 3;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR = 4;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR = 5;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE = 6;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE = 7;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH = 8;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN = 9;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH = 10;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR = 11;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD = 12;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID = 13;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR = 14;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT = 15;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION = 16;
static const uint32_t EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER = 17;
//<< [EPS_PSC_PSCOM_ERROR_MASK]
// pauc/reg00008.H

//>> [EPS_PSC_WRITE_PROTECT_RINGS_REG]
static const uint64_t EPS_PSC_WRITE_PROTECT_RINGS_REG = 0x10010006ull;

static const uint32_t EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS = 0;
static const uint32_t EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN = 32;
//<< [EPS_PSC_WRITE_PROTECT_RINGS_REG]
// pauc/reg00008.H

//>> [SCAN_CAPTUREDR_LONG]
static const uint64_t SCAN_CAPTUREDR_LONG = 0x1003d000ull;

static const uint32_t SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG = 0;
static const uint32_t SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN = 32;
//<< [SCAN_CAPTUREDR_LONG]
// pauc/reg00008.H

//>> [TRA1_TR0_CONFIG_0]
static const uint64_t TRA1_TR0_CONFIG_0 = 0x10010483ull;

static const uint32_t TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [TRA1_TR0_CONFIG_0]
// pauc/reg00008.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pauc/reg00008_unused.H"
#endif
#endif
