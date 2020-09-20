/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: tools/imageProcs/sbe_image.cmd $                              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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

#define SBE_IMAGE_ORIGIN 0x80000000
OUTPUT_FORMAT(elf32-powerpc);

SECTIONS
{
    . = SBE_IMAGE_ORIGIN;
     _sbe_image_origin = . - 0;
    ////////////////////////////////
    // HEADER
    ////////////////////////////////
    . = ALIGN(1);
    _header_origin = .;
    _header_offset = . - _sbe_image_origin;
    .header . : { *(.header) }
    _header_size = . - _header_origin;

    ////////////////////////////////
    // TOC
    ////////////////////////////////
    . = ALIGN(4);
    _toc_origin = .;
    _toc_offset = . - _sbe_image_origin;
    .toc . : { *(.toc) }
    _toc_size = . - _toc_origin;

    ////////////////////////////////
    // STRINGS
    ////////////////////////////////
    . = ALIGN(1);
    _strings_origin = .;
    _strings_offset = . - _sbe_image_origin;
    .strings . : { *(.strings) }
    _strings_size = . - _strings_origin;

    ////////////////////////////////
    // RINGS
    ////////////////////////////////
    . = ALIGN(8);
    _rings_origin = .;
    _rings_offset = . - _sbe_image_origin;
    .rings . : { *(.rings) }
    _rings_size = . - _rings_origin;

    ////////////////////////////////
    // FA_EC_CL2_FAR
    ////////////////////////////////
    . = ALIGN(8);
    _fa_ec_cl2_far_origin = .;
    _fa_ec_cl2_far_offset = . - _sbe_image_origin;
    .fa_ec_cl2_far . : { *(.fa_ec_cl2_far) }
    _fa_ec_cl2_far_size = . - _fa_ec_cl2_far_origin;

    ////////////////////////////////
    // FA_EC_MMA_FAR
    ////////////////////////////////
    . = ALIGN(8);
    _fa_ec_mma_far_origin = .;
    _fa_ec_mma_far_offset = . - _sbe_image_origin;
    .fa_ec_mma_far . : { *(.fa_ec_mma_far) }
    _fa_ec_mma_far_size = . - _fa_ec_mma_far_origin;

    ////////////////////////////////
    // FA_RING_OVRD
    ////////////////////////////////
    . = ALIGN(8);
    _fa_ring_ovrd_origin = .;
    _fa_ring_ovrd_offset = . - _sbe_image_origin;
    _fa_ring_ovrd . : { *(.fa_ring_ovrd) }
    _fa_ring_ovrd_size = . - _fa_ring_ovrd_origin;

    ////////////////////////////////
    // RINGIDFEATLIST
    ////////////////////////////////
    . = ALIGN(8);
    _ringidfeatlist_origin = .;
    _ringidfeatlist_offset = . - _sbe_image_origin;
    .ringidfeatlist . : { *(.ringidfeatlist) }
    _ringidfeatlist_size = . - _ringidfeatlist_origin;

    ///////////////////////////////
    // HDCT
    ////////////////////////////////
    . = ALIGN(8);
    _hdct_origin = .;
    _hdct_offset = . - _sbe_image_origin;
    .hdct . : { *(.hdct) }
    _hdct_size = . - _hdct_origin;

    ///////////////////////////////
    // SBH_FIRMWARE
    ////////////////////////////////
    . = ALIGN(8);
    _sbh_firmware_origin = .;
    _sbh_firmware_offset = . - _sbe_image_origin;
    .sbh_firmware . : { *(.sbh_firmware) }
    _sbh_firmware_size = . - _sbh_firmware_origin;

    ///////////////////////////////
    // SBH_HBBL
    ////////////////////////////////
    . = ALIGN(8);
    _sbh_hbbl_origin = .;
    _sbh_hbbl_offset = . - _sbe_image_origin;
    .sbh_hbbl . : { *(.sbh_hbbl) }
    _sbh_hbbl_size = . - _sbh_hbbl_origin;

    ////////////////////////////////
    // end of the image
    ////////////////////////////////
    . = ALIGN(8);
    _sbe_image_size = . - _sbe_image_origin;
    _sbe_image_end = . - 0;

}
