/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_dcc_skewadjust_setup.C $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
//------------------------------------------------------------------------------
/// @file  p9_hcd_cache_dcc_skewadjust_setup.C
///
/// @brief Drop DCCs reset and bypass, Drop skewadjust reset and bypass
//------------------------------------------------------------------------------
// *HWP HW Owner        : Anusha Reddy Rangareddygari <anusrang@in.ibm.com>
// *HWP HW Backup Owner : Srinivas V Naga <srinivan@in.ibm.com>
// *HWP FW Owner        : Sunil Kumar <skumar8j@in.ibm.com>
// *HWP Team            : Perv
// *HWP Level           : 2
// *HWP Consumed by     : SBE:SGPE
//------------------------------------------------------------------------------

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"
#include "hw_access.H"
#include "p9_ringid_sgpe.H"
#include <fapi2.H>



extern "C" void p9_hcd_cache_dcc_skewadjust_setup(uint32_t quad)
{
    FAPI_DBG(">>p9_hcd_cache_dcc_skewadjust_setup");

    fapi2::Target<fapi2::TARGET_TYPE_EQ>        l_eqTarget
    (
        fapi2::plat_getTargetHandleByChipletNumber((uint8_t)quad + EQ_CHIPLET_OFFSET)
    );

    sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

    if (!(pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_CACHE_DCADJ_DISABLE_BIT_POS))
    {
        FAPI_DBG("Release L2-0, L2-1 DC Adjust reset");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_NET_CTRL1_WAND, quad), ~BITS64(23, 2));

        ocb_ccsr_t ccsr;

        do
        {
            ccsr.value = in32(G_OCB_CCSR);
        }
        while (ccsr.fields.change_in_progress);

        for(int core = 0; core < CORES_PER_QUAD; core++)
        {
            if (ccsr.value & BIT32(((quad << 2) + core)))
            {
                FAPI_DBG("Release CORE DC Adjust reset");
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0_WAND, ((quad << 2) + core)), ~BIT64(2));
            }
        }

        FAPI_DBG("Scan eq_ana_bndy_bucket_0 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_0, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_1 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_1, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_2 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_2, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_3 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_3, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_4 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_4, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_5 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_5, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_6 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_6, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_7 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_7, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_8 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_8, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_9 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_9, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_10 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_10, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_11 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_11, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_12 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_12, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_13 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_13, fapi2::RING_MODE_SET_PULSE_NSL));

        FAPI_DBG("Release DCC bypass");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_NET_CTRL1_WAND, quad), ~BIT64(1));

        FAPI_DBG("Scan eq_ana_bndy_bucket_14 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_14, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_15 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_15, fapi2::RING_MODE_SET_PULSE_NSL));
    }

    if (!(pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_CACHE_SKEWADJ_DISABLE_BIT_POS))
    {
        PK_TRACE("Release skew adjust reset via NET_CTRL0[2]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(2));

        FAPI_DBG("Scan eq_ana_bndy_bucket_16 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_16, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_17 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_17, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_18 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_18, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_19 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_19, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_20 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_20, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_21 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_21, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_22 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_22, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_23 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_23, fapi2::RING_MODE_SET_PULSE_NSL));

#if NIMBUS_DD_LEVEL == 10

        FAPI_DBG("Release Progdly bypass");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_NET_CTRL1_WAND, quad), ~BIT64(2));

#endif

        FAPI_DBG("Scan eq_ana_bndy_bucket_24 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_24, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_25 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_25, fapi2::RING_MODE_SET_PULSE_NSL));

#if NIMBUS_DD_LEVEL != 10

        FAPI_DBG("Scan eq_ana_bndy_bucket_26 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_26, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_27 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_27, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_28 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_28, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_29 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_29, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_30 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_30, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_31 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_31, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_32 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_32, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_33 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_33, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_34 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_34, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_35 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_35, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_36 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_36, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_37 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_37, fapi2::RING_MODE_SET_PULSE_NSL));

        FAPI_DBG("Release Progdly bypass");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_NET_CTRL1_WAND, quad), ~BIT64(2));

        FAPI_DBG("Scan eq_ana_bndy_bucket_38 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_38, fapi2::RING_MODE_SET_PULSE_NSL));
        FAPI_DBG("Scan eq_ana_bndy_bucket_39 ring");
        FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_bndy_bucket_39, fapi2::RING_MODE_SET_PULSE_NSL));

#endif

    }

fapi_try_exit:

    FAPI_DBG("<<p9_hcd_cache_dcc_skewadjust_setup");
}
