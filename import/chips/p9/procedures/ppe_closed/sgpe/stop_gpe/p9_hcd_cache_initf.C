/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_initf.C $ */
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

extern "C" int p9_hcd_cache_initf(uint32_t quad)
{
    int rc = SGPE_STOP_SUCCESS;
    fapi2::Target<fapi2::TARGET_TYPE_EQ> l_eqTarget
    (
        fapi2::plat_getTargetHandleByChipletNumber((uint8_t)quad + EQ_CHIPLET_OFFSET)
    );

    FAPI_DBG("Scanning Cache FUNC Rings");
    FAPI_INF(">>p9_hcd_cache_initf");

    FAPI_DBG("Scan eq_fure ring");
    FAPI_TRY(fapi2::putRing(l_eqTarget, eq_fure));

    for (auto l_ex_target : l_eqTarget.getChildren<fapi2::TARGET_TYPE_EX>())
    {
        FAPI_DBG("Scan ex_l2_fure ring");
        FAPI_TRY(fapi2::putRing(l_ex_target, ex_l2_fure));
        FAPI_DBG("Scan ex_l2_mode ring");
        FAPI_TRY(fapi2::putRing(l_ex_target, ex_l2_mode));
        FAPI_DBG("Scan ex_l3_fure ring");
        FAPI_TRY(fapi2::putRing(l_ex_target, ex_l3_fure));
        FAPI_DBG("Scan ex_l3_refr_fure ring");
        FAPI_TRY(fapi2::putRing(l_ex_target, ex_l3_refr_fure));
    }

    // Markers needed for cache ininf
fapi_try_exit:
    FAPI_INF("<<p9_hcd_cache_initf");

    return rc;
}
