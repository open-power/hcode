/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errldefs.h $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
#include "hcode_occ_errldefs.h"

#ifdef __cplusplus
extern "C" {
#endif

// Size of traces to add to ERRL_USR_DTL_TRACE_DATA
#define ERRL_TRACE_DATA_SZ_PGPE 0x200
#define ERRL_TRACE_DATA_SZ_XGPE 0x200
#define ERRL_TRACE_DATA_SZ_QME  0x200

// Max number of errorlog slots per GPE
// Support only 1 unrecoverable & 1 informational elog per GPE
#define ERRL_MAX_SLOTS_PER_GPE 2

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
    ERRL_SLOT_MASK_QME0_INFO      = 0xBFFFFFFF,
    ERRL_SLOT_MASK_QME1_UNREC     = 0xDFFFFFFF,
    ERRL_SLOT_MASK_QME1_INFO      = 0xEFFFFFFF,
    ERRL_SLOT_MASK_QME2_UNREC     = 0xF7FFFFFF,
    ERRL_SLOT_MASK_QME2_INFO      = 0xFBFFFFFF,
    ERRL_SLOT_MASK_QME3_UNREC     = 0xFDFFFFFF,
    ERRL_SLOT_MASK_QME3_INFO      = 0xFEFFFFFF,
    ERRL_SLOT_MASK_QME4_UNREC     = 0xFF7FFFFF,
    ERRL_SLOT_MASK_QME4_INFO      = 0xFFBFFFFF,
    ERRL_SLOT_MASK_QME5_UNREC     = 0xFFDFFFFF,
    ERRL_SLOT_MASK_QME5_INFO      = 0xFFEFFFFF,
    ERRL_SLOT_MASK_QME6_UNREC     = 0xFFF7FFFF,
    ERRL_SLOT_MASK_QME6_INFO      = 0xFFFBFFFF,
    ERRL_SLOT_MASK_QME7_UNREC     = 0xFFFDFFFF,
    ERRL_SLOT_MASK_QME7_INFO      = 0xFFFEFFFF,
    ERRL_SLOT_MASK_PGPE_UNREC     = 0xFFFF7FFF,
    ERRL_SLOT_MASK_PGPE_INFO      = 0xFFFFBFFF,
    ERRL_SLOT_MASK_XGPE_UNREC     = 0xFFFFDFFF,
    ERRL_SLOT_MASK_XGPE_INFO      = 0xFFFFEFFF,
    // Max. available slots for 12 more logs
} ERRL_SLOT_MASK;

// Index into array of error log entries in hcode_error_table_t
// @note This enum should be in sync with the masks defined by ERRL_SLOT_MASK
// @note OCC processes entries in hcode_error_table_t from 0 to
//       MAX_HCODE_ELOG_ENTRIES & is agnostic of how hcode orders them
enum elog_entry_index
{
    ERRL_SLOT_TBL_BASE      = 0x00,
    ERRL_SLOT_QME_UNREC_BASE = ERRL_SLOT_TBL_BASE,
    ERRL_SLOT_QME0_UNREC    = 0x00, // 0
    ERRL_SLOT_QME_INFO_BASE = 0x01,
    ERRL_SLOT_QME0_INF      = 0x01, // 1
    ERRL_SLOT_QME1_UNREC    = 0x02,
    ERRL_SLOT_QME1_INF      = 0x03,
    ERRL_SLOT_QME2_UNREC    = 0x04,
    ERRL_SLOT_QME2_INF      = 0x05,
    ERRL_SLOT_QME3_UNREC    = 0x06,
    ERRL_SLOT_QME3_INF      = 0x07,
    ERRL_SLOT_QME4_UNREC    = 0x08,
    ERRL_SLOT_QME4_INF      = 0x09,
    ERRL_SLOT_QME5_UNREC    = 0x0A,
    ERRL_SLOT_QME5_INF      = 0x0B,
    ERRL_SLOT_QME6_UNREC    = 0x0C,
    ERRL_SLOT_QME6_INF      = 0x0D,
    ERRL_SLOT_QME7_UNREC    = 0x0E, // 14
    ERRL_SLOT_QME7_INF      = 0x0F, // 15
    ERRL_SLOT_PGPE_BASE     = 0x10,
    ERRL_SLOT_PGPE_UNREC    = 0x10, // 16
    ERRL_SLOT_PGPE_INF      = 0x11, // 17
    ERRL_SLOT_XGPE_BASE     = 0x12,
    ERRL_SLOT_XGPE_UNREC    = 0x12, // 18
    ERRL_SLOT_XGPE_INF      = 0x13, // 19
    ERRL_SLOT_INVALID       = 0xFF, // default invalid
};

// Structure to house-keep specific error log related metadata until it is
// commited out to the OCC Shared Data Error Index Table
typedef struct
{
    uint32_t slotBits; // Bits 0:1 flags for slots taken by errors
    uint32_t slotMask; // Slot mask of the current error being processed
    uint8_t  errId;    // Error log id of this error, rolling counter
    uint8_t  errSlot;  // Slot number of this error in PPE's Error Log Idx Tbl
} hcodeErrlMetadata_t;

// Structure to configure GPE specific metadata for error logging that is
// common for all errors logged from that GPE
typedef struct
{
    uint32_t tblBaseSlot; // Base slot of the Error Log Index Table
    uint32_t gpeBaseSlot; // Base slot inside Error Log Index Table for this GPE
    uint32_t procVersion; // PPE Processor Version, from PVR
    uint16_t ppeId;       // PPE Instance Id, from PIR
    uint16_t traceSz;     // Size of ERRL_USR_DTL_TRACE_DATA to add
    uint8_t  source;      // Engine creating logs. See ERRL_SOURCE
} hcodeErrlConfigData_t;

// Initializes attributes of the common error logging framework based on the GPE
// instance trying to use it. Required once per GPE init/boot before the APIs in
// errl.h are used.
// @note APIs in errl.h execute as no-ops if the framework is not initialized
void initErrLogging (const uint8_t        i_errlSource,
                     hcode_error_table_t* i_pErrTable );

#ifdef __cplusplus
}
#endif

#endif // ERRLDEFS_H
