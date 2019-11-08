/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/test/fapi2_buffer_test.C $                  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2012,2019                                                    */
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
 * @file fapi2_buffer_test.C
 * @brief test program for testing new buffers
 */
#define FAPI2_DEBUG 1
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <stdint.h>
#include <iostream>
#include <thread>

#include <buffer_stream.H>
#include <buffer.H>
#include <assert.h>

// g++ -I<path to headers> -std=c++0x fapi_buffer_test.C -O2 -o fapi_buffer_test

TEST_CASE("Test non-template writeBit API")
{
    // Testing non-template writeBit API equivalent
    // to template writeBit API method

    {
        fapi2::buffer<uint64_t> test1;
        fapi2::buffer<uint64_t> test2;

        constexpr size_t BIT = 0;
        constexpr size_t VALUE = 1;

        test1.writeBit<BIT>(VALUE);
        REQUIRE( fapi2::FAPI2_RC_SUCCESS == uint64_t(test2.writeBit(VALUE, BIT)) );

        REQUIRE( uint64_t(test1) == uint64_t(test2) );
    }

    {
        fapi2::buffer<uint64_t> test1;
        fapi2::buffer<uint64_t> test2;

        constexpr size_t BIT = 0;
        constexpr size_t BIT_LEN = 3;
        constexpr size_t VALUE = 1;

        test1.writeBit<BIT, BIT_LEN>(VALUE);
        REQUIRE( fapi2::FAPI2_RC_SUCCESS == uint64_t(test2.writeBit(VALUE, BIT, BIT_LEN)) );

        REQUIRE( uint64_t(test1) == uint64_t(test2) );
    }

    {
        fapi2::buffer<uint8_t> test1(~0);
        fapi2::buffer<uint8_t> test2(~0);

        constexpr size_t BIT = 0;
        constexpr size_t BIT_LEN = 8;
        constexpr size_t VALUE = 0;

        test1.writeBit<BIT, BIT_LEN>(VALUE);
        REQUIRE( fapi2::FAPI2_RC_SUCCESS == uint64_t(test2.writeBit(VALUE, BIT, BIT_LEN)) );

        REQUIRE( uint64_t(test1) == uint64_t(test2) );
    }

    {
        // failing test case - exceeded length
        fapi2::buffer<uint8_t> test;

        constexpr size_t BIT = 0;
        constexpr size_t BIT_LEN = 10;
        constexpr size_t VALUE = 0;

        REQUIRE( fapi2::FAPI2_RC_SUCCESS != uint64_t(test.writeBit(VALUE, BIT, BIT_LEN)) );
    }

    {
        // failing test case - exceeded bit length
        fapi2::buffer<uint64_t> test;

        constexpr size_t BIT = 64;
        constexpr size_t VALUE = 0;

        REQUIRE( fapi2::FAPI2_RC_SUCCESS != uint64_t(test.writeBit(VALUE, BIT)) );
    }

}

TEST_CASE("Test non-template getBit Bit API")
{
    // Testing non-template getBit API equivalent
    // to template getBit API method

    {
        // Single Bit test
        fapi2::buffer<uint64_t> test1(0x8000000000000000);
        fapi2::buffer<uint64_t> test2(0x8000000000000000);;

        constexpr size_t BIT = 0;
        REQUIRE( test1.getBit<BIT>() == test2.getBit(BIT) );
    }

    {
        // Multiple Bit test
        fapi2::buffer<uint64_t> test1(0xF000000000000000);
        fapi2::buffer<uint64_t> test2(0xF000000000000000);

        constexpr size_t BIT = 0;
        constexpr size_t BIT_LEN = 4;

        REQUIRE( (test1.getBit<BIT, BIT_LEN>()) == test2.getBit(BIT, BIT_LEN) );
    }

    {
        // Multiple Bit test
        fapi2::buffer<uint8_t> test1(~0);
        fapi2::buffer<uint8_t> test2(~0);

        constexpr size_t BIT = 0;
        constexpr size_t BIT_LEN = 8;

        REQUIRE( (test1.getBit<BIT, BIT_LEN>()) == test2.getBit(BIT, BIT_LEN) );
    }

    {
        // Testing failing test case - exceeded length
        fapi2::buffer<uint8_t> test(~0);

        constexpr size_t BIT = 0;
        constexpr size_t BIT_LEN = 10;

        REQUIRE_FALSE( test.getBit(BIT, BIT_LEN) );

    }

    {
        // Testing failing test case - exceeded bit range
        fapi2::buffer<uint64_t> test;

        constexpr size_t BIT = 100;
        REQUIRE_FALSE( test.getBit(BIT) );
    }

}
