/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/lib/p10_core_throttle_table_values.H $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
/// @file  p10_core_throttle_table_values.H
/// @brief The core throttle table values
///
/// *HWP HWP Owner        : Greg Still <stillgs@us.ibm.com>
/// *HWP FW Owner         : Prasad BG Ranganath <prasadbgr@in.ibm.com>
/// *Team                 : PM
/// *Consumed by          : QME:PGPE
/// *Level                : 3
///

// This array comes from the hardware team directly
static const uint32_t core_throttle_table_values[] __attribute__((aligned (256))) =
{
    0x20000000,     // 0  Throttle Disabled with mode update to 00
    0x73FE0000,     // 1
    0x73F70000,     // 2
    0x73F00000,     // 3
    0x73EA0000,     // 4
    0x73E40000,     // 5
    0x73DE0000,     // 6
    0x73D80000,     // 7
    0x73D20000,     // 8
    0x73CC0000,     // 9
    0x73C60000,     // 10
    0x73C10000,     // 11
    0x73BC0000,     // 12
    0x73B60000,     // 13
    0x73B10000,     // 14
    0x73AC0000,     // 15
    0xF3A84300,     // 16
    0xF3A33F00,     // 17
    0xF39E3C00,     // 18
    0xF39A3900,     // 19
    0xF3953600,     // 20
    0xF3913300,     // 21
    0xF38D3100,     // 22
    0xF3882F00,     // 23
    0xF3842D00,     // 24
    0xF3802B00,     // 25
    0xF37C2900,     // 26
    0xF3782700,     // 27
    0xF3752500,     // 28
    0xF3712300,     // 29
    0xF36D2100,     // 30
    0xF36A1F00,     // 31
    0xF3661D00,     // 32
    0xF3631B00,     // 33
    0xF3601A00,     // 34
    0xF35C1900,     // 35
    0xF3591800,     // 36
    0xF3561700,     // 37
    0xF3531600,     // 38
    0xF34F1600,     // 39
    0xF34C1500,     // 40
    0xF3491400,     // 41
    0xF3461400,     // 42
    0xF3431300,     // 43
    0xF3401200,     // 44
    0xF33D1200,     // 45
    0xF33A1100,     // 46
    0xF3371000,     // 47
    0xF3351000,     // 48
    0xF3320F00,     // 49
    0xF32F0E00,     // 50
    0xF32C0E00,     // 51
    0xF3290D00,     // 52
    0xF3260C00,     // 53
    0xF3230B00,     // 54
    0xF3210A00,     // 55
    0xF31E0900,     // 56
    0xF31B0800,     // 57
    0xF3180700,     // 58
    0xF3150600,     // 59
    0xF3120500,     // 60
    0xF30F0500,     // 61
    0xF30C0400,     // 62
    0xF3090400      // 63
};
