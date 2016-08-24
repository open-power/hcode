/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_gpe_regs.H $            */
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
/// @file  p9_gpe_regs.H
/// @brief Dump a PPE engine's state.
/// *HWP HW Owner        : Ashish More <ashish.more.@in.ibm.com>
/// *HWP HW Backup Owner : Brian Vanderpool <vanderp@us.ibm.com>
/// *HWP FW Owner        : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team            : PM
/// *HWP Level           : 2
/// *HWP Consumed by     : SBE, Cronus
#include <p9_ppe_utils.H>
#include <map>
#ifndef __p9_gpe_regs_H__
#define __p9_gpe_regs_H__
/**
 * @brief Offsets from base address for CME regs.
 */
enum GPE_REGS
{
    //GPE regs
    GPETSEL     = 0x00,
    GPEDBG      = 0x02,
    GPESTR      = 0x03,
    GPEMACR     = 0x04,
};
const std::map<uint16_t, std::string> v_gpe_num_name =
{
    { GPETSEL  ,    "GPETSEL"       },
    { GPEDBG   ,    "GPEDBG"        },
    { GPESTR   ,    "GPESTR"        },
    { GPEMACR  ,    "GPEMACR"       },
};


/// @typedef p9_gpe_regs_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_gpe_regs_FP_t) (
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&,
    const uint64_t, std::vector<SCOMRegValue_t>& v_gpe_reg_value);

extern "C"
{

/// @brief Dump the PPE state based on the based base address
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [in] i_base_address Base offset to be used for all accesses
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_gpe_regs(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                const uint64_t i_base_address,  std::vector<SCOMRegValue_t>& v_gpe_reg_value);

} // extern C

#endif
