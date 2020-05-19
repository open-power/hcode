/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_e_unused.H $       */
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

#ifndef __p10_scom_c_e_H_UNUSED__
#define __p10_scom_c_e_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [ATOMIC_LOCK_MASK_LATCH_REG]
static const uint64_t ATOMIC_LOCK_MASK_LATCH_REG = 0x20010007ull;

static const uint32_t ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK = 0;
static const uint32_t ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN = 32;
//<< [ATOMIC_LOCK_MASK_LATCH_REG]
// c/reg00014.H

//>> [EC_LS_LSU_HOLD_OUT_REG12]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG12 = 0x200206ccull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT = 12;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT = 13;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT = 14;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT = 15;
//<< [EC_LS_LSU_HOLD_OUT_REG12]
// c/reg00014.H

//>> [EC_LS_LSU_HOLD_OUT_REG4]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG4 = 0x200206c4ull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0 = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1 = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2 = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3 = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4 = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5 = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6 = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7 = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0 = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1 = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2 = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3 = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4 = 12;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5 = 13;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6 = 14;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7 = 15;
//<< [EC_LS_LSU_HOLD_OUT_REG4]
// c/reg00014.H

//>> [EC_PC_PMC_CORE_THREAD_STATE]
static const uint64_t EC_PC_PMC_CORE_THREAD_STATE = 0x20020412ull;

static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL = 32;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL_LEN = 4;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL = 36;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL_LEN = 4;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL = 40;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL_LEN = 4;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL = 44;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL_LEN = 4;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE = 56;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE = 57;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE = 58;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE = 59;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE = 62;
static const uint32_t EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE = 63;
//<< [EC_PC_PMC_CORE_THREAD_STATE]
// c/reg00014.H

//>> [EC_PC_PMU_SPRCOR_OCC_SCOMD]
static const uint64_t EC_PC_PMU_SPRCOR_OCC_SCOMD = 0x20020411ull;
//<< [EC_PC_PMU_SPRCOR_OCC_SCOMD]
// c/reg00014.H

//>> [EC_PC_SCR6]
static const uint64_t EC_PC_SCR6 = 0x2002048cull;
//<< [EC_PC_SCR6]
// c/reg00014.H

//>> [EC_PC_TRACE2_TR_TR0_CONFIG_4]
static const uint64_t EC_PC_TRACE2_TR_TR0_CONFIG_4 = 0x20020a87ull;

static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_4_A = 0;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_4_B = 24;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_4_B_LEN = 24;
//<< [EC_PC_TRACE2_TR_TR0_CONFIG_4]
// c/reg00014.H

//>> [L2TRA_TR0_CONFIG_9]
static const uint64_t L2TRA_TR0_CONFIG_9 = 0x20020049ull;

static const uint32_t L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t L2TRA_TR0_CONFIG_9_SPARE_LT = 37;
//<< [L2TRA_TR0_CONFIG_9]
// c/reg00014.H

//>> [L2TRA_TR1_CONFIG_0]
static const uint64_t L2TRA_TR1_CONFIG_0 = 0x20020083ull;

static const uint32_t L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [L2TRA_TR1_CONFIG_0]
// c/reg00014.H

//>> [L3_MISC_L3CERRS_FIR_ACTION0_REG]
static const uint64_t L3_MISC_L3CERRS_FIR_ACTION0_REG = 0x20010606ull;

static const uint32_t L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0 = 0;
static const uint32_t L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0_LEN = 33;
//<< [L3_MISC_L3CERRS_FIR_ACTION0_REG]
// c/reg00014.H

//>> [L3_MISC_L3CERRS_FIR_ACTION1_REG]
static const uint64_t L3_MISC_L3CERRS_FIR_ACTION1_REG = 0x20010607ull;

static const uint32_t L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1 = 0;
static const uint32_t L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1_LEN = 33;
//<< [L3_MISC_L3CERRS_FIR_ACTION1_REG]
// c/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00014_unused.H"
#endif
#endif
