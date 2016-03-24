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

/// Init Vectors for Register Setup
enum P9_HCD_COMMON_INIT_VECTORS
{
    // (1)PCB_EP_RESET
    // (2)CLK_ASYNC_RESET
    // (3)PLL_TEST_EN
    // (4)PLLRST
    // (5)PLLBYP
    // (11)EDIS
    // (12)VITL_MPW1
    // (13)VITL_MPW2
    // (14)VITL_MPW3
    // (18)FENCE_EN
    // (22)FUNC_CLKSEL
    // (26)LVLTRANS_FENCE
    C_NET_CTRL0_INIT_VECTOR = (BIT64(1) | BITS64(3, 3) | BITS64(11, 4) | BIT64(18) | BIT64(22) | BIT64(26)),
    Q_NET_CTRL0_INIT_VECTOR = (BITS64(1, 5) | BITS64(11, 4) | BIT64(18) | BIT64(22) | BIT64(26)),
    HANG_PULSE1_INIT_VECTOR = BIT64(5)
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
    STOP_CORE_IS_GATED           = 1,
    STOP_TRANS_COMPLETE          = 0,
    STOP_TRANS_CORE_PORTION      = 1,
    STOP_TRANS_ENTRY             = 2,
    STOP_TRANS_EXIT              = 3,
    STOP_REQ_ENABLE              = 1,
    STOP_ACT_ENABLE              = 1,
    STOP_REQ_DISABLE             = 0,
    STOP_ACT_DISABLE             = 0
};
