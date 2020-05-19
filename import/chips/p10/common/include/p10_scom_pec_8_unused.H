/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_8_unused.H $     */
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

#ifndef __p10_scom_pec_8_H_UNUSED__
#define __p10_scom_pec_8_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [IOPFIRMASK]
static const uint64_t IOPFIRMASK_RW = 0x08011503ull;
static const uint64_t IOPFIRMASK_WO_AND = 0x08011504ull;
static const uint64_t IOPFIRMASK_WO_OR = 0x08011505ull;

static const uint32_t IOPFIRMASK_PHY0_ECC_CE_MASK = 0;
static const uint32_t IOPFIRMASK_PHY0_ECC_UE_MASK = 1;
static const uint32_t IOPFIRMASK_PHY1_ECC_CE_MASK = 2;
static const uint32_t IOPFIRMASK_PHY1_ECC_UE_MASK = 3;
static const uint32_t IOPFIRMASK_SCOM0_ECC_CE_MASK = 4;
static const uint32_t IOPFIRMASK_SCOM0_ECC_UE_MASK = 5;
static const uint32_t IOPFIRMASK_SCOM1_ECC_CE_MASK = 6;
static const uint32_t IOPFIRMASK_SCOM1_ECC_UE_MASK = 7;
static const uint32_t IOPFIRMASK_SCRUB0_ECC_CE_MASK = 8;
static const uint32_t IOPFIRMASK_SCRUB0_ECC_UE_MASK = 9;
static const uint32_t IOPFIRMASK_SCRUB1_ECC_CE_MASK = 10;
static const uint32_t IOPFIRMASK_SCRUB1_ECC_UE_MASK = 11;
//<< [IOPFIRMASK]
// pec/reg00008.H

//>> [PIPEDINCTL4]
static const uint64_t PIPEDINCTL4 = 0x0801151dull;

static const uint32_t PIPEDINCTL4_RESERVED_63_0 = 0;
static const uint32_t PIPEDINCTL4_RESERVED_63_0_LEN = 64;
//<< [PIPEDINCTL4]
// pec/reg00008.H

//>> [ASSIST_INTERRUPT_REG]
static const uint64_t ASSIST_INTERRUPT_REG = 0x080f0011ull;

static const uint32_t ASSIST_INTERRUPT_REG_ATTN = 0;
static const uint32_t ASSIST_INTERRUPT_REG_RECOV = 1;
static const uint32_t ASSIST_INTERRUPT_REG_XSTOP = 2;
static const uint32_t ASSIST_INTERRUPT_REG_LXSTOP = 3;
static const uint32_t ASSIST_INTERRUPT_REG_TYPE4 = 4;
//<< [ASSIST_INTERRUPT_REG]
// pec/reg00008.H

//>> [EDRAM_STATUS]
static const uint64_t EDRAM_STATUS = 0x080f0029ull;

static const uint32_t EDRAM_STATUS_EDRAM_STAT = 0;
static const uint32_t EDRAM_STATUS_EDRAM_STAT_LEN = 4;
//<< [EDRAM_STATUS]
// pec/reg00008.H

//>> [EPS_DBG_TRACE_REG_0]
static const uint64_t EPS_DBG_TRACE_REG_0 = 0x080107cdull;

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
// pec/reg00008.H

//>> [EPS_PSC_PSCOM_ERROR_MASK]
static const uint64_t EPS_PSC_PSCOM_ERROR_MASK = 0x08010002ull;

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
// pec/reg00008.H

//>> [EPS_PSC_WRITE_PROTECT_RINGS_REG]
static const uint64_t EPS_PSC_WRITE_PROTECT_RINGS_REG = 0x08010006ull;

static const uint32_t EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS = 0;
static const uint32_t EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN = 32;
//<< [EPS_PSC_WRITE_PROTECT_RINGS_REG]
// pec/reg00008.H

//>> [SCAN_CAPTUREDR_LONG]
static const uint64_t SCAN_CAPTUREDR_LONG = 0x0803d000ull;

static const uint32_t SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG = 0;
static const uint32_t SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN = 32;
//<< [SCAN_CAPTUREDR_LONG]
// pec/reg00008.H

//>> [XSTOP3]
static const uint64_t XSTOP3 = 0x0803000eull;

static const uint32_t XSTOP3_ENABLE = 0;
static const uint32_t XSTOP3_WAIT_SNOPA = 1;
static const uint32_t XSTOP3_TRIGGER_OPCG_GO = 2;
static const uint32_t XSTOP3_WAIT_ALWAYS = 3;
static const uint32_t XSTOP3_REGION_PERV = 4;
static const uint32_t XSTOP3_REGION_UNIT1 = 5;
static const uint32_t XSTOP3_REGION_UNIT2 = 6;
static const uint32_t XSTOP3_REGION_UNIT3 = 7;
static const uint32_t XSTOP3_REGION_UNIT4 = 8;
static const uint32_t XSTOP3_REGION_UNIT5 = 9;
static const uint32_t XSTOP3_REGION_UNIT6 = 10;
static const uint32_t XSTOP3_REGION_UNIT7 = 11;
static const uint32_t XSTOP3_REGION_UNIT8 = 12;
static const uint32_t XSTOP3_REGION_UNIT9 = 13;
static const uint32_t XSTOP3_REGION_UNIT10 = 14;
static const uint32_t XSTOP3_REGION_UNIT11 = 15;
static const uint32_t XSTOP3_REGION_UNIT12 = 16;
static const uint32_t XSTOP3_REGION_UNIT13 = 17;
static const uint32_t XSTOP3_REGION_UNIT14 = 18;
static const uint32_t XSTOP3_WAIT_CYCLES = 48;
static const uint32_t XSTOP3_WAIT_CYCLES_LEN = 12;
//<< [XSTOP3]
// pec/reg00008.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00008_unused.H"
#endif
#endif
