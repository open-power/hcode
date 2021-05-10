/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/powmanlib/pstate_pgpe_occ_api.h $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2015,2021                                                    */
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
/// @file  pstates_pgpe_occ_api.h
/// @brief Structures used between PGPE HCode and OCC Firmware
///
// *HWP HW Owner        : Rahul Batra <rbatra@us.ibm.com>
// *HWP HW Owner        : Michael Floyd <mfloyd@us.ibm.com>
// *HWP Team            : PM
// *HWP Level           : 1
// *HWP Consumed by     : PGPE:OCC


#ifndef __PSTATES_PGPE_OCC_API_H__
#define __PSTATES_PGPE_OCC_API_H__

#include <pstates_common.H>
#include "hcode_errl_table.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HCODE_OCC_SHARED_MAGIC_NUMBER_OPS2      0x4F505332 //OPS2

//---------------
// IPC from 405
//---------------
//Note: These are really not used. They are just for documentation purposes
enum MESSAGE_ID_IPI2HI
{
    MSGID_405_INVALID       = 0,
    MSGID_405_START_SUSPEND = 1,
    MSGID_405_CLIPS         = 2,
    MSGID_405_SET_PMCR      = 3,
    MSGID_405_WOF_CONTROL   = 4,
    MSGID_405_WOF_VRT       = 5
};

//
// Return Codes
//
#define PGPE_RC_SUCCESS                         0x01
#define PGPE_WOF_RC_NOT_ENABLED                 0x10
#define PGPE_RC_PSTATES_NOT_STARTED             0x11
#define PGPE_RC_OCC_NOT_PMCR_OWNER              0x14
#define PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE    0x15

#define PGPE_RC_REQ_WHILE_PENDING_ACK           0x21
#define PGPE_RC_NULL_VRT_POINTER                0x22
#define PGPE_RC_INVALID_PMCR_OWNER              0x23
#define PGPE_WOF_RC_INVALID_FIXED_VRATIO_INDEX  0x24

//
// PMCR Owner
//
typedef enum
{
    PMCR_OWNER_HOST         = 0,
    PMCR_OWNER_OCC          = 1,
    PMCR_OWNER_CHAR         = 2
} PMCR_OWNER;


typedef struct ipcmsg_base
{
    uint8_t   rc;
} ipcmsg_base_t;


//
// Start Suspend Actions
//
#define PGPE_ACTION_PSTATE_START   0
#define PGPE_ACTION_PSTATE_STOP    1

typedef struct ipcmsg_start_stop
{
    ipcmsg_base_t   msg_cb;
    uint8_t         action;
    PMCR_OWNER      pmcr_owner;
} ipcmsg_start_stop_t;


typedef struct ipcmsg_clip_update
{
    ipcmsg_base_t   msg_cb;
    uint8_t         ps_val_clip_min;
    uint8_t         ps_val_clip_max;
    uint8_t         pad[1];
} ipcmsg_clip_update_t;


typedef struct ipcmsg_set_pmcr
{
    ipcmsg_base_t   msg_cb;
    uint8_t         pad[7];
    uint64_t        pmcr;       // @todo Why is this a unit64_t?  It was in P9.
} ipcmsg_set_pmcr_t;


//
// WOF Control Actions
//
#define PGPE_ACTION_WOF_ON         1
#define PGPE_ACTION_WOF_OFF        2
#define PGPE_OCC_VRATIO_MODE_VARIABLE   0
#define PGPE_OCC_VRATIO_MODE_FIXED      1

typedef struct ipcmsg_wof_control
{
    ipcmsg_base_t   msg_cb;
    uint8_t         action;
    uint8_t         pad;
} ipcmsg_wof_control_t;


typedef struct ipcmsg_wof_vrt
{
    ipcmsg_base_t   msg_cb;
    uint8_t         vratio_mode;         // 0 = variable; 1 = fixed
    uint8_t         fixed_vratio_index;  // if vratio_mode = fixed, index to suse
    uint8_t         pad[1];
    VRT_t*          idd_vrt_ptr; // VDD Voltage Ratio Table
    uint32_t        vdd_ceff_ratio; // Used for VDD
    uint32_t        vcs_ceff_ratio; // Used for VCS
} ipcmsg_wof_vrt_t;

// -----------------------------------------------------------------------------
// Start Pstate Table

#define MAX_OCC_PSTATE_TABLE_ENTRIES 256

/// Pstate Table produced by the PGPE for consumption by OCC Firmware
///
/// This structure defines the Pstate Table content
/// -- 16B structure

typedef struct
{
    /// Pstate number
    Pstate_t   pstate;

    /// Assocated Frequency (in MHz)
    uint16_t   frequency_mhz;

    /// Internal VDD voltage ID at the output of the PFET header
    uint8_t    internal_vdd_vid;

} OCCPstateTable_entry_t;

typedef struct
{
    /// Number of Pstate Table entries
    uint32_t                entries;

    /// Internal VDD voltage ID at the output of the PFET header
    OCCPstateTable_entry_t  table[MAX_OCC_PSTATE_TABLE_ENTRIES];

} OCCPstateTable_t;

// End Pstate Table
// -----------------------------------------------------------------------------

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
            uint64_t average_pstate             : 8;
            uint64_t average_frequency_pstate   : 8;
            uint64_t wof_clip_pstate            : 8;
            uint64_t average_throttle_idx       : 8;
            uint64_t vratio_vcs_avg             : 16;
            uint64_t vratio_vdd_avg             : 16;
        } fields;
    } dw0;
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
            uint64_t idd_avg_10ma               : 16;
            uint64_t ics_avg_10ma               : 16;
            uint64_t idn_avg_10ma               : 16;
            uint64_t iio_avg_10ma               : 16;

        } fields;
    } dw1;
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
            uint64_t vdd_avg_mv                 : 16;
            uint64_t vcs_avg_mv                 : 16;
            uint64_t vdn_avg_mv                 : 16;
            uint64_t vio_avg_mv                 : 16;
        } fields;
    } dw2;
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
            uint64_t ocs_avg_0p01pct            : 16;
            uint64_t vratio_vcs_roundup_avg     : 16;
            uint64_t vratio_vdd_roundup_avg     : 16;
            uint64_t uv_avg_0p1pct              :  8;
            uint64_t ov_avg_0p1pct              :  8;
        } fields;
    } dw3;
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
            uint64_t max_idd_100ma              : 16;
            uint64_t max_ics_100ma              : 16;
            uint64_t max_idd_ocs_average_10ma   : 16;
            uint64_t reserved                   : 16;
        } fields;
    } dw4;
} pgpe_wof_values_t;

typedef union
{
    uint64_t value;
    struct
    {
        uint32_t high_order;
        uint32_t low_order;
    } words;
    struct
    {
        uint16_t io_power_proxy_0p01w           : 16;
        uint64_t reserved0                      : 8;
        uint64_t io_index                       : 8;
        uint64_t reserved1                      : 32;
    } fields;
} xgpe_wof_values_t;

typedef union
{
    uint64_t value;
    struct
    {
        uint32_t high_order;
        uint32_t low_order;
    } words;
    struct
    {
        uint64_t sibling_base_frequency         : 16;
        uint64_t reserved0                      : 8;
        uint64_t sibling_pstate                 : 8;
        uint64_t reserved1                      : 32;
    } fields;
} occ_wof_values_t;

enum ACT_CNT_IDX
{
    ACT_CNT_IDX_CORECLK_OFF    = 0,
    ACT_CNT_IDX_CORE_VMIN      = 1,
    ACT_CNT_IDX_MMA_OFF        = 2,
    ACT_CNT_IDX_CORECACHE_OFF  = 3,
    ACT_CNT_IDX_MAX            = 4,
};

typedef union
{
    uint8_t act_val[32][ACT_CNT_IDX_MAX];
    uint32_t act_val_core[32];
} iddq_activity_t;


/// Hcode<>OCC Shared Data Structure
///
/// Shared data between OCC, PGPE and XGPE
typedef struct
{
    /// Magic number + version.  "OPS" || version (nibble)
    uint32_t            magic;

    /// PGPE Beacon
    uint32_t            pgpe_beacon;

    /// OCC Data offset from start of OCC Shared SRAM
    uint16_t            occ_data_offset;

    /// OCC Data Length
    uint16_t            occ_data_length;

    /// PGPE Data offset from start of OCC Shared SRAM
    uint16_t            pgpe_data_offset;

    /// PGPE Data Length
    uint16_t            pgpe_data_length;

    /// XGPE Data offset from start of OCC Shared SRAM
    uint16_t            xgpe_data_offset;

    /// XGPE Data Length
    uint16_t            xgpe_data_length;

    /// IDDQ Data offset from start of OCC Shared SRAM
    uint16_t            iddq_data_offset;

    /// IDDQ Data Length
    uint16_t            iddq_data_length;

    /// Error Log offset from start of OCC Shared SRAM
    uint16_t            error_log_offset;

    /// Pstate Table offset from start of OCC Shared SRAM
    uint16_t            pstate_table_offset;

    uint16_t            reserved;

    ///IDDQ Activity sample depth(number of samples accumulated)
    uint16_t            iddq_activity_sample_depth;

    /// OCC Produced WOF Values
    occ_wof_values_t    occ_wof_values;

    /// XGPE Produced WOF Values
    xgpe_wof_values_t    xgpe_wof_values;

    /// PGPE Produced WOF Values
    pgpe_wof_values_t   pgpe_wof_values;

    /// Hcode Error Log Index
    hcode_error_table_t  errlog_idx;

    /// IDDQ Activity Values created by PGPE
    iddq_activity_t     iddq_activity_values;

    /// Pstate Table for OCC consumption
    OCCPstateTable_t    pstate_table;

} HcodeOCCSharedData_t;

#ifdef __cplusplus
} // end extern C
#endif

#endif    /* __PSTATES_PGPE_OCC_API_H__ */
