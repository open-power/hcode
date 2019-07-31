/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/supervisor_thread.c $    */
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
// *! (C) Copyright International Business Machines Corp. 2018
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : supervisor_thread.c
// *! TITLE       :
// *! DESCRIPTION : Supervisor Thread Loop
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mbs19021900 |mbs     | Updated p10 dl ppe code to set work1 regs
// mbs19021800 |mbs     | Added test function for new p10 dl ppe
// vbr18020100 |vbr     | HW478618: Added zcal error status and updated handshakes to clear it.
// vbr18113000 |vbr     | Updated debug state and fixed thread locked and recal not run checks.
// vbr18112900 |vbr     | Added checking for thread lock and recal not run.
// vbr18111400 |vbr     | Update debug info (thread).
// vbr18111300 |vbr     | Clear WDT once per loop iteration.
// vbr18091200 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "supervisor_thread.h"

#include "io_tx_zcal.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"


/////////////////////////////////////////////////
// Time constants for periodic events
/////////////////////////////////////////////////
#define THREAD_LOCK_CHECK_PERIOD    PK_MILLISECONDS(100)
#define RECAL_NOT_RUN_CHECK_PERIOD  PK_MILLISECONDS(500)


////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Supervisor thread for per-PPE (super wrapper) tasks and housekeeping
////////////////////////////////////////////////////////////////////////////////////////////////////////
void supervisor_thread(void* arg)
{
    // Parse input parameters
    int* config = (int*)arg;
    int thread_id = config[0]; // config parameter 0 - the thread_id

    // Set the pointers for mem_regs and fw_regs to this thread's section
    set_pointers(thread_id);

#if IO_DISABLE_DEBUG == 0
    // Debug info on the current thread running
    img_field_put(ppe_current_thread, thread_id);
#endif

    // Just use a bus_id of 0 at initialization. Appropriate bus_id can be loaded from fw_regs when accessing a specific chiplet
    int bus_id = 0; //fw_field_get(fw_gcr_bus_id);

    // Form gcr_addr structure
    t_gcr_addr gcr_addr;
    set_gcr_addr(&gcr_addr, thread_id, bus_id, rx_group, 0); // RX lane 0

    // Initialize all elements to 0 in the previous loop count array used for thread locked detection
    uint16_t prev_thread_loop_cnt[max_io_threads] = {};

    // Read the number of threads from the img_regs. The IO threads have IDs [0, io_threads-1].
    int io_threads = img_field_get(ppe_num_threads);

    // Calculate intervals and set the time for the first error checks
    PkInterval thread_locked_check_interval = PK_INTERVAL_SCALE(THREAD_LOCK_CHECK_PERIOD);
    PkInterval recal_not_run_check_interval = PK_INTERVAL_SCALE(RECAL_NOT_RUN_CHECK_PERIOD);

    PkTimebase current_time = pk_timebase_get();
    PkTimebase thread_locked_check_time = current_time + thread_locked_check_interval;
    PkTimebase recal_not_run_check_time = current_time + recal_not_run_check_interval;


    /////////////////////
    // Supervisor Loop //
    /////////////////////
    while (true)
    {
        // Do not run loop  while fw_stop_thread is set; this is here for debug purposes only.
        // Also, mirror the setting as the status/handshake.
        int stop_thread = fw_field_get(fw_stop_thread);
        fw_field_put(fw_thread_stopped, stop_thread);

        if (stop_thread)
        {
            set_debug_state(0xF0FF); // DEBUG - Thread Stopped
        }
        else     //!fw_stop_thread
        {
            set_debug_state(0xF001); // DEBUG - Supervisor Thread Loop Start


            /////////////////////////////////////////////////
            // TX Z Cal
            /////////////////////////////////////////////////
            int tx_zcal_req  = img_field_get(ppe_tx_zcal_req);
            int tx_zcal_done = img_field_get(ppe_tx_zcal_done);

            if ( tx_zcal_req && !tx_zcal_done )
            {
                // Run zcal on a request.
                img_field_put(ppe_tx_zcal_busy_done_error_alias, 0b100); // Set busy and clear error (in case it was previously set)
                io_tx_zcal_meas(&gcr_addr);
                img_field_put(ppe_tx_zcal_busy_done_alias, 0b01); // Clear busy and set done
            }

            // If done is set but no longer seeing a request, clear the done bit (completes the handshake) and clear the error status.
            if ( !tx_zcal_req && tx_zcal_done )
            {
                img_field_put(ppe_tx_zcal_busy_done_error_alias, 0b000);
            }

            /////////////////////////////////////////////////
            // Check for DL PPE Requests
            /////////////////////////////////////////////////
            // TODO: This is a placeholder
            lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000001);

            if ( pk_irq_status_get(23) == 1 )
            {
                lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000002);
                msg_put(0xdeadbeef00070007);
                set_debug_state(0xF00A); // DEBUG - Message sent
            }
            else
            {
                lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0xF0000002);
            }


            /////////////////////////////////////////////////
            // Periodic Events
            // Get the current time once
            /////////////////////////////////////////////////
            current_time = pk_timebase_get();


            ////////////////////////////////
            // Check for Locked Threads
            ////////////////////////////////
            if (current_time > thread_locked_check_time)
            {
                set_debug_state(0xF008); // DEBUG - Check for Locked Threads

                // Update the time for the next check
                thread_locked_check_time = current_time + thread_locked_check_interval;

                // Loop through and check each thread
                int thread;

                for (thread = 0; thread < io_threads; thread++)
                {
                    // Get the old and new count
                    uint16_t new_count = mem_regs_u16_base_get(pg_base_addr(ppe_thread_loop_count_addr, thread), ppe_thread_loop_count_mask,
                                         ppe_thread_loop_count_shift);
                    uint16_t old_count = prev_thread_loop_cnt[thread];

                    // Save the new count for next time
                    prev_thread_loop_cnt[thread] = new_count;

                    // Set FIR if the count hasn't changed
                    if (old_count == new_count)
                    {
#if IO_DISABLE_DEBUG == 0
                        // If the error info isn't already set, set_fir() will write this thread's ID to the error info so need to override that.
                        int ppe_error_already_set = img_field_get(ppe_error_valid);
#else
                        int ppe_error_already_set = 1;
#endif
                        // Actually set the FIR
                        set_fir(fir_code_thread_locked);

                        // Overwrite error info with the correct thread
                        if (!ppe_error_already_set)
                        {
                            img_field_put(ppe_error_thread, thread);
                        }
                    } //if(old!=new)
                } //for(thread)
            } //if(time>check_time)


            ////////////////////////////////
            // Check for Recal Not Run
            ////////////////////////////////
            if (current_time > recal_not_run_check_time)
            {
                set_debug_state(0xF009); // DEBUG - Check for Recal Not Run

                // Update the time for the next check
                recal_not_run_check_time = current_time + recal_not_run_check_interval;

                // Loop through and check each thread
                int thread;

                for (thread = 0; thread < io_threads; thread++)
                {
                    // Get the vector and then clear it for next time
                    uint32_t recal_run_or_unused_0_23 =
                        (mem_regs_u16_base_get(pg_base_addr(rx_recal_run_or_unused_0_15_addr,  thread), rx_recal_run_or_unused_0_15_mask,
                                               rx_recal_run_or_unused_0_15_shift)  << 16) |
                        (mem_regs_u16_base_get(pg_base_addr(rx_recal_run_or_unused_16_23_addr, thread), rx_recal_run_or_unused_16_23_mask,
                                               rx_recal_run_or_unused_16_23_shift) << (16 - rx_recal_run_or_unused_16_23_width));

                    mem_regs_u16_base_put(pg_base_addr(rx_recal_run_or_unused_0_15_addr,  thread), rx_recal_run_or_unused_0_15_mask,
                                          rx_recal_run_or_unused_0_15_shift,  0);
                    mem_regs_u16_base_put(pg_base_addr(rx_recal_run_or_unused_16_23_addr, thread), rx_recal_run_or_unused_16_23_mask,
                                          rx_recal_run_or_unused_16_23_shift, 0);

                    // Adjust the vector based on the actual number of lanes in the group
                    int num_lanes = fw_regs_u16_base_get(fw_base_addr(fw_num_lanes_addr, thread), fw_num_lanes_mask, fw_num_lanes_shift);
                    uint32_t vec_mask = (0xFFFFFFFF >> num_lanes);
                    uint32_t recal_run_or_unused_0_31 = recal_run_or_unused_0_23 | vec_mask;

                    // Set FIR if there is a lane that recal was not run on
                    if (recal_run_or_unused_0_31 != 0xFFFFFFFF)
                    {
#if IO_DISABLE_DEBUG == 0
                        // Figure out the lane that wasn't recal
                        uint32_t lane_mask = 0x80000000;
                        int lane;

                        for (lane = 0; lane < num_lanes; lane++)
                        {
                            if ( (recal_run_or_unused_0_31 & lane_mask) == 0 )
                            {
                                mem_pg_field_put(rx_current_cal_lane, lane);
                                break;
                            }

                            lane_mask = (lane_mask >> 1);
                        }

                        // If the error info isn't already set, set_fir() will write this thread's ID to the error info so need to override that.
                        int ppe_error_already_set = img_field_get(ppe_error_valid);
#else
                        int ppe_error_already_set = 1;
#endif
                        // Actually set the FIR
                        set_fir(fir_code_recal_not_run);

                        // Overwrite error info with the correct thread
                        if (!ppe_error_already_set)
                        {
                            img_field_put(ppe_error_thread, thread);
                        }
                    } //if(!recal_run)
                } //for(thread)
            } //if(time>check_time)


            ///////////////////////////////////////////////////
            // Clear the Watchdog Timer (TSR[WIS])
            ///////////////////////////////////////////////////
            mtspr(SPRN_TSR, TSR_WIS); // TSR is write 1 to clear


            ///////////////////////////////////////////////////
            // End of Thread Loop
            ///////////////////////////////////////////////////
            set_debug_state(0xF00F); // DEBUG - Thread Loop End
        } //!fw_stop_thread


        ////////////////////////////////////////////////////////////////////////
        // Increment the thread loop count (for both active and stopped)
        ////////////////////////////////////////////////////////////////////////
        unsigned int thread_loop_cnt = mem_pg_field_get(ppe_thread_loop_count);
        thread_loop_cnt = thread_loop_cnt + 1;
        mem_pg_field_put(ppe_thread_loop_count, thread_loop_cnt);


        ////////////////////////////////////////////////////////////////////////
        // Yield to other threads at least once per thread loop
        ////////////////////////////////////////////////////////////////////////
        io_sleep(get_gcr_addr_thread(&gcr_addr));
    } //while (true)

} //ioo_thread
