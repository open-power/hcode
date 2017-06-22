/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_sbe_dump.C $            */
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
//------------------------------------------------------------------------------
/// @file  p9_sbe_dump.C
///
/// @brief Call functions for collecting various dumps: localreg_dump, pibms_reg_dump, pibmem_dump, ppe_dump
//------------------------------------------------------------------------------
// *HWP HW Owner        : srinivan@in.ibm.com <srinivas V Naga>
// *HWP HW Backup Owner :  <>
// *HWP FW Owner        : Sunil Kumar <skumar8j@in.ibm.com>
// *HWP Team            : Perv
// *HWP Level           : 2
// *HWP Consumed by     : SBE
//------------------------------------------------------------------------------


//## auto_generated
#include "p9_sbe_dump.H"
//## auto_generated
#include "p9_const_common.H"
#include <p9_perv_scom_addresses.H>
#include <p9_perv_scom_addresses_fld.H>

#include <p9_pibmem_dump.H>
#include <p9_pibms_reg_dump.H>
#include <p9_ppe_common.H>
#include <p9_sbe_localreg_dump.H>
#include <p9_ppe_state.H>


fapi2::ReturnCode p9_sbe_dump(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target_chip,
                              std::vector<SBESCOMRegValue_t>& o_sbe_local_reg_value,
                              std::vector<PIBMSRegValue_t>& o_pibms_reg_value,
                              std::vector<array_data_t>& o_pibmem_dump_value,
                              std::vector<PPERegValue_t>& o_ppe_sprs_value,
                              std::vector<PPERegValue_t>& o_ppe_xirs_value,
                              std::vector<PPERegValue_t>& o_ppe_gprs_value )
{
    static const uint64_t SBE_BASE_ADDRESS  = 0x000E0000;
    uint16_t  force_halt = 1;
    uint32_t pibmem_dump_start_byte = 0;
    uint32_t pibmem_dump_num_of_byte = 98296; // ( 12287 * 8 )12287 locations with each location having 8 bytes
    user_options input_switches = START_TILL_END;
    bool ecc_enable = false;
    PPE_DUMP_MODE mode = XIRS;

    FAPI_INF("p9_sbe_dump: Entering ...");

    //sbe_localreg_dump
    FAPI_TRY(p9_sbe_localreg_dump(i_target_chip, force_halt, o_sbe_local_reg_value ));

    //pibms_reg_dump
    FAPI_TRY(p9_pibms_reg_dump(i_target_chip, o_pibms_reg_value));

    //pibmem_dump
    FAPI_TRY(p9_pibmem_dump(i_target_chip, pibmem_dump_start_byte, pibmem_dump_num_of_byte, input_switches ,
                            o_pibmem_dump_value, ecc_enable));

    //ppe_state
    FAPI_TRY(p9_ppe_state(i_target_chip, SBE_BASE_ADDRESS, mode, o_ppe_sprs_value, o_ppe_xirs_value, o_ppe_gprs_value ));

    FAPI_INF("p9_sbe_dump: Exiting ...");

fapi_try_exit:
    return fapi2::current_err;

}
