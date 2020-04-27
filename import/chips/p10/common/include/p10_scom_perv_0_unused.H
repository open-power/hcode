/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_perv_0_unused.H $    */
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

#ifndef __p10_scom_perv_0_H_UNUSED__
#define __p10_scom_perv_0_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY = 0x0001830aull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]
// perv/reg00000.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC = 0x0001830eull;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]
// perv/reg00000.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET = 0x00014305ull;
//<< [CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]
// perv/reg00000.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT = 0x00014329ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE = 0;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN = 3;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
// perv/reg00000.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY = 0x0001230aull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]
// perv/reg00000.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_DEC]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_DEC = 0x00012310ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN = 8;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_DEC]
// perv/reg00000.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE = 0x00012312ull;

static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA = 0;
static const uint32_t CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL = 1;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
// perv/reg00000.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC = 0x0001230eull;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]
// perv/reg00000.H

//>> [CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]
static const uint64_t CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE = 0x00012300ull;
//<< [CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]
// perv/reg00000.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE = 0x00012322ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET = 0;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET = 1;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET = 2;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET = 3;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET = 4;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
// perv/reg00000.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES = 0x0001133bull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
// perv/reg00000.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE = 0x00011326ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
// perv/reg00000.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES = 0x00011336ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE = 10;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN = 6;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE = 26;
static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN = 6;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
// perv/reg00000.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE = 0x0001132bull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
// perv/reg00000.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE = 0x00011332ull;

static const uint32_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
// perv/reg00000.H

//>> [FSXCOMP_FSXLOG_SCRATCH_REGISTER_13]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI = 0x00002984ull;
static const uint32_t FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE = 0x00002e10ull;
static const uint32_t FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW = 0x00050184ull;

static const uint32_t FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13 = 0;
static const uint32_t FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13_LEN = 32;
//<< [FSXCOMP_FSXLOG_SCRATCH_REGISTER_13]
// perv/reg00000.H

//>> [QMETRA0_TR0_CONFIG]
static const uint64_t QMETRA0_TR0_CONFIG = 0x00018402ull;

static const uint32_t QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t QMETRA0_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t QMETRA0_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [QMETRA0_TR0_CONFIG]
// perv/reg00000.H

//>> [QMETRA0_TR1_CONFIG_4]
static const uint64_t QMETRA0_TR1_CONFIG_4 = 0x00018447ull;

static const uint32_t QMETRA0_TR1_CONFIG_4_A = 0;
static const uint32_t QMETRA0_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t QMETRA0_TR1_CONFIG_4_B = 24;
static const uint32_t QMETRA0_TR1_CONFIG_4_B_LEN = 24;
//<< [QMETRA0_TR1_CONFIG_4]
// perv/reg00000.H

//>> [EPS_DBG_INST1_COND_REG_2]
static const uint64_t EPS_DBG_INST1_COND_REG_2 = 0x000107c2ull;

static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A = 0;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A = 10;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B = 15;
static const uint32_t EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN = 5;
static const uint32_t EPS_DBG_INST1_COND_REG_2_TO_CMP_LT = 20;
static const uint32_t EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN = 24;
//<< [EPS_DBG_INST1_COND_REG_2]
// perv/reg00000.H

//>> [EPS_DBG_INST2_COND_REG_2]
static const uint64_t EPS_DBG_INST2_COND_REG_2 = 0x000107c5ull;

static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A = 0;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A = 10;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B = 15;
static const uint32_t EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN = 5;
static const uint32_t EPS_DBG_INST2_COND_REG_2_TO_CMP_LT = 20;
static const uint32_t EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN = 24;
//<< [EPS_DBG_INST2_COND_REG_2]
// perv/reg00000.H

//>> [EPS_DBG_XTRA_TRACE_MODE]
static const uint64_t EPS_DBG_XTRA_TRACE_MODE = 0x000107d1ull;

static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA = 0;
static const uint32_t EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN = 42;
//<< [EPS_DBG_XTRA_TRACE_MODE]
// perv/reg00000.H

//>> [EPS_FIR_MODE_REG]
static const uint64_t EPS_FIR_MODE_REG = 0x00040088ull;

static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK = 0;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV = 1;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN = 2;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP = 3;
static const uint32_t EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN = 4;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG05 = 5;
static const uint32_t EPS_FIR_MODE_REG_DISABLE_IOPB_ERR = 6;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG07 = 7;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG08 = 8;
static const uint32_t EPS_FIR_MODE_REG_MASK_DIRECT_ERROR = 9;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG10 = 10;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG11 = 11;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG12 = 12;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG13 = 13;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG14 = 14;
static const uint32_t EPS_FIR_MODE_REG_MODE_REG15 = 15;
//<< [EPS_FIR_MODE_REG]
// perv/reg00000.H

//>> [EPS_THERM_WSUB_DTS_TRC_RESULT]
static const uint64_t EPS_THERM_WSUB_DTS_TRC_RESULT = 0x00050003ull;

static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE = 0;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR = 44;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT = 48;
static const uint32_t EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN = 16;
//<< [EPS_THERM_WSUB_DTS_TRC_RESULT]
// perv/reg00000.H

//>> [FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A = 0x00050020ull;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI = 0x00002824ull;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE = 0x00002890ull;

static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1 = 0;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1 = 1;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING = 2;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING = 3;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1 = 5;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1 = 6;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A = 8;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A_LEN = 4;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A = 12;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A_LEN = 8;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B = 20;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B_LEN = 4;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B = 24;
static const uint32_t FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B_LEN = 8;
//<< [FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]
// perv/reg00000.H

//>> [FSXCOMP_FSXLOG_M1B_DATA_AREA_7]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI = 0x00002887ull;
static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE = 0x00002a1cull;
static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO = 0x00050087ull;

static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7 = 0;
static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7_LEN = 32;
//<< [FSXCOMP_FSXLOG_M1B_DATA_AREA_7]
// perv/reg00000.H

//>> [FSXCOMP_FSXLOG_M2A_DATA_AREA_1]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI = 0x000028c1ull;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE = 0x00002b04ull;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW = 0x000500c1ull;

static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1 = 0;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1_LEN = 32;
//<< [FSXCOMP_FSXLOG_M2A_DATA_AREA_1]
// perv/reg00000.H

//>> [FSXCOMP_FSXLOG_M2B_DATA_AREA_12]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI = 0x0000290cull;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE = 0x00002c30ull;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO = 0x0005010cull;

static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12 = 0;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12_LEN = 32;
//<< [FSXCOMP_FSXLOG_M2B_DATA_AREA_12]
// perv/reg00000.H

//>> [FSXCOMP_FSXLOG_RCS_EL0]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_FSI = 0x00002940ull;
static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE = 0x00002d00ull;
static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_RO = 0x00050140ull;

static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_SNS = 0;
static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_SNS_LEN = 17;
static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_ERR = 17;
static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_ERR_LEN = 4;
static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_TIME = 21;
static const uint32_t FSXCOMP_FSXLOG_RCS_EL0_TIME_LEN = 11;
//<< [FSXCOMP_FSXLOG_RCS_EL0]
// perv/reg00000.H

//>> [HOSTATTN]
static const uint64_t HOSTATTN = 0x00040004ull;

static const uint32_t HOSTATTN_ANY_HOSTATTN = 0;
static const uint32_t HOSTATTN_RESERVED1H = 1;
static const uint32_t HOSTATTN_RESERVED2H = 2;
static const uint32_t HOSTATTN_RESERVED3H = 3;
static const uint32_t HOSTATTN_PERV = 4;
static const uint32_t HOSTATTN_IN05 = 5;
static const uint32_t HOSTATTN_IN06 = 6;
static const uint32_t HOSTATTN_IN07 = 7;
static const uint32_t HOSTATTN_IN08 = 8;
static const uint32_t HOSTATTN_IN09 = 9;
static const uint32_t HOSTATTN_IN10 = 10;
static const uint32_t HOSTATTN_IN11 = 11;
static const uint32_t HOSTATTN_IN12 = 12;
static const uint32_t HOSTATTN_IN13 = 13;
static const uint32_t HOSTATTN_IN14 = 14;
static const uint32_t HOSTATTN_IN15 = 15;
static const uint32_t HOSTATTN_IN16 = 16;
static const uint32_t HOSTATTN_IN17 = 17;
static const uint32_t HOSTATTN_IN18 = 18;
static const uint32_t HOSTATTN_IN19 = 19;
static const uint32_t HOSTATTN_IN20 = 20;
static const uint32_t HOSTATTN_IN21 = 21;
static const uint32_t HOSTATTN_IN22 = 22;
static const uint32_t HOSTATTN_IN23 = 23;
static const uint32_t HOSTATTN_IN24 = 24;
static const uint32_t HOSTATTN_IN25 = 25;
static const uint32_t HOSTATTN_IN26 = 26;
static const uint32_t HOSTATTN_IN27 = 27;
static const uint32_t HOSTATTN_IN28 = 28;
static const uint32_t HOSTATTN_IN29 = 29;
static const uint32_t HOSTATTN_IN30 = 30;
static const uint32_t HOSTATTN_IN31 = 31;
static const uint32_t HOSTATTN_IN32 = 32;
static const uint32_t HOSTATTN_IN33 = 33;
static const uint32_t HOSTATTN_IN34 = 34;
static const uint32_t HOSTATTN_IN35 = 35;
static const uint32_t HOSTATTN_IN36 = 36;
static const uint32_t HOSTATTN_IN37 = 37;
static const uint32_t HOSTATTN_IN38 = 38;
static const uint32_t HOSTATTN_IN39 = 39;
static const uint32_t HOSTATTN_IN40 = 40;
static const uint32_t HOSTATTN_IN41 = 41;
static const uint32_t HOSTATTN_IN42 = 42;
static const uint32_t HOSTATTN_IN43 = 43;
static const uint32_t HOSTATTN_IN44 = 44;
static const uint32_t HOSTATTN_IN45 = 45;
static const uint32_t HOSTATTN_IN46 = 46;
static const uint32_t HOSTATTN_IN47 = 47;
static const uint32_t HOSTATTN_IN48 = 48;
static const uint32_t HOSTATTN_IN49 = 49;
static const uint32_t HOSTATTN_IN50 = 50;
static const uint32_t HOSTATTN_IN51 = 51;
static const uint32_t HOSTATTN_IN52 = 52;
static const uint32_t HOSTATTN_IN53 = 53;
//<< [HOSTATTN]
// perv/reg00000.H

//>> [HOSTATTN_MASK]
static const uint64_t HOSTATTN_MASK_RW = 0x00040044ull;
static const uint64_t HOSTATTN_MASK_WO_CLEAR = 0x00040064ull;
static const uint64_t HOSTATTN_MASK_WO_OR = 0x00040054ull;

static const uint32_t HOSTATTN_MASK_01 = 1;
static const uint32_t HOSTATTN_MASK_02 = 2;
static const uint32_t HOSTATTN_MASK_03 = 3;
static const uint32_t HOSTATTN_MASK_04 = 4;
static const uint32_t HOSTATTN_MASK_05 = 5;
static const uint32_t HOSTATTN_MASK_06 = 6;
static const uint32_t HOSTATTN_MASK_07 = 7;
static const uint32_t HOSTATTN_MASK_08 = 8;
static const uint32_t HOSTATTN_MASK_09 = 9;
static const uint32_t HOSTATTN_MASK_10 = 10;
static const uint32_t HOSTATTN_MASK_11 = 11;
static const uint32_t HOSTATTN_MASK_12 = 12;
static const uint32_t HOSTATTN_MASK_13 = 13;
static const uint32_t HOSTATTN_MASK_14 = 14;
static const uint32_t HOSTATTN_MASK_15 = 15;
static const uint32_t HOSTATTN_MASK_16 = 16;
static const uint32_t HOSTATTN_MASK_17 = 17;
static const uint32_t HOSTATTN_MASK_18 = 18;
static const uint32_t HOSTATTN_MASK_19 = 19;
static const uint32_t HOSTATTN_MASK_20 = 20;
static const uint32_t HOSTATTN_MASK_21 = 21;
static const uint32_t HOSTATTN_MASK_22 = 22;
static const uint32_t HOSTATTN_MASK_23 = 23;
static const uint32_t HOSTATTN_MASK_24 = 24;
static const uint32_t HOSTATTN_MASK_25 = 25;
static const uint32_t HOSTATTN_MASK_26 = 26;
static const uint32_t HOSTATTN_MASK_27 = 27;
static const uint32_t HOSTATTN_MASK_28 = 28;
static const uint32_t HOSTATTN_MASK_29 = 29;
static const uint32_t HOSTATTN_MASK_30 = 30;
static const uint32_t HOSTATTN_MASK_31 = 31;
static const uint32_t HOSTATTN_MASK_32 = 32;
static const uint32_t HOSTATTN_MASK_33 = 33;
static const uint32_t HOSTATTN_MASK_34 = 34;
static const uint32_t HOSTATTN_MASK_35 = 35;
static const uint32_t HOSTATTN_MASK_36 = 36;
static const uint32_t HOSTATTN_MASK_37 = 37;
static const uint32_t HOSTATTN_MASK_38 = 38;
static const uint32_t HOSTATTN_MASK_39 = 39;
static const uint32_t HOSTATTN_MASK_40 = 40;
static const uint32_t HOSTATTN_MASK_41 = 41;
static const uint32_t HOSTATTN_MASK_42 = 42;
static const uint32_t HOSTATTN_MASK_43 = 43;
static const uint32_t HOSTATTN_MASK_44 = 44;
static const uint32_t HOSTATTN_MASK_45 = 45;
static const uint32_t HOSTATTN_MASK_46 = 46;
static const uint32_t HOSTATTN_MASK_47 = 47;
static const uint32_t HOSTATTN_MASK_48 = 48;
static const uint32_t HOSTATTN_MASK_49 = 49;
static const uint32_t HOSTATTN_MASK_50 = 50;
static const uint32_t HOSTATTN_MASK_51 = 51;
static const uint32_t HOSTATTN_MASK_52 = 52;
static const uint32_t HOSTATTN_MASK_53 = 53;
//<< [HOSTATTN_MASK]
// perv/reg00000.H

//>> [L3TRA0_TR0_CONFIG_4]
static const uint64_t L3TRA0_TR0_CONFIG_4 = 0x00018207ull;

static const uint32_t L3TRA0_TR0_CONFIG_4_A = 0;
static const uint32_t L3TRA0_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA0_TR0_CONFIG_4_B = 24;
static const uint32_t L3TRA0_TR0_CONFIG_4_B_LEN = 24;
//<< [L3TRA0_TR0_CONFIG_4]
// perv/reg00000.H

//>> [L3TRA0_TR1_CONFIG]
static const uint64_t L3TRA0_TR1_CONFIG = 0x00018222ull;

static const uint32_t L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t L3TRA0_TR1_CONFIG_BANK_MODE = 10;
static const uint32_t L3TRA0_TR1_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [L3TRA0_TR1_CONFIG]
// perv/reg00000.H

//>> [L3TRA1_TR0_CONFIG]
static const uint64_t L3TRA1_TR0_CONFIG = 0x00018242ull;

static const uint32_t L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t L3TRA1_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t L3TRA1_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [L3TRA1_TR0_CONFIG]
// perv/reg00000.H

//>> [L3TRA1_TR1_CONFIG_2]
static const uint64_t L3TRA1_TR1_CONFIG_2 = 0x00018265ull;

static const uint32_t L3TRA1_TR1_CONFIG_2_A = 0;
static const uint32_t L3TRA1_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA1_TR1_CONFIG_2_B = 24;
static const uint32_t L3TRA1_TR1_CONFIG_2_B_LEN = 24;
//<< [L3TRA1_TR1_CONFIG_2]
// perv/reg00000.H

//>> [L3TRA2_TR1_CONFIG_5]
static const uint64_t L3TRA2_TR1_CONFIG_5 = 0x000182a8ull;

static const uint32_t L3TRA2_TR1_CONFIG_5_C = 0;
static const uint32_t L3TRA2_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA2_TR1_CONFIG_5_D = 24;
static const uint32_t L3TRA2_TR1_CONFIG_5_D_LEN = 24;
//<< [L3TRA2_TR1_CONFIG_5]
// perv/reg00000.H

//>> [L3TRA3_TR0_CONFIG_3]
static const uint64_t L3TRA3_TR0_CONFIG_3 = 0x000182c6ull;

static const uint32_t L3TRA3_TR0_CONFIG_3_C = 0;
static const uint32_t L3TRA3_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA3_TR0_CONFIG_3_D = 24;
static const uint32_t L3TRA3_TR0_CONFIG_3_D_LEN = 24;
//<< [L3TRA3_TR0_CONFIG_3]
// perv/reg00000.H

//>> [REC_ERR_MST2_REG3]
static const uint64_t REC_ERR_MST2_REG3 = 0x000f004bull;

static const uint32_t REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT = 0;
static const uint32_t REC_ERR_MST2_REG3_48_MST2_ERROR_CODE = 1;
static const uint32_t REC_ERR_MST2_REG3_48_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT = 4;
static const uint32_t REC_ERR_MST2_REG3_49_MST2_ERROR_CODE = 5;
static const uint32_t REC_ERR_MST2_REG3_49_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT = 8;
static const uint32_t REC_ERR_MST2_REG3_50_MST2_ERROR_CODE = 9;
static const uint32_t REC_ERR_MST2_REG3_50_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT = 12;
static const uint32_t REC_ERR_MST2_REG3_51_MST2_ERROR_CODE = 13;
static const uint32_t REC_ERR_MST2_REG3_51_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT = 16;
static const uint32_t REC_ERR_MST2_REG3_52_MST2_ERROR_CODE = 17;
static const uint32_t REC_ERR_MST2_REG3_52_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT = 20;
static const uint32_t REC_ERR_MST2_REG3_53_MST2_ERROR_CODE = 21;
static const uint32_t REC_ERR_MST2_REG3_53_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT = 24;
static const uint32_t REC_ERR_MST2_REG3_54_MST2_ERROR_CODE = 25;
static const uint32_t REC_ERR_MST2_REG3_54_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT = 28;
static const uint32_t REC_ERR_MST2_REG3_55_MST2_ERROR_CODE = 29;
static const uint32_t REC_ERR_MST2_REG3_55_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT = 32;
static const uint32_t REC_ERR_MST2_REG3_56_MST2_ERROR_CODE = 33;
static const uint32_t REC_ERR_MST2_REG3_56_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT = 36;
static const uint32_t REC_ERR_MST2_REG3_57_MST2_ERROR_CODE = 37;
static const uint32_t REC_ERR_MST2_REG3_57_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT = 40;
static const uint32_t REC_ERR_MST2_REG3_58_MST2_ERROR_CODE = 41;
static const uint32_t REC_ERR_MST2_REG3_58_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT = 44;
static const uint32_t REC_ERR_MST2_REG3_59_MST2_ERROR_CODE = 45;
static const uint32_t REC_ERR_MST2_REG3_59_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT = 48;
static const uint32_t REC_ERR_MST2_REG3_60_MST2_ERROR_CODE = 49;
static const uint32_t REC_ERR_MST2_REG3_60_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT = 52;
static const uint32_t REC_ERR_MST2_REG3_61_MST2_ERROR_CODE = 53;
static const uint32_t REC_ERR_MST2_REG3_61_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT = 56;
static const uint32_t REC_ERR_MST2_REG3_62_MST2_ERROR_CODE = 57;
static const uint32_t REC_ERR_MST2_REG3_62_MST2_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT = 60;
static const uint32_t REC_ERR_MST2_REG3_63_MST2_ERROR_CODE = 61;
static const uint32_t REC_ERR_MST2_REG3_63_MST2_ERROR_CODE_LEN = 3;
//<< [REC_ERR_MST2_REG3]
// perv/reg00000.H

//>> [REC_ERR_MST6_REG2]
static const uint64_t REC_ERR_MST6_REG2 = 0x000f005aull;

static const uint32_t REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT = 0;
static const uint32_t REC_ERR_MST6_REG2_32_MST6_ERROR_CODE = 1;
static const uint32_t REC_ERR_MST6_REG2_32_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT = 4;
static const uint32_t REC_ERR_MST6_REG2_33_MST6_ERROR_CODE = 5;
static const uint32_t REC_ERR_MST6_REG2_33_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT = 8;
static const uint32_t REC_ERR_MST6_REG2_34_MST6_ERROR_CODE = 9;
static const uint32_t REC_ERR_MST6_REG2_34_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT = 12;
static const uint32_t REC_ERR_MST6_REG2_35_MST6_ERROR_CODE = 13;
static const uint32_t REC_ERR_MST6_REG2_35_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT = 16;
static const uint32_t REC_ERR_MST6_REG2_36_MST6_ERROR_CODE = 17;
static const uint32_t REC_ERR_MST6_REG2_36_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT = 20;
static const uint32_t REC_ERR_MST6_REG2_37_MST6_ERROR_CODE = 21;
static const uint32_t REC_ERR_MST6_REG2_37_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT = 24;
static const uint32_t REC_ERR_MST6_REG2_38_MST6_ERROR_CODE = 25;
static const uint32_t REC_ERR_MST6_REG2_38_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT = 28;
static const uint32_t REC_ERR_MST6_REG2_39_MST6_ERROR_CODE = 29;
static const uint32_t REC_ERR_MST6_REG2_39_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT = 32;
static const uint32_t REC_ERR_MST6_REG2_40_MST6_ERROR_CODE = 33;
static const uint32_t REC_ERR_MST6_REG2_40_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT = 36;
static const uint32_t REC_ERR_MST6_REG2_41_MST6_ERROR_CODE = 37;
static const uint32_t REC_ERR_MST6_REG2_41_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT = 40;
static const uint32_t REC_ERR_MST6_REG2_42_MST6_ERROR_CODE = 41;
static const uint32_t REC_ERR_MST6_REG2_42_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT = 44;
static const uint32_t REC_ERR_MST6_REG2_43_MST6_ERROR_CODE = 45;
static const uint32_t REC_ERR_MST6_REG2_43_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT = 48;
static const uint32_t REC_ERR_MST6_REG2_44_MST6_ERROR_CODE = 49;
static const uint32_t REC_ERR_MST6_REG2_44_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT = 52;
static const uint32_t REC_ERR_MST6_REG2_45_MST6_ERROR_CODE = 53;
static const uint32_t REC_ERR_MST6_REG2_45_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT = 56;
static const uint32_t REC_ERR_MST6_REG2_46_MST6_ERROR_CODE = 57;
static const uint32_t REC_ERR_MST6_REG2_46_MST6_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT = 60;
static const uint32_t REC_ERR_MST6_REG2_47_MST6_ERROR_CODE = 61;
static const uint32_t REC_ERR_MST6_REG2_47_MST6_ERROR_CODE_LEN = 3;
//<< [REC_ERR_MST6_REG2]
// perv/reg00000.H

//>> [REC_ERR_MST8_REG2]
static const uint64_t REC_ERR_MST8_REG2 = 0x000f0062ull;

static const uint32_t REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT = 0;
static const uint32_t REC_ERR_MST8_REG2_32_MST8_ERROR_CODE = 1;
static const uint32_t REC_ERR_MST8_REG2_32_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT = 4;
static const uint32_t REC_ERR_MST8_REG2_33_MST8_ERROR_CODE = 5;
static const uint32_t REC_ERR_MST8_REG2_33_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT = 8;
static const uint32_t REC_ERR_MST8_REG2_34_MST8_ERROR_CODE = 9;
static const uint32_t REC_ERR_MST8_REG2_34_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT = 12;
static const uint32_t REC_ERR_MST8_REG2_35_MST8_ERROR_CODE = 13;
static const uint32_t REC_ERR_MST8_REG2_35_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT = 16;
static const uint32_t REC_ERR_MST8_REG2_36_MST8_ERROR_CODE = 17;
static const uint32_t REC_ERR_MST8_REG2_36_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT = 20;
static const uint32_t REC_ERR_MST8_REG2_37_MST8_ERROR_CODE = 21;
static const uint32_t REC_ERR_MST8_REG2_37_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT = 24;
static const uint32_t REC_ERR_MST8_REG2_38_MST8_ERROR_CODE = 25;
static const uint32_t REC_ERR_MST8_REG2_38_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT = 28;
static const uint32_t REC_ERR_MST8_REG2_39_MST8_ERROR_CODE = 29;
static const uint32_t REC_ERR_MST8_REG2_39_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT = 32;
static const uint32_t REC_ERR_MST8_REG2_40_MST8_ERROR_CODE = 33;
static const uint32_t REC_ERR_MST8_REG2_40_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT = 36;
static const uint32_t REC_ERR_MST8_REG2_41_MST8_ERROR_CODE = 37;
static const uint32_t REC_ERR_MST8_REG2_41_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT = 40;
static const uint32_t REC_ERR_MST8_REG2_42_MST8_ERROR_CODE = 41;
static const uint32_t REC_ERR_MST8_REG2_42_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT = 44;
static const uint32_t REC_ERR_MST8_REG2_43_MST8_ERROR_CODE = 45;
static const uint32_t REC_ERR_MST8_REG2_43_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT = 48;
static const uint32_t REC_ERR_MST8_REG2_44_MST8_ERROR_CODE = 49;
static const uint32_t REC_ERR_MST8_REG2_44_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT = 52;
static const uint32_t REC_ERR_MST8_REG2_45_MST8_ERROR_CODE = 53;
static const uint32_t REC_ERR_MST8_REG2_45_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT = 56;
static const uint32_t REC_ERR_MST8_REG2_46_MST8_ERROR_CODE = 57;
static const uint32_t REC_ERR_MST8_REG2_46_MST8_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT = 60;
static const uint32_t REC_ERR_MST8_REG2_47_MST8_ERROR_CODE = 61;
static const uint32_t REC_ERR_MST8_REG2_47_MST8_ERROR_CODE_LEN = 3;
//<< [REC_ERR_MST8_REG2]
// perv/reg00000.H

//>> [SCAN_CAPTUREDR]
static const uint64_t SCAN_CAPTUREDR = 0x0003c000ull;

static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG = 0;
static const uint32_t SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN = 32;
//<< [SCAN_CAPTUREDR]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG110]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG110 = 0x0001806eull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG110_REGISTER110 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG110_REGISTER110_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG110]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG127]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG127 = 0x0001807full;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG127_REGISTER127 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG127_REGISTER127_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG127]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG29]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG29 = 0x0001801dull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG29_REGISTER29 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG29_REGISTER29_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG29]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG36]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG36 = 0x00018024ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG36_REGISTER36 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG36_REGISTER36_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG36]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG48]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG48 = 0x00018030ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG48_REGISTER48 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG48_REGISTER48_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG48]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG57]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG57 = 0x00018039ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG57_REGISTER57 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG57_REGISTER57_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG57]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG60]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG60 = 0x0001803cull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG60_REGISTER60 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG60_REGISTER60_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG60]
// perv/reg00001.H

//>> [SINGLE_OTP_ROM_OTPROM_REG95]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG95 = 0x0001805full;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG95_REGISTER95 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG95_REGISTER95_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG95]
// perv/reg00001.H

//>> [TRA0_TR0_CONFIG_4]
static const uint64_t TRA0_TR0_CONFIG_4 = 0x00010407ull;

static const uint32_t TRA0_TR0_CONFIG_4_A = 0;
static const uint32_t TRA0_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B = 24;
static const uint32_t TRA0_TR0_CONFIG_4_B_LEN = 24;
//<< [TRA0_TR0_CONFIG_4]
// perv/reg00001.H

//>> [TRA1_TR0_TRACE_LO_DATA_REG]
static const uint64_t TRA1_TR0_TRACE_LO_DATA_REG = 0x00010481ull;

static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [TRA1_TR0_TRACE_LO_DATA_REG]
// perv/reg00001.H

//>> [TRA1_TR1_CONFIG_2]
static const uint64_t TRA1_TR1_CONFIG_2 = 0x000104c5ull;

static const uint32_t TRA1_TR1_CONFIG_2_A = 0;
static const uint32_t TRA1_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t TRA1_TR1_CONFIG_2_B = 24;
static const uint32_t TRA1_TR1_CONFIG_2_B_LEN = 24;
//<< [TRA1_TR1_CONFIG_2]
// perv/reg00001.H

//>> [TRA2_TR1_TRACE_HI_DATA_REG]
static const uint64_t TRA2_TR1_TRACE_HI_DATA_REG = 0x00010540ull;

static const uint32_t TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [TRA2_TR1_TRACE_HI_DATA_REG]
// perv/reg00001.H

//>> [TRA2_TR1_CONFIG_5]
static const uint64_t TRA2_TR1_CONFIG_5 = 0x00010548ull;

static const uint32_t TRA2_TR1_CONFIG_5_C = 0;
static const uint32_t TRA2_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t TRA2_TR1_CONFIG_5_D = 24;
static const uint32_t TRA2_TR1_CONFIG_5_D_LEN = 24;
//<< [TRA2_TR1_CONFIG_5]
// perv/reg00001.H

//>> [TRA3_TR0_CONFIG_3]
static const uint64_t TRA3_TR0_CONFIG_3 = 0x00010586ull;

static const uint32_t TRA3_TR0_CONFIG_3_C = 0;
static const uint32_t TRA3_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t TRA3_TR0_CONFIG_3_D = 24;
static const uint32_t TRA3_TR0_CONFIG_3_D_LEN = 24;
//<< [TRA3_TR0_CONFIG_3]
// perv/reg00001.H

//>> [TRA4_TR0_CONFIG_2]
static const uint64_t TRA4_TR0_CONFIG_2 = 0x00010605ull;

static const uint32_t TRA4_TR0_CONFIG_2_A = 0;
static const uint32_t TRA4_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t TRA4_TR0_CONFIG_2_B = 24;
static const uint32_t TRA4_TR0_CONFIG_2_B_LEN = 24;
//<< [TRA4_TR0_CONFIG_2]
// perv/reg00001.H

//>> [TRA5_TR1_CONFIG_4]
static const uint64_t TRA5_TR1_CONFIG_4 = 0x000106c7ull;

static const uint32_t TRA5_TR1_CONFIG_4_A = 0;
static const uint32_t TRA5_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t TRA5_TR1_CONFIG_4_B = 24;
static const uint32_t TRA5_TR1_CONFIG_4_B_LEN = 24;
//<< [TRA5_TR1_CONFIG_4]
// perv/reg00001.H

//>> [TRA6_TR1_CONFIG]
static const uint64_t TRA6_TR1_CONFIG = 0x00010742ull;

static const uint32_t TRA6_TR1_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t TRA6_TR1_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t TRA6_TR1_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t TRA6_TR1_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t TRA6_TR1_CONFIG_BANK_MODE = 10;
static const uint32_t TRA6_TR1_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t TRA6_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t TRA6_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t TRA6_TR1_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t TRA6_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t TRA6_TR1_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t TRA6_TR1_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t TRA6_TR1_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t TRA6_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t TRA6_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t TRA6_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [TRA6_TR1_CONFIG]
// perv/reg00001.H

//>> [TRA6_TR1_CONFIG_3]
static const uint64_t TRA6_TR1_CONFIG_3 = 0x00010746ull;

static const uint32_t TRA6_TR1_CONFIG_3_C = 0;
static const uint32_t TRA6_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t TRA6_TR1_CONFIG_3_D = 24;
static const uint32_t TRA6_TR1_CONFIG_3_D_LEN = 24;
//<< [TRA6_TR1_CONFIG_3]
// perv/reg00001.H

//>> [TRA7_TR0_CONFIG]
static const uint64_t TRA7_TR0_CONFIG = 0x00010782ull;

static const uint32_t TRA7_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t TRA7_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t TRA7_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t TRA7_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t TRA7_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t TRA7_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t TRA7_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t TRA7_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t TRA7_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t TRA7_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t TRA7_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t TRA7_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t TRA7_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t TRA7_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t TRA7_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT = 22;
static const uint32_t TRA7_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
//<< [TRA7_TR0_CONFIG]
// perv/reg00001.H

//>> [TRA7_TR0_CONFIG_5]
static const uint64_t TRA7_TR0_CONFIG_5 = 0x00010788ull;

static const uint32_t TRA7_TR0_CONFIG_5_C = 0;
static const uint32_t TRA7_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t TRA7_TR0_CONFIG_5_D = 24;
static const uint32_t TRA7_TR0_CONFIG_5_D_LEN = 24;
//<< [TRA7_TR0_CONFIG_5]
// perv/reg00001.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "perv/reg00000_unused.H"
#include "perv/reg00001_unused.H"
#endif
#endif
