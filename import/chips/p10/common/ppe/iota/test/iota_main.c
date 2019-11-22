/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/iota/test/iota_main.c $           */
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

void init_func1()
{
    PK_TRACE("Init task1");
}
void init_func2()
{
    PK_TRACE("Init task2");
}

void idle_task1(uint32_t i_idle_task_idx)
{
    PK_TRACE("Idle task1");
}

void idle_task2(uint32_t i_idle_task_idx)
{
    PK_TRACE("Idle task2");
    iota_set_idle_task_state(IOTA_IDLE_DISABLED, i_idle_task_idx);
}

// IRQ handlers
void high_priority_task()
{
    APPCFG_TRACE("high_priority_task");
}

void low_priority_task()
{
    APPCFG_TRACE("low_priority_task");
}

// *INDENT-OFF*
// IRQ handler table
IOTA_BEGIN_TASK_TABLE
    IOTA_TASK(high_priority_task),
    IOTA_TASK(ipc_irq_handler),
    IOTA_TASK(low_priority_task),
IOTA_END_TASK_TABLE;


// IPC message handlers
void msg1_handler(ipc_msg_t* cmd, void* arg)
{
    uint32_t rc = 0;
    //ipc_async_cmd_t *async_cmd = (ipc_async_cmd_t*)cmd;
    // payloadtype * payload = (payloadtype *)async_cmd->cmd_data;
    //
    ipc_send_rsp(cmd, rc);
}

void msg2_handler(ipc_msg_t* cmd, void* arg)
{
    uint32_t rc = 0;
    //ipc_async_cmd_t *async_cmd = (ipc_async_cmd_t*)cmd;
    // payloadtype * payload = (payloadtype *)async_cmd->cmd_data;
    //
    ipc_send_rsp(cmd, rc);
}

IOTA_BEGIN_INIT_TASK_TABLE
    IOTA_TASK(init_func1),
    IOTA_TASK(init_func2)
IOTA_END_INIT_TASK_TABLE

IOTA_BEGIN_IDLE_TASK_TABLE
    { IOTA_IDLE_ENABLED, IOTA_TASK(idle_task1) },
    { IOTA_IDLE_ENABLED, IOTA_TASK(idle_task2) },
    { IOTA_IDLE_DISABLED, IOTA_NO_TASK }
IOTA_END_IDLE_TASK_TABLE

// IPC function table for single target functions
IPC_ST_FUNC_TABLE_START
//          (function, arg)
IPC_HANDLER(msg1_handler, 0)    // 0 - IPC_ST_FUNCID == 0
IPC_HANDLER(msg2_handler, 0)    // 1 - IPC_ST_FUNCID == 1
IPC_HANDLER_DEFAULT             // 3 - 2-15 not used
IPC_HANDLER_DEFAULT             // 4
IPC_HANDLER_DEFAULT             // 5
IPC_HANDLER_DEFAULT             // 6
IPC_HANDLER_DEFAULT             // 7
IPC_HANDLER_DEFAULT             // 8
IPC_HANDLER_DEFAULT             // 9
IPC_HANDLER_DEFAULT             // 10
IPC_HANDLER_DEFAULT             // 11
IPC_HANDLER_DEFAULT             // 12
IPC_HANDLER_DEFAULT             // 13
IPC_HANDLER_DEFAULT             // 14
IPC_HANDLER_DEFAULT             // 15
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

    pk_trace_set_freq(PPE_TIMEBASE_HZ);

    APPCFG_TRACE("IOTA_TEST main");

    ipc_init();

    // IPC message handling table can either be statically populated using
    // IPC_ST_FUNC_TABLE_START IPC_HANDLER(...)... IPC_ST_FUNC_TABLE_END
    // macros and defining STATIC_IPC_TABLES in the *.mk file
    // or dynamically populated by using the following interface:
    // ipc_set_handler(2 /*FUNC_ID*/, msg1_handler, NULL /* call_arg */);

    ipc_enable();

    mttcr(TCR_DIE | TCR_FIE);
    iota_run();
    return 0;
}
