/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_pibmem_dump.H $         */
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
/// @file  p9_pibmem_dump.H
/// @brief Dump PIBMEM's Array Data in Structure.
///
/// *HW Owner    : Anay K Desai
/// *FW Owner    :
/// *Team        : Pervasive
/// *Consumed by : TBD
/// *Level       :
///

#ifndef __P9_PIBMEM_DUMP_H__
#define __P9_PIBMEM_DUMP_H__

typedef struct
{
    uint32_t read_addr;
    uint64_t read_data;
} array_data_t;

typedef enum
{
    START_TILL_END = 0,                         // Dump complete PIBMEM Array contents
    INTERMEDIATE_TILL_END = 1,                  // Dump from Address till End of PIBMEM
    START_TILL_INTERMEDIATE = 2,                // Dump from Start till Number of Bytes
    INTERMEDIATE_TILL_INTERMEDIATE = 3          // Dump from Address till Number of Bytes
} user_options;

/// @typedef p9_pibmem_dump_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_pibmem_dump_FP_t) (
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
    const uint32_t start_byte,
    const uint32_t num_of_byte,
    const user_options input_switches,
    std::vector<array_data_t>& pibmem_contents);

extern "C"
{

/// @brief Dump the PIBMEM Array based on starting and number of address
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [in] i_base_address Base offset to be used for all accesses
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_pibmem_dump(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                   const uint32_t start_byte,
                   const uint32_t num_of_byte,
                   const user_options input_switches,
                   std::vector<array_data_t>& pibmem_contents);

} // extern C

#endif  // __P9_PIBMEM_DUMP_H__
