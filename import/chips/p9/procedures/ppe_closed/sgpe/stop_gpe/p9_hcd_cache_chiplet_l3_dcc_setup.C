/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_chiplet_l3_dcc_setup.C $ */
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
//------------------------------------------------------------------------------
/// @file  p9_hcd_cache_chiplet_l3_dcc_setup.C
///
/// @brief Setup L3 DCC, Drop L3 DCC bypass
//------------------------------------------------------------------------------
// *HWP HW Owner        : Anusha Reddy Rangareddygari <anusrang@in.ibm.com>
// *HWP HW Backup Owner : Srinivas V Naga <srinivan@in.ibm.com>
// *HWP FW Owner        : Sunil Kumar <skumar8j@in.ibm.com>
// *HWP Team            : Perv
// *HWP Level           : 2
// *HWP Consumed by     : SBE
//------------------------------------------------------------------------------


#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"
#include "hw_access.H"
#include "p9_ringid_sgpe.H"
#include <fapi2.H>


extern "C" int p9_hcd_cache_chiplet_l3_dcc_setup(uint32_t quad)
{
    int rc = SGPE_STOP_SUCCESS;
    fapi2::Target<fapi2::TARGET_TYPE_EQ>           l_eqTarget
    (
        fapi2::plat_getTargetHandleByChipletNumber((uint8_t)quad + EQ_CHIPLET_OFFSET)
    );

    FAPI_DBG(">>p9_hcd_cache_chiplet_l3_dcc_setup");

    FAPI_DBG("Scan eq_ana_bndy_l3dcc_bucket_26 ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget,
                            eq_ana_bndy_l3dcc_bucket_26, fapi2::RING_MODE_SET_PULSE_NSL));

    FAPI_DBG("Drop L3 DCC bypass");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL1_WAND, quad), ~BIT64(1));

    FAPI_DBG("Check if VDMs are to be enabled. If so, power them on");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_VDMCR_OR, quad), BIT64(0));

fapi_try_exit:

    FAPI_DBG("<<p9_hcd_cache_chiplet_l3_dcc_setup");
    return rc;
}
