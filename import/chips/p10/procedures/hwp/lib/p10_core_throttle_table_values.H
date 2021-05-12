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
    0xFBA84300,     // 16
    0xFBA33F00,     // 17
    0xFB9E3C00,     // 18
    0xFB9A3900,     // 19
    0xFB953600,     // 20
    0xFB913300,     // 21
    0xFB8D3100,     // 22
    0xFB882F00,     // 23
    0xFB842D00,     // 24
    0xFB802B00,     // 25
    0xFB7C2900,     // 26
    0xFB782700,     // 27
    0xFB752500,     // 28
    0xFB712300,     // 29
    0xFB6D2100,     // 30
    0xFB6A1F00,     // 31
    0xFB661D00,     // 32
    0xFB631B00,     // 33
    0xFB601A00,     // 34
    0xFB5C1900,     // 35
    0xFB591800,     // 36
    0xFB561700,     // 37
    0xFB531600,     // 38
    0xFB4F1600,     // 39
    0xFB4C1500,     // 40
    0xFB491400,     // 41
    0xFB461400,     // 42
    0xFB431300,     // 43
    0xFB401200,     // 44
    0xFB3D1200,     // 45
    0xFB3A1100,     // 46
    0xFB371000,     // 47
    0xFB351000,     // 48
    0xFB320F00,     // 49
    0xFB2F0E00,     // 50
    0xFB2C0E00,     // 51
    0xFB290D00,     // 52
    0xFB260C00,     // 53
    0xFB230B00,     // 54
    0xFB210A00,     // 55
    0xFB1E0900,     // 56
    0xFB1B0800,     // 57
    0xFB180700,     // 58
    0xFB150600,     // 59
    0xFB120500,     // 60
    0xFB0F0500,     // 61
    0xFB0C0400,     // 62
    0xFB090400      // 63
};
