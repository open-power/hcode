/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_scomcust.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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

#include "p9_sgpe_stop_exit_marks.h"

inline __attribute__((always_inline))
void
p9_hcd_cache_scomcust(uint32_t quad, uint32_t m_ex, int is_stop8)
{
    data64_t            scom_data    = {0};

#if !SKIP_HOMER_ACCESS

    int                 i            = 0;
    uint32_t            qoffset      = 0;
    uint32_t            qaddr        = 0;
    uint64_t            qdata        = 0;
    uint32_t            rid          = 0;
    uint16_t            scom_rest_size  = 0;
    uint16_t            scom_rest_len   = 0;

    // To access memory, need to set MSB of homer address
    QpmrHeaderLayout_t* pQpmrHdrAddr =  (QpmrHeaderLayout_t*)(HOMER_QPMR_HEADER_ADDR);
    ScomEntry_t* pSgpeScomRes        =  ( ScomEntry_t*) ( pQpmrHdrAddr->quadScomOffset + (uint32_t)pQpmrHdrAddr );
    scom_rest_size                   =  pQpmrHdrAddr->maxQuadScomRestoreEntry;
    scom_rest_size++;
    scom_rest_size                   =  (scom_rest_size * sizeof(ScomEntry_t));
    scom_rest_len                    =  ( pQpmrHdrAddr->quadScomLength / (sizeof( ScomEntry_t )) );

    if( !pQpmrHdrAddr->maxQuadScomRestoreEntry )
    {
        //We failed to get max entries supported from header.
        //Let us try to determine it from SCOM Restore entry
        //This also maintains backward compatibility.

        for( i = 0; i < scom_rest_len; i++ )
        {
            if( SCOM_ENTRY_MARK == pSgpeScomRes->scomEntryHeader.scomRestHeaderValue )
            {
                scom_rest_size  =  SCOM_REST_SIZE_PER_EQ;
                break;
            }
            else if ( pSgpeScomRes->scomEntryHeader.scomRestHeaderValue )
            {
                scom_rest_size =
                    ( pSgpeScomRes->scomEntryHeader.scomRestHeader.entryLimit + 1 ) *  sizeof( ScomEntry_t );
                break;
            }
            else
            {
                pSgpeScomRes++;
                continue;
            }
        }
    }

    for(i = 0; i < quad; i++)
    {
        qoffset += scom_rest_size;
    }

    pSgpeScomRes = (ScomEntry_t*)(pQpmrHdrAddr->quadScomOffset + (uint32_t)pQpmrHdrAddr + qoffset);

    for(i = 0; pSgpeScomRes->scomEntryAddress; i++, pSgpeScomRes++)
    {
        qaddr = pSgpeScomRes->scomEntryAddress;

        if( SCOM_REST_SKIP_CODE == qaddr )
        {
            //Found a NOP entry in middle, need to skip it, continue with
            //rest of entries
            continue;
        }

        // Ring ID:    scom_addr[16:21]
        // PSCOM       000000
        // PERV        000001
        // L2    (0,1) 000010 000011
        // NCU   (0,1) 000100 000101
        // L3    (0,1) 000110 000111
        // CME   (0,1) 001000 001001
        // L2_TRA(0,1) 001010 001011
        rid   = (qaddr & BITS32(18, 4)) >> SHIFT32(21);
        PK_TRACE("scom[%d] addr[%x] rid[%X]", i, qaddr, rid);

        // STOP11: Partial bad ex and l2 address detection
        // First had to be an EX address not quad address to check for partial bad
        // then skip all l2 addresses for stop11, leave it stop8 portion
        // if ex0 is partial bad and bit21 is 0, skip this address
        // if ex1 is partial bad and bit21 is 1, skip this address
        if ((!is_stop8) && (rid & 0xE) &&
            ((rid <= 0x3) || (rid >= 0xA) ||
             (((~m_ex) & FST_EX_IN_QUAD) && ((~rid) & 0x1)) ||
             (((~m_ex) & SND_EX_IN_QUAD) && (( rid) & 0x1))))
        {
            continue;
        }

        // STOP8: exiting l2 address detection
        // if l20 exiting and rid != l20, skip this address
        // if l21 exiting and rid != l21, skip this address
        if (is_stop8 &&
            (!((m_ex & FST_EX_IN_QUAD) && ((rid == 0x2) || (rid == 0xA)))) &&
            (!((m_ex & SND_EX_IN_QUAD) && ((rid == 0x3) || (rid == 0xB)))))
        {
            continue;
        }

        qdata = pSgpeScomRes->scomEntryData;
        PK_TRACE("scom[%d] addr[%x] data[%016llx]", i, qaddr, qdata);
        GPE_PUTSCOM(qaddr, qdata);
    }

#endif

    if (is_stop8)
    {
        PK_TRACE("Drop L2 snoop disable and TLBIE quiesce");

        if (m_ex & FST_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, quad, 0), 0);
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_CLR, quad, 0), BIT64(21));
        }

        if (m_ex & SND_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, quad, 1), 0);
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_CLR, quad, 1), BIT64(21));
        }
    }
    else
    {
        PK_TRACE("Drop refresh quiesce and LCO disable");

        if (m_ex & FST_EX_IN_QUAD)
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 0), scom_data.value);
            scom_data.words.upper &= ~BIT32(7);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 0), scom_data.value);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG, quad, 0), 0);
        }

        if (m_ex & SND_EX_IN_QUAD)
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 1), scom_data.value);
            scom_data.words.upper &= ~BIT32(7);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 1), scom_data.value);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG, quad, 1), 0);
        }

        PK_TRACE("Drop chiplet fence via NET_CTRL0[18]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(18));

#if !EPM_P9_TUNING

        PK_TRACE("Check Global Xstop FIR of Cache Chiplet After Scom Restore");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_XFIR, quad), scom_data.value);

        if (scom_data.words.upper & BITS32(0, 27))
        {
            PK_TRACE_ERR("Cache[%d] Chiplet Global Xstop FIR[%x] Detected After Scom Restore. HALT SGPE!",
                         quad, scom_data.words.upper);
            SGPE_STOP_QUAD_ERROR_HANDLER(quad, SGPE_STOP_EXIT_SCOM_RES_XSTOP_ERROR);
            return;
        }

#endif

    }
}
