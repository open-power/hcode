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
#include "p9_cme_flags.h"
#include "p9_hcode_image_defines.H"

// CME Pstate Header and Structure
#include "p9_cme_pstate.h"
CmePstateRecord G_cme_pstate_record;

// CME Stop Header and Structure
#include "p9_cme_stop.h"
CmeStopRecord G_cme_stop_record __attribute__((section (".dump_ptrs"))) = {{0}, {0}, 0};

#if TEST_ONLY_BCE_IRR
#include "p9_cme_copy_scan_ring.h"
BceIrritator G_bce_irr = {0};
#endif

// CME Interrupt Handler Table
EXTERNAL_IRQ_TABLE_START
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DEBUGGER
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DEBUG_TRIGGER
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_QUAD_CHECKSTOP
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_PVREF_FAIL
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_OCC_HEARTBEAT_LOST
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_CORE_CHECKSTOP
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DROPOUT_FAIL
IRQ_HANDLER(p9_cme_pstate_intercme_in0_handler, (void*)NULL)
//CMEHW_IRQ_INTERCME_DIRECT_IN0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_BCE_BUSY_HIGH
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_BCE_TIMEOUT
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL3_C0
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_DOORBELL3_C1
IRQ_HANDLER(p9_cme_stop_exit_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_PC_INTR_PENDING_C0
IRQ_HANDLER(p9_cme_stop_exit_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_PC_INTR_PENDING_C1
IRQ_HANDLER(p9_cme_stop_spwu_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_SPECIAL_WAKEUP_C0
IRQ_HANDLER(p9_cme_stop_spwu_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_SPECIAL_WAKEUP_C1
IRQ_HANDLER(p9_cme_stop_exit_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_REG_WAKEUP_C0
IRQ_HANDLER(p9_cme_stop_exit_handler, (void*) & (G_cme_stop_record.sem[1]))
//CMEHW_IRQ_REG_WAKEUP_C1
IRQ_HANDLER(p9_cme_stop_db2_handler, 0)     //CMEHW_IRQ_DOORBELL2_C0
IRQ_HANDLER(p9_cme_stop_db2_handler, 0)     //CMEHW_IRQ_DOORBELL2_C1
IRQ_HANDLER(p9_cme_stop_enter_handler, (void*) & (G_cme_stop_record.sem[0]))
//CMEHW_IRQ_PC_PM_STATE_ACTIVE_C0
IRQ_HANDLER(p9_cme_stop_enter_handler, (void*) & (G_cme_stop_record.sem[0]))
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
IRQ_HANDLER(p9_cme_pstate_pmcr_handler, (void*) & (G_cme_pstate_record.sem[0]))
//CMEHW_IRQ_PMCR_UPDATE_C0
IRQ_HANDLER(p9_cme_pstate_pmcr_handler, (void*) & (G_cme_pstate_record.sem[0]))
//CMEHW_IRQ_PMCR_UPDATE_C1
IRQ_HANDLER(p9_cme_pstate_db_handler, (void*) & (G_cme_pstate_record.sem[1]))
//CMEHW_IRQ_DOORBELL0_C0
IRQ_HANDLER(p9_cme_pstate_db_handler, (void*) & (G_cme_pstate_record.sem[1]))
//CMEHW_IRQ_DOORBELL0_C1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_INTERCME_IN1
IRQ_HANDLER_DEFAULT                         //CMEHW_IRQ_INTERCME_IN2
IRQ_HANDLER(p9_cme_stop_db1_handler, 0)     //CMEHW_IRQ_DOORBELL1_C0
IRQ_HANDLER(p9_cme_stop_db1_handler, 0)     //CMEHW_IRQ_DOORBELL1_C1
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

#define  KERNEL_STACK_SIZE                 256

#define  CME_THREAD_STACK_SIZE_STOP_EXIT   512
#define  CME_THREAD_STACK_SIZE_STOP_ENTRY  512
#define  CME_THREAD_STACK_SIZE_PSTATE_DB   384
#define  CME_THREAD_STACK_SIZE_PSTATE_PMCR 256
#if TEST_ONLY_BCE_IRR
    #define  CME_THREAD_STACK_SIZE_BCE_IRR     256
#endif

#define  CME_THREAD_PRIORITY_STOP_EXIT     1
#define  CME_THREAD_PRIORITY_STOP_ENTRY    2
#define  CME_THREAD_PRIORITY_PSTATE_DB     3
#define  CME_THREAD_PRIORITY_PSTATE_PMCR   4
#if TEST_ONLY_BCE_IRR
    #define  CME_THREAD_PRIORITY_BCE_IRR       30
#endif

uint8_t  G_kernel_stack[KERNEL_STACK_SIZE];

uint8_t  G_p9_cme_stop_exit_thread_stack[CME_THREAD_STACK_SIZE_STOP_EXIT];
uint8_t  G_p9_cme_stop_enter_thread_stack[CME_THREAD_STACK_SIZE_STOP_ENTRY];
uint8_t  G_p9_cme_db_thread_stack[CME_THREAD_STACK_SIZE_PSTATE_DB];
uint8_t  G_p9_cme_pmcr_thread_stack[CME_THREAD_STACK_SIZE_PSTATE_PMCR];
#if TEST_ONLY_BCE_IRR
    uint8_t  G_p9_cme_bce_irr_thread_stack[CME_THREAD_STACK_SIZE_BCE_IRR];
#endif

PkThread G_p9_cme_stop_exit_thread;
PkThread G_p9_cme_stop_enter_thread;
PkThread G_p9_cme_db_thread;
PkThread G_p9_cme_pmcr_thread;
#if TEST_ONLY_BCE_IRR
    PkThread G_p9_cme_bce_irr_thread;
#endif

int
main(int argc, char** argv)
{
    // Initializes kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize((PkAddress)G_kernel_stack,
                  KERNEL_STACK_SIZE,
                  0,
                  PPE_TIMEBASE_HZ);

    PK_TRACE("Kernel init completed");

    // reading header attributes and initialize the queued scom mode
    cmeHeader_t* pCmeImgHdr = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
    G_cme_stop_record.header_flags = pCmeImgHdr->g_cme_mode_flags;

    if (G_cme_stop_record.header_flags & QUEUED_SCAN_DISABLE)
    {
        out32(CME_LCL_LMCR_CLR, BITS32(8, 2));
    }
    else
    {
        out32(CME_LCL_LMCR_OR, BITS32(8, 2));
    }

#if defined(USE_CME_QUEUED_SCOM) && defined(USE_PPE_IMPRECISE_MODE)
    out32(CME_LCL_LMCR_OR, BITS32(8, 2));
#endif

    // Unified interrupt handler checks
    if (IDX_PRTY_LVL_DISABLED != (NUM_EXT_IRQ_PRTY_LEVELS - 1))
    {
        PK_TRACE_ERR("ERROR: IDX_PRTY_LVL_DISABLED(=%d)!=NUM_EXT_IRQ_PRTY_LEVELS(=%d)-1. HATL_CME!",
                     IDX_PRTY_LVL_DISABLED, NUM_EXT_IRQ_PRTY_LEVELS);
        PK_PANIC(CME_UIH_DISABLED_NOT_LAST_LVL);
    }

    if (IRQ_VEC_PRTY_CHECK != 0xFFFFFFFFFFFFFFFF)
    {
        PK_TRACE_ERR("ERROR: IRQ_VEC_PRTY_CHECK=0x%08x%08x Should Be All Ones. HALT CME!",
                     IRQ_VEC_PRTY_CHECK);
        PK_PANIC(CME_UIH_NOT_ALL_IN_PRTY_GROUP);
    }

    // Initialize the thread control block for G_p9_cme_stop_exit_thread
    pk_thread_create(&G_p9_cme_stop_exit_thread,
                     (PkThreadRoutine)p9_cme_stop_exit_thread,
                     (void*)NULL,
                     (PkAddress)G_p9_cme_stop_exit_thread_stack,
                     (size_t)CME_THREAD_STACK_SIZE_STOP_EXIT,
                     (PkThreadPriority)CME_THREAD_PRIORITY_STOP_EXIT);

    PK_TRACE_BIN("G_p9_cme_stop_exit_thread",
                 &G_p9_cme_stop_exit_thread,
                 sizeof(G_p9_cme_stop_exit_thread));

    // Initialize the thread control block for G_p9_cme_stop_enter_thread
    pk_thread_create(&G_p9_cme_stop_enter_thread,
                     (PkThreadRoutine)p9_cme_stop_enter_thread,
                     (void*)NULL,
                     (PkAddress)G_p9_cme_stop_enter_thread_stack,
                     (size_t)CME_THREAD_STACK_SIZE_STOP_ENTRY,
                     (PkThreadPriority)CME_THREAD_PRIORITY_STOP_ENTRY);

    PK_TRACE_BIN("G_p9_cme_stop_enter_thread",
                 &G_p9_cme_stop_enter_thread,
                 sizeof(G_p9_cme_stop_enter_thread));

    // Initialize thread control blocks for the threads
    pk_thread_create( &G_p9_cme_db_thread,
                      (PkThreadRoutine)p9_cme_pstate_db_thread,
                      (void*)NULL,
                      (PkAddress)G_p9_cme_db_thread_stack,
                      (size_t)CME_THREAD_STACK_SIZE_PSTATE_DB,
                      (PkThreadPriority)CME_THREAD_PRIORITY_PSTATE_DB);

    PK_TRACE_BIN("G_p9_cme_db_thread",
                 &G_p9_cme_db_thread,
                 sizeof(G_p9_cme_db_thread));

    // Initialize thread control blocks for the threads
    pk_thread_create( &G_p9_cme_pmcr_thread,
                      (PkThreadRoutine)p9_cme_pstate_pmcr_thread,
                      (void*)NULL,
                      (PkAddress)G_p9_cme_pmcr_thread_stack,
                      (size_t)CME_THREAD_STACK_SIZE_PSTATE_PMCR,
                      (PkThreadPriority)CME_THREAD_PRIORITY_PSTATE_PMCR);

    PK_TRACE_BIN("G_p9_cme_pmcr_thread",
                 &G_p9_cme_pmcr_thread,
                 sizeof(G_p9_cme_pmcr_thread));

#if TEST_ONLY_BCE_IRR

    if ((G_bce_irr.enable = in32(CME_LCL_FLAGS) & FLAG_BCE_IRR_ENABLE))
    {
        // Initialize thread control blocks for the threads
        pk_thread_create( &G_p9_cme_bce_irr_thread,
                          (PkThreadRoutine)bce_irr_run,
                          (void*)NULL,
                          (PkAddress)G_p9_cme_bce_irr_thread_stack,
                          (size_t)CME_THREAD_STACK_SIZE_BCE_IRR,
                          (PkThreadPriority)CME_THREAD_PRIORITY_BCE_IRR);

        PK_TRACE_BIN("G_p9_cme_bce_irr_thread",
                     &G_p9_cme_bce_irr_thread,
                     sizeof(G_p9_cme_bce_irr_thread));
    }

#endif

    // Make G_p9_cme_stop_exit_thread runnable
    pk_thread_resume(&G_p9_cme_stop_exit_thread);

    // Make G_p9_cme_stop_enter_thread runnable
    pk_thread_resume(&G_p9_cme_stop_enter_thread);

    // Make G_p9_cme_pstate_thread runnable
    pk_thread_resume(&G_p9_cme_db_thread);

    // Make G_p9_cme_pstate_thread runnable
    pk_thread_resume(&G_p9_cme_pmcr_thread);

#if TEST_ONLY_BCE_IRR

    if (G_bce_irr.enable)
    {
        // Make G_p9_cme_bce_irr_thread runnable
        pk_thread_resume(&G_p9_cme_bce_irr_thread);
    }

#endif

    PK_TRACE("Launching threads");

    ppe42_app_ctx_set(0);

    // Start running the highest priority thread.
    // This function never returns
    pk_start_threads();

    return 0;
}
