/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_gptr_time_initf.C $ */
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
///
/// @file  p9_hcd_cache_gptr_time_init.C
/// @brief Load gptr and time ring for EX non-core
///
/// Procedure Summary:
///   Load cache ring images from MVPD
///   These rings must contain ALL chip customization data.
///   This includes the following:  Repair Power headers, and DTS
///   Historically this was stored in MVPD keywords are #R, #G. Still stored in
///     MVPD, but SBE image is customized with rings for booting cores

// *HWP HWP Owner          : David Du       <daviddu@us.ibm.com>
// *HWP Backup HWP Owner   : Greg Still     <stillgs@us.ibm.com>
// *HWP FW Owner           : Sangeetha T S  <sangeet2@in.ibm.com>
// *HWP Team               : PM
// *HWP Consumed by        : SBE:SGPE
// *HWP Level              : 2

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"
#include "hw_access.H"
#include "p9_ringid_sgpe.H"
#include <fapi2.H>


//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Procedure: Load Repair ring for cache
//------------------------------------------------------------------------------


extern "C" void p9_hcd_cache_gptr_time_initf(uint32_t quad)
{
    FAPI_INF(">>p9_hcd_cache_gptr_time_initf");
    fapi2::Target<fapi2::TARGET_TYPE_EQ> l_eqTarget
    (
        fapi2::plat_getTargetHandleByChipletNumber((uint8_t)quad + EQ_CHIPLET_OFFSET)
    );

    auto l_ex_targets = l_eqTarget.getChildren<fapi2::TARGET_TYPE_EX>();

    FAPI_DBG("Scan eq_gptr ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget, eq_gptr));

    FAPI_DBG("Scan eq_time ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget, eq_time));

    for (auto l_ex : l_ex_targets)
    {
        FAPI_DBG("Scan ex_l3_gptr ring");
        FAPI_TRY(fapi2::putRing(l_ex, ex_l3_gptr));

        FAPI_DBG("Scan ex_l2_gptr ring");
        FAPI_TRY(fapi2::putRing(l_ex, ex_l2_gptr));

        FAPI_DBG("Scan ex_l3_refr_gptr ring");
        FAPI_TRY(fapi2::putRing(l_ex, ex_l3_refr_gptr));

        FAPI_DBG("Scan ex_l3_time ring");
        FAPI_TRY(fapi2::putRing(l_ex, ex_l3_time));

        FAPI_DBG("Scan ex_l2_time ring");
        FAPI_TRY(fapi2::putRing(l_ex, ex_l2_time));

        FAPI_DBG("Scan ex_l3_refr_time ring");
        FAPI_TRY(fapi2::putRing(l_ex, ex_l3_refr_time));
    }

    FAPI_DBG("Scan eq_dpll_gptr ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget, eq_dpll_gptr));

    FAPI_DBG("Scan eq_ana_gptr ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_gptr));

fapi_try_exit:

    FAPI_INF("<<9_hcd_cache_gptr_time_init");
}
