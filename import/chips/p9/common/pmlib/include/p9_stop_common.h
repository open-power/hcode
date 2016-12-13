/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/p9_stop_common.h $       */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

// Clock Control Constants
enum P9_HCD_COMMON_CLK_CTRL_CONSTANTS
{
    CLK_STOP_CMD                             = BIT64(0),
    CLK_START_CMD                            = BIT64(1),
    CLK_REGION_PERV                          = BIT64(4),
    CLK_REGION_ANEP                          = BIT64(10),
    CLK_REGION_DPLL                          = BIT64(14),
    CLK_REGION_EX0_L2                        = BIT64(8),
    CLK_REGION_EX1_L2                        = BIT64(9),
    CLK_REGION_EX0_L2_L3_REFR                = BIT64(6) | BIT64(8) | BIT64(12),
    CLK_REGION_EX1_L2_L3_REFR                = BIT64(7) | BIT64(9) | BIT64(13),
    CLK_REGION_ALL_BUT_EX                    = BITS64(4, 2) | BITS64(10, 2) | BIT64(14),
    CLK_REGION_ALL_BUT_EX_DPLL               = BITS64(4, 2) | BITS64(10, 2),
    CLK_REGION_ALL_BUT_EX_ANEP_DPLL          = BITS64(4, 2) | BIT64(11),
    CLK_REGION_ALL_BUT_PLL                   = BITS64(4, 10),
    CLK_REGION_ALL                           = BITS64(4, 11),
    CLK_THOLD_SL                             = BIT64(48),
    CLK_THOLD_NSL                            = BIT64(49),
    CLK_THOLD_ARY                            = BIT64(50),
    CLK_THOLD_ALL                            = BITS64(48, 3)
};

// Scan Type Constants
enum P9_HCD_COMMON_SCAN_TYPE_CONSTANTS
{
    SCAN_TYPE_FUNC                          = BIT64(48),
    SCAN_TYPE_CFG                           = BIT64(49),
    SCAN_TYPE_CCFG_GPTR                     = BIT64(50),
    SCAN_TYPE_REGF                          = BIT64(51),
    SCAN_TYPE_LBIST                         = BIT64(52),
    SCAN_TYPE_ABIST                         = BIT64(53),
    SCAN_TYPE_REPR                          = BIT64(54),
    SCAN_TYPE_TIME                          = BIT64(55),
    SCAN_TYPE_BNDY                          = BIT64(56),
    SCAN_TYPE_FARR                          = BIT64(57),
    SCAN_TYPE_CMSK                          = BIT64(58),
    SCAN_TYPE_INEX                          = BIT64(59)
};

// SCAN0 Constants
enum P9_HCD_COMMON_SCAN0_CONSTANTS
{
    SCAN0_REGION_ALL                         = 0x7FF,
    SCAN0_REGION_ALL_BUT_PLL                 = 0x7FE,
    SCAN0_REGION_ALL_BUT_EX                  = 0x619,
    SCAN0_REGION_ALL_BUT_EX_DPLL             = 0x618,
    SCAN0_REGION_ALL_BUT_EX_ANEP_DPLL        = 0x608,
    SCAN0_REGION_EX0_L2_L3_REFR              = 0x144,
    SCAN0_REGION_EX1_L2_L3_REFR              = 0x0A2,
    SCAN0_TYPE_GPTR_REPR_TIME                = 0x230,
    SCAN0_TYPE_ALL_BUT_GPTR_REPR_TIME        = 0xDCF
};

/// STOP Level constants
enum P9_STOP_LEVELS
{
    STOP_LEVEL_0                 = 0,
    STOP_LEVEL_1                 = 1,
    STOP_LEVEL_2                 = 2,
    STOP_LEVEL_3                 = 3,
    STOP_LEVEL_4                 = 4,
    STOP_LEVEL_5                 = 5,
    STOP_LEVEL_6                 = 6,
    STOP_LEVEL_7                 = 7,
    STOP_LEVEL_8                 = 8,
    STOP_LEVEL_9                 = 9,
    STOP_LEVEL_10                = 10,
    STOP_LEVEL_11                = 11,
    STOP_LEVEL_12                = 12,
    STOP_LEVEL_13                = 13,
    STOP_LEVEL_14                = 14,
    STOP_LEVEL_15                = 15
};

/// STOP History Ctrl and Status constants
enum P9_STOP_HISTORY_CTRL_STATUS
{
    STOP_CORE_READY_RUN          = 0,
    STOP_CACHE_READY_RUN         = 0,
    STOP_CORE_IS_GATED           = 1,
    STOP_CACHE_IS_GATED          = 1,
    STOP_TRANS_COMPLETE          = 0,
    STOP_TRANS_CORE_PORTION      = 1,
    STOP_TRANS_ENTRY             = 2,
    STOP_TRANS_EXIT              = 3,
    STOP_REQ_ENABLE              = 1,
    STOP_ACT_ENABLE              = 1,
    STOP_REQ_DISABLE             = 0,
    STOP_ACT_DISABLE             = 0
};

/// Homer Layout
enum P9_HOMER_REGION_CONSTANTS
{
    OCC_SRAM_BASE                = 0xFFF00000,
    SGPE_IMAGE_SRAM_BASE         = 0xFFF2C000,
    SGPE_HEADER_IMAGE_OFFSET     = 0x180,
    CME_SRAM_BASE                = 0xFFFF8000,
    // QPMR_BASE (HOMER_BASE + 1MB)
    QPMR_BASE_HOMER_OFFSET       = 0x100000,
    // CPMR_BASE (HOMER_BASE + 2MB)
    CPMR_BASE_HOMER_OFFSET       = 0x200000,
    // CME_IMAGE_BASE (CPMR_BASE + 6KB + 256KB(8KB + 256B(~56KB) + 192KB))
    CME_IMAGE_CPMR_OFFSET        = 0x41800,
    // CME_HEADER_BASE (CME_IMAGE_BASE + 384B)
    CME_HEADER_IMAGE_OFFSET      = 0x180,
    // CME_BCE_IRR_HOMER_BASE (HOMER_BASE + 3MB - 128B)
    CME_BCE_IRR_HOMER_OFFSET     = 0x2FFF80
};
