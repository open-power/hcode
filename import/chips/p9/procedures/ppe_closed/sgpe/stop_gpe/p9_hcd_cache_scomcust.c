/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_scomcust.c $ */
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
#include "p9_sgpe_stop_exit_marks.h"
#include "p9_hcode_image_defines.H"

int
p9_hcd_cache_scomcust(uint32_t quad, uint32_t m_ex, int is_stop8)
{
    int rc = SGPE_STOP_SUCCESS;

#if !SKIP_HOMER_ACCESS

    int i;
    uint32_t qoffset = 0;
    uint32_t qaddr   = 0;
    uint64_t qdata   = 0;
    uint32_t rid     = 0;

    // doing this instead of multiply since there is no multiply instruction with ppe.
    for(i = 0; i < quad; i++)
    {
        qoffset += 0x300;
    }

    // To access memory, need to set MSB of homer address
    QpmrHeaderLayout_t* pQpmrHdrAddr = (QpmrHeaderLayout_t*)(QPMR_BASE_HOMER_OFFSET | BIT32(0));
    SgpeScomRestore*    pSgpeScomRes = (SgpeScomRestore*)(pQpmrHdrAddr->quadScomOffset +
                                       (uint32_t)pQpmrHdrAddr + qoffset);

    for(i = 0; pSgpeScomRes->pad; i++, pSgpeScomRes++)
    {
        qaddr = pSgpeScomRes->addr;

        // Ring ID:    scom_addr[16:21]
        // PSCOM       000000
        // PERV        000001
        // L2    (0,1) 000010 000011
        // NCU   (0,1) 000100 000101
        // L3    (0,1) 000110 000111
        // CME   (0,1) 001000 001001
        // L2_TRA(0,1) 001010 001011
        rid   = (qaddr & BITS32(18, 4)) >> SHIFT32(21);

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

        qdata = pSgpeScomRes->data;
        PK_TRACE("scom[%d] addr[%x] data[%016llx]", i, qaddr, qdata);
        GPE_PUTSCOM(qaddr, qdata);
    }

#endif

    if (!is_stop8)
    {
        PK_TRACE("Drop chiplet fence via NET_CTRL0[18]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(18));
    }

    return rc;
}
