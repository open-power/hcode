/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_sbe_dump.H $            */
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
/// @file  p9_sbe_dump.H
///
/// @brief Call functions for collecting various dumps: localreg_dump, pibms_reg_dump, pibmem_dump, ppe_dump
//------------------------------------------------------------------------------
// *HWP HW Owner        : srinivan@in.ibm.com <srinivas V Naga>
// *HWP HW Backup Owner :  <>
// *HWP FW Owner        : Sunil Kumar <skumar8j@in.ibm.com>
// *HWP Team            : Perv
// *HWP Level           : 2
// *HWP Consumed by     : SBE
//------------------------------------------------------------------------------


#ifndef _P9_SBE_DUMP_H_
#define _P9_SBE_DUMP_H_


#include <fapi2.H>
#include <p9_pibmem_dump.H>
#include <p9_pibms_reg_dump.H>
#include <p9_ppe_common.H>
#include <p9_sbe_localreg_dump.H>
#include <p9_ppe_state.H>

typedef fapi2::ReturnCode (*p9_sbe_dump_FP_t)(const
        fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&, std::vector<SCOMRegValue_t>&, std::vector<PIBMSRegValue_t>&,
        std::vector<array_data_t>&, std::vector<PPERegValue_t>&, std::vector<PPERegValue_t>&, std::vector<PPERegValue_t>&);

/// @brief Call functions for collecting various dumps: localreg_dump, pibms_reg_dump, pibmem_dump, ppe_dump
///
///
/// @param[in]     i_target_chip   Reference to TARGET_TYPE_PROC_CHIP target
/// @return  FAPI2_RC_SUCCESS if success, else error code.
extern "C"
{
    fapi2::ReturnCode p9_sbe_dump(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>
                                  & i_target_chip, std::vector<SCOMRegValue_t>& o_sbe_local_reg_value, std::vector<PIBMSRegValue_t>& o_pibms_reg_value,
                                  std::vector<array_data_t>& o_pibmem_dump_value,
                                  std::vector<PPERegValue_t>& o_ppe_sprs_value, std::vector<PPERegValue_t>& o_ppe_xirs_value,
                                  std::vector<PPERegValue_t>& o_ppe_gprs_value);
}

#endif
