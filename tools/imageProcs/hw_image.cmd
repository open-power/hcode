/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: tools/imageProcs/hw_image.cmd $                               */
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

#define HW_IMAGE_ORIGIN 0x80000000
OUTPUT_FORMAT(elf32-powerpc);

SECTIONS
{
    . = HW_IMAGE_ORIGIN;
     _hw_image_origin = . - 0;
    ////////////////////////////////
    // Header
    ////////////////////////////////
    . = ALIGN(1);
    _header_origin = .;
    _header_offset = . - _hw_image_origin;
    .header . : { *(.header) }
    _header_size = . - _header_origin;

    ////////////////////////////////
    // TOC
    ////////////////////////////////
    . = ALIGN(4);
    _toc_origin = .;
    _toc_offset = . - _hw_image_origin;
    .toc . : { *(.toc) }
    _toc_size = . - _toc_origin;

    ////////////////////////////////
    // STRING
    ////////////////////////////////
    . = ALIGN(1);
    _strings_origin = .;
    _strings_offset = . - _hw_image_origin;
    .strings . : { *(.strings) }
    _strings_size = . - _strings_origin;

    ////////////////////////////////
    // SGPE
    ////////////////////////////////
    . = ALIGN(8);
    _sgpe_origin = .;
    _sgpe_offset = . - _hw_image_origin;
    .sgpe . : { *(.sgpe) }
    _sgpe_size = . - _sgpe_origin;

    ////////////////////////////////
    // CORE RESTORE
    ////////////////////////////////
    . = ALIGN(8);
    _core_restore_origin = .;
    _core_restore_offset = . - _hw_image_origin;
    .core_restore . : { *(.core_restore) }
    _core_restore_size = . - _core_restore_origin;

    ////////////////////////////////
    // CME
    ////////////////////////////////
    . = ALIGN(8);
    _cme_origin = .;
    _cme_offset = . - _hw_image_origin;
    .cme . : { *(.cme) }
    _cme_size = . - _cme_origin;

    ////////////////////////////////
    // PGPE
    ////////////////////////////////
    . = ALIGN(8);
    _pgpe_origin = .;
    _pgpe_offset = . - _hw_image_origin;
    .pgpe . : { *(.pgpe) }
    _pgpe_size = . - _pgpe_origin;

    ////////////////////////////////
    // IOPPE
    ////////////////////////////////
    . = ALIGN(8);
    _ioppe_origin = .;
    _ioppe_offset = . - _hw_image_origin;
    .ioppe . : { *(.ioppe) }
    _ioppe_size = . - _ioppe_origin;

    ////////////////////////////////
    // FPPE
    ////////////////////////////////
    . = ALIGN(8);
    _fppe_origin = .;
    _fppe_offset = . - _hw_image_origin;
    .fppe . : { *(.fppe) }
    _fppe_size = . - _fppe_origin;

    ////////////////////////////////
    // RINGS
    ////////////////////////////////
    . = ALIGN(8);
    _rings_origin = .;
    _rings_offset = . - _hw_image_origin;
    .rings . : { *(.rings) }
    _rings_size = . - _rings_origin;

    ////////////////////////////////
    // OVERLAYS
    ////////////////////////////////
    . = ALIGN(8);
    _overlays_origin = .;
    _overlays_offset = . - _hw_image_origin;
    .overlays . : { *(.overlays) }
    _overlays_size = . - _overlays_origin;

    ////////////////////////////////
    // end of the image
    ////////////////////////////////
    . = ALIGN(8);
    _hw_image_size = . - _hw_image_origin;
    _hw_image_end = . - 0;

}
