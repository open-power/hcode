/* IBM_PROLOG_BEGIN_TAG                                                   */
/* COPYRIGHT 2019                                                         */
/* IBM_PROLOG_END_TAG                                                     */

// Need to do this so that elf32-powerpc is not modified!
#undef powerpc

#define IOPXRAM_IMAGE_ORIGIN 0x80000000
OUTPUT_FORMAT(elf32-powerpc);

SECTIONS
{
    . = IOPXRAM_IMAGE_ORIGIN;
    _iopxram_image_origin = . - 0;
    ////////////////////////////////
    // Header
    ////////////////////////////////
    . = ALIGN(1);
    _header_origin = .;
    _header_offset = . - _iopxram_image_origin;
    .header . : { *(.header) }
    _header_size = . - _header_origin;

    ////////////////////////////////
    // TOC
    ////////////////////////////////
    . = ALIGN(4);
    _toc_origin = .;
    _toc_offset = . - _iopxram_image_origin;
    .toc . : { *(.toc) }
    _toc_size = . - _toc_origin;

    ////////////////////////////////
    // STRINGS
    ////////////////////////////////
    . = ALIGN(1);
    _strings_origin = .;
    _strings_offset = . - _iopxram_image_origin;
    .strings . : { *(.strings) }
    _strings_size = . - _strings_origin;

    ////////////////////////////////
    // IOP_FW image
    ////////////////////////////////
    . = ALIGN(8);
    _iop_fw_origin = .;
    _iop_fw_offset = . - _iopxram_image_origin;
    .iop_fw . : { *(.iop_fw) }
    _iop_fw_size = . - _iop_fw_origin;

    ////////////////////////////////
    // IOP_FW image
    ////////////////////////////////
    . = ALIGN(8);
    _iop_fw_ver_origin = .;
    _iop_fw_ver_offset = . - _iopxram_image_origin;
    .iop_fw_ver . : { *(.iop_fw_ver) }
    _iop_fw_ver_size = . - _iop_fw_ver_origin;

    ////////////////////////////////
    // end of the image
    ////////////////////////////////
    . = ALIGN(8);
    _iopxram_image_size = . - _iopxram_image_origin;
    _iopxram_image_end = . - 0;

}
