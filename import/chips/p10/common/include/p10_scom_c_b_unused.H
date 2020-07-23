/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_b_unused.H $       */
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

#ifndef __p10_scom_c_b_H_UNUSED__
#define __p10_scom_c_b_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_LS_LSU_HOLD_OUT_REG2]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG2 = 0x200206c2ull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0 = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1 = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2 = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3 = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4 = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5 = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6 = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7 = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0 = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1 = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2 = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3 = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4 = 12;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5 = 13;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6 = 14;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7 = 15;
//<< [EC_LS_LSU_HOLD_OUT_REG2]
// c/reg00011.H

//>> [EC_PC_COMMON_SPR_SPATTN]
static const uint64_t EC_PC_COMMON_SPR_SPATTN_RW = 0x20020499ull;
static const uint64_t EC_PC_COMMON_SPR_SPATTN_WO_AND = 0x20020498ull;
static const uint64_t EC_PC_COMMON_SPR_SPATTN_WO_OR = 0x20020497ull;

static const uint32_t EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP = 0;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE = 1;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 2;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP = 3;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP = 4;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE = 5;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 6;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP = 7;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP = 8;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE = 9;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 10;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP = 11;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP = 12;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE = 13;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 14;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP = 15;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP = 16;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE = 17;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 18;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP = 19;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP = 20;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE = 21;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 22;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP = 23;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP = 24;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE = 25;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 26;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP = 27;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP = 28;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE = 29;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE = 30;
static const uint32_t EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP = 31;
//<< [EC_PC_COMMON_SPR_SPATTN]
// c/reg00011.H

//>> [EC_PC_PMU_SPRCOR_SCOMC]
static const uint64_t EC_PC_PMU_SPRCOR_SCOMC = 0x20020408ull;

static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_PMC1 = 0;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_PMC2 = 1;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_PMC3 = 2;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_PMC4 = 3;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_PMC5 = 4;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_PMC6 = 5;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_MMCRC = 6;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_MMCR0 = 7;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_MMCR1 = 8;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_MMCR2 = 9;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_MMCR3 = 10;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_MMCRA = 11;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_SIER = 12;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_SIERA = 13;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_SIERB = 14;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID = 15;
static const uint32_t EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID_LEN = 2;
//<< [EC_PC_PMU_SPRCOR_SCOMC]
// c/reg00011.H

//>> [EC_PC_SPURR_FREQ_DETECT_CYC_CNT]
static const uint64_t EC_PC_SPURR_FREQ_DETECT_CYC_CNT = 0x2002049full;

static const uint32_t EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT = 0;
static const uint32_t EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT_LEN = 8;
//<< [EC_PC_SPURR_FREQ_DETECT_CYC_CNT]
// c/reg00011.H

//>> [EC_PC_TRACE1_TR_TR0_CONFIG_9]
static const uint64_t EC_PC_TRACE1_TR_TR0_CONFIG_9 = 0x20020a49ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT = 37;
//<< [EC_PC_TRACE1_TR_TR0_CONFIG_9]
// c/reg00011.H

//>> [EC_PC_TRACE2_TR_TR0_CONFIG_2]
static const uint64_t EC_PC_TRACE2_TR_TR0_CONFIG_2 = 0x20020a85ull;

static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_2_A = 0;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_2_B = 24;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_2_B_LEN = 24;
//<< [EC_PC_TRACE2_TR_TR0_CONFIG_2]
// c/reg00011.H

//>> [EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]
static const uint64_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3 = 0x20020643ull;

static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT = 0;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0 = 1;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1 = 2;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2 = 3;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3 = 4;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4 = 5;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0 = 6;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1 = 7;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2 = 8;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3 = 9;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4 = 10;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5 = 11;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT = 12;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13 = 13;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14 = 14;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15 = 15;
//<< [EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]
// c/reg00011.H

//>> [L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]
static const uint64_t L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG = 0x2002000dull;

static const uint32_t L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG = 0;
static const uint32_t L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE = 1;
static const uint32_t L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE = 2;
static const uint32_t L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE_LEN = 2;
//<< [L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]
// c/reg00011.H

//>> [L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]
static const uint64_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG = 0x20010629ull;

static const uint32_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL = 0;
static const uint32_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL_LEN = 12;
static const uint32_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL = 12;
static const uint32_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL_LEN = 12;
static const uint32_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL = 24;
static const uint32_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL_LEN = 12;
static const uint32_t L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG = 36;
//<< [L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]
// c/reg00011.H

//>> [NC_NCCHTM_NCCHTSC_HTM_MEM]
static const uint64_t NC_NCCHTM_NCCHTSC_HTM_MEM = 0x20010681ull;

static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC = 0;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE = 1;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE_LEN = 3;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY = 4;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL = 5;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE = 6;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE_LEN = 6;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_BASE = 12;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_BASE_LEN = 28;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE = 40;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_LEN = 9;
//<< [NC_NCCHTM_NCCHTSC_HTM_MEM]
// c/reg00011.H

//>> [NC_NCCHTM_NCCHTSC_MEM_OP_CTR]
static const uint64_t NC_NCCHTM_NCCHTSC_MEM_OP_CTR = 0x20010688ull;
//<< [NC_NCCHTM_NCCHTSC_MEM_OP_CTR]
// c/reg00011.H

//>> [RING_FENCE_MASK_LATCH_REG]
static const uint64_t RING_FENCE_MASK_LATCH_REG = 0x20010008ull;

static const uint32_t RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK = 1;
static const uint32_t RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN = 31;
//<< [RING_FENCE_MASK_LATCH_REG]
// c/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00011_unused.H"
#endif
#endif
