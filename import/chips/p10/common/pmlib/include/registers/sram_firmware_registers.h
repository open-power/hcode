/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/pmlib/include/registers/sram_firmware_registers.h $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
#ifndef __SRAM_FIRMWARE_REGISTERS_H__
#define __SRAM_FIRMWARE_REGISTERS_H__

// $Id$
// $Source$
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2019
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file sram_firmware_registers.h
/// \brief C register structs for the SRAM unit

// *** WARNING *** - This file is generated automatically, do not edit.

#ifndef SIXTYFOUR_BIT_CONSTANT
    #ifdef __ASSEMBLER__
        #define SIXTYFOUR_BIT_CONSTANT(x) x
    #else
        #define SIXTYFOUR_BIT_CONSTANT(x) x##ull
    #endif
#endif

#ifndef __ASSEMBLER__

#include <stdint.h>




typedef union sram_srmr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sram_enable_remap : 1;
        uint32_t sram_arb_en_send_all_writes : 1;
        uint32_t sram_disable_lfsr : 1;
        uint32_t sram_lfsr_fairness_mask : 5;
        uint32_t sram_error_inject_enable : 1;
        uint32_t sram_ctl_trace_en : 1;
        uint32_t sram_ctl_trace_sel : 1;
        uint32_t spare : 5;
        uint32_t reserved1 : 16;
#else
        uint32_t reserved1 : 16;
        uint32_t spare : 5;
        uint32_t sram_ctl_trace_sel : 1;
        uint32_t sram_ctl_trace_en : 1;
        uint32_t sram_error_inject_enable : 1;
        uint32_t sram_lfsr_fairness_mask : 5;
        uint32_t sram_disable_lfsr : 1;
        uint32_t sram_arb_en_send_all_writes : 1;
        uint32_t sram_enable_remap : 1;
#endif // _BIG_ENDIAN
    } fields;
} sram_srmr_t;



typedef union sram_srmap
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sram_remap_source : 14;
        uint32_t reserved1 : 2;
        uint32_t sram_remap_dest : 14;
        uint32_t reserved2 : 2;
#else
        uint32_t reserved2 : 2;
        uint32_t sram_remap_dest : 14;
        uint32_t reserved1 : 2;
        uint32_t sram_remap_source : 14;
#endif // _BIG_ENDIAN
    } fields;
} sram_srmap_t;



typedef union sram_srear
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sram_error_address : 17;
        uint32_t reserved1 : 15;
#else
        uint32_t reserved1 : 15;
        uint32_t sram_error_address : 17;
#endif // _BIG_ENDIAN
    } fields;
} sram_srear_t;



typedef union sram_srbv0
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t boot_vector_word0 : 32;
#else
        uint32_t boot_vector_word0 : 32;
#endif // _BIG_ENDIAN
    } fields;
} sram_srbv0_t;



typedef union sram_srbv1
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t boot_vector_word1 : 32;
#else
        uint32_t boot_vector_word1 : 32;
#endif // _BIG_ENDIAN
    } fields;
} sram_srbv1_t;



typedef union sram_srbv2
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t boot_vector_word2 : 32;
#else
        uint32_t boot_vector_word2 : 32;
#endif // _BIG_ENDIAN
    } fields;
} sram_srbv2_t;



typedef union sram_srbv3
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t boot_vector_word3 : 32;
#else
        uint32_t boot_vector_word3 : 32;
#endif // _BIG_ENDIAN
    } fields;
} sram_srbv3_t;



typedef union sram_srchsw
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t chksw_wrfsm_dly_dis : 1;
        uint32_t chksw_allow1_rd : 1;
        uint32_t chksw_allow1_wr : 1;
        uint32_t chksw_allow1_rdwr : 1;
        uint32_t chksw_oci_parchk_dis : 1;
        uint32_t chksw_tank_rddata_parchk_dis : 1;
        uint32_t chksw_spare_6 : 1;
        uint32_t chksw_val_be_addr_chk_dis : 1;
        uint32_t chksw_so_spare : 2;
        uint32_t reserved1 : 22;
#else
        uint32_t reserved1 : 22;
        uint32_t chksw_so_spare : 2;
        uint32_t chksw_val_be_addr_chk_dis : 1;
        uint32_t chksw_spare_6 : 1;
        uint32_t chksw_tank_rddata_parchk_dis : 1;
        uint32_t chksw_oci_parchk_dis : 1;
        uint32_t chksw_allow1_rdwr : 1;
        uint32_t chksw_allow1_wr : 1;
        uint32_t chksw_allow1_rd : 1;
        uint32_t chksw_wrfsm_dly_dis : 1;
#endif // _BIG_ENDIAN
    } fields;
} sram_srchsw_t;


#endif // __ASSEMBLER__
#endif // __SRAM_FIRMWARE_REGISTERS_H__

