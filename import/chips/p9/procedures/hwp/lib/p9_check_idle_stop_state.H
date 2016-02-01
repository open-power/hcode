/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_check_idle_stop_state.H $ */
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
/// @file  p9_check_idle_stop_state.H
/// @brief common procedure prologue/epilogue routines
///
/// *HWP HWP Owner          : Greg Still    <stillgs@us.ibm.com>
/// *HWP Backup HWP Owner   : David Du      <daviddu@us.ibm.com>
/// *HWP FW Owner           : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team               : PM
/// *HWP Consumed by        : SBE:SGPE
/// *HWP Level              : 2
///

#ifndef __P9_CHECK_IDLE_STOP_STATE_H__
#define __P9_CHECK_IDLE_STOP_STATE_H__

#include <fapi2.H>

namespace p9_ciss
{
enum CHECK_IDLE_COMPARE
{
    EQUAL,
    LESS_THAN,
    LESS_THAN_EQUAL,
    GREATER_THAN,
    GREATER_THAN_EQUAL
};

enum STOP_HISTORY_GATED
{
    SSH_RUNNING = 0,
    SSH_GATED = 1
};

enum STOP_HISTORY_TRANSITION
{
    SSH_COMPLETE = 0,
    SSH_CORE_COMPLETE = 1,
    SSH_ENTERING = 2,
    SSH_EXITING = 3,
    SSH_UNDEFINED = 255
};
}  // namespace



extern "C"
{

/// @typedef p9_check_idle_stop_state_FP_t
/// function pointer typedef definition for HWP call support
    typedef fapi2::ReturnCode (*p9_check_idle_stop_state_FP_t) (
        const fapi2::Target <fapi2::TARGET_TYPE_CORE >&,
        const uint32_t,
        const p9_ciss::CHECK_IDLE_COMPARE);


/// @brief common procedure prologue/epilogue routines
///
/// @param [in] i_target    TARGET_TYPE_EQ|TARGET_TYPE_CORE target
/// @param [in] i_operation ENUM(PROLOG, EPILOG)
///
/// @attr
/// @attritem ATTR_EX_PARIAL_GOOD - EX target, uint32
///
/// @retval FAPI_RC_SUCCESS
    fapi2::ReturnCode
    p9_check_idle_stop_state(
        const fapi2::Target <fapi2::TARGET_TYPE_CORE >& i_target,
        const uint32_t i_stop_level,
        const p9_ciss::CHECK_IDLE_COMPARE  i_comparison);


} // extern C

#endif  // __P9_CHECK_IDLE_STOP_STATE_H__
