/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errldefs.h $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020,2023                                                    */
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
#ifndef ERRLDEFS_H
#define ERRLDEFS_H

#include <stdint.h>
#include "hcode_errl_table.h"
#include "occ_hcode_errldefs.h"

#ifdef __cplusplus
extern "C" {
#endif

// Size of traces to add to ERRL_USR_DTL_TRACE_DATA
#define ERRL_TRACE_DATA_SZ_PGPE 0x438
#define ERRL_TRACE_DATA_SZ_XGPE 0x438
#define ERRL_TRACE_DATA_SZ_QME  0x238

// Defines used to programmatically arrive at QME instance slot mask
#define ERRL_SLOT_MASK_QME_UNREC_BASE 0x80000000
#define ERRL_SLOT_MASK_QME_INFO_BASE  0x40000000

// Used for shifting slot bits
static const uint32_t ERRL_SLOT_SHIFT = 0x80000000;

// These bits are used to acquire a slot number.  When used with the global
// slot bit mask, we are able to get 1 slot for unrecoverable errors,
// 1 slot for informational logs and so on. This can be trivially extended to
// multiple slots of the same severity of error as well.
// @note  The algorithm to get an error slot assumes the all errors per GPE
//        are ordered sequentially without mixing with errors from other GPEs
// @note  Per current requirement & memory constraints there will only be 1
//        unrecoverable & 1 informational error log per GPE.
//        Total memory for error logs = 20*512 = 10kB in OCC SRAM,
//        of which, 1kB would be copied down from per QME SRAM to OCC SRAM
/* Slot Masks */
typedef enum
{
    ERRL_SLOT_MASK_DEFAULT        = 0xFFFFFFFF,
    ERRL_SLOT_MASK_QME0_UNREC     = 0x7FFFFFFF,
    ERRL_SLOT_MASK_QME1_UNREC     = 0xBFFFFFFF,
    ERRL_SLOT_MASK_QME2_UNREC     = 0xDFFFFFFF,
    ERRL_SLOT_MASK_QME3_UNREC     = 0xEFFFFFFF,
    ERRL_SLOT_MASK_QME4_UNREC     = 0xF7FFFFFF,
    ERRL_SLOT_MASK_QME5_UNREC     = 0xFBFFFFFF,
    ERRL_SLOT_MASK_QME6_UNREC     = 0xFDFFFFFF,
    ERRL_SLOT_MASK_QME7_UNREC     = 0xFEFFFFFF,
    ERRL_SLOT_MASK_PGPE_UNREC     = 0xFF7FFFFF,
    ERRL_SLOT_MASK_XGPE_UNREC     = 0xFFBFFFFF,
} ERRL_SLOT_MASK;

// Index into array of error log entries in hcode_error_table_t
// @note This enum should be in sync with the masks defined by ERRL_SLOT_MASK
// @note OCC processes entries in hcode_error_table_t from 0 to
//       MAX_HCODE_ELOG_ENTRIES & is agnostic of how hcode orders them
enum elog_entry_index
{
    ERRL_SLOT_TBL_BASE      = 0x00,
    ERRL_SLOT_QMES_BASE     = 0x00,
    ERRL_SLOT_QME_UNREC_BASE = ERRL_SLOT_TBL_BASE,
    ERRL_SLOT_QME0_UNREC    = 0x00, // 0
    ERRL_SLOT_QME1_UNREC    = 0x01,
    ERRL_SLOT_QME2_UNREC    = 0x02,
    ERRL_SLOT_QME3_UNREC    = 0x03,
    ERRL_SLOT_QME4_UNREC    = 0x04,
    ERRL_SLOT_QME5_UNREC    = 0x05,
    ERRL_SLOT_QME6_UNREC    = 0x06,
    ERRL_SLOT_QME7_UNREC    = 0x07, // 7
    ERRL_SLOT_QMES_MAX      = 0x07,
    ERRL_SLOT_PGPE_BASE     = 0x08,
    ERRL_SLOT_PGPE_UNREC    = 0x08, // 8
    ERRL_SLOT_XGPE_BASE     = 0x09,
    ERRL_SLOT_XGPE_UNREC    = 0x09, // 9
    ERRL_SLOT_INVALID       = 0xFF, // default invalid
};

// Structure to house-keep specific error log related metadata until it is
// commited out to the OCC Shared Data Error Index Table
typedef struct
{
    uint32_t slotMask; // Slot mask of this specific error being processed
    uint8_t  errId;    // Error log id of this specific error bring processed
} hcodeErrlMetadata_t;

// Structure to configure GPE specific metadata for error logging that is
// common for all errors logged from that GPE
typedef struct
{
    uint32_t tblBaseSlot; // Base slot of the Error Log Index Table
    uint32_t gpeBaseSlot; // Base slot inside Error Log Index Table for this GPE
    uint32_t slotBits;    // Slot bits taken by logs being processed on this GPE
    uint32_t procVersion; // PPE Processor Version, from PVR
    uint16_t ppeId;       // PPE Instance Id, from PIR
    uint16_t traceSz;     // Size of ERRL_USR_DTL_TRACE_DATA to add
    uint8_t  source;      // Engine creating logs. See ERRL_SOURCE
    uint8_t  errId;       // Last error log id used by this GPE, rolling counter
} hcodeErrlConfigData_t;

#ifdef __cplusplus
}
#endif

#endif // ERRLDEFS_H
