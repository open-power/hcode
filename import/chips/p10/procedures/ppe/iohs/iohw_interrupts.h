/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/iohw_interrupts.h $      */
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
#ifndef __IOHW_INTERRUPTS_H__
#define __IOHW_INTERRUPTS_H__
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file iohw_interrupts.h
/// \brief Interrupt assignments and macros for the IOPPE

// -----------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// mbs19021900 |mbs     | Restored default IRQ names and set interrupts to rising edge masked
// ------------|--------|-------------------------------------------------------



////////////////////////////////////////////////////////////////////////////
// IRQ Definition
////////////////////////////////////////////////////////////////////////////
// The IO interrupt controller consists of 1 x 64-bit controller.
// All 64 interrupts are or'd together and presented to the PPE as a single
// external interrupt exception.

#define IOHW_IRQ_RESERVED_00                     0 /* 0x00 */
#define IOHW_IRQ_RESERVED_01                     1 /* 0x01 */
#define IOHW_IRQ_RESERVED_02                     2 /* 0x02 */
#define IOHW_IRQ_RESERVED_03                     3 /* 0x03 */
#define IOHW_IRQ_RESERVED_04                     4 /* 0x04 */
#define IOHW_IRQ_RESERVED_05                     5 /* 0x05 */
#define IOHW_IRQ_RESERVED_06                     6 /* 0x06 */
#define IOHW_IRQ_RESERVED_07                     7 /* 0x07 */
#define IOHW_IRQ_RESERVED_08                     8 /* 0x08 */
#define IOHW_IRQ_RESERVED_09                     9 /* 0x09 */
#define IOHW_IRQ_RESERVED_10                     10 /* 0x0a */
#define IOHW_IRQ_RESERVED_11                     11 /* 0x0b */
#define IOHW_IRQ_RESERVED_12                     12 /* 0x0c */
#define IOHW_IRQ_RESERVED_13                     13 /* 0x0d */
#define IOHW_IRQ_RESERVED_14                     14 /* 0x0e */
#define IOHW_IRQ_RESERVED_15                     15 /* 0x0f */
#define IOHW_IRQ_RESERVED_16                     16 /* 0x10 */
#define IOHW_IRQ_RESERVED_17                     17 /* 0x11 */
#define IOHW_IRQ_RESERVED_18                     18 /* 0x12 */
#define IOHW_IRQ_RESERVED_19                     19 /* 0x13 */
#define IOHW_IRQ_RESERVED_20                     20 /* 0x14 */
#define IOHW_IRQ_RESERVED_21                     21 /* 0x15 */
#define IOHW_IRQ_RESERVED_22                     22 /* 0x16 */
#define IOHW_IRQ_RESERVED_23                     23 /* 0x17 */
#define IOHW_IRQ_RESERVED_24                     24 /* 0x18 */
#define IOHW_IRQ_RESERVED_25                     25 /* 0x19 */
#define IOHW_IRQ_RESERVED_26                     26 /* 0x1a */
#define IOHW_IRQ_RESERVED_27                     27 /* 0x1b */
#define IOHW_IRQ_RESERVED_28                     28 /* 0x1c */
#define IOHW_IRQ_RESERVED_29                     29 /* 0x1d */
#define IOHW_IRQ_RESERVED_30                     30 /* 0x1e */
#define IOHW_IRQ_RESERVED_31                     31 /* 0x1f */

////////////////////////////////////////////////////////////////////////////
// IRQ Configuration
// Static configuration data for external interrupts
////////////////////////////////////////////////////////////////////////////


// IRQ#, TYPE (EDGE, LEVEL), POLARITY, ENABLE (MASKED, ENABLED)
#define APPCFG_EXT_IRQS_CONFIG \
    IOHW_IRQ_RESERVED_00           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_01           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_02           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_03           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_04           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_05           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_06           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_07           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_08           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_09           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_10           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_11           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_12           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_13           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_14           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_15           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_16           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_17           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_18           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_19           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_20           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_21           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_22           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_23           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_24           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_25           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_26           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_27           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_28           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_29           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_30           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    IOHW_IRQ_RESERVED_31           STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    32                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    33                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    34                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    35                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    36                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    37                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    38                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    39                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    40                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    41                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    42                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    43                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    44                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    45                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    46                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    47                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    48                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    49                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    50                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    51                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    52                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    53                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    54                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    55                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    56                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    57                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    58                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    59                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    60                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    61                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    62                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED \
    63                             STD_IRQ_TYPE_EDGE    STD_IRQ_POLARITY_RISING    STD_IRQ_MASKED



#define APPCFG_IRQ_INVALID_MASK 0
#endif  /* __IOHW_INTERRUPTS_H__ */
