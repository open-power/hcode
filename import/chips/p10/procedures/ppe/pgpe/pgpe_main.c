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


void idle_task(uint32_t idle_task_idx)
{
    static uint32_t val = 1;
    uint32_t i;

    for(i = 0; i < 10; ++i)
    {
        asm volatile("mtspr 0x110, %0" : : "r" (val++));
        iota_set_idle_task_state(IOTA_IDLE_ENABLED, idle_task_idx);
    }
}

// IRQ handlers
void irq_task()
{
    APPCFG_TRACE("high_priority_task");
}

IOTA_BEGIN_IDLE_TASK_TABLE
{ IOTA_IDLE_DISABLED, IOTA_NO_TASK },
{ IOTA_IDLE_DISABLED, IOTA_TASK(idle_task) }
IOTA_END_IDLE_TASK_TABLE

// IRQ handler table
IOTA_BEGIN_TASK_TABLE
IOTA_TASK(irq_task),
          IOTA_TASK(irq_task),
          IOTA_TASK(irq_task),
          IOTA_TASK(irq_task),
          IOTA_TASK(irq_task)
          IOTA_END_TASK_TABLE;


// IPC function table for single target functions
IPC_ST_FUNC_TABLE_START
//          (function, arg)
IPC_HANDLER_DEFAULT    // 0
IPC_HANDLER_DEFAULT    // 1
IPC_HANDLER_DEFAULT    // 3
IPC_HANDLER_DEFAULT    // 4
IPC_HANDLER_DEFAULT    // 5
IPC_HANDLER_DEFAULT    // 6
IPC_HANDLER_DEFAULT    // 7
IPC_HANDLER_DEFAULT    // 8
IPC_HANDLER_DEFAULT    // 9
IPC_HANDLER_DEFAULT    // 10
IPC_HANDLER_DEFAULT    // 11
IPC_HANDLER_DEFAULT    // 12
IPC_HANDLER_DEFAULT    // 13
IPC_HANDLER_DEFAULT    // 14
IPC_HANDLER_DEFAULT    // 15
IPC_ST_FUNC_TABLE_END

void fit_handler()
{
    APPCFG_TRACE("FIT Handler");
}

void dec_handler()
{
    APPCFG_TRACE("DEC Handler");
}

int main()
{
    IOTA_DEC_HANDLER(dec_handler);
    IOTA_FIT_HANDLER(fit_handler);

    iota_run();
    return 0;
}
