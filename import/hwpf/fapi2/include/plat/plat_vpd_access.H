/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/include/plat/plat_vpd_access.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
/// @file plat_vpd_access.H
///
/// @brief Platform vpd-access definitions
///

#ifndef _FAPI2_PLAT_VPDACCESS_H_
#define _FAPI2_PLAT_VPDACCESS_H_

#include <fapi2_vpd_access.H>

namespace fapi2
{

/// @brief  Class representing required VPDInfo to be used in vpd collection.
/// @tparam T, the type of target this class is used with.
template<>
class VPDInfo<TARGET_TYPE_MCS>
{
    public:
        // @brief VPDInfo constructor
        VPDInfo( const fapi2::MemVpdData& i_vpd_type)
            : iv_vpd_type(i_vpd_type),
              iv_size(0), iv_freq(0), iv_rank_count_dimm_0(0),
              iv_rank_count_dimm_1(0), iv_dimm_drop_per_port(0)
        {};

        // type of vpd field to return
        fapi2::MemVpdData_t iv_vpd_type;

        // size of the vpd data
        size_t   iv_size;
        uint64_t iv_freq;
        uint64_t iv_rank_count_dimm_0;
        uint64_t iv_rank_count_dimm_1;
        uint64_t iv_dimm_drop_per_port;
};

};
#endif // _FAPI2_PLAT_VPDACCESS_H_
