/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_scaninfo.C $             */
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
/// @file p10_scaninfo.C
/// @brief P10 scan address control functions for platform
///
/// *HWP HW Maintainer: Joe McGill <jmcgill@us.ibm.com>
/// *HWP FW Maintainer:
/// *HWP Consumed by: Cronus, HWSV, HB
///

#ifndef P10_SCANINFO_C
#define P10_SCANINFO_C

#include "p10_scaninfo.H"
#include "p10_scan_addr.H"

extern "C"
{

    uint32_t p10_scaninfo_isChipUnitScanRing(
        uint32_t i_scanAddr,
        bool& o_chipUnitRelated,
        std::vector<p10_chipUnitPairing_t>& o_chipUnitPairing)
    {
        uint32_t l_rc = 0;
        o_chipUnitRelated = false;
        p10_chipUnitPairing_t l_singleChipUnitPairing;

        uint32_t l_chiplet = p10_scan_addr::getChiplet(i_scanAddr);
        uint32_t l_region = p10_scan_addr::getRegion(i_scanAddr);
        uint32_t l_ext_region = p10_scan_addr::getExtendedRegion(i_scanAddr);

        if (p10_scan_addr::isPCIRing(l_chiplet))
        {
            o_chipUnitRelated = true;
            l_singleChipUnitPairing.chipUnitType = PU_PEC_CHIPUNIT;
            l_singleChipUnitPairing.chipUnitNum =
                p10_scan_addr::getPCIInstance(l_chiplet);
            o_chipUnitPairing.push_back(l_singleChipUnitPairing);
        }
        else if (p10_scan_addr::isMCRing(l_chiplet))
        {
            o_chipUnitRelated = true;
            l_singleChipUnitPairing.chipUnitType = PU_MC_CHIPUNIT;
            l_singleChipUnitPairing.chipUnitNum =
                p10_scan_addr::getMCInstance(l_chiplet);
            o_chipUnitPairing.push_back(l_singleChipUnitPairing);
        }
        else if (p10_scan_addr::isEQRing(l_chiplet, l_region))
        {
            o_chipUnitRelated = true;
            l_singleChipUnitPairing.chipUnitType = PU_EQ_CHIPUNIT;
            l_singleChipUnitPairing.chipUnitNum =
                p10_scan_addr::getEQInstance(l_chiplet);
            o_chipUnitPairing.push_back(l_singleChipUnitPairing);
        }
        else if (p10_scan_addr::isECRing(l_chiplet, l_region))
        {
            o_chipUnitRelated = true;
            l_singleChipUnitPairing.chipUnitType = PU_C_CHIPUNIT;
            l_singleChipUnitPairing.chipUnitNum =
                p10_scan_addr::getECInstance(l_chiplet, l_region, l_ext_region);
            o_chipUnitPairing.push_back(l_singleChipUnitPairing);
        }

        return l_rc;
    }

    uint32_t p10_scaninfo_createChipUnitScanAddr(
        p10ChipUnits_t i_P10CU,
        uint8_t i_ChipUnitNum,
        uint32_t i_scanAddr)
    {
        uint32_t o_scanAddr = RC_P10_SCANINFO_BAD_ADDR;
        uint32_t l_chiplet = p10_scan_addr::getChiplet(i_scanAddr);
        uint32_t l_region = p10_scan_addr::getRegion(i_scanAddr);

        switch (i_P10CU)
        {
            case PU_PEC_CHIPUNIT:
                if (p10_scan_addr::isPCIRing(l_chiplet))
                {
                    o_scanAddr = p10_scan_addr::setPCIInst(i_ChipUnitNum, i_scanAddr);
                }

                break;

            case PU_MC_CHIPUNIT:
                if (p10_scan_addr::isMCRing(l_chiplet))
                {
                    o_scanAddr = p10_scan_addr::setMCInst(i_ChipUnitNum, i_scanAddr);
                }

                break;

            case PU_EQ_CHIPUNIT:
                if (p10_scan_addr::isEQRing(l_chiplet, l_region))
                {
                    o_scanAddr = p10_scan_addr::setEQInst(i_ChipUnitNum, i_scanAddr);
                }

                break;

            case PU_C_CHIPUNIT:
                if (p10_scan_addr::isECRing(l_chiplet, l_region))
                {
                    o_scanAddr = p10_scan_addr::setECInst(i_ChipUnitNum, i_scanAddr);
                }

                break;

            default:
                o_scanAddr = i_scanAddr;
        }

        return o_scanAddr;

    }

} // extern "C"

#endif //P10_SCANINFO_C
