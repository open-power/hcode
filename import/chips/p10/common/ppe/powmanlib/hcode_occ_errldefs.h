/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/powmanlib/hcode_occ_errldefs.h $  */
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
#ifndef OCC_HCODE_ERRLDEFS_H
#define OCC_HCODE_ERRLDEFS_H

#include <stdint.h>

#ifdef __cplusplus
#ifdef __PPE__
extern "C" {
#else
namespace hcode
{
#endif
#endif

// -----------------------------------------------------------------------------
// Start Error Log Table
// -----------------------------------------------------------------------------

/// Maximum number of error log entries in error log table
/// 1 UE + 1 Info = 2 Logs per PPE
#ifdef __PPE_QME
    // QME local table in QME SRAM .. logs downloaded by XGPE
    #define MAX_ELOG_ENTRIES 2
#else
    // OCC global table in OCC SRAM .. (8 QMEs + 1 PGPE + 1 XPGE)*2
    #define MAX_ELOG_ENTRIES 20
#endif

#define HCODE_ELOG_ENTRIES_OCC_SRAM 20           // Total aggregated error slots
#define HCODE_ELOG_TABLE_MAGIC_WORD 0x454C5443   // "ELTC"

/// Structure of an individual error log entry
typedef struct
{
    union
    {
        uint64_t value;
        struct
        {
            uint32_t high_order;
            uint32_t low_order;
        } words;
        struct
        {
            uint64_t errlog_id                  : 8;
            uint64_t errlog_src                 : 8;
            uint64_t errlog_len                 : 16;
            uint64_t errlog_addr                : 32;
        } fields;
    } dw0;
} hcode_elog_entry_t;

/// Full Error Log Table
typedef struct hcode_error_table
{
    union
    {
        uint64_t value;
        struct
        {
            uint32_t high_order;
            uint32_t low_order;
        } words;
        struct
        {
            uint64_t magic_word                 : 32; //ELTC
            uint64_t total_log_slots            : 8;
            uint64_t reserved                   : 24;
        } fields;
    } dw0;

    /// Array of error log entries
    hcode_elog_entry_t  elog[MAX_ELOG_ENTRIES];
} hcode_error_table_t;

// -----------------------------------------------------------------------------
// End Error Log Table
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// HCode Error Log Definitions
// -----------------------------------------------------------------------------
//
// @note
// - HCode error logs will be read and processed as a contiguous blob of data
//   by Service Processor or Host Firmware components
// - (H)TMGT as well as parsers will depend on the order as well as size of
//   members in the Error Log Entry for processing and parsing the error log
//   correctly
// - As a part of the framework, the Error Log Structure is reused and adapted
//   from the TMGT-OCC-Interface specification, all reserved fields should be
//   left unused (zeroed) in the Error Log Entries, to avoid mis-interpretation
//   and unintended actions in firmware (e.g. Resets, Safe Mode)
// - Refer TMGT_OCC_INTERFACE_v1_x_y

// Max size of error log (1024 bytes)
#define ERRL_MAX_ENTRY_SZ 0x400

// Max number of callouts
#define ERRL_MAX_CALLOUTS 6 // @TODO improve hard restrictions

// Min size (bytes) of user data that can be added, excluding the header
#define ERRL_USR_DATA_SZ_MIN 128

// These are the possible sources that an error log can be coming from
// See occErrorSource in (H)TMGT
typedef enum
{
    ERRL_SOURCE_405     = 0x00,
    ERRL_SOURCE_PGPE    = 0x10,
    ERRL_SOURCE_XGPE    = 0x20, // SGPE in P9
    ERRL_SOURCE_QME     = 0x40, // @TODO .. add in tmgt_occ.H
    ERRL_SOURCE_INVALID = 0xFF,
} ERRL_SOURCE;

// These are the possible severities that an error log can have.
// Users must ONLY use these enum values for severity.
// Predictive & Unrecoverable severities are customer visible & will
// solicit appropriate callouts and documentation
/* Error Severity */
typedef enum
{
    ERRL_SEV_INFORMATIONAL  = 0x00, // unused
    ERRL_SEV_PREDICTIVE     = 0x01, // unused
    ERRL_SEV_UNRECOVERABLE  = 0x02,
    ERRL_SEV_CALLHOME_DATA  = 0x03, // unused
} ERRL_SEVERITY;

// These are the possible callout priorities that a callout can have.
// Users must ONLY use these enum values for callout priority
/* Callout Priority */
typedef enum
{
    ERRL_CALLOUT_PRIORITY_INVALID   = 0x00,
    ERRL_CALLOUT_PRIORITY_LOW       = 0x01,
    ERRL_CALLOUT_PRIORITY_MED       = 0x02,
    ERRL_CALLOUT_PRIORITY_HIGH      = 0x03,
} ERRL_CALLOUT_PRIORITY;

// These are the user detail types that a user details can have.
// Users must ONLY use these enum values for user detail type.
// User Detail is expected to be pass-through to the parser.
/* User Detail Type */
typedef enum
{
    ERRL_USR_DTL_TRACE_DATA     = 0x01,
    ERRL_USR_DTL_DASH_PGPE      = 0x02, // @TODO via RTC: 211559
    ERRL_USR_DTL_DASH_XGPE      = 0x03, // @TODO via RTC: 211560
    ERRL_USR_DTL_BINARY_DATA    = 0x04,
} ERRL_USR_DETAIL_TYPE;

/* Errl Structure Version */
typedef enum
{
    ERRL_STRUCT_VERSION_1       = 0x01,
} ERRL_STRUCT_VERSION;

/* Errl User Details Version */
typedef enum
{
    ERRL_USR_DTL_STRUCT_VERSION_1       = 0x01,
} ERRL_USR_DTL_STRUCT_VERSION;

/* Errl Trace Version */
typedef enum
{
    ERRL_TRACE_VERSION_1       = 0x01,
} ERRL_TRACE_VERSION;

// @TODO via RTC 211557 >> start
// Hcode related callouts will need some firmware post-processing
// Callout types will be adapted/extended for Hcode after consulting with FW
// @note As a placeholder TMGT adds a processor callout if
//       sev!=info && source!=405 && numCallouts==0
/* Type of Callout */
typedef enum
{
    ERRL_CALLOUT_TYPE_HUID          = 0x01, // unused
    ERRL_CALLOUT_TYPE_COMPONENT_ID  = 0x02,
    ERRL_CALLOUT_TYPE_GPU_ID        = 0x03, // unused
} ERRL_CALLOUT_TYPE;

/* TMGT-OCC Component Ids */
typedef enum
{
    ERRL_COMPONENT_ID_FIRMWARE         = 0x01,
    ERRL_COMPONENT_ID_OVER_TEMPERATURE = 0x04, // unused
    ERRL_COMPONENT_ID_OVERSUBSCRIPTION = 0x05, // unused
    ERRL_COMPONENT_ID_NONE             = 0xFF,
} ERRL_COMPONENT_ID;
// @TODO via RTC 211557 << end

/* Callout Structure */
struct ErrlCallout
{
    uint64_t iv_calloutValue; // Callout Value
    uint8_t  iv_type;         // Type of callout (See ERRL_CALLOUT_TYPE)
    uint8_t  iv_priority;     // Callout Priority (See ERRL_CALLOUT_PRIORITY)
    uint8_t  iv_reserved3[6]; // PPE alignment restriction
} __attribute__ ((__packed__));

typedef struct ErrlCallout ErrlCallout_t;

// @note The User Detail Structure consists of the fields below followed
//       by each individual User Details Entry structure & data
//       A data pointer field is NOT defined but rather inferred here.  In the
//       error log contents, the user will see all the subsequent fields
//       followed by each User Details Entry structure and its data
/* User Detail Structure */
struct ErrlUserDetails
{
    uint8_t     iv_version;             // User Details Version
    uint8_t     iv_reserved4;           // Reserved, per definition
    uint16_t    iv_modId;               // Module Id
    uint32_t    iv_procVersion;         // PPE Processor Version Register (PVR)
    uint64_t    iv_timeStamp;           // Time Stamp
    uint16_t    iv_ppeId;               // PPE Instance in Chip
    uint8_t     iv_reserved5;           // @reuse - OCC State
    uint8_t     iv_committed: 1;        // Log Committed?
    uint8_t     iv_reserved6: 7;
    uint32_t    iv_userData1;           // User Data Word 1
    uint32_t    iv_userData2;           // User Data Word 2
    uint32_t    iv_userData3;           // User Data Word 3
    uint16_t    iv_entrySize;           // Log Size
    uint16_t    iv_userDetailEntrySize; // User Details Size
    uint32_t    iv_reserved7;           // PPE alignment restriction
} __attribute__ ((__packed__));

typedef struct ErrlUserDetails ErrlUserDetails_t;

// @note The User Detail Entry Structure consists of the fields below followed
//       by the actual data the user is trying to collect.
//       A data pointer field is NOT defined but rather inferred here.  In the
//       error log contents, the user will see all the subsequent fields
//       followed by the actual data. For performance as well as alignment
//       requirements in the PPE, all actual data must be 8 byte aligned.
/* User Detail Entry Structure */
struct ErrlUserDetailsEntry
{
    uint8_t  iv_version;    // User Details Entry Version
    uint8_t  iv_type;       // User Details Entry Type (ERRL_USR_DETAIL_TYPE)
    uint16_t iv_size;       // User Details Entry Size
    uint32_t iv_reserved10; // PPE alignment restriction
} __attribute__ ((__packed__));

typedef struct ErrlUserDetailsEntry ErrlUserDetailsEntry_t;

/* Error Log Structure */
struct ErrlEntry
{
    uint16_t          iv_checkSum;     // Log CheckSum
    uint8_t           iv_version;      // Log Version
    uint8_t           iv_entryId;      // Log Entry ID
    uint8_t           iv_reasonCode;   // Log Reason Code
    uint8_t           iv_severity;     // Log Severity (See ERRL_SEVERITY)
    uint8_t           iv_reserved1;    // Must be 0, until actions are defined
    uint8_t           iv_numCallouts;  // Number of callouts in the log
    uint16_t          iv_extendedRC;   // Log Extended Reason Code
    uint16_t          iv_maxSize;      // Max possible size of Error Log
    uint16_t          iv_reserved2[2]; // @alignment
    ErrlCallout_t     iv_callouts[ERRL_MAX_CALLOUTS];// Callouts
    ErrlUserDetails_t iv_userDetails;  // User Details section for Log
} __attribute__ ((__packed__));

typedef struct ErrlEntry ErrlEntry_t;

// -----------------------------------------------------------------------------
// End HCode Error Log Definitions
// -----------------------------------------------------------------------------

/* Error Log Handle */
typedef ErrlEntry_t* errlHndl_t;

#ifdef __cplusplus
#ifdef __PPE__
}
#else
}
#endif
#endif

#endif // OCC_HCODE_ERRLDEFS_H
