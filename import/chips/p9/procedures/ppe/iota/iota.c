/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/iota.c $                  */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017                                                         */
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
#include "iota_uih.h"
#include "iota_ppe42.h"

// Force all kernel variables into .sdata
// Order controlled by linker script
uint64_t ppe42_64bit_timebase __attribute__((section(".sdata.ppe42_64bit_timebase"))) = 0;

iotaMachineState g_iota_machine_state_stack[(IOTA_MAX_NESTED_INTERRUPTS)] __attribute__((aligned(8))) =
{
    [ 0 ... (IOTA_MAX_NESTED_INTERRUPTS - 1) ] = IOTA_MACHINE_STATE_INIT
};
uint64_t g_iota_execution_stack[(IOTA_EXECUTION_STACK_SIZE / 8)] __attribute__((aligned(8))) =
{
    [ 0 ... ((IOTA_EXECUTION_STACK_SIZE / 8) - 1) ] = IOTA_STACK_PATTERN
};
iotaMachineState*  g_iota_curr_machine_state_ptr = g_iota_machine_state_stack;

iotaTimerFuncPtr g_iota_dec_handler = IOTA_TIMER_HANDLER(__iota_halt);
iotaTimerFuncPtr g_iota_fit_handler = IOTA_TIMER_HANDLER(__iota_halt);

void _iota_evaluate_idle_tasks()
{
    // Iterate over all idle tasks
    uint32_t idle_task_idx = 0;

    for(; idle_task_idx < g_iota_idle_task_list_size; ++idle_task_idx)
    {
        // Enabled tasks get executed
        if(g_iota_idle_task_list[idle_task_idx].state >= IOTA_IDLE_ENABLED)
        {
            if(g_iota_idle_task_list[idle_task_idx].function == IOTA_NO_TASK)
            {
                // Tried to execute a NULLPTR task
                iota_halt();
            }

            g_iota_idle_task_list[idle_task_idx].function(idle_task_idx, 0);

#if IOTA_AUTO_DISABLE_IDLE_TASKS
            uint32_t ctx = mfmsr();
            wrteei(0);

            g_iota_idle_task_list[idle_task_idx].state = IOTA_IDLE_DISABLED;

            mtmsr(ctx);
#endif
        }
    }
}

extern void main(void);

void _iota_boot()
{
    g_iota_curr_machine_state_ptr = g_iota_machine_state_stack;

    // Can CME be reset w/o reload?
    // If see need to clean up entire state of ppe42 to known state
    // enable DEC timer w interrupts

    mtmsr(IOTA_INITIAL_MSR);

    // DEC timer setup
    mtspr(SPRN_DEC, 0xffffffff);
    mtspr(SPRN_TSR, TSR_DIS);
    or_spr(SPRN_TCR, TCR_DIE);

    __hwmacro_setup(); // Configures external interrupt registers

    main();
}

void iota_run()
{
    mtmsr(IOTA_DEFAULT_MSR);

    while(1)
    {
        // Run any enabled idle tasks
        _iota_evaluate_idle_tasks();

        uint32_t ctx = mfmsr() | MSR_WE | MSR_EE ;
        mtmsr(ctx);
    }
}

void iota_set_idle_task_state(uint32_t state, uint32_t idle_task_idx)
{
    if(idle_task_idx < g_iota_idle_task_list_size)
    {
        // Ignore any task entries which have no task assigned...
        if(g_iota_idle_task_list[idle_task_idx].function != IOTA_NO_TASK)
        {
            // Setting/changing an idle task enable needs to be done atomically
            uint32_t ctx = mfmsr();
            wrteei(0);

            g_iota_idle_task_list[idle_task_idx].state = state;

            mtmsr(ctx);
        }
    }
}

void _iota_schedule(uint32_t schedule_reason)
{
    // Increment machine state pointer
    if(g_iota_curr_machine_state_ptr <
       &g_iota_machine_state_stack[IOTA_MAX_NESTED_INTERRUPTS - 1])
    {
        g_iota_curr_machine_state_ptr++;
    }
    else
    {
        iota_halt();
    }

    // call appropriate interrupt handler here
    uint32_t task_idx;

    switch(schedule_reason)
    {
        case _IOTA_SCHEDULE_REASON_EXT:

            task_idx = iota_uih();

            if(g_iota_task_list[task_idx] != IOTA_NO_TASK)
            {
                //uint32_t ctx = mfmsr();
                uint32_t irq = cntlz64(g_ext_irq_vector);
                mtmsr(IOTA_DEFAULT_MSR);
                g_iota_task_list[task_idx](task_idx, irq);
                //mtmsr(ctx);
            }
            else
            {
                iota_halt();
            }

            break;

        case _IOTA_SCHEDULE_REASON_DEC:
            g_iota_dec_handler();
            break;

        case _IOTA_SCHEDULE_REASON_FIT:
            g_iota_fit_handler();
            break;
    }

    wrteei(0);

    // Check for idle tasks here
    // Rationale: if the g_iota_curr_machine_state_ptr ==
    //            &g_iota_curr_machine_state_ptr[0],
    //            then all interrupt tasks must be completed since this is the
    //            last context about to be restored, which means enabled idle
    //            tasks can be executed
    iotaMachineState* p = g_iota_curr_machine_state_ptr;

    if(--p == g_iota_machine_state_stack)
    {
        uint32_t ctx = mfmsr();
        wrteei(1);
        _iota_evaluate_idle_tasks();
        mtmsr(ctx);
    }

    // Decrement machine state pointer
    if(g_iota_curr_machine_state_ptr > g_iota_machine_state_stack)
    {
        g_iota_curr_machine_state_ptr--;
    }
    else
    {
        iota_halt();
    }
}

uint64_t pk_timebase_get()
{
    return (ppe42_64bit_timebase & 0xffffffff00000000ull) | (~(mfspr(SPRN_DEC)) + 1);
}
