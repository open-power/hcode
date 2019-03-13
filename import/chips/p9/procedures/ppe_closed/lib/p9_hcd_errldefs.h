/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/lib/p9_hcd_errldefs.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
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

#ifndef _P9_HCD_ERRLDEFS_H
#define _P9_HCD_ERRLDEFS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Size of traces to add to ERRL_USR_DTL_TRACE_DATA
#define ERRL_TRACE_DATA_SZ_PGPE 0x200
#define ERRL_TRACE_DATA_SZ_XGPE 0x100

// Max number of errorlog slots per GPE
// Supporting only 1 (unrecoverable) error per GPE due to memory restrictions
#define ERRL_MAX_SLOTS_PER_GPE 1

// Used for shifting slot bits
static const uint32_t ERRL_SLOT_SHIFT = 0x80000000;

// These bits are used to acquire a slot number.  When used with the global
// slot bit mask, we are able to get 1 slot for unrecoverable errors,
// 1 slot for informational logs and so on. This can be trivially extended to
// multiple slots of the same type of error as well.
// @note  The algorithm to get an error slot assumes the all errors per GPE
//        are ordered sequentially without mixing with errors from other GPEs
// @note  Per current requirement & memory constraints there will only be 1
//        unrecoverable error log per GPE. There could be unused bits until
//        we use informational error logs, etc.
/* Slot Masks */
typedef enum
{
    ERRL_SLOT_MASK_DEFAULT        = 0xFFFFFFFF,
    ERRL_SLOT_MASK_PGPE_UNREC     = 0x7FFFFFFF,
    ERRL_SLOT_MASK_XGPE_UNREC     = 0xBFFFFFFF,
} ERRL_SLOT_MASK;

// Index into array of error log entries in hcode_error_table_t
// @note This enum should be in sync with the masks defined by ERRL_SLOT_MASK
// @note OCC processes entries in hcode_error_table_t from 0 to
//       MAX_HCODE_ELOG_ENTRIES & is agnostic of how hcode orders them
enum elog_entry_index
{
    ERRL_SLOT_PGPE_BASE     = 0x00,
    ERRL_SLOT_PGPE_UNREC    = 0x00,
    ERRL_SLOT_XGPE_BASE     = 0x01,
    ERRL_SLOT_XGPE_UNREC    = 0x01,
    ERRL_SLOT_INVALID       = 0xFF, // default invalid
};

// Structure to house-keep specific error log related metadata until it is
// commited out to the OCC Shared Data Error Index Table
typedef struct
{
    uint32_t slotBits; // Bits 0:1 flags for slots taken by errors
    uint32_t slotMask; // Slot mask of the current error being processed
    uint8_t  errId;    // Error log id of this error, rolling counter
    uint8_t  errSlot;  // Slot number of this error in OCC Shared SRAM
} hcodeErrlMetadata_t;

// Structure to configure GPE specific metadata for error logging that is
// common for all errors logged from that GPE
typedef struct
{
    uint32_t procVersion;// PPE Processor Version, from PVR
    uint16_t ppeId;      // PPE Instance Id, from PIR
    uint16_t traceSz;    // Size of ERRL_USR_DTL_TRACE_DATA to add
    uint8_t  source;     // Engine creating logs. See ERRL_SOURCE
} hcodeErrlConfigData_t;

// Initializes attributes of the common error logging framework based on the GPE
// instance trying to use it.
// @note APIs in p9_hcd_errl.h should not be used before initializing the
//       error logging framework once
void initErrLogging (const uint8_t i_errlSource);

#ifdef __cplusplus
}
#endif

#endif // _P9_HCD_ERRLDEFS_H
