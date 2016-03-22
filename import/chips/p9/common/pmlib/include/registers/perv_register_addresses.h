/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/registers/perv_register_addresses.h $ */
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
#ifndef __PERV_REGISTER_ADDRESSES_H__
#define __PERV_REGISTER_ADDRESSES_H__

// $Id$
// $Source$
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2015
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file perv_register_addresses.h
/// \brief Symbolic addresses for the PERV unit

// *** WARNING *** - This file is generated automatically, do not edit.


#define PIB_BASE 0x0
#define PERV_SCAN_REGION_TYPE 0x00030005
#define PERV_CLK_REGION 0x00030006
#define PERV_CLOCK_STAT_SL 0x00030008
#define PERV_CLOCK_STAT_NSL 0x00030009
#define PERV_CLOCK_STAT_ARY 0x0003000a
#define PERV_NET_CTRL0 0x000f0040
#define PERV_NET_CTRL0_AND 0x000f0041
#define PERV_NET_CTRL0_OR 0x000f0042
#define PERV_CPLT_CTRL0 0x00000000
#define PERV_CPLT_CTRL0_CLR 0x00000020
#define PERV_CPLT_CTRL0_OR 0x00000010
#define PERV_CPLT_CTRL1 0x00000001
#define PERV_CPLT_CTRL1_CLR 0x00000021
#define PERV_CPLT_CTRL1_OR 0x00000011
#define PERV_BIST 0x0003000b
#define PERV_ERROR_REG 0x000f001f
#define PERV_HANG_PULSE_1_REG 0x000f0021
#define PERV_SLAVE_CONFIG_REG 0x000f001e
#define PERV_OPCG_REG0 0x00030002
#define PERV_OPCG_REG1 0x00030003
#define PERV_CPLT_STAT0 0x00000100

#endif // __PERV_REGISTER_ADDRESSES_H__
