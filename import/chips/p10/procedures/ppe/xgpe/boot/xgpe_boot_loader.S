/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/boot/xgpe_boot_loader.S $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include <p10_hcd_memmap_homer.H>
#include <p10_hcd_memmap_occ_sram.H>
#include <gpe_register_addresses.h>
#include <xgpe_boot_defines.H>
	.list

        .global __vectors
__vectors:

    .org __vectors + 0x0020
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
        ## XPMR Header Copy
        ######################

        ## update IVPR to Boot Loader Base Addr in OCC SRAM

        _liw    %BL_START_SRAM_ADDRESS_REG, OCC_SRAM_XGPE_BOOT_LOADER_ADDR
        _liw    %GPR_TEMP, GPE_GPE3IVPR
         stw     BL_START_SRAM_ADDRESS_REG, OFFSET (GPR_TEMP)

        ## Enable Trap
         lis     GPR_TEMP, ENABLE_XGPE_TRAP
         mtdbcr  GPR_TEMP

        ## Address of XPMR in HOMER(source address)
        _liw  %GPR_XPMR_HOMER_ADDR, HOMER_XPMR_HEADER_ADDR

        ## Address of XPMR in SRAM(destination Address)
        _liw %GPR_XPMR_SRAM_ADDR, OCC_SRAM_XGPE_XPMR_HEADER_ADDR

        ## Load the size of XPMR header (in double words)
        _liw %GPR_SIZE, XPMR_HEADER_SIZE
        srwi GPR_SIZE, GPR_SIZE, XGPE_DIV_8

        ## Set the counter for copying
        mtctr GPR_SIZE

        ## Copy the XPMR header from HOMER to OCC SRAM
XPMR_header_copy_loop:
        lvd  DATA_WR, OFFSET(GPR_XPMR_HOMER_ADDR)
        stvd DATA_WR, OFFSET(GPR_XPMR_SRAM_ADDR)
        addi GPR_XPMR_HOMER_ADDR, GPR_XPMR_HOMER_ADDR, NXT_BLK_OFF
        addi GPR_XPMR_SRAM_ADDR, GPR_XPMR_SRAM_ADDR, NXT_BLK_OFF
        bdnz XPMR_header_copy_loop

        #########################
        ## Copy XGPE Header/Exe
        #########################

        ## Address in SRAM where the payload will have to be copied (Destination address)
        _liw %GPR_SRAM_XGPE_ADDR, XGPE_SRAM_BASE_ADDR

        ## Address in SRAM where the offset of payload will be found
        _liw %GPR_SRAM_HCODE_OFF_ADDR, OCC_SRAM_XGPE_HCODE_OFFSET_ADDR

        ## Base address of XPMR header in HOMER
        _liw %GPR_XPMR_HOMER_ADDR, HOMER_XPMR_HEADER_ADDR

        ## Offset of HCODE from XPMR header
        lwz  GPR_HOMER_PAYLOAD_OFF, OFFSET(GPR_SRAM_HCODE_OFF_ADDR)

        ## Compute the loaction of the payload in HOMER (source address)
        add GPR_ADDR_PAYLOAD_HOMER, GPR_XPMR_HOMER_ADDR, GPR_HOMER_PAYLOAD_OFF

        ## Address in SRAM where the length of payload will be found
        _liw %GPR_SRAM_IMG_LEN_ADDR, OCC_SRAM_XGPE_IMAGE_LENGTH_ADDR

        ## Size of payload (in double words)
        lwz GPR_SIZE, OFFSET(GPR_SRAM_IMG_LEN_ADDR)
        srwi GPR_SIZE, GPR_SIZE, XGPE_DIV_8

        ## If XGPE payload size is 0 then fail
        cmpwbeq    %GPR_SIZE, 00, BLFAIL

        ## Set the counter for copying
        mtctr GPR_SIZE

        ## Start copying
payload_copy_loop:
        lvd DATA_WR, OFFSET(GPR_ADDR_PAYLOAD_HOMER)
        stvd DATA_WR, OFFSET(GPR_SRAM_XGPE_ADDR)
        addi GPR_ADDR_PAYLOAD_HOMER, GPR_ADDR_PAYLOAD_HOMER, NXT_BLK_OFF
        addi GPR_SRAM_XGPE_ADDR, GPR_SRAM_XGPE_ADDR, NXT_BLK_OFF
        bdnz payload_copy_loop

        ## Write the success status "BL-S" to XPMR header
        _liw   %GPR_STAT_ADDR, XGPE_BOOT_LOADER_SUCCESS
        stw  GPR_STAT_ADDR, OFF_STAT_WR(GPR_XPMR_HOMER_ADDR)

        ########################
        ## branch to hcode
        ########################
branch:
        ## Reset address to which branch must take place
        _liw %GPR_TEMP, OCC_SRAM_XGPE_HCODE_RESET_ADDR
        mtlr GPR_TEMP

        ## Setup the IVPR for the Hcode
        _liw    %GPR_XPMR_HOMER_ADDR, XGPE_SRAM_BASE_ADDR
        _liw    %GPR_ADDR_PAYLOAD_HOMER, GPE_GPE3IVPR
        stw     GPR_XPMR_HOMER_ADDR, OFFSET(GPR_ADDR_PAYLOAD_HOMER)
        blr

        //Write the failure status "BL-F" to XPMR header
BLFAIL:
        _liw  %GPR_STAT_ADDR, XGPE_BOOT_LOADER_FAIL
        stw   GPR_STAT_ADDR, OFF_STAT_WR(GPR_XPMR_HOMER_ADDR)
        trap
        .epilogue __bootLoader
