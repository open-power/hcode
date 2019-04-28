/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_scan_addr.C $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2020                                                    */
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
/// @file p10_scan_addr.C
/// @brief P10 scan address utility functions for platforms
///
/// *HWP HW Maintainer: Joe McGill <jmcgill@us.ibm.com>
/// *HWP FW Maintainer:
/// *HWP Consumed by: Cronus, HWSV, HB
///

#ifndef P10_SCAN_ADDR_C
#define P10_SCAN_ADDR_C

#include "p10_scan_addr.H"

extern "C"
{

    bool p10_scan_addr::supportedByShiftEngine(uint32_t i_addr)
    {
        return (getExtendedRegion(i_addr) == 0);
    }

    bool p10_scan_addr::isVitlRing(uint32_t i_addr)
    {
        return (((i_addr >> 16) & 0xF) == 0);
    }

    uint32_t p10_scan_addr::getScanType(uint32_t i_addr)
    {
        return (i_addr & 0xF);
    }

    uint32_t p10_scan_addr::getRegion(uint32_t i_addr)
    {
        return ((0x0000FFF0UL & i_addr) >> 4);
    }

    uint32_t p10_scan_addr::setRegion(uint32_t i_region, uint32_t i_addr)
    {
        i_region = i_region << 4;
        return ((i_region & 0x0000FFF0UL) |
                (i_addr   & 0xFFFF000FUL));
    }

    uint32_t p10_scan_addr::getExtendedRegion(uint32_t i_addr)
    {
        return ((0x00F00000UL & i_addr) >> 20);
    }

    uint32_t p10_scan_addr::setExtendedRegion(uint32_t i_ext_region, uint32_t i_addr)
    {
        i_ext_region = i_ext_region << 20;
        return ((i_ext_region & 0x00F00000UL) |
                (i_addr       & 0xFF0FFFFFUL));
    }

    uint32_t p10_scan_addr::getChiplet(uint32_t i_addr)
    {
        return ((0xFF000000UL & i_addr) >> 24);
    }

    uint32_t p10_scan_addr::setChiplet(uint32_t i_chiplet, uint32_t i_addr)
    {
        i_chiplet = i_chiplet << 24;
        return ((i_chiplet & 0xFF000000UL) |
                (i_addr    & 0x00FFFFFFUL));
    }

// PCI
    bool p10_scan_addr::isPCIRing(uint32_t i_chiplet)
    {
        return ((0x08 <= i_chiplet) && (i_chiplet <= 0x09));
    }

    uint8_t p10_scan_addr::getPCIInstance(uint32_t i_chiplet)
    {
        return (i_chiplet - 0x08);
    }

    uint32_t p10_scan_addr::setPCIInst(uint32_t i_inst, uint32_t i_addr)
    {
        return (setChiplet(0x08 + i_inst, i_addr));
    }

// MC
    bool p10_scan_addr::isMCRing(uint32_t i_chiplet)
    {
        return ((0x0C <= i_chiplet) && (i_chiplet <= 0x0F));
    }

    uint8_t p10_scan_addr::getMCInstance(uint32_t i_chiplet)
    {
        return (i_chiplet - 0x0C);
    }

    uint32_t p10_scan_addr::setMCInst(uint32_t i_inst, uint32_t i_addr)
    {
        return (setChiplet(0x0C + i_inst, i_addr));
    }

// IOHS
    bool p10_scan_addr::isIOHSRing(uint32_t i_chiplet)
    {
        return ((0x18 <= i_chiplet) & (i_chiplet <= 0x1F));
    }

    uint8_t p10_scan_addr::getIOHSInstance(uint32_t i_chiplet)
    {
        return (i_chiplet - 0x18);
    }

    uint32_t p10_scan_addr::setIOHSInst(uint32_t i_inst, uint32_t i_addr)
    {
        return (setChiplet(0x18 + i_inst, i_addr));
    }

// EQ
    bool p10_scan_addr::isEQRing(uint32_t i_chiplet, uint32_t i_region)
    {
        return (((0x20 <= i_chiplet) && (i_chiplet <= 0x27)) &&
                (i_region & 0xC00UL));
    }

    uint8_t p10_scan_addr::getEQInstance(uint32_t i_chiplet)
    {
        return (i_chiplet - 0x20);
    }

    uint32_t p10_scan_addr::setEQInst(uint32_t i_inst, uint32_t i_addr)
    {
        return (setChiplet(0x20 + i_inst, i_addr));
    }

// C
    bool p10_scan_addr::isECRing(uint32_t i_chiplet, uint32_t i_region)
    {
        return (((0x20 <= i_chiplet) && (i_chiplet <= 0x27)) &&
                ((i_region & 0xC00UL) == 0x0UL));
    }

    uint8_t p10_scan_addr::getECInstance(uint32_t i_chiplet, uint32_t i_region, uint32_t i_ext_region)
    {
        // find first core instance in this quad
        uint32_t l_instance = getEQInstance(i_chiplet);
        l_instance *= 4;

        // add instance offset based on region
        if ((i_region & 0x110UL) || (i_ext_region & 0x4UL))
        {
            l_instance += 1; // cl21 or l31 or mma1
        }
        else if ((i_region & 0x088UL) || (i_ext_region & 0x2UL))
        {
            l_instance += 2; // cl22 or l32 or mma2
        }
        else if ((i_region & 0x044UL) || (i_ext_region & 0x1UL))
        {
            l_instance += 3; // cl23 or l33 or mma3
        }

        return l_instance;
    }

    uint32_t p10_scan_addr::setECInst(uint32_t i_inst, uint32_t i_addr)
    {
        // obtain region information
        uint32_t l_region = getRegion(i_addr);
        uint32_t l_ext_region = getExtendedRegion(i_addr);

        // set chiplet ID to enclosing quad
        uint32_t l_addr = setChiplet(0x20 + (i_inst / 4), i_addr);
        // shift region information based on offset wtihin quad
        l_addr = setRegion(l_region >> (i_inst % 4), l_addr);
        l_addr = setExtendedRegion(l_ext_region >> (i_inst % 4), l_addr);
        return l_addr;
    }

} // extern "C"

#endif // P10_SCAN_ADDR_C
