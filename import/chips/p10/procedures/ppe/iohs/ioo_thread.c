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
// cws19051300 |cws     | Changed API to Software
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

//#if IO_DISABLE_DEBUG == 1
//  #define FW_DEBUG(i_data) {}
//#else
//  #define FW_DEBUG(i_data) { fw_regs_u16[fw_addr(fw_debug_addr)] = (i_data); }
//#endif

//-----------------------------------------------------------------------------
// Function Declarations
//-----------------------------------------------------------------------------
static void dl_init_req (t_gcr_addr* io_gcr_addr, const uint32_t i_num_lanes, int* io_last_init_lane);
static void dl_recal_req(t_gcr_addr* io_gcr_addr, const uint32_t i_num_lanes, const uint32_t i_recal_req_vec);
static void set_recal_or_unused(const uint32_t i_lane, const uint32_t i_value);
static uint32_t get_dl_recal_req_vec(t_gcr_addr* io_gcr_addr);
static void auto_recal(t_gcr_addr* io_gcr_addr, const uint32_t i_num_lanes);

static void cmd_hw_reg_init_pg  (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_ioreset_pl      (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_dccal_pl        (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_tx_zcal_pl      (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_tx_ffe_pl       (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_tx_fifo_init_pl (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_power_on_pl     (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_power_off_pl    (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_rx_bist_tests_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_tx_bist_tests_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_train_pl        (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_recal_pl        (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_rx_detect_pl    (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);
static void cmd_nop             (t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask);

static const uint32_t G_NUM_LANES  = 24;
static const uint32_t EXT_CMD_SIZE = 16;

// Registers: EXT_CMD_REQ_REG / EXT_CMD_DONE_REG
void (*EXT_CMD_FUNCTIONS[16])(t_gcr_addr* i_gcr_addr, uint32_t i_lane_mask) =
{
    &cmd_hw_reg_init_pg   , // [00]: TODO Check Rx/Tx Bist Flags & setup bist + hold if perv registers say so
    &cmd_ioreset_pl       , // [01]: TODO Reset all Bist Flags if not in bist mode, otherwise setup pl regs
    &cmd_rx_detect_pl     , // [02]: TODO Is this the right place?
    &cmd_dccal_pl         , // [03]: TODO Remove power down at the end.
    &cmd_tx_zcal_pl       , // [04]: TODO Add check to see which method to use(HW v TDR). For HW add Lock bit for zcal
    &cmd_tx_ffe_pl        , // [05]: TODO Create interface to pass data bits in
    &cmd_power_off_pl     , // [06]:
    &cmd_power_on_pl      , // [07]:
    &cmd_tx_fifo_init_pl  , // [08]: *RUN IN DCCAL, ONLY NEED TO RERUN AFTER POWER CYCLE(OFF/ON)
    &cmd_rx_bist_tests_pl , // [09]: Rx Dac Test, TODO Needs to be non-destructive
    &cmd_tx_bist_tests_pl , // [10]: Tx Seg Test, TODO Needs to be non-destructive
    &cmd_train_pl         , // [11]: TODO Check if lanes are powered up, if not power them up
    &cmd_recal_pl         , // [12]: TODO Add min_recal_cnt
    &cmd_nop              , // [13]:
    &cmd_nop              , // [14]:
    &cmd_nop                // [15]:
};

//-----------------------------------------------------------------------------
// Function Definintions
//-----------------------------------------------------------------------------

/**
 * @brief Run External Command from API Registers
 * @param[in] i_gcr_addr  Target Information
 * @retval void
 */
static void run_external_command(t_gcr_addr* i_gcr_addr)
{
    ///set_debug_state(0x0002);

    uint32_t l_cmd_req  = fw_field_get(ext_cmd_req );
    uint32_t l_cmd_done = fw_field_get(ext_cmd_done);

    if (l_cmd_req ^ l_cmd_done && l_cmd_req != 0x0)
    {
        uint32_t l_new_cmd_req = l_cmd_req & ~l_cmd_done;
        uint32_t l_cmd_num = 0;
        uint32_t l_lane_mask = (fw_field_get(ext_cmd_lanes_00_15) << 16) |
                               (fw_field_get(ext_cmd_lanes_16_31) <<  0);

        for (; l_cmd_num < EXT_CMD_SIZE; ++l_cmd_num)
        {
            uint32_t l_cmd_mask = 0x8000 >> l_cmd_num;

            // Skip the command if it is not a new request
            if (!(l_new_cmd_req & l_cmd_mask))
            {
                continue;
            }

            // Execute the external command function
            EXT_CMD_FUNCTIONS[l_cmd_num](i_gcr_addr, l_lane_mask);

            // Write the Command Done Bit
            l_cmd_done |= l_cmd_mask;
            fw_field_put(ext_cmd_done, l_cmd_done);
        }
    }

    //set_debug_state(0x0003);
    return;
}


/**
 * @brief Polling loop for each thread
 * @param[in] arg   Contains thread ID
 * @retval void
 */
void ioo_thread(void* arg)
{
    // Parse input parameters
    const int* l_config = (int*)arg;
    const int l_thread = l_config[0]; // config parameter 0 - the thread_id

    // Set the pointers for mem_regs and fw_regs to this thread's section
    set_pointers(l_thread);

#if IO_DISABLE_DEBUG == 0
    // Debug info on the current thread running
    img_field_put(ppe_current_thread, l_thread);
#endif

    // Read bus_id from fw_regs - must match the hardware rx_bus_id & tx_bus_id (they must be the same).
    const int l_bus_id = fw_field_get(fw_gcr_bus_id);
    const uint32_t l_num_lanes  = fw_field_get(fw_num_lanes);

    // Form gcr_addr structure
    t_gcr_addr l_gcr_addr;
    set_gcr_addr(&l_gcr_addr, l_thread, l_bus_id, rx_group, 0); // RX lane 0

    int l_last_init_lane = -1; // Init not run on any lane as yet
    uint32_t l_thread_loop_cnt = mem_pg_field_get(ppe_thread_loop_count);
    uint32_t l_stop_thread = 0;

    do
    {
        // Do not run loop  while fw_stop_thread is set; this may be done when in an error condition and need to reset.
        // Also, mirror the setting as the status/handshake.
        l_stop_thread = fw_field_get(fw_stop_thread);

        if (l_stop_thread)
        {
            set_debug_state(0x00FF); // DEBUG - Thread Stopped

            //fw_field_put(fw_thread_stopped, l_stop_thread);
            // Reset last_init_lane when stopping the thread (assume bus is being reset)
            l_last_init_lane = -1;
        }
        else
        {
            //!fw_stop_thread
            set_debug_state(0x0001); // DEBUG - Thread Loop Start

            // Checks if any new command requests need to be run
            run_external_command(&l_gcr_addr);

            // DL Intial Training
            dl_init_req(&l_gcr_addr, l_num_lanes, &l_last_init_lane);

            // DL Recalibration Request
            uint32_t l_recal_req_vec = get_dl_recal_req_vec(&l_gcr_addr);

            if (l_recal_req_vec)
            {
                dl_recal_req(&l_gcr_addr, l_num_lanes, l_recal_req_vec);
            }

            auto_recal(&l_gcr_addr, l_num_lanes);

            set_debug_state(0x000F); // DEBUG - Thread Loop End
        } //!fw_stop_thread


        // Increment the thread loop count (for both active and stopped)
        mem_pg_field_put(ppe_thread_loop_count, ++l_thread_loop_cnt);

        // Yield to other threads at least once per thread loop
        io_sleep(get_gcr_addr_thread(&l_gcr_addr));
    }
    while(1);

}

/**
 * @brief Calls HW REG INIT Per-Group
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_hw_reg_init_pg(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0008);
    io_hw_reg_init(io_gcr_addr);
    //set_debug_state(0x0009);
    return;
}

/**
 * @brief Calls I/O Reset Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_ioreset_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x000A);
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);
        io_reset_lane(io_gcr_addr);
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x000B);
    return;
}

/**
 * @brief Calls Lane Power On Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_power_on_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0014);

    // Group Power On If Needed
    // - Check if there are any lanes currently powered on
    // - Check if the current command is powering on any lanes
    uint32_t l_lanes_power_on = (mem_pg_field_get(lanes_pon_00_15) << 16) |
                                (mem_pg_field_get(lanes_pon_16_23) << (16 - lanes_pon_16_23_width));

    if (l_lanes_power_on == 0x0 && i_lane_mask > 0x0)
    {
        io_group_power_on(io_gcr_addr);
    }

    l_lanes_power_on |= i_lane_mask;
    mem_pg_field_put(lanes_pon_00_15, (l_lanes_power_on >> 16) & 0xFFFF);
    mem_pg_field_put(lanes_pon_16_23, (l_lanes_power_on >>  8) & 0x00FF);

    // Power on specific lanes
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);
        io_lane_power_on(io_gcr_addr);
    }


    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x0015);
    return;
}

/**
 * @brief Calls Lane Power Off Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_power_off_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0016);

    // Power off specific lanes
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);
        io_lane_power_off(io_gcr_addr);
    }

    // Group Power Off If Needed
    // - Check if any lanes are powered on
    uint32_t l_lanes_power_on = (mem_pg_field_get(lanes_pon_00_15) << 16) |
                                (mem_pg_field_get(lanes_pon_16_23) << (16 - lanes_pon_16_23_width));
    l_lanes_power_on &= ~i_lane_mask;

    if (l_lanes_power_on == 0x0)
    {
        io_group_power_off(io_gcr_addr);
    }

    mem_pg_field_put(lanes_pon_00_15, (l_lanes_power_on >> 16) & 0xFFFF);
    mem_pg_field_put(lanes_pon_16_23, (l_lanes_power_on >>  8) & 0x00FF);

    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x0017);
    return;
}

/**
 * @brief Calls NOP Command Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_nop(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0022);
    // TODO Log Error Here
    //set_debug_state(0x0023);
    return;
}

/**
 * @brief Calls Tx FFE Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_tx_ffe_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0012);
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);

        // TODO Set FFE Settings
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x0013);
    return;
}

/**
 * @brief Calls Rx/Tx DC Calibration Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_dccal_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x000E);
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);

        mem_pl_bit_set(rx_lane_busy, l_lane);
        eo_main_dccal(io_gcr_addr);
        mem_pl_bit_clr(rx_lane_busy, l_lane);
        mem_pl_bit_set(rx_dccal_done, l_lane);
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x000D);
    return;
}

/**
 * @brief Calls Tx ZCAL Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_tx_zcal_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0010);
    // TODO Write Code
    //set_debug_state(0x0011);
    return;
}

/**
 * @brief Calls Tx Fifo Initialization Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_tx_fifo_init_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0018);
    set_gcr_addr_reg_id(io_gcr_addr, tx_group);
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);

        //enable tx clock synchronization latch
        put_ptr_field(io_gcr_addr, tx_unload_clk_disable, 0, read_modify_write);

        //init fifo
        put_ptr_field(io_gcr_addr, tx_fifo_init, 1, read_modify_write);

        //disable tx clock synchronization latch
        put_ptr_field(io_gcr_addr, tx_unload_clk_disable, 1, read_modify_write);
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    set_gcr_addr_reg_id(io_gcr_addr, rx_group);
    //set_debug_state(0x0019);
    return;
}

/**
 * @brief Calls Rx Bist Tests Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_rx_bist_tests_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x001A);
    // TODO Write Code
    //set_debug_state(0x001B);
    return;
}

/**
 * @brief Calls Tx Bist Tests Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_tx_bist_tests_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x001C);
    // TODO Write Code
    //set_debug_state(0x001D);
    return;
}

/**
 * @brief Runs Rx Initial Training Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane        Lane to Train
 * @retval void
 */
static void run_initial_training(t_gcr_addr* io_gcr_addr, const uint32_t i_lane)
{
    set_gcr_addr_lane(io_gcr_addr, i_lane);
    mem_pl_bit_set(rx_lane_busy, i_lane);
    eo_main_init(io_gcr_addr);
    mem_pl_bit_set(rx_init_done, i_lane);
    mem_pl_bit_clr(rx_lane_busy, i_lane);
    set_recal_or_unused(i_lane, 0x0);
    return;
}

/**
 * @brief Runs Rx Recalibration Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane        Lane to recalibrate
 * @retval void
 */
static void run_recalibration(t_gcr_addr* io_gcr_addr, const uint32_t i_lane)
{
    set_gcr_addr_lane(io_gcr_addr, i_lane);
    // Run recal. Also set and clear busy.
    mem_pl_bit_clr(rx_recal_done, i_lane);
    mem_pl_bit_set(rx_lane_busy, i_lane);

    do
    {
        eo_main_recal(io_gcr_addr);
    }
    while (!mem_pl_field_get(rx_min_recal_cnt_reached, i_lane) &&
           !mem_pl_field_get(rx_recal_abort, i_lane) &&
           !fw_field_get(fw_stop_thread));

    mem_pl_bit_clr(rx_lane_busy, i_lane);
    mem_pl_bit_set(rx_recal_done, i_lane);
    set_recal_or_unused(i_lane, 0x1);
    return;
}

/**
 * @brief Calls Rx Train Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_train_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x001E);
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        run_initial_training(io_gcr_addr, l_lane);
        mem_pl_bit_set(rx_cmd_init_done, l_lane);
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x001F);
    return;
}

/**
 * @brief Calls Recalibration Test Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in]    i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_recal_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x0020);
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        run_recalibration(io_gcr_addr, l_lane);
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x0021);
    return;
}

/**
 * @brief Calls Tx Rx Detect Per-Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in]    i_lane_mask   Lane Mask
 * @retval void
 */
static void cmd_rx_detect_pl(t_gcr_addr* io_gcr_addr, uint32_t i_lane_mask)
{
    //set_debug_state(0x000C);
    uint32_t l_lane = 0;

    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_mask = i_lane_mask << 1)
    {
        if ((i_lane_mask & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);

        // TODO Run Rx Detect
        // - Where do we store results
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    //set_debug_state(0x000D);
    return;
}

/**
 * @brief Assert Lane Mask for Recal or Unused Lanes
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_lane        Lane to Target
 * @param[in   ] i_value       Value to Set
 * @retval void
 */
static void set_recal_or_unused(const uint32_t i_lane, const uint32_t i_value)
{
    uint32_t l_data = (mem_pg_field_get(rx_recal_run_or_unused_0_15) << 16) |
                      (mem_pg_field_get(rx_recal_run_or_unused_16_23) << (16 - rx_recal_run_or_unused_16_23_width));
    l_data &= ~(0x80000000 >> i_lane);
    l_data |= ((i_value & 0x1) << (31 - i_lane));

    mem_pg_field_put(rx_recal_run_or_unused_0_15, (l_data >> 16) & 0xFFFF);
    mem_pg_field_put(rx_recal_run_or_unused_16_23, (l_data >>  8) & 0x00FF);

    return;
}

/**
 * @brief Service DL Initialize Request
 * @param[inout] io_gcr_addr        Target Information
 * @param[in   ] i_num_lanes     Total Number of Lanes
 * @param[inout] io_last_init_lane  Last lane that was initilized.  This is needed to copy lane information
 * @retval void
 */
static void dl_init_req(t_gcr_addr* io_gcr_addr, const uint32_t i_num_lanes, int* io_last_init_lane)
{
    set_debug_state(0x0004);

    uint32_t l_run_lane_mask = (get_ptr_field(io_gcr_addr, rx_dl_phy_run_lane_0_15)  << 16) |
                               (get_ptr_field(io_gcr_addr, rx_dl_phy_run_lane_16_23) << (16 - rx_dl_phy_run_lane_16_23_width));
    uint32_t l_lane          = 0;

    for (; l_lane < i_num_lanes; ++l_lane)
    {
        set_gcr_addr_lane(io_gcr_addr, l_lane);

        uint32_t l_init_done = mem_pl_field_get(rx_init_done, l_lane);
        uint32_t l_dl_init_req = ((0x80000000 >> l_lane) & l_run_lane_mask);

        if (l_dl_init_req && !l_init_done)
        {
            // todo here is where we would add power on if the lane is not already powered up.

            // copy results from previously init lane to current lane to use as a starting point for initial calibration.
            if (mem_pg_field_get(rx_enable_lane_cal_copy) && ((*io_last_init_lane) != -1))
            {
                eo_copy_lane_cal(io_gcr_addr, (*io_last_init_lane), l_lane);
            }

            (*io_last_init_lane) = (int)l_lane;

            run_initial_training(io_gcr_addr, l_lane);

            put_ptr_field(io_gcr_addr, rx_phy_dl_init_done_set, 0b1, fast_write);
        }
        else if (!l_dl_init_req && l_init_done && !mem_pl_field_get(rx_cmd_init_done, l_lane))
        {
            put_ptr_field(io_gcr_addr, rx_phy_dl_init_done_clr, 0b1, fast_write);
            mem_pl_bit_clr(rx_init_done, l_lane); // We need to leave init_done asserted after initial training.
        }
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    set_debug_state(0x0005);
    return;
}

/**
 * @brief Gets DL Recalibration Request Vector
 * @param[inout] io_gcr_addr     Target Information
 * @retval void
 */
static uint32_t get_dl_recal_req_vec(t_gcr_addr* io_gcr_addr)
{
    return (get_ptr_field(io_gcr_addr, rx_dl_phy_recal_req_0_15)  << 16) |
           (get_ptr_field(io_gcr_addr, rx_dl_phy_recal_req_16_23) << (16 - rx_dl_phy_recal_req_16_23_width));
}


/**
 * @brief Calls Service DL Recalibration Request
 * @param[inout] io_gcr_addr     Target Information
 * @param[in   ] i_num_lanes     Total Number of Lanes
 * @param[in   ] i_recal_req_vec DL Recalibration Request Vector
 * @retval void
 */
static void dl_recal_req(t_gcr_addr* io_gcr_addr, const uint32_t i_num_lanes, const uint32_t i_recal_req_vec)
{
    set_debug_state(0x0006);

    uint32_t l_lane = 0;

    for (; l_lane < i_num_lanes; ++l_lane)
    {
        // Set the current lane in the io_gcr_addr
        set_gcr_addr_lane(io_gcr_addr, l_lane);

        if ((0x80000000 >> l_lane) & i_recal_req_vec)
        {
            if (!mem_pl_field_get(rx_init_done, l_lane))
            {
                mem_pl_field_put(rx_recal_before_init, l_lane, 1);
            }
            else if (!get_ptr_field(io_gcr_addr, rx_any_init_req_or_reset))
            {
                run_recalibration(io_gcr_addr, l_lane);

                set_debug_state(0x0005); // DEBUG - Recal Done Handshake
                put_ptr_field(io_gcr_addr, rx_phy_dl_recal_done_set, 0b1, fast_write); // strobe bit

                while ((get_ptr_field(io_gcr_addr, rx_dl_phy_recal_req) ||
                        get_ptr_field(io_gcr_addr, rx_dl_phy_recal_abort)) &&
                       !fw_field_get(fw_stop_thread));

                set_debug_state(0x0006); // DEBUG - Recal Done Handshake Complete
                put_ptr_field(io_gcr_addr, rx_phy_dl_recal_done_clr, 0b1, fast_write); // strobe bit
                mem_pl_bit_clr(rx_recal_done, l_lane);

                // Clear the recal_abort sticky bit now that recal_abort should be unasserted (in both external and internal recal modes)
                put_ptr_field(io_gcr_addr, rx_dl_phy_recal_abort_sticky_clr, 0b1, fast_write); // strobe bit
            }
        }
    }

    set_debug_state(0x0007);
    return;
}

/**
 * @brief Auto-Recalibration
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_num_lanes   Number of lanes to iterate over
 * @retval void
 */
static void auto_recal(t_gcr_addr* io_gcr_addr, const uint32_t i_num_lanes)
{
    set_debug_state(0x0024);
    uint32_t l_lane = 0;

    for (; l_lane < i_num_lanes; ++l_lane)
    {
        set_gcr_addr_lane(io_gcr_addr, l_lane);

        // Clear recal counter when requested, then clear request bit (treat as a pulse)
        int clr_recal_cnt = mem_pl_field_get(rx_clr_lane_recal_cnt, l_lane);

        if (clr_recal_cnt)
        {
            mem_pl_field_put(rx_lane_recal_cnt, l_lane, 0);
            mem_pl_bit_clr(rx_clr_lane_recal_cnt, l_lane);
        }

        // Run Auto Recalibration if necessary
        if (mem_pl_field_get(rx_enable_auto_recal, l_lane))
        {
            if (mem_pl_field_get(rx_init_done, l_lane))
            {
                if (!get_ptr_field(io_gcr_addr, rx_any_init_req_or_reset))
                {
                    run_recalibration(io_gcr_addr, l_lane);
                }
            }
        }
    }

    //set_gcr_addr_lane(io_gcr_addr, 0);
    set_debug_state(0x0025);
    return;
}

