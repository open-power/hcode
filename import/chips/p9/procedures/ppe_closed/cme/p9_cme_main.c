/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme_main.c $     */
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
#include "p9_cme_irq.h"

// CME Pstate Header and Structure
#include "p9_cme_pstate.h"

// CME Stop Header and Structure
#include "p9_cme_stop.h"
CmeStopRecord G_cme_stop_record = {0};

// CME Interrupt Handler Table
EXTERNAL_IRQ_TABLE_START
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DEBUGGER
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DEBUG_TRIGGER
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_QUAD_CHECKSTOP
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_PVREF_FAIL
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_OCC_HEARTBEAT_LOST
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_CORE_CHECKSTOP
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DROPOUT_FAIL
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_SPARE_7
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_BCE_BUSY_HIGH
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_BCE_TIMEOUT
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL3_C0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL3_C1
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_PC_INTR_PENDING_C0
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_PC_INTR_PENDING_C1
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_REG_WAKEUP_C0
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_REG_WAKEUP_C1
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_SPECIAL_WAKEUP_C0
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_SPECIAL_WAKEUP_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL2_C0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL2_C1
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[0]))
//CMEHW_IRQ_PC_PM_STATE_ACTIVE_C0
IRQ_HANDLER(p9_cme_stop_event_handler, (void*) & (G_cme_stop_record.sem[0]))
//CMEHW_IRQ_PC_PM_STATE_ACTIVE_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_L2_PURGE_DONE
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_NCU_PURGE_DONE
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_CHTM_PURGE_DONE_C0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_CHTM_PURGE_DONE_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_BCE_BUSY_LOW
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_FINAL_VDM_DATA0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_FINAL_VDM_DATA1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_COMM_RECVD
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_COMM_SEND_ACK
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_COMM_SEND_NACK
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_SPARE_32
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_SPARE_33
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_PMCR_UPDATE_C0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_PMCR_UPDATE_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL0_C0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL0_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_SPARE_38
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_SPARE_39
IRQ_HANDLER(p9_cme_stop_doorbell_handler, 0) //CMEHW_IRQ_DOORBELL1_C0
IRQ_HANDLER(p9_cme_stop_doorbell_handler, 0) //CMEHW_IRQ_DOORBELL1_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_PECE_INTR_DISABLED_C0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_PECE_INTR_DISABLED_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_44
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_45
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_46
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_47
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_48
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_49
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_50
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_51
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_52
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_53
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_54
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_55
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_56
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_57
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_58
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_59
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_60
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_61
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_62
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_RESERVED_63
EXTERNAL_IRQ_TABLE_END

#define  KERNEL_STACK_SIZE  256
#define  THREAD_STACK_SIZE  256

#define  CME_THREAD_PRIORITY_STOP_EXIT   1
#define  CME_THREAD_PRIORITY_STOP_ENTRY  2
#define  CME_THREAD_PRIORITY_PSTATE_PMCR 3

uint8_t  G_kernel_stack[KERNEL_STACK_SIZE];

uint8_t  G_p9_cme_stop_enter_thread_stack[THREAD_STACK_SIZE];
uint8_t  G_p9_cme_stop_exit_thread_stack[THREAD_STACK_SIZE];
uint8_t  G_p9_cme_pmcr_db0_thread_stack[THREAD_STACK_SIZE];

PkThread G_p9_cme_stop_enter_thread;
PkThread G_p9_cme_stop_exit_thread;
PkThread G_p9_cme_pmcr_db0_thread;

int
main(int argc, char** argv)
{
    // Initializes kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize((PkAddress)G_kernel_stack,
                  KERNEL_STACK_SIZE,
                  0,
                  PPE_TIMEBASE_HZ);

    PK_TRACE("Kernel init completed");

    // Unified interrupt handler checks
    if (IDX_PRTY_LVL_DISABLED != (NUM_EXT_IRQ_PRTY_LEVELS - 1))
    {
        MY_TRACE_ERR("Code bug: IDX_PRTY_LVL_DISABLED(=%d)!=NUM_EXT_IRQ_PRTY_LEVELS(=%d)-1",
                     IDX_PRTY_LVL_DISABLED, NUM_EXT_IRQ_PRTY_LEVELS);
        pk_halt();
    }

    if (IRQ_VEC_PRTY_CHECK != 0xFFFFFFFFFFFFFFFF)
    {
        MY_TRACE_ERR("Code bug: IRQ_VEC_PRTY_CHECK=0x%08x%08x should be all ones",
                     IRQ_VEC_PRTY_CHECK);
        pk_halt();
    }

    //CMO-Temporary setting
    // Setup up CME_LCL_FLAGS to indicate whether
    // this CME is QMGR master or slave.
    // Rules:
    // - If even CME then set FLAGS(3)=1. Otherwise =0.
    // - Whether in CME or Simics or HW,
    //   the assumption here is that the even CME in
    //   a configured Quad is always configured.
    uint32_t l_pir;
    asm volatile ("mfpir %[data] \n" : [data]"=r"(l_pir) );

    if ( l_pir & PIR_INSTANCE_EVEN_ODD_MASK )
    {
        // Odd: Set slave status
        out32(CME_LCL_FLAGS_CLR, CME_FLAGS_QMGR_MASTER);
    }
    else
    {
        // Even: Set master status
        out32(CME_LCL_FLAGS_OR, CME_FLAGS_QMGR_MASTER);
    }

    // Initialize the thread control block for G_p9_cme_stop_exit_thread
    pk_thread_create(&G_p9_cme_stop_exit_thread,
                     (PkThreadRoutine)p9_cme_stop_exit_thread,
                     (void*)NULL,
                     (PkAddress)G_p9_cme_stop_exit_thread_stack,
                     (size_t)THREAD_STACK_SIZE,
                     (PkThreadPriority)CME_THREAD_PRIORITY_STOP_EXIT);

    PK_TRACE_BIN("G_p9_cme_stop_exit_thread",
                 &G_p9_cme_stop_exit_thread,
                 sizeof(G_p9_cme_stop_exit_thread));

    // Initialize the thread control block for G_p9_cme_stop_enter_thread
    pk_thread_create(&G_p9_cme_stop_enter_thread,
                     (PkThreadRoutine)p9_cme_stop_enter_thread,
                     (void*)NULL,
                     (PkAddress)G_p9_cme_stop_enter_thread_stack,
                     (size_t)THREAD_STACK_SIZE,
                     (PkThreadPriority)CME_THREAD_PRIORITY_STOP_ENTRY);

    PK_TRACE_BIN("G_p9_cme_stop_enter_thread",
                 &G_p9_cme_stop_enter_thread,
                 sizeof(G_p9_cme_stop_enter_thread));

    // Initialize thread control blocks for the threads
    pk_thread_create( &G_p9_cme_pmcr_db0_thread,
                      (PkThreadRoutine)pmcr_db0_thread,
                      (void*)NULL,
                      (PkAddress)G_p9_cme_pmcr_db0_thread_stack,
                      (size_t)THREAD_STACK_SIZE,
                      (PkThreadPriority)IDX_PRTY_LVL_PMCR_DB0);

    PK_TRACE_BIN("G_p9_cme_pmcr_db0_thread",
                 &G_p9_cme_pmcr_db0_thread,
                 sizeof(G_p9_cme_pmcr_db0_thread));

    // Make G_p9_cme_stop_exit_thread runnable
    pk_thread_resume(&G_p9_cme_stop_exit_thread);

    // Make G_p9_cme_stop_enter_thread runnable
    pk_thread_resume(&G_p9_cme_stop_enter_thread);

    // Make G_p9_cme_pstate_thread runnable
    pk_thread_resume(&G_p9_cme_pmcr_db0_thread);

    PK_TRACE("Launching threads");

    // Start running the highest priority thread.
    // This function never returns
    pk_start_threads();

    return 0;
}
