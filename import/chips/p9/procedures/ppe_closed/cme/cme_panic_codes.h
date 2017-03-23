/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/cme_panic_codes.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#ifndef __CME_PANIC_CODES_H__
#define __CME_PANIC_CODES_H__

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

CME_UIH_DISABLED_NOT_LAST_LVL       = 0x1c00,
CME_UIH_NOT_ALL_IN_PRTY_GROUP       = 0x1c01,
CME_UIH_EIMR_STACK_UNDERFLOW        = 0x1c02,
CME_UIH_EIMR_STACK_OVERFLOW         = 0x1c03,
CME_UIH_PHANTOM_INTERRUPT           = 0x1c04,
CME_STOP_PUTRING_HEADER_ERROR       = 0x1c05,
CME_STOP_BCE_CORE_RING_FAILED       = 0x1c06,
CME_STOP_EXIT_PHANTOM_WAKEUP        = 0x1c07,
CME_STOP_EXIT_BCE_SCOM_FAILED       = 0x1c08,
CME_STOP_EXIT_SELF_RES_SPATTN       = 0x1c09,
CME_STOP_EXIT_STARTCLK_FAILED       = 0x1c0a,
CME_STOP_ENTRY_STOPCLK_FAILED       = 0x1c0d,
CME_STOP_ENTRY_WITH_AUTO_NAP        = 0x1c1c, // NDD1
CME_STOP_ENTRY_BAD_LPID_ERROR       = 0x1c1d, // NDD1
//_UNUSED_1c1e                      = 0x1c1e,
//_UNUSED_1c1f                      = 0x1c1f,
//
//_UNUSED_1d00                      = 0x1d00,
//_UNUSED_1d01                      = 0x1d01,
//_UNUSED_1d02                      = 0x1d02,
//_UNUSED_1d03                      = 0x1d03,
//_UNUSED_1d04                      = 0x1d04,
//_UNUSED_1d05                      = 0x1d05,
//_UNUSED_1d06                      = 0x1d06,
//_UNUSED_1d07                      = 0x1d07,
//_UNUSED_1d08                      = 0x1d08,
//_UNUSED_1d09                      = 0x1d09,
//_UNUSED_1d0a                      = 0x1d0a,
//_UNUSED_1d0d                      = 0x1d0d,
//_UNUSED_1d1c                      = 0x1d1c,
//_UNUSED_1d1d                      = 0x1d1d,
//_UNUSED_1d1e                      = 0x1d1e,
//_UNUSED_1d1f                      = 0x1d1f,

//_UNUSED_1e00                      = 0x1e00,
//_UNUSED_1e01                      = 0x1e01,
//_UNUSED_1e02                      = 0x1e02,
//_UNUSED_1e03                      = 0x1e03,
//_UNUSED_1e04                      = 0x1e04,
//_UNUSED_1e05                      = 0x1e05,
//_UNUSED_1e06                      = 0x1e06,
//_UNUSED_1e07                      = 0x1e07,
//_UNUSED_1e08                      = 0x1e08,
//_UNUSED_1e09                      = 0x1e09,
//_UNUSED_1e0a                      = 0x1e0a,
//_UNUSED_1e0d                      = 0x1e0d,
//_UNUSED_1e1c                      = 0x1e1c,
//_UNUSED_1e1d                      = 0x1e1d,
//_UNUSED_1e1e                      = 0x1e1e,
//_UNUSED_1e1f                      = 0x1e1f,

//_UNUSED_1f00                      = 0x1f00,
//_UNUSED_1f01                      = 0x1f01,
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
