/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/lib/p10_core_throttle_table_values.H $ */
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
    0x73F10000,     // 1
    0x73EA0000,     // 2
    0x73E40000,     // 3
    0x73DE0000,     // 4
    0x73D80000,     // 5
    0x73D20000,     // 6
    0x73CD0000,     // 7
    0x73C70000,     // 8
    0x73C20000,     // 9
    0x73BC0000,     // 10
    0x73B70000,     // 11
    0x73B20000,     // 12
    0x73AD0000,     // 13
    0x73A80000,     // 14
    0x73A30000,     // 15
    0x739F0000,     // 16
    0x739A0000,     // 17
    0x73960000,     // 18
    0x73910000,     // 19
    0x738D0000,     // 20
    0x73890000,     // 21
    0x73850000,     // 22
    0x73810000,     // 23
    0x737D0000,     // 24
    0x73790000,     // 25
    0x73750000,     // 26
    0x73720000,     // 27
    0x736E0000,     // 28
    0x736A0000,     // 29
    0x73670000,     // 30
    0x73630000,     // 31
    0x73600000,     // 32
    0x735D0000,     // 33
    0x73590000,     // 34
    0x73560000,     // 35
    0x73530000,     // 36
    0x73500000,     // 37
    0x734D0000,     // 38
    0x734A0000,     // 39
    0x73470000,     // 40
    0x73440000,     // 41
    0x73410000,     // 42
    0x733E0000,     // 43
    0x733B0000,     // 44
    0x73380000,     // 45
    0x73350000,     // 46
    0x73320000,     // 47
    0x732F0000,     // 48
    0x732C0000,     // 49
    0x732A0000,     // 50
    0x73270000,     // 51
    0x73240000,     // 52
    0x73210000,     // 53
    0x731E0000,     // 54
    0x731B0000,     // 55
    0x73180000,     // 56
    0x73150000,     // 57
    0x73120000,     // 58
    0x730F0000,     // 59
    0x730C0000,     // 60
    0x73090000,     // 61
    0x73060000,     // 62
    0x73040000      // 63
};
