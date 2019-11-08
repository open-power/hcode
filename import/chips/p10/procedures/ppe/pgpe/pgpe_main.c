/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_main.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2019                                                    */
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
#include "pgpe.h"
#include "pgpe_event_manager.h"
#include "pgpe_irq_handlers.h"
#include "pgpe_header.h"
#include "pgpe_gppb.h"
#include "pgpe_fake_boot.h"
#include "pgpe_pstate.h"
#include "pgpe_avsbus_driver.h"
#include "pgpe_event_table.h"
#include "pgpe_resclk.h"
#include "pgpe_thr_ctrl.h"

IOTA_BEGIN_IDLE_TASK_TABLE
{ IOTA_IDLE_ENABLED, IOTA_TASK(pgpe_event_manager_run) }
IOTA_END_IDLE_TASK_TABLE


data_struct_table_t G_data_struct_table __attribute__((section (".data_struct_table")));

void init_data_struct_table();

int main()
{

#if USE_FAKE_BOOT == 1
    PK_TRACE("PGPE FAKE Boot");
    pgpe_fake_boot_gppb();
    pgpe_fake_boot_pgpe_header();
#endif

    //Do all initialization here
    pgpe_header_init();
    pgpe_gppb_init();
    pgpe_event_manager_init();
    pgpe_irq_init();
    pgpe_pstate_init();
    pgpe_avsbus_init();
    init_data_struct_table();
    pgpe_resclk_init();
    pgpe_thr_ctrl_init();

    PK_TRACE("PGPE Booted");

    iota_run();
    return 0;
}

void init_data_struct_table()
{
    G_data_struct_table.entry[DATA_EVENT_MANAGER].address = (uint32_t)pgpe_event_manager_data_addr();
    G_data_struct_table.entry[DATA_EVENT_MANAGER].size = sizeof(pgpe_event_manager_t);

    G_data_struct_table.entry[DATA_EVENT_TABLE].address = (uint32_t)pgpe_event_tbl_data_addr();
    G_data_struct_table.entry[DATA_EVENT_TABLE].size = sizeof(event_t) * MAX_EVENT_TABLE_ENTRIES;

    G_data_struct_table.entry[DATA_PSTATE].address = (uint32_t)pgpe_pstate_data_addr();
    G_data_struct_table.entry[DATA_PSTATE].size = sizeof(pgpe_pstate_t);
}
