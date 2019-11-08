/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/test/fapi2_variable_buffer_test.C $         */
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
 * @file fapi_variable_buffer.C
 * @brief test program for testing new variable buffers
 */
#define FAPI2_DEBUG 1
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <stdint.h>
#include <iostream>
#include <thread>

#include <variable_buffer.H>
#include <buffer_stream.H>
#include <buffer.H>
#include <assert.h>

// g++ -I<path to headers> -std=c++0x fapi_buffer_test.C -O2 -o fapi_buffer_test

static const fapi2::container_unit pattern = 0xAA55FFAA;


TEST_CASE("Test #1")
{

    fapi2::buffer<uint64_t> myBuffer;

    REQUIRE(fapi2::FAPI2_RC_SUCCESS == myBuffer.set<uint64_t>(-1, 0));

    myBuffer.print();

    fapi2::variable_buffer target(128);
    fapi2::variable_buffer source(32);
    uint32_t               junk = 0xDEADBEEF;
    uint32_t               holder = 0xFEEDFACE;
    fapi2::variable_buffer v_holder(32);


    uint8_t                data_8 = 0xDE;
    uint16_t               data_16 = 0xBEEF;
    uint32_t               data_32 = 0xDEADBEEF;
    uint64_t               data_64 = 0xDEADBEEFFEEDFACE;

    target.invert();
    REQUIRE(fapi2::FAPI2_RC_SUCCESS == target.set<uint8_t>(data_8));
    REQUIRE(data_8 == target.get<uint8_t>());
    target.print();
    printf("\n");

    REQUIRE(fapi2::FAPI2_RC_SUCCESS == target.set<uint8_t>(data_8, 5));
    REQUIRE( data_8 == target.get<uint8_t>(5));
    target.print();
    printf("\n");

    REQUIRE(target.getLength<uint8_t>() == 16 );
    REQUIRE(target.set<uint8_t>( data_8, target.getLength<uint8_t>()) == fapi2::FAPI2_RC_OVERFLOW);

    REQUIRE(target.set<uint8_t>( data_8, target.getLength<uint8_t>() - 1) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    printf("\n");

    REQUIRE(target.set<uint16_t>( data_16) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(data_16 == target.get<uint16_t>());
    target.print();
    printf("\n");

    REQUIRE(target.set<uint32_t>( data_32) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(data_32 == target.get<uint32_t>());
    target.print();
    printf("\n");

    REQUIRE(target.set<uint64_t>( data_64) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(data_64 == target.get<uint64_t>());
    target.print();
    printf("\n");

    target.flush<1>();
    REQUIRE(target.insertFromRight( source ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    target.flush<1>();
    REQUIRE(target.set<uint32_t>( junk ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    holder = 0x0;
    REQUIRE(target.extract(holder) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(holder == junk);

    REQUIRE(target.set( junk, 1 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    holder = 0x0;
    REQUIRE(target.extract(holder, 32) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(holder == junk);


    REQUIRE(target.set( junk, 2 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    holder = 0x0;
    REQUIRE(target.extract(holder, 64) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(holder == junk);

    std::cout << "START" << std::endl;

    // v_holder is 32 bits here
    REQUIRE(target.extract(v_holder, 64) == fapi2::FAPI2_RC_SUCCESS);
    v_holder.print();

    {
        fapi2::variable_buffer v_holder(64);
        REQUIRE(target.extract(v_holder, 64, 32) == fapi2::FAPI2_RC_SUCCESS);
        v_holder.print();
    }

    {
        fapi2::variable_buffer v_holder(64);
        target.print();
        REQUIRE(target.extract(v_holder, 6, 3) == fapi2::FAPI2_RC_SUCCESS);
        v_holder.print();
    }

    {
        fapi2::variable_buffer v_holder(64);
        uint32_t               tester = 0x0;
        REQUIRE(target.extract(v_holder, 16, 32) == fapi2::FAPI2_RC_SUCCESS);
        v_holder.print();
        REQUIRE(v_holder.extract(tester) == fapi2::FAPI2_RC_SUCCESS);
        REQUIRE(tester == 0xbeefdead);
    }

    {
        fapi2::variable_buffer v_holder(128);

        target.flush<1>();
        REQUIRE(target.set( junk ) == fapi2::FAPI2_RC_SUCCESS);
        target.print();

        REQUIRE(target.extract(v_holder) == fapi2::FAPI2_RC_SUCCESS);
        v_holder.print();
        REQUIRE(v_holder == target);
    }

    {
        fapi2::variable_buffer v_holder(64);

        target.flush<1>();
        REQUIRE(target.set( junk ) == fapi2::FAPI2_RC_SUCCESS);
        target.print();

        REQUIRE(target.extract(v_holder, 64) == fapi2::FAPI2_RC_SUCCESS);
        v_holder.print();
        REQUIRE(fapi2::variable_buffer({0xffffffff, 0xffffffff}) == v_holder);
    }

    {
        fapi2::variable_buffer v_holder(64);

        target.flush<1>();
        REQUIRE(target.set( junk ) == fapi2::FAPI2_RC_SUCCESS);
        target.print();

        REQUIRE(target.extract(v_holder, 27, 12) == fapi2::FAPI2_RC_SUCCESS);
        v_holder.print();
        REQUIRE(fapi2::variable_buffer({0x7ff00000, 0}) == v_holder);
    }

}

TEST_CASE("Test #2")
{

    fapi2::variable_buffer target(128);
    fapi2::variable_buffer source(32);
    uint16_t               junk = 0xBEEF;
    uint16_t               holder = 0x0;

    target.invert();
    source.invert();
    REQUIRE(target.insert( source ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.extract(holder) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    target.flush<1>();
    REQUIRE(target.insertFromRight( source ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    holder = 0x0;
    REQUIRE(target.extract(holder, 16) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    target.flush<1>();
    REQUIRE(target.set( junk ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    holder = 0x0;
    REQUIRE(target.extract(holder) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    REQUIRE(target.set( junk, 2 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    holder = 0x0;
    REQUIRE(target.extract(holder, 16 * 2) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    REQUIRE(target.set( junk, 4 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    holder = 0x0;
    REQUIRE(target.extract(holder, 16 * 4) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    REQUIRE(target.set( junk, 6 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    holder = 0x0;
    REQUIRE(target.extract(holder, 16 * 6) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    REQUIRE(target.set( junk, 1 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    holder = 0x0;
    REQUIRE(target.extract(holder, 16) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    REQUIRE(target.set( junk, 3 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    holder = 0x0;
    REQUIRE(target.extract(holder, 16 * 3) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    REQUIRE(target.set( junk, 5 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    holder = 0x0;
    REQUIRE(target.extract(holder, 16 * 5) == fapi2::FAPI2_RC_SUCCESS);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    holder = 0x0;
    REQUIRE(target.extract(holder, 4) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    holder = 0x0;
    REQUIRE(target.extract(holder, 5) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    REQUIRE(0xddf7 == holder);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    holder = 0x0;
    REQUIRE(target.extract(holder, 6) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    REQUIRE(0xbbef == holder);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

    holder = 0x0;
    REQUIRE(target.extract(holder, 7) == fapi2::FAPI2_RC_SUCCESS);
    target.print();
    REQUIRE(0x77df == holder);
    std::cout << "holder: " << std::hex << holder << std::dec << std::endl;

}

TEST_CASE("Test 3")
{
    fapi2::variable_buffer target(128);
    fapi2::variable_buffer source(32);
    uint8_t                junk = 0xAA;

    target.invert();
    source.setBit(5);
    source.invert();
    REQUIRE(target.insert( source ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    target.flush<1>();
    REQUIRE(target.insertFromRight( source ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    target.flush<1>();
    REQUIRE(target.set( junk ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.set( junk, 2 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.set( junk, 4 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.set( junk, 6 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.set( junk, 1 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.set( junk, 3 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.set( junk, 5 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

}

TEST_CASE("Test #4")
{
    fapi2::variable_buffer target(128);
    fapi2::variable_buffer source(32);

    uint64_t junk = 0xDEADBEEFFEEDFACE;
    //uint32_t junk = 0xDEADBEEF; //FEEDFACE;

    target.invert();
    source.setBit(5);
    source.invert();
    REQUIRE(target.insert( source, 4 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    target.flush<1>();
    REQUIRE(target.insertFromRight( source, 4 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    target.flush<1>();
    REQUIRE(target.set( junk ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

    REQUIRE(target.set( junk, 1 ) == fapi2::FAPI2_RC_SUCCESS);
    target.print();

}

TEST_CASE("Test #5")
{
    fapi2::variable_buffer data(0);
    REQUIRE(data.getBitLength() == 0);
    // We should have no elements at all - we're 0 bits long
    REQUIRE(data.getLength<fapi2::container_unit>() == 0);
}
TEST_CASE("Test #6")
{
    fapi2::variable_buffer data(10);
    REQUIRE(data.getBitLength() == 10);

    // We should have 2 uint8_t
    REQUIRE(data.getLength<uint8_t>() == 2);
    // We should have 1 uint16_t
    REQUIRE(data.getLength<uint16_t>() == 1);

    // We should have 1 uint32_t
    REQUIRE(data.getLength<uint32_t>() == 1);

    // We should have 1 uint64_t
    REQUIRE(data.getLength<uint64_t>() == 1);
}

TEST_CASE("Test #7 set/get bit")
{
    {
        fapi2::variable_buffer data(1);
        data.setBit(0);
        data.print();
        REQUIRE( data.getBit<0>() );
    }

    {
        fapi2::variable_buffer data(2);
        data.setBit(1);
        data.print();
        REQUIRE( data.getBit<1>() );
    }

    {
        fapi2::variable_buffer data(64);
        data.flush<1>();
        data.print();
        REQUIRE( data.getBit<1>() );
        REQUIRE( data.getBit<53>() );
    }

    {
        fapi2::variable_buffer data(12);
        data.flush<0>();
        data.setBit(10);
        data.print();
        REQUIRE( data.getBit<10>() );
    }

}



TEST_CASE("Test #8")
{
    {
        std::cout << "test container of bits" << std::endl;
        const uint32_t x = 2;

        fapi2::variable_buffer data(15);

        // clear the buffer to initialize to zero
        data.flush<0>();

        data.setBit(x);
        data.setBit(3);
        data.setBit(1);

        data.print();

        std::cout
                << "\tdouble word length: " << data.getLength<uint64_t>() << std::endl
                << "\tbit length: " << data.getBitLength() << std::endl
                << "\tworld length: " << data.getLength<uint32_t>() << std::endl;

        // check
        REQUIRE(data.getLength<uint64_t>() == 1);
        REQUIRE(data.getBitLength() == 15);
        REQUIRE(data.getLength<uint32_t>() == 1);
    }



    {
        std::cout << "container of bits" << std::endl;

        // We can emulate the previous ecmdDataBuffer by making a typedef:
        fapi2::variable_buffer data(16);
        std::cout
                << "\tdouble word length: " << data.getLength<uint64_t>() << std::endl
                << "\tbit length: " << data.getBitLength() << std::endl
                << "\tworld length: " << data.getLength<uint32_t>() << std::endl;

        // Very large buffers can be initialized rather than set bit by bit.
        // Use some care, as each unit is 64 bits, and passing 32 bit values
        // works just fine but leaves half the bits 0's
        const fapi2::variable_buffer bit_settings_known(
        {
            0xFFFF0000, 0xAABBF0F0,
                        0xFFFF0000, 0xAABBF0F0,
                        0xFFFF0000, 0xAABBF0F0,
        });

        fapi2::variable_buffer other_bits;

        // Assignment will expand or shrink the size automatically.
        data = bit_settings_known;
        std::cout << "\t is data equal to bit_settings_known? "
                  << (data == bit_settings_known ? "yes" : "no")
                  << std::endl;

        std::cout << "\t is data equal to data? "
                  << (data == data ? "yes" : "no")
                  << std::endl;

        data.flush<0>();
        data.setBit(1);
        data.setBit(0);

        std::cout << "\t resulting data: ";
        data.print();


        // Note that data was assigned bits_settings_known, so it should be
        // a different size.
        std::cout
                << "\tdouble word length: " << data.getLength<uint64_t>() << std::endl
                << "\tbit length: " << data.getBitLength() << std::endl
                << "\tworld length: " << data.getLength<uint32_t>() << std::endl;

        std::cout << "\t resulting bit_settings_known: ";
        bit_settings_known.print();

        // you can assign directly to the buffer:
        const fapi2::container_unit x = 0xFF00AA55;
        other_bits = {x, 0xDEADBEEF};
        std::cout << "\t other_bits: ";
        other_bits.print();
    }
}

TEST_CASE("Test #9")
{

    fapi2::variable_buffer testbuf(128);
    uint64_t junk = 0xDEADBEEFCAFEBABE;

    REQUIRE((testbuf.set<uint64_t>(junk, 0) == fapi2::FAPI2_RC_SUCCESS ));
    testbuf.print();
    REQUIRE((testbuf.set<uint64_t>(junk, 1) == fapi2::FAPI2_RC_SUCCESS ));
    testbuf.print();
    REQUIRE((testbuf.set<uint64_t>(junk, 2) == fapi2::FAPI2_RC_OVERFLOW));
    testbuf.print();
    REQUIRE((testbuf.set<uint64_t>(-1, 0) == fapi2::FAPI2_RC_SUCCESS));
    testbuf.print();

    std::cout << " Test 9 data : ";
    testbuf.print();

}

TEST_CASE("Test 10")
{
    // byteswapped here..
    const fapi2::variable_buffer myBuffer(
    {
        0, 1
    });

    uint64_t _64BitData = myBuffer.get<uint64_t>(0);
    uint32_t _32BitData = myBuffer.get<uint64_t>(0);
    uint16_t _16BitData = myBuffer.get<uint64_t>(0);
    uint8_t  _8BitData = myBuffer.get<uint64_t>(0);

    REQUIRE( _64BitData == 1 );
    REQUIRE( _32BitData == 1 );
    REQUIRE( _16BitData == 1 );
    REQUIRE( _8BitData == 1 );

    {

        fapi2::variable_buffer myBuffer(64);

        REQUIRE((myBuffer.set<uint64_t>(5) == fapi2::FAPI2_RC_SUCCESS));

        uint64_t _64BitData = myBuffer.get<uint64_t>();

        REQUIRE( _64BitData == 5 );
        myBuffer.print();

    }


}

TEST_CASE("incomplete get/put<OT>() test")
{
    fapi2::variable_buffer buffer(80);

    REQUIRE((buffer.set<uint64_t>(0xA1A2A3A4A5A6A7A8ull, 0) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE((buffer.set<uint64_t>(0xB1B2B3B4B5B6B7B8ull, 1) == fapi2::FAPI2_RC_SUCCESS));
    buffer.print();
    REQUIRE(buffer.get<uint64_t>(0) == 0xA1A2A3A4A5A6A7A8ull);
    REQUIRE(buffer.get<uint64_t>(1) == 0xB1B2000000000000ull);
    REQUIRE(buffer.get<uint32_t>(2) == 0xB1B20000);
    REQUIRE(buffer.get<uint16_t>(4) == 0xB1B2);

    REQUIRE((buffer.insert<uint32_t>(0xC7C8C1C2, 48) == fapi2::FAPI2_RC_SUCCESS));
    buffer.print();
    REQUIRE(buffer.get<uint64_t>(0) == 0xA1A2A3A4A5A6C7C8ull);
    REQUIRE(buffer.get<uint64_t>(1) == 0xC1C2000000000000ull);
    REQUIRE(buffer.get<uint32_t>(2) == 0xC1C20000);
    REQUIRE(buffer.get<uint16_t>(4) == 0xC1C2);
}

TEST_CASE("negative index test")
{
    fapi2::variable_buffer buffer(128);
    const uint64_t data64 = 0xDEADBEEFCAFEBABE;
    const fapi2::buffer<uint64_t> src_buffer = data64;

    REQUIRE((buffer.insert(src_buffer()) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(buffer.get<uint64_t>(0) == data64);
    buffer.print();

    buffer.flush<0>();
    REQUIRE((buffer.insert(src_buffer(), 64, 64, 0) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(buffer.get<uint64_t>(1) == data64);

}


TEST_CASE("another test")
{
    fapi2::variable_buffer buffer(128);
    const uint64_t data64 = 0xDEADBEEFCAFEBABE;

    buffer.flush<0>();
    REQUIRE((buffer.insert(data64) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(buffer.get<uint64_t>(0) == data64);
    REQUIRE(buffer.get<uint64_t>(1) == 0);

    buffer.flush<0>();
    REQUIRE((buffer.insert(data64, 64, 64) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(buffer.get<uint64_t>(1) == data64);
    REQUIRE(buffer.get<uint64_t>(0) == 0);


}

TEST_CASE("insert test2")
{
    fapi2::variable_buffer buffer(128);
    const uint64_t data8 = 0xDE;
    fapi2::buffer<uint8_t> src_buffer = data8;

    REQUIRE((buffer.insert(src_buffer()) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(buffer.get<uint8_t>(0) == data8);

}

TEST_CASE("insert test3")
{
    fapi2::variable_buffer buffer(128);
    const uint8_t data1 = 0xDE;
    const uint8_t data2 = 0xAD;
    const uint8_t data3 = 0xBE;
    const uint8_t data4 = 0xEF;
    const uint8_t data5 = 0xCA;
    const uint8_t data6 = 0xFE;
    const uint8_t data7 = 0xBA;
    const uint8_t data8 = 0xBE;

    REQUIRE(buffer.set<uint8_t>(data1, 0) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(buffer.set<uint8_t>(data2, 1) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(buffer.set<uint8_t>(data3, 2) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(buffer.set<uint8_t>(data4, 3) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(buffer.set<uint8_t>(data5, 4) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(buffer.set<uint8_t>(data6, 5) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(buffer.set<uint8_t>(data7, 6) == fapi2::FAPI2_RC_SUCCESS);
    REQUIRE(buffer.set<uint8_t>(data8, 7) == fapi2::FAPI2_RC_SUCCESS);

    REQUIRE(buffer.get<uint64_t>(0) == 0xDEADBEEFCAFEBABE);


}

TEST_CASE("buffer_stream test #1")
{
    fapi2::variable_buffer buffer(144);
    fapi2::buffer_ostream  ostream(buffer);

    const uint32_t data32 = 0xDEADBEEF;
    const uint64_t data64 = 0xCAFEBABED00DF00Dull;

    fapi2::variable_buffer src_buffer(128);
    src_buffer.set(data64, 0);
    src_buffer.set(data64, 1);

    REQUIRE(ostream.size() == 0);
    REQUIRE((ostream.append<uint32_t>(data32) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(ostream.size() == 32);
    REQUIRE((ostream.append(data32, 16, 16) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(ostream.size() == 48);
    REQUIRE((ostream.appendFromRight<uint64_t>(0x1234, 16) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(ostream.size() == 64);
    REQUIRE((ostream.append(data64) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(ostream.size() == 128);
    REQUIRE((ostream.append(data64) != fapi2::FAPI2_RC_SUCCESS));  // data64 shouldn't fit any more
    REQUIRE((ostream.append(src_buffer, 16, 96) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(ostream.size() == 144);
    REQUIRE((ostream.appendFromRight(1, 1) != fapi2::FAPI2_RC_SUCCESS)); // Not one more bit should fit

    REQUIRE(ostream.size() == 144);
    buffer.print();
    REQUIRE(buffer.get<uint64_t>(0) == 0xDEADBEEFBEEF1234ull);
    REQUIRE(buffer.get<uint64_t>(1) == data64);
    REQUIRE(buffer.get<uint16_t>(8) == 0xD00Dull);

    fapi2::buffer_ostream ostream2(buffer, 16);
    REQUIRE((ostream2.append<uint8_t>(0xAA) == fapi2::FAPI2_RC_SUCCESS));

    fapi2::fixed_buffer_istream<uint16_t> fixed_istream(buffer);
    REQUIRE(fixed_istream.hasNext());
    REQUIRE(fixed_istream.next() == 0xDEAD);
    REQUIRE(fixed_istream.next() == 0xAAEF);
    REQUIRE(fixed_istream.next() == 0xBEEF);
    REQUIRE(fixed_istream.next() == 0x1234);
    REQUIRE(fixed_istream.next() == 0xCAFE);
    REQUIRE(fixed_istream.next() == 0xBABE);
    REQUIRE(fixed_istream.next() == 0xD00D);
    REQUIRE(fixed_istream.next() == 0xF00D);
    REQUIRE(fixed_istream.next() == 0xD00D);
    REQUIRE(!fixed_istream.hasNext());
}

TEST_CASE("buffer_stream test #2")
{
    fapi2::variable_buffer buffer(128);
    fapi2::fixed_buffer_ostream<uint64_t> ostream1(buffer);
    fapi2::fixed_buffer_ostream<uint16_t> ostream2(buffer, 3);

    const uint64_t data64 = 0xCAFEBABEDEADBEEFull;

    REQUIRE(ostream1.size() == 0);
    REQUIRE((ostream1.append(data64) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(ostream1.size() == 64);
    REQUIRE((ostream1.append(data64) == fapi2::FAPI2_RC_SUCCESS));
    REQUIRE(ostream1.size() == 128);
    REQUIRE((ostream1.append(data64) != fapi2::FAPI2_RC_SUCCESS));

    buffer.print();
    REQUIRE(buffer.get<uint64_t>(0) == data64);
    REQUIRE(buffer.get<uint64_t>(1) == data64);

    REQUIRE((ostream2.append(0x123) == fapi2::FAPI2_RC_SUCCESS));

    buffer.print();
    REQUIRE(buffer.get<uint64_t>(0) == 0xCAFEBABEDEAD0123ul);
    REQUIRE(buffer.get<uint64_t>(1) == data64);
}

TEST_CASE("variable buffer flipBit()/getNumBitsSet()")
{
    fapi2::variable_buffer buffer(128);

    buffer.setBit(23, 7);

    REQUIRE(buffer.getNumBitsSet(23, 7) == 7);

    buffer.flipBit(23, 7);

    REQUIRE(buffer.getNumBitsSet(23, 7) == 0);

    buffer.flipBit(0);
    buffer.flipBit(127);
    REQUIRE(buffer.getNumBitsSet(0, 128) == 2);

    buffer.flipBit(0);

    REQUIRE(buffer.getNumBitsSet(0, 128) == 1);

    buffer.flipBit(127);

    REQUIRE(buffer.getNumBitsSet(0, 128) == 0);

    buffer.flipBit(31);
    buffer.flipBit(32);

    buffer.flipBit(0, 128);

    REQUIRE(buffer.getNumBitsSet(0, 128) == 126);


    REQUIRE( buffer.flipBit(127, 2) == fapi2::FAPI2_RC_OVERFLOW);

}
