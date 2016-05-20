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
#include <sgpe_boot_defines.H>
        .list

	.section .loader_text, "ax", @progbits
	
	.global __vectors
__vectors:

    .org __vectors + 0x0000 
__machine_check:
        b . 

    .org __vectors + 0x0040 
    .global __system_reset
__system_reset:
        b   __bootCopier

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
	
__bootCopier:
	//load r3 with BASE_  
        _liw    %r3, HOMER_BOOT_LOADER_LENGTH_ADDR 

	_liw    %r7, HOMER_BOOT_LOADER_OFFSET_ADDR
	
	//load r4 with address where bootLoader will be loaded in SRAM e.g 0xFFFE8000 (Destination address)
        _liw    %r4, SRAM_SGPE_BOOT_LOADER_ADDR # dest

	//load r9 with QPMR header address
	_liw    %r9, QPMR_HEADER_ADDR

	//size of image in bytes
	lwz    r5, 0(r3)
        li    r6, 3	
        srw   r5, r5, r6    # r5 contains number of bytes, divide by 8 will give number of double words
        mtctr   r5          # set the counter for loop
	
	// calculating bootLoader image loaded address 
	lwz     r8, 0(r7)   # offset of bootLoader section  in Homer
        adde    r8, r8, r9  # add base address to offset to get absolute bootLoader address in Homer

copy_loop:
        lvd    d28, 0(r8)  # Load Double word
        stvd   d28, 0(r4)  # Destination address
	addi   r8, r8, 8   # Increasing source address
	addi   r4, r4, 8   # Increasing Dest address
	bdnz   copy_loop   # Keep repeating the address. 

	## Using blr command:
        _liw  %r6,   SRAM_SGPE_BOOT_LOADER_RESET_ADDR
        mtlr  r6
        blr
        .epilogue __bootCopier
