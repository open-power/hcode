/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/wrapper/p9_hcd_core_wrapper_utils.C $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
/// @file p9_hcd_core_wrapper_utils.C
///
/// @author Joe McGill <jmcgill@us.ibm.com>
///


//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include <p9_hcd_core_wrapper_utils.H>


//------------------------------------------------------------------------------
// Function definitions
//------------------------------------------------------------------------------

fapi2::ReturnCode
run_wrapper_on_this_core(fapi2::Target<fapi2::TARGET_TYPE_CORE>& i_core_target, bool& o_run)
{
    FAPI_INF("Start");

    // target handles
    const fapi2::Target<fapi2::TARGET_TYPE_SYSTEM> FAPI_SYSTEM;
    fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP> l_parent_chip = i_core_target.getParent<fapi2::TARGET_TYPE_PROC_CHIP>();

    // target string for debug
    char l_targetStr[fapi2::MAX_ECMD_STRING_LEN];
    fapi2::toString(i_core_target, l_targetStr, fapi2::MAX_ECMD_STRING_LEN);

    // attribute values
    uint8_t l_ipl_phase;
    uint8_t l_force_all_cores;
    uint8_t l_is_master_chip;
    uint8_t l_master_core_pos;
    uint8_t l_this_core_pos = 0;

    // default flag state to false
    o_run = false;

    // true if:
    //   performing cache contained IPL OR
    //   override set to start all cores via attribute OR
    //   SBE master chip & master core
    FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_SYSTEM_IPL_PHASE, FAPI_SYSTEM, l_ipl_phase),
             "Error from FAPI_ATTR_GET (ATTR_SYSTEM_IPL_PHASE)");
    o_run = (l_ipl_phase == fapi2::ENUM_ATTR_SYSTEM_IPL_PHASE_CACHE_CONTAINED);

    if (!o_run)
    {
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_SYS_FORCE_ALL_CORES, FAPI_SYSTEM, l_force_all_cores),
                 "Error from FAPI_ATTR_GET (ATTR_SYS_FORCE_ALL_CORES)");
        o_run = (l_force_all_cores != 0);
    }

    if (!o_run)
    {
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_SBE_MASTER_CHIP, l_parent_chip, l_is_master_chip),
                 "Error from FAPI_ATTR_GET (ATTR_PROC_SBE_MASTER_CHIP)");

        if (l_is_master_chip)
        {
            FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_MASTER_CORE, l_parent_chip, l_master_core_pos),
                     "Error from FAPI_ATTR_GET (ATTR_MASTER_CORE)");
            FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_CHIP_UNIT_POS, i_core_target, l_this_core_pos),
                     "Error from FAPI_ATTR_GET (ATTR_POS)");
            o_run = (l_master_core_pos == l_this_core_pos);
        }
    }

    FAPI_DBG("Setting run: %d for target: %s", (o_run) ? (1) : (0), l_targetStr);

fapi_try_exit:
    FAPI_INF("End");
    return fapi2::current_err;
}
