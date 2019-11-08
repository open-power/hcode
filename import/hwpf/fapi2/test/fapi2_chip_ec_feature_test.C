/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/test/fapi2_chip_ec_feature_test.C $         */
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
#include <fapi2.H>
#include <fapi2_chip_ec_feature.H>
using namespace fapi2;

TEST_CASE("ATTR_CHIP_EC_FEATURE_TEST1, Feature test")
{
//      Returns 1 if either:
//      Centaur and EC=10 or
//      Cumulus and EC greater than 30

    ATTR_CHIP_EC_FEATURE_TEST1_Type val = hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST1>(), ENUM_ATTR_NAME_CENTAUR, 0x10);

    REQUIRE( 1  == val );

    REQUIRE( 0 == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST1>(), ENUM_ATTR_NAME_CENTAUR, 0x0) );

    REQUIRE( 0 == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST1>(), ENUM_ATTR_NAME_CENTAUR, 0x31) );

    REQUIRE( 1 == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST1>(), ENUM_ATTR_NAME_CUMULUS, 0x31) );

    REQUIRE( 0  == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST1>(), ENUM_ATTR_NAME_CUMULUS, 0x30) );

};

TEST_CASE("ATTR_CHIP_EC_FEATURE_TEST2, Feature test")
{
//      Returns 1 if:
//      Nimbus and EC<20 or


    ATTR_CHIP_EC_FEATURE_TEST2_Type val = hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST2>(), ENUM_ATTR_NAME_NIMBUS, 0x10);

    REQUIRE( 1  == val );

    REQUIRE( 0 == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST2>(), ENUM_ATTR_NAME_NIMBUS, 0x20) );

    REQUIRE( 1 == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST2>(), ENUM_ATTR_NAME_NIMBUS, 0x19) );

    REQUIRE( 0  == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST2>(), ENUM_ATTR_NAME_CUMULUS, 0x10) );

    REQUIRE( 1  == hasFeature(int2Type<ATTR_CHIP_EC_FEATURE_TEST2>(), ENUM_ATTR_NAME_NIMBUS, 0x10) );


};
