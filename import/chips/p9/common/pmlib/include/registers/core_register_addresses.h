/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/registers/core_register_addresses.h $ */
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
#ifndef __CORE_REGISTER_ADDRESSES_H__
#define __CORE_REGISTER_ADDRESSES_H__

/// \file core_register_addresses.h
/// \brief Symbolic addresses for the CORE unit

// *** WARNING *** - This file is generated automatically, do not edit.


#define PIB_BASE 0x20000000
#define C_SCAN_REGION_TYPE 0x20030005
#define C_CLK_REGION 0x20030006
#define C_CLOCK_STAT_SL 0x20030008
#define C_CLOCK_STAT_NSL 0x20030009
#define C_CLOCK_STAT_ARY 0x2003000a
#define C_NET_CTRL0 0x200f0040
#define C_NET_CTRL0_AND 0x200f0041
#define C_NET_CTRL0_OR 0x200f0042
#define C_CPLT_CTRL0 0x20000000
#define C_CPLT_CTRL0_CLR 0x20000020
#define C_CPLT_CTRL0_OR 0x20000010
#define C_CPLT_CTRL1 0x20000001
#define C_CPLT_CTRL1_CLR 0x20000021
#define C_CPLT_CTRL1_OR 0x20000011
#define C_BIST 0x2003000b
#define C_ERROR_REG 0x200f001f
#define C_HANG_PULSE_1_REG 0x200f0021
#define C_SLAVE_CONFIG_REG 0x200f001e
#define C_THREAD_INFO 0x20010a9b
#define C_DIRECT_CONTROLS 0x20010a9c
#define C_RAS_STATUS 0x20010a02
#define C_RAM_MODEREG 0x20010a51
#define C_RAM_CTRL 0x20010a52
#define C_RAM_STATUS 0x20010a53

#endif // __CORE_REGISTER_ADDRESSES_H__
