/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_clockcntl.C $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
/// @file p10_clockcntl.C
/// @brief Clock control procedure used by Cronus, used in the product
///        code and Flex, also user defined dll.
///
/// HWP HW Maintainer: Thi Tran <thi@us.ibm.com>
/// HWP FW Maintainer:
/// HWP Consumed by: CRONUS
///
#include <p10_clockcntl.H>
#include <p10_scom_addr.H>
#include <p10_cu_utils.H>
#include <CronusData.H>   // Cronus won't have clock domains defined until it has ENGD.
#include <p10_scominfo.H> // For p10_scominfo_createChipUnitScomAddr call

#define P10_CLOCKCNTL_C

// DEBUG:
// DEBUG_PRINT is set in ekb/chips/p10/common/scominfo/wrapper/p10_scom_xlate.mk

extern "C"
{

// ####################################################################################
#ifndef P10

    uint32_t p10_clockcntl_getScomClockDomain_INTERNAL(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            const uint64_t i_scomAddr,
            CLOCK_DOMAIN& o_domain,
            const uint32_t i_mode)
#else
    uint32_t p10_clockcntl_getScomClockDomain(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            const uint64_t i_scomAddr,
            CLOCK_DOMAIN& o_domain,
            const uint32_t i_mode)
#endif
    {
        uint32_t l_rc = 0;
        uint64_t l_xlatedAddr = 0;
        uint32_t l_EcLevel = 0;
        uint8_t l_index = 0;
        uint32_t l_i_mode = 0;

#ifdef DEBUG_PRINT
        printf("\nEntering p10_clockcntl_getScomClockDomain\n");
        std::string l_chipUnitStr;
        uint32_t l_rc1 = 0;
        l_rc1 = pu_convertCUEnum_to_String(i_p10CU, l_chipUnitStr);

        if (l_rc1)
        {
            printf("\nError: Can not convert chip unit type to string!\n");
        }
        else
        {
            printf(" Chip unit type: %s\n", l_chipUnitStr.c_str());
            printf("  Chip unit num: %d\n", i_chipUnitNum);
            printf("      SCOM addr: 0x%08lx_%08llx\n", (i_scomAddr >> 32), (i_scomAddr & 0xFFFFFFFFULL));
            printf("           Mode: %d\n", i_mode);
        }

#endif

        do
        {

            // Default to bad domain
            o_domain = P10_FAKE_DOMAIN;

            // Validate i_chipUnitNum value
            l_rc = validateChipUnitNum(i_chipUnitNum, i_p10CU);

            if (l_rc)
            {
                break;
            }

            // Convert input address to that of the i_chipUnitNum instance
            // in order to get the correct chiplet Id, ringId, etc...
            l_xlatedAddr = p10_scominfo_createChipUnitScomAddr(i_p10CU,
                           l_EcLevel,
                           i_chipUnitNum,
                           i_scomAddr,
                           l_i_mode);

            if (l_xlatedAddr == FAILED_TRANSLATION)
            {
                l_rc = 1;
                break;
            }

            // Get address fields
            p10_scom_addr l_addr(l_xlatedAddr);
            uint8_t l_chipletId = l_addr.getChipletId();
            uint8_t l_ringId = l_addr.getRingId();
            uint8_t l_endPoint = l_addr.getEndpoint();

#ifdef DEBUG_PRINT
            printf("\nDetermine Clock domain for addr 0x%08lx_%08llx; ChipletId 0x%.2X; RingId 0x%.2X\n",
                   (l_xlatedAddr >> 32), (l_xlatedAddr & 0xFFFFFFFFULL), l_chipletId, l_ringId);
#endif

            // Set to P10_TP_VITL_DOMAIN if multicast
            if (l_addr.isMulticast())
            {
                o_domain = P10_TP_VITL_DOMAIN;
                break;
            }

            // ----------------------------------------------------------------------------------
            // For all chiplets, if endpoint is Chiplet control or Clock control, domain is Vital
            // ----------------------------------------------------------------------------------

            if ( (l_endPoint == CHIPLET_CTRL_ENDPOINT) || // 0x0
                 (l_endPoint == CLOCK_CTRL_ENDPOINT) )    // 0x3
            {

#ifdef DEBUG_PRINT
                printf("\nChipletVitalDomainTable look-up: ChipletId 0x%.2X\n", l_chipletId);
#endif
                o_domain = ChipletVitalDomainTable[l_chipletId];

                // Check for invalid chiplet ID that results in bad domain
                if (o_domain == P10_FAKE_DOMAIN)
                {
                    l_rc = 1;
                }

                break;  // Done if address is of Vital clock domain
            }

            // ----------------------------------------------------------------------------------
            // Get clock domain for non-EQ chiplet Id
            // Use look-up ChipletRingClockDomainTable
            // ----------------------------------------------------------------------------------
            if (l_chipletId < EQ0_CHIPLET_ID)
            {
#ifdef DEBUG_PRINT
                printf("\nChipletRingClockDomainTable look-up: ChipletId 0x%.2X, RingId 0x%.2X\n", l_chipletId, l_ringId);
#endif

                // Find matching Chiplet and Ring Ids in table
                for (l_index = 0;
                     l_index < ( sizeof(ChipletRingClockDomainTable) / sizeof(ChipletRingClockDomain_t) );
                     ++l_index)
                {
                    if ( (ChipletRingClockDomainTable[l_index].chipletId == l_chipletId) &&
                         (ChipletRingClockDomainTable[l_index].ringId == l_ringId) )
                    {
                        o_domain = ChipletRingClockDomainTable[l_index].domain;
                        break;
                    }
                }

                // If no match, re-run and look for ALL_GOOD_ID to pick-up 'allgood' clock domain
                if (o_domain == P10_FAKE_DOMAIN)
                {
#ifdef DEBUG_PRINT
                    printf("\nRe-run ChipletRingClockDomainTable look-up: ChipletId 0x%.2X, RingId 0x%.2X\n", l_chipletId, ALL_GOOD_ID);
#endif

                    for (l_index = 0;
                         l_index < ( sizeof(ChipletRingClockDomainTable) / sizeof(ChipletRingClockDomain_t) );
                         ++l_index)
                    {
                        if ( (ChipletRingClockDomainTable[l_index].chipletId == l_chipletId) &&
                             (ChipletRingClockDomainTable[l_index].ringId == ALL_GOOD_ID) )
                        {
                            o_domain = ChipletRingClockDomainTable[l_index].domain;
                            break;
                        }
                    }
                }

                if (o_domain == P10_FAKE_DOMAIN)
                {
                    l_rc = 1;
                    break;
                }

                // Done with non-EQ chiplet
                break;
            }

            // ----------------------------------------------------------------------------------
            // Get clock domain for EQ chiplets
            // Use look-up EQ_ClockDomain_Table
            // ----------------------------------------------------------------------------------

            // Address of EQ chiplets can be either Quad, CORE/L2, or L3 region.
            // Default to Quad region, and if address is of a core, determine if
            // it is for CORE/L2 or L3 region.
            uint8_t l_region = QUAD_REGION;
            uint8_t l_coreNum = DONT_CARE;

            // If core address, determine if it's CORE/L2 or L3
            if (l_addr.isCoreTarget())
            {
                // Intentionally set this here to emphasize that
                // endpoint 0xE is always QME domain.
                if (l_endPoint == QME_ENDPOINT)      // 0xE
                {
                    l_region = QUAD_REGION;
                }
                // Check if address belongs to CORE/L2
                else if (l_endPoint == PSCOM_2_ENDPOINT)
                {
                    l_region = COREL2_REGION;
                }
                // Check if address belongs to L3
                else if (l_endPoint == PSCOM_ENDPOINT)
                {
                    l_region = L3_REGION;
                }

                // Get the CORE number in the EQ chiplet (0-3)
                if ( (l_region == COREL2_REGION) ||
                     (l_region = L3_REGION) )
                {
                    l_coreNum = l_addr.getCoreTargetInstance() - ( (l_chipletId - EQ0_CHIPLET_ID) * 4 );
                }
            }

            // Look up the domain from the EQ clock domain table

#ifdef DEBUG_PRINT
            printf("\nEQ_ClockDomain_Table look-up: ChipletId 0x%.2X, EQ target type %d, Core Number %d\n",
                   l_chipletId, l_region, l_coreNum);
#endif

            for (l_index = 0;
                 l_index < ( sizeof(EQ_ClockDomain_Table) / sizeof(EQ_ClockDomain_t) );
                 ++l_index)
            {
                if ( (EQ_ClockDomain_Table[l_index].chipletId == l_chipletId) &&
                     (EQ_ClockDomain_Table[l_index].region == l_region) &&
                     (EQ_ClockDomain_Table[l_index].coreNum == l_coreNum) )
                {
                    o_domain = EQ_ClockDomain_Table[l_index].domain;
                    break;
                }
            }

        }
        while(0);

#ifdef DEBUG_PRINT

        if (l_rc == 0)
        {
            std::string l_clockDomainStr = p10_clockcntl_convertClockDomainEnum(o_domain);
            printf("  Output domain: %d (%s)\n", o_domain, l_clockDomainStr.c_str());
        }

        printf("Exiting p10_clockcntl_getScomClockDomain. l_rc = %d\n", l_rc);
#endif
        return l_rc;
    }

// ####################################################################################
// This is done for supporting DLL_OVERRIDE.
#ifndef P10
    uint32_t p10_clockcntl_getScomClockDomain(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            const uint64_t i_scomAddr,
            CLOCK_DOMAIN& o_domain,
            const uint32_t i_mode)
    {
        return p10_clockcntl_getScomClockDomain_INTERNAL(i_p10CU,
                i_chipUnitNum,
                i_scomAddr,
                o_domain,
                i_mode);
    }
#endif

// ####################################################################################
#ifndef P10
    std::string p10_clockcntl_convertClockDomainEnum_INTERNAL(CLOCK_DOMAIN i_domain)
#else
    std::string p10_clockcntl_convertClockDomainEnum(CLOCK_DOMAIN i_domain)
#endif
    {
        std::string l_ret = "ALL";
        uint8_t l_index;

        // Look for input domain enum
        for (l_index = 0;
             l_index < (sizeof(ClockDomainStrAddrMaskTable) / sizeof(ClockDomainStrAddrMask_t));
             l_index++)
        {
            if (i_domain == ClockDomainStrAddrMaskTable[l_index].domainEnum)
            {
                // Found a match
                l_ret = std::string(ClockDomainStrAddrMaskTable[l_index].domainStr);
                break;
            }
        }

        return l_ret;
    }

// ####################################################################################
#ifndef P10
    std::string p10_clockcntl_convertClockDomainEnum(CLOCK_DOMAIN i_domain)
    {
        return p10_clockcntl_convertClockDomainEnum_INTERNAL(i_domain);
    }
#endif

// ####################################################################################
#ifndef P10
    CLOCK_DOMAIN p10_clockcntl_convertClockDomainString_INTERNAL(std::string i_domain)
#else
    CLOCK_DOMAIN p10_clockcntl_convertClockDomainString(std::string i_domain)
#endif
    {
        CLOCK_DOMAIN l_ret = CLOCK_DOMAIN_INVALID;
        uint8_t l_index;

        // Look for input string
        for (l_index = 0;
             l_index < (sizeof(ClockDomainStrAddrMaskTable) / sizeof(ClockDomainStrAddrMask_t));
             l_index++)
        {
            if (i_domain.compare(std::string(ClockDomainStrAddrMaskTable[l_index].domainStr)) == 0)
            {
                // Found a match
                l_ret = ClockDomainStrAddrMaskTable[l_index].domainEnum;
                break;
            }
        }

        return l_ret;
    }

// ####################################################################################
#ifndef P10
    CLOCK_DOMAIN p10_clockcntl_convertClockDomainString(std::string i_domain)
    {
        return p10_clockcntl_convertClockDomainString_INTERNAL(i_domain);
    }
#endif

// ####################################################################################
    uint32_t p10_clockcntl_getScanClockDomain(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            CLOCK_DOMAIN& io_domain,
            const uint32_t i_mode)
    {
        uint32_t l_rc = 0;

        // Use macro to convert to the input domain to the one for i_chipUnitNum
        // ## is the macro concatenation operator

        // -------------------------------
        // MC chiplets
        // -------------------------------
#define CHECKMC(P)                         \
    if (io_domain == P10_MC0_##P##_DOMAIN  ||  \
        io_domain == P10_MC1_##P##_DOMAIN  ||  \
        io_domain == P10_MC2_##P##_DOMAIN  ||  \
        io_domain == P10_MC3_##P##_DOMAIN ) {  \
        switch (i_chipUnitNum) {             \
            case 0 : io_domain = P10_MC0_##P##_DOMAIN; break; \
            case 1 : io_domain = P10_MC1_##P##_DOMAIN; break; \
            case 2 : io_domain = P10_MC2_##P##_DOMAIN; break; \
            case 3 : io_domain = P10_MC3_##P##_DOMAIN; break; \
            default : l_rc = 1; \
        } \
    }
        CHECKMC(VITL)
        CHECKMC(MC)
        CHECKMC(ODLIOO)
        CHECKMC(PLL)

        // -------------------------------
        // EQ chiplets
        // -------------------------------
#define CHECKEQ(P)                            \
    if (io_domain == P10_EQ0_##P##_DOMAIN ||  \
        io_domain == P10_EQ1_##P##_DOMAIN ||  \
        io_domain == P10_EQ2_##P##_DOMAIN ||  \
        io_domain == P10_EQ3_##P##_DOMAIN ||  \
        io_domain == P10_EQ4_##P##_DOMAIN ||  \
        io_domain == P10_EQ5_##P##_DOMAIN ||  \
        io_domain == P10_EQ6_##P##_DOMAIN ||  \
        io_domain == P10_EQ7_##P##_DOMAIN) {  \
        switch (i_chipUnitNum) { \
            case 0 : io_domain = P10_EQ0_##P##_DOMAIN; break; \
            case 1 : io_domain = P10_EQ1_##P##_DOMAIN; break; \
            case 2 : io_domain = P10_EQ2_##P##_DOMAIN; break; \
            case 3 : io_domain = P10_EQ3_##P##_DOMAIN; break; \
            case 4 : io_domain = P10_EQ4_##P##_DOMAIN; break; \
            case 5 : io_domain = P10_EQ5_##P##_DOMAIN; break; \
            case 6 : io_domain = P10_EQ6_##P##_DOMAIN; break; \
            case 7 : io_domain = P10_EQ7_##P##_DOMAIN; break; \
            default : l_rc = 1; \
        } \
    }
        CHECKEQ(VITL)
        CHECKEQ(ECL20)
        CHECKEQ(ECL21)
        CHECKEQ(ECL22)
        CHECKEQ(L30)
        CHECKEQ(L31)
        CHECKEQ(L32)
        CHECKEQ(L33)
        CHECKEQ(MMA0)
        CHECKEQ(MMA1)
        CHECKEQ(MMA2)
        CHECKEQ(MMA3)
        CHECKEQ(QME)

        // -------------------------------
        // PCI chiplets
        // -------------------------------
#define CHECKPCI(P)                            \
    if (io_domain == P10_PCI0_##P##_DOMAIN ||  \
        io_domain == P10_PCI1_##P##_DOMAIN) {   \
        switch (i_chipUnitNum) { \
            case 0 : io_domain = P10_PCI0_##P##_DOMAIN; break; \
            case 1 : io_domain = P10_PCI1_##P##_DOMAIN; break; \
            default : l_rc = 1; \
        } \
    }
        CHECKPCI(VITL)
        CHECKPCI(PH5)
        CHECKPCI(IOP)
        CHECKPCI(PLL)

        // -------------------------------
        // AXON chiplets
        // -------------------------------
#define CHECKAXON(P)                            \
    if (io_domain == P10_AXON0_##P##_DOMAIN ||  \
        io_domain == P10_AXON1_##P##_DOMAIN ||  \
        io_domain == P10_AXON2_##P##_DOMAIN ||  \
        io_domain == P10_AXON3_##P##_DOMAIN ||  \
        io_domain == P10_AXON4_##P##_DOMAIN ||  \
        io_domain == P10_AXON5_##P##_DOMAIN ||  \
        io_domain == P10_AXON6_##P##_DOMAIN ||  \
        io_domain == P10_AXON7_##P##_DOMAIN) {   \
        switch (i_chipUnitNum) { \
            case 0 : io_domain = P10_AXON0_##P##_DOMAIN; break; \
            case 1 : io_domain = P10_AXON1_##P##_DOMAIN; break; \
            case 2 : io_domain = P10_AXON2_##P##_DOMAIN; break; \
            case 3 : io_domain = P10_AXON3_##P##_DOMAIN; break; \
            case 4 : io_domain = P10_AXON4_##P##_DOMAIN; break; \
            case 5 : io_domain = P10_AXON5_##P##_DOMAIN; break; \
            case 6 : io_domain = P10_AXON6_##P##_DOMAIN; break; \
            case 7 : io_domain = P10_AXON7_##P##_DOMAIN; break; \
            default : l_rc = 1; \
        } \
    }
        CHECKAXON(VITL)
        CHECKAXON(IOO)
        CHECKAXON(ODL)
        CHECKAXON(NDL)
        CHECKAXON(PDL)
        CHECKAXON(PLL)

        // -------------------------------
        // PAU chiplets
        // -------------------------------
#define CHECKPAU(P)                            \
    if (io_domain == P10_PAU0_##P##_DOMAIN ||  \
        io_domain == P10_PAU1_##P##_DOMAIN ||  \
        io_domain == P10_PAU2_##P##_DOMAIN ||  \
        io_domain == P10_PAU3_##P##_DOMAIN) {   \
        switch (i_chipUnitNum) { \
            case 0 : io_domain = P10_PAU0_##P##_DOMAIN; break; \
            case 1 : io_domain = P10_PAU1_##P##_DOMAIN; break; \
            case 2 : io_domain = P10_PAU2_##P##_DOMAIN; break; \
            case 3 : io_domain = P10_PAU3_##P##_DOMAIN; break; \
            default : l_rc = 1; \
        } \
    }
        CHECKPAU(VITL)
        CHECKPAU(TLPPE)

        // PAU NTLOTL domain is special case
        if ( (io_domain == P10_PAU0_PAU0_NTLOTL_DOMAIN) ||
             (io_domain == P10_PAU1_PAU3_NTLOTL_DOMAIN) ||
             (io_domain == P10_PAU2_PAU4_NTLOTL_DOMAIN) ||
             (io_domain == P10_PAU3_PAU6_NTLOTL_DOMAIN) )
        {
            switch (i_chipUnitNum)
            {
                case 0 :
                    io_domain = P10_PAU0_PAU0_NTLOTL_DOMAIN;
                    break;

                case 1 :
                    io_domain = P10_PAU1_PAU3_NTLOTL_DOMAIN;
                    break;

                case 2 :
                    io_domain = P10_PAU2_PAU4_NTLOTL_DOMAIN;
                    break;

                case 3 :
                    io_domain = P10_PAU3_PAU6_NTLOTL_DOMAIN;
                    break;

                default :
                    l_rc = 1;
            }
        }
        else if ( (io_domain == P10_PAU2_PAU5_NTLOTL_DOMAIN) ||
                  (io_domain == P10_PAU3_PAU7_NTLOTL_DOMAIN) )
        {
            switch (i_chipUnitNum)
            {
                case 0 :
                    l_rc = 1;
                    break;  // No equivalent domain for PAU0

                case 1 :
                    l_rc = 1;
                    break;  // No equivalent domain for PAU1

                case 2 :
                    io_domain = P10_PAU2_PAU5_NTLOTL_DOMAIN;
                    break;

                case 3 :
                    io_domain = P10_PAU3_PAU7_NTLOTL_DOMAIN;
                    break;

                default :
                    l_rc = 1;
            }
        }

        return l_rc;
    }


// ####################################################################################
    uint32_t p10_clockcntl_getClockCheckData(const CLOCK_DOMAIN i_domain,
            uint64_t& o_clockAddr,
            uint64_t& o_clockMask,
            uint32_t& o_mode )
    {
        uint32_t l_rc = 0;
        uint8_t l_index = 0;

        // Init output values
        o_clockAddr = 0xFFFFFFFFFFFFFFFFULL;
        o_clockMask = 0xFFFFFFFFFFFFFFFFULL;
        o_mode = 1;

#ifdef DEBUG_PRINT
        std::string l_clockDomainStr = p10_clockcntl_convertClockDomainEnum(i_domain);
        printf(" \nClockDomainStrAddrMaskTable look-up: domain %s\n", l_clockDomainStr.c_str());
#endif

        // Look for input domain enum
        for (l_index = 0;
             l_index < (sizeof(ClockDomainStrAddrMaskTable) / sizeof(ClockDomainStrAddrMask_t));
             l_index++)
        {
            if (i_domain == ClockDomainStrAddrMaskTable[l_index].domainEnum)
            {
                // Found a match
                o_clockAddr = ClockDomainStrAddrMaskTable[l_index].clockAddr;
                o_clockMask = ClockDomainStrAddrMaskTable[l_index].clockMask;
                break;
            }
        }

        // Error, can't find input entry in table
        if (o_clockAddr == 0xFFFFFFFFFFFFFFFFULL)
        {
            l_rc = 1;
        }
        else if (o_clockAddr == 0x0000281A) // CFAM address
        {
            o_mode = 0;
        }

        return l_rc;
    }


// ####################################################################################
    uint32_t p10_clockcntl_clockStateRegisterScreen(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            const uint64_t i_address,
            std::list<CLOCK_DOMAIN>& o_domainList,
            const uint32_t i_mode)
    {
        uint32_t l_rc = 0;
        CLOCK_DOMAIN l_domain;
        uint32_t l_mode = 0;

        // Determine if the input address has anything to do with the Clock control.
        // If it does, this function returns the list of clock domains that may be
        // affected.

        // There are 2 things to check to determine if Clock control could
        // be altered:
        //   1. See if the address is the start/stop of Clocks register (00000000yy030006)
        //   2. The domain is Vital

        do
        {

            // Mask off the chiplet ID bits, just check to see if the register is Clock
            // control for each chiplet (i.e. 0x30006)
            if ( (i_address & 0x0000000000FFFFFFULL) == 0x00030006ULL)
            {
                // If it is, get the clock domain of the given address/instance
#ifndef P10
                l_rc = p10_clockcntl_getScomClockDomain_INTERNAL(i_p10CU,
                        i_chipUnitNum,
                        i_address,
                        l_domain,
                        l_mode);
#else
                l_rc = p10_clockcntl_getScomClockDomain(i_p10CU,
                                                        i_chipUnitNum,
                                                        i_address,
                                                        l_domain,
                                                        l_mode);
#endif

                if (l_rc)
                {
                    break;
                }

                switch (l_domain)
                {
                    case P10_FAKE_DOMAIN:
                        break;

                    case P10_TP_VITL_DOMAIN:
                        o_domainList.push_back(P10_TP_SBEPIBOCCNET_DOMAIN);
                        o_domainList.push_back(P10_TP_PLL_DOMAIN);
                        break;

                    case P10_N0_VITL_DOMAIN:
                        o_domainList.push_back(P10_N0_NXVASINTNMMU0PE0_DOMAIN);
                        break;

                    case P10_N1_VITL_DOMAIN:
                        o_domainList.push_back(P10_N1_NMMU1_DOMAIN);
                        o_domainList.push_back(P10_N1_MCDPE1FBC_DOMAIN);
                        break;

                    case P10_PAU0_VITL_DOMAIN:
                        o_domainList.push_back(P10_PAU0_PAU0_NTLOTL_DOMAIN);
                        o_domainList.push_back(P10_PAU0_TLPPE_DOMAIN);
                        break;

                    case P10_PAU1_VITL_DOMAIN:
                        o_domainList.push_back(P10_PAU1_PAU3_NTLOTL_DOMAIN);
                        o_domainList.push_back(P10_PAU1_TLPPE_DOMAIN);
                        break;

                    case P10_PAU2_VITL_DOMAIN:
                        o_domainList.push_back(P10_PAU2_PAU4_NTLOTL_DOMAIN);
                        o_domainList.push_back(P10_PAU2_PAU5_NTLOTL_DOMAIN);
                        o_domainList.push_back(P10_PAU2_TLPPE_DOMAIN);
                        break;

                    case P10_PAU3_VITL_DOMAIN:
                        o_domainList.push_back(P10_PAU3_PAU6_NTLOTL_DOMAIN);
                        o_domainList.push_back(P10_PAU3_PAU7_NTLOTL_DOMAIN);
                        o_domainList.push_back(P10_PAU3_TLPPE_DOMAIN);
                        break;

                    case P10_AXON0_VITL_DOMAIN:
                        o_domainList.push_back(P10_AXON0_IOO_DOMAIN);
                        o_domainList.push_back(P10_AXON0_ODL_DOMAIN);
                        o_domainList.push_back(P10_AXON0_NDL_DOMAIN);
                        o_domainList.push_back(P10_AXON0_PDL_DOMAIN);
                        o_domainList.push_back(P10_AXON0_PLL_DOMAIN);
                        break;


                    default:
                        break;
                }

                // Use Macro to screen 'array' chiplets

// P = PCIx
#define SCREENPCI(P)                                             \
    if (l_domain == P10_##P##_VITL_DOMAIN)           \
    {                                                \
        o_domainList.push_back(P10_##P##_PH5_DOMAIN); \
        o_domainList.push_back(P10_##P##_IOP_DOMAIN); \
        o_domainList.push_back(P10_##P##_PLL_DOMAIN); \
    }
                SCREENPCI(PCI0)
                SCREENPCI(PCI1)

// P = MCx
#define SCREENMC(P)                                                 \
    if (l_domain == P10_##P##_VITL_DOMAIN)              \
    {                                                   \
        o_domainList.push_back(P10_##P##_MC_DOMAIN);     \
        o_domainList.push_back(P10_##P##_ODLIOO_DOMAIN); \
        o_domainList.push_back(P10_##P##_PLL_DOMAIN);    \
    }
                SCREENMC(MC0)
                SCREENMC(MC1)
                SCREENMC(MC2)
                SCREENMC(MC3)

// P = AXONx
#define SCREENAXON(P)                                               \
    if (l_domain == P10_##P##_VITL_DOMAIN)              \
    {                                                   \
        o_domainList.push_back(P10_##P##_IOO_DOMAIN);    \
        o_domainList.push_back(P10_##P##_ODL_DOMAIN);    \
        o_domainList.push_back(P10_##P##_NDL_DOMAIN);    \
        o_domainList.push_back(P10_##P##_PDL_DOMAIN);    \
        o_domainList.push_back(P10_##P##_PLL_DOMAIN);    \
    }
                SCREENAXON(AXON0)
                SCREENAXON(AXON1)
                SCREENAXON(AXON2)
                SCREENAXON(AXON3)
                SCREENAXON(AXON4)
                SCREENAXON(AXON5)
                SCREENAXON(AXON6)
                SCREENAXON(AXON7)

// P = EQx
#define SCREENEQ(P)                                               \
    if (l_domain == P10_##P##_VITL_DOMAIN)              \
    {                                                   \
        o_domainList.push_back(P10_##P##_ECL20_DOMAIN);    \
        o_domainList.push_back(P10_##P##_ECL21_DOMAIN);    \
        o_domainList.push_back(P10_##P##_ECL22_DOMAIN);    \
        o_domainList.push_back(P10_##P##_ECL23_DOMAIN);    \
        o_domainList.push_back(P10_##P##_L30_DOMAIN);    \
        o_domainList.push_back(P10_##P##_L31_DOMAIN);    \
        o_domainList.push_back(P10_##P##_L32_DOMAIN);    \
        o_domainList.push_back(P10_##P##_L33_DOMAIN);    \
        o_domainList.push_back(P10_##P##_MMA0_DOMAIN);    \
        o_domainList.push_back(P10_##P##_MMA1_DOMAIN);    \
        o_domainList.push_back(P10_##P##_MMA2_DOMAIN);    \
        o_domainList.push_back(P10_##P##_MMA3_DOMAIN);    \
        o_domainList.push_back(P10_##P##_QME_DOMAIN);    \
    }
                SCREENEQ(EQ0)
                SCREENEQ(EQ1)
                SCREENEQ(EQ2)
                SCREENEQ(EQ3)
                SCREENEQ(EQ4)
                SCREENEQ(EQ5)
                SCREENEQ(EQ6)
                SCREENEQ(EQ7)

            } // End if (...0x00030006ULL) block

        }
        while (0);

        return l_rc;
    }

} // extern "C"

#undef P10_CLOCKCNTL_C
