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
#include <stdio.h>

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

        // Print out EQ chiplet SCOM layout depending on endpoint
        if ( (i_chipUnitType == PU_C_CHIPUNIT) ||
             (i_chipUnitType == PU_EQ_CHIPUNIT) ||
             ((i_chipUnitType == P10_NO_CU) &&
              (l_scom.getChipletId() >= EQ0_CHIPLET_ID) &&
              (l_scom.getChipletId() <= EQ7_CHIPLET_ID)) )
        {
            // QME endpoint, show QME specific fields
            if ( l_scom.getEndpoint() == QME_ENDPOINT )
            {
                printf("   RegionSel: 0x%.1X\n", l_scom.getRegionSelect());
                printf("    QME/core: 0x%.1X\n", l_scom.getQMEPerCore());
                printf("   QME SatEn: 0x%.1X\n", l_scom.getQMESatEn());
                printf("  QME SatSel: 0x%.1X\n", l_scom.getQMESatSel());
                printf("     QME Reg: 0x%.2X\n", l_scom.getQMEReg());
            }
            // PSCOM or PCB slave, RingId/SatId are limited
            else if (( l_scom.getEndpoint() == PSCOM_ENDPOINT ) ||
                     ( l_scom.getEndpoint() == PSCOM_2_ENDPOINT ) ||
                     ( l_scom.getEndpoint() == PCBSLV_ENDPOINT) )
            {
                printf("EQ RegionSel: 0x%.1X\n", l_scom.getRegionSelect());
                printf("   EQ RingId: 0x%.1X\n", l_scom.getEQRingId());
                printf("    EQ SatId: 0x%.1X\n", l_scom.getEQSatId());
                printf("      SatReg: 0x%.2X\n", l_scom.getSatOffset());
            }
            else
            {
                printf("      RingId: 0x%.1X\n", l_scom.getRingId());
                printf("       SatId: 0x%.1X\n", l_scom.getSatId());
                printf("      SatReg: 0x%.2X\n", l_scom.getSatOffset());
            }
        }
        else
        {
            printf("      RingId: 0x%.1X\n", l_scom.getRingId());
            printf("       SatId: 0x%.1X\n", l_scom.getSatId());
            printf("      SatReg: 0x%.2X\n", l_scom.getSatOffset());
        }

        // Additional display for indirect SCOM
        if ( l_scom.isIndirect() )
        {
            // Display  values of the OBUS Super Wrapper (upper 32-bit)
            if ( l_scom.isIoHsTarget() )
            {
                printf("\nOBUS Super Wrapper:\n");
                printf("    Reg addr: 0x%.3X\n", l_scom.getIoRegAddr());
                printf("TX/RX select: 0x%.1X\n", l_scom.getIoTxRxBit());
                printf("  Group Addr: 0x%.2X\n", l_scom.getIoGroupAddr());
                printf("        Lane: 0x%.2X\n", l_scom.getIoLane());
            }

            // Display  values of IOP
            else if ( l_scom.isPecTarget() )
            {
                printf("\nIOP Indirect:\n");
                printf("    Indirect CR register (12:31): 0x%.5X\n", l_scom.getIopIndCRreg());
                printf("    Top (53): %d\n", l_scom.getIopTop());
                printf("    PMA (15): %d\n", l_scom.getPMA());
            }
        }

        return;
    }

} // extern "C"

#undef P10_CU_UTILS_C
