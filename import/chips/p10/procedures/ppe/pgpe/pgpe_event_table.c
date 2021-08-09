/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_table.c $     */
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
#include "pgpe_event_table.h"
#include "p10_oci_proc_8.H"

void pgpe_event_tbl_profile(uint32_t event_idx);

//Static Event Table
event_t pgpe_event_table[MAX_EVENT_TABLE_ENTRIES] __attribute__((section (".data_structs")));


void pgpe_event_tbl_init()
{
    uint32_t  i;

    for (i = 0; i < MAX_EVENT_TABLE_ENTRIES; i++)
    {
        pgpe_event_table[i].status = EVENT_INACTIVE;
        pgpe_event_table[i].args = NULL;
        pgpe_event_table[i].cnt = 0;
        pgpe_event_table[i].total_time = 0;
        pgpe_event_table[i].max_time = 0;
        pgpe_event_table[i].min_time = 0xFFFFFFFF;
        pgpe_event_table[i].start_time = 0;
        pgpe_event_table[i].end_time = 0;
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
    if(status == EVENT_PENDING)
    {
        pgpe_event_table[event_idx].start_time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
    }
    else if(status == EVENT_INACTIVE)
    {
        pgpe_event_tbl_profile(event_idx);
    }

    pgpe_event_table[event_idx].status = status;
    pgpe_event_table[event_idx].args = args;
}

void pgpe_event_tbl_set_status(uint32_t event_idx, uint32_t status)
{
    if(status == EVENT_PENDING)
    {
        pgpe_event_table[event_idx].start_time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
    }
    else if(status == EVENT_INACTIVE)
    {
        pgpe_event_tbl_profile(event_idx);
    }

    pgpe_event_table[event_idx].status = status;
}

void pgpe_event_tbl_profile(uint32_t event_idx)
{
    pgpe_event_table[event_idx].end_time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
    uint32_t delta = pgpe_event_table[event_idx].end_time - pgpe_event_table[event_idx].start_time;

    if (pgpe_event_table[event_idx].start_time > pgpe_event_table[event_idx].end_time)
    {
        delta += 0xFFFFFFFF;
    }

    if(delta > pgpe_event_table[event_idx].max_time)
    {
        pgpe_event_table[event_idx].max_time = delta;
    }

    if(delta < pgpe_event_table[event_idx].min_time)
    {
        pgpe_event_table[event_idx].min_time = delta;
    }

    pgpe_event_table[event_idx].cnt++;
    pgpe_event_table[event_idx].total_time += delta;

    if(pgpe_event_table[event_idx].total_time & 0x80000000)
    {
        pgpe_event_table[event_idx].cnt = 1;
        pgpe_event_table[event_idx].total_time = delta;
    }
}
