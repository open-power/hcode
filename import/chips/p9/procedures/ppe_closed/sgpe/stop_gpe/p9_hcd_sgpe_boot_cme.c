/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_sgpe_boot_cme.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

/**
 * @brief   Summarizes all constants associated with CME boot firmware.
 */
enum
{
    ZERO                        =   0,
    MAX_CME_PER_CHIP            =   MAX_EXES,
    CHECK_BIT                   =   0x8000, // input vector is big endian
    SCOM_ADDR_CME_FLAGS         =   0x10012020,
    CPMR_POSITION               =   0x00200000,
    CME_IMG_HDR_OFFSET_POS      =   0x20,
    CME_HCODE_LEN_POS           =   0x24,
    CME_FLAG_SHIFT_POS          =   0x1E,
    SCOM_ADDR_CME_XCR           =   0x10012030,
    RESUME_PPE_OPERATION        =   0x2000000000000000ll,   // Resume PPE
    HARD_RESET_PPE              =   0x6000000000000000ll,   // Hard Reset PPE
    SBASE_FIRST_BLOCK_COPY      =   0,  // corresponds to address 0xFFFF8000
    INACTIVE_CORE               =   0x00,
    EVEN_CORE_ACTIVE            =   0x01,
    ODD_CORE_ACTIVE             =   0x02,
    BOTH_CORE_ACTIVE            =   0x03,
    BCEBAR0                     =   0,
    BCEBAR1                     =   1,
    SCOM_ADDR_CCSR              =   0x0006C090,
    CHECK_BIT_DWORD             =   0x8000000000000000ll,
    SET_ADDR_MSB                =   0x80000000,
    CME_STOP_READY              =   0x80000000,
    SCOM_ADDR_CORE_CPMMR_CLR    =   0x2E0F0107,
    WKUP_NOTIFY_SELECT          =   0x00040000,
    CME_BOOT_TIMEOUT            =   0x32,
    CME_BCE_TIMEOUT             =   0x32,
    WRITE_CLR_ALL               =   0xFFFFFFFFF,
    SCOM_ADDR_CME_FWMODE_CLR    =   0x1001201B,
    SCOM_ADDR_CME_FWMODE_OR     =   0x1001201C,
    BCESCR_OVERRIDE_ENABLE      =   0x10000000,
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
        int rc = 0;
        uint64_t l_dataReg = 0;
        uint64_t l_dataCCSR = 0;
        PPE_GETSCOM(SCOM_ADDR_CCSR, l_dataCCSR);

        uint8_t l_corePos = 0;
        uint8_t l_cmeIndex = 0;
        uint8_t activeCmeList[MAX_CME_PER_CHIP] = {ZERO};
        uint8_t activeCmeCnt = 0;
        uint8_t cmeInitSuccessCnt = 0;
        uint8_t quadId = 0;
        uint32_t l_scomAddr = 0;

        for( l_cmeIndex = 0; l_cmeIndex < MAX_CME_PER_CHIP; l_cmeIndex++ )
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

            if( ZERO == coreCnt )
            {
                // No core within EX is active. SGPE can skip this CME. Booting this CME achieves nothing.
                PK_TRACE("Both core in Ex is bad - escaping CME %d", l_cmeIndex);
                continue;
            }

            // Update CME state to Flag register
            quadId = l_cmeIndex >> 1;
            activeCmeList[l_cmeIndex] = coreCnt;
            l_scomAddr = SGPE_SCOM_ADDR( SCOM_ADDR_CME_FLAGS,
                                         quadId,
                                         l_cmeIndex );

            PPE_PUTSCOM( l_scomAddr, WRITE_CLR_ALL ); // clear all bits first.
            //Writing core status as found in CCSR
            l_dataReg = activeCmeList[l_cmeIndex];
            PPE_PUTSCOM( l_scomAddr, (l_dataReg << CME_FLAG_SHIFT_POS) )

            // core is available and CME can attempt to boot it.
            // From SGPE platform, let us first get control of Block copy engine.
            l_scomAddr = SGPE_SCOM_ADDR( SCOM_ADDR_CME_FWMODE_OR,
                                         quadId,
                                         l_cmeIndex );
            PPE_PUTSCOM( l_scomAddr, BCESCR_OVERRIDE_ENABLE ); //Disables BCE access via CME's Local register.

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
            PPE_GETSCOM(SCOM_ADDR_PBABAR0, l_cpmrAddr); // get start of HOMER for the chip.
            PK_TRACE("PBABAR0 Data 0x%016llx ", l_cpmrAddr );
            l_cpmrAddr += CPMR_POSITION; // offset to CPMR

            //Reading CPMR header to determine :
            //1. start of CME Image
            //2. Length of first block copy
            HomerImgDesc_t* pCpmrHdrAddr = (HomerImgDesc_t*)(CPMR_POSITION | SET_ADDR_MSB);   // Set MSB to point OCI to PBA
            uint32_t l_blockCopyLength = 0;

            // This offset must be multiple of 32B. This is to facilitate quick calculation of MBASE for BCE.
            // It is expected to be done during Hcode Image Build
            uint32_t l_hdrToSectionOffset = pCpmrHdrAddr->cmeImgOffset;  // Hcode Offset wrt CPMR Hdr start.

            l_blockCopyLength = pCpmrHdrAddr->cmeImgLength;             // CME Image length
            l_blockCopyLength += pCpmrHdrAddr->cmeCommonRingLength;     // adding common ring length
            l_blockCopyLength += pCpmrHdrAddr->cmePstateLength;         // adding Pstate region length
            PK_TRACE("Block Copy Length in bytes0x%08x Main Mem Hcode Addr 0x%016llx",
                     l_blockCopyLength, l_cpmrAddr );

            //rounding off length to CME's read block size i.e. 32 bytes
            l_blockCopyLength = ((l_blockCopyLength + (CME_BLOCK_READ_SIZE - 1 )) / CME_BLOCK_READ_SIZE);

            // update BCEBAR0 with start of CME hcode region
            // update BCEBAR1 with start of CME's instance specific ring region

            initCmeBceBarAddr( BCEBAR0, l_cpmrAddr, l_cmeIndex );

            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            // Step 3. Configure BCE for second block copy
            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            initCmeBceBarAddr( BCEBAR1, l_cpmrAddr , l_cmeIndex );

            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            // Step 4. Start Block Copy
            // -----------------------------------------------------------------
            // -----------------------------------------------------------------
            startCmeBlockCopy( SBASE_FIRST_BLOCK_COPY, l_blockCopyLength, l_cmeIndex,
                               PLAT_SGPE, 0, l_hdrToSectionOffset  );

            activeCmeCnt++;
        }

        l_retCode = BLOCK_COPY_SCOM_FAIL;

        if( 0 == activeCmeCnt )
        {
            PK_TRACE("Boot not initiated for any CME" );
            break;
        }

        uint32_t l_copyStatus = 0;
        uint8_t l_cmeWaitTime = 0;

        while( l_cmeWaitTime < CME_BCE_TIMEOUT )
        {
            // we have started first block copy for every functional CME. Let us check if block copy is done or not.
            for( l_cmeIndex = 0; l_cmeIndex < MAX_CME_PER_CHIP; l_cmeIndex++ )
            {
                // check if block copy was started on this CME.
                if( INACTIVE_CORE == activeCmeList[l_cmeIndex] )
                {
                    // block copy was not initiated on this. so skip this CME
                    continue;
                }

                l_copyStatus = checkCmeBlockCopyStatus( l_cmeIndex, PLAT_SGPE );

                if( BLOCK_COPY_IN_PROGRESS == l_copyStatus )
                {
                    // block copy on CME was started but it is still in progress
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
                quadId = (l_cmeIndex >> 1);

                // -----------------------------------------------------------------
                // -----------------------------------------------------------------
                // Step 5. Configure BCE for copy of Core SCOM Restore Area: -TODO
                // -----------------------------------------------------------------
                // -----------------------------------------------------------------

                // -----------------------------------------------------------------
                // -----------------------------------------------------------------
                // Step 6. SGPE Starts CME
                // -----------------------------------------------------------------
                // -----------------------------------------------------------------

                // SGPE now should release the control of block copy engine.
                // Once it kicks off CME, during its initialization, CME will try to block
                // copy its instance specific scan rings. For that to succeed, SGPE must clear
                // BCECSR_OVERRIDE_EN bit in CME_FWMODE register.
                l_scomAddr = SGPE_SCOM_ADDR( SCOM_ADDR_CME_FWMODE_CLR,
                                             quadId,
                                             l_cmeIndex );
                PPE_PUTSCOM( l_scomAddr, BCESCR_OVERRIDE_ENABLE ); // release control back to local CME BCECSR

                //Writing to CME's XCR to Hard Reset it
                l_scomAddr = SGPE_SCOM_ADDR(SCOM_ADDR_CME_XCR,
                                            quadId,
                                            l_cmeIndex );

                l_dataReg = HARD_RESET_PPE;
                PPE_PUTSCOM( l_scomAddr, l_dataReg );

                // Kick off CME by giving resume command through PPE External Control Register
                // Writing to XCR to resume PPE operation
                l_dataReg = RESUME_PPE_OPERATION;
                PPE_PUTSCOM( l_scomAddr, l_dataReg );
                cmeInitSuccessCnt++;
            }

            pk_sleep( PK_MILLISECONDS(2));
            l_cmeWaitTime++;
        }


        // -----------------------------------------------------------------
        // -----------------------------------------------------------------
        // Step 7, 8,9 is accomplished on CME platform
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
            l_cmeWaitTime = 0;

            while( l_cmeWaitTime < CME_BOOT_TIMEOUT )
            {
                // Need to check if all CME were able to complete booting
                quadId = 0;

                for( l_cmeIndex = 0; l_cmeIndex < MAX_CME_PER_CHIP; l_cmeIndex++ )
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

                    quadId = (l_cmeIndex >> 1);
                    l_scomAddr = SGPE_SCOM_ADDR( SCOM_ADDR_CME_FLAGS,
                                                 quadId,
                                                 l_cmeIndex );

                    PPE_GETSCOM( l_scomAddr, l_dataReg );

                    if( l_dataReg & CME_STOP_READY )
                    {
                        if( EVEN_CORE_ACTIVE == activeCmeList[l_cmeIndex] ||
                            BOTH_CORE_ACTIVE == activeCmeList[l_cmeIndex] )
                        {
                            //FIXME get scom address
                            //clear CPMMR[WKUP_NOTIFY_SELECT]
                            l_scomAddr = GPE_SCOM_ADDR_CORE( SCOM_ADDR_CORE_CPMMR_CLR, (l_cmeIndex << 1 ));
                            l_dataReg = WKUP_NOTIFY_SELECT;
                            PPE_PUTSCOM( l_scomAddr, l_dataReg );
                        }

                        if( ODD_CORE_ACTIVE == activeCmeList[l_cmeIndex] ||
                            BOTH_CORE_ACTIVE == activeCmeList[l_cmeIndex] )
                        {
                            //FIXME get scom address
                            //clear CPMMR[WKUP_NOTIFY_SELECT]
                            l_scomAddr = GPE_SCOM_ADDR_CORE( SCOM_ADDR_CORE_CPMMR_CLR, ((l_cmeIndex << 1) + 1 ));
                            l_dataReg = WKUP_NOTIFY_SELECT;
                            PPE_PUTSCOM( l_scomAddr, l_dataReg );
                        }

                        cmeReadyList = cmeReadyList | l_cmeActiveBit;
                    }
                }//end for

                pk_sleep( PK_MILLISECONDS(2));
                l_cmeWaitTime++;
            } // boot timeout
        } //if all CME kicked off
    }
    while(0);

    return l_retCode;
}
