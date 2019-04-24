/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/powmanlib/ppehw_common.h $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2015,2020                                                    */
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
#ifndef __PPEHW_COMMON_H__
#define __PPEHW_COMMON_H__

#include "ppe42_math.h"

/// 64bits data
typedef union
{
    uint64_t value;
    struct
    {
        uint32_t upper;
        uint32_t lower;
    } words;
} data64_t;

/// 64bit variable breaking into two 32bits macro
#define UPPER32(variable) (uint32_t)((variable >> 32) & 0xFFFFFFFF)
#define LOWER32(variable) (uint32_t)(variable & 0xFFFFFFFF)

/// Mark and Tag

// TAG = [18bits reserved][4bits targets][10bits code]

#define CODE2REGA(code)          ((code & 0x1F00) >> 8)
#define CODE2REGB(code)          ((code & 0xF8) >> 3)
#define CODE2TAG(targets, code)  ((targets << 10) | (code >> 3))
#define TAG_SPRG0(tag)           {ppe42_app_ctx_set(tag);}

#if EPM_TUNING
#define MARK_TRAP(code) \
    {asm volatile ("tw 0, %0, %1" : : \
                   "i" (CODE2REGA(code)), \
                   "i" (CODE2REGB(code)));}
#else
#define MARK_TRAP(code)
#endif

#define MARK_TAG(targets, code) \
    TAG_SPRG0(CODE2TAG(targets, code)) \
    MARK_TRAP(code)


/// Wait Macro

#define PPE_CORE_CYCLE_RATIO       8 // core is 8 times faster than qme
#define PPE_FOR_LOOP_CYCLES        4 // fused compare branch(3), addition(1)
#define PPE_CORE_CYCLE_DIVIDER     (PPE_CORE_CYCLE_RATIO*PPE_FOR_LOOP_CYCLES)
#ifdef USE_PPE_IMPRECISE_MODE
#define PPE_WAIT_CORE_CYCLES(cc) \
    {volatile uint32_t l;asm volatile ("sync");for(l=0;l<cc/PPE_CORE_CYCLE_DIVIDER;l++);}
#else
#define PPE_WAIT_CORE_CYCLES(cc) \
    {volatile uint32_t l;for(l=0;l<cc/PPE_CORE_CYCLE_DIVIDER;l++);}
#endif


#define PPE_WAIT_4NOP_CYCLES       \
    asm volatile ("tw 0, 0, 0");   \
    asm volatile ("tw 0, 0, 0");   \
    asm volatile ("tw 0, 0, 0");   \
    asm volatile ("tw 0, 0, 0");


#endif  /* __PPEHW_COMMON_H__ */
