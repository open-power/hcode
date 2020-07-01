/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/tests/p10_scominfo_ut.C $    */
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
/// @file p10_scominfo_ut.C
///
/// @brief Perform unit test for p10_scominfo (scom address translation)
///
/// @author Thi Tran <thi@us.ibm.com
///

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
// includes
#include <string>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <p10_scominfo.H>
#include <p10_scom_addr.H>
#include <p10_cu_utils.H>

//------------------------------------------------------------------------------
// Debug print level
//------------------------------------------------------------------------------
const uint8_t DEBUG = 0;

//------------------------------------------------------------------------------
// Constant definitions
//------------------------------------------------------------------------------
const uint8_t IS_CHIP_UNIT_SCOM = 0;
const uint8_t CREATE_CHIP_UNIT_SCOM_ADDR = 1;
const uint8_t OUTPUT_CHECK = 2;

//------------------------------------------------------------------------------
// Error path test table
//------------------------------------------------------------------------------

///
/// @struct errorPathEntries
/// @brief Array of structures that defines the input data to run the
///        error path tests.
///
struct errorPathEntry_t
{
    uint64_t             address;           // Test address
    p10ChipUnits_t       chipUnitType;      // Chip unit type
    const char*          chipUnitStr;       // Chip unit type in string
    uint8_t              instance;          // The chip unit instance desired to converted to
    uint8_t              chipEcLevel;       // The chip EC level
    p10TranslationMode_t xlateMode;         // Translation mode
    uint8_t              expectedFailStage; // Expected fail function
} errorPathTestTable[] =
{
    //      In                                                    Convert                 Xlate          Expected func to
    //     Addr             ChipUnitType     ChipUnitType str    Instance   ChipEC        Mode           fail for error path
    //  ------------------  ---------------- ----------------    ---------  ------        -----          -------------------
    { 0x00000000260E0000, NONE,              "NONE",                1,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid chip unit type
    { 0x000000001D050800, P10_NO_CU,         "P10_NO_CU",           0,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Chip Unit Type
    { 0x0000000014010000, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x14
    { 0x0000000026020400, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x0
    { 0x000000001D010800, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Ring ID 0x2
    { 0x0000000021030800, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",    5,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 5
    { 0x0000000021030800, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",   40,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 40

    { 0x00000000280E0000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x28
    { 0x00000000210A0000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0xA
    { 0x00000000250E1000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Region Sel 0x1
    { 0x00000000200E0800, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid QME per core 0x1
    { 0x00000000260E0000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",      8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8

    { 0x000000001F028000, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",       1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x1F
    { 0x0000000023038000, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",       1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x3
    { 0x00000000270E0000, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",       1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Region Sel 0x0
    { 0x0000000027011000, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",      32,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 32

    { 0x000000001A011800, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x1A
    { 0x0000000002021800, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x0000000009010C00, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x3
    { 0x0000000009010800, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",     2,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 2

    { 0x000000000B010C00, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0B
    { 0x0000000009021400, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x02
    { 0x0000000009010000, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Ring ID 0x0
    { 0x0000000008010C00, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",     6,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 6

    { 0x0000000022010400, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x22
    { 0x000000001F051400, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x05
    { 0x000000001D012000, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x08
    { 0x0000000010012800, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8

    { 0x0000000000010C00, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x00
    { 0x0000000002020C00, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x05
    { 0x0000000003010800, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x02
    { 0x0000000002010C00, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT",    2,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 2

    { 0x000000000B010800, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0B
    { 0x000000000C020800, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x000000000F010CC0, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x03
    { 0x000000000D010800, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",      5,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 5

    { 0x000000000B010800, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0B
    { 0x000000000C020800, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x000000000F010CC0, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",      1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x03
    { 0x000000000D010800, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",      5,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 5

    { 0x0000000010010900, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x10
    { 0x000000000C000900, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x0
    { 0x000000000F010600, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x01
    { 0x000000000C010900, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",     9,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 9

    { 0x000000000A010C00, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0A
    { 0x000000000E000C00, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x0
    { 0x000000000F011C00, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",     1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x7
    { 0x000000000C010C00, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",    16,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 16

    { 0x0000000010011400, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x10
    { 0x000000000C021000, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x000000000F010400, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x01
    { 0x000000000C011000, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",    9,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 9

    { 0x0000000014012C00, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x14
    { 0x0000000010062C00, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x06
    { 0x0000000010011C00, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x7
    { 0x0000000012011800, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",    8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8

    { 0x000000001401C000, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT" ,    0,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x14
    { 0x000000001302C000, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT" ,    4,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x06
    { 0x0000000012010400, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT" ,    4,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x1
    { 0x000000001201C000, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT" ,    8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8

    //  TEST INDIRECT ADDRESSES
    { 0x800F840010012C3F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    3,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM},          // Invalid per-bus addr for type (requires pauc)
    { 0x800C844010012C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",    13,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM},          // Invalid per-group addr for type (requires omic)
    { 0x8000844512012C3F, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",    3,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM},          // Invalid per-lane addr for type (requires omi)
    { 0x800C84C01001303F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    5,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM},          // Invalid Group Addr
    { 0x800C844018010C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",    16,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR}, // Invalid instance 16


};

//------------------------------------------------------------------------------
// Good path test table
//------------------------------------------------------------------------------

///
/// @struct goodPathEntries
/// @brief Array of structures that defines the input data to run the
///        good path tests.
///
struct goodPathEntry_t
{
    uint64_t             inAddress;         // Input address
    p10ChipUnits_t       chipUnitType;      // Chip unit type
    const char*          chipUnitStr;       // Chip unit type in string
    uint8_t              instanceIn;        // Chip unit instance expected to be associated with chipUnitType+inAddress
    uint8_t              instanceOut;       // The chip unit instance desired to converted to
    uint8_t              chipEcLevel;       // The chip EC level
    p10TranslationMode_t xlateMode;         // Translation mode
    uint64_t             xlatedAddress;     // Expected translated address
} goodPathTestTable[] =
{
    // PERV:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    { 0x0000000001000000, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",  1, 39,   0x00,   P10_DEFAULT_MODE,  0x0000000027000000}, // InAddr: inst  1, OutAddr: inst 39 (endpoint ID = 0, CPLT Conf)
    { 0x0000000003040000, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",  3, 16,   0x00,   P10_DEFAULT_MODE,  0x0000000010040000}, // InAddr: inst  3, OutAddr: inst 16 (endpoint ID = 4, FIR)
    { 0x0000000020050000, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT", 32, 34,   0x00,   P10_DEFAULT_MODE,  0x0000000022050000}, // InAddr: inst 32, OutAddr: inst 34 (endpoint ID = 5, Thermal)
    { 0x00000000000F0040, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",  0,  8,   0x00,   P10_DEFAULT_MODE,  0x00000000080F0040}, // InAddr: inst  0, OutAddr: inst  8 (endpoint ID = F, PCB slave)
    { 0x000000000003F040, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",  0, 12,   0x00,   P10_DEFAULT_MODE,  0x000000000C03F040}, // InAddr: inst  0, OutAddr: inst 12 (endpoint ID = 3, Clock Controller)
    { 0x000000000F010001, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT", 15, 24,   0x00,   P10_DEFAULT_MODE,  0x0000000018010001}, // InAddr: inst 15, OutAddr: inst 24 (endpoint ID = 1, PSCOM, internal ring)
    { 0x0000000002010402, PU_PERV_CHIPUNIT,  "PU_PERV_CHIPUNIT",  2,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000001010402}, // InAddr: inst  2, OutAddr: inst  1 (endpoint ID = 1, PSCOM, perv ring)

    // EQ:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // per-quad QME registers
    { 0x00000000270E0000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    7,  0,   0x00,   P10_DEFAULT_MODE,  0x00000000200E0000}, // InAddr: inst 7, OutAddr: inst 0
    { 0x00000000200E0300, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    0,  3,   0x00,   P10_DEFAULT_MODE,  0x00000000230E0300}, // InAddr: inst 0, OutAddr: inst 3
    // perv resources
    { 0x0000000021000000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    1,  7,   0x00,   P10_DEFAULT_MODE,  0x0000000027000000}, // InAddr: inst  1, OutAddr: inst  7 (endpoint ID = 0, CPLT Conf)
    { 0x0000000023040000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    3,  5,   0x00,   P10_DEFAULT_MODE,  0x0000000025040000}, // InAddr: inst  3, OutAddr: inst  5 (endpoint ID = 4, FIR)
    { 0x0000000020050000, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    0,  2,   0x00,   P10_DEFAULT_MODE,  0x0000000022050000}, // InAddr: inst  0, OutAddr: inst  2 (endpoint ID = 5, Thermal)
    { 0x00000000200F0040, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    0,  1,   0x00,   P10_DEFAULT_MODE,  0x00000000210F0040}, // InAddr: inst  0, OutAddr: inst  1 (endpoint ID = F, PCB slave)
    { 0x000000002003F040, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    0,  0,   0x00,   P10_DEFAULT_MODE,  0x000000002003F040}, // InAddr: inst  0, OutAddr: inst  0 (endpoint ID = 3, Clock Controller)
    { 0x0000000020010202, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    0,  5,   0x00,   P10_DEFAULT_MODE,  0x0000000025010202}, // InAddr: inst  0, OutAddr: inst  5 (endpoint ID = 1, PSCOM, perv ring)
    { 0x0000000027010232, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    7,  4,   0x00,   P10_DEFAULT_MODE,  0x0000000024010232}, // InAddr: inst  7, OutAddr: inst  4 (endpoint ID = 1, PSCOM, perv ring)
    { 0x0000000020010402, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    0,  5,   0x00,   P10_DEFAULT_MODE,  0x0000000025010402}, // InAddr: inst  0, OutAddr: inst  5 (endpoint ID = 1, PSCOM, qme ring)
    { 0x0000000027010432, PU_EQ_CHIPUNIT,    "PU_EQ_CHIPUNIT",    7,  4,   0x00,   P10_DEFAULT_MODE,  0x0000000024010432}, // InAddr: inst  7, OutAddr: inst  4 (endpoint ID = 1, PSCOM, qme ring)

    // C:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // per-core QME registers
    { 0x00000000200E88AA, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",     0, 31,   0x00,   P10_DEFAULT_MODE,  0x00000000270E18AA}, // InAddr: inst 0 (RegSel 8), OutAddr: inst 31
    { 0x00000000270E88BB, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",    28,  0,   0x00,   P10_DEFAULT_MODE,  0x00000000200E88BB}, // InAddr: inst 28, OutAddr: inst 0
    // cl2/l3 endpoints
    { 0x00000000200100BB, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",     0,  4,   0x00,   P10_DEFAULT_MODE,  0x00000000210180BB}, // InAddr: inst 0 (RegSel 0), OutAddr: inst 4
    { 0x00000000220128CC, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",    10, 20,   0x00,   P10_DEFAULT_MODE,  0x00000000250188CC}, // InAddr: inst 10, OutAddr: inst 20
    { 0x00000000200200BB, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",     0,  4,   0x00,   P10_DEFAULT_MODE,  0x00000000210280BB}, // InAddr: inst 0 (RegSel 0), OutAddr: inst 4
    { 0x00000000220228CC, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",    10, 20,   0x00,   P10_DEFAULT_MODE,  0x00000000250288CC}, // InAddr: inst 10, OutAddr: inst 20
    // perv resources (pscom endpoint)
    { 0x0000000020010000, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",     0, 11,   0x00,   P10_DEFAULT_MODE,  0x0000000022011000}, // InAddr: inst  0, OutAddr: inst 11 (endpoint ID = 1, PSCOM, internal ring)
    { 0x0000000023014000, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",    13,  2,   0x00,   P10_DEFAULT_MODE,  0x0000000020012000}, // InAddr: inst 13, OutAddr: inst  2 (endpoint ID = 1, PSCOM, internal ring)
    { 0x0000000023012302, PU_C_CHIPUNIT,     "PU_C_CHIPUNIT",    14,  2,   0x00,   P10_DEFAULT_MODE,  0x0000000020012302}, // InAddr: inst 14, OutAddr: inst  2 (endpoint ID = 1, PSCOM, perv ring, CLKADJ satellite)


    // PEC:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // nest-clock stack resources
    { 0x0000000003011800, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   0,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000002011800}, // InAddr: inst 0, OutAddr: inst 1
    { 0x000000000201183F, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   1,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000301183F}, // InAddr: inst 1, OutAddr: inst 0
    // pci-clock stack resources
    { 0x0000000008010800, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   0,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000009010800}, // InAddr: inst 0, OutAddr: inst 1
    { 0x0000000009010837, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   1,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008010837}, // InAddr: inst 1, OutAddr: inst 0
    // perv resources
    { 0x0000000008000000, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   0,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000009000000}, // InAddr: inst  0, OutAddr: inst  1 (endpoint ID = 0, CPLT Conf)
    { 0x0000000009040000, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   1,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008040000}, // InAddr: inst  1, OutAddr: inst  0 (endpoint ID = 4, FIR)
    { 0x0000000009050000, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   1,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000009050000}, // InAddr: inst  1, OutAddr: inst  1 (endpoint ID = 5, Thermal)
    { 0x00000000080F0040, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   0,  1,   0x00,   P10_DEFAULT_MODE,  0x00000000090F0040}, // InAddr: inst  0, OutAddr: inst  1 (endpoint ID = F, PCB slave)
    { 0x000000000803F040, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   0,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000903F040}, // InAddr: inst  0, OutAddr: inst  1 (endpoint ID = 3, Clock Controller)
    { 0x0000000008010001, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   0,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008010001}, // InAddr: inst  0, OutAddr: inst  0 (endpoint ID = 1, PSCOM, internal ring)
    { 0x0000000009010402, PU_PEC_CHIPUNIT,   "PU_PEC_CHIPUNIT",   1,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008010402}, // InAddr: inst  1, OutAddr: inst  1 (endpoint ID = 1, PSCOM, perv ring)

    // PHB:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // nest-clock pipe resources
    { 0x00000000030118C0, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   2,  4,   0x00,   P10_DEFAULT_MODE,  0x0000000002011880}, // InAddr: inst 2, OutAddr: inst 4
    { 0x0000000003011872, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   0,  1,   0x00,   P10_DEFAULT_MODE,  0x00000000030118B2}, // InAddr: inst 0, OutAddr: inst 1
    { 0x00000000020118C0, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   5,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000003011840}, // InAddr: inst 5, OutAddr: inst 0
    { 0x0000000003011840, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   0,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000003011840}, // InAddr: inst 0, OutAddr: inst 0
    { 0x0000000003011840, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   0,  3,   0x00,   P10_DEFAULT_MODE,  0x0000000002011840}, // InAddr: inst 0, OutAddr: inst 3
    // pci-clock pipe resources (ring 3-5)
    { 0x0000000008010C00, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   0,  5,   0x00,   P10_DEFAULT_MODE,  0x0000000009011400}, // InAddr: inst 0, OutAddr: inst 5
    { 0x0000000009011400, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   5,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008010C00}, // InAddr: inst 5, OutAddr: inst 0
    { 0x000000000801140F, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   2,  3,   0x00,   P10_DEFAULT_MODE,  0x0000000009010C0F}, // InAddr: inst 2, OutAddr: inst 3
    // pci-clock pipe resources (ring 2, sats 1-6)
    { 0x0000000008010840, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   0,  5,   0x00,   P10_DEFAULT_MODE,  0x00000000090108C0}, // InAddr: inst 0, OutAddr: inst 5
    { 0x00000000090108C0, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   5,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008010840}, // InAddr: inst 5, OutAddr: inst 0
    { 0x0000000008010900, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   0,  5,   0x00,   P10_DEFAULT_MODE,  0x0000000009010980}, // InAddr: inst 0, OutAddr: inst 5
    { 0x0000000009010980, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   5,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008010900}, // InAddr: inst 5, OutAddr: inst 0
    { 0x000000000801088F, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   1,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000901084F}, // InAddr: inst 1, OutAddr: inst 3
    { 0x0000000009010942, PU_PHB_CHIPUNIT,   "PU_PHB_CHIPUNIT",   4,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000008010902}, // InAddr: inst 4, OutAddr: inst 0

    // NMMU:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    { 0x0000000002010C00, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT",  0,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000003010C00}, // InAddr: inst 0, OutAddr: inst 1
    { 0x0000000003010C0A, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT",  1,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000002010C0A}, // InAddr: inst 1, OutAddr: inst 0

    // PAUC:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // TL registers (ring 6)
    { 0x0000000010011800, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  0,  3,   0x00,   P10_DEFAULT_MODE,  0x0000000013011800}, // InAddr: inst 0, OutAddr: inst 3
    { 0x0000000013011800, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  3,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000010011800}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000001201181A, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  2,  1,   0x00,   P10_DEFAULT_MODE,  0x000000001101181A}, // InAddr: inst 2, OutAddr: inst 1
    { 0x000000001101181F, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  1,  3,   0x00,   P10_DEFAULT_MODE,  0x000000001301181F}, // InAddr: inst 1, OutAddr: inst 3
    // IO PPE registers, direct (ring 11)
    { 0x0000000010012C00, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  0,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000011012C00}, // InAddr: inst 0, OutAddr: inst 1
    { 0x0000000011012C00, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  1,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000010012C00}, // InAddr: inst 1, OutAddr: inst 0
    { 0x0000000013012C40, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  3,  2,   0x00,   P10_DEFAULT_MODE,  0x0000000012012C40}, // InAddr: inst 3, OutAddr: inst 2
    { 0x0000000010012C40, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  0,  2,   0x00,   P10_DEFAULT_MODE,  0x0000000012012C40}, // InAddr: inst 0, OutAddr: inst 2
    // IO PHY per-bus registers, indirect from IO PPE (ring 11)
    { 0x800F840010012C3F, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  0,  3,   0x00,   P10_DEFAULT_MODE,  0x800F840013012C3F}, // InAddr: inst 0, OutAddr: inst 3
    { 0x800F840013012C3F, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  3,  0,   0x00,   P10_DEFAULT_MODE,  0x800F840010012C3F}, // InAddr: inst 3, OutAddr: inst 0
    { 0x800F140011012C3F, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  1,  2,   0x00,   P10_DEFAULT_MODE,  0x800F140012012C3F}, // InAddr: inst 1, OutAddr: inst 2
    // perv resources associated w/ IOHS
    { 0x0000000010000000, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  0,  2,   0x00,   P10_DEFAULT_MODE,  0x0000000012000000}, // InAddr: inst  0, OutAddr: inst  2 (endpoint ID = 0, CPLT Conf)
    { 0x0000000012040000, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  2,  3,   0x00,   P10_DEFAULT_MODE,  0x0000000013040000}, // InAddr: inst  2, OutAddr: inst  3 (endpoint ID = 4, FIR)
    { 0x0000000013050000, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  3,  1,   0x00,   P10_DEFAULT_MODE,  0x0000000011050000}, // InAddr: inst  3, OutAddr: inst  1 (endpoint ID = 5, Thermal)
    { 0x00000000110F0040, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  1,  2,   0x00,   P10_DEFAULT_MODE,  0x00000000120F0040}, // InAddr: inst  1, OutAddr: inst  2 (endpoint ID = F, PCB slave)
    { 0x000000001003F040, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  0,  3,   0x00,   P10_DEFAULT_MODE,  0x000000001303F040}, // InAddr: inst  0, OutAddr: inst  3 (endpoint ID = 3, Clock Controller)
    { 0x0000000010010001, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  0,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000010010001}, // InAddr: inst  0, OutAddr: inst  0 (endpoint ID = 1, PSCOM, internal ring)
    { 0x0000000011010402, PU_PAUC_CHIPUNIT,  "PU_PAUC_CHIPUNIT",  1,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000010010402}, // InAddr: inst  1, OutAddr: inst  0 (endpoint ID = 1, PSCOM, perv ring)


    // IOHS:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // IOHS chiplet, direct to PDL registers
    { 0x000000001801100A, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  0,  7,   0x00,   P10_DEFAULT_MODE,  0x000000001F01100A}, // InAddr: inst 0, OutAddr: inst 7
    { 0x000000001F01100A, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  7,  0,   0x00,   P10_DEFAULT_MODE,  0x000000001801100A}, // InAddr: inst 7, OutAddr: inst 0
    { 0x000000001A01100B, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  2,  5,   0x00,   P10_DEFAULT_MODE,  0x000000001D01100B}, // InAddr: inst 2, OutAddr: inst 5
    { 0x000000001E011025, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  6,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000018011025}, // InAddr: inst 6, OutAddr: inst 0
    // IO PHY registers , indirect from IO PPE (group 0/1)
    { 0x800C840010012C3F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  0,  5,   0x00,   P10_DEFAULT_MODE,  0x800C842012012C3F}, // InAddr: inst 0, OutAddr: inst 5
    { 0x800C842012012C3F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  5,  0,   0x00,   P10_DEFAULT_MODE,  0x800C840010012C3F}, // InAddr: inst 5, OutAddr: inst 0
    { 0x800C842013012C3F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  7,  2,   0x00,   P10_DEFAULT_MODE,  0x800C840011012C3F}, // InAddr: inst 7, OutAddr: inst 2
    { 0x800C840010012C3F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  0,  6,   0x00,   P10_DEFAULT_MODE,  0x800C840013012C3F}, // InAddr: inst 0, OutAddr: inst 6
    // perv resources associated w/ IOHS
    { 0x0000000018000000, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000001A000000}, // InAddr: inst  0, OutAddr: inst  2 (endpoint ID = 0, CPLT Conf)
    { 0x000000001E040000, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  6,  3,   0x00,   P10_DEFAULT_MODE,  0x000000001B040000}, // InAddr: inst  6, OutAddr: inst  3 (endpoint ID = 4, FIR)
    { 0x000000001F050000, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  7,  5,   0x00,   P10_DEFAULT_MODE,  0x000000001D050000}, // InAddr: inst  7, OutAddr: inst  5 (endpoint ID = 5, Thermal)
    { 0x000000001D0F0040, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  5,  6,   0x00,   P10_DEFAULT_MODE,  0x000000001E0F0040}, // InAddr: inst  5, OutAddr: inst  6 (endpoint ID = F, PCB slave)
    { 0x000000001C03F040, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  4,  7,   0x00,   P10_DEFAULT_MODE,  0x000000001F03F040}, // InAddr: inst  4, OutAddr: inst  7 (endpoint ID = 3, Clock Controller)
    { 0x0000000018010001, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  0,  4,   0x00,   P10_DEFAULT_MODE,  0x000000001C010001}, // InAddr: inst  0, OutAddr: inst  4 (endpoint ID = 1, PSCOM, internal ring)
    { 0x0000000019010402, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",  1,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000018010402}, // InAddr: inst  1, OutAddr: inst  0 (endpoint ID = 1, PSCOM, perv ring)

    // PAU:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // direct SCOM access to PAU chiplet, rings 2/3 for pau logical unit targets
    { 0x0000000010010800, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",   0,  7,   0x00,   P10_DEFAULT_MODE,  0x0000000013011000}, // InAddr: inst 0, OutAddr: inst 7
    { 0x0000000013011400, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",   7,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000010010C00}, // InAddr: inst 7, OutAddr: inst 0
    { 0x0000000011010800, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",   3,  6,   0x00,   P10_DEFAULT_MODE,  0x0000000013010800}, // InAddr: inst 3, OutAddr: inst 6
    { 0x0000000011010800, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",   3,  4,   0x00,   P10_DEFAULT_MODE,  0x0000000012010800}, // InAddr: inst 3, OutAddr: inst 4
    { 0x0000000011010800, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",   3,  0,   0x00,   P10_DEFAULT_MODE,  0x0000000010010800}, // InAddr: inst 3, OutAddr: inst 0
    { 0x0000000010010C00, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",   0,  6,   0x00,   P10_DEFAULT_MODE,  0x0000000013010C00}, // InAddr: inst 0, OutAddr: inst 6

    // MI/MC:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // EMO logic, pbi (ring 3, sat id = 0)
    { 0x000000000D010C0A, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    1,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000E010C0A}, // InAddr: inst 1, OutAddr: inst 2
    { 0x000000000C010C1A, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    0,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000F010C1A}, // InAddr: inst 0, OutAddr: inst 3
    { 0x000000000F010C1A, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    3,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010C1A}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000D010C0A, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    1,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000E010C0A}, // InAddr: inst 1, OutAddr: inst 2
    { 0x000000000C010C1A, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    0,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000F010C1A}, // InAddr: inst 0, OutAddr: inst 3
    { 0x000000000F010C1A, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    3,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010C1A}, // InAddr: inst 3, OutAddr: inst 0
    // EMO logic, mcbist (ring 3, sat id = 12,14,15)
    { 0x000000000C010F00, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    0,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000F010F00}, // InAddr: inst 0, OutAddr: inst 3
    { 0x000000000F010FC0, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    3,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010FC0}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000E010F80, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    2,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000D010F80}, // InAddr: inst 2, OutAddr: inst 1
    { 0x000000000C010F00, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    0,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000F010F00}, // InAddr: inst 0, OutAddr: inst 3
    { 0x000000000F010FC0, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    3,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010FC0}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000E010F80, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    2,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000D010F80}, // InAddr: inst 2, OutAddr: inst 1
    // perv resources associated w/ MC
    { 0x000000000C000000, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000E000000}, // InAddr: inst  0, OutAddr: inst  2 (endpoint ID = 0, CPLT Conf)
    { 0x000000000E040000, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    2,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000F040000}, // InAddr: inst  2, OutAddr: inst  3 (endpoint ID = 4, FIR)
    { 0x000000000F050000, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    3,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000D050000}, // InAddr: inst  3, OutAddr: inst  1 (endpoint ID = 5, Thermal)
    { 0x000000000D0F0040, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    1,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C0F0040}, // InAddr: inst  1, OutAddr: inst  0 (endpoint ID = F, PCB slave)
    { 0x000000000C03F040, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000E03F040}, // InAddr: inst  0, OutAddr: inst  2 (endpoint ID = 3, Clock Controller)
    { 0x000000000C010001, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    0,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000D010001}, // InAddr: inst  0, OutAddr: inst  1 (endpoint ID = 1, PSCOM, internal ring)
    { 0x000000000D010402, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT",    1,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010402}, // InAddr: inst  1, OutAddr: inst  0 (endpoint ID = 1, PSCOM, perv ring)
    // perv resources associated w/ MC
    { 0x000000000C000000, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000E000000}, // InAddr: inst  0, OutAddr: inst  2 (endpoint ID = 0, CPLT Conf)
    { 0x000000000E040000, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    2,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000F040000}, // InAddr: inst  2, OutAddr: inst  3 (endpoint ID = 4, FIR)
    { 0x000000000F050000, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    3,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000D050000}, // InAddr: inst  3, OutAddr: inst  1 (endpoint ID = 5, Thermal)
    { 0x000000000D0F0040, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    1,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C0F0040}, // InAddr: inst  1, OutAddr: inst  0 (endpoint ID = F, PCB slave)
    { 0x000000000C03F040, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000E03F040}, // InAddr: inst  0, OutAddr: inst  2 (endpoint ID = 3, Clock Controller)
    { 0x000000000C010001, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    0,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000D010001}, // InAddr: inst  0, OutAddr: inst  1 (endpoint ID = 1, PSCOM, internal ring)
    { 0x000000000D010402, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT",    1,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010402}, // InAddr: inst  1, OutAddr: inst  0 (endpoint ID = 1, PSCOM, perv ring)

    // MCC:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          ------------------
    // EMO logic, pbi (ring 3, sat id = 0, regs x22-x2B or x32-x3B)
    { 0x000000000D010C22, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   2,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000D010C32}, // InAddr: inst 2, OutAddr: inst 3
    { 0x000000000C010C2B, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   0,  5,   0x00,   P10_DEFAULT_MODE,  0x000000000E010C3B}, // InAddr: inst 0, OutAddr: inst 5
    { 0x000000000F010C37, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   7,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010C27}, // InAddr: inst 7, OutAddr: inst 0
    { 0x000000000C010C38, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   1,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000D010C28}, // InAddr: inst 1, OutAddr: inst 2
    { 0x000000000C010C26, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   0,  6,   0x00,   P10_DEFAULT_MODE,  0x000000000F010C26}, // InAddr: inst 0, OutAddr: inst 6
    { 0x000000000E010C23, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   4,  4,   0x00,   P10_DEFAULT_MODE,  0x000000000E010C23}, // InAddr: inst 4, OutAddr: inst 4
    // EMO logic, mcbist (ring 3, sat id = 13)
    { 0x000000000C010F45, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   0,  4,   0x00,   P10_DEFAULT_MODE,  0x000000000E010F45}, // InAddr: inst 0, OutAddr: inst 4
    { 0x000000000D010F63, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   3,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010F43}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000D010F50, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   2,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000D010F50}, // InAddr: inst 2, OutAddr: inst 2
    { 0x000000000C010F5F, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   0,  6,   0x00,   P10_DEFAULT_MODE,  0x000000000F010F5F}, // InAddr: inst 0, OutAddr: inst 6
    { 0x000000000D010F77, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   3,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010F57}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000D010F44, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   2,  7,   0x00,   P10_DEFAULT_MODE,  0x000000000F010F64}, // InAddr: inst 2, OutAddr: inst 7
    // MC direct, select USTL/DSTL in ring 3, sat ID = 4/5/8/9
    { 0x000000000C010D00, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   0,  3,   0x00,   P10_DEFAULT_MODE,  0x000000000D010D40}, // InAddr: inst 0, OutAddr: inst 3
    { 0x000000000D010D40, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   3,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C010D00}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000C010D00, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   0,  1,   0x00,   P10_DEFAULT_MODE,  0x000000000C010D40}, // InAddr: inst 0, OutAddr: inst 1
    { 0x000000000F010E40, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   7,  4,   0x00,   P10_DEFAULT_MODE,  0x000000000E010E00}, // InAddr: inst 7, OutAddr: inst 4
    { 0x000000000F010E40, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT",   7,  5,   0x00,   P10_DEFAULT_MODE,  0x000000000E010E40}, // InAddr: inst 7, OutAddr: inst 5

    // OMIC:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // MC direct, dl shared regs (ring ID = 5/6)
    { 0x000000000C011740, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  0,  7,   0x00,   P10_DEFAULT_MODE,  0x000000000F011B40}, // InAddr: inst 0, OutAddr: inst 7
    { 0x000000000F011B40, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  7,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C011740}, // InAddr: inst 7, OutAddr: inst 0
    { 0x000000000E011B4F, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  5,  4,   0x00,   P10_DEFAULT_MODE,  0x000000000E01174F}, // InAddr: inst 5, OutAddr: inst 4
    { 0x000000000C011B43, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  1,  5,   0x00,   P10_DEFAULT_MODE,  0x000000000E011B43}, // InAddr: inst 1, OutAddr: inst 5
    { 0x000000000C011747, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000D011747}, // InAddr: inst 0, OutAddr: inst 2
    // PAU indirect, PHY per-group registers
    { 0x800C844010012C3F, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  0,  3,   0x00,   P10_DEFAULT_MODE,  0x800C846012012C3F}, // InAddr: inst 0, OutAddr: inst 3
    { 0x800C846012012C3F, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  3,  0,   0x00,   P10_DEFAULT_MODE,  0x800C844010012C3F}, // InAddr: inst 3, OutAddr: inst 0
    { 0x800CC46013012C3F, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  7,  4,   0x00,   P10_DEFAULT_MODE,  0x800CC44011012C3F}, // InAddr: inst 7, OutAddr: inst 4
    { 0x800C844010012C3F, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT",  0,  5,   0x00,   P10_DEFAULT_MODE,  0x800C846011012C3F}, // InAddr: inst 0, OutAddr: inst 5

    // OMI:
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    // MC direct, dl per-subchannel regs, non-PM (ring ID = 5/6)
    { 0x000000000C011750, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   0, 15,   0x00,   P10_DEFAULT_MODE,  0x000000000F011B60}, // InAddr: inst  0, OutAddr: inst 15
    { 0x000000000F011B60, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",  15,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C011750}, // InAddr: inst 15, OutAddr: inst  0
    { 0x000000000E011B6F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",  11,  4,   0x00,   P10_DEFAULT_MODE,  0x000000000D01175F}, // InAddr: inst 11, OutAddr: inst  4
    { 0x000000000C011B53, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   2,  5,   0x00,   P10_DEFAULT_MODE,  0x000000000D011763}, // InAddr: inst  2, OutAddr: inst  5
    { 0x000000000C011757, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000C011B57}, // InAddr: inst  0, OutAddr: inst  2
    // MC direct, dl per-subchannel regs, PM (ring ID = 5/6)
    { 0x000000000C011770, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   0, 15,   0x00,   P10_DEFAULT_MODE,  0x000000000F011B78}, // InAddr: inst  0, OutAddr: inst 15
    { 0x000000000F011B78, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",  15,  0,   0x00,   P10_DEFAULT_MODE,  0x000000000C011770}, // InAddr: inst 15, OutAddr: inst  0
    { 0x000000000E011B7B, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",  11,  4,   0x00,   P10_DEFAULT_MODE,  0x000000000D011773}, // InAddr: inst 11, OutAddr: inst  4
    { 0x000000000C011B73, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   2,  5,   0x00,   P10_DEFAULT_MODE,  0x000000000D01177B}, // InAddr: inst  2, OutAddr: inst  5
    { 0x000000000C011772, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   0,  2,   0x00,   P10_DEFAULT_MODE,  0x000000000C011B72}, // InAddr: inst  0, OutAddr: inst  2

    // PAU indirect, PHY per-lane registers
    { 0x8000844310012C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   0,  6,   0x00,   P10_DEFAULT_MODE,  0x8000846312012C3F}, // InAddr: inst 0, OutAddr: inst 6
    { 0x8000846012012C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   6,  0,   0x00,   P10_DEFAULT_MODE,  0x8000844010012C3F}, // InAddr: inst 6, OutAddr: inst 0
    { 0x8000844F11012C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   9,  5,   0x00,   P10_DEFAULT_MODE,  0x8000844F12012C3F}, // InAddr: inst 9, OutAddr: inst 5
    { 0x8000844512012C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",   4, 13,   0x00,   P10_DEFAULT_MODE,  0x8000844D13012C3F}, // InAddr: inst 4, OutAddr: inst 13
};

//------------------------------------------------------------------------------
// Function definitions
//------------------------------------------------------------------------------

/// @brief Run the unit test for error paths
/// @retval Return non-zero if Unit test fails
uint32_t runErrorPathTest(void)
{
    uint32_t l_rc = 0;
    bool l_chipUnitRelated = false;
    bool l_errPathTestFailed = false;
    std::vector<p10_chipUnitPairing_t> l_unitTargetMatches;
    uint64_t l_addrCreated = 0;

    do
    {
        // Error path test
        printf("\n");
        printf("==========================\n");
        printf("Error path test\n");
        printf("==========================\n");

        for (uint8_t l_entry = 0;
             l_entry < (sizeof(errorPathTestTable) / sizeof(errorPathEntry_t));
             l_entry++)
        {
            // Reset variables
            l_rc = 0;
            l_unitTargetMatches.clear();
            l_chipUnitRelated = false;
            l_errPathTestFailed = false;
            l_addrCreated = 0;

            // Print test progress
            printf("\nEntry %d, Addr 0x%08lx_%08llx, ChipUnitType %s, ChipEC 0x%.2X, Expected err func %d",
                   l_entry,
                   errorPathTestTable[l_entry].address >> 32,
                   errorPathTestTable[l_entry].address & 0xFFFFFFFFULL,
                   errorPathTestTable[l_entry].chipUnitStr,
                   errorPathTestTable[l_entry].chipEcLevel,
                   errorPathTestTable[l_entry].expectedFailStage);

            // Debug print
            if (DEBUG > 0)
            {
                displayAddrFields(errorPathTestTable[l_entry].address,
                                  errorPathTestTable[l_entry].chipUnitType,
                                  errorPathTestTable[l_entry].chipEcLevel);
            }

            // Run p10_scominfo_isChipUnitScom
            l_rc = p10_scominfo_isChipUnitScom(errorPathTestTable[l_entry].chipUnitType,
                                               errorPathTestTable[l_entry].chipEcLevel,
                                               errorPathTestTable[l_entry].address,
                                               l_chipUnitRelated,
                                               l_unitTargetMatches,
                                               errorPathTestTable[l_entry].xlateMode);

            // If fail is expected from this function
            if (errorPathTestTable[l_entry].expectedFailStage == IS_CHIP_UNIT_SCOM)
            {
                // If func doesn't return an error, continue to look for error in its output
                if ( (!l_rc) && (l_chipUnitRelated == true) )
                {
                    // Check returned chip unit types
                    for (auto l_iter = l_unitTargetMatches.cbegin();
                         l_iter != l_unitTargetMatches.cend();
                         l_iter++)
                    {
                        // Debug print
                        if (DEBUG > 0)
                        {
                            printf("    Matched Chip Unit types: %d\n", l_iter->chipUnitType);
                        }

                        if (l_iter->chipUnitType == errorPathTestTable[l_entry].chipUnitType)
                        {
                            // Returned chip unit type matches input chip type. This means the
                            // input address doesn't cause a failure as expected --> Unit test failed.
                            printf("\n  ==> Error path unit test failed! p10_scominfo_isChipUnitScom() should NOT pass this entry\n");
                            l_errPathTestFailed = true;
                            break;
                        }
                    }
                }
            }

            // If fail is not expected but function returns an error, test fails
            else if (l_rc)
            {
                printf("\n  ==> Error path unit test failed! p10_scominfo_isChipUnitScom() unexpectly returns an error.\n");
                l_errPathTestFailed = true;
            }

            // If test fail, break out test entry loop unless in debug mode.
            if ( (l_errPathTestFailed == true) && (!DEBUG) )
            {
                l_rc = 0xBAD1;
                break;
            }

            // Running createChipUnitScomAddr
            l_addrCreated = p10_scominfo_createChipUnitScomAddr(errorPathTestTable[l_entry].chipUnitType,
                            errorPathTestTable[l_entry].chipEcLevel,
                            errorPathTestTable[l_entry].instance,
                            errorPathTestTable[l_entry].address,
                            errorPathTestTable[l_entry].xlateMode);

            // If fail is expected from this function
            if (errorPathTestTable[l_entry].expectedFailStage == CREATE_CHIP_UNIT_SCOM_ADDR)
            {
                // If returned address is not a failed translation as expected --> Unit test failed.
                if (l_addrCreated != FAILED_TRANSLATION)
                {
                    printf("\n  ==> Error path unit test failed! p10_scominfo_createChipUnitScomAddr() should NOT pass this entry\n");
                    l_errPathTestFailed = true;
                }
            }

            // If fail is not expected but function returns an error, test fails
            else if (l_addrCreated == FAILED_TRANSLATION)
            {
                printf("\n  ==> Error path unit test failed! p10_scominfo_createChipUnitScomAddr() unexpectly returns an error.\n");
                l_errPathTestFailed = true;
                l_rc = 0xBAD2;
            }

            // This entry passes unit test
            if (l_errPathTestFailed == false)
            {
                printf("  ==> Error path unit test passes\n");
            }
            // Break out if not in DEBUG mode
            else if (!DEBUG)
            {
                l_rc = 0xBAD2;
                break;
            }

        } // End Test Entry For loop
    }
    while (0);

    return l_rc;
}

/// @brief Run the unit test for good paths
/// @retval Return non-zero if Unit test fails
uint32_t runGoodPathTest(void)
{
    uint32_t l_rc = 0;
    bool l_chipUnitRelated = false;
    bool l_goodPathTestFailed = false;
    std::vector<p10_chipUnitPairing_t> l_unitTargetMatches;
    uint64_t l_addrCreated = 0;
    uint8_t l_entry = 0;

    do
    {
        // Good path test
        printf("\n");
        printf("==========================\n");
        printf("Good path test\n");
        printf("==========================\n");

        for (l_entry = 0;
             l_entry < (sizeof(goodPathTestTable) / sizeof(goodPathEntry_t));
             l_entry++)
        {
            // Reset variables
            l_rc = 0;
            l_unitTargetMatches.clear();
            l_chipUnitRelated = false;
            l_goodPathTestFailed = false;
            l_addrCreated = 0;

            // Print test progress
            printf("\nEntry %d, INPUT: Addr 0x%08lx_%08llx, ChipUnitType %s (Instance %d), ChipEC 0x%.2X - EXPECTED OUTPUT: Instance %d, XlatedAddr  0x%08lx_%08llx",
                   l_entry,
                   goodPathTestTable[l_entry].inAddress >> 32,
                   goodPathTestTable[l_entry].inAddress & 0xFFFFFFFFULL,
                   goodPathTestTable[l_entry].chipUnitStr,
                   goodPathTestTable[l_entry].instanceIn,
                   goodPathTestTable[l_entry].chipEcLevel,
                   goodPathTestTable[l_entry].instanceOut,
                   goodPathTestTable[l_entry].xlatedAddress >> 32,
                   goodPathTestTable[l_entry].xlatedAddress & 0xFFFFFFFFULL);

            // Debug print
            if (DEBUG > 0)
            {
                printf("\n  INPUT ADDR");
                displayAddrFields(goodPathTestTable[l_entry].inAddress,
                                  goodPathTestTable[l_entry].chipUnitType,
                                  goodPathTestTable[l_entry].chipEcLevel);
            }

            // Run p10_scominfo_isChipUnitScom
            l_rc = p10_scominfo_isChipUnitScom(goodPathTestTable[l_entry].chipUnitType,
                                               goodPathTestTable[l_entry].chipEcLevel,
                                               goodPathTestTable[l_entry].inAddress,
                                               l_chipUnitRelated,
                                               l_unitTargetMatches,
                                               goodPathTestTable[l_entry].xlateMode);

            // If func returns an error --> Unit test failed
            if (l_rc)
            {
                printf("\n  ==> Good path unit test failed! p10_scominfo_isChipUnitScom() returns an error\n");
                l_goodPathTestFailed = true;
            }

            // If func can't find a chip unit associated with input addr --> Unit test failed.
            else if (l_chipUnitRelated == false)
            {
                printf("\n  ==> Good path unit test failed! p10_scominfo_isChipUnitScom() can't find an associated chip unit\n");
                l_goodPathTestFailed = true;
            }

            // If func found unexpected chip unit type associated with input addr --> Unit test failed
            else
            {
                // Check all returned chip unit types
                uint8_t l_unitTargetMatch = 0;

                for (auto l_iter = l_unitTargetMatches.cbegin();
                     l_iter != l_unitTargetMatches.cend();
                     l_iter++)
                {
                    if (l_iter->chipUnitType == goodPathTestTable[l_entry].chipUnitType &&
                        l_iter->chipUnitNum == goodPathTestTable[l_entry].instanceIn)
                    {
                        l_unitTargetMatch++;

                        // Debug print
                        if (DEBUG > 0)
                        {
                            printf("    Matched Chip Unit types: %d\n", l_iter->chipUnitType);
                        }
                    }
                }

                if (!l_unitTargetMatch)
                {
                    printf("\n  ==> Good path unit test failed! p10_scominfo_isChipUnitScom() returns wrong chip unit type or instance\n");
                    l_goodPathTestFailed = true;
                }
            }

            // If error and not in debug mode, break out test entry loop
            if ( (l_goodPathTestFailed == true) && (!DEBUG) )
            {
                break;
            }

            // Run p10_scominfo_createChipUnitScomAddr
            l_addrCreated = p10_scominfo_createChipUnitScomAddr(goodPathTestTable[l_entry].chipUnitType,
                            goodPathTestTable[l_entry].chipEcLevel,
                            goodPathTestTable[l_entry].instanceOut,
                            goodPathTestTable[l_entry].inAddress,
                            goodPathTestTable[l_entry].xlateMode);

            // Debug print
            if (DEBUG > 0)
            {
                printf("\n  ADDR CREATED");
                displayAddrFields(l_addrCreated,
                                  goodPathTestTable[l_entry].chipUnitType,
                                  goodPathTestTable[l_entry].chipEcLevel);
            }

            // Compare addr to expected addr
            if (goodPathTestTable[l_entry].xlatedAddress != l_addrCreated)
            {
                printf("\n  ==> Good path unit test failed! p10_scominfo_createChipUnitScomAddr() returns incorrect addr: 0x%08lx_%08llx\n",
                       l_addrCreated >> 32, l_addrCreated & 0xFFFFFFFFULL);
                l_goodPathTestFailed = true;
            }

            // This entry passes unit test
            if (l_goodPathTestFailed == false)
            {
                printf("  ==> Good path unit test passes\n");
            }
            // Break out if not in DEBUG mode
            else if (!DEBUG)
            {
                break;
            }

        } // End Test Entry For loop
    }
    while (0);

    return l_rc;
}

// main function
int main(int argc, char* argv[])
{
    uint32_t l_rc = 0;

    do
    {

        // Run error path tests
        l_rc = runErrorPathTest();

        if (l_rc)
        {
            break;
        }

        // Run good path tests
        l_rc = runGoodPathTest();

        if (l_rc)
        {
            break;
        }

    }
    while (0);

    return l_rc;
}
