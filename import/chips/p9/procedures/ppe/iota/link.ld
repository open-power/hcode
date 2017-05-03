/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/link.ld $                 */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017                                                         */
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
OUTPUT_FORMAT(elf32-powerpc)

MEMORY
{
    sram : ORIGIN = 0xffff8000, LENGTH = 0x8000
}

SECTIONS
{
    . = 0xffff8000;

    .vectors   : { *(.vectors) } > sram
    . = ALIGN(512);
    .text    . : { *(.text)    } > sram

    . = ALIGN(8);
    _SDA_BASE_ = . ;
    .sdata   . : { *(.sdata*) } > sram
    .sbss    . : { *(.sbss*)  } > sram

    . = ALIGN(8);
    _SDA2_BASE_ = . ;
    .sdata2  . : { *(.sdata2*) } > sram
    .sbss2   . : { *(.sbss2*)  } > sram

    .data    . : { *(.data*)   } > sram
    .bss     . : { *(.bss*)    } > sram

    . = ALIGN(8);
}
