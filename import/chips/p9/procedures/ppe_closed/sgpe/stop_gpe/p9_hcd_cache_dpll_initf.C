/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_dpll_initf.C $ */
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
#include "hw_access.H"
#include "p9_ringid_sgpe.H"
#include <fapi2.H>

extern "C" void p9_hcd_cache_dpll_initf(uint32_t quad)
{
    fapi2::Target<fapi2::TARGET_TYPE_EQ> l_eqTarget
    (
        fapi2::plat_getTargetHandleByChipletNumber((uint8_t)quad + EQ_CHIPLET_OFFSET)
    );

    FAPI_INF(">>p9_hcd_cache_dpll_initf");

    FAPI_DBG("Scan eq_dpll_func ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget, eq_dpll_func));

    FAPI_DBG("Scan eq_ana_func ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget, eq_ana_func));

    // Markers needed for cache ininf
fapi_try_exit:
    FAPI_INF("<<p9_hcd_cache_dpll_initf");
}
