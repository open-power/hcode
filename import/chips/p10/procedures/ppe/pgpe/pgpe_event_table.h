/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_table.h $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#ifndef __PGPE_EVENT_TABLE_H__
#define __PGPE_EVENT_TABLE_H__

#ifndef __PARSER_TOOL__

    #include "pgpe.h"

#endif

enum EVENT_TABLE_IDX
{
    EV_IPC_PSTATE_START_STOP            =   0,
    EV_IPC_CLIP_UPDT                    =   1,
    EV_IPC_WOF_CTRL                     =   2,
    EV_IPC_WOF_VRT                      =   3,
    EV_IPC_SET_PMCR                     =   4,
    EV_PCB_SET_PMCR                     =   5,
    EV_PSTATE_STOP                      =   6,
    EV_SAFE_MODE                        =   7,
    EV_PM_COMPLEX_SUSPEND               =   8,
    EV_OCC_FAULT                        =   9,
    EV_QME_FAULT                        =   10,
    EV_XGPE_FAULT                       =   11,
    EV_PVREF_FAULT                      =   12,
    EV_IPC_STOP_BEACON                  =   13,
    MAX_EVENT_TABLE_ENTRIES             =   14
};

#ifdef __PARSER_TOOL__
const char* event_table_str[] =
{
    "PSTATE_START_STOP  ",
    "CLIP_UPDT          ",
    "WOF_CTRL           ",
    "WOF_VRT            ",
    "SET_PMCR           ",
    "PMCR_REQ           ",
    "PSTATE_STOP        ",
    "SAFE_MODE          ",
    "PM_COMPLEX_SUSPEND ",
    "OCC_FAULT          ",
    "QME_FAULT          ",
    "XGPE_FAULT         ",
    "PVREF_FAULT        ",
    "STOP_BEACON        ",
};
#endif

enum EVENT_STATE
{
    EVENT_INACTIVE              = 0x00000000,
    EVENT_PENDING               = 0x00000001,
    EVENT_PENDING_ACTUATION     = 0x00000002
};

typedef void (*fn_event_handler)(void* args);

//
typedef struct event
{
    uint32_t status;
    void* args;
} event_t;


//
void pgpe_event_tbl_init();
void* pgpe_event_tbl_data_addr();
event_t* pgpe_event_tbl_get(uint32_t event_idx);
uint32_t  pgpe_event_tbl_get_status(uint32_t event_idx);
void* pgpe_event_tbl_get_args(uint32_t event_idx);
void pgpe_event_tbl_set(uint32_t event_idx, uint32_t status, void* args);
void pgpe_event_tbl_set_status(uint32_t event_idx, uint32_t status);

#endif
