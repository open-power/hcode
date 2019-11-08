/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_scaninfo.H $             */
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
/// @file p10_scaninfo.H
/// @brief P10 scan address control functions for platform
///
/// *HWP HW Maintainer: Joe McGill <jmcgill@us.ibm.com>
/// *HWP FW Maintainer:
/// *HWP Consumed by: Cronus, HWSV, HB
///

#ifndef P10_SCANINFO_H
#define P10_SCANINFO_H

#include <vector>
#include "p10_scan_addr.H"
#include "p10_cu.H"

extern "C" {

    const uint32_t RC_P10_SCANINFO_BAD_ADDR = 0xFFFFFFFFUL;

    /**
     @brief determines if the scan address correlates to a chipUnit, if so returns
            a vector of associated chipUnits and their instance numbers
     @param i_scanAddr         scan address to test
     @param o_chipUnitRelated  bool returns true if scan addr is a chipUnit Addr
     @param o_chipUnitPairing  vector of matching chipUnitPairings
     @retval uint32_t return non-zero for error
    */
    uint32_t p10_scaninfo_isChipUnitScanRing(
        uint32_t i_scanAddr,
        bool& o_chipUnitRelated,
        std::vector<p10_chipUnitPairing_t>& o_chipUnitPairing);

    /**
     @brief creates the actual physical scan addr based on the chipunit,
            chipUnitNum, and chipUnit zero's scan addr
     @param i_P10CU       enumeration of the ChipUnit
     @param i_ChipUnitNum instance number of the chipUnit
     @param i_scanAddr    scan addr of chipUnit zero
     @retval uint32_t actual scan addr for the chipUnit/chipUnitNum passed in
    */
    uint32_t p10_scaninfo_createChipUnitScanAddr(
        p10ChipUnits_t i_P10CU,
        uint8_t i_ChipUnitNum,
        uint32_t i_scanAddr);


} // extern "C"

#endif /* P10_SCANINFO_H */
