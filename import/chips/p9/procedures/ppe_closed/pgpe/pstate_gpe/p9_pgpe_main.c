/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_main.c $ */
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
#include "pk.h"
#include "p9_pgpe.h"
#include "p9_pgpe_header.h"
#include "p9_pgpe_gppb.h"
#include "p9_pgpe_boot_temp.h"
#include "p9_pgpe_pstate.h"

PgpePstateRecord G_pgpe_pstate_record;

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
IRQ_HANDLER(p9_pgpe_irq_handler_pcb_type1, (void*) & G_pgpe_pstate_record.sem_process_req)
//OCCHW_IRQ_PMC_PCB_INTR_TYPE1_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE2_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE3_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE4_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE5_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE6_PENDING
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

#define  KERNEL_STACK_SIZE  512
#define  THREAD_STACK_SIZE  512

#define  PGPE_THREAD_PRIORITY_PROCESS_REQUESTS  1
#define  PGPE_THREAD_PRIORITY_ACTUATE_PSTATES   2

uint8_t  G_kernel_stack[KERNEL_STACK_SIZE];

//Thread Stacks
uint8_t  G_p9_pgpe_thread_process_requests_stack[THREAD_STACK_SIZE];
uint8_t  G_p9_pgpe_thread_actuate_pstates_stack[THREAD_STACK_SIZE];

//Thread Control Block
PkThread G_p9_pgpe_thread_process_requests;
PkThread G_p9_pgpe_thread_actuate_pstates;

void __eabi()
{
}

int
main(int argc, char** argv)
{
    //Read OCC_SCRATCH[PGPE_DEBUG_TRAP_ENABLE]]
    uint32_t occScr2 = in32(OCB_OCCS2);

    if (occScr2 & BIT32(PGPE_DEBUG_TRAP_ENABLE))
    {
        asm volatile ("tw 0, 31, 0");
    }

    // Initializes kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize((PkAddress)G_kernel_stack,
                  KERNEL_STACK_SIZE,
                  0,
                  PPE_TIMEBASE_HZ);

    // Initialize the thread control block for G_p9_pgpe_thread_process_requests
    pk_thread_create(&G_p9_pgpe_thread_process_requests,
                     (PkThreadRoutine)p9_pgpe_thread_process_requests,
                     (void*)NULL,
                     (PkAddress)G_p9_pgpe_thread_process_requests_stack,
                     (size_t)THREAD_STACK_SIZE,
                     (PkThreadPriority)PGPE_THREAD_PRIORITY_PROCESS_REQUESTS);

    PK_TRACE_BIN("G_p9_pgpe_thread_process_requests",
                 &G_p9_pgpe_thread_process_requests,
                 sizeof(G_p9_pgpe_thread_process_requests));

    // Initialize the thread control block for G_p9_pgpe_thread_actuate_pstates
    pk_thread_create(&G_p9_pgpe_thread_actuate_pstates,
                     (PkThreadRoutine)p9_pgpe_thread_actuate_pstates,
                     (void*)NULL,
                     (PkAddress)G_p9_pgpe_thread_actuate_pstates_stack,
                     (size_t)THREAD_STACK_SIZE,
                     (PkThreadPriority)PGPE_THREAD_PRIORITY_ACTUATE_PSTATES);

    PK_TRACE_BIN("G_p9_pgpe_thread_actuate_pstates",
                 &G_p9_pgpe_thread_actuate_pstates,
                 sizeof(G_p9_pgpe_thread_actuate_pstates));

    // Make G_p9_pgpe_thread pstates_update runnable
    pk_thread_resume(&G_p9_pgpe_thread_process_requests);
    pk_thread_resume(&G_p9_pgpe_thread_actuate_pstates);

    //Do initialization
    p9_pgpe_header_init();
#if USE_BOOT_TEMP
    //This is to be used for development and testing/verif
    //if Global Pstate Parameter Block is not initialized through other means.
    //
    //In real system this all will be done before PGPE HCode is given control. Then
    //subsequent p9_pgpe_gppb_init call reads data out of Global Pstate Parameter Block
    //
    p9_pgpe_boot_temp(); //This is just temporary
#endif

    p9_pgpe_gppb_init();

#if GEN_PSTATE_TBL
    p9_pgpe_gen_pstate_info();
#endif

    //Setup FIT(Fixed-Interval Timer)
    p9_pgpe_fit_init();

    //Initialize all pstate related data to some default values
    p9_pgpe_pstate_init();

    PK_TRACE_DBG("Starting PK Threads\n");

    // Start running the highest priority thread.
    // This function never returns
    pk_start_threads();

    return 0;
}
