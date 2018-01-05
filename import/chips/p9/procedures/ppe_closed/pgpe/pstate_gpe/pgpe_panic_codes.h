/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/pgpe_panic_codes.h $ */
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
#ifndef __PGPE_PANIC_CODES_H__
#define __PGPE_PANIC_CODES_H__

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

// Setup, Common Error or AVS BUS
PGPE_UIH_EIMR_STACK_UNDERFLOW           = 0x1c00,
PGPE_UIH_EIMR_STACK_OVERFLOW            = 0x1c01,
PGPE_UIH_PHANTOM_INTERRUPT              = 0x1c02,
PGPE_AVS_READ_ONGOING_FLAG_TIMEOUT      = 0x1c03,
PGPE_AVS_WRITE_ONGOING_FLAG_TIMEOUT     = 0x1c04,
PGPE_AVS_INIT_DRIVE_IDLE_FRAME          = 0x1c05,
PGPE_AVS_INIT_DRIVE_READ                = 0x1c06,
PGPE_AVS_RESYNC_ERROR                   = 0x1c07,
//_UNUSED_1c08                          = 0x1c08,
PGPE_CME_FAULT                          = 0x1c09,
PGPE_PVREF_ERROR                        = 0x1c0a,
PGPE_OCC_FIR_IRQ                        = 0x1c0d,
PGPE_XSTOP_GPE2                         = 0x1c1c,
PGPE_GPE3_ERROR                         = 0x1c1d,
PGPE_BAD_DD_LEVEL                       = 0x1c1e,
PGPE_OCC_HB_LOSS                        = 0x1c1f,

PGPE_CME_UNEXPECTED_REGISTRATION        = 0x1d00, //Communication
PGPE_CME_UNEXPECTED_DB_ACK              = 0x1d01,
PGPE_OCC_IPC_ACK_BAD_RC                 = 0x1d02,
PGPE_SGPE_IPC_ACK_BAD_RC                = 0x1d03,
PGPE_SGPE_SUSPEND_STOP_BAD_ACK          = 0x1d04,
PGPE_SGPE_CTRL_STOP_UPDT_BAD_ACK        = 0x1d05,
PGPE_CME_DB_ERROR_ACK                   = 0x1d06,
PGPE_RESCLK_IDX_SEARCH_FAIL             = 0x1d07,
PGPE_SGPE_IPC_SEND_FAIL                 = 0x1d08,
//_UNUSED_1d09                          = 0x1d09,
//_UNUSED_1d0a                          = 0x1d0a,
//_UNUSED_1d0d                          = 0x1d0d,
//_UNUSED_1d1c                          = 0x1d1c,
//_UNUSED_1d1d                          = 0x1d1d,
//_UNUSED_1d1e                          = 0x1d1e,
//_UNUSED_1d1f                          = 0x1d1f,

PGPE_PM_SUSPEND_REQ_WHILE_STOPPED       = 0x1e00,
PGPE_SAFE_MODE_REQ_WHILE_STOPPED        = 0x1e01,
PGPE_NULL_VFRT_POINTER                  = 0x1e02,
PGPE_INVALID_PMCR_OWNER                 = 0x1e03,
PGPE_VOLTAGE_OUT_OF_BOUNDS              = 0x1e04,
PGPE_SET_PMCR_TRAP_INJECT               = 0x1e05,
PGPE_DROOP_AND_CORE_THROTTLE_ENABLED    = 0x1e06,
PGPE_INVALID_FREQ_UPDT                  = 0x1e07,
PGPE_PMAX_RCV_GREATER_THAN_PSAFE        = 0x1e08,
//_UNUSED_1e07                          = 0x1e07,
//_UNUSED_1e08                          = 0x1e08,
//_UNUSED_1e09                          = 0x1e09,
//_UNUSED_1e0a                          = 0x1e0a,
//_UNUSED_1e0d                          = 0x1e0d,
//_UNUSED_1e1c                          = 0x1e1c,
//_UNUSED_1e1d                          = 0x1e1d,
//_UNUSED_1e1e                          = 0x1e1e,
//_UNUSED_1e1f                          = 0x1e1f,

//_UNUSED_1f00                          = 0x1f00,
//_UNUSED_1f01                          = 0x1f01,
//_UNUSED_1f02                          = 0x1f02,
//_UNUSED_1f03                          = 0x1f03,
//_UNUSED_1f04                          = 0x1f04,
//_UNUSED_1f05                          = 0x1f05,
//_UNUSED_1f06                          = 0x1f06,
//_UNUSED_1f07                          = 0x1f07,
//_UNUSED_1f08                          = 0x1f08,
//_UNUSED_1f09                          = 0x1f09,
//_UNUSED_1f0a                          = 0x1f0a,
//_UNUSED_1f0d                          = 0x1f0d,
//_UNUSED_1f1c                          = 0x1f1c,
//_UNUSED_1f1d                          = 0x1f1d,
//_UNUSED_1f1e                          = 0x1f1e,
//_UNUSED_1f1f                          = 0x1f1f


#endif
