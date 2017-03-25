/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_copy_scan_ring.c $ */
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



#include "p9_cme_copy_scan_ring.h"
#include "p9_cme_stop.h"

/// @brief local constants.
enum
{
    SPR_NUM_PIR             =   286,
    CME_INST_ID_MASK        =   0x0000001E,
    COPY_DEF_CME_ADDR       =   0x00000000,
    CME_PAGE_RD_SIZE        =   0x20,
    CME_FLAG_EX_ID_BIT      =   26,
    EX_ID_SHIFT_POS         =   5
};



#if TEST_ONLY_BCE_IRR
extern BceIrritator G_bce_irr;

#define RAND32_ALL 0
uint32_t _seed32 = 405405405;

uint32_t
_rand32(uint32_t* seed, uint32_t limit)
{
    uint64_t x;

    *seed = (*seed * 1664525) + 1013904223;

    if (limit == RAND32_ALL)
    {
        return *seed;
    }
    else
    {
        x = (uint64_t)(*seed) * limit;
        return x >> 32;
    }
}

uint32_t
rand32(uint32_t limit)
{
    return _rand32(&_seed32, limit);
}

void bce_irr_setup()
{
    BceReturnCode_t l_rc;
    uint32_t l_cmePir = 0;
    uint32_t l_exId   = (in32(CME_LCL_FLAGS) & BIT32(26)) >> SHIFT32(26);
    asm volatile ( "mfspr %0, %1 \n\t" : "=r" (l_cmePir) : "i" (SPR_NUM_PIR));

    //CME's PIR gives only quad id. To determine the correct CME instance, follow the steps below:
    //(1). Read CME PIR's CME instance bit field (bit 27 -bit 31)
    //(2). Bitwise shift left by one bit position.
    //(3). OR to LSB of CME PIR (bit 31), bit 26 of CME Flag Register
    G_bce_irr.cmeid = (((l_cmePir << 1) & CME_INST_ID_MASK) | l_exId); // get CME instance number
    G_bce_irr.mbase = CPMR_DEBUG_REGION_OFFSET + (G_bce_irr.cmeid << 3); //8B for each CME
    G_bce_irr.sbase = 0xFFFFFFF0; // use 8B at the end of CME SRAM

    startCmeBlockCopy(G_bce_irr.sbase, 1, G_bce_irr.cmeid, BAR_INDEX_1, G_bce_irr.mbase);

    while(1)
    {
        l_rc = checkCmeBlockCopyStatus( G_bce_irr.cmeid );

        if( BLOCK_COPY_SUCCESS == l_rc )
        {
            break;
        }

        if( BLOCK_COPY_FAILED == l_rc )
        {
            PK_TRACE( "failed to read bce irritator data on cme %d",
                      G_bce_irr.cmeid );
            pk_halt();
        }
    }

    G_bce_irr.data.word = in32(G_bce_irr.sbase);
    G_bce_irr.data.word++;
    out32(G_bce_irr.sbase, G_bce_irr.data.word);

    startCmeBlockCopyWriteHomer(G_bce_irr.sbase, 4, G_bce_irr.cmeid, BAR_INDEX_1, G_bce_irr.mbase);

    while(1)
    {
        l_rc = checkCmeBlockCopyStatus( G_bce_irr.cmeid );

        if( BLOCK_COPY_SUCCESS == l_rc )
        {
            break;
        }

        if( BLOCK_COPY_FAILED == l_rc )
        {
            PK_TRACE( "failed to write bce irritator data on cme %d",
                      G_bce_irr.cmeid );
            pk_halt();
        }
    }
}

void bce_irr_run()
{
    BceReturnCode_t l_rc;
    uint32_t l_data32 = 0;

    if (rand32(1000) > 500)
    {
        return;
    }

    while(1)
    {
        l_rc = checkCmeBlockCopyStatus( G_bce_irr.cmeid );

        if( BLOCK_COPY_SUCCESS == l_rc )
        {
            break;
        }

        if( BLOCK_COPY_FAILED == l_rc )
        {
            PK_TRACE( "failed to read bce irritator data on cme %d",
                      G_bce_irr.cmeid );
            pk_halt();
        }
    }

    startCmeBlockCopy(G_bce_irr.sbase, 1, G_bce_irr.cmeid, BAR_INDEX_1, G_bce_irr.mbase);

    while(1)
    {
        l_rc = checkCmeBlockCopyStatus( G_bce_irr.cmeid );

        if( BLOCK_COPY_SUCCESS == l_rc )
        {
            break;
        }

        if( BLOCK_COPY_FAILED == l_rc )
        {
            PK_TRACE( "failed to read bce irritator data on cme %d",
                      G_bce_irr.cmeid );
            pk_halt();
        }
    }

    l_data32 = in32(G_bce_irr.sbase);

    if (l_data32 != G_bce_irr.data.word)
    {
        PKTRACE("miscompare between bce irr read[%x] and cme shadow copy[%x]",
                l_data32, G_bce_irr.data.word);
        pk_halt();
    }

    G_bce_irr.data.word++;
    out32(G_bce_irr.sbase, G_bce_irr.data.word);

    while(1)
    {
        l_rc = checkCmeBlockCopyStatus( G_bce_irr.cmeid );

        if( BLOCK_COPY_SUCCESS == l_rc )
        {
            break;
        }

        if( BLOCK_COPY_FAILED == l_rc )
        {
            PK_TRACE( "failed to write bce irritator data on cme %d",
                      G_bce_irr.cmeid );
            pk_halt();
        }
    }

    startCmeBlockCopyWriteHomer(G_bce_irr.sbase, 4, G_bce_irr.cmeid, BAR_INDEX_1, G_bce_irr.mbase);

    while(1)
    {
        l_rc = checkCmeBlockCopyStatus( G_bce_irr.cmeid );

        if( BLOCK_COPY_SUCCESS == l_rc )
        {
            break;
        }

        if( BLOCK_COPY_FAILED == l_rc )
        {
            PK_TRACE( "failed to write bce irritator data on cme %d",
                      G_bce_irr.cmeid );
            pk_halt();
        }
    }
}

void bce_irr_thread(void* args)
{
    while(1)
    {
        wrteei(0);
        bce_irr_run();
        wrteei(1);
    }
}

#endif



void instance_scan_init( )
{
    uint32_t     l_cmePir   = 0;
    uint32_t     l_bcLength = 0;
    cmeHeader_t* pCmeImgHdr = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);

    //Setting Mbase with start address of CME Inst rings in HOMER
    uint32_t     l_bceMbase = CME_IMAGE_CPMR_OFFSET + (pCmeImgHdr->g_cme_core_spec_ring_offset << 5);
    uint32_t     l_exId     = ((in32(CME_LCL_FLAGS) & BITS32(CME_FLAG_EX_ID_BIT, 1)) >> EX_ID_SHIFT_POS);

    asm volatile ( "mfspr %0, %1 \n\t" : "=r" (l_cmePir) : "i" (SPR_NUM_PIR));

    //CME's PIR gives only quad id. To determine the correct CME instance, follow the steps below:
    //(1). Read CME PIR's CME instance bit field (bit 27 -bit 31)
    //(2). Bitwise shift left by one bit position.
    //(3). OR to LSB of CME PIR (bit 31), bit 26 of CME Flag Register
    l_cmePir = (((l_cmePir << 1) & CME_INST_ID_MASK) | l_exId); // get CME instance number

    //calculate start address of block copy and length of block copy
    l_bcLength = pCmeImgHdr->g_cme_max_spec_ring_length; // integral multiple of 32.

    //let us find out HOMER address where core specific scan rings reside.
    l_bceMbase = l_bceMbase + (( l_cmePir * l_bcLength ) << 5 );
    l_bceMbase = (l_bceMbase >> 5 );

    // calculate the CME SRAM destination block number(SBASE)
    // Offset below is wrt start of CME's SRAM. It is an integral
    // multiple of 32 and is populated by Hcode Image build while
    // building HOMER.
    uint32_t cmeSbase = pCmeImgHdr->g_cme_core_spec_ring_offset;

    PK_TRACE( "Start second block copy MBASE 0x%08x SBSE 0x%08x Len 0x%08x  CME Ist %d",
              l_bceMbase, cmeSbase, l_bcLength, l_cmePir );

    startCmeBlockCopy( cmeSbase, l_bcLength, l_cmePir, BAR_INDEX_1, l_bceMbase );

    PK_TRACE("Done startCmeBlockCopy(instance_scan_init).");
}


BceReturnCode_t isScanRingCopyDone( )
{
    BceReturnCode_t l_rc;
    uint32_t        l_cmePir = 0;
    uint32_t        l_exId   = ((in32(CME_LCL_FLAGS) & BITS32(CME_FLAG_EX_ID_BIT, 1)) >> EX_ID_SHIFT_POS);

    asm volatile ( "mfspr %0, %1 \n\t" : "=r" (l_cmePir) : "i" (SPR_NUM_PIR));

    //CME's PIR gives only quad id. To determine the correct CME instance, follow the steps below:
    //(1). Read CME PIR's CME instance bit field (bit 27 -bit 31)
    //(2). Bitwise shift left by one bit position.
    //(3). OR to LSB of CME PIR (bit 31), bit 26 of CME Flag Register
    l_cmePir = ((( l_cmePir << 1 ) & CME_INST_ID_MASK) | l_exId); // get CME instance number

    while(1)
    {
        l_rc = checkCmeBlockCopyStatus(l_cmePir);

        if(BLOCK_COPY_SUCCESS == l_rc)
        {
            break;
        }

        if(BLOCK_COPY_FAILED == l_rc)
        {
            PK_TRACE("failed to copy instance specific scan ring on cme %d",
                     l_cmePir);
            break;
        }
    }

    return l_rc;
}
