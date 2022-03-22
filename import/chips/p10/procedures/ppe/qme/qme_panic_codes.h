/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_panic_codes.h $       */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2022                                                    */
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
#ifndef __QME_PANIC_CODES_H__
#define __QME_PANIC_CODES_H__

// On PPE42, PANIC codes are stored as part of the trap word instruction.
// tw 31, RA, RB  Where RA and RB would used to encode the trap code.
// There are 16 valid gprs on PP42, so this gives 256 possible trap codes.
// The trap code is defined as a two byte code defined as 0xYYZZ where YY
// is encoded into the RA field and ZZ is incoded into the RB field
// YY and ZZ are limited to the values:
//   00,01,02,03,04,05,06,07,08,09,0a,0d,1c,1d,1e,1f (valid gpr ids)
//
// To add a new panic code, select an unused values and rename it.
// This file contains all the valid values that can be used. Using a
// panic code not in this list will result in a compiler/assembler error.

// Note:  this file is included in the pk_panic_codes.h within a typedef
// of a enum structure.

// The following are reserved for instance specific use.

//***** DO NOT CHANGE THIS FILE *****//
// the layout of this file and enum assignment
// are very close designed to be convenient
// for errlog module id and reason code

// -----------------------------------------------------------
// qme common
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_QME_SETUP
* @userdata2   QME_PVR
* @userdata4   QME_BAD_DD_LEVEL
* @devdesc     RIT level Mismatch between QME Image and HW
*/
QME_BAD_DD_LEVEL                          = 0x1c00, // 00xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_QME_SETUP
* @userdata2   QME_PIR
* @userdata4   QME_MAIN_FAPI2_INIT_FAILED
* @devdesc     FAPI2 Target setup failed, probably illegal quad id from PIR
*/
QME_MAIN_FAPI2_INIT_FAILED                = 0x1c01,
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_QME_SETUP
* @userdata4   QME_STOP11_RUNN_CONTAINED_MODE_ERROR
* @devdesc     Requesting Stop11 under Runn/Contained Mode
*/
QME_STOP11_RUNN_CONTAINED_MODE_ERROR      = 0x1c02,
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_QME_SETUP
* @userdata1   g_qme_common_ring_offset
* @userdata2   g_qme_inst_spec_ring_offset
* @userdata3   g_qme_max_spec_ring_length
* @userdata4   QME_STOP_BLOCK_COPY_AT_BOOT_FAILED
* @devdesc     Block Copy Common Ring Failed at QME Init
*/
QME_STOP_BLOCK_COPY_AT_BOOT_FAILED        = 0x1c03,
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_QME_SETUP
* @userdata2   g_qme_common_ring_offset
* @userdata3   CPMR_HDR_AUTO_WAKEUP_OFFSET
* @userdata4   QME_STOP_BLOCK_COPY_AUTO_WKUP_FAILED
* @devdesc     Block Copy Auto Wakeup Vector Failed during stop11
*/
QME_STOP_BLOCK_COPY_AUTO_WKUP_FAILED      = 0x1c04,
//UNUSED                                  = 0x1c05,
//UNUSED                                  = 0x1c06,
//UNUSED                                  = 0x1c07,
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_IRQ_ERR
* @userdata4   QME_DEBUGGER_TRIGGER_DETECTED
* @devdesc     EISR[0 or 1] detected, currently no errlog created
*/
QME_DEBUGGER_TRIGGER_DETECTED             = 0x1c08, // 01xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_IRQ_ERR
* @userdata4   QME_SYSTEM_CHECKSTOP_DETECTED
* @devdesc     System Checkstop detected, currently no errlog created
*/
QME_SYSTEM_CHECKSTOP_DETECTED             = 0x1c09,
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_IRQ_ERR
* @userdata4   QME_LFIR_INDICATION_DETECTED
* @devdesc     QME LFIR detected, currently no errlog created
*/
QME_LFIR_INDICATION_DETECTED              = 0x1c0a,
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_MACH_CHECK
* @userdata1   sprg0
* @userdata2   srr0
* @userdata3   edr
* @userdata4   QME_MACHINE_CHECK_COMMON_ERROR
* @devdesc     QME Machine Check for non data storage reasons
*/
QME_MACHINE_CHECK_COMMON_ERROR            = 0x1c0d,
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_MACH_CHECK
* @userdata1   sprg0
* @userdata2   srr0
* @userdata3   edr
* @userdata4   QME_MACHINE_CHECK_SCOM_ERROR
* @devdesc     QME Machine Check due to Scom Error
*/
QME_MACHINE_CHECK_SCOM_ERROR              = 0x1c1c, // 11xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_BASE_ERR
* @reasoncode  ERR_REASON_ID_MACH_CHECK
* @userdata1   sprg0
* @userdata2   srr0
* @userdata3   edr
* @userdata4   QME_MACHINE_CHECK_LOCAL_ERROR
* @devdesc     QME Machine Check due to a local address access
*/
QME_MACHINE_CHECK_LOCAL_ERROR             = 0x1c1d,
//UNUSED                                  = 0x1c1e,
//UNUSED                                  = 0x1c1f,

// -----------------------------------------------------------
// stop common

//UNUSED                                  = 0x1d00, // 00xxx
//UNUSED                                  = 0x1d01,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_FAULT_INJ
* @userdata3   core_mask
* @userdata4   QME_STOP23_ENTRY_FAULT_INJECT
* @devdesc     QME Stop2/3 Entry Error Inject
*/
QME_STOP23_ENTRY_FAULT_INJECT             = 0x1d02,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_FAULT_INJ
* @userdata3   core_mask
* @userdata4   QME_STOP11_ENTRY_FAULT_INJECT
* @devdesc     QME Stop11 Entry Error Inject
*/
QME_STOP11_ENTRY_FAULT_INJECT             = 0x1d03,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_FAULT_INJ
* @userdata3   core_mask
* @userdata4   QME_STOP2_EXIT_FAULT_INJECT
* @devdesc     QME Stop2 Exit Error Inject
*/
QME_STOP2_EXIT_FAULT_INJECT               = 0x1d04,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_FAULT_INJ
* @userdata3   core_mask
* @userdata4   QME_STOP3_RVRM_POWON_FAULT_INJECT
* @devdesc     QME Stop3 Exit Error Inject
*/
QME_STOP3_RVRM_POWON_FAULT_INJECT         = 0x1d05,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_FAULT_INJ
* @userdata3   core_mask
* @userdata4   QME_STOP11_POWON_FAULT_INJECT
* @devdesc     QME Stop11 Exit Error Inject
*/
QME_STOP11_POWON_FAULT_INJECT             = 0x1d06,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_FAULT_INJ
* @userdata3   core_mask
* @userdata4   QME_SELF_RESTORE_FAULT_INJECT
* @devdesc     QME Self Restore Error Inject
*/
QME_SELF_RESTORE_FAULT_INJECT             = 0x1d07,
//UNUSED                                  = 0x1d08, // 01xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_STOP_REQ
* @userdata1   G_qme_record.c_pm_state[c_index]
* @userdata2   G_qme_record.c_pm_state[c_index - 1]
* @userdata3   c_index
* @userdata4   QME_FUSED_EVEN_STOP_LEVELS_DD1
* @devdesc     QME reuqested with two different stop states between fused
*/
QME_FUSED_EVEN_STOP_LEVELS_DD1            = 0x1d09,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_STOP_REQ
* @userdata1   pscrs
* @userdata2   esl_ec
* @userdata3   c_loop
* @userdata4   QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED
* @devdesc     QME requested with stop11 but ESL/EC disabled
*/
QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED   = 0x1d0a,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_STOP_REQ
* @userdata1   core_index
* @userdata2   core_fir_upper
* @userdata3   core_fir_lower
* @userdata4   QME_STOP_SELF_CORE_FIR
* @devdesc     QME detect CORE_FIR after self restore
*/
QME_STOP_SELF_CORE_FIR                    = 0x1d0d,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_PFET_CLK
* @userdata1   panic_code
* @userdata2   l_scomData
* @userdata3   l_target
* @userdata4   RC_CORECACHE_CLK_CTRL_TIMEOUT_CORE
* @devdesc     QME Clock Start/Stop Command Timed Out
*/
CORECACHE_CLK_CTRL_TIMEOUT_CORE           = 0x1d1c, // 11xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_PFET_CLK
* @userdata1   panic_code
* @userdata2   l_pfet_stat
* @userdata3   i_target
* @userdata4   RC_CORECACHE_POW_CTRL_TIMEOUT
* @devdesc     QME PFET Start/Stop Command Timed Out
*/
CORECACHE_POW_CTRL_TIMEOUT                = 0x1d1d,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_FLOW
* @reasoncode  ERR_REASON_ID_PFET_CLK
* @userdata1   panic_code
* @userdata2   l_pfet_seq_states
* @userdata3   i_target
* @userdata4   RC_CORECACHE_PFET_SEQ_STATE_ERROR
* @devdesc     QME PFET Sequencer State Not in Idle
*/
CORECACHE_PFET_SEQ_STATE_ERROR            = 0x1d1e,
//UNUSED                                  = 0x1d1f,

// -----------------------------------------------------------
// stop entry
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   QME_SCSR
* @userdata3   i_target
* @userdata4   RC_L2_PURGE_DONE_TIMEOUT
* @devdesc     QME Stop2 Entry L2 Purge timeout
*/
L2_PURGE_DONE_TIMEOUT                     = 0x1e00, // 00xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   QME_SCSR
* @userdata3   i_target
* @userdata4   RC_NCU_PURGE_DONE_TIMEOUT
* @devdesc     QME Stop2 Entry NCU Purge timeout
*/
NCU_PURGE_DONE_TIMEOUT                    = 0x1e01,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   QME_SCSR
* @userdata3   i_target
* @userdata4   RC_PMSR_SHIFT_INACTIVE_TIMEOUT
* @devdesc     QME PMSR Shift Disable timeout
*/
PMSR_SHIFT_INACTIVE_TIMEOUT               = 0x1e02,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   CPMS_CUCR
* @userdata3   i_target
* @userdata4   RC_SHADOW_ENA_FDCR_UPDATE_IN_PROG_TIMEOUT
* @devdesc     QME Shadow Enable FDCR Update Timeout
*/
SHADOW_ENA_FDCR_UPDATE_IN_PROG_TIMEOUT    = 0x1e03,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   CPMS_CUCR
* @userdata3   i_target
* @userdata4   RC_SHADOW_ENA_CORE_REFRESH_ACTIVE_TIMEOUT
* @devdesc     QME Shadow Enable Core Refresh Timeout
*/
SHADOW_ENA_CORE_REFRESH_ACTIVE_TIMEOUT    = 0x1e04,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   QME_TFCSR
* @userdata3   i_target
* @userdata4   RC_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_TIMEOUT
* @devdesc     QME TimeFac Receive Timeout
*/
TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_TIMEOUT = 0x1e05,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   QME_TFCSR
* @userdata3   i_target
* @userdata4   RC_TIMEFAC_FROM_PC_TFCSR_ERROR_CHECK_FAILED
* @devdesc     QME TimeFac Receive Error detected
*/
TIMEFAC_FROM_PC_TFCSR_ERROR_CHECK_FAILED  = 0x1e06,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   QME_CGCSR
* @userdata3   i_target
* @userdata4   RC_ECL2_CLK_SYNC_DROP_TIMEOUT
* @devdesc     QME CL2 Clock Sync Drop Timeout
*/
ECL2_CLK_SYNC_DROP_TIMEOUT                = 0x1e07,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP2_ENTRY
* @userdata1   panic_code
* @userdata2   QME_RCSCR.core_change_done
* @userdata3   i_target
* @userdata4   RC_CORE_CHANGE_DONE_RESCLK_ENTRY_TIMEOUT
* @devdesc     QME Resclk Entry Timeout
*/
CORE_CHANGE_DONE_RESCLK_ENTRY_TIMEOUT     = 0x1e08, // 01xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP3_ENTRY
* @userdata1   panic_code
* @userdata2   CPMS_RVCSR
* @userdata3   i_target
* @userdata4   RC_VMIN_ENA_RVID_ACTIVE_TIMEOUT
* @devdesc     QME Rvid Enable Timeout
*/
VMIN_ENA_RVID_ACTIVE_TIMEOUT              = 0x1e09,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP3_ENTRY
* @userdata1   panic_code
* @userdata2   CPMS_CL2_PFETSTAT
* @userdata3   i_target
* @userdata4   RC_VMIN_ENA_VDD_PG_STATE_TIMEOUT
* @devdesc     QME Vmin PG State Idle Timeout
*/
VMIN_ENA_VDD_PG_STATE_TIMEOUT             = 0x1e0a,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP3_ENTRY
* @userdata1   panic_code
* @userdata2   CPMS_CL2_PFETSTAT
* @userdata3   i_target
* @userdata4   RC_VMIN_ENA_VDD_PFET_ENABLE_ACTUAL_FAILED
* @devdesc     QME Vmin PFET Enable Actual Unexpected
*/
VMIN_ENA_VDD_PFET_ENABLE_ACTUAL_FAILED    = 0x1e0d,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP11_ENTRY
* @userdata1   panic_code
* @userdata2   L3_MISC_L3CERRS_PM_PURGE_REG
* @userdata3   i_target
* @userdata4   RC_L3_PURGE_DONE_TIMEOUT
* @devdesc     QME L3 Purge Timeout
*/
L3_PURGE_DONE_TIMEOUT                     = 0x1e1c, // 11xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP11_ENTRY
* @userdata1   panic_code
* @userdata2   QME_SCSR
* @userdata3   i_target
* @userdata4   RC_POWERBUS_PURGE_DONE_TIMEOUT
* @devdesc     QME Powerbus Purge Timeout
*/
POWERBUS_PURGE_DONE_TIMEOUT               = 0x1e1d,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP11_ENTRY
* @userdata1   panic_code
* @userdata2   QME_SCSR
* @userdata3   i_target
* @userdata4   RC_CHTM_PURGE_DONE_TIMEOUT
* @devdesc     QME Chtm Purge Timeout
*/
CHTM_PURGE_DONE_TIMEOUT                   = 0x1e1e,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_ENTRY
* @reasoncode  ERR_REASON_ID_STOP11_ENTRY
* @userdata1   panic_code
* @userdata2   QME_CGCSR
* @userdata3   i_target
* @userdata4   RC_L3_CLK_SYNC_DROP_TIMEOUT
* @devdesc     QME L3 Clock Sync Drop Timeout
*/
L3_CLK_SYNC_DROP_TIMEOUT                  = 0x1e1f,

// -----------------------------------------------------------
// stop exit
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP2_EXIT
* @userdata1   panic_code
* @userdata2   QME_CGCSR
* @userdata3   i_target
* @userdata4   RC_ECL2_CLK_SYNC_DONE_TIMEOUT
* @devdesc     QME CL2 Clock Sync Done Timeout
*/
ECL2_CLK_SYNC_DONE_TIMEOUT                = 0x1f00, // 00xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP2_EXIT
* @userdata1   panic_code
* @userdata2   QME_RCSCR
* @userdata3   i_target
* @userdata4   RC_CORE_CHANGE_DONE_RESCLK_EXIT_TIMEOUT
* @devdesc     QME Resclk Exit Timeout
*/
CORE_CHANGE_DONE_RESCLK_EXIT_TIMEOUT      = 0x1f01,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP2_EXIT
* @userdata1   panic_code
* @userdata2   QME_CUCR
* @userdata3   i_target
* @userdata4   RC_SHADOW_DIS_FDCR_UPDATE_IN_PROG_TIMEOUT
* @devdesc     QME Shadow Disable FDCR Update Timeout
*/
SHADOW_DIS_FDCR_UPDATE_IN_PROG_TIMEOUT    = 0x1f02,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP2_EXIT
* @userdata1   panic_code
* @userdata2   QME_CUCR.core_shadow_state
* @userdata3   i_target
* @userdata4   RC_SHADOW_DIS_CORE_SHADOW_STATE_TIMEOUT
* @devdesc     QME Shadow Disable State Timeout
*/
SHADOW_DIS_CORE_SHADOW_STATE_TIMEOUT      = 0x1f03,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP2_EXIT
* @userdata1   panic_code
* @userdata2   QME_TFCSR
* @userdata3   i_target
* @userdata4   RC_TIMEFAC_TO_PC_XFER_SENT_DONE_TIMEOUT
* @devdesc     QME TimeFac Sent Done Timeout
*/
TIMEFAC_TO_PC_XFER_SENT_DONE_TIMEOUT      = 0x1f04,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP2_EXIT
* @userdata1   panic_code
* @userdata2   QME_TFCSR
* @userdata3   i_target
* @userdata4   RC_TIMEFAC_TO_PC_TFCSR_ERROR_CHECK_FAILED
* @devdesc     QME TimeFac Sent Error detected
*/
TIMEFAC_TO_PC_TFCSR_ERROR_CHECK_FAILED    = 0x1f05,
MSG_SEND_BLOCK_COPY_FAILED                = 0x1f06,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP2_EXIT
* @userdata1   panic_code
* @userdata2   QME_TFCSR
* @userdata3   i_target
* @userdata4   RC_TIMEFAC_TO_PC_TFCSR_ERROR_CHECK_FAILED
* @devdesc     QME TimeFac Sent Error detected
*/
QME_STOP_WAKEUP_PAIR_MISMATCH             = 0x1f07,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP3_EXIT
* @userdata1   panic_code
* @userdata2   QME_RVCSR
* @userdata3   i_target
* @userdata4   RC_VMIN_DIS_RVID_BYPASS_TIMEOUT
* @devdesc     QME Rvid Bypass Timeout
*/
VMIN_DIS_RVID_BYPASS_TIMEOUT              = 0x1f08, // 01xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP3_EXIT
* @userdata1   panic_code
* @userdata2   QME_RVCSR
* @userdata3   i_target
* @userdata4   RC_VMIN_DIS_RVID_ENABLED_TIMEOUT
* @devdesc     QME Rvid Enabled Timeout
*/
VMIN_DIS_RVID_ENABLED_TIMEOUT             = 0x1f09,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP3_EXIT
* @userdata1   panic_code
* @userdata2   CPMS_CL2_PFETSTAT
* @userdata3   i_target
* @userdata4   RC_VMIN_DIS_VDD_PFET_ENABLE_TIMEOUT
* @devdesc     QME Vmin Disable PFET Enable Timeout
*/
VMIN_DIS_VDD_PFET_ENABLE_TIMEOUT          = 0x1f0a,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP3_EXIT
* @userdata1   panic_code
* @userdata2   CPMS_CL2_PFETCNTL
* @userdata3   i_target
* @userdata4   RC_VMIN_DIS_VDD_PG_STATE_TIMEOUT
* @devdesc     QME Vmin Disable PG State Timeout
*/
VMIN_DIS_VDD_PG_STATE_TIMEOUT             = 0x1f0d,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP11_EXIT
* @userdata1   panic_code
* @userdata2   QME_CGCSR
* @userdata3   i_target
* @userdata4   RC_L3_CLK_SYNC_DONE_TIMEOUT
* @devdesc     QME L3 Clock Sync Done Timeout
*/
L3_CLK_SYNC_DONE_TIMEOUT                  = 0x1f1c, // 11xxx
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP11_EXIT
* @userdata1   l_cpmrOffset
* @userdata2   l_sramOffset
* @userdata3   l_ringType
* @userdata4   QME_STOP_BLOCK_COPY_SCAN_RING_FAILED
* @devdesc     QME Block Copy Scan Ring Failed
*/
QME_STOP_BLOCK_COPY_SCAN_RING_FAILED      = 0x1f1d,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP11_EXIT
* @userdata1   g_qme_scom_offset
* @userdata2   g_qme_coreL2ScomLength
* @userdata3   ec
* @userdata4   QME_STOP_BLOCK_COPY_CL2_SCOM_FAILED
* @devdesc     QME Block Copy Cl2 Scom Failed
*/
QME_STOP_BLOCK_COPY_CL2_SCOM_FAILED       = 0x1f1e,
/*
* @errortype
* @moduleid    QME_MODULE_ID_STOP_EXIT
* @reasoncode  ERR_REASON_ID_STOP11_EXIT
* @userdata1   g_qme_scom_offset
* @userdata2   g_qme_coreL3ScomLength
* @userdata3   ec
* @userdata4   QME_STOP_BLOCK_COPY_L3_SCOM_FAILED
* @devdesc     QME Block Copy L3 Scom Failed
*/
QME_STOP_BLOCK_COPY_L3_SCOM_FAILED        = 0x1f1f,

// -----------------------------------------------------------
// putring, code not defined here but in qme_service_codes.h
/*
* @errortype
* @moduleid    QME_MODULE_ID_QME_SCAN
* @reasoncode  PUTRING_PARALLEL_SCAN_ERR
* @userdata1   l_tmpRc
* @userdata2   l_corePos
* @userdata3   i_ringId
* @userdata4   QME_PUT_RING_FAIL
* @devdesc     QME PutRing Parallel Scan Error
*/
/*
* @errortype
* @moduleid    QME_MODULE_ID_QME_SCAN
* @reasoncode  PUTRING_HEADER_ERR
* @userdata1   l_tmpRc
* @userdata2   l_corePos
* @userdata3   i_ringId
* @userdata4   QME_PUT_RING_FAIL
* @devdesc     QME PutRing Header Error
*/
/*
* @errortype
* @moduleid    QME_MODULE_ID_QME_SCAN
* @reasoncode  PUTRING_BAD_STRING
* @userdata1   l_tmpRc
* @userdata2   l_corePos
* @userdata3   i_ringId
* @userdata4   QME_PUT_RING_FAIL
* @devdesc     QME PutRing Bad String
*/
/*
* @errortype
* @moduleid    QME_MODULE_ID_QME_SCAN
* @reasoncode  PUTRING_HEADER_MISMATCH
* @userdata1   l_tmpRc
* @userdata2   l_corePos
* @userdata3   i_ringId
* @userdata4   QME_PUT_RING_FAIL
* @devdesc     QME PutRing Header Mismatch
*/
/*
* @errortype
* @moduleid    QME_MODULE_ID_QME_SCAN
* @reasoncode  PUTRING_BAD_NIBBLE_INDEX
* @userdata1   l_tmpRc
* @userdata2   l_corePos
* @userdata3   i_ringId
* @userdata4   QME_PUT_RING_FAIL
* @devdesc     QME PutRing Bad Nibble Index
*/
/*
* @errortype
* @moduleid    QME_MODULE_ID_QME_SCAN
* @reasoncode  PUTRING_UNKNOWN_ERR
* @userdata1   l_tmpRc
* @userdata2   l_corePos
* @userdata3   i_ringId
* @userdata4   QME_PUT_RING_FAIL
* @devdesc     QME PutRing Unknown Error
*/

// -----------------------------------------------------------
// self restore, code not defined here but in qme_service_codes.h
/*
* @errortype
* @moduleid    QME_MODULE_ID_SR
* @reasoncode  REASON_SR_FAIL
* @userdata1   core_target
* @userdata2   scatch_add
* @userdata3   sr_fail_loc
* @userdata4   QME_STOP11_EXIT
* @devdesc     QME PutRing Unknown Error
*/

#endif
