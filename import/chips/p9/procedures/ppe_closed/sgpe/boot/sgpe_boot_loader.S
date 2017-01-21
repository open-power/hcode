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
#include <sgpe_boot_defines.H>
    .list

    .global __vectors
__vectors:

    .org __vectors + 0x0000
__machine_check:
    b .

    .org __vectors + 0x0040
    .global __system_reset
__system_reset:
    b   __bootLoader

    .org __vectors + 0x0060
__data_storage:
    b .

    .org __vectors + 0x0080
__instruction_storage:
    b .

    .org __vectors + 0x00A0
__external_interrupt_vector:
    b .

    .org __vectors + 0x00C0
__alignment_exception:
    b .

    .org __vectors + 0x00E0
__program_exception:
    b .

    .org __vectors + 0x0100
__dec_interrupt:
    b .

    .org __vectors + 0x0120
__fit_interrupt:
    b .

    .org __vectors + 0x0140
__watchdog_interrupt:
    b .

__bootLoader:

    ######################
    ## QPMR Header Copy
    ######################

    ## Setup the IVPR for the loader context

    _liw    %r9, SRAM_SGPE_BOOT_LOADER_ADDR
    _liw    %r8, SGPE_IVPR_OCI_ADDR
    stw     r9, 0(r8)

    ## Enable halt on trap
    lis     %r3, 0x0100
    li      %r3, 0
    mtdbcr  %r3

    ## cal source Address
    _liw    %r3, HOMER_QPMR_HEADER_ADDR

    ## Calculate Destination Address(in r4)
    _liw    %r4, SRAM_QPMR_ADDR

    ## Find double words(in r5).
    _liw    %r5, QPMR_HEADER_SIZE
    li      r6, 3
    srw     r5, r5, r6

    ## start copying
    mtctr   r5

qpmr_header_copy_loop:
    lvd     d28, 0(r3)
    stvd    d28, 0(r4)
    addi    r3, r3, 8
    addi    r4, r4, 8
    bdnz    qpmr_header_copy_loop

    #########################
    ## Copy SGPE Header/Exe
    #########################
    ## Calculate Source address(in r8)
    _liw    %r6, SRAM_SGPE_HCODE_OFFSET_ADDR
    lwz     r7, 0(r6)
    _liw    %r9, HOMER_QPMR_HEADER_ADDR
    add    r8,r9,r7

    ## Calculate Destination address
    _liw    %r4, SRAM_SGPE_BASE_ADDR

    ## Calculate the double word count to copy and place in R5
    ##
    ## The copy is from the beginning of the SGPE Hcode until the last scan ring
    ## section found that is found.  For each section, the copy amount will be
    ## updated to the offset + length (eg the end) of that section.  Once the
    ## Hcode, Common Rings, and Instance Rings entries in the QPMR are looked
    ## at, then subtract the QPMR header size as all offsets are based on the
    ## beginning of the QPMR
    ##
    ## R3 : ending QPMR offset to to determine count
    ## R4 : destination SRAM address
    ## R5 : final doubleword count
    ## R6 : scratch
    ## R7 : offset of the start of the HCode
    ## R10: address for accessing the QPMR Header entries
    ## R28: offset of the begining of a section
    ## R29: length of a section
    ## R31: scratch

    ## Separate registers are used for debug as they will be blown away upon
    ## branching to the HCODE anyway

    ## Compute the ending offset of the Hcode section.  Note: the beginning is
    ## R7
    _liw    %r10, SRAM_SGPE_HCODE_LENGTH_ADDR
    lwz     r29, 0(r10)
    add    r3, r7, r29
    lis     r31, 0xB00F
    ori     r31, r31, 0x0001
    mtsprg0 r31

    ## Compute the end of the common rings section.
    ## If not present (eg Offset or length = 0), use the end of the Hcode section
    _liw    %r10, SRAM_COMMON_RINGS_OFFSET_ADDR
    lwz     r28, 0(r10)
    bwz     r28, end_common_rings

    _liw    %r10, SRAM_COMMON_RINGS_LENGTH_ADDR
    lwz     r29, 0(r10)
    bwz     r29, end_common_rings

    add    r3, r28, r29
    lis     r31, 0xB00F
    ori     r31, r31, 0x0002
    mtsprg0 r31

end_common_rings:

    ## Compute the end of the specific rings section.
    ## If not present (eg Offset or length = 0), use the end of the common section
    _liw    %r10, SRAM_SPECIFIC_RINGS_OFFSET_ADDR
    lwz     r28, 0(r10)
    bwz     r28, end_specific_rings

    _liw    %r10, SRAM_SPECIFIC_RINGS_LENGTH_ADDR
    lwz     r29, 0(r10)
    bwz     r29, end_specific_rings

    add    r3, r28, r29
    lis     r31, 0xB00F
    ori     r31, r31, 0x0003
    mtsprg0 r31

end_specific_rings:

    ## Subtract the offset of the beginning of the Hcode
    sub     r31, r3, r7
    nop
    srwi    r5,r31,3  ## Divide by 8 for doublewords

    ## start copying
    mtctr   r5
    nop

payload_copy_loop:
    lvd     d28, 0(r8)
    stvd    d28, 0(r4)
    addi    r8, r8, 8
    addi    r4, r4, 8
    bdnz    payload_copy_loop

    ########################
    ## branch to hcode
    ########################
    lis     r31, 0xB00F
    ori     r31, r31, 0x0004
    mtsprg0 r31

    ## Load the branch address
    _liw    %r6, SRAM_GPE_HCODE_RESET_ADDR
    mtlr    r6

    ## Setup the IVPR for the Hcode
    _liw    %r9, SRAM_SGPE_BASE_ADDR
    _liw    %r8, SGPE_IVPR_OCI_ADDR
    stw     r9, 0(r8)

    blr

    .epilogue __bootLoader
