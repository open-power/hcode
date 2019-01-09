/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_cu_utils.C $             */
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
/// @file p10_cu_utils.C
/// @brief P10 chip unit utility definitions
///
/// HWP HW Maintainer: Thi Tran <thi@us.ibm.com>
/// HWP FW Maintainer:
/// HWP Consumed by: CRONUS
///

// Includes
#include <p10_cu_utils.H>

#define P10_CU_UTILS_C

extern "C"
{

    //################################################################################
    uint32_t pu_convertCUEnum_to_String(const p10ChipUnits_t i_P10CU,
                                        std::string& o_chipUnitType)
    {
        uint8_t l_index;

        // Look for input chip unit value
        for (l_index = 0;
             l_index < (sizeof(ChipUnitDescriptionTable) / sizeof(p10_chipUnitDescription_t));
             l_index++)
        {
            if (i_P10CU == ChipUnitDescriptionTable[l_index].enumVal)
            {
                // Found a match
                o_chipUnitType = ChipUnitDescriptionTable[l_index].strVal;
                return 0;
            }
        }

        return 1;
    }

    //################################################################################
    uint32_t pu_convertCUString_to_enum(const std::string& i_chipUnitType,
                                        p10ChipUnits_t& o_P10CU)
    {
        uint8_t l_index;

        // Look for input chip unit string
        for (l_index = 0;
             l_index < (sizeof(ChipUnitDescriptionTable) / sizeof(p10_chipUnitDescription_t));
             l_index++)
        {
            if (i_chipUnitType.compare(ChipUnitDescriptionTable[l_index].strVal) == 0)
            {
                // Found a match
                o_P10CU = ChipUnitDescriptionTable[l_index].enumVal;
                return 0;
            }
        }

        return 1;
    }

    //################################################################################
    void displayAddrFields(uint64_t i_addr,
                           p10ChipUnits_t i_chipUnitType,
                           uint32_t i_chipEcLevel)
    {
        p10_scom_addr l_scom(i_addr);
        printf("\n     Chip EC: 0x%.2X\n", i_chipEcLevel);
        printf("        Addr: 0x%08lx_%08llx\n", (i_addr >> 32), (i_addr & 0xFFFFFFFFULL));
        printf("   ChipletId: 0x%02X\n", l_scom.getChipletId());
        printf("       Valid: %d\n", l_scom.isValid());
        printf("    Endpoint: 0x%02X\n", l_scom.getEndpoint());

        // Print out Region select and QME per core for EQ/CORE chip unit
        if ( (i_chipUnitType == PU_C_CHIPUNIT) || (i_chipUnitType == PU_EQ_CHIPUNIT) )
        {
            printf("   RegionSel: 0x%.1X\n", l_scom.getRegionSelect());
            printf("    QME/core: 0x%.1X\n", l_scom.getQMEPerCore());
            printf("   QME SatEn: 0x%.1X\n", l_scom.getQMESatEn());
            printf("  QME SatSel: 0x%.1X\n", l_scom.getQMESatSel());
            printf("     QME Reg: 0x%.2X\n", l_scom.getQMEReg());
        }
        else
        {
            printf("      RingId: 0x%.1X\n", l_scom.getRingId());
            printf("       SatId: 0x%.1X\n", l_scom.getSatId());
            printf("      SatReg: 0x%.2X\n", l_scom.getSatOffset());
        }

        return;
    }

    //################################################################################
    uint8_t validateChipUnitNum(const uint8_t i_chipUnitNum,
                                const p10ChipUnits_t i_chipUnitType)
    {
        uint8_t l_rc = 0;
        uint8_t l_index;

        for (l_index = 0;
             l_index < (sizeof(ChipUnitDescriptionTable) / sizeof(p10_chipUnitDescription_t));
             l_index++)
        {
            // Looking for input chip unit type in table
            if (i_chipUnitType == ChipUnitDescriptionTable[l_index].enumVal)
            {
                // Found a match, check input i_chipUnitNum to be <= max chip unit num
                // for this unit type
                if (i_chipUnitNum > ChipUnitDescriptionTable[l_index].maxChipUnitNum)
                {
                    l_rc = 1;
                }

                // Additional check for PERV targets, where there are gaps between instances
                else if (i_chipUnitType == PU_PERV_CHIPUNIT)
                {
                    if ( (i_chipUnitNum == 0) ||
                         ((i_chipUnitNum > 3) && (i_chipUnitNum < 8)) ||
                         ((i_chipUnitNum > 9) && (i_chipUnitNum < 12)) ||
                         ((i_chipUnitNum > 19) && (i_chipUnitNum < 24)) )
                    {
                        l_rc = 1;
                    }
                }

                // Additional check for PPE targets, where there are gaps between instances
                else if (i_chipUnitType == PU_PPE_CHIPUNIT)
                {
                    if ( ((i_chipUnitNum > 0) && (i_chipUnitNum < 4))   ||
                         ((i_chipUnitNum > 7) && (i_chipUnitNum < 16))  ||
                         ((i_chipUnitNum > 19) && (i_chipUnitNum < 32)) )
                    {
                        l_rc = 1;
                    }
                }

                // Additional check for PAU targets, where instance 1 and 2 are not valid
                else if (i_chipUnitType == PU_PAU_CHIPUNIT)
                {
                    if ( (i_chipUnitNum == 1) || (i_chipUnitNum == 2) )
                    {
                        l_rc = 1;
                    }
                }

                break;
            }
        }

        // Can't find i_chipUnitType in table
        if ( l_index >= (sizeof(ChipUnitDescriptionTable) / sizeof(p10_chipUnitDescription_t)) )
        {
            l_rc = 1;
        }

        return (l_rc);
    }

} // extern "C"

#undef P10_CU_UTILS_C
