/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/ioo_main.c $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
// *!---------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2016
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : ioo_main.c
// *! TITLE       :
// *! DESCRIPTION : IOO Main Code - first user code called by kernel.
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// vbr19040200 |vbr     | HW487712: Support to use uct_thread or ioo_thread.
// vbr19011500 |vbr     | Max number of threads changed from 8 to 5. Kernel stack size increased from 128B to 512B.
// vbr18120400 |vbr     | Set watchdog_select to correct value.
// vbr18112900 |vbr     | Added assumption assertions
// vbr18111300 |vbr     | Enable watchdog timer.
// vbr18101700 |vbr     | Set scaled_microsecond global to save operations later in code.
// vbr18101200 |vbr     | HW468390: Exception interrupts taken normally instead of promoted to machine check.
// vbr18101100 |vbr     | HW468390: Enable trap instructions (so they cause a halt).
// vbr18091200 |vbr     | Moved ioo_thread to its own file. Spawn a supervisor_thread as the last thread.
// vbr18082900 |vbr     | Added TX Zcal measurement call.
// vbr18082100 |vbr     | HW461233: updated some register from 20 to 24 lanes.
// vbr18081300 |vbr     | Xu Guang's test code added at end of main loop. Optimized by using gcr_addr.thread instead of thread for sleep() call.
// vbr18072400 |vbr     | Added power_up_lane_req/done (per-lane) loop.
// vbr18072000 |vbr     | HW456268: Updated for P10 where PPE runs at 250MHz (2GHz PAU clock divided by 8).
// vbr18062000 |vbr     | Clear ppe_error during initialization.
// vbr18032200 |vbr     | HW441209 & HW441991 fixes - only set dl_init/recal_done when request is from dl.
// vbr18030500 |vbr     | Moved set_gcr_addr_lane calls to potentially improve performance.
// vbr18030100 |vbr     | Speed optimizations. Aggregate dl_phy_run_lane and dl_phy_recal_req HW regs.
// vbr18011100 |vbr     | Auto-recal is now a per-lane setting.
// vbr17121400 |vbr     | Small change to make changing the width of io_reset_lane_req_0_19 and rx_run_dccal_0_19 easier.
// vbr17120100 |vbr     | Added lane reset functionality.
// vbr17112000 |vbr     | Added additional dc cal controls.
// vbr17110600 |vbr     | Added more debug states.
// vbr17110101 |vbr     | Removed ZCAL Thread (no longer run in its own thread).
// vbr17110100 |vbr     | Removed fw_gcr_port (only 1 port).
// vbr17103100 |vbr     | Moved hw_reg init into the main loop.
// vbr17101200 |vbr     | Added hw_regs init.
// vbr17092100 |vbr     | Added some debug states.
// vbr17090800 |vbr     | Added per-lane recal count used to run recal multiple times.  Updated to new 3 loop structure.
// vbr17090700 |vbr     | Switched to new register access wrapper functions.
// vbr17082500 |vbr     | Moved bus_id and gcr_port to fw_regs; added num_lanes to fw_regs.
// vbr17082100 |vbr     | Switched to using set/clr bits for phy_dl_init/recal_done; added abort check on recal_done clear.
// vbr17081500 |vbr     | Added rx_lane_busy set/clr around eo_main. Fixed setting of init_done.
// vbr17080800 |vbr     | Updated thread loop for P10 and new eo_main() functions.
// vbr17062801 |vbr     | Added img_addr() and switched mem_regs/img_regs to moving pointers.
// vbr17062800 |vbr     | Moved ppe_num_threads from mem_regs into img_regs.
// vbr17062700 |vbr     | Increased to 8 IO threads.
//-------------|--------|-------------------------------------------------------
// vbr17042700 |vbr     | Removed PHASE and DD switches (using PHASE=2, DD=2)
// vbr17042500 |vbr     | Enabled threading for IOO (including zcal thread).
// vbr17020600 |vbr     | Split IOO/NV into separate main files.
// vbr17011800 |vbr     | Phase 2: Lane X -> Lane X+1.
// vbr17011000 |vbr     | Removed phase 2 reduced filter depth since didn't improve much.
// vbr16092300 |vbr     | Phase 2: Reduce filter depth of fenced servo ops.
// vbr16072000 |vbr     | Using rx_lane_disabled.
// vbr16071400 |vbr     | Now use PK_BASE_FREQ_HZ for pk_init()
// vbr16071100 |vbr     | Some changes for eo_wai_us() to work
// vbr16062700 |vbr     | Switch to gcr_addr functions
// mbs16062400 |mbs     | Added gcr_addr struct
// vbr16052400 |vbr     | Added set_debug_state
// mwh16052400 |mwh     | removed -1 form ( lane < max_lanes-1) for hitting last lane
// vbr16042700 |vbr     | Added reading of bus_id
// vbr16042100 |vbr     | Removed unnecessary sentry/handshake
// mbs16040800 |mbs     | Added first NV build code with sample NV PRI writes and reads
// vbr16033000 |vbr     | Implemented more of IOF
// vbr16032900 |vbr     | Switched from work_regs_u32 to mem_regs_u16
// vbr16032300 |vbr     | Added power up of analog circuit
// vbr16021600 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"

// Thread function declarations
#include "ioo_thread.h"
#include "supervisor_thread.h"
#include "uct_thread.h"


// Thread/Kernel Stacks: memory allocated by the linker (link_ioo.cmd) at the end of the RAM.
// We could just dynamically allocate the stacks here, but allocating in the linker allows us to run some checks on the stack.
// These constants must match the size allocated in link_ioo.cmd.
#define KERNEL_STACK_SIZE      512
#define IO_THREAD_STACK_SIZE  1024
extern uint8_t _kernel_stack_start;
extern uint8_t _io_thread_stack0_start;
uint8_t* G_kernel_stack = &_kernel_stack_start;
uint8_t* G_io_thread_stack = &_io_thread_stack0_start;

// Constants for thread_id.  Have up to max_io_threads threads.
int thread_id[max_io_threads] = { 0, 1, 2, 3, 4 };
PK_STATIC_ASSERT(max_io_threads == 5);

// Thread handles
PkThread G_io_thread[max_io_threads];


///////////////////////////////////////////////////////
// MAIN
// The main function is called by the boot code
// after initializing some PPE registers.
///////////////////////////////////////////////////////
int main(int argc, char** argv)
{
    //set_debug_state(0x0099); // DEBUG - Main Start
    int thread;

    // Initialize the error status bit in the img_regs
    img_bit_clr(ppe_error_valid);

    // Read the required number of threads from the img_regs (do once to prevent potential mismatch bewtween loops)
    int io_threads = img_field_get(ppe_num_threads);
    final_thread = io_threads; // The IO threads have IDs [0, io_threads-1], the Supervisor thread has ID io_threads

    // Initialize kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize((PkAddress)G_kernel_stack,
                  KERNEL_STACK_SIZE,
                  0,                           // initial_timebase
                  PK_BASE_FREQ_HZ);            // timebase_frequency_hz

    // Calculate and save the scaled value of a microsecond to reduce operations later
    scaled_microsecond = (uint32_t)PK_INTERVAL_SCALE(PK_MICROSECONDS(1));

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Overriding some PPE settings (normally set by kernel boot code)
    // This is done within sync barriers to ensure proper ordering of operations
    asm volatile ("sync");

    // Enable External & Timer Interrupts (MSR_EE).
    // Enable Unmaskable Interupts (MSR_UIE) so all exception interrupts are taken normally instead
    // of being taken as a machine check.
    // Setting these may be unnecessary since the kernel sets them for thread context,
    // but I see no reason to not set them here before creating the threads.
    or_msr(MSR_EE | MSR_UIE);

    // Enable Trap Instructions so halt on trap instructions in exception handlers.
    // We need to do this because we define NO_INIT_DBCR0 which prevents the kernel from setting it.
    or_spr(SPRN_DBCR, DBCR_TRAP);

    // Enable the Watchdog Timer (timer 1) to halt the PPE on a timeout (no interrupt).
    // The watchdog_select (bits[0:3] of local register 0x100) is set to 1 to provide the longest timeout.
    // The WDT runs on the hang pulse (32ns) and it expires after 2^(23-watchdog_select) pulses.
    // TCR[DIE] is already set by kernel to enable the decrement counter interrupt for the timebase.
    // TCR[DS] is also already set by the kernel when using the hang pulse for the timebase.
    or_spr(SPRN_TCR, TCR_WP_1 | TCR_WRC_HALT);

    asm volatile ("sync");
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // As previously described, set watchdog_select=1 and fit_sel=0
    lcl_put(ppe_local_timer_sel_lcl_addr, ppe_local_timer_sel_width, 0x10);

    // Create Thread Barrier Semaphore
    pk_semaphore_create(&thread_barrier, 0, 0);

    // Initialize the thread control block for each IO thread.
    // Threads are created runnable but unmapped. resume() maps the thread so it is runnable.
    // Indexing G_io_thread requires a multiply (not a power-of-2 size: 48B), so use mult_int16 and pointer manipulation to avoid using __mulsi3.
    for (thread = 0; thread < io_threads; thread++)
    {
        int thread_offset = mult_int16(thread, sizeof(PkThread));
        pk_thread_create((PkThread*)((int)G_io_thread + thread_offset),
#ifdef UCT
                         (PkThreadRoutine)uct_thread,
#else
                         (PkThreadRoutine)ioo_thread,
#endif
                         (void*)&thread_id[thread],
                         (PkAddress)&G_io_thread_stack[thread * IO_THREAD_STACK_SIZE],
                         (size_t)IO_THREAD_STACK_SIZE,
                         (PkThreadPriority)thread);
        pk_thread_resume((PkThread*)((int)G_io_thread + thread_offset));
    }

    // Initialize the Supervisor thread after the IO threads (lowest priority)
    int thread_offset = mult_int16(thread, sizeof(PkThread));
    pk_thread_create((PkThread*)((int)G_io_thread + thread_offset),
                     (PkThreadRoutine)supervisor_thread,
                     (void*)&thread_id[thread],
                     (PkAddress)&G_io_thread_stack[thread * IO_THREAD_STACK_SIZE],
                     (size_t)IO_THREAD_STACK_SIZE,
                     (PkThreadPriority)thread);
    pk_thread_resume((PkThread*)((int)G_io_thread + thread_offset));

    // Start running the highest priority thread. This function never returns.
    pk_start_threads();

    return 0;
} //main


