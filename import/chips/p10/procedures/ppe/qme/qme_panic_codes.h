/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_panic_codes.h $       */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2021                                                    */
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

// qme common

QME_BAD_DD_LEVEL                          = 0x1c00, // 00xxx
QME_MAIN_FAPI2_INIT_FAILED                = 0x1c01,
QME_STOP11_RUNN_CONTAINED_MODE_ERROR      = 0x1c02,
QME_STOP_BLOCK_COPY_AT_BOOT_FAILED        = 0x1c03,
QME_STOP_BLOCK_COPY_AUTO_WKUP_FAILED      = 0x1c04,
//UNUSED                                  = 0x1c05,
//UNUSED                                  = 0x1c06,
//UNUSED                                  = 0x1c07,
QME_DEBUGGER_TRIGGER_DETECTED             = 0x1c08, // 01xxx
QME_SYSTEM_CHECKSTOP_DETECTED             = 0x1c09,
QME_LFIR_INDICATION_DETECTED              = 0x1c0a,
//UNUSED                                  = 0x1c0d,
QME_MACHINE_CHECK_SCOM_ERROR              = 0x1c1c, // 11xxx
QME_MACHINE_CHECK_LOCAL_ERROR             = 0x1c1d,
//UNUSED                                  = 0x1c1e,
//UNUSED                                  = 0x1c1f,

// stop common

//UNUSED                                  = 0x1d00, // 00xxx
//UNUSED                                  = 0x1d01,
QME_STOP23_ENTRY_FAULT_INJECT             = 0x1d02,
QME_STOP11_ENTRY_FAULT_INJECT             = 0x1d03,
QME_STOP2_EXIT_FAULT_INJECT               = 0x1d04,
QME_STOP3_RVRM_POWON_FAULT_INJECT         = 0x1d05,
QME_STOP11_POWON_FAULT_INJECT             = 0x1d06,
QME_SELF_RESTORE_FAULT_INJECT             = 0x1d07,
//UNUSED                                  = 0x1d08, // 01xxx
QME_FUSED_EVEN_STOP_LEVELS_DD1            = 0x1d09,
QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED   = 0x1d0a,
//UNUSED                                  = 0x1d0d,
CORECACHE_CLK_CTRL_TIMEOUT                = 0x1d1c, // 11xxx
CORECACHE_POW_CTRL_TIMEOUT                = 0x1d1d,
CORECACHE_PFET_SEQ_STATE_ERROR            = 0x1d1e,
//_UNUSED_1d1f                            = 0x1d1f,

// stop entry

L2_PURGE_DONE_TIMEOUT                     = 0x1e00, // 00xxx
NCU_PURGE_DONE_TIMEOUT                    = 0x1e01,
PMSR_SHIFT_INACTIVE_TIMEOUT               = 0x1e02,
SHADOW_ENA_FDCR_UPDATE_IN_PROG_TIMEOUT    = 0x1e03,
SHADOW_ENA_CORE_REFRESH_ACTIVE_TIMEOUT    = 0x1e04,
TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_TIMEOUT = 0x1e05,
TIMEFAC_FROM_PC_TFCSR_ERROR_CHECK_FAILED  = 0x1e06,
ECL2_CLK_SYNC_DROP_TIMEOUT                = 0x1e07,
CORE_CHANGE_DONE_RESCLK_ENTRY_TIMEOUT     = 0x1e08, // 01xxx
VMIN_ENA_RVID_ACTIVE_TIMEOUT              = 0x1e09,
VMIN_ENA_VDD_PG_STATE_TIMEOUT             = 0x1e0a,
VMIN_ENA_VDD_PFET_ENABLE_ACTUAL_FAILED    = 0x1e0d,
L3_PURGE_DONE_TIMEOUT                     = 0x1e1c, // 11xxx
POWERBUS_PURGE_DONE_TIMEOUT               = 0x1e1d,
CHTM_PURGE_DONE_TIMEOUT                   = 0x1e1e,
L3_CLK_SYNC_DROP_TIMEOUT                  = 0x1e1f,

// stop exit

ECL2_CLK_SYNC_DONE_TIMEOUT                = 0x1f00, // 00xxx
CORE_CHANGE_DONE_RESCLK_EXIT_TIMEOUT      = 0x1f01,
SHADOW_DIS_FDCR_UPDATE_IN_PROG_TIMEOUT    = 0x1f02,
SHADOW_DIS_CORE_SHADOW_STATE_TIMEOUT      = 0x1f03,
TIMEFAC_TO_PC_XFER_SENT_DONE_TIMEOUT      = 0x1f04,
TIMEFAC_TO_PC_TFCSR_ERROR_CHECK_FAILED    = 0x1f05,
//UNUSED                                  = 0x1f06,
//UNUSED                                  = 0x1f07,
VMIN_DIS_RVID_BYPASS_TIMEOUT              = 0x1f08, // 01xxx
VMIN_DIS_RVID_ENABLED_TIMEOUT             = 0x1f09,
VMIN_DIS_VDD_PFET_ENABLE_TIMEOUT          = 0x1f0a,
//UNUSED                                  = 0x1f0d,
L3_CLK_SYNC_DONE_TIMEOUT                  = 0x1f1c, // 11xxx
QME_STOP_BLOCK_COPY_SCAN_RING_FAILED      = 0x1f1d,
QME_STOP_BLOCK_COPY_CL2_SCOM_FAILED       = 0x1f1e,
QME_STOP_BLOCK_COPY_L3_SCOM_FAILED        = 0x1f1f,

#endif
