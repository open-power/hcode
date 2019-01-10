/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_pibmem_dump.C $         */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
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

///
/// @file  p9_pibmem_dump.C
/// @brief Dump PIBMEM's Array Data in Structure.
///
/// *HW Owner    : Anay K Desai
/// *FW Owner    :
/// *Team        : Pervasive

// -------------------------------------Axone Mux configs-------------------------------------------------------------
// FSI2PCB(16)                 PIB2PCB(18)                   PCB2PCB(19)          cannot access       can access
//    1                           0                             0                      PIB             EPS - perv
//    0                           1                             0                      PCB             PIB, SBE, EPS
//    0                           0                             1                       -              PIB, PCB n/w
// -------------------------------------------------------------------------------------------------------------------

#include <fapi2.H>
#include <p9_perv_scom_addresses.H>
#include <p9_perv_scom_addresses_fld.H>
#include <p9_pibmem_dump.H>

const static uint32_t P9n_PIBMEM_START_ARRAY_ADDRESS   = 0x00080000;
const static uint32_t P9n_DEPTH_OF_ARRAY               = 0x00003000;
const static uint32_t P9a_PIBMEM_START_ARRAY_ADDRESS   = 0x00080000;
const static uint32_t P9a_DEPTH_OF_ARRAY               = 0x00007000;
const static uint32_t PIBMEM_CTRL_REG              = 0x00088000;

fapi2::ReturnCode p9_pibmem_dump(
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
    const uint32_t start_byte,
    const uint32_t num_of_byte,
    const user_options input_switches,
    std::vector<array_data_t>& pibmem_contents,
    const bool ecc_enable)
{
    uint8_t l_attr_axone_only;
    uint32_t i, start_address, num_of_address, end_address;
    uint32_t PIBMEM_START_ARRAY_ADDRESS, DEPTH_OF_ARRAY;
    array_data_t fetch_data;
    fapi2::buffer<uint64_t> l_data64, ctrl_data, original_ctrl_data;

    FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_CHIP_EC_FEATURE_P9A_LOGIC_ONLY, i_target, l_attr_axone_only));

    if (l_attr_axone_only) // Axone only
    {
        PIBMEM_START_ARRAY_ADDRESS = P9a_PIBMEM_START_ARRAY_ADDRESS;
        DEPTH_OF_ARRAY = P9a_DEPTH_OF_ARRAY;

        // Checking mux config and fence values for Axone
        fapi2::buffer<uint64_t> l_tempdata64;
        fapi2::buffer<uint32_t> l_tempdata32;

        FAPI_TRY(getCfamRegister(i_target, PERV_ROOT_CTRL0_FSI, l_tempdata32 ));
        FAPI_TRY(getScom(i_target, PERV_TP_CPLT_CTRL1, l_tempdata64));

        // RC0bits 16,18,19 != 000 && RC0bit16 != 1 && cplt_ctrl[ pib(bit6)] != 1
        if ( ! ((l_tempdata32.getBit<PERV_ROOT_CTRL0_PIB2PCB_DC>()
                 || l_tempdata32.getBit<PERV_ROOT_CTRL0_18_SPARE_MUX_CONTROL>()
                 || l_tempdata32.getBit<PERV_ROOT_CTRL0_19_SPARE_MUX_CONTROL>()) &&
                !(l_tempdata32.getBit<PERV_ROOT_CTRL0_PIB2PCB_DC>())            &&
                !(l_tempdata64.getBit<PERV_1_CPLT_CTRL1_UNUSED_6B>()) ))
        {
            FAPI_ERR("Invalid Mux config(RC0 bits 16,18,19): %#010lX or Fence setup(CPLT_CTRL1 bits 6 (pib fence)): %#018lX to perform pibmem dump. \n",
                     l_tempdata32, l_tempdata64);
            goto fapi_try_exit;
        }
    }
    else
    {
        PIBMEM_START_ARRAY_ADDRESS = P9n_PIBMEM_START_ARRAY_ADDRESS;
        DEPTH_OF_ARRAY = P9n_DEPTH_OF_ARRAY;
    }

    /// The below code enables/disables ECC checking before doing Dump based on inputs from USER.
    FAPI_TRY(getScom(i_target, PIBMEM_CTRL_REG, original_ctrl_data), "Error in Reading Control Register");

    if(ecc_enable == true)
    {
        ctrl_data = original_ctrl_data & 0xdfffffffffffffff;
        FAPI_TRY(putScom(i_target, PIBMEM_CTRL_REG, ctrl_data), "Error in Writing Control Register");
    }
    else
    {
        ctrl_data = original_ctrl_data | 0x2000000000000000;
        FAPI_TRY(putScom(i_target, PIBMEM_CTRL_REG, ctrl_data), "Error in Writing Control Register");
    }

    /// End of code for Enabling/Disabling ECC Checks

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

    /// Code to restore the PIBMEM Control Register to Original Value
    FAPI_TRY(putScom(i_target, PIBMEM_CTRL_REG, original_ctrl_data), "Error in Writing Control Register");
    /// End of Code to restore PIBMEM Control Register's Value

fapi_try_exit:
    return fapi2::current_err;
}
