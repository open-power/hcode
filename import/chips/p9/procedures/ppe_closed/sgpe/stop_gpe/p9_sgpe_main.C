/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_main.C $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

#include "p9_sgpe_stop.h"
#include <fapi2.H>

EXTERNAL_IRQ_TABLE_START
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_DEBUGGER
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_TRACE_TRIGGER
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_OCC_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PBA_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_SRT_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_GPE0_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_GPE1_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_GPE2_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_GPE3_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PPC405_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_OCB_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_SPIPSS_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_PPC405
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_GPE0
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_GPE1
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_GPE2
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_GPE3
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_OCC_MALF_ALERT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_ADU_MALF_ALERT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_EXTERNAL_TRAP
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IVRM_PVREF_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_OCC_TIMER0
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_OCC_TIMER1
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_AVS_SLAVE0
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_AVS_SLAVE1
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI0_HI_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI1_HI_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI2_HI_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI3_HI_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI4_HI_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_ADCFSM_ONGOING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_RESERVED_31
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PBAX_OCC_SEND
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PBAX_OCC_PUSH0
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PBAX_OCC_PUSH1
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PBA_BCDE_ATTN
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PBA_BCUE_ATTN
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM0_PULL
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM0_PUSH
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM1_PULL
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM1_PUSH
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM2_PULL
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM2_PUSH
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM3_PULL
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_STRM3_PUSH
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE0_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE1_PENDING
IRQ_HANDLER(p9_sgpe_stop_pig_handler, 0)
//IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE2_PENDING
IRQ_HANDLER(p9_sgpe_stop_pig_handler, 0)
//IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE3_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE4_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE5_PENDING
IRQ_HANDLER(p9_sgpe_stop_pig_handler, 0)
//IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE6_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE7_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_O2S_0A_ONGOING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_O2S_0B_ONGOING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_O2S_1A_ONGOING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_O2S_1B_ONGOING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PSSBRIDGE_ONGOING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI0_LO_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI1_LO_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI2_LO_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI3_LO_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_IPI4_LO_PRIORITY
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_RESERVED_63
EXTERNAL_IRQ_TABLE_END

#define  KERNEL_STACK_SIZE                  768

#define  SGPE_THREAD_STACK_SIZE_STOP_EXIT   1024
#define  SGPE_THREAD_STACK_SIZE_STOP_ENTRY  512

#define  SGPE_THREAD_PRIORITY_STOP_EXIT     1
#define  SGPE_THREAD_PRIORITY_STOP_ENTRY    2

uint8_t  G_kernel_stack[KERNEL_STACK_SIZE];

uint8_t  G_p9_sgpe_stop_exit_thread_stack[SGPE_THREAD_STACK_SIZE_STOP_EXIT];
uint8_t  G_p9_sgpe_stop_enter_thread_stack[SGPE_THREAD_STACK_SIZE_STOP_ENTRY];

PkThread G_p9_sgpe_stop_exit_thread;
PkThread G_p9_sgpe_stop_enter_thread;

extern void (*ctor_start_address)() __attribute__ ((section (".rodata")));
extern void (*ctor_end_address)() __attribute__ ((section (".rodata")));

extern uint64_t _sbss_start __attribute__ ((section (".sbss")));
extern uint64_t _sbss_end __attribute__ ((section (".sbss")));

extern "C" {
    void __eabi()
    {

        // Call global constructors
        void(**ctors)() = &ctor_start_address;

        while( ctors != &ctor_end_address)
        {
            (*ctors)();
            ctors++;
        }
    }
} // end extern "C"

int
main(int argc, char** argv)
{
    if (in32(OCB_OCCS2) & BIT32(SPGE_DEBUG_TRAP_ENABLE))
    {
        PK_TRACE_INF("BREAK: Trap at SGPE Booted");
        asm volatile ("trap");
    }

    // Initializes kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize((PkAddress)G_kernel_stack,
                  KERNEL_STACK_SIZE,
                  0,
                  PPE_TIMEBASE_HZ);

    fapi2::ReturnCode fapiRc = fapi2::plat_TargetsInit();

    if( fapiRc != fapi2::FAPI2_RC_SUCCESS )
    {
        PK_TRACE_INF("ERROR: FAPI2 Init Failed. HALT SGPE!");
        PK_PANIC(SGPE_MAIN_FAPI2_INIT_FAILED);
    }

    // Initialize the thread control block for G_p9_sgpe_stop_enter_thread
    pk_thread_create(&G_p9_sgpe_stop_enter_thread,
                     (PkThreadRoutine)p9_sgpe_stop_enter_thread,
                     (void*)NULL,
                     (PkAddress)G_p9_sgpe_stop_enter_thread_stack,
                     (size_t)SGPE_THREAD_STACK_SIZE_STOP_ENTRY,
                     (PkThreadPriority)SGPE_THREAD_PRIORITY_STOP_ENTRY);

    PK_TRACE_BIN("G_p9_sgpe_stop_enter_thread",
                 &G_p9_sgpe_stop_enter_thread,
                 sizeof(G_p9_sgpe_stop_enter_thread));

    // Initialize the thread control block for G_p9_sgpe_stop_exit_thread
    pk_thread_create(&G_p9_sgpe_stop_exit_thread,
                     (PkThreadRoutine)p9_sgpe_stop_exit_thread,
                     (void*)NULL,
                     (PkAddress)G_p9_sgpe_stop_exit_thread_stack,
                     (size_t)SGPE_THREAD_STACK_SIZE_STOP_EXIT,
                     (PkThreadPriority)SGPE_THREAD_PRIORITY_STOP_EXIT);

    PK_TRACE_BIN("G_p9_sgpe_stop_exit_thread",
                 &G_p9_sgpe_stop_exit_thread,
                 sizeof(G_p9_sgpe_stop_exit_thread));

    // Make G_p9_sgpe_stop_enter_thread runnable
    pk_thread_resume(&G_p9_sgpe_stop_enter_thread);

    // Make G_p9_sgpe_stop_exit_thread runnable
    pk_thread_resume(&G_p9_sgpe_stop_exit_thread);

    // Start running the highest priority thread.
    // This function never returns
    pk_start_threads();

    return 0;
}
