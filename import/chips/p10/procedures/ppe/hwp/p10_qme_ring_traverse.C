/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwp/p10_qme_ring_traverse.C $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

/// @file   p10_qme_ring_traverse.C
/// @brief  Implements QME TOR traversal logic
///
// *HWP HW Owner:       Greg Still  <stillgs@us.ibm.com>
// *HWP FW Owner:       Prem S Jha  <premjha2@in.ibm.com>
// *HWP Team:           PM
// *HWP Level:          2
// *HWP Consumed by:    QME
// *INDENT-OFF*

#include <p10_qme_ring_traverse.H>
#include <p10_ipl_image.H>
#include <p10_scan_compression.H>
#include <p10_ringId.H>
#include <p10_tor.H>
#include <fapi2.H>
#include <iota_lnk_cfg.h>

enum
{
    QME_INT_VECTOR  =   0x180,
};

//-----------------------------------------------------------------------------------------------------------------

fapi2::ReturnCode getRS4ImageFromTor(
                    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
                    uint8_t* i_pRingSectn, // Pts to the beginning of the TOR ring section hdr
                    const RingId_t i_ringId,
                    QME_SCOM_CONTROLS i_scomOp,
                    const fapi2::RingMode i_ringMode )
{
    FAPI_INF( ">> getRS4ImageFromTor" );
    uint32_t l_torVersion       =   ((TorHeader_t*)i_pRingSectn)->version;
    TorOffset_t* l_pSectnTor    =   (TorOffset_t *)( i_pRingSectn + sizeof( TorHeader_t ) );
    uint8_t   l_torIndex        =   0;
    RingType_t l_ringType       =   COMMON_RING;
    uint8_t l_corePos           =   0;
    ChipletData_t* l_pChipletData;
    TorOffset_t* l_pRingTor        =   NULL;
    rs4Type_t l_rs4Type         =   REGULAR;
    std::vector < fapi2::Target < fapi2::TARGET_TYPE_CORE >> l_ucCoreTgt =
                                i_target.getChildren< fapi2::TARGET_TYPE_CORE > ();

    FAPI_TRY( FAPI_ATTR_GET(fapi2::ATTR_CHIP_UNIT_POS, l_ucCoreTgt[0], l_corePos ) );

    FAPI_ASSERT( ( l_torVersion == TOR_VERSION ),
                 fapi2::INVALID_TOR_VERSION()
                 .set_TOR_VER( l_torVersion ),
                 "Invalid TOR Version 0x%04x ", l_torVersion  );

    FAPI_ASSERT( ( i_ringId < NUM_RING_IDS ),
                 fapi2::INVALID_RING_ID()
                 .set_RING_ID( i_ringId ),
                 "Invalid Ring Id 0x%04x", i_ringId );

    l_torIndex      =   ( INSTANCE_RING_MASK    &  ( RING_PROPERTIES[i_ringId].idxRing ) );
    l_ringType      =   ( INSTANCE_RING_MARK    &  ( RING_PROPERTIES[i_ringId].idxRing ) ) ?
                        INSTANCE_RING : COMMON_RING;

    l_pChipletData  =   (ChipletData_t*)&EQ::g_chipletData;

    if( INSTANCE_RING == l_ringType )
    {
        l_pSectnTor++;
    }

    l_pRingTor      =  (TorOffset_t *)( i_pRingSectn + rev_16( *l_pSectnTor ) );

    FAPI_INF( "TOR Traversal: Ring Id 0x%04x Sectn TOR 0x%08x Ring offset 0x%02x",
              i_ringId, rev_32(*((uint32_t*)i_pRingSectn)), l_torIndex );

    if( INSTANCE_RING == l_ringType )
    {
       // EQ Specific TOR   =
       // EQ Instance Base + Max Instance Rings Per EQ + pos of given ring in Inst Specific TOR .. (1)
       //
       // each ring slot in TOR takes 2bytes
       // So offset to given chiplet specific ring is
       // Offset = (1) * 2
       FAPI_INF( "Core Position 0x%04", l_corePos );
       l_pRingTor   +=   ( ( l_pChipletData->numInstanceRings * ( l_corePos >> 2 ) ) + l_torIndex );
    }
    else
    {
        l_pRingTor +=  l_torIndex;
    }

    FAPI_INF( "Ring TOR Slot Offset : 0x%04x TOR Offset : 0x%04x",
              rev_16(*l_pSectnTor), rev_16(*l_pRingTor) );

    if( *l_pRingTor )
    {
        uint8_t* l_pRs4  =  i_pRingSectn + rev_16(*l_pRingTor);
        CompressedScanData* l_pRingHdr     =   (CompressedScanData*) l_pRs4;

        FAPI_INF( "Ring Id 0x%04x Type 0x%02x", rev_16(l_pRingHdr->iv_ringId), l_pRingHdr->iv_type );

        if ( RS4_IV_TYPE_CMSK_CMSK  == ( l_pRingHdr->iv_type & RS4_IV_TYPE_CMSK_MASK ))
        {
            l_rs4Type   =   CMSK;
        }
        else if( RS4_IV_TYPE_CMSK_NON_CMSK == ( l_pRingHdr->iv_type & RS4_IV_TYPE_CMSK_MASK ))
        {
            l_rs4Type   =   REGULAR;
        }

        //TODO Need clarification on STUMP rings

        FAPI_TRY( p10_putRingUtils( i_target, l_pRs4, i_scomOp, l_rs4Type, i_ringMode ),
                  "QME Putring Failed For Ring 0x%04x",  i_ringId );
    }

fapi_try_exit:
    FAPI_INF( "<< getRS4ImageFromTor" );
    return fapi2::current_err;
}

//-----------------------------------------------------------------------------------------------------------------

fapi2::ReturnCode putRingQme(
                    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
                    const RingId_t i_ringId , const fapi2::RingMode i_ringMode )

{
    RingType_t l_ringType       =   COMMON_RING;
    uint8_t * i_pRing           =   (uint8_t *)SRAM_START;
    QmeHeader_t * l_pQmeHdr     =   (QmeHeader_t*)( i_pRing + QME_INT_VECTOR );
    l_ringType      =   ( INSTANCE_RING_MARK    &  ( RING_PROPERTIES[(uint8_t)i_ringId].idxRing ) ) ?
                        INSTANCE_RING : COMMON_RING;

    if( COMMON_RING == l_ringType )
    {
        i_pRing   =   i_pRing + rev_32(l_pQmeHdr->g_qme_hcode_length);
    }
    else
    {
        i_pRing   =   i_pRing + rev_32(l_pQmeHdr->g_qme_inst_spec_ring_offset);
    }

    FAPI_TRY( getRS4ImageFromTor( i_target, i_pRing, i_ringId, QME_SCOM_NOP, i_ringMode ),
              "Putring Failed for QME Ring 0x%04x", i_ringId );

fapi_try_exit:
    return fapi2::current_err;
}
//-----------------------------------------------------------------------------------------------------------------

fapi2::ReturnCode p10_qme_ring_traverse( uint8_t* i_pImgPtr,
                    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
                    const RingId_t i_ringId,
                    QME_SCOM_CONTROLS i_scomOp )

{
    QmeHeader_t* l_pQmeHdr   =  (QmeHeader_t*)( i_pImgPtr +  QME_INT_VECTOR );
    uint8_t* l_pRingPtr      =  i_pImgPtr + rev_32(l_pQmeHdr->g_qme_hcode_length);
    uint32_t * l_pTorMagic   =  (uint32_t *)l_pRingPtr;

    FAPI_INF( "QME Image Hcode Length       :   0x%08x", rev_32(l_pQmeHdr->g_qme_hcode_length ));
    FAPI_INF( "QME Image TOR Magic Word     :   0x%08x", rev_32( *l_pTorMagic ));
    FAPI_TRY( getRS4ImageFromTor( i_target, l_pRingPtr, i_ringId,
                                  QME_SCOM_NOP, fapi2::RING_MODE_HEADER_CHECK ),
              "QME Ring Section Look Up Failed " );
fapi_try_exit:
    return fapi2::current_err;

}

//-----------------------------------------------------------------------------------------------------------------
