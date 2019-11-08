/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_cu_utils.H $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2019                                                    */
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
/// @file p10_cu_utils.H
/// @brief P10 chip unit utility definitions
///
/// HWP HW Maintainer: Thi Tran <thi@us.ibm.com>
/// HWP FW Maintainer:
/// HWP Consumed by: CRONUS
///

#ifndef P10_CU_UTILS_H
#define P10_CU_UTILS_H

// includes
#include <string>
#include <p10_cu.H>
#include <p10_scom_addr.H>

extern "C"
{
    /// @brief Convert chip unit enumeration to string
    /// @param[in] i_P10CU Enumeration of chip unit type
    /// @param[out] o_chipUnitType String description of chip unit type
    /// @retval uint32_t Return non-zero for error
    uint32_t pu_convertCUEnum_to_String(const p10ChipUnits_t i_P10CU,
                                        std::string& o_chipUnitType);

    /// @brief Convert string description of chip unit type to enumeration
    /// @param[out] i_chipUnitType String description of chip unit type
    /// @param[out] o_P10CU Enumeration of chip unit type
    /// @retval uint32_t Return non-zero for error
    uint32_t pu_convertCUString_to_enum(const std::string& i_chipUnitType,
                                        p10ChipUnits_t& o_P10CU);

    /// @brief Debug utility that prints out address fields
    /// @param[in] i_addr         Address value
    /// @param[in] i_chipUnitType Chip unit type
    /// @param[in] i_chipEcLevel  Chip EC level
    /// @retval None
    void displayAddrFields(uint64_t i_addr,
                           p10ChipUnits_t i_chipUnitType,
                           uint32_t i_chipEcLevel);

} // extern "C"

#endif /* P10_CU_UTILS_H */
