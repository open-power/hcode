/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/test/fapi2_subexe_test.C $                  */
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
 * @file fapi2_subexe_test.C
 * @brief simple testcase for subroutine exe macro does not go to
 *        offical platfom code.
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <stdint.h>
#include <iostream>
#include <thread>
#include <assert.h>
#include <return_code.H>
#include <subroutine_executor.H>

using namespace fapi2;

fapi2::ReturnCode procedure_to_call(uint32_t i_data, uint32_t& o_data )
{
    fapi2::ReturnCode l_rc;

    if(i_data == 0 )
    {
        o_data = 1;
    }
    else if(i_data == 1 )
    {
        o_data = 3;
    }
    else if( i_data == 2 )
    {
        l_rc = FAPI2_RC_FALSE;
    }

    return l_rc;
}

TEST_CASE("FAPI_CALL_SUB_test")
{

    fapi2::ReturnCode l_rc;

    uint32_t o_data = 0xFF;
    uint32_t l_data = 0;

    FAPI_CALL_SUBROUTINE(l_rc, procedure_to_call, l_data, o_data);

    REQUIRE( (uint64_t)l_rc == fapi2::FAPI2_RC_SUCCESS );
    REQUIRE(o_data == 1);

    o_data = 0xFF;
    l_data = 1;

    FAPI_CALL_SUBROUTINE(l_rc, procedure_to_call, l_data, o_data);

    REQUIRE( (uint64_t)l_rc == fapi2::FAPI2_RC_SUCCESS );
    REQUIRE( o_data != 1);

    o_data = 0xFF;
    l_data = 2;

    FAPI_CALL_SUBROUTINE(l_rc, procedure_to_call, l_data, o_data);

    REQUIRE( (uint64_t)l_rc == fapi2::FAPI2_RC_FALSE );
    REQUIRE(o_data == 0xff);


};

