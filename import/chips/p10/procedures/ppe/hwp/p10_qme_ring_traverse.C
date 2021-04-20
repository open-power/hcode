/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwp/p10_qme_ring_traverse.C $ */
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

/// @file   p10_qme_ring_traverse.C
/// @brief  Implements QME TOR traversal logic
///
// *HWP HW Owner:       Greg Still  <stillgs@us.ibm.com>
// *HWP FW Owner:       Prem S Jha  <premjha2@in.ibm.com>
// *HWP Team:           PM
// *HWP Level:          2
// *HWP Consumed by:    QME
// *INDENT-OFF*

#include "qme.h"
#include <p10_qme_ring_traverse.H>
#include <p10_ipl_image.H>
#include <p10_scan_compression.H>
#include <p10_ringId.H>
#include <p10_tor.H>
#include <fapi2.H>
#include <iota_lnk_cfg.h>
#include "errl.h"
#include "errlutil.h"

extern QmeRecord  G_qme_record;

enum
{
    QME_INT_VECTOR  =   0x180,
};

//-----------------------------------------------------------------------------------------------------------------

TorOffset_t * traverseRingOverride( uint8_t* i_pRingSectn, const RingId_t i_index, uint8_t i_torIndex )
{
    ChipletType_t l_chipletType =   RING_PROPERTIES[i_index].chipletType;
    SectionTOR* l_pSectnTor     =   (SectionTOR*) ( i_pRingSectn + sizeof( TorHeader_t ) );
    TorOffset_t* l_pRingTor     =   NULL;
    TorOffset_t  l_sectionOffset =  0;

    switch( l_chipletType )
    {
        case EQ_TYPE: // EQ - Quad 0 - Quad 7
            l_sectionOffset     =   rev_16(l_pSectnTor->TOC_EQ_COMMON_RING);
            break;

        default:
            fapi2::current_err  =   fapi2::RC_PUTRING_INVALID_PARAMETER;
            goto func_exit;
            break;

    } // end of switch(l_chipletID)

    l_pRingTor      =   (TorOffset_t*) (i_pRingSectn + l_sectionOffset);

    l_pRingTor  +=  i_torIndex;

func_exit:
    FAPI_INF( "TOR Override Traversal: Chiplet 0x%04x Chiplet Offset 0x%04x Ring offset 0x%02x ",
              (uint16_t)l_chipletType, l_sectionOffset, i_torIndex );
    return l_pRingTor;

}

//-----------------------------------------------------------------------------------------------------------------

fapi2::ReturnCode getRS4ImageFromTor(
                    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
                    uint8_t* i_pRingSectn, // Pts to the beginning of the TOR ring section hdr
                    const RingId_t i_ringId,
                    QME_SCOM_CONTROLS i_scomOp,
                    const fapi2::RingMode i_ringMode )
{
    FAPI_INF( ">> getRS4ImageFromTor" );
    fapi2::ReturnCode   l_tmpRc;
    uint32_t l_torVersion       =   ((TorHeader_t*)i_pRingSectn)->version;
    TorOffset_t* l_pSectnTor    =   (TorOffset_t *)( i_pRingSectn + sizeof( TorHeader_t ) );
    uint16_t   l_torIndex       =   0;
    RingType_t l_ringType       =   COMMON_RING;
    RingId_t l_rpIndex          =   UNDEFINED_RING_ID;
    uint8_t l_corePos           =   0;
    ChipletData_t* l_pChipletData;
    TorOffset_t* l_pRingTor     =   NULL;
    std::vector < fapi2::Target < fapi2::TARGET_TYPE_CORE >> l_ucCoreTgt =
                                i_target.getChildren< fapi2::TARGET_TYPE_CORE > ();
    uint32_t l_magicWord        =   rev_32( ((TorHeader_t*)i_pRingSectn)->magic );

    FAPI_TRY( FAPI_ATTR_GET(fapi2::ATTR_CHIP_UNIT_POS, l_ucCoreTgt[0], l_corePos ) );

    FAPI_ASSERT( ((( l_torVersion == TOR_VERSION ) && ( l_magicWord == TOR_MAGIC_QME )) ||
                  ( l_magicWord == TOR_MAGIC_OVRD )),
                 fapi2::INVALID_TOR_VERSION()
                 .set_TOR_VER( l_torVersion ),
                 "Invalid TOR Version 0x%04x ", l_torVersion  );

    // Get the ring properties (rp) index
    l_rpIndex = ringid_convert_ringId_to_rpIndex(i_ringId);

    FAPI_ASSERT( ( l_rpIndex < NUM_RING_IDS ),
                 fapi2::INVALID_RING_ID()
                 .set_RING_ID( i_ringId ),
                 "ERROR: getRS4ImageFromTor: Invalid Ring Id 0x%04x", i_ringId );

    l_torIndex      =   ( INSTANCE_RING_MASK    &  ( RING_PROPERTIES[l_rpIndex].idxRing ) );
    l_ringType      =   ( INSTANCE_RING_MARK    &  ( RING_PROPERTIES[l_rpIndex].idxRing ) ) ?
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

    if( l_magicWord == TOR_MAGIC_OVRD )
    {
        l_pRingTor = traverseRingOverride( i_pRingSectn, l_rpIndex, l_torIndex );

        if( !l_pRingTor )
        {
            goto fapi_try_exit;
        }
    }

    FAPI_INF( "Ring TOR Slot Offset : 0x%04x TOR Offset : 0x%04x",
              rev_16(*l_pSectnTor), rev_16(*l_pRingTor) );

    if( *l_pRingTor )
    {
        uint8_t* l_pRs4  =  i_pRingSectn + rev_16(*l_pRingTor);

        //CompressedScanData* l_pRingHdr     =   (CompressedScanData*) l_pRs4;

        FAPI_INF( "Ring Id 0x%04x Type 0x%02x", rev_16(l_pRingHdr->iv_ringId), l_pRingHdr->iv_type );

        l_tmpRc = p10_putRingUtils( i_target,
                                    l_pRs4,
                                    i_scomOp,
                                    REGULAR,
                                    i_ringMode );

        if( l_tmpRc )
        {
            std::vector< fapi2::Target < fapi2::TARGET_TYPE_CORE >> l_coreList =
                    i_target.getChildren< fapi2::TARGET_TYPE_CORE > ();

            uint32_t l_reasonCode = 0;

            for( auto l_core : l_coreList )
            {
                FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_CHIP_UNIT_POS,
                                         l_core, l_corePos ) );

                l_tmpRc = p10_putRingUtils( l_core,
                                            l_pRs4,
                                            i_scomOp,
                                            REGULAR,
                                            i_ringMode );
                if( !l_tmpRc )
                {
                    continue;
                }

                switch( (uint32_t)l_tmpRc )
                {
                    case fapi2::RC_QME_PUTRING_PARALLEL_SCAN_ERR:
                        l_reasonCode = PUTRING_PARALLEL_SCAN_ERR;
                        break;

                    case fapi2::RC_QME_PUTRING_HEADER_ERR:
                        l_reasonCode = PUTRING_HEADER_ERR;
                        break;

                    case fapi2::RC_QME_PUTRING_BAD_STRING:
                        l_reasonCode = PUTRING_BAD_STRING;
                        break;

                    case fapi2::RC_QME_PUTRING_HEADER_MISMATCH:
                        l_reasonCode = PUTRING_HEADER_MISMATCH;
                        break;

                    case fapi2::RC_QME_PUTRING_BAD_NIBBLE_INDEX:
                        l_reasonCode = PUTRING_BAD_NIBBLE_INDEX;
                        break;

                        default:
                        l_reasonCode = PUTRING_UNKNOWN_ERR;
                        break;
                }

                PK_TRACE_INF( "Putring Failed on QME %02d Core %02d",
                               G_qme_record.quad_id, l_corePos );

                uint32_t errStatus = ERRL_STATUS_SUCCESS;

                PPE_LOG_ERR_CRITICAL ( l_reasonCode,
                                       QME_PUT_RING_FAIL,
                                       QME_MODULE_ID_QME_SCAN,
                                       l_tmpRc,
                                       l_corePos,
                                       i_ringId,
                                       NULL,
                                       NULL,
                                       errStatus );

                PK_TRACE_INF( "Scanning Error Log Status %d ", errStatus );


                G_qme_record.c_stop11_exit_targets &= ~( l_core.getCoreSelect() );
                G_qme_record.c_stop5_exit_targets &= ~( l_core.getCoreSelect() );
                G_qme_record.c_scan_failed |= l_core.getCoreSelect();
                G_qme_record.c_failed_ring[ l_corePos % MAX_CORES_PER_QUAD ] = i_ringId;

            }//for

        }//if( l_tmpRc )

    }//if( *l_pRingTor )

fapi_try_exit:
    FAPI_INF( "<< getRS4ImageFromTor" );
    return fapi2::current_err;
}

//-----------------------------------------------------------------------------------------------------------------

fapi2::ReturnCode putRingQme(
                    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
                    const RingId_t i_ringId , const fapi2::RingMode i_ringMode )

{
    if (G_IsSimics)
    {
        FAPI_INF ("putRingQme: NOP on SImics!!");
        return fapi2::FAPI2_RC_SUCCESS;
    }

    RingType_t l_ringType       =   COMMON_RING;
    uint8_t * l_pRing           =   (uint8_t *)SRAM_START;
    QmeHeader_t * l_pQmeHdr     =   (QmeHeader_t*)( l_pRing + QME_INT_VECTOR );
    RingId_t l_rpIndex          =   UNDEFINED_RING_ID;
    uint32_t l_cpmrOffset       =   0;
    uint32_t l_sramOffset       =   0;
    uint32_t l_bcLength         =   0;
    BCE_SCOPE l_bcScope         =   QME_COMMON;
    uint32_t l_tmpWord          =   0;

    // Get the ring properties (rp) index
    l_rpIndex = ringid_convert_ringId_to_rpIndex(i_ringId);

    FAPI_ASSERT( ( l_rpIndex < NUM_RING_IDS ),
                 fapi2::INVALID_RING_ID()
                 .set_RING_ID( i_ringId ),
                 "ERROR: putRingQme: Invalid Ring Id 0x%04x", i_ringId );

    l_ringType      =   ( INSTANCE_RING_MARK    &  ( RING_PROPERTIES[l_rpIndex].idxRing ) ) ?
                        INSTANCE_RING : COMMON_RING;

    if( COMMON_RING == l_ringType )
    {
        l_tmpWord       =   CMN_RING;
        l_pRing         =   l_pRing + rev_32(l_pQmeHdr->g_qme_hcode_length);
        l_cpmrOffset    =   QME_IMAGE_CPMR_OFFSET + rev_32(l_pQmeHdr->g_qme_common_ring_offset);
        l_bcLength      =   rev_32(l_pQmeHdr->g_qme_common_ring_length);
    }
    else
    {
        l_tmpWord       =   INST_RING;
        l_pRing         =   l_pRing + rev_32(l_pQmeHdr->g_qme_inst_spec_ring_offset);
        l_cpmrOffset    =   QME_IMAGE_CPMR_OFFSET + rev_32(l_pQmeHdr->g_qme_common_ring_offset) + rev_32(l_pQmeHdr->g_qme_common_ring_length);
        l_bcLength      =   rev_32(l_pQmeHdr->g_qme_max_spec_ring_length);
        l_bcScope       =   QME_SPECIFIC;
    }
    if( ( G_qme_record.bce_buf_content_type != l_tmpWord ) && ( G_qme_record.bce_buf_content_type != ALL ) )
    {
        PK_TRACE_INF( "CR Offset : 0x%08x BC Len 0x%08x", l_cpmrOffset, l_bcLength );
        //we don't have right binary in SRAM yet. We need to load it from
        //HOMER through BCE
        l_sramOffset    =   (rev_32(l_pQmeHdr->g_qme_common_ring_offset) >> 5);
        l_cpmrOffset    =   l_cpmrOffset >>5;
        l_bcLength      =   l_bcLength   >>5;
        qme_block_copy_start( QME_BCEBAR_1, l_cpmrOffset, l_sramOffset, l_bcLength, l_bcScope );

        if( BLOCK_COPY_SUCCESS != qme_block_copy_check() )
        {
            PK_TRACE_INF("ERROR: BCE Copy for ring type %02x Failed. HALT QME!", l_ringType );
            QME_ERROR_HANDLER(QME_STOP_BLOCK_COPY_SCAN_RING_FAILED, l_cpmrOffset, l_sramOffset, l_ringType );
        }

        G_qme_record.bce_buf_content_type  =  l_tmpWord;
    }

    FAPI_TRY( getRS4ImageFromTor( i_target, l_pRing, i_ringId, QME_SCOM_NOP, i_ringMode ),
              "Putring Failed for QME Ring 0x%04x", i_ringId );

    if( rev_32(l_pQmeHdr->g_qme_cmn_ring_ovrd_offset) )
    {
        l_pRing   =   (uint8_t *)SRAM_START + rev_32(l_pQmeHdr->g_qme_cmn_ring_ovrd_offset);

        FAPI_TRY( getRS4ImageFromTor( i_target, l_pRing, i_ringId, QME_SCOM_NOP, i_ringMode ),
                  "Putring Failed for QME Ring 0x%04x", i_ringId );
    }

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
    //uint32_t * l_pTorMagic   =  (uint32_t *)l_pRingPtr;

    FAPI_INF( "QME Image Hcode Length       :   0x%08x", rev_32(l_pQmeHdr->g_qme_hcode_length ));
    FAPI_INF( "QME Image TOR Magic Word     :   0x%08x", rev_32( *l_pTorMagic ));
    FAPI_TRY( getRS4ImageFromTor( i_target, l_pRingPtr, i_ringId,
                                  QME_SCOM_NOP, fapi2::RING_MODE_HEADER_CHECK ),
              "QME Ring Section Look Up Failed " );
fapi_try_exit:
    return fapi2::current_err;

}

//-----------------------------------------------------------------------------------------------------------------
