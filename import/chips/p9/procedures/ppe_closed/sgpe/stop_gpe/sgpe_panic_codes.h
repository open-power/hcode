/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/sgpe_panic_codes.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
#ifndef __SGPE_PANIC_CODES_H__
#define __SGPE_PANIC_CODES_H__

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

SGPE_MAIN_FAPI2_INIT_FAILED         = 0x1c00, // Setup or Common Error
SGPE_CFG_EX0_PARTIAL_ERROR          = 0x1c01,
SGPE_CFG_EX1_PARTIAL_ERROR          = 0x1c02,
SGPE_CFG_QUAD_PARTIAL_ERROR         = 0x1c03,
SGPE_UIH_EIMR_STACK_UNDERFLOW       = 0x1c04,
SGPE_UIH_EIMR_STACK_OVERFLOW        = 0x1c05,
SGPE_UIH_PHANTOM_INTERRUPT          = 0x1c06,
SGPE_PIG_TYPE23_EXIT_WNS_CME        = 0x1c07,
SGPE_PIG_TYPE23_ENTRY_WNS_CME       = 0x1c08,
SGPE_PIG_TYPE23_PAYLOAD_INVALID     = 0x1c09,
SGPE_IPC_UPDATE_ACTIVE_CORE_FAILED  = 0x1c0a,
SGPE_IPC_UPDATE_ACTIVE_CORE_BAD_RC  = 0x1c0d,
SGPE_IPC_UPDATE_ACTIVE_CORE_BAD_LIST = 0x1c1c,
SGPE_IPC_UPDATE_ACTIVE_QUAD_FAILED  = 0x1c1d,
SGPE_IPC_UPDATE_ACTIVE_QUAD_BAD_RC  = 0x1c1e,
SGPE_BAD_DD_LEVEL                   = 0x1c1f,

SGPE_STOP_EXIT_GET_CLK_LOCK_FAILED  = 0x1d00, // Stop Exit Error
SGPE_STOP_EXIT_GET_SLV_LOCK_FAILED  = 0x1d01,
SGPE_STOP_EXIT_DROP_CLK_LOCK_FAILED = 0x1d02,
SGPE_STOP_EXIT_DROP_SLV_LOCK_FAILED = 0x1d03,
SGPE_STOP_PUTRING_HEADER_ERROR      = 0x1d04,
SGPE_STOP_PUTRING_OPCG_TIMEOUT      = 0x1d05,
SGPE_STOP_EXIT_DPLL_STARTCLK_FAILED = 0x1d06,
SGPE_STOP_EXIT_L2_STARTCLK_FAILED   = 0x1d07,
SGPE_STOP_EXIT_EQ_STARTCLK_FAILED   = 0x1d08,
SGPE_STOP_EXIT_STARTCLK_XSTOP_ERROR = 0x1d09,
SGPE_STOP_EXIT_SCOM_RES_XSTOP_ERROR = 0x1d0a,
SGPE_STOP_EXIT_START_L2_XSTOP_ERROR = 0x1d0d,
//_UNUSED_1d1c                      = 0x1d1c,
//_UNUSED_1d1d                      = 0x1d1d,
//_UNUSED_1d1e                      = 0x1d1e,
SGPE_STOP_EXIT_TRAP_INJECT          = 0x1d1f,

SGPE_STOP_ENTRY_GET_CLK_LOCK_FAILED = 0x1e00, // Stop Entry Error
SGPE_STOP_ENTRY_GET_SLV_LOCK_FAILED = 0x1e01,
SGPE_STOP_ENTRY_DROP_CLK_LOCK_FAILED = 0x1e02,
SGPE_STOP_ENTRY_DROP_SLV_LOCK_FAILED = 0x1e03,
SGPE_STOP_ENTRY_L2_STOPCLK_FAILED   = 0x1e04,
SGPE_STOP_ENTRY_EQ_STOPCLK_FAILED   = 0x1e05,
SGPE_STOP_ENTRY_STOP11_RESCLK_ON    = 0x1e06,
//_UNUSED_1e07                      = 0x1e07,
//_UNUSED_1e08                      = 0x1e08,
//_UNUSED_1e09                      = 0x1e09,
SGPE_IPC_UPDATE_ACTIVE_QUAD_BAD_LIST = 0x1e0a,
SGPE_PGPE_HALT_DETECTED             = 0x1e0d,
SGPE_SYSTEM_CHECKSTOP_DETECTED      = 0x1e1c,
SGPE_PIG_TYPE5_PAYLOAD_INVALID      = 0x1e1d,
SGPE_PIG_TYPE5_CME_ERROR            = 0x1e1e,
SGPE_STOP_ENTRY_TRAP_INJECT         = 0x1e1f,

SGPE_STOP_EXIT_VCS_STOPCLK_FAILED   = 0x1f00, // NDD1
SGPE_STOP_EXIT_VCS_STARTCLK_FAILED  = 0x1f01, // NDD1
SGPE_STOP_EXIT_FUSE_SCAN_HEADER_ERR = 0x1f02, // NDD1
SGPE_STOP_EXIT_PBRW_SCAN_HEADER_ERR = 0x1f03, // NDD1
SGPE_STOP_ENTRY_PBRW_SCAN_HEADER_ERR = 0x1f04, // NDD1
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
