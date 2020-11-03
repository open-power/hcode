/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_perv_2_unused.H $    */
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

#ifndef __p10_scom_perv_2_H_UNUSED__
#define __p10_scom_perv_2_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> [CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT = 0x00018318ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL = 1;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN = 7;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL = 8;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL = 9;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN = 7;
//<< [CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]
// perv/reg00004.H

//>> [CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]
static const uint64_t CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY = 0x00018309ull;

static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE = 0;
static const uint32_t CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN = 16;
//<< [CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]
// perv/reg00004.H

//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES = 0x0001833bull;

static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 = 2;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 = 10;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 = 18;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN = 6;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 = 26;
static const uint32_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN = 6;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
// perv/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC = 0x0001432full;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
// perv/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET = 0x00014325ull;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]
// perv/reg00004.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES = 0x00014338ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE = 6;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN = 2;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE = 10;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE = 11;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE = 14;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE = 15;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR = 18;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR = 19;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE = 20;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE = 21;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE = 22;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE = 23;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE = 26;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED = 27;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE = 31;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
// perv/reg00004.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE = 0x0001232bull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
// perv/reg00004.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE = 0x00012332ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
// perv/reg00004.H

//>> [CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY = 0x00011316ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1 = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1_LEN = 8;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2 = 8;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2_LEN = 8;
//<< [CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]
// perv/reg00004.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE = 0x00011302ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD = 1;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]
// perv/reg00004.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE = 0x00011312ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL = 1;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
// perv/reg00004.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET = 0x00011325ull;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]
// perv/reg00004.H

//>> [FSXCOMP_FSXLOG_M1A_DATA_AREA_12]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI = 0x0000284cull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE = 0x00002930ull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW = 0x0005004cull;

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12 = 0;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12_LEN = 32;
//<< [FSXCOMP_FSXLOG_M1A_DATA_AREA_12]
// perv/reg00004.H

//>> [FSXCOMP_FSXLOG_M1A_DATA_AREA_5]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI = 0x00002845ull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE = 0x00002914ull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW = 0x00050045ull;

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5 = 0;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5_LEN = 32;
//<< [FSXCOMP_FSXLOG_M1A_DATA_AREA_5]
// perv/reg00004.H

//>> [FSXCOMP_FSXLOG_M2A_DATA_AREA_9]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI = 0x000028c9ull;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE = 0x00002b24ull;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW = 0x000500c9ull;

static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9 = 0;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9_LEN = 32;
//<< [FSXCOMP_FSXLOG_M2A_DATA_AREA_9]
// perv/reg00004.H

//>> [FSXCOMP_FSXLOG_M2B_DATA_AREA_3]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI = 0x00002903ull;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE = 0x00002c0cull;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO = 0x00050103ull;

static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3 = 0;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3_LEN = 32;
//<< [FSXCOMP_FSXLOG_M2B_DATA_AREA_3]
// perv/reg00004.H

//>> [FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI = 0x00002827ull;
static const uint32_t FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE = 0x0000289cull;
static const uint32_t FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO = 0x00050027ull;

static const uint32_t FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B = 0;
static const uint32_t FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B_LEN = 32;
//<< [FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B]
// perv/reg00004.H

//>> [FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI = 0x0000282bull;
static const uint32_t FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE = 0x000028acull;
static const uint32_t FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW = 0x0005002bull;

static const uint32_t FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A = 0;
static const uint32_t FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A_LEN = 32;
//<< [FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A]
// perv/reg00004.H

//>> [L3TRA0_TR1_CONFIG_5]
static const uint64_t L3TRA0_TR1_CONFIG_5 = 0x00018228ull;

static const uint32_t L3TRA0_TR1_CONFIG_5_C = 0;
static const uint32_t L3TRA0_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA0_TR1_CONFIG_5_D = 24;
static const uint32_t L3TRA0_TR1_CONFIG_5_D_LEN = 24;
//<< [L3TRA0_TR1_CONFIG_5]
// perv/reg00004.H

//>> [L3TRA0_TR1_TRACE_HI_DATA_REG]
static const uint64_t L3TRA0_TR1_TRACE_HI_DATA_REG = 0x00018220ull;

static const uint32_t L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA0_TR1_TRACE_HI_DATA_REG]
// perv/reg00004.H

//>> [L3TRA1_TR0_CONFIG_3]
static const uint64_t L3TRA1_TR0_CONFIG_3 = 0x00018246ull;

static const uint32_t L3TRA1_TR0_CONFIG_3_C = 0;
static const uint32_t L3TRA1_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA1_TR0_CONFIG_3_D = 24;
static const uint32_t L3TRA1_TR0_CONFIG_3_D_LEN = 24;
//<< [L3TRA1_TR0_CONFIG_3]
// perv/reg00004.H

//>> [L3TRA2_TR0_CONFIG_4]
static const uint64_t L3TRA2_TR0_CONFIG_4 = 0x00018287ull;

static const uint32_t L3TRA2_TR0_CONFIG_4_A = 0;
static const uint32_t L3TRA2_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA2_TR0_CONFIG_4_B = 24;
static const uint32_t L3TRA2_TR0_CONFIG_4_B_LEN = 24;
//<< [L3TRA2_TR0_CONFIG_4]
// perv/reg00004.H

//>> [L3TRA3_TR0_TRACE_LO_DATA_REG]
static const uint64_t L3TRA3_TR0_TRACE_LO_DATA_REG = 0x000182c1ull;

static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA3_TR0_TRACE_LO_DATA_REG]
// perv/reg00004.H

//>> [L3TRA3_TR1_CONFIG_2]
static const uint64_t L3TRA3_TR1_CONFIG_2 = 0x000182e5ull;

static const uint32_t L3TRA3_TR1_CONFIG_2_A = 0;
static const uint32_t L3TRA3_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA3_TR1_CONFIG_2_B = 24;
static const uint32_t L3TRA3_TR1_CONFIG_2_B_LEN = 24;
//<< [L3TRA3_TR1_CONFIG_2]
// perv/reg00004.H

//>> [OTPC_M_MEASURE_REG5]
static const uint64_t OTPC_M_MEASURE_REG5 = 0x00010015ull;

static const uint32_t OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA = 0;
static const uint32_t OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA_LEN = 64;
//<< [OTPC_M_MEASURE_REG5]
// perv/reg00004.H

//>> [QMETRA0_TR0_CONFIG_5]
static const uint64_t QMETRA0_TR0_CONFIG_5 = 0x00018408ull;

static const uint32_t QMETRA0_TR0_CONFIG_5_C = 0;
static const uint32_t QMETRA0_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t QMETRA0_TR0_CONFIG_5_D = 24;
static const uint32_t QMETRA0_TR0_CONFIG_5_D_LEN = 24;
//<< [QMETRA0_TR0_CONFIG_5]
// perv/reg00004.H

//>> [REC_ERR_MST1_REG1]
static const uint64_t REC_ERR_MST1_REG1 = 0x000f0045ull;

static const uint32_t REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT = 0;
static const uint32_t REC_ERR_MST1_REG1_16_MST1_ERROR_CODE = 1;
static const uint32_t REC_ERR_MST1_REG1_16_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT = 4;
static const uint32_t REC_ERR_MST1_REG1_17_MST1_ERROR_CODE = 5;
static const uint32_t REC_ERR_MST1_REG1_17_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT = 8;
static const uint32_t REC_ERR_MST1_REG1_18_MST1_ERROR_CODE = 9;
static const uint32_t REC_ERR_MST1_REG1_18_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT = 12;
static const uint32_t REC_ERR_MST1_REG1_19_MST1_ERROR_CODE = 13;
static const uint32_t REC_ERR_MST1_REG1_19_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT = 16;
static const uint32_t REC_ERR_MST1_REG1_20_MST1_ERROR_CODE = 17;
static const uint32_t REC_ERR_MST1_REG1_20_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT = 20;
static const uint32_t REC_ERR_MST1_REG1_21_MST1_ERROR_CODE = 21;
static const uint32_t REC_ERR_MST1_REG1_21_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT = 24;
static const uint32_t REC_ERR_MST1_REG1_22_MST1_ERROR_CODE = 25;
static const uint32_t REC_ERR_MST1_REG1_22_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT = 28;
static const uint32_t REC_ERR_MST1_REG1_23_MST1_ERROR_CODE = 29;
static const uint32_t REC_ERR_MST1_REG1_23_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT = 32;
static const uint32_t REC_ERR_MST1_REG1_24_MST1_ERROR_CODE = 33;
static const uint32_t REC_ERR_MST1_REG1_24_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT = 36;
static const uint32_t REC_ERR_MST1_REG1_25_MST1_ERROR_CODE = 37;
static const uint32_t REC_ERR_MST1_REG1_25_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT = 40;
static const uint32_t REC_ERR_MST1_REG1_26_MST1_ERROR_CODE = 41;
static const uint32_t REC_ERR_MST1_REG1_26_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT = 44;
static const uint32_t REC_ERR_MST1_REG1_27_MST1_ERROR_CODE = 45;
static const uint32_t REC_ERR_MST1_REG1_27_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT = 48;
static const uint32_t REC_ERR_MST1_REG1_28_MST1_ERROR_CODE = 49;
static const uint32_t REC_ERR_MST1_REG1_28_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT = 52;
static const uint32_t REC_ERR_MST1_REG1_29_MST1_ERROR_CODE = 53;
static const uint32_t REC_ERR_MST1_REG1_29_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT = 56;
static const uint32_t REC_ERR_MST1_REG1_30_MST1_ERROR_CODE = 57;
static const uint32_t REC_ERR_MST1_REG1_30_MST1_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT = 60;
static const uint32_t REC_ERR_MST1_REG1_31_MST1_ERROR_CODE = 61;
static const uint32_t REC_ERR_MST1_REG1_31_MST1_ERROR_CODE_LEN = 3;
//<< [REC_ERR_MST1_REG1]
// perv/reg00004.H

//>> [REC_ERR_MST5_REG0]
static const uint64_t REC_ERR_MST5_REG0 = 0x000f0054ull;

static const uint32_t REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT = 0;
static const uint32_t REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE = 1;
static const uint32_t REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT = 4;
static const uint32_t REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE = 5;
static const uint32_t REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT = 8;
static const uint32_t REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE = 9;
static const uint32_t REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT = 12;
static const uint32_t REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE = 13;
static const uint32_t REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT = 16;
static const uint32_t REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE = 17;
static const uint32_t REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT = 20;
static const uint32_t REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE = 21;
static const uint32_t REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT = 24;
static const uint32_t REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE = 25;
static const uint32_t REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT = 28;
static const uint32_t REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE = 29;
static const uint32_t REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT = 32;
static const uint32_t REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE = 33;
static const uint32_t REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT = 36;
static const uint32_t REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE = 37;
static const uint32_t REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT = 40;
static const uint32_t REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE = 41;
static const uint32_t REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT = 44;
static const uint32_t REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE = 45;
static const uint32_t REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT = 48;
static const uint32_t REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE = 49;
static const uint32_t REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT = 52;
static const uint32_t REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE = 53;
static const uint32_t REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT = 56;
static const uint32_t REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE = 57;
static const uint32_t REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT = 60;
static const uint32_t REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE = 61;
static const uint32_t REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE_LEN = 3;
//<< [REC_ERR_MST5_REG0]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG107]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG107 = 0x0001806bull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG107]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG118]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG118 = 0x00018076ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG118]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG16]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG16 = 0x00018010ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG16]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG21]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG21 = 0x00018015ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG21]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG40]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG40 = 0x00018028ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG40]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG6]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG6 = 0x00018006ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG6]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG68]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG68 = 0x00018044ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG68]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG77]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG77 = 0x0001804dull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG77]
// perv/reg00004.H

//>> [SINGLE_OTP_ROM_OTPROM_REG82]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG82 = 0x00018052ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG82]
// perv/reg00004.H

//>> [TRA0_TR1_CONFIG_5]
static const uint64_t TRA0_TR1_CONFIG_5 = 0x00010448ull;

static const uint32_t TRA0_TR1_CONFIG_5_C = 0;
static const uint32_t TRA0_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t TRA0_TR1_CONFIG_5_D = 24;
static const uint32_t TRA0_TR1_CONFIG_5_D_LEN = 24;
//<< [TRA0_TR1_CONFIG_5]
// perv/reg00004.H

//>> [TRA1_TR0_CONFIG_3]
static const uint64_t TRA1_TR0_CONFIG_3 = 0x00010486ull;

static const uint32_t TRA1_TR0_CONFIG_3_C = 0;
static const uint32_t TRA1_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t TRA1_TR0_CONFIG_3_D = 24;
static const uint32_t TRA1_TR0_CONFIG_3_D_LEN = 24;
//<< [TRA1_TR0_CONFIG_3]
// perv/reg00004.H

//>> [TRA2_TR0_CONFIG_4]
static const uint64_t TRA2_TR0_CONFIG_4 = 0x00010507ull;

static const uint32_t TRA2_TR0_CONFIG_4_A = 0;
static const uint32_t TRA2_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t TRA2_TR0_CONFIG_4_B = 24;
static const uint32_t TRA2_TR0_CONFIG_4_B_LEN = 24;
//<< [TRA2_TR0_CONFIG_4]
// perv/reg00004.H

//>> [TRA3_TR1_CONFIG_2]
static const uint64_t TRA3_TR1_CONFIG_2 = 0x000105c5ull;

static const uint32_t TRA3_TR1_CONFIG_2_A = 0;
static const uint32_t TRA3_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t TRA3_TR1_CONFIG_2_B = 24;
static const uint32_t TRA3_TR1_CONFIG_2_B_LEN = 24;
//<< [TRA3_TR1_CONFIG_2]
// perv/reg00005.H

//>> [TRA4_TR0_TRACE_HI_DATA_REG]
static const uint64_t TRA4_TR0_TRACE_HI_DATA_REG = 0x00010600ull;

static const uint32_t TRA4_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t TRA4_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [TRA4_TR0_TRACE_HI_DATA_REG]
// perv/reg00005.H

//>> [TRA4_TR1_CONFIG_3]
static const uint64_t TRA4_TR1_CONFIG_3 = 0x00010646ull;

static const uint32_t TRA4_TR1_CONFIG_3_C = 0;
static const uint32_t TRA4_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t TRA4_TR1_CONFIG_3_D = 24;
static const uint32_t TRA4_TR1_CONFIG_3_D_LEN = 24;
//<< [TRA4_TR1_CONFIG_3]
// perv/reg00005.H

//>> [TRA5_TR0_CONFIG_5]
static const uint64_t TRA5_TR0_CONFIG_5 = 0x00010688ull;

static const uint32_t TRA5_TR0_CONFIG_5_C = 0;
static const uint32_t TRA5_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t TRA5_TR0_CONFIG_5_D = 24;
static const uint32_t TRA5_TR0_CONFIG_5_D_LEN = 24;
//<< [TRA5_TR0_CONFIG_5]
// perv/reg00005.H

//>> [TRA6_TR0_CONFIG_2]
static const uint64_t TRA6_TR0_CONFIG_2 = 0x00010705ull;

static const uint32_t TRA6_TR0_CONFIG_2_A = 0;
static const uint32_t TRA6_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t TRA6_TR0_CONFIG_2_B = 24;
static const uint32_t TRA6_TR0_CONFIG_2_B_LEN = 24;
//<< [TRA6_TR0_CONFIG_2]
// perv/reg00005.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "perv/reg00004_unused.H"
#include "perv/reg00005_unused.H"
#endif
#endif
