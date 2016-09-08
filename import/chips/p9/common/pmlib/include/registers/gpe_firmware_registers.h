/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/registers/gpe_firmware_registers.h $ */
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
#ifndef __GPE_FIRMWARE_REGISTERS_H__
#define __GPE_FIRMWARE_REGISTERS_H__

/// \file gpe_firmware_registers.h
/// \brief C register structs for the GPE unit

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




typedef union gpe_gpentsel
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t fit_sel : 4;
        uint32_t watchdog_sel : 4;
        uint32_t reserved1 : 24;
#else
        uint32_t reserved1 : 24;
        uint32_t watchdog_sel : 4;
        uint32_t fit_sel : 4;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpentsel_t;



typedef union gpe_gpenivpr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t ivpr : 23;
        uint32_t reserved1 : 9;
#else
        uint32_t reserved1 : 9;
        uint32_t ivpr : 23;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenivpr_t;



typedef union gpe_gpendbg
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t en_dbg : 1;
        uint32_t halt_on_xstop : 1;
        uint32_t halt_on_trig : 1;
        uint32_t reserved3 : 1;
        uint32_t en_intr_addr : 1;
        uint32_t en_trace_extra : 1;
        uint32_t en_trace_stall : 1;
        uint32_t en_wait_cycles : 1;
        uint32_t en_full_speed : 1;
        uint32_t reserved9 : 1;
        uint32_t trace_mode_sel : 2;
        uint32_t reserved12_15 : 4;
        uint32_t fir_trigger : 1;
        uint32_t spare : 3;
        uint32_t trace_data_sel : 4;
        uint32_t halt_input : 1;
        uint32_t reserved1 : 7;
#else
        uint32_t reserved1 : 7;
        uint32_t halt_input : 1;
        uint32_t trace_data_sel : 4;
        uint32_t spare : 3;
        uint32_t fir_trigger : 1;
        uint32_t reserved12_15 : 4;
        uint32_t trace_mode_sel : 2;
        uint32_t reserved9 : 1;
        uint32_t en_full_speed : 1;
        uint32_t en_wait_cycles : 1;
        uint32_t en_trace_stall : 1;
        uint32_t en_trace_extra : 1;
        uint32_t en_intr_addr : 1;
        uint32_t reserved3 : 1;
        uint32_t halt_on_trig : 1;
        uint32_t halt_on_xstop : 1;
        uint32_t en_dbg : 1;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpendbg_t;



typedef union gpe_gpenstr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t reserved1 : 12;
        uint32_t pbase : 10;
        uint32_t reserved2 : 7;
        uint32_t size : 3;
#else
        uint32_t size : 3;
        uint32_t reserved2 : 7;
        uint32_t pbase : 10;
        uint32_t reserved1 : 12;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenstr_t;



typedef union gpe_gpenmacr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t mem_low_priority : 2;
        uint32_t mem_high_priority : 2;
        uint32_t local_low_priority : 2;
        uint32_t local_high_priority : 2;
        uint32_t sram_low_priority : 2;
        uint32_t sram_high_priority : 2;
        uint32_t reserved1 : 20;
#else
        uint32_t reserved1 : 20;
        uint32_t sram_high_priority : 2;
        uint32_t sram_low_priority : 2;
        uint32_t local_high_priority : 2;
        uint32_t local_low_priority : 2;
        uint32_t mem_high_priority : 2;
        uint32_t mem_low_priority : 2;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenmacr_t;



typedef union gpe_gpenxixcr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t xcr : 32;
#else
        uint32_t xcr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxixcr_t;



typedef union gpe_gpenxiramra
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t xcr : 32;
#else
        uint32_t xcr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiramra_t;



typedef union gpe_gpenxiramga
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t ir : 32;
#else
        uint32_t ir : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiramga_t;



typedef union gpe_gpenxiramdbg
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t xsr : 32;
#else
        uint32_t xsr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiramdbg_t;



typedef union gpe_gpenxiramedr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t ir : 32;
#else
        uint32_t ir : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiramedr_t;



typedef union gpe_gpenxidbgpro
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t xsr : 32;
#else
        uint32_t xsr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxidbgpro_t;



typedef union gpe_gpenxisib
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t pib_addr : 32;
#else
        uint32_t pib_addr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxisib_t;



typedef union gpe_gpenximem
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t mem_addr : 32;
#else
        uint32_t mem_addr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenximem_t;



typedef union gpe_gpenxisgb
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t store_address : 32;
#else
        uint32_t store_address : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxisgb_t;



typedef union gpe_gpenxiicac
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t icache_tag_addr : 27;
        uint32_t reserved : 5;
#else
        uint32_t reserved : 5;
        uint32_t icache_tag_addr : 27;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiicac_t;



typedef union gpe_gpenxidcac
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t dcache_tag_addr : 27;
        uint32_t reserved : 5;
#else
        uint32_t reserved : 5;
        uint32_t dcache_tag_addr : 27;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxidcac_t;



typedef union gpe_gpenoxixcr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t xcr : 32;
#else
        uint32_t xcr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenoxixcr_t;



typedef union gpe_gpenxixsr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t xsr : 32;
#else
        uint32_t xsr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxixsr_t;



typedef union gpe_gpenxisprg0
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sprg0 : 32;
#else
        uint32_t sprg0 : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxisprg0_t;



typedef union gpe_gpenxiedr
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t edr : 32;
#else
        uint32_t edr : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiedr_t;



typedef union gpe_gpenxiir
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t ir : 32;
#else
        uint32_t ir : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiir_t;



typedef union gpe_gpenxiiar
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t iar : 32;
#else
        uint32_t iar : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiiar_t;



typedef union gpe_gpenxisibu
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sib_info_upper : 32;
#else
        uint32_t sib_info_upper : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxisibu_t;



typedef union gpe_gpenxisibl
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sib_info_lower : 32;
#else
        uint32_t sib_info_lower : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxisibl_t;



typedef union gpe_gpenximemu
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t memory_info_upper : 32;
#else
        uint32_t memory_info_upper : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenximemu_t;



typedef union gpe_gpenximeml
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t memory_info_lower : 32;
#else
        uint32_t memory_info_lower : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenximeml_t;



typedef union gpe_gpenxisgbu
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sgb_info_upper : 32;
#else
        uint32_t sgb_info_upper : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxisgbu_t;



typedef union gpe_gpenxisgbl
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t sgb_info_lower : 32;
#else
        uint32_t sgb_info_lower : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxisgbl_t;



typedef union gpe_gpenxiicacu
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t icache_info_upper : 32;
#else
        uint32_t icache_info_upper : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiicacu_t;



typedef union gpe_gpenxiicacl
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t icache_info_lower : 32;
#else
        uint32_t icache_info_lower : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxiicacl_t;



typedef union gpe_gpenxidcacu
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t dcache_info_upper : 32;
#else
        uint32_t dcache_info_upper : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxidcacu_t;



typedef union gpe_gpenxidcacl
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t dcache_info_lower : 32;
#else
        uint32_t dcache_info_lower : 32;
#endif // _BIG_ENDIAN
    } fields;
} gpe_gpenxidcacl_t;


#endif // __ASSEMBLER__
#endif // __GPE_FIRMWARE_REGISTERS_H__
