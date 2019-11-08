/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: tools/imageProcs/qme_image.cmd $                              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
// Need to do this so that elf32-powerpc is not modified!
#undef powerpc

#define QME_IMAGE_ORIGIN 0x80000000
OUTPUT_FORMAT(elf32-powerpc);

SECTIONS
{
    . = QME_IMAGE_ORIGIN;
     _qme_image_origin = . - 0;
    ////////////////////////////////
    // Header
    ////////////////////////////////
    . = ALIGN(1);
    _header_origin = .;
    _header_offset = . - _qme_image_origin;
    .header . : { *(.header) }
    _header_size = . - _header_origin;

    ////////////////////////////////
    // TOC
    ////////////////////////////////
    . = ALIGN(4);
    _toc_origin = .;
    _toc_offset = . - _qme_image_origin;
    .toc . : { *(.toc) }
    _toc_size = . - _toc_origin;

    ////////////////////////////////
    // STRINGS
    ////////////////////////////////
    . = ALIGN(1);
    _strings_origin = .;
    _strings_offset = . - _qme_image_origin;
    .strings . : { *(.strings) }
    _strings_size = . - _strings_origin;

    ////////////////////////////////
    // Level 1 Bootloader
    ////////////////////////////////
    . = ALIGN(8);
    _lvl1_bl_origin = .;
    _lvl1_bl_offset = . - _qme_image_origin;
    .lvl1_bl . : { *(.lvl1_bl) }
    _lvl1_bl_size = . - _lvl1_bl_origin;

    ////////////////////////////////
    // Level 2 Bootloader
    ////////////////////////////////
    . = ALIGN(8);
    _lvl2_bl_origin = .;
    _lvl2_bl_offset = . - _qme_image_origin;
    .lvl2_bl . : { *(.lvl2_bl) }
    _lvl2_bl_size = . - _lvl2_bl_origin;

    ////////////////////////////////
    // HCODE
    ////////////////////////////////
    . = ALIGN(8);
    _hcode_origin = .;
    _hcode_offset = . - _qme_image_origin;
    .hcode . : { *(.hcode) }
    _hcode_size = . - _hcode_origin;

    ////////////////////////////////
    // RINGS
    ////////////////////////////////
    . = ALIGN(8);
    _rings_origin = .;
    _rings_offset = . - _qme_image_origin;
    .rings . : { *(.rings) }
    _rings_size = . - _rings_origin;

    ////////////////////////////////
    // end of the image
    ////////////////////////////////
    . = ALIGN(8);
    _qme_image_size = . - _qme_image_origin;
    _qme_image_end = . - 0;

}
