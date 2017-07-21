/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/boot/pgpe_boot_loader.S $ */
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
#include <p9_hcd_memmap_homer.H>
#include <p9_hcd_memmap_occ_sram.H>
#include <gpe_register_addresses.h>
#include <pgpe_boot_defines.H>
	.list

        .global __vectors
__vectors:

    .org __vectors + 0x0000
__machine_check:
        trap

    .org __vectors + 0x0040
    .global __system_reset
__system_reset:
        b   __bootLoader

    .org __vectors + 0x0060
__data_storage:
        trap

    .org __vectors + 0x0080
__instruction_storage:
        trap

    .org __vectors + 0x00A0
__external_interrupt_vector:
        trap

    .org __vectors + 0x00C0
__alignment_exception:
        trap

    .org __vectors + 0x00E0
__program_exception:
        trap

    .org __vectors + 0x0100
__dec_interrupt:
        trap

    .org __vectors + 0x0120
__fit_interrupt:
        trap

    .org __vectors + 0x0140
__watchdog_interrupt:
        trap

__bootLoader:

        ######################
        ## PPMR Header Copy
        ######################

        ## update IVPR to Boot Loader Base Addr in OCC SRAM

        _liw    %BL_START_SRAM_ADDRESS_REG, OCC_SRAM_PGPE_BOOT_LOADER_ADDR
        _liw    %GPR_TEMP, GPE_GPE2IVPR
         stw     BL_START_SRAM_ADDRESS_REG, OFFSET (GPR_TEMP)

        ## Enable Trap
         lis     GPR_TEMP, ENABLE_PGPE_TRAP
         mtdbcr  GPR_TEMP

        ## Address of PPMR in HOMER(source address)
        _liw  %GPR_PPMR_HOMER_ADDR, HOMER_PPMR_HEADER_ADDR

        ## Address of PPMR in SRAM(destination Address)
        _liw %GPR_PPMR_SRAM_ADDR, OCC_SRAM_PGPE_PPMR_HEADER_ADDR

        ## Load the size of PPMR header (in double words)
        _liw %GPR_SIZE, PPMR_HEADER_SIZE
        srwi GPR_SIZE, GPR_SIZE, PGPE_DIV_8

        ## Set the counter for copying
        mtctr GPR_SIZE

        ## Copy the PPMR header from HOMER to OCC SRAM
PPMR_header_copy_loop:
        lvd  DATA_WR, OFFSET(GPR_PPMR_HOMER_ADDR)
        stvd DATA_WR, OFFSET(GPR_PPMR_SRAM_ADDR)
        addi GPR_PPMR_HOMER_ADDR, GPR_PPMR_HOMER_ADDR, NXT_BLK_OFF
        addi GPR_PPMR_SRAM_ADDR, GPR_PPMR_SRAM_ADDR, NXT_BLK_OFF
        bdnz PPMR_header_copy_loop

        #########################
        ## Copy PGPE Header/Exe
        #########################

        ## Address in SRAM where the payload will have to be copied (Destination address)
        _liw %GPR_SRAM_PGPE_ADDR, OCC_SRAM_PGPE_BASE_ADDR

        ## Address in SRAM where the offset of payload will be found
        _liw %GPR_SRAM_HCODE_OFF_ADDR, OCC_SRAM_PGPE_HCODE_OFFSET_ADDR

        ## Base address of PPMR header in HOMER
        _liw %GPR_PPMR_HOMER_ADDR, HOMER_PPMR_HEADER_ADDR

        ## Offset of HCODE from PPMR header
        lwz  GPR_HOMER_PAYLOAD_OFF, OFFSET(GPR_SRAM_HCODE_OFF_ADDR)

        ## Compute the loaction of the payload in HOMER (source address)
        add GPR_ADDR_PAYLOAD_HOMER, GPR_PPMR_HOMER_ADDR, GPR_HOMER_PAYLOAD_OFF

        ## Address in SRAM where the length of payload will be found
        _liw %GPR_SRAM_IMG_LEN_ADDR, OCC_SRAM_PGPE_IMAGE_LENGTH_ADDR

        ## Size of payload (in double words)
        lwz GPR_SIZE, OFFSET(GPR_SRAM_IMG_LEN_ADDR)
        srwi GPR_SIZE, GPR_SIZE, PGPE_DIV_8

        ## If PGPE payload size is 0 then fail
        cmpwbeq    %GPR_SIZE, 00, BLFAIL

        ## Set the counter for copying
        mtctr GPR_SIZE

        ## Start copying
payload_copy_loop:
        lvd DATA_WR, OFFSET(GPR_ADDR_PAYLOAD_HOMER)
        stvd DATA_WR, OFFSET(GPR_SRAM_PGPE_ADDR)
        addi GPR_ADDR_PAYLOAD_HOMER, GPR_ADDR_PAYLOAD_HOMER, NXT_BLK_OFF
        addi GPR_SRAM_PGPE_ADDR, GPR_SRAM_PGPE_ADDR, NXT_BLK_OFF
        bdnz payload_copy_loop

        ##FIXME 167543  Shall be uncommented when availability of memory based system improves
        ## Write the success status "LP" to PPMR header
        ##_liw   %GPR_STAT_ADDR, BLPASS_STAT
        ##stw  GPR_STAT_ADDR, OFF_STAT_WR(GPR_PPMR_HOMER_ADDR)

        ######################
        ## Char Image Copy
        ######################

        ## Address in SRAM where the offset of HCODE will be found
        _liw %GPR_SRAM_HCODE_OFF_ADDR, OCC_SRAM_PGPE_HCODE_OFFSET_ADDR

        ## Base address of PPMR header in HOMER
        _liw %GPR_PPMR_HOMER_ADDR, HOMER_PPMR_HEADER_ADDR

        ## Offset of HCODE from PPMR header
        lwz  GPR_HOMER_PAYLOAD_OFF, OFFSET(GPR_SRAM_HCODE_OFF_ADDR)

        ## Compute the loaction of the payload in HOMER (source address)
        _liw %GPR_SIZE, PGPE_IMAGE_SIZE
        add GPR_ADDR_PAYLOAD_HOMER, GPR_PPMR_HOMER_ADDR, GPR_HOMER_PAYLOAD_OFF
        add GPR_PPMR_HOMER_ADDR, GPR_ADDR_PAYLOAD_HOMER, GPR_SIZE

        ## Address of PPMR in SRAM(destination Address)
        _liw %GPR_PPMR_SRAM_ADDR, OCC_SRAM_AUX_TASK_ADDR

        ## Load the size of PPMR header (in double words)
        _liw %GPR_SIZE, PGPE_AUX_TASK_SIZE
        srwi GPR_SIZE, GPR_SIZE, PGPE_DIV_8

        ## Set the counter for copying
        mtctr GPR_SIZE
        ## Copy the PPMR header from HOMER to OCC SRAM
char_image_copy_loop:
        lvd  DATA_WR, OFFSET(GPR_PPMR_HOMER_ADDR)
        stvd DATA_WR, OFFSET(GPR_PPMR_SRAM_ADDR)
        addi GPR_PPMR_HOMER_ADDR, GPR_PPMR_HOMER_ADDR, NXT_BLK_OFF
        addi GPR_PPMR_SRAM_ADDR, GPR_PPMR_SRAM_ADDR, NXT_BLK_OFF
	bdnz char_image_copy_loop

        ########################
        ## branch to hcode
        ########################
branch:
        ## Reset address to which branch must take place
        _liw %GPR_TEMP, OCC_SRAM_PGPE_HCODE_RESET_ADDR
        mtlr GPR_TEMP

        ## Setup the IVPR for the Hcode
        _liw    %GPR_PPMR_HOMER_ADDR, OCC_SRAM_PGPE_BASE_ADDR
        _liw    %GPR_ADDR_PAYLOAD_HOMER, GPE_GPE2IVPR
        stw     GPR_PPMR_HOMER_ADDR, OFFSET(GPR_ADDR_PAYLOAD_HOMER)
        blr

        //Write the failure status "LF" to PPMR header
BLFAIL:
        ##FIXME 167543  Shall be uncommented when availability of memory based system improves
        ##_liw  %GPR_STAT_ADDR, BLFAIL_STAT
        ##stw   GPR_STAT_ADDR, OFF_STAT_WR(GPR_PPMR_HOMER_ADDR)
        trap
        .epilogue __bootLoader
