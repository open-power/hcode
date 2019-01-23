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

/// \defgroup be64_bits Bit manipulation for 64-bit Big-Endian values
///
/// \note These macros only work in the assembler context because we build our
/// assemblers to do 64-bit arithmetic, which is required for PORE assembly.
///
/// @{

/// Create a multi-bit mask of \a n bits starting at bit \a b
#define BITS64(b, n) ((0xffffffffffffffffull << (64 - (n))) >> (b))
#define BITS32(b, n) ((0xffffffff            << (32 - (n))) >> (b))
#define BITS16(b, n) (((0xffff               << (16 - (n))) & 0xffff) >> (b))
#define BITS8(b, n)  (((0xff                 << (8  - (n))) & 0xff) >> (b))

/// Create a single bit mask at bit \a b
#define BIT64(b) BITS64((b), 1)
#define BIT32(b) BITS32((b), 1)
#define BIT16(b) BITS16((b), 1)
#define BIT8(b)  BITS8((b), 1)

/// Create a amount of shift to bit location \a b
#define SHIFT64(b) (63-(b))
#define SHIFT32(b) (31-(b))
#define SHIFT16(b) (15-(b))
#define SHIFT8(b)  (7-(b))

/// Macro used for second word operation
#define BIT64SH(bit64)          BIT32((bit64-32))
#define BITS64SH(bit64, size)   BITS32((bit64-32), size)
#define SHIFT64SH(bit64)        SHIFT32((bit64-32))

/// Second Half Local Register Access
/// use in32/out32 for first half
#define in32_sh(addr)           in32(addr+4)
#define out32_sh(addr, data)    out32(addr+4, data)

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


#define WAIT_4_PPE_CYCLES          \
    asm volatile ("tw 0, 0, 0");   \
    asm volatile ("tw 0, 0, 0");   \
    asm volatile ("tw 0, 0, 0");   \
    asm volatile ("tw 0, 0, 0");


#endif  /* __PPEHW_COMMON_H__ */
