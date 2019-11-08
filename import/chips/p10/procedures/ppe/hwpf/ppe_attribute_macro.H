/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/ppe_attribute_macro.H $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#ifndef __PPE_ATTRIBUTE_MACRO_H
#define __PPE_ATTRIBUTE_MACRO_H

// $Id:  Exp $

/// \file ppe_attribite_macro.H

/// \brief This header contains #include-s and macro definitions common to
/// power management ppe code development.


/// Macros for generating the .attrdata section
///
/// The CPP macros PPE_ATTRIBUTE_UINT64[_VECTOR] generate equivalent code
/// depending on whether they are being called from assembler (where they
/// actually create the .attrdata section data) or from C (where they specifiy a
/// C-structure form of the contents of the .attrdata section.
///

#ifdef __ASSEMBLER__

// *INDENT-OFF*

    .macro    ppe_attribute_uint8, symbol:req, tnumber=1, elements=1
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .byte 0
    .endr
    .endm

    .macro    ppe_attribute_int8, symbol:req, tnumber=1, elements=1
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .byte 0
    .endr
    .endm

    .macro    ppe_attribute_uint16, symbol:req, tnumber=1, elements=1
    .balign 2
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .byte 0,0
    .endr
    .endm

    .macro    ppe_attribute_int16, symbol:req, tnumber=1, elements=1
    .balign 2
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .byte 0,0
    .endr
    .endm

    .macro    ppe_attribute_uint32, symbol:req, tnumber=1, elements=1
    .balign 4
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .long 0
    .endr
    .endm

    .macro    ppe_attribute_int32, symbol:req, tnumber=1, elements=1
    .balign 4
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .long 0
    .endr
    .endm

    .macro    ppe_attribute_uint64, symbol:req, tnumber=1, elements=1
    .balign 8
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .quad 0
    .endr
    .endm

    .macro    ppe_attribute_int64, symbol:req, tnumber=1, elements=1
    .balign 8
    .global \symbol
\symbol\():
    .rept    ((\tnumber)*(\elements))
    .quad 0
    .endr
    .endm

    .macro    ppe_attribute_quadia, symbol:req, space:req, address:req
    .global \symbol
\symbol\():
    .quadia (\space), (\address)
    .endm


#define PPE_ATTRIBUTE_UINT8(symbol) \
ppe_attribute_uint8 symbol

#define PPE_ATTRIBUTE_INT8(symbol)  \
ppe_attribute_int8 symbol

#define PPE_ATTRIBUTE_UINT16(symbol) \
ppe_attribute_uint16 symbol

#define PPE_ATTRIBUTE_INT16(symbol)  \
ppe_attribute_int16 symbol

#define PPE_ATTRIBUTE_UINT32(symbol) \
ppe_attribute_uint32 symbol

#define PPE_ATTRIBUTE_INT32(symbol)  \
ppe_attribute_int32 symbol

#define PPE_ATTRIBUTE_UINT64(symbol) \
ppe_attribute_uint64 symbol

#define PPE_ATTRIBUTE_INT64(symbol)  \
ppe_attribute_int64 symbol

#define PPE_ATTRIBUTE_UINT8_VECTOR(symbol, elements) \
ppe_attribute_uint8 symbol, 1, elements

#define PPE_ATTRIBUTE_INT8_VECTOR(symbol, elements) \
ppe_attribute_int8 symbol, 1, elements

#define PPE_ATTRIBUTE_UINT16_VECTOR(symbol, elements) \
ppe_attribute_uint16 symbol, 1, elements

#define PPE_ATTRIBUTE_INT16_VECTOR(symbol, elements) \
ppe_attribute_int16 symbol, 1, elements

#define PPE_ATTRIBUTE_UINT32_VECTOR(symbol, elements) \
ppe_attribute_uint32 symbol, 1, elements

#define PPE_ATTRIBUTE_INT32_VECTOR(symbol, elements) \
ppe_attribute_int32 symbol, 1, elements

#define PPE_ATTRIBUTE_UINT64_VECTOR(symbol, elements) \
ppe_attribute_uint64 symbol, 1, elements

#define PPE_ATTRIBUTE_INT64_VECTOR(symbol, elements) \
ppe_attribute_int64 symbol, 1, elements

#define PPE_ATTRIBUTE_UINT8_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_uint8 symbol, 1, dim1 * dim2

#define PPE_ATTRIBUTE_INT8_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_int8 symbol, 1, dim1 * dim2

#define PPE_ATTRIBUTE_UINT16_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_uint16 symbol,  1, dim1 * dim2

#define PPE_ATTRIBUTE_INT16_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_int16 symbol, 1, dim1 * dim2

#define PPE_ATTRIBUTE_UINT32_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_uint32 symbol, 1, dim1 * dim2

#define PPE_ATTRIBUTE_INT32_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_int32 symbol, 1, dim1 * dim2

#define PPE_ATTRIBUTE_UINT64_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_uint64 symbol, 1, dim1 * dim2

#define PPE_ATTRIBUTE_INT64_VECTOR_2(symbol, dim1, dim2 ) \
ppe_attribute_int64 symbol, 1, dim1 * dim2

#define PPE_ATTRIBUTE_UINT8_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint8 symbol, 1, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_INT8_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint8 symbol, 1, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_UINT16_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint16 symbol, 1, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_INT16_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint16 symbol, 1, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_UINT32_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint32 symbol, 1, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_INT32_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint32 symbol, 1, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_UINT64_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint64 symbol, 1, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_INT64_VECTOR_3(symbol, dim1, dim2, dim3 ) \
ppe_attribute_uint64 symbol, 1, dim1 * dim2 * dim3

// Non-Chip Target Attributes

#define PPE_ATTRIBUTE_TARGET_UINT8(symbol, tnumber) \
ppe_attribute_uint8 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_INT8(symbol, tnumber)  \
ppe_attribute_int8 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_UINT16(symbol, tnumber) \
ppe_attribute_uint16 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_INT16(symbol, tnumber)  \
ppe_attribute_int16 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_UINT32(symbol, tnumber) \
ppe_attribute_uint32 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_INT32(symbol, tnumber)  \
ppe_attribute_int32 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_UINT64(symbol, tnumber) \
ppe_attribute_uint64 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_INT64(symbol, tnumber)  \
ppe_attribute_int64 symbol, tnumber

#define PPE_ATTRIBUTE_TARGET_UINT8_VECTOR(symbol, tnumber, elements) \
ppe_attribute_uint8 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_INT8_VECTOR(symbol, tnumber, elements) \
ppe_attribute_int8 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_UINT16_VECTOR(symbol, tnumber, elements) \
ppe_attribute_uint16 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_INT16_VECTOR(symbol, tnumber, elements) \
ppe_attribute_int16 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_UINT32_VECTOR(symbol, tnumber, elements) \
ppe_attribute_uint32 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_INT32_VECTOR(symbol, tnumber, elements) \
ppe_attribute_int32 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_UINT64_VECTOR(symbol, tnumber, elements) \
ppe_attribute_uint64 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_INT64_VECTOR(symbol, tnumber, elements) \
ppe_attribute_int64 symbol, tnumber, elements

#define PPE_ATTRIBUTE_TARGET_UINT8_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_uint8 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_INT8_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_int8 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_UINT16_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_uint16 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_INT16_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_int16 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_UINT32_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_uint32 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_INT32_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_int32 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_UINT64_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_uint64 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_INT64_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
ppe_attribute_int64 symbol, tnumber, dim1 * dim2

#define PPE_ATTRIBUTE_TARGET_UINT8_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint8 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_TARGET_INT8_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint8 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_TARGET_UINT16_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint16 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_TARGET_INT16_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint16 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_TARGET_UINT32_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint32 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_TARGET_INT32_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint32 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_TARGET_UINT64_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint64 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_TARGET_INT64_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
ppe_attribute_uint64 symbol, tnumber, dim1 * dim2 * dim3

#define PPE_ATTRIBUTE_QUADIA(symbol, space, address) \
ppe_attribute_quadia symbol, (space), (address)

#else  // __ASSEMBLER__  (eg the C portion)

#define PPE_ATTRIBUTE_UINT8(symbol) \
uint8_t symbol

#define PPE_ATTRIBUTE_INT8(symbol) \
int8_t symbol

#define PPE_ATTRIBUTE_UINT16(symbol) \
uint16_t symbol

#define PPE_ATTRIBUTE_INT16(symbol) \
int16_t symbol

#define PPE_ATTRIBUTE_UINT32(symbol) \
uint32_t symbol

#define PPE_ATTRIBUTE_INT32(symbol) \
int32_t symbol

#define PPE_ATTRIBUTE_UINT64(symbol) \
uint64_t symbol

#define PPE_ATTRIBUTE_INT64(symbol) \
int64_t symbol

#define PPE_ATTRIBUTE_UINT8_VECTOR(symbol, elements) \
uint8_t symbol[elements]

#define PPE_ATTRIBUTE_INT8_VECTOR(symbol, elements) \
int8_t symbol[elements]

#define PPE_ATTRIBUTE_UINT16_VECTOR(symbol, elements) \
uint16_t symbol[elements]

#define PPE_ATTRIBUTE_INT16_VECTOR(symbol, elements) \
int16_t symbol[elements]

#define PPE_ATTRIBUTE_UINT32_VECTOR(symbol, elements) \
uint32_t symbol[elements]

#define PPE_ATTRIBUTE_INT32_VECTOR(symbol, elements) \
int32_t symbol[elements]

#define PPE_ATTRIBUTE_UINT64_VECTOR(symbol, elements) \
uint64_t symbol[elements]

#define PPE_ATTRIBUTE_INT64_VECTOR(symbol, elements) \
int64_t symbol[elements]

#define PPE_ATTRIBUTE_UINT8_VECTOR_2(symbol, dim1, dim2 ) \
uint8_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_INT8_VECTOR_2(symbol, dim1, dim2 ) \
int8_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_UINT16_VECTOR_2(symbol, dim1, dim2 ) \
uint16_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_INT16_VECTOR_2(symbol, dim1, dim2 ) \
int16_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_UINT32_VECTOR_2(symbol, dim1, dim2 ) \
uint32_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_INT32_VECTOR_2(symbol, dim1, dim2 ) \
int32_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_UINT64_VECTOR_2(symbol, dim1, dim2 ) \
uint64_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_INT64_VECTOR_2(symbol, dim1, dim2 ) \
int64_t symbol[dim1][dim2]

#define PPE_ATTRIBUTE_UINT8_VECTOR_3(symbol, dim1, dim2, dim3 ) \
uint8_t symbol[dim1][dim2][dim3]

#define PPE_ATTRIBUTE_INT8_VECTOR_3(symbol, dim1, dim2, dim3 ) \
int8_t symbol[dim1][dim2][dim3]

#define PPE_ATTRIBUTE_UINT16_VECTOR_3(symbol, dim1, dim2, dim3 ) \
uint16_t symbol[dim1][dim2][dim3]

#define PPE_ATTRIBUTE_INT16_VECTOR_3(symbol, dim1, dim2, dim3 ) \
int16_t symbol[dim1][dim2][dim3]

#define PPE_ATTRIBUTE_UINT32_VECTOR_3(symbol, dim1, dim2, dim3 ) \
uint32_t symbol[dim1][dim2][dim3]

#define PPE_ATTRIBUTE_INT32_VECTOR_3(symbol, dim1, dim2, dim3 ) \
int32_t symbol[dim1][dim2][dim3]

#define PPE_ATTRIBUTE_UINT64_VECTOR_3(symbol, dim1, dim2, dim3 ) \
uint64_t symbol[dim1][dim2][dim3]

#define PPE_ATTRIBUTE_INT64_VECTOR_3(symbol, dim1, dim2, dim3 ) \
int64_t symbol[dim1][dim2][dim3]

// Non-Chip Target Attributes

#define PPE_ATTRIBUTE_TARGET_UINT8(symbol, tnumber) \
uint8_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_INT8(symbol, tnumber) \
int8_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_UINT16(symbol, tnumber) \
uint16_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_INT16(symbol, tnumber) \
int16_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_UINT32(symbol, tnumber) \
uint32_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_INT32(symbol, tnumber) \
int32_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_UINT64(symbol, tnumber) \
uint64_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_INT64(symbol, tnumber) \
int64_t symbol[tnumber]

#define PPE_ATTRIBUTE_TARGET_UINT8_VECTOR(symbol, tnumber, elements) \
uint8_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_INT8_VECTOR(symbol, tnumber, elements) \
int8_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_UINT16_VECTOR(symbol, tnumber, elements) \
uint16_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_INT16_VECTOR(symbol, tnumber, elements) \
int16_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_UINT32_VECTOR(symbol, tnumber, elements) \
uint32_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_INT32_VECTOR(symbol, tnumber, elements) \
int32_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_UINT64_VECTOR(symbol, tnumber, elements) \
uint64_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_INT64_VECTOR(symbol, tnumber, elements) \
int64_t symbol[tnumber][elements]

#define PPE_ATTRIBUTE_TARGET_UINT8_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
uint8_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_INT8_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
int8_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_UINT16_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
uint16_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_INT16_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
int16_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_UINT32_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
uint32_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_INT32_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
int32_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_UINT64_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
uint64_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_INT64_VECTOR_2(symbol, tnumber, dim1, dim2 ) \
int64_t symbol[tnumber][dim1][dim2]

#define PPE_ATTRIBUTE_TARGET_UINT8_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
uint8_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_TARGET_INT8_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
int8_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_TARGET_UINT16_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
uint16_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_TARGET_INT16_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
int16_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_TARGET_UINT32_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
uint32_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_TARGET_INT32_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
int32_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_TARGET_UINT64_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
uint64_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_TARGET_INT64_VECTOR_3(symbol, tnumber, dim1, dim2, dim3 ) \
int64_t symbol[tnumber][dim1][dim2][dim3]

#define PPE_ATTRIBUTE_QUADIA(symbol, space, address) uint64_t symbol

// *INDENT-ON*

#endif // __ASSEMBLER__

#endif  // __PPE_ATTRIBUTE_MACRO_H
