/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/registers/quad_register_addresses.h $ */
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
#ifndef __QUAD_REGISTER_ADDRESSES_H__
#define __QUAD_REGISTER_ADDRESSES_H__

// $Id$
// $Source$
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2015
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file quad_register_addresses.h
/// \brief Symbolic addresses for the QUAD unit

// *** WARNING *** - This file is generated automatically, do not edit.


#define PIB_BASE 0x10000000
#define EQ_SCAN_REGION_TYPE 0x10030005
#define EQ_CLK_REGION 0x10030006
#define EQ_CLOCK_STAT_SL 0x10030008
#define EQ_CLOCK_STAT_NSL 0x10030009
#define EQ_CLOCK_STAT_ARY 0x1003000a
#define EQ_NET_CTRL0 0x100f0040
#define EQ_NET_CTRL0_AND 0x100f0041
#define EQ_NET_CTRL0_OR 0x100f0042
#define EQ_CPLT_CTRL0 0x10000000
#define EQ_CPLT_CTRL0_CLR 0x10000020
#define EQ_CPLT_CTRL0_OR 0x10000010
#define EQ_CPLT_CTRL1 0x10000001
#define EQ_CPLT_CTRL1_CLR 0x10000021
#define EQ_CPLT_CTRL1_OR 0x10000011
#define EQ_BIST 0x1003000b
#define EQ_ERROR_REG 0x100f001f
#define EQ_HANG_PULSE_1_REG 0x100f0021
#define EQ_SLAVE_CONFIG_REG 0x100f001e
#define EQ_PM_PURGE_REG 0x10011c13
#define EQ_DRAM_REF_REG 0x10011c0f

#endif // __QUAD_REGISTER_ADDRESSES_H__
