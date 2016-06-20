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
    ## cal source Address
    _liw %r9, SRAM_SGPE_BASE_ADDR
    nop
    _liw %r8, SGPE_IVPR_OCI_ADDR
    nop
    nop
    stw r9, 0(r8)

    _liw %r10, SRAM_SGPE_HCODE_LENGTH_ADDR
    _liw  %r3, QPMR_HEADER_ADDR

    ## Cal Destination Address(in r4)
    _liw %r4, SRAM_SGPE_QPMR_ADDR

    ## Find double words(in r5).
    _liw %r5, QPMR_HEADER_SIZE
    li r6, 3
    srw r5,r5,r6

    ## start copying
    mtctr r5

qpmr_header_copy_loop:
    lvd d28,0(r3)
    stvd d28,0(r4)
    addi r3,r3,8
    addi r4,r4,8
    bdnz qpmr_header_copy_loop

    #########################
    ## Copy SGPE Header/Exe
    #########################
    ## Calculate Source address(in r8)
        _liw %r6, SRAM_SGPE_HCODE_OFFSET_ADDR 
    _liw %r9, QPMR_HEADER_ADDR 
    lwz  r7, 0(r6)
    adde r8,r9,r7
    
    ## Calculate Destination address
    _liw %r4, SRAM_SGPE_BASE_ADDR
    
    ##Find the double word counts
    lwz r5, 0(r10)
    nop
    li r6, 3
    srw r5,r5,r6

    ## start copying
    mtctr r5      

    
payload_copy_loop:
    lvd d28,0(r8)
    stvd d28,0(r4)
    addi r8,r8,8
    addi r4,r4,8
    bdnz payload_copy_loop

    ########################
    ## branch to hcode
    ########################

    _liw %r6, SRAM_GPE_HCODE_RESET_ADDR  
        mtlr r6
    blr

    .epilogue __bootLoader
