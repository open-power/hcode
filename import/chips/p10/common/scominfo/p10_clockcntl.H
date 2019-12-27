/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/p10_clockcntl.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
/// @file p10_clockcntl.H
/// @brief Clock control procedure used by Cronus, used in the product
///        code and Flex, also user defined dll
///
/// HWP HW Maintainer: Thi Tran <thi@us.ibm.com>
/// HWP FW Maintainer:
/// HWP Consumed by: CRONUS
///

#ifndef P10_CLOCKCNTL_H
#define P10_CLOCKCNTL_H

#include <iostream>
#include <vector>
#include <stdint.h>
#include <list>

#include <ClockDomains.H>
#include <P10PuChipClockDomains.H>
#include <p10_cu.H>
#include <p10_scom_addr.H>

extern "C" {

    /// Constants
    const uint32_t NUM_CHIPLET_IDS      =   40;  // Num of chiplet IDs
    const uint8_t  ALL_GOOD_ID          = 0xFF;  // RingID that marks default clock domains

    // #################################################################
    // Chiplet vital domain array
    // Each entry defines the Vital clock domain name for the Chiplet ID index
    // For non-existing Chiplet ID, entry is P10_FAKE_DOMAIN
    // #################################################################
    const CLOCK_DOMAIN ChipletVitalDomainTable[NUM_CHIPLET_IDS] =
    {
        P10_FSIVITL_DOMAIN,           // Chiplet 0, FSI
        P10_TPVITL_DOMAIN,            // Chiplet 1, TP
        P10_N0VITL_DOMAIN,            // Chiplet 2, N0
        P10_N1VITL_DOMAIN,            // Chiplet 3, N1
        P10_FAKE_DOMAIN,              // Chiplet 4, invalid
        P10_FAKE_DOMAIN,              // Chiplet 5, invalid
        P10_FAKE_DOMAIN,              // Chiplet 6, invalid
        P10_FAKE_DOMAIN,              // Chiplet 7, invalid
        P10_PCI0VITL_DOMAIN,          // Chiplet 8, PCI0
        P10_PCI1VITL_DOMAIN,          // Chiplet 9, PCI1
        P10_FAKE_DOMAIN,              // Chiplet 10, invalid
        P10_FAKE_DOMAIN,              // Chiplet 11, invalid
        P10_MC0VITL_DOMAIN,           // Chiplet 12, MC0
        P10_MC1VITL_DOMAIN,           // Chiplet 13, MC1
        P10_MC2VITL_DOMAIN,           // Chiplet 14, MC2
        P10_MC3VITL_DOMAIN,           // Chiplet 15, MC3
        P10_PAU0VITL_DOMAIN,          // Chiplet 16, PAU0
        P10_PAU1VITL_DOMAIN,          // Chiplet 17, PAU1
        P10_PAU2VITL_DOMAIN,          // Chiplet 18, PAU2
        P10_PAU3VITL_DOMAIN,          // Chiplet 19, PAU3
        P10_FAKE_DOMAIN,              // Chiplet 20, invalid
        P10_FAKE_DOMAIN,              // Chiplet 21, invalid
        P10_FAKE_DOMAIN,              // Chiplet 22, invalid
        P10_FAKE_DOMAIN,              // Chiplet 23, invalid
        P10_AXON0VITL_DOMAIN,         // Chiplet 24, Axon0
        P10_AXON1VITL_DOMAIN,         // Chiplet 25, Axon1
        P10_AXON2VITL_DOMAIN,         // Chiplet 26, Axon2
        P10_AXON3VITL_DOMAIN,         // Chiplet 27, Axon3
        P10_AXON4VITL_DOMAIN,         // Chiplet 28, Axon4
        P10_AXON5VITL_DOMAIN,         // Chiplet 29, Axon5
        P10_AXON6VITL_DOMAIN,         // Chiplet 30, Axon6
        P10_AXON7VITL_DOMAIN,         // Chiplet 31, Axon7
        P10_EQ0VITL_DOMAIN,           // Chiplet 32, EQ0
        P10_EQ1VITL_DOMAIN,           // Chiplet 33, EQ1
        P10_EQ2VITL_DOMAIN,           // Chiplet 34, EQ2
        P10_EQ3VITL_DOMAIN,           // Chiplet 35, EQ3
        P10_EQ4VITL_DOMAIN,           // Chiplet 36, EQ4
        P10_EQ5VITL_DOMAIN,           // Chiplet 37, EQ5
        P10_EQ6VITL_DOMAIN,           // Chiplet 38, EQ6
        P10_EQ7VITL_DOMAIN,           // Chiplet 39, EQ7
    };

    // #################################################################
    // Chiplet SCOM ring clock domain table
    // Clock domain look up table for all chiplets except EQ.
    // ALL_GOOD_ID is the 'common' region for the chiplet if specific
    // region is not found.
    // #################################################################
    struct ChipletRingClockDomain_t
    {
        const uint8_t       chipletId; // ChipletId
        const uint8_t       ringId;    // RingId
        const CLOCK_DOMAIN  domain;    // Domain
    };

    const ChipletRingClockDomain_t ChipletRingClockDomainTable[] =
    {
        //      Chiplet            RingID                 Clock domain
        //      -------        --------------       -----------------------------
        {  PIB_CHIPLET_ID,     ALL_GOOD_ID,         P10_FSIVITL_DOMAIN            }, // FSI
        {  PERV_CHIPLET_ID,    ALL_GOOD_ID,         P10_TPSBEPIBOCCNETPSI_DOMAIN  }, // TP

        {  N0_CHIPLET_ID,      ALL_GOOD_ID,         P10_N0NXVASINTNMMU0PE1_DOMAIN },

        {  N1_CHIPLET_ID,      N1_MM1_RING_ID,      P10_N1NMMU1_DOMAIN            }, // RingId 0x3
        {  N1_CHIPLET_ID,      ALL_GOOD_ID,         P10_N1MCDPE0FBC_DOMAIN        },

        {  PCI0_CHIPLET_ID,    ALL_GOOD_ID,         P10_PCI0IOP_DOMAIN            },
        {  PCI1_CHIPLET_ID,    ALL_GOOD_ID,         P10_PCI1IOP_DOMAIN            },

        {  MC0_CHIPLET_ID,     ALL_GOOD_ID,         P10_MC0ODLIOO_DOMAIN          },
        {  MC1_CHIPLET_ID,     ALL_GOOD_ID,         P10_MC1ODLIOO_DOMAIN          },
        {  MC2_CHIPLET_ID,     ALL_GOOD_ID,         P10_MC2ODLIOO_DOMAIN          },
        {  MC3_CHIPLET_ID,     ALL_GOOD_ID,         P10_MC3ODLIOO_DOMAIN          },

        {  PAU0_CHIPLET_ID,    PAU0346_0_RING_ID,   P10_PAU0PAU0NTLOTL_DOMAIN     }, // RingId 0x2
        {  PAU0_CHIPLET_ID,    PAU0346_1_RING_ID,   P10_PAU0PAU0NTLOTL_DOMAIN     }, // RingId 0x3
        {  PAU0_CHIPLET_ID,    ALL_GOOD_ID,         P10_PAU0TLPPE_DOMAIN          },

        {  PAU1_CHIPLET_ID,    PAU0346_0_RING_ID,   P10_PAU1PAU3NTLOTL_DOMAIN     }, // RingId 0x2
        {  PAU1_CHIPLET_ID,    PAU0346_1_RING_ID,   P10_PAU1PAU3NTLOTL_DOMAIN     }, // RingId 0x3
        {  PAU1_CHIPLET_ID,    ALL_GOOD_ID,         P10_PAU1TLPPE_DOMAIN          },

        {  PAU2_CHIPLET_ID,    PAU0346_0_RING_ID,   P10_PAU2PAU4NTLOTL_DOMAIN     }, // RingId 0x2
        {  PAU2_CHIPLET_ID,    PAU0346_1_RING_ID,   P10_PAU2PAU4NTLOTL_DOMAIN     }, // RingId 0x3
        {  PAU2_CHIPLET_ID,    PAU57_0_RING_ID,     P10_PAU2PAU5NTLOTL_DOMAIN     }, // RingId 0x4
        {  PAU2_CHIPLET_ID,    PAU57_1_RING_ID,     P10_PAU2PAU5NTLOTL_DOMAIN     }, // RingId 0x5
        {  PAU2_CHIPLET_ID,    ALL_GOOD_ID,         P10_PAU2TLPPE_DOMAIN          },

        {  PAU3_CHIPLET_ID,    PAU0346_0_RING_ID,   P10_PAU3PAU6NTLOTL_DOMAIN     }, // RingId 0x2
        {  PAU3_CHIPLET_ID,    PAU0346_1_RING_ID,   P10_PAU3PAU6NTLOTL_DOMAIN     }, // RingId 0x3
        {  PAU3_CHIPLET_ID,    PAU57_0_RING_ID,     P10_PAU3PAU7NTLOTL_DOMAIN     }, // RingId 0x4
        {  PAU3_CHIPLET_ID,    PAU57_1_RING_ID,     P10_PAU3PAU7NTLOTL_DOMAIN     }, // RingId 0x5
        {  PAU3_CHIPLET_ID,    ALL_GOOD_ID,         P10_PAU3TLPPE_DOMAIN          },

        {  AXON0_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON0PDL_DOMAIN           }, // RingId 0x4
        {  AXON0_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON0IOO_DOMAIN           },

        {  AXON1_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON1PDL_DOMAIN           }, // RingId 0x4
        {  AXON1_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON1IOO_DOMAIN           },

        {  AXON2_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON2PDL_DOMAIN           }, // RingId 0x4
        {  AXON2_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON2IOO_DOMAIN           },

        {  AXON3_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON3PDL_DOMAIN           }, // RingId 0x4
        {  AXON3_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON3IOO_DOMAIN           },

        {  AXON4_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON4PDL_DOMAIN           }, // RingId 0x4
        {  AXON4_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON4IOO_DOMAIN           },

        {  AXON5_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON5PDL_DOMAIN           }, // RingId 0x4
        {  AXON5_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON5IOO_DOMAIN           },

        {  AXON6_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON6PDL_DOMAIN           }, // RingId 0x4
        {  AXON6_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON6IOO_DOMAIN           },

        {  AXON7_CHIPLET_ID,   AXONE_PDL_RING_ID,   P10_AXON7PDL_DOMAIN           }, // RingId 0x4
        {  AXON7_CHIPLET_ID,   ALL_GOOD_ID,         P10_AXON7IOO_DOMAIN           },
    };

    // #################################################################
    // EQ chiplet clock domain table
    // Look up table to determine Clock domain for EQ chiplets
    // #################################################################

    // An EQ chiplet address can be in one of these 3 regions:
    //     - Shared quad level registers
    //     - CORE/L2 registers
    //     - L3 registers
    // These constants represent the type of region the SCOM address is for.
    const uint8_t QUAD_REGION          = 0;
    const uint8_t COREL2_REGION        = 1;
    const uint8_t L3_REGION            = 2;
    const uint8_t CLKADJ_REGION        = 3;

    // coreNum value
    const uint8_t DONT_CARE            = 0xFF;

    struct EQ_ClockDomain_t
    {
        const uint8_t       chipletId;    // ChipletId
        const uint8_t       region;       // QUAD_REGION, COREL2_REGION, L3_REGION, or CLKADJ_REGION
        const uint8_t       coreNum;      // If COREL2_REGION or L3_REGION, ref core num (in EQ, 0-3); DONT_CARE otherwise.
        const CLOCK_DOMAIN  domain;       // Domain
    };

    const EQ_ClockDomain_t EQ_ClockDomain_Table[] =
    {
        //    Chiplet            Target type       Core number       Clock domain
        //    -------          ----------------    -------------     ------------
        {  EQ0_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ0QME_DOMAIN    },
        {  EQ0_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ0CLKADJ_DOMAIN },
        {  EQ0_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ0ECL20_DOMAIN  },
        {  EQ0_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ0ECL21_DOMAIN  },
        {  EQ0_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ0ECL22_DOMAIN  },
        {  EQ0_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ0ECL23_DOMAIN  },
        {  EQ0_CHIPLET_ID,     L3_REGION,          0,                P10_EQ0L30_DOMAIN    },
        {  EQ0_CHIPLET_ID,     L3_REGION,          1,                P10_EQ0L31_DOMAIN    },
        {  EQ0_CHIPLET_ID,     L3_REGION,          2,                P10_EQ0L32_DOMAIN    },
        {  EQ0_CHIPLET_ID,     L3_REGION,          3,                P10_EQ0L33_DOMAIN    },

        {  EQ1_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ1QME_DOMAIN    },
        {  EQ1_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ1CLKADJ_DOMAIN },
        {  EQ1_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ1ECL20_DOMAIN  },
        {  EQ1_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ1ECL21_DOMAIN  },
        {  EQ1_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ1ECL22_DOMAIN  },
        {  EQ1_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ1ECL23_DOMAIN  },
        {  EQ1_CHIPLET_ID,     L3_REGION,          0,                P10_EQ1L30_DOMAIN    },
        {  EQ1_CHIPLET_ID,     L3_REGION,          1,                P10_EQ1L31_DOMAIN    },
        {  EQ1_CHIPLET_ID,     L3_REGION,          2,                P10_EQ1L32_DOMAIN    },
        {  EQ1_CHIPLET_ID,     L3_REGION,          3,                P10_EQ1L33_DOMAIN    },

        {  EQ2_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ2QME_DOMAIN    },
        {  EQ2_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ2CLKADJ_DOMAIN },
        {  EQ2_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ2ECL20_DOMAIN  },
        {  EQ2_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ2ECL21_DOMAIN  },
        {  EQ2_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ2ECL22_DOMAIN  },
        {  EQ2_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ2ECL23_DOMAIN  },
        {  EQ2_CHIPLET_ID,     L3_REGION,          0,                P10_EQ2L30_DOMAIN    },
        {  EQ2_CHIPLET_ID,     L3_REGION,          1,                P10_EQ2L31_DOMAIN    },
        {  EQ2_CHIPLET_ID,     L3_REGION,          2,                P10_EQ2L32_DOMAIN    },
        {  EQ2_CHIPLET_ID,     L3_REGION,          3,                P10_EQ2L33_DOMAIN    },

        {  EQ3_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ3QME_DOMAIN    },
        {  EQ3_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ3CLKADJ_DOMAIN },
        {  EQ3_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ3ECL20_DOMAIN  },
        {  EQ3_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ3ECL21_DOMAIN  },
        {  EQ3_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ3ECL22_DOMAIN  },
        {  EQ3_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ3ECL23_DOMAIN  },
        {  EQ3_CHIPLET_ID,     L3_REGION,          0,                P10_EQ3L30_DOMAIN    },
        {  EQ3_CHIPLET_ID,     L3_REGION,          1,                P10_EQ3L31_DOMAIN    },
        {  EQ3_CHIPLET_ID,     L3_REGION,          2,                P10_EQ3L32_DOMAIN    },
        {  EQ3_CHIPLET_ID,     L3_REGION,          3,                P10_EQ3L33_DOMAIN    },

        {  EQ4_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ4QME_DOMAIN    },
        {  EQ4_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ4CLKADJ_DOMAIN },
        {  EQ4_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ4ECL20_DOMAIN  },
        {  EQ4_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ4ECL21_DOMAIN  },
        {  EQ4_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ4ECL22_DOMAIN  },
        {  EQ4_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ4ECL23_DOMAIN  },
        {  EQ4_CHIPLET_ID,     L3_REGION,          0,                P10_EQ4L30_DOMAIN    },
        {  EQ4_CHIPLET_ID,     L3_REGION,          1,                P10_EQ4L31_DOMAIN    },
        {  EQ4_CHIPLET_ID,     L3_REGION,          2,                P10_EQ4L32_DOMAIN    },
        {  EQ4_CHIPLET_ID,     L3_REGION,          3,                P10_EQ4L33_DOMAIN    },

        {  EQ5_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ5QME_DOMAIN    },
        {  EQ5_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ5CLKADJ_DOMAIN },
        {  EQ5_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ5ECL20_DOMAIN  },
        {  EQ5_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ5ECL21_DOMAIN  },
        {  EQ5_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ5ECL22_DOMAIN  },
        {  EQ5_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ5ECL23_DOMAIN  },
        {  EQ5_CHIPLET_ID,     L3_REGION,          0,                P10_EQ5L30_DOMAIN    },
        {  EQ5_CHIPLET_ID,     L3_REGION,          1,                P10_EQ5L31_DOMAIN    },
        {  EQ5_CHIPLET_ID,     L3_REGION,          2,                P10_EQ5L32_DOMAIN    },
        {  EQ5_CHIPLET_ID,     L3_REGION,          3,                P10_EQ5L33_DOMAIN    },

        {  EQ6_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ6QME_DOMAIN    },
        {  EQ6_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ6CLKADJ_DOMAIN },
        {  EQ6_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ6ECL20_DOMAIN  },
        {  EQ6_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ6ECL21_DOMAIN  },
        {  EQ6_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ6ECL22_DOMAIN  },
        {  EQ6_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ6ECL23_DOMAIN  },
        {  EQ6_CHIPLET_ID,     L3_REGION,          0,                P10_EQ6L30_DOMAIN    },
        {  EQ6_CHIPLET_ID,     L3_REGION,          1,                P10_EQ6L31_DOMAIN    },
        {  EQ6_CHIPLET_ID,     L3_REGION,          2,                P10_EQ6L32_DOMAIN    },
        {  EQ6_CHIPLET_ID,     L3_REGION,          3,                P10_EQ6L33_DOMAIN    },

        {  EQ7_CHIPLET_ID,     QUAD_REGION,        DONT_CARE,        P10_EQ7QME_DOMAIN    },
        {  EQ7_CHIPLET_ID,     CLKADJ_REGION,      DONT_CARE,        P10_EQ7CLKADJ_DOMAIN },
        {  EQ7_CHIPLET_ID,     COREL2_REGION,      0,                P10_EQ7ECL20_DOMAIN  },
        {  EQ7_CHIPLET_ID,     COREL2_REGION,      1,                P10_EQ7ECL21_DOMAIN  },
        {  EQ7_CHIPLET_ID,     COREL2_REGION,      2,                P10_EQ7ECL22_DOMAIN  },
        {  EQ7_CHIPLET_ID,     COREL2_REGION,      3,                P10_EQ7ECL23_DOMAIN  },
        {  EQ7_CHIPLET_ID,     L3_REGION,          0,                P10_EQ7L30_DOMAIN    },
        {  EQ7_CHIPLET_ID,     L3_REGION,          1,                P10_EQ7L31_DOMAIN    },
        {  EQ7_CHIPLET_ID,     L3_REGION,          2,                P10_EQ7L32_DOMAIN    },
        {  EQ7_CHIPLET_ID,     L3_REGION,          3,                P10_EQ7L33_DOMAIN    },
    };

    // #################################################################
    // Clock domain string/enum/address/mask table
    // Look up table for Clock domain enum to determine:
    //     - Clock enum string
    //     - Clock enum access address
    //     - Clock enum mask value.
    // #################################################################
    struct ClockDomainStrAddrMask_t
    {
        const char*          domainStr;         // Clock domain string
        const CLOCK_DOMAIN   domainEnum;        // Clock domain enum
        const uint64_t       clockAddr;         // Clock address
        const uint64_t       clockMask;         // Clock mask
    };

    const ClockDomainStrAddrMask_t ClockDomainStrAddrMaskTable[] =
    {
        { "FAKE",                 P10_FAKE_DOMAIN,               0x0000281A, 0x0000800000000000ULL }, // Mask: bit 16, VITL THOLD
        { "FSIVITL",              P10_FSIVITL_DOMAIN,            0x0000281A, 0x0000800000000000ULL },
        { "FSIALL",               P10_FSIALL_DOMAIN,             0x0000281A, 0x0000800000000000ULL },

        { "TPVITL",               P10_TPVITL_DOMAIN,             0x0000281A, 0x0000800000000000ULL },
        { "TPSBEPIBOCCNETPSI",    P10_TPSBEPIBOCCNETPSI_DOMAIN,  0x01030008, 0x0FA0000000000000ULL }, // Regions 0,1,2,3,4,6; bits 4,5,6,7,8,10
        { "TPDPLLPAU",            P10_TPDPLLPAU_DOMAIN,          0x01030008, 0x0008000000000000ULL }, // Region 8; bit 12
        { "TPDPLLNEST",           P10_TPDPLLNEST_DOMAIN,         0x01030008, 0x0004000000000000ULL }, // Region 9; bit 13
        { "TPPLL",                P10_TPPLL_DOMAIN,              0x01030008, 0x0002000000000000ULL }, // Region 10; bit 14

        { "N0VITL",               P10_N0VITL_DOMAIN,             0x020F0040, 0x0000800000000000ULL }, // Mask: bit 16, VITL THOLD
        { "N0NXVASINTNMMU0PE1",   P10_N0NXVASINTNMMU0PE1_DOMAIN, 0x02030008, 0x0C80000000000000ULL }, // Regions 0,1,4; bits 4,5,8

        { "N1VITL",               P10_N1VITL_DOMAIN,             0x030F0040, 0x0000800000000000ULL },
        { "N1NMMU1",              P10_N1NMMU1_DOMAIN,            0x03030008, 0x0040000000000000ULL }, // Region 5; bit 9
        { "N1MCDPE0FBC",          P10_N1MCDPE0FBC_DOMAIN,        0x03030008, 0x0A80000000000000ULL }, // Regions 0,2,4; bits 4,6,8

        { "PCI0VITL",             P10_PCI0VITL_DOMAIN,           0x080F0040, 0x0000800000000000ULL },
        { "PCI0IOP",              P10_PCI0IOP_DOMAIN,            0x08030008, 0x0FF1E00000000000ULL }, // Regions 0-7,11-14; bits 4-11,15-18
        { "PCI0PLL",              P10_PCI0PLL_DOMAIN,            0x08030008, 0x0002000000000000ULL },

        { "PCI1VITL",             P10_PCI1VITL_DOMAIN,           0x090F0040, 0x0000800000000000ULL },
        { "PCI1IOP",              P10_PCI1IOP_DOMAIN,            0x09030008, 0x0FF1E00000000000ULL }, // Regions 0-7,11-14; bits 4-11,15-18
        { "PCI1PLL",              P10_PCI1PLL_DOMAIN,            0x09030008, 0x0002000000000000ULL },

        { "MC0VITL",              P10_MC0VITL_DOMAIN,            0x0C0F0040, 0x0000800000000000ULL },
        { "MC0ODLIOO",            P10_MC0ODLIOO_DOMAIN,          0x0C030008, 0x0DE0000000000000ULL }, // Regions 0-1,3-6; bits 4-5,7-10
        { "MC0PLL",               P10_MC0PLL_DOMAIN,             0x0C030008, 0x0002000000000000ULL },

        { "MC1VITL",              P10_MC1VITL_DOMAIN,            0x0D0F0040, 0x0000800000000000ULL },
        { "MC1ODLIOO",            P10_MC1ODLIOO_DOMAIN,          0x0D030008, 0x0DE0000000000000ULL }, // Regions 0-1,3-6; bits 4-5,7-10
        { "MC1PLL",               P10_MC1PLL_DOMAIN,             0x0D030008, 0x0002000000000000ULL },

        { "MC2VITL",              P10_MC2VITL_DOMAIN,            0x0E0F0040, 0x0000800000000000ULL },
        { "MC2ODLIOO",            P10_MC2ODLIOO_DOMAIN,          0x0E030008, 0x0DE0000000000000ULL }, // Regions 0-1,3-6; bits 4-5,7-10
        { "MC2PLL",               P10_MC2PLL_DOMAIN,             0x0E030008, 0x0002000000000000ULL },

        { "MC3VITL",              P10_MC3VITL_DOMAIN,            0x0F0F0040, 0x0000800000000000ULL },
        { "MC3ODLIOO",            P10_MC3ODLIOO_DOMAIN,          0x0F030008, 0x0DE0000000000000ULL }, // Regions 0-1,3-6; bits 4-5,7-10
        { "MC3PLL",               P10_MC3PLL_DOMAIN,             0x0F030008, 0x0002000000000000ULL },

        { "PAU0VITL",             P10_PAU0VITL_DOMAIN,           0x100F0040, 0x0000800000000000ULL },
        { "PAU0PAU0NTLOTL",       P10_PAU0PAU0NTLOTL_DOMAIN,     0x10030008, 0x0400000000000000ULL }, // Region 1; bit 5
        { "PAU0TLPPE",            P10_PAU0TLPPE_DOMAIN,          0x10030008, 0x0860000000000000ULL }, // Regions 0,5,6; bits 4,9,10

        { "PAU1VITL",             P10_PAU1VITL_DOMAIN,           0x110F0040, 0x0000800000000000ULL },
        { "PAU1PAU3NTLOTL",       P10_PAU1PAU3NTLOTL_DOMAIN,     0x11030008, 0x0400000000000000ULL }, // Region 1; bit 5
        { "PAU1TLPPE",            P10_PAU1TLPPE_DOMAIN,          0x11030008, 0x0860000000000000ULL }, // Regions 0,5,6; bits 4,9,10

        { "PAU2VITL",             P10_PAU2VITL_DOMAIN,           0x120F0040, 0x0000800000000000ULL },
        { "PAU2PAU4NTLOTL",       P10_PAU2PAU4NTLOTL_DOMAIN,     0x12030008, 0x0400000000000000ULL }, // Region 1; bit 5
        { "PAU2PAU5NTLOTL",       P10_PAU2PAU5NTLOTL_DOMAIN,     0x12030008, 0x0200000000000000ULL }, // Region 2; bit 6
        { "PAU2TLPPE",            P10_PAU2TLPPE_DOMAIN,          0x12030008, 0x0860000000000000ULL }, // Regions 0,5,6; bits 4,9,10

        { "PAU3VITL",             P10_PAU3VITL_DOMAIN,           0x130F0040, 0x0000800000000000ULL },
        { "PAU3PAU6NTLOTL",       P10_PAU3PAU6NTLOTL_DOMAIN,     0x13030008, 0x0400000000000000ULL }, // Region 1; bit 5
        { "PAU3PAU7NTLOTL",       P10_PAU3PAU7NTLOTL_DOMAIN,     0x13030008, 0x0200000000000000ULL }, // Region 2; bit 6
        { "PAU3TLPPE",            P10_PAU3TLPPE_DOMAIN,          0x13030008, 0x0860000000000000ULL }, // Regions 0,5,6; bits 4,9,10

        { "AXON0VITL",            P10_AXON0VITL_DOMAIN,          0x180F0040, 0x0000800000000000ULL },
        { "AXON0IOO",             P10_AXON0IOO_DOMAIN,           0x18030008, 0x0C00000000000000ULL }, // Regions 0,1; bits 4,5
        { "AXON0NDL",             P10_AXON0NDL_DOMAIN,           0x18030008, 0x0080000000000000ULL }, // Region 4; bit 8
        { "AXON0PDL",             P10_AXON0PDL_DOMAIN,           0x18030008, 0x0040000000000000ULL }, // Region 5; bit 9
        { "AXON0PLL",             P10_AXON0PLL_DOMAIN,           0x18030008, 0x0002000000000000ULL },

        { "AXON1VITL",            P10_AXON1VITL_DOMAIN,          0x190F0040, 0x0000800000000000ULL },
        { "AXON1IOO",             P10_AXON1IOO_DOMAIN,           0x19030008, 0x0C00000000000000ULL },
        { "AXON1NDL",             P10_AXON1NDL_DOMAIN,           0x19030008, 0x0080000000000000ULL },
        { "AXON1PDL",             P10_AXON1PDL_DOMAIN,           0x19030008, 0x0040000000000000ULL },
        { "AXON1PLL",             P10_AXON1PLL_DOMAIN,           0x19030008, 0x0002000000000000ULL },

        { "AXON2VITL",            P10_AXON2VITL_DOMAIN,          0x1A0F0040, 0x0000800000000000ULL },
        { "AXON2IOO",             P10_AXON2IOO_DOMAIN,           0x1A030008, 0x0C00000000000000ULL },
        { "AXON2NDL",             P10_AXON2NDL_DOMAIN,           0x1A030008, 0x0080000000000000ULL },
        { "AXON2PDL",             P10_AXON2PDL_DOMAIN,           0x1A030008, 0x0040000000000000ULL },
        { "AXON2PLL",             P10_AXON2PLL_DOMAIN,           0x1A030008, 0x0002000000000000ULL },

        { "AXON3VITL",            P10_AXON3VITL_DOMAIN,          0x1B0F0040, 0x0000800000000000ULL },
        { "AXON3IOO",             P10_AXON3IOO_DOMAIN,           0x1B030008, 0x0C00000000000000ULL },
        { "AXON3NDL",             P10_AXON3NDL_DOMAIN,           0x1B030008, 0x0080000000000000ULL },
        { "AXON3PDL",             P10_AXON3PDL_DOMAIN,           0x1B030008, 0x0040000000000000ULL },
        { "AXON3PLL",             P10_AXON3PLL_DOMAIN,           0x1B030008, 0x0002000000000000ULL },

        { "AXON4VITL",            P10_AXON4VITL_DOMAIN,          0x1C0F0040, 0x0000800000000000ULL },
        { "AXON4IOO",             P10_AXON4IOO_DOMAIN,           0x1C030008, 0x0C00000000000000ULL },
        { "AXON4NDL",             P10_AXON4NDL_DOMAIN,           0x1C030008, 0x0080000000000000ULL },
        { "AXON4PDL",             P10_AXON4PDL_DOMAIN,           0x1C030008, 0x0040000000000000ULL },
        { "AXON4PLL",             P10_AXON4PLL_DOMAIN,           0x1C030008, 0x0002000000000000ULL },

        { "AXON5VITL",            P10_AXON5VITL_DOMAIN,          0x1D0F0040, 0x0000800000000000ULL },
        { "AXON5IOO",             P10_AXON5IOO_DOMAIN,           0x1D030008, 0x0C00000000000000ULL },
        { "AXON5NDL",             P10_AXON5NDL_DOMAIN,           0x1D030008, 0x0080000000000000ULL },
        { "AXON5PDL",             P10_AXON5PDL_DOMAIN,           0x1D030008, 0x0040000000000000ULL },
        { "AXON5PLL",             P10_AXON5PLL_DOMAIN,           0x1D030008, 0x0002000000000000ULL },

        { "AXON6VITL",            P10_AXON6VITL_DOMAIN,          0x1E0F0040, 0x0000800000000000ULL },
        { "AXON6IOO",             P10_AXON6IOO_DOMAIN,           0x1E030008, 0x0C00000000000000ULL },
        { "AXON6NDL",             P10_AXON6NDL_DOMAIN,           0x1E030008, 0x0080000000000000ULL },
        { "AXON6PDL",             P10_AXON6PDL_DOMAIN,           0x1E030008, 0x0040000000000000ULL },
        { "AXON6PLL",             P10_AXON6PLL_DOMAIN,           0x1E030008, 0x0002000000000000ULL },

        { "AXON7VITL",            P10_AXON7VITL_DOMAIN,          0x1F0F0040, 0x0000800000000000ULL },
        { "AXON7IOO",             P10_AXON7IOO_DOMAIN,           0x1F030008, 0x0C00000000000000ULL },
        { "AXON7NDL",             P10_AXON7NDL_DOMAIN,           0x1F030008, 0x0080000000000000ULL },
        { "AXON7PDL",             P10_AXON7PDL_DOMAIN,           0x1F030008, 0x0040000000000000ULL },
        { "AXON7PLL",             P10_AXON7PLL_DOMAIN,           0x1F030008, 0x0002000000000000ULL },

        { "EQ0VITL",              P10_EQ0VITL_DOMAIN,            0x200F0040, 0x0000800000000000ULL },
        { "EQ0ECL20",             P10_EQ0ECL20_DOMAIN,           0x20030008, 0x0400000000000000ULL }, // Region 1; bit 5
        { "EQ0ECL21",             P10_EQ0ECL21_DOMAIN,           0x20030008, 0x0200000000000000ULL }, // Region 2; bit 6
        { "EQ0ECL22",             P10_EQ0ECL22_DOMAIN,           0x20030008, 0x0100000000000000ULL }, // Region 3; bit 7
        { "EQ0ECL23",             P10_EQ0ECL23_DOMAIN,           0x20030008, 0x0080000000000000ULL }, // Region 4; bit 8
        { "EQ0L30",               P10_EQ0L30_DOMAIN,             0x20030008, 0x0040000000000000ULL }, // Region 5; bit 9
        { "EQ0L31",               P10_EQ0L31_DOMAIN,             0x20030008, 0x0020000000000000ULL }, // Region 6; bit 10
        { "EQ0L32",               P10_EQ0L32_DOMAIN,             0x20030008, 0x0010000000000000ULL }, // Region 7: bit 11
        { "EQ0L33",               P10_EQ0L33_DOMAIN,             0x20030008, 0x0008000000000000ULL }, // Region 8; bit 12
        { "EQ0QME",               P10_EQ0QME_DOMAIN,             0x20030008, 0x0804000000000000ULL }, // Regions 0,9; bits 4,13
        { "EQ0CLKADJ",            P10_EQ0CLKADJ_DOMAIN,          0x20030008, 0x0002000000000000ULL }, // Region 10; bit 14
        { "EQ0MMA0",              P10_EQ0MMA0_DOMAIN,            0x20030008, 0x0001000000000000ULL }, // Region 11; bit 15
        { "EQ0MMA1",              P10_EQ0MMA1_DOMAIN,            0x20030008, 0x0000800000000000ULL }, // Region 12; bit 16
        { "EQ0MMA2",              P10_EQ0MMA2_DOMAIN,            0x20030008, 0x0000400000000000ULL }, // Region 13; bit 17
        { "EQ0MMA3",              P10_EQ0MMA3_DOMAIN,            0x20030008, 0x0000200000000000ULL }, // Region 14; bit 18

        { "EQ1VITL",              P10_EQ1VITL_DOMAIN,            0x210F0040, 0x0000800000000000ULL },
        { "EQ1ECL20",             P10_EQ1ECL20_DOMAIN,           0x21030008, 0x0400000000000000ULL },
        { "EQ1ECL21",             P10_EQ1ECL21_DOMAIN,           0x21030008, 0x0200000000000000ULL },
        { "EQ1ECL22",             P10_EQ1ECL22_DOMAIN,           0x21030008, 0x0100000000000000ULL },
        { "EQ1ECL23",             P10_EQ1ECL23_DOMAIN,           0x21030008, 0x0080000000000000ULL },
        { "EQ1L30",               P10_EQ1L30_DOMAIN,             0x21030008, 0x0040000000000000ULL },
        { "EQ1L31",               P10_EQ1L31_DOMAIN,             0x21030008, 0x0020000000000000ULL },
        { "EQ1L32",               P10_EQ1L32_DOMAIN,             0x21030008, 0x0010000000000000ULL },
        { "EQ1L33",               P10_EQ1L33_DOMAIN,             0x21030008, 0x0008000000000000ULL },
        { "EQ1QME",               P10_EQ1QME_DOMAIN,             0x21030008, 0x0804000000000000ULL },
        { "EQ1CLKADJ",            P10_EQ1CLKADJ_DOMAIN,          0x21030008, 0x0002000000000000ULL },
        { "EQ1MMA0",              P10_EQ1MMA0_DOMAIN,            0x21030008, 0x0001000000000000ULL },
        { "EQ1MMA1",              P10_EQ1MMA1_DOMAIN,            0x21030008, 0x0000800000000000ULL },
        { "EQ1MMA2",              P10_EQ1MMA2_DOMAIN,            0x21030008, 0x0000400000000000ULL },
        { "EQ1MMA3",              P10_EQ1MMA3_DOMAIN,            0x21030008, 0x0000200000000000ULL },

        { "EQ2VITL",              P10_EQ2VITL_DOMAIN,            0x220F0040, 0x0000800000000000ULL },
        { "EQ2ECL20",             P10_EQ2ECL20_DOMAIN,           0x22030008, 0x0400000000000000ULL },
        { "EQ2ECL21",             P10_EQ2ECL21_DOMAIN,           0x22030008, 0x0200000000000000ULL },
        { "EQ2ECL22",             P10_EQ2ECL22_DOMAIN,           0x22030008, 0x0100000000000000ULL },
        { "EQ2ECL23",             P10_EQ2ECL23_DOMAIN,           0x22030008, 0x0080000000000000ULL },
        { "EQ2L30",               P10_EQ2L30_DOMAIN,             0x22030008, 0x0040000000000000ULL },
        { "EQ2L31",               P10_EQ2L31_DOMAIN,             0x22030008, 0x0020000000000000ULL },
        { "EQ2L32",               P10_EQ2L32_DOMAIN,             0x22030008, 0x0010000000000000ULL },
        { "EQ2L33",               P10_EQ2L33_DOMAIN,             0x22030008, 0x0008000000000000ULL },
        { "EQ2QME",               P10_EQ2QME_DOMAIN,             0x22030008, 0x0804000000000000ULL },
        { "EQ2CLKADJ",            P10_EQ2CLKADJ_DOMAIN,          0x22030008, 0x0002000000000000ULL },
        { "EQ2MMA0",              P10_EQ2MMA0_DOMAIN,            0x22030008, 0x0001000000000000ULL },
        { "EQ2MMA1",              P10_EQ2MMA1_DOMAIN,            0x22030008, 0x0000800000000000ULL },
        { "EQ2MMA2",              P10_EQ2MMA2_DOMAIN,            0x22030008, 0x0000400000000000ULL },
        { "EQ2MMA3",              P10_EQ2MMA3_DOMAIN,            0x22030008, 0x0000200000000000ULL },

        { "EQ3VITL",              P10_EQ3VITL_DOMAIN,            0x230F0040, 0x0000800000000000ULL },
        { "EQ3ECL20",             P10_EQ3ECL20_DOMAIN,           0x23030008, 0x0400000000000000ULL },
        { "EQ3ECL21",             P10_EQ3ECL21_DOMAIN,           0x23030008, 0x0200000000000000ULL },
        { "EQ3ECL22",             P10_EQ3ECL22_DOMAIN,           0x23030008, 0x0100000000000000ULL },
        { "EQ3ECL23",             P10_EQ3ECL23_DOMAIN,           0x23030008, 0x0080000000000000ULL },
        { "EQ3L30",               P10_EQ3L30_DOMAIN,             0x23030008, 0x0040000000000000ULL },
        { "EQ3L31",               P10_EQ3L31_DOMAIN,             0x23030008, 0x0020000000000000ULL },
        { "EQ3L32",               P10_EQ3L32_DOMAIN,             0x23030008, 0x0010000000000000ULL },
        { "EQ3L33",               P10_EQ3L33_DOMAIN,             0x23030008, 0x0008000000000000ULL },
        { "EQ3QME",               P10_EQ3QME_DOMAIN,             0x23030008, 0x0804000000000000ULL },
        { "EQ3CLKADJ",            P10_EQ3CLKADJ_DOMAIN,          0x23030008, 0x0002000000000000ULL },
        { "EQ3MMA0",              P10_EQ3MMA0_DOMAIN,            0x23030008, 0x0001000000000000ULL },
        { "EQ3MMA1",              P10_EQ3MMA1_DOMAIN,            0x23030008, 0x0000800000000000ULL },
        { "EQ3MMA2",              P10_EQ3MMA2_DOMAIN,            0x23030008, 0x0000400000000000ULL },
        { "EQ3MMA3",              P10_EQ3MMA3_DOMAIN,            0x23030008, 0x0000200000000000ULL },

        { "EQ4VITL",              P10_EQ4VITL_DOMAIN,            0x240F0040, 0x0000800000000000ULL },
        { "EQ4ECL20",             P10_EQ4ECL20_DOMAIN,           0x24030008, 0x0400000000000000ULL },
        { "EQ4ECL21",             P10_EQ4ECL21_DOMAIN,           0x24030008, 0x0200000000000000ULL },
        { "EQ4ECL22",             P10_EQ4ECL22_DOMAIN,           0x24030008, 0x0100000000000000ULL },
        { "EQ4ECL23",             P10_EQ4ECL23_DOMAIN,           0x24030008, 0x0080000000000000ULL },
        { "EQ4L30",               P10_EQ4L30_DOMAIN,             0x24030008, 0x0040000000000000ULL },
        { "EQ4L31",               P10_EQ4L31_DOMAIN,             0x24030008, 0x0020000000000000ULL },
        { "EQ4L32",               P10_EQ4L32_DOMAIN,             0x24030008, 0x0010000000000000ULL },
        { "EQ4L33",               P10_EQ4L33_DOMAIN,             0x24030008, 0x0008000000000000ULL },
        { "EQ4QME",               P10_EQ4QME_DOMAIN,             0x24030008, 0x0804000000000000ULL },
        { "EQ4CLKADJ",            P10_EQ4CLKADJ_DOMAIN,          0x24030008, 0x0002000000000000ULL },
        { "EQ4MMA0",              P10_EQ4MMA0_DOMAIN,            0x24030008, 0x0001000000000000ULL },
        { "EQ4MMA1",              P10_EQ4MMA1_DOMAIN,            0x24030008, 0x0000800000000000ULL },
        { "EQ4MMA2",              P10_EQ4MMA2_DOMAIN,            0x24030008, 0x0000400000000000ULL },
        { "EQ4MMA3",              P10_EQ4MMA3_DOMAIN,            0x24030008, 0x0000200000000000ULL },

        { "EQ5VITL",              P10_EQ5VITL_DOMAIN,            0x250F0040, 0x0000800000000000ULL },
        { "EQ5ECL20",             P10_EQ5ECL20_DOMAIN,           0x25030008, 0x0400000000000000ULL },
        { "EQ5ECL21",             P10_EQ5ECL21_DOMAIN,           0x25030008, 0x0200000000000000ULL },
        { "EQ5ECL22",             P10_EQ5ECL22_DOMAIN,           0x25030008, 0x0100000000000000ULL },
        { "EQ5ECL23",             P10_EQ5ECL23_DOMAIN,           0x25030008, 0x0080000000000000ULL },
        { "EQ5L30",               P10_EQ5L30_DOMAIN,             0x25030008, 0x0040000000000000ULL },
        { "EQ5L31",               P10_EQ5L31_DOMAIN,             0x25030008, 0x0020000000000000ULL },
        { "EQ5L32",               P10_EQ5L32_DOMAIN,             0x25030008, 0x0010000000000000ULL },
        { "EQ5L33",               P10_EQ5L33_DOMAIN,             0x25030008, 0x0008000000000000ULL },
        { "EQ5QME",               P10_EQ5QME_DOMAIN,             0x25030008, 0x0804000000000000ULL },
        { "EQ5CLKADJ",            P10_EQ5CLKADJ_DOMAIN,          0x25030008, 0x0002000000000000ULL },
        { "EQ5MMA0",              P10_EQ5MMA0_DOMAIN,            0x25030008, 0x0001000000000000ULL },
        { "EQ5MMA1",              P10_EQ5MMA1_DOMAIN,            0x25030008, 0x0000800000000000ULL },
        { "EQ5MMA2",              P10_EQ5MMA2_DOMAIN,            0x25030008, 0x0000400000000000ULL },
        { "EQ5MMA3",              P10_EQ5MMA3_DOMAIN,            0x25030008, 0x0000200000000000ULL },

        { "EQ6VITL",              P10_EQ6VITL_DOMAIN,            0x260F0040, 0x0000800000000000ULL },
        { "EQ6ECL20",             P10_EQ6ECL20_DOMAIN,           0x26030008, 0x0400000000000000ULL },
        { "EQ6ECL21",             P10_EQ6ECL21_DOMAIN,           0x26030008, 0x0200000000000000ULL },
        { "EQ6ECL22",             P10_EQ6ECL22_DOMAIN,           0x26030008, 0x0100000000000000ULL },
        { "EQ6ECL23",             P10_EQ6ECL23_DOMAIN,           0x26030008, 0x0080000000000000ULL },
        { "EQ6L30",               P10_EQ6L30_DOMAIN,             0x26030008, 0x0040000000000000ULL },
        { "EQ6L31",               P10_EQ6L31_DOMAIN,             0x26030008, 0x0020000000000000ULL },
        { "EQ6L32",               P10_EQ6L32_DOMAIN,             0x26030008, 0x0010000000000000ULL },
        { "EQ6L33",               P10_EQ6L33_DOMAIN,             0x26030008, 0x0008000000000000ULL },
        { "EQ6QME",               P10_EQ6QME_DOMAIN,             0x26030008, 0x0804000000000000ULL },
        { "EQ6CLKADJ",            P10_EQ6CLKADJ_DOMAIN,          0x26030008, 0x0002000000000000ULL },
        { "EQ6MMA0",              P10_EQ6MMA0_DOMAIN,            0x26030008, 0x0001000000000000ULL },
        { "EQ6MMA1",              P10_EQ6MMA1_DOMAIN,            0x26030008, 0x0000800000000000ULL },
        { "EQ6MMA2",              P10_EQ6MMA2_DOMAIN,            0x26030008, 0x0000400000000000ULL },
        { "EQ6MMA3",              P10_EQ6MMA3_DOMAIN,            0x26030008, 0x0000200000000000ULL },

        { "EQ7VITL",              P10_EQ7VITL_DOMAIN,            0x270F0040, 0x0000800000000000ULL },
        { "EQ7ECL20",             P10_EQ7ECL20_DOMAIN,           0x27030008, 0x0400000000000000ULL },
        { "EQ7ECL21",             P10_EQ7ECL21_DOMAIN,           0x27030008, 0x0200000000000000ULL },
        { "EQ7ECL22",             P10_EQ7ECL22_DOMAIN,           0x27030008, 0x0100000000000000ULL },
        { "EQ7ECL23",             P10_EQ7ECL23_DOMAIN,           0x27030008, 0x0080000000000000ULL },
        { "EQ7L30",               P10_EQ7L30_DOMAIN,             0x27030008, 0x0040000000000000ULL },
        { "EQ7L31",               P10_EQ7L31_DOMAIN,             0x27030008, 0x0020000000000000ULL },
        { "EQ7L32",               P10_EQ7L32_DOMAIN,             0x27030008, 0x0010000000000000ULL },
        { "EQ7L33",               P10_EQ7L33_DOMAIN,             0x27030008, 0x0008000000000000ULL },
        { "EQ7QME",               P10_EQ7QME_DOMAIN,             0x27030008, 0x0804000000000000ULL },
        { "EQ7CLKADJ",            P10_EQ7CLKADJ_DOMAIN,          0x27030008, 0x0002000000000000ULL },
        { "EQ7MMA0",              P10_EQ7MMA0_DOMAIN,            0x27030008, 0x0001000000000000ULL },
        { "EQ7MMA1",              P10_EQ7MMA1_DOMAIN,            0x27030008, 0x0000800000000000ULL },
        { "EQ7MMA2",              P10_EQ7MMA2_DOMAIN,            0x27030008, 0x0000400000000000ULL },
        { "EQ7MMA3",              P10_EQ7MMA3_DOMAIN,            0x27030008, 0x0000200000000000ULL },

    };

    /// @brief Determines the CLOCK_DOMAIN for a given scom address
    /// @param[in]  i_p10CU Enumeration of the chip unit type
    /// @param[in]  i_chipUnitNum Instance number of the chip unit
    /// @param[in]  i_scomAddr addr to determine the CLOCK_DOMAIN
    /// @param[out] o_domain clock domain for the i_scomAddr
    /// @param[in]  i_mode future expansion, default to 0
    /// @retval uint32_t non-zero value for any error
    uint32_t p10_clockcntl_getScomClockDomain(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            const uint64_t i_scomAddr,
            CLOCK_DOMAIN& o_domain,
            const uint32_t i_mode = 0);

    /// @brief Using the rings address adjust the clock domain relative to the chipUnit,
    ///        non-chipUnit domains would not modify io_domain
    /// @param[in]      i_p10CU Enumeration of the chip unit type
    /// @param[in]      i_chipUnitNum Instance number of the chip unit
    /// @param[in/out]  io_domain clock domain for the i_scanAddr,
    ///                 normally the zeroth addr
    /// @param[in]      i_mode future expansion, default to 0
    /// @retval uint32_t non-zero value for any error
    uint32_t p10_clockcntl_getScanClockDomain(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            CLOCK_DOMAIN& io_domain,
            const uint32_t i_mode = 0);

    /// @brief Gets the data that the platform will need to check the clock domain.
    ///        The platforms will take this data and do a getcfam or getscom compare
    ///        it to the mask, then adjust the platforms clockstatus
    /// @param[in]  i_domain Enumeration of the clock domain to check
    /// @param[out] o_clockAddr address to check, could be cfam or scom
    /// @param[out] o_clockMask mask to compagre the result of checking the above addr
    /// @param[out] o_mode 0 = cfam, 1 = scom, plus future expansion
    /// @retval uint32_t non-zero value for any error
    uint32_t p10_clockcntl_getClockCheckData(const CLOCK_DOMAIN i_domain,
            uint64_t& o_clockAddr,
            uint64_t& o_clockMask,
            uint32_t& o_mode );

    /// @brief Used to determine if a command would alter a clock domain,
    ///        if so then return a list of domains it would touch.
    ///        The platform will take this list and reset the cached clock state
    ///        for these domains.
    /// @param[in]  i_p10CU Enumeration of the chip unit type
    /// @param[in]  i_chipUnitNum Instance number of the chip unit
    /// @param[in]  i_address address that can alter a clock comain
    /// @param[out] o_domain List of clock domains that need to be reset (status changed)
    /// @param[in]  i_mode future expansion, default to 0
    /// @retval uint32_t non-zero value for any error
    uint32_t p10_clockcntl_clockStateRegisterScreen(const p10ChipUnits_t i_p10CU,
            const uint8_t i_chipUnitNum,
            const uint64_t i_address,
            std::list<CLOCK_DOMAIN>& o_domainList,
            const uint32_t i_mode = 0);

    /// @brief Get the string equivalent of the enumerated clock domain.
    /// @param[in] i_domain Enumeration of the clock domain
    /// @retval string value of the clock domain
    std::string p10_clockcntl_convertClockDomainEnum(const CLOCK_DOMAIN i_domain);

    /// @brief Get the enumerated  equivalent of the string clock domain.
    /// @param[in] i_domain string value of the clock domain
    /// @retval enumerated value of the clock domain
    CLOCK_DOMAIN p10_clockcntl_convertClockDomainString(const std::string i_domain);

}

#endif /* P10_CLOCKCNTL_H */
