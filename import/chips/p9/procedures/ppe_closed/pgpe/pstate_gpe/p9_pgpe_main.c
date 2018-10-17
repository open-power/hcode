/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_main.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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
#include "p9_pgpe_optrace.h"
#include "occhw_shared_data.h"
#include "p9_hcd_memmap_occ_sram.H"
#include "p9_hcd_memmap_base.H"

extern TraceData_t G_pgpe_optrace_data;

//
// G_pgpe_pstate_record contains all the global variables in one struct
// that are accessed/manipulated by PGPE. Here we statically initialize
// all the fields to zero, and also direct this struct to a special section
// which ends up at a fixed address.
PgpePstateRecord G_pgpe_pstate_record __attribute__((section (".dump_ptrs"))) =
{
    0,
    0,
    0,
    0,
    0,
    0,
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0},
    {0},
    {0},
    {0},
    0,
    0,
    {   {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
        {0, 0, 0}, {0, 0, 0}
    },
    0,
    0,
    0,
    0,
    {0},
    {0},
    {0},
    0, 0, 0, 0,
    0, 0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0, {0, 0, 0, 0, 0, 0},
    0,
    0,
    {0, 0, 0, 0}
};


//We define a global literal for these register addresses
//This way compiler put them in .sdata area, and the address
//can be loaded with one instruction using r13 as offset into
//sdata area. The change helped save about 448 bytes of code space.
//Note, some register's address were not moved to using global literals
//because in some cases they registers are accessed few times or they are
//used inside a loop. In both cases, either no code reduction was observed
//or resulted in code increase.
uint32_t G_OCB_QCSR = OCB_QCSR;
uint32_t G_OCB_OCCS2 = OCB_OCCS2;
uint32_t G_OCB_OCCFLG = OCB_OCCFLG;
uint32_t G_OCB_OCCFLG_OR = OCB_OCCFLG_OR;
uint32_t G_OCB_OCCFLG_CLR = OCB_OCCFLG_CLR;
uint32_t G_OCB_OCCFLG2 = OCB_OCCFLG2;
uint32_t G_OCB_OCCFLG2_CLR = OCB_OCCFLG2_CLR;
uint32_t G_OCB_OISR0_CLR = OCB_OISR0_CLR;
uint32_t G_OCB_OIMR0_OR = OCB_OIMR0_OR;
uint32_t G_OCB_OIMR1_OR = OCB_OIMR1_OR;
uint32_t G_OCB_OIMR0_CLR = OCB_OIMR0_CLR;
uint32_t G_OCB_OIMR1_CLR = OCB_OIMR1_CLR;


//
// Interrupt handlers for interrupts owned by PGPE
//
EXTERNAL_IRQ_TABLE_START
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_DEBUGGER
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_TRACE_TRIGGER
IRQ_HANDLER(p9_pgpe_irq_handler_occ_sgpe_cme_pvref_error, NULL) //OCCHW_IRQ_OCC_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PBA_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_SRT_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_GPE0_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_GPE1_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_GPE2_HALT
IRQ_HANDLER(p9_pgpe_irq_handler_occ_sgpe_cme_pvref_error, NULL) //OCCHW_IRQ_GPE3_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PPC405_HALT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_OCB_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_SPIPSS_ERROR
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_PPC405
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_GPE0
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_GPE1
IRQ_HANDLER(p9_pgpe_irq_handler_system_xstop, NULL) //OCCHW_IRQ_CHECK_STOP_GPE2
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_CHECK_STOP_GPE3
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_OCC_MALF_ALERT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_ADU_MALF_ALERT
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_EXTERNAL_TRAP
IRQ_HANDLER(p9_pgpe_irq_handler_occ_sgpe_cme_pvref_error, NULL)//OCCHW_IRQ_IVRM_PVREF_ERROR
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
IRQ_HANDLER(p9_pgpe_irq_handler_pcb_type1, NULL) //OCCHW_IRQ_PMC_PCB_INTR_TYPE1_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE2_PENDING
IRQ_HANDLER_DEFAULT            //OCCHW_IRQ_PMC_PCB_INTR_TYPE3_PENDING
IRQ_HANDLER(p9_pgpe_irq_handler_pcb_type4, NULL) //OCCHW_IRQ_PMC_PCB_INTR_TYPE4_PENDING
IRQ_HANDLER(p9_pgpe_irq_handler_occ_sgpe_cme_pvref_error, NULL) //OCCHW_IRQ_PMC_PCB_INTR_TYPE5_PENDING
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


//
// PGPE has two threads, Process and Actuate. We define their stack sizes, entry point, and
// control block here
//
#define  KERNEL_STACK_SIZE  512
#define  THREAD_PROCESS_STACK_SIZE  768
#define  THREAD_ACTUATE_STACK_SIZE  768

#define  PGPE_THREAD_PRIORITY_PROCESS_REQUESTS  1
#define  PGPE_THREAD_PRIORITY_ACTUATE_PSTATES   2

uint8_t  G_kernel_stack[KERNEL_STACK_SIZE];
extern uint32_t g_pgpe_timebase_hz __attribute__ ((section (".pgpe_image_header")));

//Thread Stacks
uint8_t  G_p9_pgpe_thread_process_requests_stack[THREAD_PROCESS_STACK_SIZE];
uint8_t  G_p9_pgpe_thread_actuate_pstates_stack[THREAD_ACTUATE_STACK_SIZE];

//Thread Control Block
PkThread G_p9_pgpe_thread_process_requests;
PkThread G_p9_pgpe_thread_actuate_pstates;

void __eabi()
{
}


//
// main
//
// This function is called after PK is done booting, and is the main point of
// entry for PGPE
//
int
main(int argc, char** argv)
{
#if (NIMBUS_DD_LEVEL != 0)
#define PVR_CONST (0x42090000 | (((NIMBUS_DD_LEVEL ) / 10) << 8) | (NIMBUS_DD_LEVEL % 10))
#elif (CUMULUS_DD_LEVEL != 0)
#define PVR_CONST (0x42090800 | (((CUMULUS_DD_LEVEL ) / 10) << 8) | (CUMULUS_DD_LEVEL % 10))
#elif (AXONE_DD_LEVEL != 0)
#define PVR_CONST (0x42091000 | (((AXONE_DD_LEVEL ) / 10) << 8) | (AXONE_DD_LEVEL % 10))
#else
#define PVR_CONST 0
#endif

    if(mfspr(287) != PVR_CONST)
    {
        PGPE_TRACE_AND_PANIC(PGPE_BAD_DD_LEVEL);
    }

    uint32_t timebase = g_pgpe_timebase_hz;

    if(0 == timebase)
    {
        timebase = PPE_TIMEBASE_HZ;
    }

    // Initializes kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize((PkAddress)G_kernel_stack,
                  KERNEL_STACK_SIZE,
                  0,
                  timebase);

    // Read OCC_SCRATCH[PGPE_DEBUG_TRAP_ENABLE]
    uint32_t occScr2 = in32(G_OCB_OCCS2);

    if (occScr2 & BIT32(PGPE_DEBUG_TRAP_ENABLE))
    {
        PK_TRACE_DBG("MAIN: Debug trap detected");
        asm volatile ("trap");
    }

    PK_TRACE("Clear OCC LFIR[gpe2_halted] and OISR[gpe2_error and xstop] bits upon PGPE boot");
    GPE_PUTSCOM(OCB_OCCLFIR_AND, ~BIT64(24));
    out32(G_OCB_OISR0_CLR, (BIT32(7) | BIT32(15)));
    out32(G_OCB_OIMR0_CLR, (BIT32(7) | BIT32(15)));

    // Initialize the thread control block for G_p9_pgpe_thread_process_requests
    pk_thread_create(&G_p9_pgpe_thread_process_requests,
                     (PkThreadRoutine)p9_pgpe_thread_process_requests,
                     (void*)NULL,
                     (PkAddress)G_p9_pgpe_thread_process_requests_stack,
                     (size_t)THREAD_PROCESS_STACK_SIZE,
                     (PkThreadPriority)PGPE_THREAD_PRIORITY_PROCESS_REQUESTS);

    PK_TRACE_BIN("G_p9_pgpe_thread_process_requests",
                 &G_p9_pgpe_thread_process_requests,
                 sizeof(G_p9_pgpe_thread_process_requests));

    // Initialize the thread control block for G_p9_pgpe_thread_actuate_pstates
    pk_thread_create(&G_p9_pgpe_thread_actuate_pstates,
                     (PkThreadRoutine)p9_pgpe_thread_actuate_pstates,
                     (void*)NULL,
                     (PkAddress)G_p9_pgpe_thread_actuate_pstates_stack,
                     (size_t)THREAD_ACTUATE_STACK_SIZE,
                     (PkThreadPriority)PGPE_THREAD_PRIORITY_ACTUATE_PSTATES);

    PK_TRACE_BIN("G_p9_pgpe_thread_actuate_pstates",
                 &G_p9_pgpe_thread_actuate_pstates,
                 sizeof(G_p9_pgpe_thread_actuate_pstates));

    // Make G_p9_pgpe_thread pstates_update runnable
    pk_thread_resume(&G_p9_pgpe_thread_process_requests);
    pk_thread_resume(&G_p9_pgpe_thread_actuate_pstates);

    //PGPE Header Init
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

    PK_TRACE_DBG("Init from Global Pstate Parameter Block");
    p9_pgpe_gppb_init();

#if GEN_PSTATE_TBL
    PK_TRACE_DBG("Generating Pstate Tables to memory");
    p9_pgpe_gen_pstate_info();
#endif

    PK_TRACE_DBG("Setup FIT(Fixed-Interval Timer)");
    p9_pgpe_fit_init();

    PK_TRACE_DBG("Init all pstate data to default values");
    p9_pgpe_pstate_init();

    PK_TRACE_DBG("Setup IRQs");
    p9_pgpe_irq_init();

    g_oimr_override |= BIT64(49);
    out32(G_OCB_OIMR1_OR, BIT32(17)); //Disable PCB_INTR_TYPE4

    p9_pgpe_optrace_init();

    OSD_PTR->occ_comp_shr_data.gpe2_data.gpe2_sram_region_start = OCC_SRAM_PGPE_BASE_ADDR;
    OSD_PTR->occ_comp_shr_data.gpe2_data.gpe2_image_header_addr = OCC_SRAM_PGPE_BASE_ADDR + PGPE_HEADER_IMAGE_OFFSET;
    OSD_PTR->occ_comp_shr_data.gpe2_data.gpe2_debug_header_addr = OCC_SRAM_PGPE_BASE_ADDR + SGPE_DEBUG_PTRS_OFFSET;

    // Start running the highest priority thread.
    // This function never returns
    pk_start_threads();

    return 0;
}
