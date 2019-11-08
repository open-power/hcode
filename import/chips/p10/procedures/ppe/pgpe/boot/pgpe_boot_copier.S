/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/boot/pgpe_boot_copier.S $ */
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

        .nolist
#include <ppe42_asm.h>
#include <p10_hcd_memmap_homer.H>
#include <p10_hcd_memmap_occ_sram.H>
#include <pgpe_boot_defines.H>
        .list

        .section .loader_text, "ax", @progbits

__vectors:

    .org __vectors + 0x0020
__machine_check:
        trap

    .org __vectors + 0x0040
    .global __system_reset
__system_reset:
        b   __bootCopier

    .org __vectors + 0x0060
__data_storage:
        trap

    .org __vectors + 0x0080
__instruction_storage:
        trap

    .org __vectors + 0x00A0
__external_interrupt_vector:
        trap

    .org __vectors + 0x00C0
__alignment_exception:
        trap

    .org __vectors + 0x00E0
__program_exception:
        trap

    .org __vectors + 0x0100
__dec_interrupt:
        trap

    .org __vectors + 0x0120
__fit_interrupt:
        trap

    .org __vectors + 0x0140
__watchdog_interrupt:
        trap

__bootCopier:
    ## Address where the Boot loader will be loaded in SRAM (Destination address)
    _liw   %GPR_BL_SRAM_ADDR, OCC_SRAM_PGPE_BOOT_LOADER_ADDR

    ## Base address of PPMR header, also the PGPE base address
    _liw   %GPR_PPMR_ADDR, HOMER_PPMR_HEADER_ADDR

    ## Location in PPMR header where the offset of Boot loader is present
    _liw   %GPR_BL_HOMER, HOMER_PGPE_BOOT_LOADER_OFFSET_ADDR

    ## Fetch offset of Boot loader
    lwz    GPR_BL_HOMER_ADDR, OFFSET(GPR_BL_HOMER)

    ## Compute the source address of Boot loader (address in HOMER)
    add   GPR_BL_HOMER_ADDR, GPR_BL_HOMER_ADDR, GPR_PPMR_ADDR

    ## Location in PPMR header where the length of boot loader is present
    _liw   %GPR_BL_HOMER, HOMER_PGPE_BOOT_LOADER_LENGTH_ADDR

    ## Boot Loader size(in Bytes)
    lwz    GPR_BL_SIZE, OFFSET(GPR_BL_HOMER)
    srwi    GPR_BL_SIZE, GPR_BL_SIZE, PGPE_DIV_8

    ## If bootLoader size is 0 then failure
    cmpwbeq    %GPR_BL_SIZE, 00, BCFAIL

    ## Set the counter for copy loop
    mtctr  GPR_BL_SIZE

    ## Copy the bootLoader from HOMER to OCC SRAM
copy_loop:
    lvd    DATA_WR, OFFSET(GPR_BL_HOMER_ADDR)   # Load Double word
    stvd   DATA_WR, OFFSET(GPR_BL_SRAM_ADDR)    # Destination address
    addi   GPR_BL_HOMER_ADDR, GPR_BL_HOMER_ADDR, NXT_BLK_OFF    # Increasing source address
    addi   GPR_BL_SRAM_ADDR, GPR_BL_SRAM_ADDR, NXT_BLK_OFF    # Increasing Dest address
    bdnz   copy_loop    # Keep repeating the address.

    ## Write the success status "BC-S" to PPMR header
    _liw   %GPR_STAT_ADDR, PGPE_BOOT_COPY_SUCCESS
    stw   GPR_STAT_ADDR, OFF_STAT_WR(GPR_PPMR_ADDR)

BRANCH:
    ## branch to the system_reset location for bootLoader to be executed
    _liw   %GPR_TEMP,   OCC_SRAM_PGPE_BOOT_LOADER_RESET_ADDR
    mtlr   GPR_TEMP
    blr

    ## Write the failure status "BC-F" to PPMR header
BCFAIL:
    _liw  %GPR_STAT_ADDR, PGPE_BOOT_COPIER_FAIL
    stw   GPR_STAT_ADDR, OFF_STAT_WR(GPR_PPMR_ADDR)
    trap
    .epilogue __bootCopier

