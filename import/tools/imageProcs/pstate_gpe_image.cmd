/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/tools/imageProcs/pstate_gpe_image.cmd $                */
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

#define PGPE_IMAGE_ORIGIN 0x80000000
OUTPUT_FORMAT(elf32-powerpc);

SECTIONS
{
    . = PGPE_IMAGE_ORIGIN;
     _pgpe_image_origin = . - 0;
    ////////////////////////////////
    // Header
    ////////////////////////////////
    . = ALIGN(1);
    _header_origin = .;
    _header_offset = . - _pgpe_image_origin;
    .header . : { *(.header) }
    _header_size = . - _header_origin;

    ////////////////////////////////
    // TOC
    ////////////////////////////////
    . = ALIGN(4);
    _toc_origin = .;
    _toc_offset = . - _pgpe_image_origin;
    .toc . : { *(.toc) }
    _toc_size = . - _toc_origin;

    ////////////////////////////////
    // STRING
    ////////////////////////////////
    . = ALIGN(1);
    _strings_origin = .;
    _strings_offset = . - _pgpe_image_origin;
    .strings . : { *(.strings) }
    _strings_size = . - _strings_origin;

     ////////////////////////////////
    // PPMR Header
    ////////////////////////////////
    . = ALIGN(8);
    _ppmr_hdr_origin = .;
    _ppmr_hdr_offset = . - _pgpe_image_origin;
    .ppmr_header . : { *(.ppmr_header) }
    _ppmr_hdr_size = . - _ppmr_hdr_origin;

    ////////////////////////////////
    // Level 1 Bootloader
    ////////////////////////////////
    . = ALIGN(8);
    _lvl1_bl_origin = .;
    _lvl1_bl_offset = . - _pgpe_image_origin;
    .lvl1_bl . : { *(.lvl1_bl) }
    _lvl1_bl_size = . - _lvl1_bl_origin;

    ////////////////////////////////
    // Level 2 Bootloader
    ////////////////////////////////
    . = ALIGN(8);
    _lvl2_bl_origin = .;
    _lvl2_bl_offset = . - _pgpe_image_origin;
    .lvl2_bl . : { *(.lvl2_bl) }
    _lvl2_bl_size = . - _lvl2_bl_origin;

    ////////////////////////////////
    // Vectors
    ////////////////////////////////
    . = ALIGN(8);
    _vect_origin = .;
    _vect_offset = . - _pgpe_image_origin;
    .vect . : { *(.vect) }
    _vect_size = . - _vect_origin;

    ////////////////////////////////
    // PGPE Image Header
    ////////////////////////////////
    . = ALIGN(8);
    _pgpe_image_header_origin = .;
    _pgpe_image_header_offset = . - _pgpe_image_origin;
    .pgpe_image_header . : { *(.pgpe_image_header) }
    _pgpe_image_header_size = . - _pgpe_image_header_origin;

    ////////////////////////////////
    // HCODE
    ////////////////////////////////
    . = ALIGN(8);
    _hcode_origin = .;
    _hcode_offset = . - _pgpe_image_origin;
    .hcode . : { *(.hcode) }
    _hcode_size = . - _hcode_origin;

    ////////////////////////////////
    // PGPE Aux Task
    ////////////////////////////////
    . = ALIGN(8);
    _aux_task_origin = .;
    _aux_task_offset = . - _pgpe_image_origin;
    .aux_task . : { *(.aux_task) }
    _aux_task_size = . - _aux_task_origin;


    ////////////////////////////////
    // end of the image
    ////////////////////////////////
    . = ALIGN(8);
    _pgpe_image_size = . - _pgpe_image_origin;
    _pstate_gpe_image_end = . - 0;

}
