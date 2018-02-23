/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/wof_sgpe_pgpe_api.h $    */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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

#ifndef __IPC_MESSAGES_H__
#define __IPC_MESSAGES_H__

//---------------
// IPC from SGPE to PGPE
//---------------
enum MESSAGE_ID_IPI2HI_SGPE_PGPE
{
    MSGID_SGPE_PGPE_UPDATE_ACTIVE_CORES    = 0x8,
    MSGID_SGPE_PGPE_UPDATE_ACTIVE_QUADS    = 0x9,
    MSGID_SGPE_PGPE_SUSPEND_PSTATES        = 0x10
};

//---------------
// IPC from PGPE to SGPE
//---------------
enum MESSAGE_ID_IPI3HI_PGPE_SGPE
{
    MSGID_PGPE_SGPE_INVALID                = 0,
    MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES   = 1,
    MSGID_PGPE_SGPE_SUSPEND_STOP           = 2
};

enum CTRL_STOP_UPDATES_ACTIONS
{
    CTRL_STOP_UPDT_RESERVED0               = 0x0,
    CTRL_STOP_UPDT_ENABLE_CORE             = 0x1,
    CTRL_STOP_UPDT_ENABLE_QUAD             = 0x2,
    CTRL_STOP_UPDT_ENABLE_CORE_QUAD        = 0x3,
    CTRL_STOP_UPDT_RESERVED1               = 0x4,
    CTRL_STOP_UPDT_DISABLE_CORE            = 0x5,
    CTRL_STOP_UPDT_DISABLE_QUAD            = 0x6,
    CTRL_STOP_UPDT_DISABLE_CORE_QUAD       = 0x7
};


enum UPDATE_ACTIVE_TYPES
{
    UPDATE_ACTIVE_CORES_TYPE_ENTRY              = 0x0,
    UPDATE_ACTIVE_CORES_TYPE_EXIT               = 0x1,
    UPDATE_ACTIVE_QUADS_TYPE_ENTRY              = 0x0,
    UPDATE_ACTIVE_QUADS_TYPE_EXIT               = 0x1,
    UPDATE_ACTIVE_QUADS_ENTRY_TYPE_DONE         = 0x0,
    UPDATE_ACTIVE_QUADS_ENTRY_TYPE_NOTIFY       = 0x1
};

enum SUSPEND_STOP_COMMANDS
{
    SUSPEND_STOP_UNSUSPEND_ENTRY                = 0x1,
    SUSPEND_STOP_UNSUSPEND_EXIT                 = 0x2,
    SUSPEND_STOP_UNSUSPEND_ENTRY_EXIT           = 0x3,
    SUSPEND_STOP_SUSPEND_ENTRY                  = 0x5,
    SUSPEND_STOP_SUSPEND_EXIT                   = 0x6,
    SUSPEND_STOP_SUSPEND_ENTRY_EXIT             = 0x7
};

//
// Return Codes
//
#define SGPE_PGPE_IPC_RC_SUCCESS                0x01
#define SGPE_PGPE_RC_REQ_WHILE_PENDING_ACK      0x10
#define SGPE_PGPE_RC_PM_COMPLEX_SUSPEND         0x11

enum IPC_SGPE_PGPE_RETURN_CODES
{
    IPC_SGPE_PGPE_RC_NULL                  = 0x00,
    IPC_SGPE_PGPE_RC_SUCCESS               = 0x01,
    IPC_SGPE_PGPE_RC_REQ_WHILE_PENDING_ACK = 0x10
};

// Sgpe to Pgpe IPC message format
typedef union
{
    uint64_t value;
    struct
    {
        uint64_t msg_num                : 4;
        uint64_t update_type            : 1;
        uint64_t reserved               : 3;
        uint64_t return_code            : 8;
        uint64_t active_cores           : 24;
        uint64_t return_active_cores    : 24;
    } fields;
} ipcmsg_s2p_update_active_cores_t;

typedef union
{
    uint64_t value;
    struct
    {
        uint64_t msg_num                : 4;
        uint64_t update_type            : 1;
        uint64_t entry_type             : 1;
        uint64_t reserved               : 2;
        uint64_t return_code            : 8;
        uint64_t requested_quads        : 6;
        uint64_t reserved0              : 2;
        uint64_t return_active_quads    : 6;
        uint64_t reserved1              : 2;
        uint64_t pad                    : 32;
    } fields;
} ipcmsg_s2p_update_active_quads_t;

// Pgpe to Sgpe IPC message format
typedef union
{
    uint64_t value;
    struct
    {
        uint32_t msg_num                : 8;
        uint32_t return_code            : 8;
        uint32_t action                 : 8;
        uint32_t pad                    : 8;
        uint32_t active_quads           : 6;
        uint32_t reserved               : 2;
        uint32_t active_cores           : 24;
    } fields;
} ipcmsg_p2s_ctrl_stop_updates_t;


typedef union
{
    uint64_t value;
    struct
    {
        uint32_t msg_num                : 8;
        uint32_t return_code            : 8;
        uint32_t command                : 8;
        uint32_t reserved0              : 8;
        uint32_t reserved1              : 32;
    } fields;
} ipcmsg_p2s_suspend_stop_t;


#endif // __IPC_MESSAGES_H__
