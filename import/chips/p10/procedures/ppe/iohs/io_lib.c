/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_lib.c $               */
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
// *! FILENAME    : io_lib.c
// *! TITLE       :
// *! DESCRIPTION : Common functions
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr19031300 |vbr     | Removed inlining on some set_gcr_addr_* functions.
// mbs19021900 |mbs     | Updated polling loop in ll_put
// mbs19021800 |mbs     | Replaced mmio functions with ll and msg functions for the dl ppe to use
// vbr18120400 |vbr     | Improved local put/get functions.
// vbr18111400 |vbr     | Updated set_fir function.
// vbr18101700 |vbr     | Added scaled_microsecond global.
// vbr18100200 |vbr     | set_fir no longer hangs the ppe but still doesn't set a FIR. Updated handling of servo_status.
// vbr18081701 |vbr     | Added some assumption checking
// vbr18062000 |vbr     | Updated set_fir to set the new ppe_error status bit.
// vbr18030500 |vbr     | Further performance enhancements based on changing the gcr packet format.
// vbr18030200 |vbr     | Performance enhancements for hw reg access functions.
// vbr18022200 |vbr     | HW435186: run_servo_ops checks (and saves) servo_status and has option to set FIR on error.
// mwh17110700 |mwh     | Add empty assembly instruction so this loop does not get optimized out
// mwh17101800 |mwh     | Put in endless loop inside fir function.  So we hang if fir is called
// vbr17110100 |vbr     | Removed gcr_port (only 1 port).
// vbr17092800 |vbr     | Removed abort checking from run_servo_ops.
// vbr17071801 |vbr     | Removed servo_queue_depth variable and using empty status bit instead
// vbr17062901 |vbr     | Switched from ServoResultToInt to TwosCompToInt.
// vbr17062801 |vbr     | Added img_addr() and switched mem_regs/img_regs to moving pointers and added _base pointers.
// vbr17062800 |vbr     | Moved last_thread_run from mem_regs into img_regs.
// vbr17062700 |vbr     | Increased to 8 IO threads and added img_regs.
// vbr17062100 |vbr     | Updated run_servo_ops and added wrappers to work with rx_servo_disable_result=1.
// vbr17062000 |vbr     | Corrected the servo_op queue empty check on an abort.
// vbr17061400 |vbr     | Added new return codes and updated comments.
// vbr17061200 |vbr     | Check abort in run_servo_ops; don't check for results in first loop.
// vbr17051801 |vbr     | Removed recal bit from servo op and added queue input.
// vbr17051800 |vbr     | Remove IOF code.
// vbr17042500 |vbr     | Added IOO thread support
// vbr17041700 |vbr     | Added correct registers to run_servo_ops.
// vbr17041200 |vbr     | Added recal_bit to run_servo_ops.
// vbr17030300 |vbr     | First pass at a function for using a servo_op queue.
// vbr17020600 |vbr     | Moved manual servo op into its own file
// vbr17011800 |vbr     | Fix for HW393271 - don't self-seed during servo if DFE2-12 is disabled.
// vbr17011200 |vbr     | Added gcr_wr_raw.
// vbr17010800 |vbr     | Manual servo op: no longer moving integ_fine_gain even/odd together
// vbr17010400 |vbr     | Manual servo op: filter depth and change count are configurable
// vbr16120600 |vbr     | Manual servo op: set integ_fine_gain to mid-scale before doing CM coarse
// vbr16111400 |vbr     | Added ap_1011, ap_0011 servos to manual_servo_op.
// vbr16102800 |vbr     | Added manual_servo_op functions to work around IOO DD1 issues.
// vbr16102500 |vbr     | Split recal filter and self-seed into seperate inputs to run_servo_op
// vbr16101900 |vbr     | Added global variable to indicate the final thread in the round robin chain.
// vbr16082500 |vbr     | Converted some functions to macros
// vbr16081800 |vbr     | Moved some functions from eo_common to io_lib (and renamed some).
// vbr16070700 |vbr     | Removed deprecated put/get; minor stack/code size optimizations
// vbr16070100 |vbr     | Removed RMW option from put_ptr_int (only does RMW).
// vbr16062800 |vbr     | Optimization
// mbs16062400 |mbs     | Added gcr_addr struct
// mbs16062400 |mbs     | Added put_ptr, put_ptr_fast, and get_ptr functions
// vbr16050500 |vbr     |- Moved mem_regs and various functions from eo_common to io_lib
// vbr16050300 |vbr     |- Added lcl_get()
// mbs16040800 |mbs     |- Added instance parm to mmio_put and mmio_get, and adjusted bit fields
// -----------------------------------------------------------------------------

#include "io_lib.h"
#include "pk.h"

#include "servo_ops.h"

#include "ppe_img_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


////////////////////////////////////////////////////////////////////////////////////////////
// Mem Regs: 1KB section of memory allocated by the linker (link_ioo.cmd) in the RAM.
// It is actually max_io_threads x 1KB sections (1 per thread/bus).
// See link_ioo.cmd for actual offset addresses.
// Using a uint16_t* so indexed 2B at a time. The array _size could be calculated using the linker symbols, but hard code it instead.
// Marked as volatile so always accesses SRAM instead of local register copy.
////////////////////////////////////////////////////////////////////////////////////////////
volatile uint16_t* mem_regs_u16 = &_mem_regs0_start;
volatile uint16_t* mem_regs_u16_base = &_mem_regs0_start;

////////////////////////////////////////////////////////////////////////////////////////////
// FW Regs: 8B section of memory allocated by the linker (link_ioo.cmd) in the RAM.
// It is actually max_io_threads x 8B (1 per thread/bus).
// See link_ioo.cmd for actual offset addresses.
// Using a uint16_t* so indexed 2B at a time. The array _size could be calculated using the linker symbols, but hard code it instead.
// Marked as volatile so always accesses SRAM instead of local register copy.
////////////////////////////////////////////////////////////////////////////////////////////
volatile uint16_t* fw_regs_u16 = &_fw_regs0_start;
volatile uint16_t* fw_regs_u16_base = &_fw_regs0_start;

////////////////////////////////////////////////////////////////////////////////////////////
// Img Regs: 16B section of memory allocated by the linker (link_ioo.cmd) in the RAM.
// See link_ioo.cmd for actual offset address.
// Using a uint16_t* so indexed 2B at a time. The array _size could be calculated using the linker symbols, but hard code it instead.
// Marked as volatile so always accesses SRAM instead of local register copy.
////////////////////////////////////////////////////////////////////////////////////////////
volatile uint16_t* img_regs_u16 = &_img_regs_start;


////////////////////////////////////////////////////////////////////////////////////////////
// Thread Barrier Semaphore - 1 for all threads
////////////////////////////////////////////////////////////////////////////////////////////
#if PK_THREAD_SUPPORT
    PkSemaphore thread_barrier;
    int final_thread;  // Indicates the final thread in the round robin chain
#endif


////////////////////////////////////////////////////////////////////////////////////////////
// SLEEP & WAIT FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////

// Saved value of a scaled microsecond to reduce operations in some places.
// Use u32 instead of PkInterval (u64) since this will always be less than 2^32.
uint32_t scaled_microsecond; //PkInterval

#if PK_THREAD_SUPPORT
// Sleep the thread by blocking on the semaphore - allows other threads to run. Takes current thread as a parameter.
// This can not be inlined since the if...else... requires that it refer to its own address.
// If left as static inline in the header, the code gets replicated (for each object) but not inlined.
void io_sleep(int thread)
{
    if (thread != final_thread)
    {
        // If not the final thread in the round robin chain, pend on the thread barrier semaphore.
        pk_semaphore_pend(&thread_barrier, PK_WAIT_FOREVER);
    }
    else     //thread==final_thread
    {
        // The final thread in the round robin chain does not pend, instead it releases the semaphore for the
        // higher priority threads; it gets preempted since it is lowest priority and runs when they are all blocking.
        // This also work (inefficiently) in the case where there is only a single thread.
        pk_semaphore_release_all(&thread_barrier);
    }

    // Set the pointers for the current thread before returning
    set_pointers(thread);

#if IO_DISABLE_DEBUG == 0
    // Debug info on the current thread running
    img_field_put(ppe_current_thread, thread);
#endif
}//io_sleep

// Wait for at least X time by sleeping.
// Note that with threading we could just sleep the thread for the desired interval, but that would break our controlled
// round-robin scheduling since a high priority thread would immediately resume running when the timer expires.
// The timer on the PPE42 is a 32-bit decrement counter that underflows from 0 to 0xfffffffful; however, we do not need to handle
// that since we use the pk_timebase_get() (which returns an incrementing u64 timebase) and the kernel manages the underflowing.
// To manage that underflow, the MSR[EE] must be set to enable external and timer interrupts.
void io_wait(int thread, PkInterval wait_time)
{
    PkTimebase end_time = pk_timebase_get() + PK_INTERVAL_SCALE(wait_time);

    // Loop on a spin/sleep until pass the min time
    do
    {
        io_sleep(thread);
    }
    while (pk_timebase_get() < end_time);
} //io_wait
#endif //PK_THREAD_SUPPORT


////////////////////////////////////////////////////////////////////////////////////////////
// SERVO OP FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////

// Run a list of servo ops and return the results in an array (2's complement integers).
// Return value indicates if there was an error reported by the servo status.
// Can disable the pushing (and thus reading and returning) of results to improve speed.
// Can disable the setting of the FIR on a servo error if want to handle that in calling function.
PK_STATIC_ASSERT(rx_servo_op_queue0_startbit == rx_servo_op_queue1_startbit);
PK_STATIC_ASSERT(rx_servo_op_queue0_endbit == rx_servo_op_queue1_endbit);
int run_servo_ops_base(t_gcr_addr* gcr_addr, unsigned int queue, unsigned int num_ops, uint16_t* servo_ops,
                       int32_t* results, bool results_enabled, bool set_fir_on_error)
{
    unsigned int i;
    unsigned int ops_submitted = 0;
    unsigned int ops_done = 0;
    unsigned int servo_op_queue_addr = (queue == c_servo_queue_general) ? rx_servo_op_queue0_addr : rx_servo_op_queue1_addr;

    // Loop to submit servo ops and read results
    bool read_results = false; // Don't want to read results on first loop since haven't submitted anything as yet.

    do   //while (ops_done < num_ops);
    {
        // Read results when available in the result queue (if enabled); skip this the first loop iteration since haven't submitted anything as yet.
        if (read_results)
        {
            unsigned int results_available = get_ptr_field(gcr_addr, rx_servo_result_queue_full_space);

            if (results_available)
            {
                for (i = 0; i < results_available; i++)
                {
                    int32_t raw_result = get_ptr_field(gcr_addr, rx_servo_result_queue);
                    results[ops_done] = TwosCompToInt(raw_result, rx_servo_result_queue_width);
                    ops_done = ops_done + 1;
                }
            }
        }
        else     //!read_results (first_loop)
        {
            // After first loop, only read results if enabled.
            read_results = results_enabled;
        }

        // Submit ops (if needed) when space in the servo op queue
        if (ops_submitted < num_ops)
        {
            unsigned int servo_queue_space = get_ptr_field(gcr_addr, rx_servo_op_queue_empty_space);

            while ( (ops_submitted < num_ops) && (servo_queue_space != 0) )
            {
                put_ptr(gcr_addr, servo_op_queue_addr, rx_servo_op_queue0_startbit, rx_servo_op_queue0_endbit, servo_ops[ops_submitted],
                        fast_write);
                ops_submitted = ops_submitted + 1;
                servo_queue_space = servo_queue_space - 1;
            }
        }
        else if (!results_enabled)
        {
            // If results aren't enabled, we start checking for the servo op queue to be empty only after submitting all servo ops.
            // Once it is empty, all the servos are done running and we can set ops_done=num_ops so that the loop exits.
            int servo_queue_empty = get_ptr_field(gcr_addr, rx_servo_op_queue_empty);

            if (servo_queue_empty)
            {
                ops_done = num_ops;
            }
        }

        // Sleep if still waiting for results
        if (ops_done < num_ops)
        {
#if PK_THREAD_SUPPORT
            io_sleep(get_gcr_addr_thread(gcr_addr));
#else
            io_spin_us(polling_interval_us);
#endif
        }
    }
    while (ops_done < num_ops);

    // Once done running all the servo ops, check and handle the servo status and return rc_warning or rc_no_error.
    // status0 is the first servo_op that had an error.
    // status1 is the information about the error.
    int servo_status1 = get_ptr_field(gcr_addr, rx_servo_status1);

    if (servo_status1 != 0)   // Error reported by servo status.
    {
        // Copy the status into the mem_regs so calling function can handle it as needed.
        int servo_status0 = get_ptr_field(gcr_addr, rx_servo_status0);
        mem_pg_field_put(ppe_servo_status0, servo_status0);
        mem_pg_field_put(ppe_servo_status1, servo_status1);

        // Set the FIR.
        if (set_fir_on_error)
        {
            set_fir(fir_code_warning);
        }
        else
        {
            // If not setting the FIR we expect there may be an error (VGA).  Clear the servo status in HW since we don't consider this a real error.
            put_ptr_field_fast(gcr_addr, rx_reset_servo_status, 0b1); // strobe bit
        }

        return rc_warning;
    }
    else
    {
        // No error reported by servo status
        return rc_no_error;
    }
}//run_servo_ops_base


// Wrapper function for when do not want results to be pushed.
// Includes the register writes to disable results and then re-enable them when done (since that is the default setting).
// Can disable the setting of the FIR on a servo error if want to handle that in calling function.
int run_servo_ops_with_results_disabled_base(t_gcr_addr* gcr_addr, unsigned int queue, unsigned int num_ops,
        uint16_t* servo_ops, bool set_fir_on_error)
{
    bool results_enabled = false;
    int32_t* results = NULL;

    put_ptr_field(gcr_addr, rx_servo_disable_result, 0b1, read_modify_write);
    int status = run_servo_ops_base(gcr_addr, queue, num_ops, servo_ops, results, results_enabled, set_fir_on_error);
    put_ptr_field(gcr_addr, rx_servo_disable_result, 0b0, read_modify_write);

    return status;
} //run_servo_ops_with_results_disabled_base


////////////////////////////////////////////////////////////////////////////////////////////
// GCR ADDRESS FORMING FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////

// These functions are setup to interace with a "t_gcr_addr" structure which is only infrequently updated.
// A pointer to this structure can be passed down the call stack and provide all the necessary information
// to put and get functions as well as precalculated masks

// This is called once at the start of a thread to set up the gcr_addr struct
#if PK_THREAD_SUPPORT
    void set_gcr_addr(t_gcr_addr* gcr_addr, int thread, int bus_id, int reg_id, int lane)
#else
    void set_gcr_addr(t_gcr_addr* gcr_addr,             int bus_id, int reg_id, int lane)
#endif
{
#if PK_THREAD_SUPPORT
    gcr_addr->thread = thread;
#endif
    gcr_addr->bus_id = bus_id;
    gcr_addr->reg_id = reg_id;
    gcr_addr->lane = lane;

    gcr_addr->gcr_read_packet =
        0x80002000 // base_gcr_msg: StartBit=1, UserProgrammable=1
        | (bus_id    << (31 - 10))
        | (reg_id    << (31 - 16))
        | (lane      << (31 - 31));

    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x08000000;
};

// Limited use in interrupt handler and supervisor thread
void set_gcr_addr_bus_id(t_gcr_addr* gcr_addr, int bus_id)
{
    gcr_addr->bus_id = bus_id;
    gcr_addr->gcr_read_packet  =  (gcr_addr->gcr_read_packet & 0xf81fffff) |
                                  (bus_id    << (31 - 10));
    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x08000000;
}

// For switching between rx_group, tx_group, etc
void set_gcr_addr_reg_id(t_gcr_addr* gcr_addr, int reg_id)
{
    gcr_addr->reg_id = reg_id;
    gcr_addr->gcr_read_packet  =  (gcr_addr->gcr_read_packet & 0xffe07fff) |
                                  (reg_id    << (31 - 16));
    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x08000000;
}

// For setting the addressed lane in per-lane accesses
void set_gcr_addr_lane(t_gcr_addr* gcr_addr, int lane)
{
    gcr_addr->lane = lane;
    gcr_addr->gcr_read_packet  =  (gcr_addr->gcr_read_packet & 0xffffffe0) |
                                  (lane << (31 - 31));
    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x08000000;
}


////////////////////////////////////////////////////////////////////////////////////////////
// HW I/O FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////
// !!TODO!! - Assure that the I/O functions are atomic with interrupts

void ll_put(uint32_t addr, uint32_t data)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000210);

    (*lclmem_addr) =
        (uint64_t)addr << 32   //  0:31
        |  (uint64_t)data;        // 32:63

    // poll for clearing of address bits to determine completion
    uint64_t result = -1;

    do
    {
        result = (*lclmem_addr);
    }
    while ( (result & 0xffffffff00000000) != 0x0 );


    return;
}

uint32_t ll_get(uint32_t addr)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000210);

    (*lclmem_addr) =
        (uint64_t)addr << 32;  //  0:31

    // poll for clearing of address bits to determine completion
    uint64_t result = -1;

    do
    {
        result = (*lclmem_addr);
    }
    while ( (result & 0xffffffff00000000) != 0x0 );


    uint32_t r_data = (uint32_t)(result & 0xffffffff);
    return r_data; // 32 bits
    //return;
}

void msg_put(uint64_t data)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000220);

    (*lclmem_addr) = data;

    return;
}

uint64_t msg_get()
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000220);

    return (*lclmem_addr);
}





// This allows writing a raw GCR packet to the bus.
// Primarily meant as a workaround for the GCR interrupt packet not being ack'd.
void gcr_wr_raw(t_gcr_addr* gcr_addr, uint64_t packet)
{
    // Setup the pointer
    uint64_t volatile* lclmem_addr = (uint64_t*)gcr_port_addr;

    // wait on previous op while start bit is set but echo flag is not set
    while (((*lclmem_addr) & 0xF000000000000000) == 0x8000000000000000 );

    // send write op and exit
    (*lclmem_addr) = packet;
} //gcr_wr_raw


// Fast put where the packet is preformed and the data field uses all 16 bits so we just need to fill in the reg addr and 16-bit data.
// Orderng of this fuction is important to its performance. Modifying the function in anyway will change how it is compiled and performs.
void put_ptr_fast_int(t_gcr_addr* gcr_addr, uint32_t reg_addr, uint32_t data)
{
    // Setup the gcr peripheral pointer
    uint64_t volatile* lclmem_addr64 = (uint64_t*)gcr_port_addr;
    uint32_t volatile* lclmem_addr32 = (uint32_t*)gcr_port_addr;

    // Wait on previous op while start bit is set but echo flag or read response flag is not set. Satus bits are in upper word.
    while (((*lclmem_addr32) & 0xF0000000) == 0x80000000);

    // Data field is already shifted into correct bit position by wrapper function.
    uint32_t w_addr_data = reg_addr | data;

    uint64_t packet =
        ((uint64_t)gcr_addr->gcr_write_packet << 32) |
        w_addr_data;

    // send write op and exit
    (*lclmem_addr64) = packet;
} //put_ptr_fast_int


// Put where the packet is preformed. always does read-modify-write.
// Orderng of this fuction is important to its performance. Modifying the function in anyway will change how it is compiled and performs.
void put_ptr_int(t_gcr_addr* gcr_addr, uint32_t reg_addr, uint32_t and_mask, uint32_t data)
{
    // For a read-modify-write, first do a read of the register in question.
    // However we don't need to do a full get_ptr() because we don't care about shifting the
    // data around.
    uint64_t rd_packet =
        ((uint64_t)gcr_addr->gcr_read_packet << 32) |
        reg_addr;

    // Setup the gcr peripheral pointer
    uint64_t volatile* lclmem_addr64 = (uint64_t*)gcr_port_addr;
    uint32_t volatile* lclmem_addr32 = (uint32_t*)gcr_port_addr;

    // Wait on previous op while start bit is set but echo flag or read response flag is not set. Satus bits are in upper word.
    while (((*lclmem_addr32) & 0xF0000000) == 0x80000000);

    // Send Read Req packet
    (*lclmem_addr64) = rd_packet;

    // Partially prepare wr_packet while the read command is running.
    // This takes advantage of the read and write packets being the same except for the data field and read/write bit.
    uint64_t wr_packet = rd_packet | 0x0800000000000000;

    // poll for read response packet flag to indicate returned data
    uint64_t resp_packet = 0;

    do
    {
        resp_packet = (*lclmem_addr64);
    }
    while ( (resp_packet & 0x4000000000000000) == 0x0);

    // Mask out old data field and or in new data, then finish forming the packet.
    // Data field is already shifted into correct bit position by wrapper function.
    uint32_t w_data = (resp_packet & and_mask) | data;
    wr_packet = wr_packet | w_data;

    // write data back and exit
    (*lclmem_addr64) = wr_packet;
} //put_ptr_int


// Get where the packet is preformed.
// Orderng of this fuction is important to its performance. Modifying the function in anyway will change how it is compiled and performs.
uint32_t get_ptr_int(t_gcr_addr* gcr_addr, uint32_t reg_addr, uint32_t and_mask, uint32_t shift_amt)
{
    // Setup the gcr peripheral pointers
    uint64_t volatile* lclmem_addr64 = (uint64_t*)gcr_port_addr;
    uint32_t volatile* lclmem_addr32 = (uint32_t*)gcr_port_addr;

    // Wait on previous op while start bit is set but echo flag or read response flag is not set. Satus bits are in upper word.
    while (((*lclmem_addr32) & 0xF0000000) == 0x80000000);

    // Form the Read Req packet
    uint64_t packet =
        ((uint64_t)gcr_addr->gcr_read_packet << 32) |
        reg_addr;

    // Send Read Req packet
    (*lclmem_addr64) =  packet;

    // poll for read response packet flag to indicate returned data
    uint64_t result = 0;

    do
    {
        result = (*lclmem_addr64);
    }
    while ( (result & 0x4000000000000000) == 0x0);

    uint32_t r_data = ((uint32_t)(result & and_mask)) >> shift_amt;

    return r_data; // 16 bits
} //get_ptr_int


// PPE Local Register Access
void lcl_put_int(uint32_t reg_addr, uint32_t data)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000000 | reg_addr);
    (*lclmem_addr) = (uint64_t)data << 32;
}

uint32_t lcl_get_int(uint32_t reg_addr, uint32_t shift)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000000 | reg_addr);
    uint32_t r_data = (uint32_t)((*lclmem_addr) >> 32);
    r_data = r_data >> shift;
    return r_data;
}


// Set the FIR bits and img_reg Error status
void set_fir(uint32_t fir_code)
{
#if IO_DISABLE_DEBUG == 0
    // Trap the error info if there isn't already a trapped error
    int error_valid = img_field_get(ppe_error_valid);

    if (!error_valid)
    {
        int state = mem_pg_field_get(ppe_debug_state);
        img_field_put(ppe_error_state, state);

        int thread = img_field_get(ppe_current_thread);
        img_field_put(ppe_error_thread, thread);

        int lane = mem_pg_field_get(rx_current_cal_lane);
        img_field_put(ppe_error_lane, lane);

        img_bit_set(ppe_error_valid);
    }

#endif

    // Set the PPE FIR register
    uint64_t volatile* fir_set_addr = (uint64_t*)(0xC0000000 | scom_ppe_fir_set_lcl_addr);
    (*fir_set_addr) = (uint64_t)fir_code << 32;
} //set_fir
