/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/boot/sgpe_boot_copier.S $ */
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

        .nolist
#include <ppe42_asm.h>
#include <p9_hcd_memmap_homer.H>
#include <p9_hcd_memmap_occ_sram.H>
#include <gpe_register_addresses.h>
        .list

//Boot copier GPR usage
#define   BL_LEN_HOMER_ADR_REG              r3
#define   BL_SRAM_ADR_REG                   r4
#define   BL_LEN_REG                        r5
#define   TEMP_REG                          r6
#define   BL_OFFSET_HOMER_ADR_REG           r7
#define   BL_HOMER_ADR_REG                  r8
#define   QPMR_HDR_HOMER_ADR_REG            r9
#define   PROG_CODE_REG                     r10
#define   HCODE_DOUBLE_WORD_REG             r28


###############################################################################
##
##                          Interrupts
##
###############################################################################

    .global __vectors
__vectors:

    .org __vectors + 0x0000
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

###############################################################################
##
##                                  Interrupt Ends
##
###############################################################################

//*****************************************************************************
//
//      Reading QPMR Header and preparing for copying boot loader to OCC SRAM
//
//*****************************************************************************

__bootCopier:
    ##load BL_LEN_HOMER_ADR_REG with BASE_
    _liw    BL_LEN_HOMER_ADR_REG, HOMER_SGPE_BOOT_LOADER_LENGTH_ADDR

    _liw    BL_OFFSET_HOMER_ADR_REG, HOMER_SGPE_BOOT_LOADER_OFFSET_ADDR

    //load BL_SRAM_ADR_REG with address where bootLoader will be loaded in SRAM e.g 0xFFFE8000 (Destination address)
    _liw    BL_SRAM_ADR_REG, OCC_SRAM_SGPE_BOOT_LOADER_ADDR

    //load QPMR_HDR_HOMER_ADR_REG with QPMR header address
    _liw    QPMR_HDR_HOMER_ADR_REG, HOMER_QPMR_HEADER_ADDR

    //size of image in bytes
    lwz     BL_LEN_REG, 0(BL_LEN_HOMER_ADR_REG)

    bwz   BL_LEN_REG,  boot_copier_len_err

    # BL_LEN_REG contains number of bytes, divide by 8 will give number of double words
    srwi     BL_LEN_REG, BL_LEN_REG, DIVDE_BY_8
    addi    BL_LEN_REG, BL_LEN_REG, 1
    mtctr   BL_LEN_REG          # set the counter for loop

    // calculating bootLoader image loaded address
    lwz     BL_HOMER_ADR_REG, 0(BL_OFFSET_HOMER_ADR_REG)   # offset of bootLoader section  in Homer
    add    BL_HOMER_ADR_REG, BL_HOMER_ADR_REG, QPMR_HDR_HOMER_ADR_REG  # add base address to offset to get absolute bootLoader address in Homer

//***************************************************Boot copier copying Boot Loader **********************************

copy_loop:
    lvd    HCODE_DOUBLE_WORD_REG, 0(BL_HOMER_ADR_REG)  # Load Double word
    stvd   HCODE_DOUBLE_WORD_REG, 0(BL_SRAM_ADR_REG)  # Destination address
    addi   BL_HOMER_ADR_REG, BL_HOMER_ADR_REG, DOUBLE_WORD_SIZE   # Increasing source address
    addi   BL_SRAM_ADR_REG, BL_SRAM_ADR_REG, DOUBLE_WORD_SIZE   # Increasing Dest address
    bdnz   copy_loop   # Keep repeating the address.

//***************************************** SGPE Boot Loader Copied ***************************************************
    // boot loader has been copied. Let us update the Progress code in QPMR Header
    _liw PROG_CODE_REG, SGPE_BOOT_COPY_SUCCESS
    stw PROG_CODE_REG, SGPE_BOOT_PROG_CODE_POS(QPMR_HDR_HOMER_ADR_REG)

//******************************************* Branching to SGPE Bootloader ********************************************
    ## Using blr command:
    _liw  TEMP_REG, OCC_SRAM_SGPE_BOOT_LOADER_RESET_ADDR
    mtlr  TEMP_REG
    blr

// If we are here it means an Hcode Image Build Error.
// Let us save failure code in QPMR Header of HOMER and
// halt the PPE to save the failed state

// ******************************************** Boot Copier Error Scenario *******************************************

boot_copier_len_err:
    _liw PROG_CODE_REG, SGPE_BOOT_COPIER_FAIL
    stw  PROG_CODE_REG, SGPE_BOOT_PROG_CODE_POS(QPMR_HDR_HOMER_ADR_REG)

    trap

    .epilogue __bootCopier
