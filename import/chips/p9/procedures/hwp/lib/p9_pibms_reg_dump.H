/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_pibms_reg_dump.H $      */
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
/// @file  p9_pibms_reg_dump.H
/// @brief Dump contents of various PIB Masters and Slaves internal registers.
///
/// *HW Owner    : Anay K Desai
/// *FW Owner    :
/// *Team        : Pervasive
/// *Consumed by : TBD
/// *Level       :
///

#ifndef __P9_PIBMS_REG_DUMP_H__
#define __P9_PIBMS_REG_DUMP_H__

typedef struct
{
    uint32_t     number;
    std::string  name;
} PIBMSReg_t;


typedef struct
{
    PIBMSReg_t    reg;
    uint64_t    value;
} PIBMSRegValue_t;



/// @typedef p9_sbe_localreg_dump_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_pibms_reg_dump_FP_t)
(
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&,
    std::vector<PIBMSRegValue_t>& temp_data);

extern "C"
{

/// @brief Dump all internal register contents of PIB Masters and Slaves
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [in] i_base_address Base offset to be used for all accesses
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_pibms_reg_dump(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                      std::vector<PIBMSRegValue_t>& temp_data
                     );

} // extern C

#endif  // __P9_PIBMS_REG_DUMP_H__
