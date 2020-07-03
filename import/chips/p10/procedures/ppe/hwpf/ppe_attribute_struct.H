/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/ppe_attribute_struct.H $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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

/// \file ppe_attribute.H
/// \brief Define the layout of attrdata-position data in the P9 SBE reference
/// and IPL images
///
/// Contains struct ProcSbeFixed which contains functions, rings and
/// attributes whose pointers are stored in the attrdata and attrdata_toc section
///
/// This file defines the layout of the special .attrdata data section of P9 SBE
/// reference and IPL images.  The .attrdata section is guaranteed to appear at a
/// attrdata offset from the beginning of the image, containing data required to
/// be manipulated when images are resident in non-volatile memories, thereby
/// avoiding having to search the TOC. Data manipulated during in-memory image
/// processing can always be easily located using the SBE-XIP TOC APIs.  All
/// of the data stored in .attrdata can also still be referenced via the SBE-XIP
/// TOC.
///
/// This header file can be #include-ed into either C or SBE assembly language
/// source code.  In C, it creates simple structures 'ProcChipAttributes',
/// 'PervAttributes', 'CoreAttributes', 'EQAttributes' and 'EXAttributes' that
/// contain attribute information that are sized per XML definition per entry.
///
/// PPE image data is always stored big-endian, so applications on little-endian
/// hosts will need to perform the appropriate endian converison when reading or
/// writing images via this header.
///
/// In assembler code, this header creates macros '.ppe_attribute_proc_chip',
/// '.ppe_attribute_perv', '.ppe_attribute_core', '.ppe_attribute_ex',
/// '.ppe_attribute_eq', that is expanded exactly once in the file
/// 'sbe_base_header.S', creating the actual data allocation of the data
/// equivalent to the C structure.  Assembler code references the data symbols
/// as normal.
///
/// To simplify programming a 'mini-TOC' is also provided for this data in
/// the .attrdata_toc section.  This section is comprised of SbeXipHashedToc
/// structures. When a symbol is indedxed in .attrdata, a blank SbeXipHashedToc
/// stucture is added to .attrdata_toc.  During image normalization the array of
/// SbeXipHashedToc is filled in as each symbol in .attrdata is re-indexed into
/// .attrdata_toc.

#ifndef __PPE_ATTRIBUTE_STRUCT_H__
#define __PPE_ATTRIBUTE_STRUCT_H__

#include "ppe_attribute_macro.H"
#include "ppe_attribute_const.H"

#ifdef __ASSEMBLER__
.macro     .ppe_attribute_system
.section   .attrdata, "a", @progbits
.balign    8
.global    G_system_attributes
G_system_attributes:
#else

extern "C" {
    namespace fapi2attr
    {
    typedef struct SystemAttributes_t
    {
#endif

#include "ppe_attribute_system.H"
PPE_ATTRIBUTE_UINT8_VECTOR(ATTR_QME_DUMMY_BUFFER_SYSTEM, 32);

#ifdef __ASSEMBLER__
.endm
#else
} SystemAttributes;
} // fapi2
} // C
#endif

#ifdef __ASSEMBLER__
.macro     .ppe_attribute_proc_chip
.section   .attrdata, "a", @progbits
.balign    8
.global    G_proc_chip_attributes
G_proc_chip_attributes:
#else

extern "C" {
    namespace fapi2attr
    {
    typedef struct ProcChipAttributes_t
    {
#endif

#include "ppe_attribute_proc_chip.H"
PPE_ATTRIBUTE_UINT8_VECTOR(ATTR_QME_DUMMY_BUFFER_PROC_CHIP, 32);

#ifdef __ASSEMBLER__
.endm
#else
} ProcChipAttributes;
} // fapi2
} // C
#endif

///
/// Pervasive Target Attributes
#ifdef __ASSEMBLER__
.macro     .ppe_attribute_perv
.section   .attrdata, "a", @progbits
.balign    8
.global    G_perv_attributes
G_perv_attributes:
#else
namespace fapi2attr
{
typedef struct PervAttributes_t
{
#endif

#include "ppe_attribute_perv.H"
PPE_ATTRIBUTE_UINT8_VECTOR(ATTR_QME_DUMMY_BUFFER_PERV, 32);

#ifdef __ASSEMBLER__
.endm
#else
} PervAttributes;
} // fapi2
#endif

///
/// Core (EC) Target Attributes
#ifdef __ASSEMBLER__
.macro     .ppe_attribute_core
.section   .attrdata, "a", @progbits
.balign    8
.global     G_core_attributes
G_core_attributes:
#else
namespace fapi2attr
{
typedef struct CoreAttributes_t
{
#endif

#include "ppe_attribute_core.H"
PPE_ATTRIBUTE_UINT8_VECTOR(ATTR_QME_DUMMY_BUFFER_CORE, 32);

#ifdef __ASSEMBLER__
.endm
#else
} CoreAttributes;
} // fapi2
#endif

///
/// EX Target Attributes
#ifdef __ASSEMBLER__
.macro     .ppe_attribute_ex
.section   .attrdata, "a", @progbits
.balign    8
.global    G_ex_attributes
G_ex_attributes:
#else
namespace fapi2attr
{
typedef struct EXAttributes_t
{
#endif

#include "ppe_attribute_ex.H"
PPE_ATTRIBUTE_UINT8_VECTOR(ATTR_QME_DUMMY_BUFFER_EX, 32);

#ifdef __ASSEMBLER__
.endm
#else
} EXAttributes;
} // fapi2
#endif

///
/// EQ Target Attributes
#ifdef __ASSEMBLER__
.macro     .ppe_attribute_eq
.section   .attrdata, "a", @progbits
.balign    8
.global    G_eq_attributes
G_eq_attributes:
#else
namespace fapi2attr
{
typedef struct EQAttributes_t
{
#endif

#include "ppe_attribute_eq.H"
PPE_ATTRIBUTE_UINT8_VECTOR(ATTR_QME_DUMMY_BUFFER_EQ, 32);

#ifdef __ASSEMBLER__
.endm
#else
} EQAttributes;
} // fapi2
#endif


#endif  // __PPE_ATTRIBUTE_STRUCT_H__
