/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_table.c $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
#include "pgpe_event_table.h"

//Static Event Table
event_t pgpe_event_table[MAX_EVENT_TABLE_ENTRIES] __attribute__((section (".data_structs")));


void pgpe_event_tbl_init()
{
    uint32_t  i;

    for (i = 0; i < MAX_EVENT_TABLE_ENTRIES; i++)
    {
        pgpe_event_table[i].status = EVENT_INACTIVE;
        pgpe_event_table[i].args = NULL;
    }
}

void* pgpe_event_tbl_data_addr()
{
    return &pgpe_event_table;
}

event_t* pgpe_event_tbl_get(uint32_t event_idx)
{
    return pgpe_event_table + event_idx;
}

uint32_t  pgpe_event_tbl_get_status(uint32_t event_idx)
{
    return pgpe_event_table[event_idx].status;
}

void* pgpe_event_tbl_get_args(uint32_t event_idx)
{
    return pgpe_event_table[event_idx].args;
}

void pgpe_event_tbl_set(uint32_t event_idx, uint32_t status, void* args)
{
    pgpe_event_table[event_idx].status = status;
    pgpe_event_table[event_idx].args = args;
}

void pgpe_event_tbl_set_status(uint32_t event_idx, uint32_t status)
{
    pgpe_event_table[event_idx].status = status;
}



