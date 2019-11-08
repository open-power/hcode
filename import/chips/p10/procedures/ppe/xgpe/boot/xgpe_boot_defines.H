/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/boot/xgpe_boot_defines.H $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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

/// \file p9_xgpe_boot_defines.H

#ifndef __HCD_GPE_BOOT_DEFINES_H__
#define __HCD_GPE_BOOT_DEFINES_H__

// Offset in XPMR header at which the execution status will be written

// Address in XPMR header in HOMER where the copie/loader status will be written
#define STATE_WRITE_ADDR (XPMR_HEADER_ADDR + STATE_WRITE_OFFSET)

// Constants used in copier and loader
#define OFFSET 0
#define OFF_STAT_WR         0x54
#define XGPE_DIV_8          0x03
#define NXT_BLK_OFF         0x8

// Register mnemonics used in Boot Copier
#define GPR_BL_SRAM_ADDR    r3
#define GPR_XPMR_ADDR       r4
#define GPR_BL_HOMER        r5
#define GPR_BL_HOMER_ADDR   r6
#define GPR_BL_SIZE         r7

// register mnemonics used in Boot Copier and Loader
#define GPR_TEMP            r8
#define DATA_WR             d28
#define GPR_STAT_ADDR       r9
#define GPR_TRAP            r31
#define ENABLE_XGPE_TRAP    0x100

// Register mnemonics used in Boot Loader
#define GPR_XPMR_HOMER_ADDR         r3
#define GPR_XPMR_SRAM_ADDR          r4
#define GPR_SIZE                    r5
#define GPR_SRAM_XGPE_ADDR          r7
#define GPR_SRAM_HCODE_OFF_ADDR     r6
#define GPR_HOMER_PAYLOAD_OFF       r9
#define GPR_ADDR_PAYLOAD_HOMER      r4
#define GPR_SRAM_IMG_LEN_ADDR       r6
#define BL_START_SRAM_ADDRESS_REG   r28
#define GPE_GPE3IVPR                0xc0030008

#endif  // __HCD_GPE_BOOT_DEFINES_H__

