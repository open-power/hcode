/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_sgpe_boot_cme.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2020                                                    */
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
#include "p9_sgpe_stop.h"
#include "pk_api.h"
#include "kernel.h"
#include "gpehw_common.h"
#include "p9_hcd_block_copy.h"
#include "p9_hcd_sgpe_boot_cme.h"
#include "p9_stop_util.H"
#include "p9_hcode_image_defines.H"

/**
 * @brief   Summarizes all constants associated with CME boot firmware.
 */
enum
{
    ZERO                        =   0,
    CHECK_BIT                   =   0x8000, // input vector is big endian
    CPMR_POSITION               =   0x00200000,
    CME_IMG_HDR_OFFSET_POS      =   0x20,
    CME_HCODE_LEN_POS           =   0x24,
    CME_FLAG_SHIFT_POS          =   (63 - 31), // @bug: was 0x1E
    RESUME_PPE_OPERATION        =   0x2000000000000000ll,   // Resume PPE
    HARD_RESET_PPE              =   0x6000000000000000ll,   // Hard Reset PPE
    SBASE_FIRST_BLOCK_COPY      =   0,  // corresponds to address 0xFFFF8000
    INACTIVE_CORE               =   0x00,
    EVEN_CORE_ACTIVE            =   0x02,
    ODD_CORE_ACTIVE             =   0x01,
    BOTH_CORE_ACTIVE            =   0x03,
    SCOM_ADDR_CCSR              =   0x0006C090,
    CHECK_BIT_DWORD             =   0x8000000000000000ll,
    SET_ADDR_MSB                =   0x80000000,
    WKUP_NOTIFY_SELECT          =   0x0004000000000000,
    CME_BOOT_TIMEOUT            =   0x32,
    CME_BCE_TIMEOUT             =   0xB0,
    WRITE_CLR_ALL               =   0xFFFFFFFFF,
    BCESCR_OVERRIDE_ENABLE      =   0x1000000000000000,
    CME_BLOCK_READ_SIZE         =   0x20,
};


//CPMR Header Description

//CPMR Header Description
//CPMR = HOMER + 1 MB
//----------------------------------------  CPMR
//  ATTN Word       | ATTN Word
//----------------------------------------  CPMR +8
//Magic Number
//----------------------------------------  CPMR + 0x10
//Build Date        |    Build Time
//----------------------------------------  CPMR + 0x18
//    |   |    |    |   |   |   |Fuse Mode
//----------------------------------------  CPMR + 0x20
//CME Image Offset  |    Hcode Length
//----------------------------------------  CPMR + 0x28
//Common Ring       |    Ring Length
//----------------------------------------- CPMR + 0x30
//PState Offset     |   Pstate Region Length
//----------------------------------------- CPMR + 0x38
//  Reserved
//-----------------------------------------

BootErrorCode_t boot_cme( uint16_t i_bootCme )
{
    BootErrorCode_t l_retCode = CME_BOOT_SUCCESS;

    do
    {
        uint64_t l_dataReg = 0;
        uint64_t l_dataCCSR = 0;
        GPE_GETSCOM(SCOM_ADDR_CCSR, l_dataCCSR);

        uint8_t l_corePos = 0;
        uint8_t l_cmeIndex = 0;
        uint8_t activeCmeList[MAX_CMES_PER_CHIP] = {ZERO};
        uint8_t activeCmeCnt = 0;

        for( l_cmeIndex = 0; l_cmeIndex < MAX_CMES_PER_CHIP; l_cmeIndex++ )
        {
            // Step 1. Screen Valid CME for boot

            // vector contains a list of all CMEs that need to be booted.
            // is a given CME in that list. First of all let us ensure that.
            if( !(i_bootCme & (CHECK_BIT >> l_cmeIndex)) )
            {
                // given CME is not in list of CME to be booted.
                // skipping.
                continue;
            }

            uint32_t coreCnt = 0;
            //check which core within EX is configured. value of coreCnt
            //will reflect how many cores in CME have been found active.
            //----------------------------------------------------
            // coreCnt  Value         Interpretation
            //----------------------------------------------------
            // 0                  |   No active core in given CME
            // ---------------------------------------------------
            // EVEN_CORE_ACTIVE   |   even core is active
            // ---------------------------------------------------
            // ODD_CORE_ACTIVE    |   Odd core is active
            // ---------------------------------------------------
            // EVEN_CORE_ACTIVE + |  Both core active in given CME
            // ODD_CORE_ACTIVE    |
            // ---------------------------------------------------
            l_corePos = l_cmeIndex << 1;
            coreCnt = ( l_dataCCSR & (CHECK_BIT_DWORD >> l_corePos) ) ? EVEN_CORE_ACTIVE : INACTIVE_CORE;
            coreCnt += ( l_dataCCSR & (CHECK_BIT_DWORD >> (l_corePos + 1)) ) ? ODD_CORE_ACTIVE : INACTIVE_CORE;
            PK_TRACE("l_cmeIndex: %d CorePos: %d l_dataCCSR: %x coreCnt: %d", l_cmeIndex, l_corePos, l_dataCCSR, coreCnt);

            if( ZERO == coreCnt )
            {
                // No core within EX is active. SGPE can skip this CME. Booting this CME achieves nothing.
                PK_TRACE("Both core in Ex is bad - escaping CME %d", l_cmeIndex);
                continue;
            }

            activeCmeList[l_cmeIndex] = coreCnt;

            // core is available and CME can attempt to boot it.
            // From SGPE platform, let us first get control of Block copy engine.
            // Disables BCE access via CME's Local register.
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR,
                                          (l_cmeIndex >> 1), (l_cmeIndex % 2)), BCESCR_OVERRIDE_ENABLE);


            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            // Step 2. Configure Block Copy Engine for copy of CME Image and common scan rings.
            // -----------------------------------------------------------------
            // -----------------------------------------------------------------

            // call boot loader to initiate first block copy. It shall copy CME Header,
            // CME Hcode, CME Common Scan rings, Parameter Block to CME's SRAM.

            //CME's first block copy data resides at a known offet wrt to start
            //of chip' HOMER. This offset is updated in a specific field of
            //CPMR Header area of chip's HOMER. Let us read that field and
            //find out the offset.
            uint64_t l_cpmrAddr = 0;
            GPE_GETSCOM(PBA_BAR0, l_cpmrAddr); // get start of HOMER for the chip.
            l_cpmrAddr += CPMR_POSITION; // offset to CPMR

            //Reading CPMR header to determine :
            //1. start of CME Image
            //2. Length of first block copy

            HomerImgDesc_t* pCpmrHdrAddr = (HomerImgDesc_t*)(HOMER_CPMR_BASE_ADDR);   //Set MSB to point OCI to PBA

            PK_TRACE("Magic Number [ 0:31]: 0x%08x", ((pCpmrHdrAddr->cpmrMagicWord & 0xffffffff00000000) >> 32));
            PK_TRACE("Magic Number [32:63]: 0x%08x", ((pCpmrHdrAddr->cpmrMagicWord & 0x00000000ffffffff)));

            PK_TRACE("Build Date: 0x%08x", (pCpmrHdrAddr->buildDate));
            PK_TRACE("Version   : 0x%08x", (pCpmrHdrAddr->version));
            PK_TRACE("Fused Flag: 0x%08x", (pCpmrHdrAddr->fusedModeStatus));

            PK_TRACE("Cme Hcode Offset: 0x%08x", (pCpmrHdrAddr->cmeImgOffset));
            PK_TRACE("Cme Hcode Length: 0x%08x", (pCpmrHdrAddr->cmeImgLength));

            uint32_t l_blockCopyLength = 0;

            // This offset must be multiple of 32B. This is to facilitate quick calculation of MBASE for BCE.
            // It is expected to be done during Hcode Image Build
            uint32_t l_hdrToSectionOffset = pCpmrHdrAddr->cmeImgOffset;  // Hcode Offset wrt CPMR Hdr start.

            if ( pCpmrHdrAddr->cmeImgLength != 0 )
            {
                l_blockCopyLength = pCpmrHdrAddr->cmeImgLength;         // CME Image length
            }

            if (  pCpmrHdrAddr->cmePstateLength != 0 )
            {
                l_blockCopyLength += pCpmrHdrAddr->cmePstateLength; // Local P-State parameter block
            }

            if (  pCpmrHdrAddr->cmeCommonRingLength != 0 )
            {
                l_blockCopyLength += pCpmrHdrAddr->cmeCommonRingLength; // Common Ring Length
            }

            PK_TRACE("Block Copy Length: 0x%08x", l_blockCopyLength);

            //rounding off length to CME's read block size i.e. 32 bytes
            l_blockCopyLength = ((l_blockCopyLength + (CME_BLOCK_READ_SIZE - 1 )) / CME_BLOCK_READ_SIZE);

            // update BCEBAR0 with start of CME hcode region
            // update BCEBAR1 with start of CME's instance specific ring region

            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_BCEBAR0, (l_cmeIndex >> 1), (l_cmeIndex % 2)),
                        ((l_cpmrAddr & 0x00FFFFFFFFF00000) |
                         (ENABLE_WR_SCOPE | ENABLE_RD_SCOPE | VG_TARGET_1S | BLOCK_COPY_SIZE_1MB)));

            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            // Step 3. Configure BCE for second block copy
            // -----------------------------------------------------------------
            // -----------------------------------------------------------------

            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_BCEBAR1, (l_cmeIndex >> 1), (l_cmeIndex % 2)),
                        ((l_cpmrAddr & 0x00FFFFFFFFF00000) |
                         (ENABLE_WR_SCOPE | ENABLE_RD_SCOPE | VG_TARGET_1S | BLOCK_COPY_SIZE_1MB)));

            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            // Step 4. Start Block Copy
            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            PK_TRACE("Before startCmeBlockCopy l_blockCopyLength in bytes 0x%08x l_cmeIndex: %d l_hdrToSectionOffset 0x%x",
                     l_blockCopyLength, l_cmeIndex, l_hdrToSectionOffset);

            startCmeBlockCopy(SBASE_FIRST_BLOCK_COPY, l_blockCopyLength,
                              l_cmeIndex, BAR_INDEX_0, l_hdrToSectionOffset);

            activeCmeCnt++;
            PK_TRACE("activeCmeCnt: %d", activeCmeCnt);
        }

        l_retCode = BLOCK_COPY_SCOM_FAIL;

        if( 0 == activeCmeCnt )
        {
            PK_TRACE("Boot not initiated for any CME" );
            break;
        }

        uint32_t cmeBootedList = 0;

        uint8_t  cmeInitSuccessCnt = 0;

        uint32_t l_copyStatus = 0;

        while(cmeInitSuccessCnt != activeCmeCnt)
        {
            // we have started first block copy for every functional CME. Let us check if block copy is done or not.
            for( l_cmeIndex = 0; l_cmeIndex < MAX_CMES_PER_CHIP; l_cmeIndex++ )
            {
                // check if block copy was started on this CME.
                if( INACTIVE_CORE == activeCmeList[l_cmeIndex] )
                {
                    // block copy was not initiated on this. so skip this CME
                    continue;
                }

                uint32_t l_cmeBootedBit = CHECK_BIT >> l_cmeIndex;

                if( cmeBootedList & l_cmeBootedBit )
                {
                    // CME Boot successful already
                    continue;
                }

                l_copyStatus = checkCmeBlockCopyStatus( l_cmeIndex );

                if(BLOCK_COPY_IN_PROGRESS == l_copyStatus )
                {
                    continue;
                }

                if( BLOCK_COPY_FAILED == l_copyStatus )
                {
                    PK_TRACE(" block copy failed for CME 0x%08x", l_cmeIndex );
                    l_retCode = BLOCK_COPY_SCOM_FAIL;

                    // for now abandon booting if a block copy fails on some CME.
                    cmeInitSuccessCnt = activeCmeCnt;
                    break;
                }

                l_retCode = BLOCK_COPY_SUCCESS; // atleast one CME's block copy engine was success.

                // -----------------------------------------------------------------
                // -----------------------------------------------------------------
                // Step 5. Configure BCE for copy of Core SCOM Restore Area:
                // -----------------------------------------------------------------
                // -----------------------------------------------------------------

                // Doesnt need to configure the bars again as bar0 and bar1 are both
                // pointed to CPMR base by code above(step2,3), from there the bce
                // routine in cme can request scan ring or scom restore region to copy
                // And the way this code is implemented, it will be wrong to change
                // bar0 here because we are still in a loop of bce all cme images.

                // -----------------------------------------------------------------
                // -----------------------------------------------------------------
                // Step 6. SGPE Starts CME
                // -----------------------------------------------------------------
                // -----------------------------------------------------------------

                // SGPE now should release the control of block copy engine.
                // Once it kicks off CME, during its initialization, CME will try to block
                // copy its instance specific scan rings. For that to succeed, SGPE must clear
                // BCECSR_OVERRIDE_EN bit in CME_LMCR register.

                // release control back to local CME BCECSR
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR,
                                              (l_cmeIndex >> 1), (l_cmeIndex % 2)), BCESCR_OVERRIDE_ENABLE);

                //Writing to CME's XCR to Hard Reset it
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIXCR,
                                              (l_cmeIndex >> 1), (l_cmeIndex % 2)), HARD_RESET_PPE);

                // Kick off CME by giving resume command through PPE External Control Register
                // Writing to XCR to resume PPE operation
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIXCR,
                                              (l_cmeIndex >> 1), (l_cmeIndex % 2)), RESUME_PPE_OPERATION);
                cmeInitSuccessCnt++;
                cmeBootedList = cmeBootedList | l_cmeBootedBit;

            } //for ( l_cmeIndex = 0 ....)

            PPE_WAIT_CORE_CYCLES(256);
        } //while(l_bceCnt != activeCmeCnt)

        PK_TRACE("BCE Done");

        // -----------------------------------------------------------------
        // -----------------------------------------------------------------
        // Step 7, 8, 9 is accomplished on CME platform
        // -----------------------------------------------------------------
        // -----------------------------------------------------------------

        // -----------------------------------------------------------------
        // -----------------------------------------------------------------
        // Step 10. All CME Kicked off. Check if CME STOP function is ready
        // -----------------------------------------------------------------
        // -----------------------------------------------------------------

        if( BLOCK_COPY_SUCCESS == l_copyStatus )
        {
            uint32_t cmeReadyList = 0;

            uint8_t l_cmeRdyCnt = 0;

            while(l_cmeRdyCnt != activeCmeCnt)
            {
                for( l_cmeIndex = 0; l_cmeIndex < MAX_CMES_PER_CHIP; l_cmeIndex++ )
                {
                    if( INACTIVE_CORE == activeCmeList[l_cmeIndex] )
                    {
                        continue;
                    }

                    uint32_t l_cmeActiveBit = CHECK_BIT >> l_cmeIndex;

                    if( cmeReadyList & l_cmeActiveBit )
                    {
                        // CME Active and Boot successful already
                        continue;
                    }

                    // Read CME Flag register to check PMCR READY
                    // The PMCR thread is the lowest priority thread running on
                    // the CME -- waiting until it is "ready" allows for every
                    // thread to complete its initialization prior to the SGPE
                    // routing interrupts (wakeup+PMCR) back to the CME.
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS,
                                                  (l_cmeIndex >> 1), (l_cmeIndex % 2)), l_dataReg);

                    if (!(l_dataReg & BIT64(CME_FLAGS_PMCR_READY)))
                    {
                        continue;
                    }

                    /*
                                        uint64_t DavidData = in32(G_OCB_OCCS2) & BITS32(20, 2);
                                        DavidData = DavidData << 32;

                                        GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_OR,
                                                                      (l_cmeIndex >> 1), (l_cmeIndex % 2)), DavidData);
                    */

                    // Clear CME LFIR[5] (ppe_halted) upon respective CME boot
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LFIR_AND,
                                                  (l_cmeIndex >> 1), (l_cmeIndex % 2)), ~BIT64(5));

#if (NIMBUS_DD_LEVEL < 21 || CUMULUS_DD_LEVEL == 10) || DISABLE_STOP8 == 1

                    if(l_dataReg & BIT64(CME_FLAGS_RCLK_OPERABLE))
                    {
                        // Set the EXCGCR to point to QACCR for L2 Resonance
                        uint64_t excgcr;
                        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_EXCGCR, (l_cmeIndex / 2)), excgcr);
                        // EX0: bits 38,40; EX1: bits 39,41
                        excgcr |= BIT64(38 + (l_cmeIndex % 2)) | BIT64(40 + (l_cmeIndex % 2));
                        PK_TRACE("Setting EXCGCR[ex=%d] to point to QACCR", l_cmeIndex);
                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_EXCGCR, (l_cmeIndex / 2)), excgcr);
                    }

                    // #else RE-ENABLE STOP8 on DD22
#endif

                    l_cmeRdyCnt++;
                    cmeReadyList = cmeReadyList | l_cmeActiveBit;
                }//end for

                PPE_WAIT_CORE_CYCLES(256);
            } // while l_cmeRdyCnt != activeCmeCnt
        } //if all CME kicked off
    }
    while(0);

    return l_retCode;
}
