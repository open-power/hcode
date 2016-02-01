/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_check_idle_stop_state.C $ */
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
///
/// @file  p9_check_stop_state.H
/// @brief Check if the targeted core is fully in the input STOP state
///
// *HWP HWP Owner   : Greg Still <stillgsg@us.ibm.com>
// *HWP FW Owner    : Sangeetha T S <sangeet2@in.ibm.com>
// *HWP Team        : PM
// *HWP Level       : 2
// *HWP Consumed by : SBE:CRO
///
/// High-level procedure flow:
/// @verbatim
///    - Read the STOP History Register from the target core
///    - Return SUCCESS if::
///        - STOP_GATED is set (indicating it is stopped)
///        - STOP_TRANSITION is clear (indicating it is stable)
///        - ACT_STOP_LEVEL is at the appropriate value (either 11 (0xB) or 15 (0x15)
///    - Return PENDING if
///        - STOP_TRANSITION is set (indicating transtion is progress)
///    - Return ERROR if
///        - STOP_GATED is set, STOP_TRANSITION is clear and ACT_STOP_LEVEL is not
///          appropriate
///        - STOP_TRANSITION is clear but STOP_GATED is clear
///        - Hardware access errors
/// @endverbatim

// -----------------------------------------------------------------------------
//  Includes
// -----------------------------------------------------------------------------
#include "p9_check_idle_stop_state.H"
#include "p9_quad_scom_addresses.H"

// @todo The bit positions should come from generated fields values
static const uint32_t STOP_GATED_START           = 0;
static const uint32_t STOP_GATED_LEN             = 1;

static const uint32_t STOP_TRANSITION_START      = 2;
static const uint32_t STOP_TRANSITION_LEN        = 2;

static const uint32_t STOP_REQUESTED_LEVEL_START = 4;
static const uint32_t STOP_REQUESTED_LEVEL_LEN   = 4;

static const uint32_t STOP_ACTUAL_LEVEL_START    = 8;
static const uint32_t STOP_ACTUAL_LEVEL_LEN      = 4;


// -----------------------------------------------------------------------------
//  Function definitions
// -----------------------------------------------------------------------------

// See .H for documentation
fapi2::ReturnCode p9_check_idle_stop_state(
    const fapi2::Target<fapi2::TARGET_TYPE_CORE>& i_target,
    const uint32_t i_stop_level,
    const p9_ciss::CHECK_IDLE_COMPARE i_comparison)
{
    FAPI_IMP("> p9_check_idle_stop_state");

    fapi2::buffer<uint64_t> l_data64;
    uint32_t l_stop_gated = 0;
    uint32_t l_stop_transition = p9_ciss::SSH_UNDEFINED;
    uint32_t l_stop_requested_level = 0; // Running Level
    uint32_t l_stop_actual_level = 0;    // Running Level

    // Read the "Other" STOP History Register
    FAPI_TRY(fapi2::getScom(i_target, C_PPM_SSHOTR, l_data64));

    // Extract the field values
    l_data64.extractToRight<STOP_GATED_START,
                            STOP_GATED_LEN>(l_stop_gated);

    l_data64.extractToRight<STOP_TRANSITION_START,
                            STOP_TRANSITION_LEN>(l_stop_transition);

    l_data64.extractToRight<STOP_REQUESTED_LEVEL_START,
                            STOP_REQUESTED_LEVEL_LEN>(l_stop_requested_level);

    l_data64.extractToRight<STOP_ACTUAL_LEVEL_START,
                            STOP_ACTUAL_LEVEL_LEN>(l_stop_actual_level);

#ifndef __PPE__
    FAPI_DBG("GATED = %d; TRANSITION = %d (0x%X); REQUESTED_LEVEL = %d; ACTUAL_LEVEL = %d",
             l_stop_gated,
             l_stop_transition, l_stop_transition,
             l_stop_requested_level,
             l_stop_actual_level);
#endif

    // Check for valid pending condition
    FAPI_ASSERT(!(l_stop_transition == p9_ciss::SSH_CORE_COMPLETE ||
                  l_stop_transition == p9_ciss::SSH_ENTERING        ),
                fapi2::CHECK_IDLE_STOP_PENDING(),
                "STOP transition is still pending");

    // Assert completion and the core gated condition.  If not, something is off.
    FAPI_ASSERT((l_stop_transition == p9_ciss::SSH_COMPLETE &&
                 l_stop_gated      == p9_ciss::SSH_GATED         ),
                fapi2::CHECK_IDLE_STOP_INVALID_STATE()
                .set_STOP_HISTORY(l_data64),
                "STOP state error");

    // Check for valid actual level
//     FAPI_ASSERT((l_stop_actual_level == 2  ||
//                  l_stop_actual_level == 4  ||
//                  l_stop_actual_level == 8  ||
//                  l_stop_actual_level == 11 ||
//                  l_stop_actual_level == 15   ),
//                 fapi2::CHECK_IDLE_STOP_INVALID_ACTUAL_LEVEL()
//                 .set_ACTUAL_LEVEL(l_stop_actual_level),
//                 "Invalid actual STOP Level");

    {
        bool b_compare_result = false;

        switch (i_comparison)
        {
            case p9_ciss::EQUAL:
                if (i_stop_level == l_stop_actual_level)
                {
                    FAPI_DBG("Equal detected. compare %d, actual %d",
                             i_stop_level, l_stop_actual_level);
                    b_compare_result = true;
                }

                break;

            case p9_ciss::LESS_THAN:
                if (i_stop_level < l_stop_actual_level)
                {
                    FAPI_DBG("Less than detected. compare %d, actual %d",
                             i_stop_level, l_stop_actual_level);
                    b_compare_result = true;
                }

                break;

            case p9_ciss::LESS_THAN_EQUAL:
                if (i_stop_level <= l_stop_actual_level)
                {
                    FAPI_DBG("Less than or Equal detected. compare %d, actual %d",
                             i_stop_level, l_stop_actual_level);
                    b_compare_result = true;
                }

                break;

            case p9_ciss::GREATER_THAN:
                if (i_stop_level > l_stop_actual_level)
                {
                    FAPI_DBG("Greater than detected. compare %d, actual %d",
                             i_stop_level, l_stop_actual_level);
                    b_compare_result = true;
                }

                break;

            case p9_ciss::GREATER_THAN_EQUAL:
                if (i_stop_level >= l_stop_actual_level)
                {
                    FAPI_DBG("Greater than or Equal detected. compare %d, actual %d",
                             i_stop_level, l_stop_actual_level);
                    b_compare_result = true;
                }

                b_compare_result = true;
                break;

            default:
                FAPI_ERR("ERROR case. compare %d, actual %d",
                         i_stop_level, l_stop_actual_level);

        }

        FAPI_ASSERT((b_compare_result),
                    fapi2::CHECK_IDLE_STOP_COMPARE()
                    .set_ACTUAL_LEVEL(l_stop_actual_level)
                    .set_COMPARISON_LEVEL(i_stop_level)
                    .set_COMPARISON(i_comparison),
                    "Comparison with requested actual STOP Level failed");
    }

    FAPI_INF("SUCCESS!!  Valid STOP state has been achieved.")

fapi_try_exit:
    FAPI_INF("< p9_check_idle_stop_state");

    return fapi2::current_err;
} // END p9_check_stop_state
