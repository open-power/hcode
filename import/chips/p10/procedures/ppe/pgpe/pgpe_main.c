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
#include "iota.h"
#include "iota_trace.h"
#include "ipc_async_cmd.h"
#include "pgpe.h"
#include "pgpe_event_manager.h"
#include "pgpe_irq_handlers.h"


IOTA_BEGIN_IDLE_TASK_TABLE
{ IOTA_IDLE_ENABLED, IOTA_TASK(pgpe_event_manager_run) }
IOTA_END_IDLE_TASK_TABLE

int main()
{

    //Do all initialization here
    pgpe_event_manager_init();
    pgpe_irq_init();

    PK_TRACE("PGPE Booted");

    iota_run();
    return 0;
}
