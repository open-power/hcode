/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_pibmem_dump.C $         */
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
/// @file  p9_pibmem_dump.C
/// @brief Dump PIBMEM's Array Data in Structure.
///
/// *HW Owner    : Anay K Desai
/// *FW Owner    :
/// *Team        : Pervasive
#include <fapi2.H>
#include <p9_pibmem_dump.H>

const static uint32_t PIBMEM_START_ARRAY_ADDRESS   = 0x00080000;
const static uint32_t DEPTH_OF_ARRAY               = 0x00003000;

fapi2::ReturnCode p9_pibmem_dump(
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
    const uint32_t start_byte,
    const uint32_t num_of_byte,
    const user_options input_switches,
    std::vector<array_data_t>& pibmem_contents)
{
    uint32_t i, start_address, num_of_address, end_address;
    array_data_t fetch_data;
    fapi2::buffer<uint64_t> l_data64;

    start_address  = (start_byte / 8) + PIBMEM_START_ARRAY_ADDRESS;
    end_address    = (((start_byte + num_of_byte - 1)) / 8) + PIBMEM_START_ARRAY_ADDRESS;
    num_of_address = (end_address - start_address) + 1;

    if(input_switches == INTERMEDIATE_TILL_INTERMEDIATE)
    {}
    else if(input_switches == START_TILL_INTERMEDIATE)
    {
        start_address  = PIBMEM_START_ARRAY_ADDRESS;
    }
    else if(input_switches == INTERMEDIATE_TILL_END )
    {
        num_of_address = (DEPTH_OF_ARRAY + PIBMEM_START_ARRAY_ADDRESS) - start_address;
    }
    else if(input_switches == START_TILL_END)
    {
        start_address  = PIBMEM_START_ARRAY_ADDRESS;
        num_of_address = DEPTH_OF_ARRAY;
    }

    for( i = 0 ; i < num_of_address ; i++)
    {
        FAPI_TRY(getScom(i_target, start_address + i, l_data64), "Error in Reading Array");
        fetch_data.read_addr = start_address + i;
        fetch_data.read_data = l_data64;
        pibmem_contents.push_back(fetch_data);
    }

fapi_try_exit:
    return fapi2::current_err;
}
