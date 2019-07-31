/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/nv_main.c $              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
// *! FILENAME    : nv_main.c
// *! TITLE       :
// *! DESCRIPTION : NVDL Main
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// mbs19021900 |mbs     | Added checking code for p10 ppe
// ------------|--------|-------------------------------------------------------
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

#include "ppe_com_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"


// Thread/Kernel Stacks: memory allocated by the linker (link_ioo.cmd) at the end of the RAM.
// We could just dynamically allocate the stacks here, but allocating in the linker allows us to run some checks on the stack.
// These constants must match the size allocated in link_ioo.cmd.
#define KERNEL_STACK_SIZE   128
//#define NV_THREAD_STACK_SIZE  512
extern uint8_t _kernel_stack_start;
uint8_t* G_kernel_stack = &_kernel_stack_start;

//extern uint8_t _io_thread_stack0_start;
//uint8_t *G_nv_thread_stack = &_io_thread_stack0_start;
//PkThread    G_nv_thread;
void nv_thread(void* arg);


// The main function is called by the boot code (after initializing some registers)
int main(int argc, char** argv)
{

    // Initialize kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize((PkAddress)G_kernel_stack,
                  KERNEL_STACK_SIZE,
                  0,                           // initial_timebase
                  PK_BASE_FREQ_HZ);            // timebase_frequency_hz

    // Enable External & Timer Interrupts
    //asm volatile ("sync");
    //or_msr(MSR_EE);

    /*
        //Initialize the thread control block for G_nv_thread
        pk_thread_create(&G_nv_thread,
                          (PkThreadRoutine)nv_thread,
                          (void*)NULL,
                          (PkAddress)G_nv_thread_stack,
                          (size_t)NV_THREAD_STACK_SIZE,
                          (PkThreadPriority)1);

        //Make G_nv_thread runnable
        pk_thread_resume(&G_nv_thread);
    */
    // Call NV main()
    nv_thread(0);


    /*
        // Start running the highest priority thread.
        // This function never returns
        pk_start_threads();
    */

    return 0;
} //main


// NV DL code thread
void nv_thread(void* arg)
{
    int rc = 0;

    lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000001); // starting

    if ( rc == 0 )
    {
        // Write bits in DL bricks (bit 0 of address is write bit)
        ll_put(0x6cafd00f | 0x80000000, 0xf00dface);
        ll_put(0x7eebdaed | 0x80000000, 0xdeadbeef);
        ll_put(0x6fefabab | 0x80000000, 0xbabafefe);

        lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000002); // writes complete

        uint32_t result1 =  ll_get(0x6cafd00f);
        uint32_t result2 =  ll_get(0x7eebdaed);
        uint32_t result3 =  ll_get(0x6fefabab);

        // Check that we read back the data we wrote
        if (    ( result1 == 0xf00dface )
                && ( result2 == 0xdeadbeef )
                && ( result3 == 0xbabafefe ) )
        {
            lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000003); // pass
        }
        else
        {
            lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0xF0000003); // fail
            rc = 3;
        }
    }

    if ( rc == 0 )
    {
        msg_put(0xf00dface00090009);

        lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000004); // msg write complete

        while ( pk_irq_status_get(23) == 0 ); // poll on msg valid interrupt

        uint64_t result1 = msg_get();

        if ( result1 == 0xdeadbeef00070007 )
        {
            lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000005); // pass
        }
        else
        {
            lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0xF0000005); // pass
            rc = 5;
        }
    }

    // Loop forever, doing nothing
    uint16_t a = 0;

    while(1)
    {
        // PK_TRACE can take up to 4 parameters
        // (not including the format string)
        //PK_TRACE("NV thread seconds = %d", a);
        //pk_sleep(PK_WAIT_FOREVER);
        a++;
    }
} //nv_thread
