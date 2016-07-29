/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_sbe_localreg_dump.H $   */
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
/// @file  p9_ppe_dump.H
/// @brief Dump a PPE engine's state.
///
/// *HW Owner    : Pradeep CN
/// *FW Owner    :
/// *Team        : Pervasive
/// *Consumed by : TBD
/// *Level       : my
///

#include <p9_ppe_state.H>
#ifndef __P9_SBE_LOCALREG_DUMP_H__
#define __P9_SBE_LOCALREG_DUMP_H__



/// @typedef p9_sbe_localreg_dump_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_sbe_localreg_dump_FP_t) (
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&, const uint16_t force_halt , std::vector<SCOMRegValue_t>& );


extern "C"
{

/// @brief Dump the local registers of entire SBE
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [out] v_sbe_local_reg_value vector of register values
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_sbe_localreg_dump(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target , const uint16_t force_halt ,
                         std::vector<SCOMRegValue_t>& v_sbe_local_reg_value
                        );

} // extern C

#endif  // __P9_PPE_DUMP_H__
