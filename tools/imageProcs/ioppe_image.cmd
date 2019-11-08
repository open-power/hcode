/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: tools/imageProcs/ioppe_image.cmd $                            */
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

#define IOPPE_IMAGE_ORIGIN 0x80000000
OUTPUT_FORMAT(elf32-powerpc);

SECTIONS
{
    . = IOPPE_IMAGE_ORIGIN;
    _ioppe_image_origin = . - 0;
    ////////////////////////////////
    // Header
    ////////////////////////////////
    . = ALIGN(1);
    _header_origin = .;
    _header_offset = . - _ioppe_image_origin;
    .header . : { *(.header) }
    _header_size = . - _header_origin;

    ////////////////////////////////
    // TOC
    ////////////////////////////////
    . = ALIGN(4);
    _toc_origin = .;
    _toc_offset = . - _ioppe_image_origin;
    .toc . : { *(.toc) }
    _toc_size = . - _toc_origin;

    ////////////////////////////////
    // STRINGS
    ////////////////////////////////
    . = ALIGN(1);
    _strings_origin = .;
    _strings_offset = . - _ioppe_image_origin;
    .strings . : { *(.strings) }
    _strings_size = . - _strings_origin;

    ////////////////////////////////
    // IOO
    ////////////////////////////////
    . = ALIGN(8);
    _ioo_origin = .;
    _ioo_offset = . - _ioppe_image_origin;
    .ioo . : { *(.ioo) }
    _ioo_size = . - _ioo_origin;

    ////////////////////////////////
    // MEMREGS
    ////////////////////////////////
    . = ALIGN(8);
    _memregs_origin = .;
    _memregs_offset = . - _ioppe_image_origin;
    .memregs . : { *(.memregs) }
    _memregs_size = . - _memregs_origin;

    ////////////////////////////////
    // NV
    ////////////////////////////////
    . = ALIGN(8);
    _nv_origin = .;
    _nv_offset = . - _ioppe_image_origin;
    .nv . : { *(.nv) }
    _nv_size = . - _nv_origin;

    ////////////////////////////////
    // end of the image
    ////////////////////////////////
    . = ALIGN(8);
    _ioppe_image_size = . - _ioppe_image_origin;
    _ioppe_image_end = . - 0;

}
