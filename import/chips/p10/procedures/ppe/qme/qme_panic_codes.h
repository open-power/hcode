/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_panic_codes.h $       */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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

QME_MAIN_FAPI2_INIT_FAILED              = 0x1c00,
//QME_STOP_NO_PARTIAL_GOOD_CORE           = 0x1c01,
//QME_UIH_DISABLED_NOT_LAST_LVL       = 0x1c00,
//QME_UIH_NOT_ALL_IN_PRTY_GROUP       = 0x1c01,
//QME_UIH_EIMR_STACK_UNDERFLOW        = 0x1c02,
//QME_UIH_EIMR_STACK_OVERFLOW         = 0x1c03,
//QME_UIH_PHANTOM_INTERRUPT           = 0x1c04,
//QME_STOP_NO_PARTIAL_GOOD_CORE       = 0x1c05,
//QME_STOP_PUTRING_HEADER_ERROR       = 0x1c06,
//QME_STOP_BCE_CORE_RING_FAILED       = 0x1c07,
//QME_DEBUGGER_DETECTED               = 0x1c08,
//QME_DEBUG_TRIGGER_DETECTED          = 0x1c09,
//QME_QUAD_CHECKSTOP_DETECTED         = 0x1c0a,
//QME_PVREF_FAIL_DETECTED             = 0x1c0d,
//QME_OCC_HEARTBEAT_LOST_DETECTED     = 0x1c1c,
//QME_CORE_CHECKSTOP_DETECTED         = 0x1c1d,
QME_BAD_DD_LEVEL                    = 0x1c1e,
//_UNUSED_1c1f                      = 0x1c1f,

QME_STOP_SPWU_PROTOCOL_ERROR             = 0x1d00,
QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED  = 0x1d01,
//QME_STOP_EXIT_STARTCLK_FAILED            = 0x1d02,
//QME_STOP_EXIT_PHANTOM_WAKEUP
//QME_STOP_EXIT_STARTCLK_FAILED       = 0x1d03,
//QME_STOP_EXIT_STARTCLK_XSTOP_ERROR  = 0x1d04,
//QME_STOP_EXIT_SCOM_RES_XSTOP_ERROR  = 0x1d05,
//QME_STOP_EXIT_SELF_RES_SPATTN       = 0x1d06,
//QME_STOP_EXIT_PHANTOM_WAKEUP        = 0x1d07,
//QME_STOP_ENTRY_STOPCLK_FAILED       = 0x1d08,
//QME_STOP_ENTRY_XSTOP_ERROR
//QME_STOP_ENTRY_TRAP_INJECT
QME_STOP11_RUNN_CONTAINED_MODE_ERROR  = 0x1d09,
QME_STOP_BLOCK_COPY_SCAN_FAILED       = 0x1d0a,
QME_STOP_BLOCK_COPY_SCOM_FAILED       = 0x1d0d,
QME_STOP_PUTRING_HEADER_ERROR         = 0x1d1c,
QME_STOP_PUTRING_HEADER_MISMATCH      = 0x1d1d,
QME_STOP_PUTRING_PARALLEL_SCAN_ERR    = 0x1d1e,
//_UNUSED_1d1f                      = 0x1d1f,

//QME_STOP_ENTRY_STOPCLK_FAILED       = 0x1e00,
//QME_STOP_ENTRY_VDD_REGULATE_FAILED  = 0x1e01,
//QME_PSTATE_RESCLK_ENABLED_AT_BOOT
//QME_PSTATE_IPPM_ACCESS_FAILED
//QME_PSTATE_INVALID_DB0_MSGID        = 0x1e02,
//QME_PSTATE_UNEXPECTED_INTERQME_MSG  = 0x1e03,
//QME_PSTATE_UNEXPECTED_DB0_MSGID     = 0x1e04,
//QME_PSTATE_DPLL_OUT_OF_BOUNDS_REQ   = 0x1e05,
//QME_PSTATE_TRAP_INJECT              = 0x1e06,
//QME_PSTATE_REGISTRATION_FAILED      = 0x1e07,
QME_STOP_PUTRING_ROTATE_RS4_IMAGE_INVALID = 0x1e08,
QME_STOP_PUTRING_SCAN_RS4_IMAGE_INVALID   = 0x1e09,
//_UNUSED_1e0a                      = 0x1e0a,
//_UNUSED_1e0d                      = 0x1e0d,
//_UNUSED_1e1c                      = 0x1e1c,
//_UNUSED_1e1d                      = 0x1e1d,
//_UNUSED_1e1e                      = 0x1e1e,
//_UNUSED_1e1f                      = 0x1e1f,

//QME_STOP_ENTRY_WITH_AUTO_NAP        = 0x1f00, // NDD1
//QME_STOP_ENTRY_BAD_LPID_ERROR       = 0x1f01, // NDD1
//_UNUSED_1f02                      = 0x1f02,
//_UNUSED_1f03                      = 0x1f03,
//_UNUSED_1f04                      = 0x1f04,
//_UNUSED_1f05                      = 0x1f05,
//_UNUSED_1f06                      = 0x1f06,
//_UNUSED_1f07                      = 0x1f07,
//_UNUSED_1f08                      = 0x1f08,
//_UNUSED_1f09                      = 0x1f09,
//_UNUSED_1f0a                      = 0x1f0a,
//_UNUSED_1f0d                      = 0x1f0d,
//_UNUSED_1f1c                      = 0x1f1c,
//_UNUSED_1f1d                      = 0x1f1d,
//_UNUSED_1f1e                      = 0x1f1e,
//_UNUSED_1f1f                      = 0x1f1f

#endif
