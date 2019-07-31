/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/ioo_thread.c $           */
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
// *! FILENAME    : ioo_thread.c
// *! TITLE       :
// *! DESCRIPTION : IOO Thread Loop
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mwh19042600 |mwh     | HW490057 Change order of excution put "lane power up" after DCcal -- meeting
// vbr19040200 |vbr     | HW487712: Remove ucontroller_test from primary image.
// vbr18121400 |vbr     | HW474927: Add config to enable/disable lane copy in init.
// vbr18121200 |vbr     | Clear recal_abort sticky after handshake instead of at begining of eo_main_recal.
// vbr18112900 |vbr     | Added thread loop count and recal tracking for error detection.
// gap18112800 |gap     | Remove tx_bist_done bit; use dccal done instead.
// vbr18111400 |vbr     | Update debug info (thread). Fixed potential addressing bug.
// gap18102200 |gap     | Set tx_bist_done bit
// vbr18091200 |vbr     | Moved ioo_thread to its own file. Moved Zcal meas to new supervisor thread.
//-------------|--------|-------------------------------------------------------
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

#include "ioo_thread.h"

#include "eo_common.h"
#include "eo_main.h"
#include "io_init_and_reset.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

#include "eo_bist_init_ovride.h"

// Assumption Checking
PK_STATIC_ASSERT(io_reset_lane_done_16_23_startbit == 0);
PK_STATIC_ASSERT(rx_dccal_done_16_23_startbit == 0);
PK_STATIC_ASSERT(rx_recal_run_or_unused_16_23_startbit == 0);


////////////////////////////////////////////////////////////////////////////////////////////////////////
//  IOO thread for RX IO Cal
////////////////////////////////////////////////////////////////////////////////////////////////////////
void ioo_thread(void* arg)
{
    // Parse input parameters
    int* config = (int*)arg;
    int thread = config[0]; // config parameter 0 - the thread_id

    // Set the pointers for mem_regs and fw_regs to this thread's section
    set_pointers(thread);

#if IO_DISABLE_DEBUG == 0
    // Debug info on the current thread running
    img_field_put(ppe_current_thread, thread);
#endif

    // Read bus_id from fw_regs - must match the hardware rx_bus_id & tx_bus_id (they must be the same).
    int bus_id   = fw_field_get(fw_gcr_bus_id);

    // Form gcr_addr structure
    t_gcr_addr gcr_addr;
    set_gcr_addr(&gcr_addr, thread, bus_id, rx_group, 0); // RX lane 0


    //////////////
    // IOO Loop //
    //////////////
    int num_lanes = fw_field_get(fw_num_lanes);
    int last_init_lane = -1; // Init not run on any lane as yet

    while (true)
    {
        // Do not run loop  while fw_stop_thread is set; this may be done when in an error condition and need to reset.
        // Also, mirror the setting as the status/handshake.
        int stop_thread = fw_field_get(fw_stop_thread);
        fw_field_put(fw_thread_stopped, stop_thread);

        if (stop_thread)
        {
            set_debug_state(0x00FF); // DEBUG - Thread Stopped

            // Reset last_init_lane when stopping the thread (assume bus is being reset)
            last_init_lane = -1;
        }
        else     //!fw_stop_thread
        {
            set_debug_state(0x0001); // DEBUG - Thread Loop Start

            // Will be looping through each lane checking for DL commands
            int lane;
            uint32_t lane_mask;

            /////////////////////////////////////////////////
            // INIT AND RUN BIST SEQ
            // Only initiated through correct work reg 1 setting
            /////////////////////////////////////////////////
            int hw_bist_init = lcl_get(scom_ppe_work1_lcl_addr, scom_ppe_work1_width);

            if ( hw_bist_init == 0x000CAFE)
            {
                eo_bist_init_ovride(&gcr_addr);
            }

            /////////////////////////////////////////////////
            // INIT the Hw Regs
            // Only initiated through mem_regs.
            /////////////////////////////////////////////////
            int hw_reg_init_req  = mem_pg_field_get(hw_reg_init_req);
            int hw_reg_init_done = mem_pg_field_get(hw_reg_init_done);

            if ( hw_reg_init_req && !hw_reg_init_done )
            {
                // Run init when have a request
                io_hw_reg_init(&gcr_addr);
                mem_pg_bit_set(hw_reg_init_done);
            }

            // If done is set but no longer seeing a request, clear the done bit (completes the handshake)
            if ( hw_reg_init_done && !hw_reg_init_req )
            {
                mem_pg_bit_clr(hw_reg_init_done);
            }


            /////////////////////////////////////////////////
            // Lane Reset
            // Only initiated through mem_regs.
            // Run on requested lanes that haven't run on.
            ////////////////////////////////////////////////
            set_debug_state(0x0007); // DEBUG - Lane Reset Loop Start
            uint32_t reset_lane_0_23 =
                (mem_pg_field_get(io_reset_lane_req_0_15)  << 16) |
                (mem_pg_field_get(io_reset_lane_req_16_23) << (16 - io_reset_lane_req_16_23_width));
            lane_mask = 0x80000000;

            for (lane = 0; lane < num_lanes; lane++)
            {
                // Check both request registers
                int reset_lane_enable = mem_pl_field_get(io_reset_lane_req,  lane) | (reset_lane_0_23 & lane_mask);
                int reset_lane_done   = mem_pl_field_get(io_reset_lane_done, lane);

                if ( reset_lane_enable && !reset_lane_done )
                {
                    // Set the current lane in the gcr_addr
                    set_gcr_addr_lane(&gcr_addr, lane);

                    // Run lane reset
                    io_reset_lane(&gcr_addr);

                    // Set done in both registers
                    mem_pl_bit_set(io_reset_lane_done, lane);

                    if (lane < 16)
                    {
                        mem_regs_u16_bit_set(pg_addr(io_reset_lane_done_0_15_addr), (lane_mask >> 16));
                    }
                    else     // lane>=16
                    {
                        mem_regs_u16_bit_set(pg_addr(io_reset_lane_done_16_23_addr), lane_mask);
                    }
                }

                // If done is set but no longer seeing a request, clear the done bit (completes the handshake)
                if ( reset_lane_done && !reset_lane_enable )
                {
                    mem_pl_bit_clr(io_reset_lane_done, lane);

                    if (lane < 16)
                    {
                        mem_regs_u16_bit_clr(pg_addr(io_reset_lane_done_0_15_addr), (lane_mask >> 16));
                    }
                    else     // lane>=16
                    {
                        mem_regs_u16_bit_clr(pg_addr(io_reset_lane_done_16_23_addr), lane_mask);
                    }
                }

                // Shift the lane mask for the next lane
                lane_mask = (lane_mask >> 1);
            } //for lane


            /////////////////////////////////////////////////
            // DC Cal
            // Only initiated through mem_regs.
            // Run on requested lanes that haven't run on.
            ////////////////////////////////////////////////
            set_debug_state(0x0002); // DEBUG - DC Cal Loop Start
            uint32_t run_dccal_0_23 =
                (mem_pg_field_get(rx_run_dccal_0_15)  << 16) |
                (mem_pg_field_get(rx_run_dccal_16_23) << (16 - rx_run_dccal_16_23_width));
            lane_mask = 0x80000000;

            for (lane = 0; lane < num_lanes; lane++)
            {
                // Check both request registers
                int dccal_enable = mem_pl_field_get(rx_run_dccal,  lane) | (run_dccal_0_23 & lane_mask);
                int dccal_done   = mem_pl_field_get(rx_dccal_done, lane);

                if ( dccal_enable && !dccal_done )
                {
                    // Set the current lane in the gcr_addr
                    set_gcr_addr_lane(&gcr_addr, lane);

                    // Run cal.  Also set and clear busy.
                    mem_pl_bit_set(rx_lane_busy, lane);
                    eo_main_dccal(&gcr_addr);
                    mem_pl_bit_clr(rx_lane_busy, lane);

                    // Set done in both registers
                    mem_pl_bit_set(rx_dccal_done, lane);

                    if (lane < 16)
                    {
                        mem_regs_u16_bit_set(pg_addr(rx_dccal_done_0_15_addr), (lane_mask >> 16));
                    }
                    else     // lane>=16
                    {
                        mem_regs_u16_bit_set(pg_addr(rx_dccal_done_16_23_addr), lane_mask);
                    }
                }

                // If done is set but no longer seeing a request, clear the done bit (completes the handshake)
                if ( dccal_done && !dccal_enable )
                {
                    mem_pl_bit_clr(rx_dccal_done, lane);

                    if (lane < 16)
                    {
                        mem_regs_u16_bit_clr(pg_addr(rx_dccal_done_0_15_addr), (lane_mask >> 16));
                    }
                    else     // lane>=16
                    {
                        mem_regs_u16_bit_clr(pg_addr(rx_dccal_done_16_23_addr), lane_mask);
                    }
                }

                // Shift the lane mask for the next lane
                lane_mask = (lane_mask >> 1);
            } //for lane


            /////////////////////////////////////////////////
            // Lane Power Up
            // Only initiated through mem_regs.
            // Run on requested lanes that haven't run on.
            /////////////////////////////////////////////////
            set_debug_state(0x0008); // DEBUG - Lane Power Up Loop Start

            for (lane = 0; lane < num_lanes; lane++)
            {
                // Check request register
                int power_up_lane_enable = mem_pl_field_get(io_power_up_lane_req,  lane);
                int power_up_lane_done   = mem_pl_field_get(io_power_up_lane_done, lane);

                if ( power_up_lane_enable && !power_up_lane_done )
                {
                    // Set the current lane in the gcr_addr
                    set_gcr_addr_lane(&gcr_addr, lane);

                    // Power up the group and lane
                    io_group_power_on(&gcr_addr);
                    io_lane_power_on(&gcr_addr);

                    // Set done in register
                    mem_pl_bit_set(io_power_up_lane_done, lane);
                }

                // If done is set but no longer seeing a request, clear the done bit (completes the handshake)
                if ( power_up_lane_done && !power_up_lane_enable )
                {
                    mem_pl_bit_clr(io_power_up_lane_done, lane);
                }
            } //for lane

            /////////////////////////////////////////////////
            // INIT Cal
            // Initiated through mem_regs or DL signals.
            // Assume DL/mem_regs are mutually exclusive.
            // Run on requested lanes that haven't run on.
            /////////////////////////////////////////////////
            set_debug_state(0x0003); // DEBUG - Init Cal Loop Start
            uint32_t run_lane_0_23 =
                (get_ptr_field(&gcr_addr, rx_dl_phy_run_lane_0_15)  << 16) |
                (get_ptr_field(&gcr_addr, rx_dl_phy_run_lane_16_23) << (16 - rx_dl_phy_run_lane_16_23_width));
            lane_mask = 0x80000000;

            for (lane = 0; lane < num_lanes; lane++)
            {
                int dl_run_lane = (run_lane_0_23 & lane_mask);
                int init_enable = mem_pl_field_get(rx_run_lane, lane) | dl_run_lane;
                int init_done   = mem_pl_field_get(rx_init_done, lane);

                if ( init_enable && !init_done )
                {
                    // Set the current lane in the gcr_addr
                    set_gcr_addr_lane(&gcr_addr, lane);

                    // Copy results from previously INIT lane to current lane to use as a starting point for initial calibration.
                    int enable_lane_cal_copy = mem_pg_field_get(rx_enable_lane_cal_copy);

                    if ( enable_lane_cal_copy && (last_init_lane != -1) )
                    {
                        eo_copy_lane_cal(&gcr_addr, last_init_lane, lane);
                    }

                    last_init_lane = lane;

                    // Run cal.  Also set and clear busy.
                    mem_pl_bit_set(rx_lane_busy, lane);
                    eo_main_init(&gcr_addr);
                    mem_pl_bit_clr(rx_lane_busy, lane);

                    // Set done in mem_regs and in DL (only if initiated by DL)
                    mem_pl_bit_set(rx_init_done, lane);

                    if (dl_run_lane)
                    {
                        put_ptr_field(&gcr_addr, rx_phy_dl_init_done_set, 0b1, fast_write); // strobe bit
                    }
                }

                // If done is set but no longer seeing a request, clear the done bit (completes the handshake)
                if ( init_done && !init_enable )
                {
                    set_gcr_addr_lane(&gcr_addr, lane);
                    put_ptr_field(&gcr_addr, rx_phy_dl_init_done_clr, 0b1, fast_write); // strobe bit
                    mem_pl_bit_clr(rx_init_done, lane);
                }

                // Shift the lane mask for the next lane
                lane_mask = (lane_mask >> 1);
            } //for lane


            //////////////////////////////////////////////////////////////////////////////////////////////////
            // Recal
            // Initiated through mem_regs or DL signals.
            // Assume DL/mem_regs are mutually exclusive.
            // It is possible to run recal on some lanes while others are still waiting on init depending
            // on when the enables are written.
            // This is desired for when the bus is split into bricks which could be in different states.
            //////////////////////////////////////////////////////////////////////////////////////////////////
            set_debug_state(0x0004); // DEBUG - Recal Loop Start
            uint32_t recal_req_0_23 =
                (get_ptr_field(&gcr_addr, rx_dl_phy_recal_req_0_15)  << 16) |
                (get_ptr_field(&gcr_addr, rx_dl_phy_recal_req_16_23) << (16 - rx_dl_phy_recal_req_16_23_width));
            lane_mask = 0x80000000;

            for (lane = 0; lane < num_lanes; lane++)
            {
                // Clear recal counter when requested, then clear request bit (treat as a pulse)
                int clr_recal_cnt = mem_pl_field_get(rx_clr_lane_recal_cnt, lane);

                if (clr_recal_cnt)
                {
                    mem_pl_field_put(rx_lane_recal_cnt, lane, 0);
                    mem_pl_bit_clr(rx_clr_lane_recal_cnt, lane);
                }

                // If auto-recal is enabled for a lane, automatically run recal on it once it has completed init.
                // Also run on requested lanes that haven't run recal on (but have completed init).
                int auto_recal_en = mem_pl_field_get(rx_enable_auto_recal, lane);
                int dl_recal_req  = (recal_req_0_23 & lane_mask);
                int recal_req     = mem_pl_field_get(rx_recal_req, lane) | dl_recal_req;
                int recal_done    = mem_pl_field_get(rx_recal_done, lane);
                int init_done     = mem_pl_field_get(rx_init_done, lane);
                bool recal_run_or_unused = !init_done; // lane is unused if init training not run

                if ( init_done && (auto_recal_en || (recal_req && !recal_done)) )
                {
                    // Check if any lanes are waiting for initial calibration or a reset (and retrain).
                    // Exit this loop if there is. This gives priority to DC Cal and INIT over Recal.
                    // We do not interrupt a recal that is already in progress.
                    int any_init_req_or_reset = get_ptr_field(&gcr_addr, rx_any_init_req_or_reset);

                    if (any_init_req_or_reset)
                    {
                        break;
                    }

                    // Set the current lane in the gcr_addr
                    set_gcr_addr_lane(&gcr_addr, lane);

                    // Run recal. Also set and clear busy.
                    recal_run_or_unused = true;
                    mem_pl_bit_set(rx_lane_busy, lane);
                    bool run_recal = true;

                    while (run_recal)
                    {
                        eo_main_recal(&gcr_addr);
                        // Continue to run until the min recal count is reached.
                        int min_recal_cnt_reached = mem_pl_field_get(rx_min_recal_cnt_reached, lane);
                        run_recal = !min_recal_cnt_reached;
                    }

                    mem_pl_bit_clr(rx_lane_busy, lane);

                    // Only continue the handhake if this was a requested external recal (rather than an internal auto-recal)
                    if (recal_req)
                    {
                        set_debug_state(0x0005); // DEBUG - Recal Done Handshake

                        // Set done in mem_regs and in DL (only if initiated by DL)
                        recal_done = 1;
                        mem_pl_bit_set(rx_recal_done, lane);

                        if (dl_recal_req)
                        {
                            put_ptr_field(&gcr_addr, rx_phy_dl_recal_done_set, 0b1, fast_write); // strobe bit
                        }

                        // Wait forever (no sleeping) on recal_req and recal_abort to unassert as acknowledgement of recal_done.
                        // Also check fw_stop_thread as a way to break out of a potential hang on waiting for a DL signal.
                        int recal_abort;

                        do
                        {
                            recal_req =
                                get_ptr_field(&gcr_addr, rx_dl_phy_recal_req) |
                                mem_pl_field_get(rx_recal_req, lane);
                            recal_abort =
                                get_ptr_field(&gcr_addr, rx_dl_phy_recal_abort) |
                                mem_pl_field_get(rx_recal_abort, lane);
                            stop_thread = fw_field_get(fw_stop_thread);
                        }
                        while ( (recal_req || recal_abort) && !stop_thread );
                    } //if recal_req

                    // Clear the recal_abort sticky bit now that recal_abort should be unasserted (in both external and internal recal modes)
                    put_ptr_field(&gcr_addr, rx_dl_phy_recal_abort_sticky_clr, 0b1, fast_write); // strobe bit
                } //if (init_done && ...)

                // If done is set but no longer seeing a request, clear the done bit (completes the handshake)
                if ( recal_done && !recal_req )
                {
                    set_debug_state(0x0006); // DEBUG - Recal Done Handshake Complete
                    set_gcr_addr_lane(&gcr_addr, lane);
                    put_ptr_field(&gcr_addr, rx_phy_dl_recal_done_clr, 0b1, fast_write); // strobe bit
                    mem_pl_bit_clr(rx_recal_done, lane);
                }

                // Set the status bit if the lane is unused (!init_done) or we just ran recal
                if (recal_run_or_unused)
                {
                    if (lane < 16)
                    {
                        mem_regs_u16_bit_set(pg_addr(rx_recal_run_or_unused_0_15_addr), (lane_mask >> 16));
                    }
                    else     // lane>=16
                    {
                        mem_regs_u16_bit_set(pg_addr(rx_recal_run_or_unused_16_23_addr), lane_mask);
                    }
                }

                // Shift the lane mask for the next lane
                lane_mask = (lane_mask >> 1);
            } //for (lane)


            ///////////////////////////////////////////////////
            // End of Thread Loop
            ///////////////////////////////////////////////////
            set_debug_state(0x000F); // DEBUG - Thread Loop End
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
