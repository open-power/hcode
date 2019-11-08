/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/test/fapi2_vpd_test.C $                     */
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
/**
 * @file fapi2_vpd_test.C
 * @brief simple testcase for vpd function does not go to
 *        offical platfom code.
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <stdint.h>
#include <iostream>
#include <thread>
#include <assert.h>

#include <target.H>
#include <target_types.H>
#include <vpd_access_defs.H>
#include <return_code_defs.H>
#include <return_code.H>
#include <vpd_access.H>

TEST_CASE("getVPD(MCS):")
{

    const fapi2::Target<fapi2::TARGET_TYPE_MCS> l_target;

    fapi2::VPDInfo<fapi2::TARGET_TYPE_MCS> l_info(fapi2::MT);

    uint8_t* blob = NULL;

    l_info.iv_vpd_type = fapi2::MT;
    l_info.iv_freq_mhz = 10000;
    l_info.iv_rank_count_dimm_0 = 1;
    l_info.iv_rank_count_dimm_1 = 8;
    getVPD(l_target, l_info, blob );

    // make sure nothing changed except the size
    REQUIRE( l_info.iv_vpd_type == fapi2::MT );
    REQUIRE( l_info.iv_freq_mhz == 10000 );
    REQUIRE( l_info.iv_rank_count_dimm_0 == 1 );
    REQUIRE( l_info.iv_rank_count_dimm_1 == 8 );
    REQUIRE( blob == NULL );
    REQUIRE( l_info.iv_size == 2048 );

    blob = static_cast<uint8_t*>(malloc(l_info.iv_size));

    getVPD(l_target, l_info, blob);

    // make sure everyting is populated and we now have a blob with an updated
    // data field
    REQUIRE( l_info.iv_size == 2048 );
    REQUIRE( blob != NULL );
    REQUIRE( l_info.iv_vpd_type == fapi2::MT );
    REQUIRE( l_info.iv_freq_mhz == 10000 );
    REQUIRE( l_info.iv_rank_count_dimm_0 == 1 );
    REQUIRE( l_info.iv_rank_count_dimm_1 == 8 );
    REQUIRE( blob[0] == 111 );

}

TEST_CASE("getVPD(OCMB):")
{

    const fapi2::Target<fapi2::TARGET_TYPE_OCMB_CHIP> l_target;

    fapi2::VPDInfo<fapi2::TARGET_TYPE_OCMB_CHIP> l_info(fapi2::EFD);

    l_info.iv_omi_freq_mhz = 25600;

    uint8_t* blob = NULL;

    getVPD(l_target, l_info, blob );

    // make sure nothing changed except the size
    REQUIRE( l_info.iv_vpd_type == fapi2::EFD );
    REQUIRE( l_info.iv_omi_freq_mhz == 25600 );
    REQUIRE( blob == NULL );
    REQUIRE( l_info.iv_size == 128 );

    blob = static_cast<uint8_t*>(malloc(l_info.iv_size));

    getVPD(l_target, l_info, blob);

    // make sure everyting is populated and we now have a blob with an updated
    // data field
    REQUIRE( l_info.iv_size == 128 );
    REQUIRE( blob != NULL );
    REQUIRE( l_info.iv_vpd_type == fapi2::EFD );
    REQUIRE( l_info.iv_omi_freq_mhz == 25600 );
    REQUIRE( l_info.iv_efd_type == 0x11);
    REQUIRE( l_info.iv_dmb_mfg_id == 0x2980);
    REQUIRE( l_info.iv_dmb_revision == 0x00);
    REQUIRE( l_info.iv_ddr_mode == 0x0C);
    REQUIRE( blob[0] == 0x40 );

}
