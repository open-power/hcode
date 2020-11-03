/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_8_unused.H $       */
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

#ifndef __p10_scom_c_8_H_UNUSED__
#define __p10_scom_c_8_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_LS_LSU_HOLD_OUT_REG13]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG13 = 0x200206cdull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT = 12;
//<< [EC_LS_LSU_HOLD_OUT_REG13]
// c/reg00008.H

//>> [EC_LS_LSU_HOLD_OUT_REG5]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG5 = 0x200206c5ull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0 = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1 = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2 = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3 = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT = 12;
//<< [EC_LS_LSU_HOLD_OUT_REG5]
// c/reg00008.H

//>> [EC_PC_COMMON_SPR_V3_HMER]
static const uint64_t EC_PC_COMMON_SPR_V3_HMER_RW_WAND = 0x20020495ull;
static const uint64_t EC_PC_COMMON_SPR_V3_HMER_WO_OR = 0x20020491ull;

static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT = 0;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_1 = 1;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE = 2;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE = 3;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR = 4;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR = 5;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_6 = 6;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT = 6; // p10:20,
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_7 = 7;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL = 8;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE = 9;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_10 = 10;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN = 11;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_12 = 12;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_13 = 13;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_14 = 14;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_15 = 15;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI = 16;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND = 17;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI = 18;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_19 = 19;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_SPARE_20 = 20;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS = 21;
static const uint32_t EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS_LEN = 3;
//<< [EC_PC_COMMON_SPR_V3_HMER]
// c/reg00008.H

//>> [EC_PC_PMU_SPRCOR_HV_STATE]
static const uint64_t EC_PC_PMU_SPRCOR_HV_STATE = 0x2002040dull;

static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV = 56;
static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV = 57;
static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV = 58;
static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV = 59;
static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR = 60;
static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR = 61;
static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR = 62;
static const uint32_t EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR = 63;
//<< [EC_PC_PMU_SPRCOR_HV_STATE]
// c/reg00008.H

//>> [EC_PC_PMU_SPRCOR_SCOMC_EN]
static const uint64_t EC_PC_PMU_SPRCOR_SCOMC_EN = 0x2002040aull;

static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM = 0;
//<< [EC_PC_PMU_SPRCOR_SCOMC_EN]
// c/reg00008.H

//>> [EC_PC_PMU_SPRCOR_SCOMD]
static const uint64_t EC_PC_PMU_SPRCOR_SCOMD = 0x20020409ull;
//<< [EC_PC_PMU_SPRCOR_SCOMD]
// c/reg00008.H

//>> [EC_PC_PMU_SPRCOR_SHID0]
static const uint64_t EC_PC_PMU_SPRCOR_SHID0 = 0x2002040cull;

static const uint32_t EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN = 0;
static const uint32_t EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR = 1;
//<< [EC_PC_PMU_SPRCOR_SHID0]
// c/reg00008.H

//>> [EC_PC_SCR7]
static const uint64_t EC_PC_SCR7 = 0x2002048dull;
//<< [EC_PC_SCR7]
// c/reg00008.H

//>> [EC_PC_TRACE2_TR_TR0_CONFIG_5]
static const uint64_t EC_PC_TRACE2_TR_TR0_CONFIG_5 = 0x20020a88ull;

static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_5_C = 0;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_5_D = 24;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_5_D_LEN = 24;
//<< [EC_PC_TRACE2_TR_TR0_CONFIG_5]
// c/reg00008.H

//>> [P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]
static const uint64_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT4 = 0x20020644ull; // p10:20,

static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0 = 0;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1 = 1;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2 = 2;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3 = 3;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4 = 4;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5 = 5;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6 = 6;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7 = 7;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8 = 8;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9 = 9;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10 = 10;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11 = 11;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12 = 12;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13 = 13;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14 = 14;
static const uint32_t P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15 = 15;
//<< [P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]
// c/reg00008.H

//>> [L2TRA_TR1_CONFIG_1]
static const uint64_t L2TRA_TR1_CONFIG_1 = 0x20020084ull;

static const uint32_t L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [L2TRA_TR1_CONFIG_1]
// c/reg00008.H

//>> [PSCOM_STATUS_ERROR_REG]
static const uint64_t PSCOM_STATUS_ERROR_REG = 0x20010001ull;

static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR = 0;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR = 1;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR = 2;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR = 3;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR = 4;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR = 5;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE = 6;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE = 7;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH = 8;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN = 9;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH = 10;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR = 11;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD = 12;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID = 13;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR = 14;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT = 15;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION = 16;
static const uint32_t PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER = 17;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR = 18;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR = 19;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR = 20;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR = 21;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR = 22;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR = 23;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE = 24;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE = 25;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH = 26;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN = 27;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH = 28;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR = 29;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD = 30;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID = 31;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR = 32;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT = 33;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION = 34;
static const uint32_t PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER = 35;
//<< [PSCOM_STATUS_ERROR_REG]
// c/reg00008.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00008_unused.H"
#endif
#endif
