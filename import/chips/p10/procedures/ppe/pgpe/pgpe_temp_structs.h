/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_temp_structs.h $    */
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
#ifndef __PGPE_TEMP_STRUCTS_H__
#define __PGPE_TEMP_STRUCTS_H__

typedef union dpll_stat
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
        uint64_t reserved1 : 1;
        uint64_t freqout : 11;
        uint64_t hires_freqout : 5;
        uint64_t reserved2 : 43;
        uint64_t update_complete : 1;
        uint64_t freq_change : 1;
        uint64_t block_active : 1;
        uint64_t lock : 1;
#else
        uint64_t lock : 1;
        uint64_t block_active : 1;
        uint64_t freq_change : 1;
        uint64_t update_complete : 1;
        uint64_t reserved2 : 43;
        uint64_t hires_freqout : 5;
        uint64_t freqout : 11;
        uint64_t reserved1 : 1;
#endif // _BIG_ENDIAN
    } fields;
} dpll_stat_t;

typedef union dpll_freq
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
        uint64_t reserved1 : 1;
        uint64_t fmax : 11;
        uint64_t hires_fmax : 4;
        uint64_t max_mult_frac7: 1;
        uint64_t fmult : 11;
        uint64_t hires_fmult : 4;
        uint64_t mult_frac7: 1;
        uint64_t fmin : 11;
        uint64_t hires_fmin : 4;
        uint64_t min_mult_frac7: 1;
        uint64_t reserved4 : 15;
#else
        uint64_t reserved4 : 15;
        uint64_t min_mult_frac7: 1;
        uint64_t hires_fmin : 4;
        uint64_t fmin : 11;
        uint64_t mult_frac7: 1;
        uint64_t hires_fmult : 4;
        uint64_t fmult : 11;
        uint64_t max_mult_frac7: 1;
        uint64_t hires_fmax : 4;
        uint64_t fmax : 11;
        uint64_t reserved1 : 1;
#endif // _BIG_ENDIAN
    } fields;
} dpll_freq_t;


typedef union pmsr
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
        uint64_t pstate_data : 36;
        uint64_t reserved    : 23;
        uint64_t version     : 5;
#else
        uint64_t version     : 5;
        uint64_t reserved    : 23;
        uint64_t pstate_data : 36;
#endif
    } hw_fields;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t global_actual : 8;
        uint64_t local_actual : 8;
        uint64_t pmin : 8;
        uint64_t pmax : 8;
        uint64_t pmcr_disabled : 1;
        uint64_t safe_mode : 1;
        uint64_t reserved : 1;
        uint64_t pstates_suspended : 1;
        uint64_t reserved1  : 22;
        uint64_t upd_in_prog : 1;
        uint64_t invalid_pmcr_version : 1;
        uint64_t version : 4;
#else
        uint64_t version : 4;
        uint64_t invalid_pmcr_version : 1;
        uint64_t upd_in_prog : 1;
        uint64_t reserved1  : 22;
        uint64_t pstates_suspended : 1;
        uint64_t reserved : 1;
        uint64_t safe_mode : 1;
        uint64_t pmcr_disabled : 1;
        uint64_t pmax : 8;
        uint64_t pmin : 8;
        uint64_t local_actual : 8;
        uint64_t global_actual : 8;
#endif
    } fields;
} pmsr_t;

#endif
