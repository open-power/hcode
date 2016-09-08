/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/registers/quad_firmware_registers.h $ */
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
#ifndef __QUAD_FIRMWARE_REGISTERS_H__
#define __QUAD_FIRMWARE_REGISTERS_H__

/// \file quad_firmware_registers.h
/// \brief C register structs for the QUAD unit

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




typedef union eq_scan_region_type
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_scan_region_type_t;



typedef union eq_clk_region
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_clk_region_t;



typedef union eq_clock_stat_sl
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_clock_stat_sl_t;



typedef union eq_clock_stat_nsl
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_clock_stat_nsl_t;



typedef union eq_clock_stat_ary
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_clock_stat_ary_t;



typedef union eq_net_ctrl0
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_net_ctrl0_t;



typedef union eq_net_ctrl0_and
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_net_ctrl0_and_t;



typedef union eq_net_ctrl0_or
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_net_ctrl0_or_t;



typedef union eq_cplt_ctrl0
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_cplt_ctrl0_t;



typedef union eq_cplt_ctrl0_clr
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_cplt_ctrl0_clr_t;



typedef union eq_cplt_ctrl0_or
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_cplt_ctrl0_or_t;



typedef union eq_cplt_ctrl1
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_cplt_ctrl1_t;



typedef union eq_cplt_ctrl1_clr
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_cplt_ctrl1_clr_t;



typedef union eq_cplt_ctrl1_or
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_cplt_ctrl1_or_t;



typedef union eq_bist
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_bist_t;



typedef union eq_error_reg
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_error_reg_t;



typedef union eq_hang_pulse_1_reg
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_hang_pulse_1_reg_t;



typedef union eq_slave_config_reg
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_slave_config_reg_t;



typedef union eq_pm_purge_reg
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_pm_purge_reg_t;



typedef union eq_dram_ref_reg
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t value : 64;
#else
        uint64_t value : 64;
#endif // _BIG_ENDIAN
    } fields;
} eq_dram_ref_reg_t;


#endif // __ASSEMBLER__
#endif // __QUAD_FIRMWARE_REGISTERS_H__
