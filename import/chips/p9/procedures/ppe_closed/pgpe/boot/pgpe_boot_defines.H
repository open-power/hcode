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

#define HOMER_BASE_ADDR 0x80000000
#define SRAM_BASE_ADDR  0xFFF00000

#define PGPE_NUM 2
#define HOMER_PGPE_REGION 3   // Zero origin; 1MB per region


// PGPE Boot
#define PPMR_HEADER_ADDR (HOMER_BASE_ADDR + HOMER_PGPE_REGION*1024*1024)
#define HOMER_BOOT_LOADER_OFFSET_HDR_LOC 0x10
#define HOMER_BOOT_LOADER_LENGTH_HDR_LOC 0x14
#define HOMER_BOOT_LOADER_OFFSET_ADDR (PPMR_HEADER_ADDR +  HOMER_BOOT_LOADER_OFFSET_HDR_LOC)
#define HOMER_BOOT_LOADER_LENGTH_ADDR (PPMR_HEADER_ADDR +  HOMER_BOOT_LOADER_LENGTH_HDR_LOC)



#define SRAM_PGPE_MEM_ALLOC (64 * 1024)
#define SRAM_PGPE_BASE_ADDR (SRAM_BASE_ADDR + (PGPE_NUM * SRAM_PGPE_MEM_ALLOC))
#define SRAM_GPE_HCODE_RESET_ADDR (SRAM_PGPE_BASE_ADDR + 0x40)

///BOOT Copier will copy in last 1k of SRAM PGPE memory section
#define SRAM_PGPE_BOOT_LOADER_ADDR (SRAM_PGPE_BASE_ADDR + SRAM_PGPE_MEM_ALLOC - 1024)
#define SRAM_PGPE_BOOT_LOADER_RESET_ADDR (SRAM_PGPE_BOOT_LOADER_ADDR + 0x40)

///BOOT Loader will copy in second to last 1k of SRAM_PGPE_MEMORY_SECTION
#define SRAM_PGPE_PPMR_ADDR (SRAM_PGPE_BOOT_LOADER_ADDR - 1024)
#define PPMR_HEADER_SIZE 512
#define SRAM_PGPE_HCODE_OFFSET_BYTE 40
#define SRAM_PGPE_HCODE_LENGTH_BYTE 44
#define SRAM_PGPE_HCODE_OFFSET_ADDR PPMR_HEADER_ADDR + SRAM_PGPE_HCODE_OFFSET_BYTE
#define SRAM_PGPE_HCODE_LENGTH_ADDR PPMR_HEADER_ADDR + SRAM_PGPE_HCODE_LENGTH_BYTE


// PGPE Boot

#endif  // __HCD_GPE_BOOT_DEFINES_H__
