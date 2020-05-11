/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_1_unused.H $       */
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

#ifndef __p10_scom_c_1_H_UNUSED__
#define __p10_scom_c_1_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_LS_LSU_HOLD_OUT_REG1]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG1 = 0x200206c1ull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_0 = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_1 = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_2 = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_3 = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_4 = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_5 = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_6 = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_7 = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_8 = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_9 = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_10 = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_11 = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_12 = 12;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_13 = 13;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_14 = 14;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG1_15 = 15;
//<< [EC_LS_LSU_HOLD_OUT_REG1]
// c/reg00001.H

//>> [EC_PC_COMMON_SPR_SPATTN_MASK]
static const uint64_t EC_PC_COMMON_SPR_SPATTN_MASK = 0x2002049aull;

static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK = 0;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK_LEN = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK_LEN = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK = 8;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK_LEN = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK = 12;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK_LEN = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK = 16;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK_LEN = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK = 20;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK_LEN = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK = 24;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK_LEN = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK = 28;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK_LEN = 4;
//<< [EC_PC_COMMON_SPR_SPATTN_MASK]
// c/reg00001.H

//>> [EC_PC_SCR3]
static const uint64_t EC_PC_SCR3 = 0x20020489ull;
//<< [EC_PC_SCR3]
// c/reg00001.H

//>> [EC_PC_TRACE1_TR_TR0_CONFIG]
static const uint64_t EC_PC_TRACE1_TR_TR0_CONFIG = 0x20020a42ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS = 22;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT = 24;
//<< [EC_PC_TRACE1_TR_TR0_CONFIG]
// c/reg00001.H

//>> [EC_PC_TRACE2_TR_TR0_CONFIG_1]
static const uint64_t EC_PC_TRACE2_TR_TR0_CONFIG_1 = 0x20020a84ull;

static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 = 0;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN = 24;
//<< [EC_PC_TRACE2_TR_TR0_CONFIG_1]
// c/reg00001.H

//>> [EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]
static const uint64_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0 = 0x20020640ull;

static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT = 0;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT = 1;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT = 2;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT = 3;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT = 4;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR = 5;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT = 6;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT = 7;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT = 8;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT = 9;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT = 10;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT = 11;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT = 12;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT = 13;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT = 14;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0 = 15;
//<< [EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]
// c/reg00001.H

//>> [L2TRA_TR1_CONFIG]
static const uint64_t L2TRA_TR1_CONFIG = 0x20020082ull;

static const uint32_t L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t L2TRA_TR1_CONFIG_BANK_MODE = 10;
static const uint32_t L2TRA_TR1_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t L2TRA_TR1_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t L2TRA_TR1_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS = 22;
static const uint32_t L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
static const uint32_t L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT = 24;
//<< [L2TRA_TR1_CONFIG]
// c/reg00001.H

//>> [L2TRA_TR1_CONFIG_5]
static const uint64_t L2TRA_TR1_CONFIG_5 = 0x20020088ull;

static const uint32_t L2TRA_TR1_CONFIG_5_C = 0;
static const uint32_t L2TRA_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t L2TRA_TR1_CONFIG_5_D = 24;
static const uint32_t L2TRA_TR1_CONFIG_5_D_LEN = 24;
//<< [L2TRA_TR1_CONFIG_5]
// c/reg00001.H

//>> [QME_DCSR]
static const uint64_t QME_DCSR = 0x200e0870ull;

static const uint32_t QME_DCSR_PLS_T0 = 0;
static const uint32_t QME_DCSR_PLS_T0_LEN = 4;
static const uint32_t QME_DCSR_PLS_T1 = 4;
static const uint32_t QME_DCSR_PLS_T1_LEN = 4;
static const uint32_t QME_DCSR_PLS_T2 = 8;
static const uint32_t QME_DCSR_PLS_T2_LEN = 4;
static const uint32_t QME_DCSR_PLS_T3 = 12;
static const uint32_t QME_DCSR_PLS_T3_LEN = 4;
static const uint32_t QME_DCSR_SL_T0 = 16;
static const uint32_t QME_DCSR_SL_T0_LEN = 2;
static const uint32_t QME_DCSR_SL_T1 = 18;
static const uint32_t QME_DCSR_SL_T1_LEN = 2;
static const uint32_t QME_DCSR_SL_T2 = 20;
static const uint32_t QME_DCSR_SL_T2_LEN = 2;
static const uint32_t QME_DCSR_SL_T3 = 22;
static const uint32_t QME_DCSR_SL_T3_LEN = 2;
static const uint32_t QME_DCSR_SRESET_MSR_S = 24;
static const uint32_t QME_DCSR_THREAD_INSTR_RUNNING_HISTORY = 60;
static const uint32_t QME_DCSR_THREAD_INSTR_RUNNING_HISTORY_LEN = 4;
//<< [QME_DCSR]
// c/reg00001.H

//>> [QME_PMCRS]
static const uint64_t QME_PMCRS = 0x200e0860ull;

static const uint32_t QME_PMCRS_DATA = 0;
static const uint32_t QME_PMCRS_DATA_LEN = 64;
//<< [QME_PMCRS]
// c/reg00001.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00001_unused.H"
#endif
#endif
