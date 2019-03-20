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
    { 0x00000000260E0000, NONE,             "NONE",                1,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid chip unit type
    { 0x000000001D050800, P10_NO_CU,        "P10_NO_CU",           0,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Chip Unit Type
    { 0x0000000014010000, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x14
    { 0x0000000026020400, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x0
    { 0x000000001D010800, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Ring ID 0x2
    { 0x0000000021030800, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",    5,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 5
    { 0x0000000021030800, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",   40,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 40

    { 0x00000000280E0000, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x28
    { 0x00000000210A0000, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0xA
    { 0x00000000250E1000, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Region Sel 0x1
    { 0x00000000200E0800, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid QME per core 0x1
    { 0x00000000260E0000, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,    8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8

    { 0x000000001F028000, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x1F
    { 0x0000000023038000, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x3
    { 0x00000000270E0000, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Region Sel 0x0
    { 0x0000000027011000, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,   32,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 32

    { 0x000000001A011800, PU_PEC_CHIPUNIT,  "PU_PEC_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x1A
    { 0x0000000002021800, PU_PEC_CHIPUNIT,  "PU_PEC_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x0000000009010C00, PU_PEC_CHIPUNIT,  "PU_PEC_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x3
    { 0x0000000009010800, PU_PEC_CHIPUNIT,  "PU_PEC_CHIPUNIT" ,    2,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 2

    { 0x000000000B010C00, PU_PHB_CHIPUNIT,  "PU_PHB_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0B
    { 0x0000000009021400, PU_PHB_CHIPUNIT,  "PU_PHB_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x02
    { 0x0000000009010000, PU_PHB_CHIPUNIT,  "PU_PHB_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Ring ID 0x0
    { 0x0000000008010C00, PU_PHB_CHIPUNIT,  "PU_PHB_CHIPUNIT" ,    6,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 6

    { 0x0000000022010400, PU_IOHS_CHIPUNIT, "PU_IOHS_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x22
    { 0x000000001F051400, PU_IOHS_CHIPUNIT, "PU_IOHS_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x05
    { 0x000000001D012000, PU_IOHS_CHIPUNIT, "PU_IOHS_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x08
    { 0x0000000010012800, PU_IOHS_CHIPUNIT, "PU_IOHS_CHIPUNIT" ,   8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8

    { 0x0000000000010C00, PU_NMMU_CHIPUNIT, "PU_NMMU_CHIPUNIT" ,  1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x00
    { 0x0000000002020C00, PU_NMMU_CHIPUNIT, "PU_NMMU_CHIPUNIT" ,  1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x05
    { 0x0000000003010800, PU_NMMU_CHIPUNIT, "PU_NMMU_CHIPUNIT" ,  1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x02
    { 0x0000000002010C00, PU_NMMU_CHIPUNIT, "PU_NMMU_CHIPUNIT" ,  2,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 2

    { 0x000000000B010800, PU_MC_CHIPUNIT,   "PU_MC_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0B
    { 0x000000000C020800, PU_MC_CHIPUNIT,   "PU_MC_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x000000000F010CC0, PU_MC_CHIPUNIT,   "PU_MC_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x03
    { 0x000000000D010800, PU_MC_CHIPUNIT,   "PU_MC_CHIPUNIT" ,    5,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 5

    { 0x000000000B010800, PU_MI_CHIPUNIT,   "PU_MI_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0B
    { 0x000000000C020800, PU_MI_CHIPUNIT,   "PU_MI_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x000000000F010CC0, PU_MI_CHIPUNIT,   "PU_MI_CHIPUNIT" ,    1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x03
    { 0x000000000D010800, PU_MI_CHIPUNIT,   "PU_MI_CHIPUNIT" ,    5,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 5

    { 0x0000000010010900, PU_MCC_CHIPUNIT,  "PU_MCC_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x10
    { 0x000000000C000900, PU_MCC_CHIPUNIT,  "PU_MCC_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x0
    { 0x000000000F010600, PU_MCC_CHIPUNIT,  "PU_MCC_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x01
    { 0x000000000C010900, PU_MCC_CHIPUNIT,  "PU_MCC_CHIPUNIT" ,   9,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 9

    { 0x000000000A010C00, PU_OMI_CHIPUNIT,  "PU_OMI_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x0A
    { 0x000000000E000C00, PU_OMI_CHIPUNIT,  "PU_OMI_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x0
    { 0x000000000F011C00, PU_OMI_CHIPUNIT,  "PU_OMI_CHIPUNIT" ,   1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x7
    { 0x000000000C010C00, PU_OMI_CHIPUNIT,  "PU_OMI_CHIPUNIT" ,  16,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 16

    { 0x0000000010011400, PU_OMIC_CHIPUNIT, "PU_OMIC_CHIPUNIT" ,  1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x10
    { 0x000000000C021000, PU_OMIC_CHIPUNIT, "PU_OMIC_CHIPUNIT" ,  1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x2
    { 0x000000000F010400, PU_OMIC_CHIPUNIT, "PU_OMIC_CHIPUNIT" ,  1,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x01
    { 0x000000000C011000, PU_OMIC_CHIPUNIT, "PU_OMIC_CHIPUNIT" ,  9,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 9

    { 0x00000000140E0000, PU_PPE_CHIPUNIT,  "PU_PPE_CHIPUNIT" ,   0,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x14
    { 0x0000000020060000, PU_PPE_CHIPUNIT,  "PU_PPE_CHIPUNIT" ,   4,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x06
    { 0x0000000010011C00, PU_PPE_CHIPUNIT,  "PU_PPE_CHIPUNIT" ,   4,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x7
    { 0x0000000012012C40, PU_PPE_CHIPUNIT,  "PU_PPE_CHIPUNIT" ,   8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8
    { 0x0000000013012C00, PU_PPE_CHIPUNIT,  "PU_PPE_CHIPUNIT" ,  52,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 52

    { 0x000000001401C000, PU_PAU_CHIPUNIT,  "PU_PAU_CHIPUNIT" ,   0,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid chip ID 0x14
    { 0x000000001302C000, PU_PAU_CHIPUNIT,  "PU_PAU_CHIPUNIT" ,   4,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid Endpoint 0x06
    { 0x0000000012010400, PU_PAU_CHIPUNIT,  "PU_PAU_CHIPUNIT" ,   4,      0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM          }, // Invalid RingId 0x1
    { 0x000000001201C000, PU_PAU_CHIPUNIT,  "PU_PAU_CHIPUNIT" ,   8,      0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR }, // Invalid instance 8

    //  TEST INDIRECT ADDRESSES
    { 0x800C84C01001303F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    5,     0x00,   P10_DEFAULT_MODE,  IS_CHIP_UNIT_SCOM},          // Invalid Group Addr
    { 0x800C844018010C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",    16,     0x00,   P10_DEFAULT_MODE,  CREATE_CHIP_UNIT_SCOM_ADDR}, // Invalid instance 16


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
    uint8_t              instance;          // The chip unit instance desired to converted to
    uint8_t              chipEcLevel;       // The chip EC level
    p10TranslationMode_t xlateMode;         // Translation mode
    uint64_t             xlatedAddress;     // Expected translated address
} goodPathTestTable[] =
{
    //      In                                                   Convert               Xlate            Expected
    //     Addr             ChipUnitType     ChipUnitType str   Instance  ChipEC       Mode             Output Addr
    //------------------   --------------    -----------------  --------  ------       -----          -------------------
    { 0x0000000001000000, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",    39,     0x00,   P10_DEFAULT_MODE,  0x0000000027000000}, // InAddr: inst  1, OutAddr: inst 39
    { 0x000000001D050000, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",    15,     0x00,   P10_DEFAULT_MODE,  0x000000000F050000}, // InAddr: inst 29, OutAddr: inst 15
    { 0x0000000027010400, PU_PERV_CHIPUNIT, "PU_PERV_CHIPUNIT",     1,     0x00,   P10_DEFAULT_MODE,  0x0000000001010400}, // InAddr: inst 39, OutAddr: inst 1

    { 0x0000000020050022, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,     7,     0x00,   P10_DEFAULT_MODE,  0x0000000027050022}, // InAddr: inst 0, OutAddr: inst 7
    { 0x00000000270E0000, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,     0,     0x00,   P10_DEFAULT_MODE,  0x00000000200E0000}, // InAddr: inst 7, OutAddr: inst 0
    { 0x00000000200F0000, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,     6,     0x00,   P10_DEFAULT_MODE,  0x00000000260F0000}, // InAddr: inst 0, OutAddr: inst 6
    { 0x00000000230300AF, PU_EQ_CHIPUNIT,   "PU_EQ_CHIPUNIT"  ,     4,     0x00,   P10_DEFAULT_MODE,  0x00000000240300AF}, // InAddr: inst 3, OutAddr: inst 4

    { 0x00000000200E88AA, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,    31,     0x00,   P10_DEFAULT_MODE,  0x00000000270E18AA}, // InAddr: inst 0 (RegSel 8), OutAddr: inst 31
    { 0x00000000200200BB, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,     4,     0x00,   P10_DEFAULT_MODE,  0x00000000210280BB}, // InAddr: inst 0 (RegSel 0), OutAddr: inst 4
    { 0x00000000270E88BB, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,     0,     0x00,   P10_DEFAULT_MODE,  0x00000000200E88BB}, // InAddr: inst 28, OutAddr: inst 0
    { 0x00000000220228CC, PU_C_CHIPUNIT,    "PU_C_CHIPUNIT"   ,    20,     0x00,   P10_DEFAULT_MODE,  0x00000000250288CC}, // InAddr: inst 10, OutAddr: inst 20

    { 0x0000000008010800, PU_PEC_CHIPUNIT,  "PU_PEC_CHIPUNIT" ,     1,     0x00,   P10_DEFAULT_MODE,  0x0000000009010800}, // InAddr: inst 0, OutAddr: inst 1
    { 0x0000000003011800, PU_PEC_CHIPUNIT,  "PU_PEC_CHIPUNIT" ,     0,     0x00,   P10_DEFAULT_MODE,  0x0000000002011800}, // InAddr: inst 1, OutAddr: inst 0

    { 0x0000000008010C00, PU_PHB_CHIPUNIT,  "PU_PHB_CHIPUNIT" ,     5,     0x00,   P10_DEFAULT_MODE,  0x0000000009011400}, // InAddr: inst 0, OutAddr: inst 5
    { 0x0000000009011400, PU_PHB_CHIPUNIT,  "PU_PHB_CHIPUNIT" ,     0,     0x00,   P10_DEFAULT_MODE,  0x0000000008010C00}, // InAddr: inst 5, OutAddr: inst 0
    { 0x000000000801140F, PU_PHB_CHIPUNIT,  "PU_PHB_CHIPUNIT" ,     4,     0x00,   P10_DEFAULT_MODE,  0x000000000901100F}, // InAddr: inst 2, OutAddr: inst 4

    { 0x00000000180104AA, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT" ,   7,     0x00,   P10_DEFAULT_MODE,  0x000000001F0104AA}, // InAddr: inst 0, OutAddr: inst 7 (Axon chiplet)
    { 0x000000001F0104BB, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT" ,   0,     0x00,   P10_DEFAULT_MODE,  0x00000000180104BB}, // InAddr: inst 7, OutAddr: inst 0 (Axon chiplet)
    { 0x00000000190104FA, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT" ,   6,     0x00,   P10_DEFAULT_MODE,  0x000000001E0104FA}, // InAddr: inst 1, OutAddr: inst 6 (Axon chiplet)

    { 0x0000000002010C00, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT" ,   1,     0x00,   P10_DEFAULT_MODE,  0x0000000003010C00}, // InAddr: inst 0, OutAddr: inst 1
    { 0x0000000003010C0A, PU_NMMU_CHIPUNIT,  "PU_NMMU_CHIPUNIT" ,   0,     0x00,   P10_DEFAULT_MODE,  0x0000000002010C0A}, // InAddr: inst 1, OutAddr: inst 0

    { 0x000000000C010B00, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT" ,     3,     0x00,   P10_DEFAULT_MODE,  0x000000000F010B00}, // InAddr: inst 0, OutAddr: inst 3
    { 0x000000000F010B00, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT" ,     0,     0x00,   P10_DEFAULT_MODE,  0x000000000C010B00}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000D010800, PU_MC_CHIPUNIT,    "PU_MC_CHIPUNIT" ,     2,     0x00,   P10_DEFAULT_MODE,  0x000000000E010800}, // InAddr: inst 1, OutAddr: inst 2

    { 0x000000000C010B00, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT" ,     3,     0x00,   P10_DEFAULT_MODE,  0x000000000F010B00}, // InAddr: inst 0, OutAddr: inst 3
    { 0x000000000F010B00, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT" ,     0,     0x00,   P10_DEFAULT_MODE,  0x000000000C010B00}, // InAddr: inst 3, OutAddr: inst 0
    { 0x000000000D010800, PU_MI_CHIPUNIT,    "PU_MI_CHIPUNIT" ,     2,     0x00,   P10_DEFAULT_MODE,  0x000000000E010800}, // InAddr: inst 1, OutAddr: inst 2

    { 0x000000000C010900, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT" ,    7,     0x00,   P10_DEFAULT_MODE,  0x000000000F010940}, // InAddr: inst 0, OutAddr: inst 7
    { 0x000000000F010A40, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT" ,    0,     0x00,   P10_DEFAULT_MODE,  0x000000000C010A00}, // InAddr: inst 7, OutAddr: inst 0
    { 0x000000000E010940, PU_MCC_CHIPUNIT,   "PU_MCC_CHIPUNIT" ,    6,     0x00,   P10_DEFAULT_MODE,  0x000000000F010900}, // InAddr: inst 5, OutAddr: inst 6

    { 0x000000000C010C00, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT" ,   15,     0x00,   P10_DEFAULT_MODE,  0x000000000F011000}, // InAddr: inst 0, OutAddr: inst 15
    { 0x000000000F011000, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT" ,    0,     0x00,   P10_DEFAULT_MODE,  0x000000000C010C00}, // InAddr: inst 15, OutAddr: inst 0
    { 0x000000000C011400, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT" ,   14,     0x00,   P10_DEFAULT_MODE,  0x000000000F011800}, // InAddr: inst 1, OutAddr: inst 14

    { 0x000000000C011400, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT" ,   7,     0x00,   P10_DEFAULT_MODE,  0x000000000F011800}, // InAddr: inst 0, OutAddr: inst 7
    { 0x000000000F011800, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT" ,   0,     0x00,   P10_DEFAULT_MODE,  0x000000000C011400}, // InAddr: inst 7, OutAddr: inst 0
    { 0x000000000C011000, PU_OMIC_CHIPUNIT,  "PU_OMIC_CHIPUNIT" ,   5,     0x00,   P10_DEFAULT_MODE,  0x000000000E011000}, // InAddr: inst 1, OutAddr: inst 5

    { 0x00000000000E0000, PU_PPE_CHIPUNIT,   "PU_PPE_CHIPUNIT",    39,     0x00,   P10_DEFAULT_MODE,  0x00000000270E0000}, // InAddr: inst 0, OutAddr: inst 39
    { 0x00000000270E0000, PU_PPE_CHIPUNIT,   "PU_PPE_CHIPUNIT" ,    0,     0x00,   P10_DEFAULT_MODE,  0x00000000000E0000}, // InAddr: inst 51, OutAddr: inst 0
    { 0x0000000011012C00, PU_PPE_CHIPUNIT,   "PU_PPE_CHIPUNIT" ,   37,     0x00,   P10_DEFAULT_MODE,  0x00000000250E0000}, // InAddr: inst 17, OutAddr: inst 37
    { 0x0000000000050000, PU_PPE_CHIPUNIT,   "PU_PPE_CHIPUNIT" ,    7,     0x00,   P10_DEFAULT_MODE,  0x0000000000080000}, // InAddr: inst 4, OutAddr: inst 7

    { 0x0000000010011800, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",     7,     0x00,   P10_DEFAULT_MODE,  0x0000000013012000}, // InAddr: inst 0, OutAddr: inst 7
    { 0x0000000013012000, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",     0,     0x00,   P10_DEFAULT_MODE,  0x0000000010011800}, // InAddr: inst 7, OutAddr: inst 0
    { 0x0000000011010800, PU_PAU_CHIPUNIT,   "PU_PAU_CHIPUNIT",     6,     0x00,   P10_DEFAULT_MODE,  0x0000000013010800}, // InAddr: inst 3, OutAddr: inst 6

    //  TEST INDIRECT ADDRESSES
    { 0x800C840010012C3F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    5,     0x00,   P10_DEFAULT_MODE,  0x800C842012012C3f}, // InAddr: inst 0, OutAddr: inst 5
    { 0x800C842013012C3F, PU_IOHS_CHIPUNIT,  "PU_IOHS_CHIPUNIT",    1,     0x00,   P10_DEFAULT_MODE,  0x800C842010012C3F}, // InAddr: inst 7, OutAddr: inst 1
    { 0x800C846010012C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",    14,     0x00,   P10_DEFAULT_MODE,  0x800C846013012C3F}, // InAddr: inst 2, OutAddr: inst 14
    { 0x800C844011012C3F, PU_OMI_CHIPUNIT,   "PU_OMI_CHIPUNIT",    10,     0x00,   P10_DEFAULT_MODE,  0x800C846011012C3F}, // InAddr: inst 8, OutAddr: inst 10
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
            }

            // This entry passes unit test
            if (l_errPathTestFailed == false)
            {
                printf("  ==> Error path unit test passes\n");
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
            printf("\nEntry %d, INPUT: Addr 0x%08lx_%08llx, ChipUnitType %s, ChipEC 0x%.2X - EXPECTED OUTPUT: Instance %d, XlatedAddr  0x%08lx_%08llx",
                   l_entry,
                   goodPathTestTable[l_entry].inAddress >> 32,
                   goodPathTestTable[l_entry].inAddress & 0xFFFFFFFFULL,
                   goodPathTestTable[l_entry].chipUnitStr,
                   goodPathTestTable[l_entry].chipEcLevel,
                   goodPathTestTable[l_entry].instance,
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
                    if (l_iter->chipUnitType == goodPathTestTable[l_entry].chipUnitType)
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
                    printf("\n  ==> Good path unit test failed! p10_scominfo_isChipUnitScom() returns wrong chip unit type\n");
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
                            goodPathTestTable[l_entry].instance,
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
