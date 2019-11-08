/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/include/plat/plat_spd_access.H $            */
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
/// @file plat_spd_access.H
///
/// @brief Platform spd-access definitions
///

#ifndef _FAPI2_PLAT_SPD_ACCESS_H_
#define _FAPI2_PLAT_SPD_ACCESS_H_

namespace fapi2
{

fapi2::ReturnCode getSPD( const fapi2::Target<fapi2::TARGET_TYPE_DIMM>& i_target,
                          uint8_t* o_blob,
                          size_t& s )
{
    fapi2::ReturnCode l_rc = fapi2::FAPI2_RC_SUCCESS;

    return l_rc;
}

};

#endif
