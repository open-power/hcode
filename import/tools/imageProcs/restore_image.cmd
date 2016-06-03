/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/tools/imageProcs/restore_image.cmd $                   */
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

// Need to do this so that elf32-powerpc is not modified!
#undef powerpc

#define RESTORE_IMAGE_ORIGIN 0x80000000
OUTPUT_FORMAT(elf32-powerpc);

SECTIONS
{
    . = RESTORE_IMAGE_ORIGIN;
     _restore_image_origin = . - 0;
    ////////////////////////////////
    // Header
    ////////////////////////////////
    . = ALIGN(1);
    _header_origin = .;
    _header_offset = . - _restore_image_origin;
    .header . : { *(.header) }
    _header_size = . - _header_origin;

    ////////////////////////////////
    // TOC
    ////////////////////////////////
    . = ALIGN(4);
    _toc_origin = .;
    _toc_offset = . - _restore_image_origin;
    .toc . : { *(.toc) }
    _toc_size = . - _toc_origin;

    ////////////////////////////////
    // STRING
    ////////////////////////////////
    . = ALIGN(1);
    _strings_origin = .;
    _strings_offset = . - _restore_image_origin;
    .strings . : { *(.strings) }
    _strings_size = . - _strings_origin;

    ////////////////////////////////
    // CPMR
    ////////////////////////////////
    . = ALIGN(8);
    _cpmr_origin = .;
    _cpmr_offset = . - _restore_image_origin;
    .cpmr . : { *(.cpmr) }
    _cpmr_size = . - _cpmr_origin;

    ////////////////////////////////
    // Self-Restore
    ////////////////////////////////
    . = ALIGN(8);
    _self_restore_origin = .;
    _self_restore_offset = . - _restore_image_origin;
    .self_restore . : { *(.self_restore) }
    _self_restore_size = . - _self_restore_origin;

    ////////////////////////////////
    // end of the image
    ////////////////////////////////
    . = ALIGN(8);
    _restore_image_size = . - _restore_image_origin;
    _restore_image_end = . - 0;
}
