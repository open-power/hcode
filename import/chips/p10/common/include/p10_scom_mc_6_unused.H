/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_6_unused.H $      */
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

#ifndef __p10_scom_mc_6_H_UNUSED__
#define __p10_scom_mc_6_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [MBA_SCOMFIR_WATFNA]
static const uint64_t MBA_SCOMFIR_WATFNA = 0x0c010f8cull;

static const uint32_t MBA_SCOMFIR_WATFNA_1_CFG = 0;
static const uint32_t MBA_SCOMFIR_WATFNA_1_CFG_LEN = 22;
static const uint32_t MBA_SCOMFIR_WATFNA_2_CFG = 22;
static const uint32_t MBA_SCOMFIR_WATFNA_2_CFG_LEN = 22;
//<< [MBA_SCOMFIR_WATFNA]
// mc/reg00006.H

//>> [SCOMFIR_MCMODE3]
static const uint64_t SCOMFIR_MCMODE3 = 0x0c010c2full;

static const uint32_t SCOMFIR_MCMODE3_MULTI_TID = 0;
static const uint32_t SCOMFIR_MCMODE3_TID_4TB_MODE = 1;
static const uint32_t SCOMFIR_MCMODE3_TID0_VALID = 2;
static const uint32_t SCOMFIR_MCMODE3_TID1_VALID = 3;
static const uint32_t SCOMFIR_MCMODE3_TID2_VALID = 4;
static const uint32_t SCOMFIR_MCMODE3_TID3_VALID = 5;
static const uint32_t SCOMFIR_MCMODE3_TID0 = 6;
static const uint32_t SCOMFIR_MCMODE3_TID0_LEN = 5;
static const uint32_t SCOMFIR_MCMODE3_TID1 = 11;
static const uint32_t SCOMFIR_MCMODE3_TID1_LEN = 5;
static const uint32_t SCOMFIR_MCMODE3_TID2 = 16;
static const uint32_t SCOMFIR_MCMODE3_TID2_LEN = 5;
static const uint32_t SCOMFIR_MCMODE3_TID3 = 21;
static const uint32_t SCOMFIR_MCMODE3_TID3_LEN = 5;
//<< [SCOMFIR_MCMODE3]
// mc/reg00006.H

//>> [EPS_DBG_INST1_COND_REG_3]
static const uint64_t EPS_DBG_INST1_COND_REG_3 = 0x0c0107c3ull;
//<< [EPS_DBG_INST1_COND_REG_3]
// mc/reg00006.H

//>> [EPS_DBG_INST2_COND_REG_3]
static const uint64_t EPS_DBG_INST2_COND_REG_3 = 0x0c0107c6ull;
//<< [EPS_DBG_INST2_COND_REG_3]
// mc/reg00006.H

//>> [EPS_PSC_PSCOM_STATUS_ERROR_REG]
static const uint64_t EPS_PSC_PSCOM_STATUS_ERROR_REG = 0x0c010001ull;

static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR = 0;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR = 1;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR = 2;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR = 3;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR = 4;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR = 5;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE = 6;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE = 7;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH = 8;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN = 9;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH = 10;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR = 11;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD = 12;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID = 13;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR = 14;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT = 15;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION = 16;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER = 17;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR = 18;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR = 19;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR = 20;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR = 21;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR = 22;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR = 23;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE = 24;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE = 25;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH = 26;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN = 27;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH = 28;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR = 29;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD = 30;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID = 31;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR = 32;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT = 33;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION = 34;
static const uint32_t EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER = 35;
//<< [EPS_PSC_PSCOM_STATUS_ERROR_REG]
// mc/reg00006.H

//>> [EPS_PSC_RING_FENCE_MASK_LATCH_REG]
static const uint64_t EPS_PSC_RING_FENCE_MASK_LATCH_REG = 0x0c010008ull;

static const uint32_t EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK = 1;
static const uint32_t EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN = 31;
//<< [EPS_PSC_RING_FENCE_MASK_LATCH_REG]
// mc/reg00006.H

//>> [EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]
static const uint64_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ = 0x0c05001cull;

static const uint32_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE = 0;
static const uint32_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE_LEN = 44;
static const uint32_t EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR = 44;
//<< [EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]
// mc/reg00006.H

//>> [LOCAL_XSTOP_MASK]
static const uint64_t LOCAL_XSTOP_MASK_RW = 0x0c040043ull;
static const uint64_t LOCAL_XSTOP_MASK_WO_CLEAR = 0x0c040063ull;
static const uint64_t LOCAL_XSTOP_MASK_WO_OR = 0x0c040053ull;

static const uint32_t LOCAL_XSTOP_MASK_01 = 1;
static const uint32_t LOCAL_XSTOP_MASK_02 = 2;
static const uint32_t LOCAL_XSTOP_MASK_03 = 3;
static const uint32_t LOCAL_XSTOP_MASK_04 = 4;
static const uint32_t LOCAL_XSTOP_MASK_05 = 5;
static const uint32_t LOCAL_XSTOP_MASK_06 = 6;
static const uint32_t LOCAL_XSTOP_MASK_07 = 7;
static const uint32_t LOCAL_XSTOP_MASK_08 = 8;
static const uint32_t LOCAL_XSTOP_MASK_09 = 9;
static const uint32_t LOCAL_XSTOP_MASK_10 = 10;
static const uint32_t LOCAL_XSTOP_MASK_11 = 11;
static const uint32_t LOCAL_XSTOP_MASK_12 = 12;
static const uint32_t LOCAL_XSTOP_MASK_13 = 13;
static const uint32_t LOCAL_XSTOP_MASK_14 = 14;
static const uint32_t LOCAL_XSTOP_MASK_15 = 15;
//<< [LOCAL_XSTOP_MASK]
// mc/reg00006.H

//>> [LOCAL_XSTOP_UNMASKED]
static const uint64_t LOCAL_XSTOP_UNMASKED = 0x0c040013ull;

static const uint32_t LOCAL_XSTOP_UNMASKED_IN = 1;
static const uint32_t LOCAL_XSTOP_UNMASKED_IN_LEN = 15;
//<< [LOCAL_XSTOP_UNMASKED]
// mc/reg00006.H

//>> [TRA0_TR0_CONFIG_5]
static const uint64_t TRA0_TR0_CONFIG_5 = 0x0c010408ull;

static const uint32_t TRA0_TR0_CONFIG_5_C = 0;
static const uint32_t TRA0_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_5_D = 24;
static const uint32_t TRA0_TR0_CONFIG_5_D_LEN = 24;
//<< [TRA0_TR0_CONFIG_5]
// mc/reg00006.H

//>> [TRA1_TR0_CONFIG]
static const uint64_t TRA1_TR0_CONFIG = 0x0c010482ull;

static const uint32_t TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t TRA1_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t TRA1_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t TRA1_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t TRA1_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t TRA1_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t TRA1_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [TRA1_TR0_CONFIG]
// mc/reg00006.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00006_unused.H"
#endif
#endif
