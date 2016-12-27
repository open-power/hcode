/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/boot/sgpe_boot_loader.S $ */
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

//Boot loader GPR usage
#define BL_SRAM_ADDR_REG            r3
#define SGPE_IMG_SRAM_ADR_REG       r4
#define SGPE_IMG_LEN_VAL_REG        r5
#define TEMP_REG                    r6
#define SGPE_IMG_OFFSET_VAL_REG     r7
#define SGPE_IMG_HOMER_ADR_REG      r8
#define QPMR_HDR_HOMER_ADR_REG      r9
#define SGPE_IMG_LEN_VAL_ADR_REG    r10
#define HCODE_DOUBLE_WORD_REG       r28
#define SGPE_SRAM_BASE_ADR_REG      r30
#define DEBUG_CODE_REG              r31

############################################################################
##
##                          Interrupt vectors
##
############################################################################

    .global __vectors
__vectors:

    .org __vectors + 0x0000
__machine_check:
    trap

    .org __vectors + 0x0040
    .global __system_reset
__system_reset:
    b __bootLoader

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

__bootLoader:

###############################################################################
##
##                      Preparing for copy of SGPE SRAM Image
##
###############################################################################

    ## Setup the IVPR for the loader context
    _liw    BL_SRAM_ADDR_REG, OCC_SRAM_SGPE_BOOT_LOADER_ADDR
    _liw    TEMP_REG, GPE_GPE3IVPR
    stw     BL_SRAM_ADDR_REG, 0(TEMP_REG)

    ## Enable halt on trap

    lis     TEMP_REG, ENABLE_TRAP
    mtdbcr  TEMP_REG

    ## calculate source Address in HOMER

    _liw    QPMR_HDR_HOMER_ADR_REG, HOMER_QPMR_HEADER_ADDR
    lwz SGPE_IMG_OFFSET_VAL_REG, SGPE_IMG_OFFSET_POS( QPMR_HDR_HOMER_ADR_REG )
    add SGPE_IMG_HOMER_ADR_REG, QPMR_HDR_HOMER_ADR_REG, SGPE_IMG_OFFSET_VAL_REG

    ## Calculate Destination Address in OCC SRAM

    _liw    SGPE_IMG_SRAM_ADR_REG, OCC_SRAM_SGPE_BASE_ADDR

    ## Find double words(in SGPE_IMG_LEN_VAL_REG).

    lwz   SGPE_IMG_LEN_VAL_REG, SGPE_SRAM_IMG_SIZE_POS ( QPMR_HDR_HOMER_ADR_REG )
    bwz   SGPE_IMG_LEN_VAL_REG, sgpe_sram_img_size_bad
    srwi  SGPE_IMG_LEN_VAL_REG, SGPE_IMG_LEN_VAL_REG, DIVDE_BY_8
    mtctr SGPE_IMG_LEN_VAL_REG

############################################################################
##
##          Copying SGPE's Hcode to OCC SRAM
##
############################################################################
payload_copy_loop:

    lvd     HCODE_DOUBLE_WORD_REG, 0( SGPE_IMG_HOMER_ADR_REG )
    stvd    HCODE_DOUBLE_WORD_REG, 0( SGPE_IMG_SRAM_ADR_REG )
    addi    SGPE_IMG_HOMER_ADR_REG, SGPE_IMG_HOMER_ADR_REG, DOUBLE_WORD_SIZE
    addi    SGPE_IMG_SRAM_ADR_REG, SGPE_IMG_SRAM_ADR_REG, DOUBLE_WORD_SIZE
    bdnz    payload_copy_loop

############################################################################
##
##          Copy is complete. Branching to hcode
##
############################################################################

    lis     DEBUG_CODE_REG, 0xB00F
    ori     DEBUG_CODE_REG, DEBUG_CODE_REG, 0x0002
    mtsprg0 DEBUG_CODE_REG

    ## Load the branch address
    _liw    TEMP_REG, OCC_SRAM_SGPE_HCODE_RESET_ADDR
    mtlr    TEMP_REG

    ## Setup the IVPR for the Hcode
    _liw    SGPE_SRAM_BASE_ADR_REG, OCC_SRAM_SGPE_BASE_ADDR
    _liw    TEMP_REG, GPE_GPE3IVPR
    stw     SGPE_SRAM_BASE_ADR_REG, 0( TEMP_REG )

    _liw TEMP_REG, SGPE_BOOT_LOADER_SUCCESS
    stw TEMP_REG, SGPE_BOOT_PROG_CODE_POS( QPMR_HDR_HOMER_ADR_REG )

############################################################################
##
## Jumping to SGPE's Reset address. Updating Progress Code in QPMR to SUCCESS
##
############################################################################

    blr

############################################################################
##
## SGPE Image Size Error. Updating Progress Code in QPMR to FAIL
##
############################################################################

sgpe_sram_img_size_bad:

   _liw TEMP_REG, SGPE_BOOT_LOADER_FAIL
   stw TEMP_REG, SGPE_BOOT_PROG_CODE_POS( QPMR_HDR_HOMER_ADR_REG )

   ## Halting SGPE when Boot Loader fails
   trap

   .epilogue __bootLoader

######################### SGPE Boot Loaders Ends  #########################
