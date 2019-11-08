/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_scan_addr.H $            */
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
/// @file p10_scan_addr.H
/// @brief P10 scan address utility functions for platforms
///
/// *HWP HW Maintainer: Joe McGill <jmcgill@us.ibm.com>
/// *HWP FW Maintainer:
/// *HWP Consumed by: Cronus, HWSV, HB
///

#ifndef P10_SCAN_ADDR_H
#define P10_SCAN_ADDR_H

#include "p10_cu.H"

extern "C"
{

    class p10_scan_addr
    {
        public:
            static bool supportedByShiftEngine(uint32_t i_addr);

            static bool isVitlRing(uint32_t i_addr);
            static uint32_t getRegion(uint32_t i_addr);
            static uint32_t setRegion(uint32_t i_region, uint32_t i_addr);
            static uint32_t getExtendedRegion(uint32_t i_addr);
            static uint32_t setExtendedRegion(uint32_t i_ext_region, uint32_t i_addr);
            static uint32_t getChiplet(uint32_t i_addr);
            static uint32_t setChiplet(uint32_t i_chiplet, uint32_t i_addr);
            static uint32_t getScanType(uint32_t i_addr);

            static bool isPCIRing(uint32_t i_chiplet);
            static uint8_t getPCIInstance(uint32_t i_chiplet);
            static uint32_t setPCIInst(uint32_t i_inst, uint32_t i_addr);

            static bool isMCRing(uint32_t i_chiplet);
            static uint8_t getMCInstance(uint32_t i_chiplet);
            static uint32_t setMCInst(uint32_t i_inst, uint32_t i_addr);

            static bool isEQRing(uint32_t i_chiplet, uint32_t i_region);
            static uint8_t getEQInstance(uint32_t i_chiplet);
            static uint32_t setEQInst(uint32_t i_inst, uint32_t i_addr);

            static bool isECRing(uint32_t i_chiplet, uint32_t i_region);
            static uint8_t getECInstance(uint32_t i_chiplet, uint32_t i_reghion, uint32_t i_ext_region);
            static uint32_t setECInst(uint32_t i_inst, uint32_t i_addr);
    };

} // extern "C"

#endif // P10_SCAN_ADDR_H
