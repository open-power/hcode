/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/link.cmd $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

#ifndef INITIAL_STACK_SIZE
#define INITIAL_STACK_SIZE 256
#endif

OUTPUT_FORMAT(elf32-powerpc);

// Need to do this so that memmap header uses defines for linkerscript
#define  __LINKERSCRIPT__
#include "p9_hcd_memmap_occ_sram.H"

#define SRAM_START              OCC_SRAM_SGPE_BASE_ADDR
#define SRAM_LENGTH             OCC_SRAM_SGPE_REGION_SIZE
#define PPE_HEADER_IMAGE_OFFSET SGPE_HEADER_IMAGE_OFFSET
#define PPE_DEBUG_PTRS_OFFSET   SGPE_DEBUG_PTRS_OFFSET
#define PPE_DEBUG_PTRS_SIZE     SGPE_DEBUG_PTRS_SIZE

MEMORY
{
 sram : ORIGIN = SRAM_START, LENGTH = SRAM_LENGTH
}

// The linker will discard any symbols and sections it deems are unused.
// Declare as EXTERN any symbols only used externally to ensure the linker
// keeps them even though PPE code never references them.
EXTERN(pk_debug_ptrs);
EXTERN(g_sgpe_magic_word);

SECTIONS
{
    . = SRAM_START;

    . = ALIGN(512);

    _VECTOR_START = .;

    .vectors  _VECTOR_START  : { *(.vectors) } > sram
    _SGPE_IMG_HEADER = _VECTOR_START + PPE_HEADER_IMAGE_OFFSET;
    ///////////////////////////////////////////////////////////////////////////
    //
    // SGPE Image Header
    //
    ///////////////////////////////////////////////////////////////////////////
    .sgpe_image_header _SGPE_IMG_HEADER : { *(.sgpe_image_header) } > sram

    ///////////////////////////////////////////////////////////////////////////
    // Debug Pointers Table
    //
    // We want the debug pointers table to always appear at
    // PPE_DEBUG_PTRS_OFFSET from the IVPR address.
    ///////////////////////////////////////////////////////////////////////////

    _DEBUG_PTRS_START = _VECTOR_START + PPE_DEBUG_PTRS_OFFSET;
    .debug_ptrs _DEBUG_PTRS_START : { *(.debug_ptrs) } > sram

    _DUMP_PTRS_START = _DEBUG_PTRS_START + PPE_DEBUG_PTRS_SIZE;
    .dump_ptrs _DUMP_PTRS_START : { *(.dump_ptrs) } > sram

    ////////////////////////////////
    // All non-vector code goes here
    ////////////////////////////////
    .text       : { *(.text*)
                   KEEP(*(.text.startup*)) } > sram

    ////////////////////////////////
    // Read-only Data
    ////////////////////////////////

    . = ALIGN(8);
    _RODATA_SECTION_BASE = .;

    // SDA2 constant sections .sdata2 and .sbss2 must be adjacent to each
    // other.  Our SDATA sections are small so we'll use strictly positive
    // offsets.

    _SDA2_BASE_ = .;
    .sdata2 . : { *(.sdata2*) } > sram
    .sbss2  . : { *(.sbss2*) } > sram

    // Other read-only data.
    . = ALIGN(8);
    .rodata . : { ctor_start_address = .;
                  KEEP(*(.ctors)) KEEP(*(.ctors.*))
                  ctor_end_address = .;
                  *(rodata*) *(.got2) } > sram

    _RODATA_SECTION_SIZE = . - _RODATA_SECTION_BASE;

    ////////////////////////////////
    // Read-write Data
    ////////////////////////////////

    . = ALIGN(8);
    _DATA_SECTION_BASE = .;

    // SDA sections .sdata and .sbss must be adjacent to each
    // other.  Our SDATA sections are small so we'll use strictly positive
    // offsets.

    _SDA_BASE_ = .;
    .sdata  . : { *(.sdata*)  } > sram
    _sbss_start = .;
    .sbss   . : { *(.sbss*)   } > sram
    _sbss_end = .;

    // Other read-write data
    // It's not clear why boot.S is generating empty .glink,.iplt

    .rela   . : { *(.rela*) } > sram
    .rwdata . : { KEEP(*(.data*)) *(.bss*)

        . = ALIGN(8);
        _PK_INITIAL_STACK_LIMIT = .;

        FILL(0xA55A);
        . = . + INITIAL_STACK_SIZE;
        . = ALIGN(8);
        _PK_INITIAL_STACK = . - 8;

    } > sram

//   .iplt . : { *(.iplt) } > sram

    _SGPE_END = .;
    _SGPE_SIZE = . - SRAM_START;

}
