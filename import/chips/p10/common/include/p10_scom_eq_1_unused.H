/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_1_unused.H $      */
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

#ifndef __p10_scom_eq_1_H_UNUSED__
#define __p10_scom_eq_1_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS = 0x20018317ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE = 3;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW = 4;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW = 5;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_DCC_LOCK = 6;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR = 7;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN = 8;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_PRELOAD1 = 9;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_PRELOAD2 = 10;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_PRELOAD3 = 11;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN = 12;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_CHOP = 13;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_FSM_STATE = 14;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN = 5;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE = 19;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN = 3;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE = 22;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR = 23;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG = 24;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN = 8;
//<< [CLK_ADJ_00_DCADJ_WRAP_STATUS_BITS]
// eq/reg00001.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE = 0x20018327ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
// eq/reg00001.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE = 0x20018322ull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET = 1;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET = 3;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET = 4;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
// eq/reg00001.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_MEASURE_ONLY_MODE = 0x20014311ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 = 4;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
// eq/reg00001.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES = 0x20014336ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE = 10;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE = 26;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN = 6;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
// eq/reg00001.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_HOLD_MODE]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_HOLD_MODE = 0x20012301ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD = 0;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_HOLD_MODE]
// eq/reg00001.H

//>> [CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS = 0x20012317ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE = 3;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW = 4;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW = 5;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_DCC_LOCK = 6;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR = 7;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN = 8;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_PRELOAD1 = 9;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_PRELOAD2 = 10;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_PRELOAD3 = 11;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN = 12;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_CHOP = 13;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_FSM_STATE = 14;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN = 5;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE = 19;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN = 3;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE = 22;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR = 23;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG = 24;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN = 8;
//<< [CLK_ADJ_02_DCADJ_WRAP_STATUS_BITS]
// eq/reg00001.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES = 0x2001233bull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
// eq/reg00001.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE = 0x20012333ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
// eq/reg00001.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC = 0x2001232full;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
// eq/reg00001.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT = 0x20012328ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE = 0;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN = 6;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
// eq/reg00001.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_CONFIG]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_CONFIG = 0x2001130cull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR = 1;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR = 2;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE = 3;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_CONFIG]
// eq/reg00001.H

//>> [QMETRA0_TR0_CONFIG_2]
static const uint64_t QMETRA0_TR0_CONFIG_2 = 0x20018405ull;

static const uint32_t QMETRA0_TR0_CONFIG_2_A = 0;
static const uint32_t QMETRA0_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t QMETRA0_TR0_CONFIG_2_B = 24;
static const uint32_t QMETRA0_TR0_CONFIG_2_B_LEN = 24;
//<< [QMETRA0_TR0_CONFIG_2]
// eq/reg00001.H

//>> [QME_SWHR]
static const uint64_t QME_SWHR = 0x200e014cull;

static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C0 = 0;
static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C0_LEN = 4;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET = 4;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN = 2;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR = 6;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN = 2;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT = 8;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN = 2;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP = 10;
static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN = 2;
static const uint32_t QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ = 12;
static const uint32_t QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ = 13;
static const uint32_t QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ = 14;
static const uint32_t QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ = 15;
static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C1 = 16;
static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C1_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET = 20;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR = 22;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT = 24;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP = 26;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ = 28;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ = 29;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ = 30;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ = 31;
static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C2 = 32;
static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C2_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET = 36;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR = 38;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT = 40;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP = 42;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ = 44;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ = 45;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ = 46;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ = 47;
static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C3 = 48;
static const uint32_t QME_SWHR_SPC_WKUP_HISTORY_C3_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET = 52;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR = 54;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT = 56;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP = 58;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ = 60;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ = 61;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ = 62;
// ERROR Duplicate Dial         static const uint32_t QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ = 63;
//<< [QME_SWHR]
// eq/reg00001.H

//>> [QME_SWPR0]
static const uint64_t QME_SWPR0 = 0x200e0090ull;

static const uint32_t QME_SWPR0_BAR = 0;
static const uint32_t QME_SWPR0_BAR_LEN = 27;
static const uint32_t QME_SWPR0_SIZE = 44;
static const uint32_t QME_SWPR0_SIZE_LEN = 15;
//<< [QME_SWPR0]
// eq/reg00001.H

//>> [DBG_CBS_CC]
static const uint64_t DBG_CBS_CC = 0x20030013ull;

static const uint32_t DBG_CBS_CC_DBG_RESET_EP = 0;
static const uint32_t DBG_CBS_CC_DBG_OPCG_IP = 1;
static const uint32_t DBG_CBS_CC_DBG_VITL_CLKOFF = 2;
static const uint32_t DBG_CBS_CC_DBG_TEST_ENABLE = 3;
static const uint32_t DBG_CBS_CC_DBG_CBS_REQ = 4;
static const uint32_t DBG_CBS_CC_DBG_CBS_CMD = 5;
static const uint32_t DBG_CBS_CC_DBG_CBS_CMD_LEN = 3;
static const uint32_t DBG_CBS_CC_DBG_CBS_STATE = 8;
static const uint32_t DBG_CBS_CC_DBG_CBS_STATE_LEN = 5;
static const uint32_t DBG_CBS_CC_DBG_SECURITY_DEBUG_MODE = 13;
static const uint32_t DBG_CBS_CC_DBG_CBS_PROTOCOL_ERROR = 14;
static const uint32_t DBG_CBS_CC_DBG_PCB_IDLE = 15;
static const uint32_t DBG_CBS_CC_DBG_CURRENT_OPCG_MODE = 16;
static const uint32_t DBG_CBS_CC_DBG_CURRENT_OPCG_MODE_LEN = 4;
static const uint32_t DBG_CBS_CC_DBG_LAST_OPCG_MODE = 20;
static const uint32_t DBG_CBS_CC_DBG_LAST_OPCG_MODE_LEN = 4;
static const uint32_t DBG_CBS_CC_DBG_PCB_ERROR = 24;
static const uint32_t DBG_CBS_CC_DBG_PARITY_ERROR = 25;
static const uint32_t DBG_CBS_CC_DBG_CC_ERROR = 26;
static const uint32_t DBG_CBS_CC_DBG_CHIPLET_IS_ALIGNED = 27;
static const uint32_t DBG_CBS_CC_DBG_PCB_REQUEST_SINCE_RESET = 28;
static const uint32_t DBG_CBS_CC_DBG_PARANOIA_TEST_ENABLE_CHANGE = 29;
static const uint32_t DBG_CBS_CC_DBG_PARANOIA_VITL_CLKOFF_CHANGE = 30;
static const uint32_t DBG_CBS_CC_TP_TPFSI_CBS_ACK = 31;
//<< [DBG_CBS_CC]
// eq/reg00001.H

//>> [EPS_THERM_WSUB2_DTS_TRC_RESULT]
static const uint64_t EPS_THERM_WSUB2_DTS_TRC_RESULT = 0x20050023ull;

static const uint32_t EPS_THERM_WSUB2_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE = 0;
static const uint32_t EPS_THERM_WSUB2_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN = 44;
static const uint32_t EPS_THERM_WSUB2_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR = 44;
static const uint32_t EPS_THERM_WSUB2_DTS_TRC_RESULT_DTS_1_RESULT = 48;
static const uint32_t EPS_THERM_WSUB2_DTS_TRC_RESULT_DTS_1_RESULT_LEN = 16;
//<< [EPS_THERM_WSUB2_DTS_TRC_RESULT]
// eq/reg00001.H

//>> [EPS_THERM_WSUB2_SKITTER_DATA1]
static const uint64_t EPS_THERM_WSUB2_SKITTER_DATA1 = 0x2005003aull;
//<< [EPS_THERM_WSUB2_SKITTER_DATA1]
// eq/reg00001.H

//>> [HEARTBEAT_REG]
static const uint64_t HEARTBEAT_REG = 0x200f0018ull;

static const uint32_t HEARTBEAT_REG_HEARTBEAT_DEAD = 0;
//<< [HEARTBEAT_REG]
// eq/reg00001.H

//>> [L3TRA0_TR1_CONFIG_2]
static const uint64_t L3TRA0_TR1_CONFIG_2 = 0x20018225ull;

static const uint32_t L3TRA0_TR1_CONFIG_2_A = 0;
static const uint32_t L3TRA0_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA0_TR1_CONFIG_2_B = 24;
static const uint32_t L3TRA0_TR1_CONFIG_2_B_LEN = 24;
//<< [L3TRA0_TR1_CONFIG_2]
// eq/reg00001.H

//>> [L3TRA1_TR0_CONFIG_4]
static const uint64_t L3TRA1_TR0_CONFIG_4 = 0x20018247ull;

static const uint32_t L3TRA1_TR0_CONFIG_4_A = 0;
static const uint32_t L3TRA1_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA1_TR0_CONFIG_4_B = 24;
static const uint32_t L3TRA1_TR0_CONFIG_4_B_LEN = 24;
//<< [L3TRA1_TR0_CONFIG_4]
// eq/reg00001.H

//>> [L3TRA2_TR0_CONFIG_3]
static const uint64_t L3TRA2_TR0_CONFIG_3 = 0x20018286ull;

static const uint32_t L3TRA2_TR0_CONFIG_3_C = 0;
static const uint32_t L3TRA2_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA2_TR0_CONFIG_3_D = 24;
static const uint32_t L3TRA2_TR0_CONFIG_3_D_LEN = 24;
//<< [L3TRA2_TR0_CONFIG_3]
// eq/reg00001.H

//>> [L3TRA3_TR1_CONFIG_5]
static const uint64_t L3TRA3_TR1_CONFIG_5 = 0x200182e8ull;

static const uint32_t L3TRA3_TR1_CONFIG_5_C = 0;
static const uint32_t L3TRA3_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA3_TR1_CONFIG_5_D = 24;
static const uint32_t L3TRA3_TR1_CONFIG_5_D_LEN = 24;
//<< [L3TRA3_TR1_CONFIG_5]
// eq/reg00001.H

//>> [RECOV_INTERRUPT_REG]
static const uint64_t RECOV_INTERRUPT_REG = 0x200f001bull;

static const uint32_t RECOV_INTERRUPT_REG_RECOV = 0;
//<< [RECOV_INTERRUPT_REG]
// eq/reg00001.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00001_unused.H"
#endif
#endif
