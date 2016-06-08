/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/boot/pgpe_boot_defines.H $ */
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

/// \file p9_pgpe_boot_defines.H


#ifndef __HCD_GPE_BOOT_DEFINES_H__
#define __HCD_GPE_BOOT_DEFINES_H__

#include <ppe42_asm.h>


// Base address of HOMER
#define HOMER_BASE_ADDR 0x80000000

// SRAM Base address
#define SRAM_BASE_ADDR  0xFFF00000

// SRAM Base address of PGPE region
#define SRAM_PGPE_BASE_ADDR 0xFFF20000

// Address of PGPE HCODE in HOMER, to be loaded in IVPR
#define PGPE_IVPR_OCI_ADDR 0xC0020008

// 48KB allocated for PGPE in SRAM
#define SRAM_PGPE_MEM_ALLOC (48 * 1024)

// The numeric identity of PGPE - GPE2
#define PGPE_NUM 0x2

// The position of the PGPE region in HOMER
#define HOMER_PGPE_REGION 0x3   // Zero origin; 1MB per region

// Offset in PPMR header at which the BL offset is stored
#define HOMER_BOOT_LOADER_OFFSET_HDR_LOC 0x10

// Offset in PPMR header at which the BL length is stored
#define HOMER_BOOT_LOADER_LENGTH_HDR_LOC 0x14

// Offset in PPMR header at which the execution status will be written
#define STATE_WRITE_OFFSET 0x5A

// Reset offset
#define RESET_OFFSET 0x40

// Size of PPMR header (bytes)
#define PPMR_HEADER_SIZE 0x200

// Offset in PPMR header, where the HCODE offset resides
#define SRAM_PGPE_HCODE_OFFSET_BYTE 0x28

// Offset in PPMR header, where the HCODE length resides
#define SRAM_PGPE_HCODE_LENGTH_BYTE 0x50

// Status codes for failure/success of Boot loader and copier
#define BCPASS_STAT 0x4350 // Ascii of "CP" -> Boot Copier passed
#define BCFAIL_STAT 0x4346 // Ascii of "CF" -> Boot Copier failed
#define BLPASS_STAT 0x4C50 // Ascii of "LP" -> Boot Loader passed
#define BLFAIL_STAT 0x4C46 // Ascii of "LF" -> Boot Loader failed


// Absolute base address of PPMR Header in HOMER
#define PPMR_HEADER_ADDR (HOMER_BASE_ADDR + HOMER_PGPE_REGION*1024*1024)

// Absolute address of BL offset in PPMR header in HOMER
#define HOMER_BOOT_LOADER_OFFSET_ADDR (PPMR_HEADER_ADDR +  HOMER_BOOT_LOADER_OFFSET_HDR_LOC)

// Absolute address of BL length in PPMR header in HOMER
#define HOMER_BOOT_LOADER_LENGTH_ADDR (PPMR_HEADER_ADDR +  HOMER_BOOT_LOADER_LENGTH_HDR_LOC)

// Address in PPMR header in HOMER where the copie/loader status will be written
#define STATE_WRITE_ADDR (PPMR_HEADER_ADDR + STATE_WRITE_OFFSET)

// Base Address of Boot Loader in SRAM PGPE region
#define SRAM_PGPE_BOOT_LOADER_ADDR (SRAM_PGPE_BASE_ADDR + SRAM_PGPE_MEM_ALLOC - 1024)

// Base address of PPMR header in SRAM PGPE Region
#define SRAM_PGPE_PPMR_ADDR (SRAM_PGPE_BOOT_LOADER_ADDR - 1024)

// Address of reset vector in SRAM to which branch happens after BL is loaded
#define SRAM_PGPE_BOOT_LOADER_RESET_ADDR (SRAM_PGPE_BOOT_LOADER_ADDR + RESET_OFFSET)

// Address of reset vector in SRAM to which branch happens after HCODE is loaded
#define SRAM_PGPE_HCODE_RESET_ADDR (SRAM_PGPE_BASE_ADDR + RESET_OFFSET)

// Base address of PGPE HCODE offset in SRAM
#define SRAM_PGPE_HCODE_OFFSET_ADDR SRAM_PGPE_PPMR_ADDR + SRAM_PGPE_HCODE_OFFSET_BYTE

// Base address of PGPE image length in SRAM
#define SRAM_PGPE_IMAGE_LENGTH_ADDR SRAM_PGPE_PPMR_ADDR + SRAM_PGPE_HCODE_LENGTH_BYTE


// Constants used in copier and loader
#define OFFSET 0
#define OFF_STAT_WR 0x54
#define PGPE_DIV_8 0x03
#define NXT_BLK_OFF 0x8


// Register mnemonics used in Boot Copier
#define GPR_BL_SRAM_ADDR r3
#define GPR_PPMR_ADDR r4
#define GPR_BL_HOMER r5
#define GPR_BL_HOMER_ADDR r6
#define GPR_BL_SIZE r7

// register mnemonics used in Boot Copier and Loader
#define GPR_TEMP r8
#define DATA_WR d28
#define GPR_STAT_ADDR r9
#define GPR_TRAP r31
#define ENABLE_PGPE_TRAP 0x100

// Register mnemonics used in Boot Loader
#define GPR_PPMR_HOMER_ADDR r3
#define GPR_PPMR_SRAM_ADDR  r4
#define GPR_SIZE            r5
#define GPR_SRAM_PGPE_ADDR  r7
#define GPR_SRAM_HCODE_OFF_ADDR r6
#define GPR_HOMER_PAYLOAD_OFF  r9
#define GPR_ADDR_PAYLOAD_HOMER r4
#define GPR_SRAM_IMG_LEN_ADDR r6
#define BL_START_SRAM_ADDRESS_REG r28

#endif  // __HCD_GPE_BOOT_DEFINES_H__
