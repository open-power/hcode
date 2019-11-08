/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_irq_handlers.c $      */
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
// *! FILENAME    : io_irq_handlers.c
// *! TITLE       :
// *! DESCRIPTION : Interrupt handlers
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr18112900 |vbr     | Debug state cleanup.
// vbr17110100 |vbr     | Removed fw_gcr_port (only 1 port).
// vbr17082500 |vbr     | Moved bus_id and gcr_port to fw_regs.
// vbr17062900 |vbr     | Removed thread input from various functions.
// vbr17062801 |vbr     | Added img_addr().
// vbr17062800 |vbr     | Moved ppe_num_threads from mem_regs into img_regs.
// vbr17051800 |vbr     | Remove IOF code.
// vbr17042500 |vbr     | Added IOO thread support
// vbr17020800 |vbr     | Disabled GCR interrupt since registers no loner exist.
// vbr17011200 |vbr     | rx_int_req is read-only & workaround for HW400250.
// vbr17010800 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "io_irq_handlers.h"

#include "ppe_img_reg_const_pkg.h"
#include "ppe_fw_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


////////////////////////////////////////////////////////////////
// Handle a GCR Interrupt
////////////////////////////////////////////////////////////////
void io_gcr_irq_handler(void* arg, PkIrqId irq)
{
    set_debug_state(0xFE00); // DEBUG - GCR IRQ Start

    // Clear the IRQ Status (not a level interrupt) to allow another IRQ to be queued up
    pk_irq_status_clear(irq);

    // Neeed to cycle through all groups starting with bus_id for thread 0
    int thread = 0;
    int bus_id = fw_regs_u16_base_get(fw_base_addr(fw_gcr_bus_id_addr, thread), fw_gcr_bus_id_mask, fw_gcr_bus_id_shift);
#ifdef PK_THREAD_SUPPORT
    int io_threads = img_regs_u16_get(img_addr(ppe_num_threads_addr), ppe_num_threads_mask, ppe_num_threads_shift);
#else
    int io_threads = 1; // single threaded
#endif

    // Create gcr_addr struct
    t_gcr_addr gcr_addr;
#if PK_THREAD_SUPPORT
    set_gcr_addr(&gcr_addr, thread, bus_id, rx_group, 0); // RX lane 0
#else
    set_gcr_addr(&gcr_addr, bus_id, rx_group, 0); // RX lane 0
#endif

    // Read the interrupt vectors and call the appropriate handler
    for (thread = 0; thread < io_threads; thread++)
    {
#if PK_THREAD_SUPPORT
        // Set the bus_id
        bus_id = fw_regs_u16_base_get(fw_base_addr(fw_gcr_bus_id_addr, thread), fw_gcr_bus_id_mask, fw_gcr_bus_id_shift);
        set_gcr_addr_bus_id(&gcr_addr, bus_id);
#endif

        // Send a gcr interrupt echo packet to work around HW400250
        uint64_t echo_packet = 0x98077F8000000001 | ((uint64_t)bus_id << (63 - 10)) | ((uint64_t)bus_id << (63 - 37));
        gcr_wr_raw(&gcr_addr, echo_packet);

        // Read the 16-bit interrupt vector (RO register)
        int irq_vec = 0x00; //TODO get_ptr(&gcr_addr, rx_int_req_addr, rx_int_req_startbit, rx_int_req_endbit);
        //put_ptr(&gcr_addr, rx_int_req_addr, rx_int_req_startbit, rx_int_req_endbit, 0, fast_write);

        // Check for set bits to call the appropriate handlers
        if (irq_vec & GCR_IRQ_EOSM_MASK)
        {
            // Assume that the EOSM interrupt was correctly enabled to stop at the correct state
            //irq_bank_power_up(&gcr_addr);
            irq_bank_power_down(&gcr_addr);
        }
    } //for

    set_debug_state(0xFEFF); // DEBUG - GCR IRQ Done
} //io_gcr_irq_handler


//////////////////////////////////////////////////////////////////////////
// IOO BANK POWER UP WORKAROUND
// Steps through the bank power up sequence slower than hardware.
// rx_int_current_state = 0x003
// rx_int_next_state    = 0x004
// rx_int_goto_state    = 0x008
// rx_int_return_state  = 0x008
// rx_int_enable_enc    = 0x5   EOSM
// rx_int_mode          = 0xF   bits [0]=1 => generate irq, [3]=1 => hold in goto state, [1:2]=11 => match current & next states
//////////////////////////////////////////////////////////////////////////
void irq_bank_power_up(t_gcr_addr* gcr_addr)
{
    set_debug_state(0xFE10); // DEBUG - Bank Power Up Start

    // Get the cal lane
    int lane = get_ptr(gcr_addr, rx_cal_lane_pg_phy_gcrmsg_addr, rx_cal_lane_pg_phy_gcrmsg_startbit,
                       rx_cal_lane_pg_phy_gcrmsg_endbit);
    set_gcr_addr_lane(gcr_addr, lane);

    // Run through the bank power up sequence for the ALT bank
    int bank_sel_a = get_ptr(gcr_addr, rx_bank_sel_a_addr, rx_bank_sel_a_startbit, rx_bank_sel_a_endbit);

    if (bank_sel_a == 0)
    {
        // Bank A is Alt Bank
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b110111,
                read_modify_write);
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b010110,
                read_modify_write);
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b000100,
                read_modify_write);
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b000000,
                read_modify_write);
    }
    else
    {
        // Bank B is Alt Bank
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b110111,
                read_modify_write);
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b010110,
                read_modify_write);
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b000100,
                read_modify_write);
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b000000,
                read_modify_write);
    }

    // Resume the EOSM
    //TODO put_ptr(gcr_addr, rx_int_return_addr, rx_int_return_startbit, rx_int_return_endbit, 0b1, fast_write); // strobe register

    set_debug_state(0xFE1F); // DEBUG - Bank Power Up Done
} //irq_bank_power_up


//////////////////////////////////////////////////////////////////////////
// IOO BANK POWER DOWN WORKAROUND
// Steps through the bank power down sequence slower than hardware.
// rx_int_current_state = 0x031
// rx_int_next_state    = 0x01A
// rx_int_goto_state    = 0x01E
// rx_int_return_state  = 0x01E
// rx_int_enable_enc    = 0x5   EOSM
// rx_int_mode          = 0xF   bits [0]=1 => generate irq, [3]=1 => hold in goto state, [1:2]=11 => match current & next states
//////////////////////////////////////////////////////////////////////////
void irq_bank_power_down(t_gcr_addr* gcr_addr)
{
    set_debug_state(0xFE20); // DEBUG - Bank Power Down Start

    // Get the cal lane
    int lane = get_ptr(gcr_addr, rx_cal_lane_pg_phy_gcrmsg_addr, rx_cal_lane_pg_phy_gcrmsg_startbit,
                       rx_cal_lane_pg_phy_gcrmsg_endbit);
    set_gcr_addr_lane(gcr_addr, lane);

    // Run through the bank power up sequence for the ALT bank
    int bank_sel_a = get_ptr(gcr_addr, rx_bank_sel_a_addr, rx_bank_sel_a_startbit, rx_bank_sel_a_endbit);

    if (bank_sel_a == 0)
    {
        // Bank A is Alt Bank
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b000100,
                read_modify_write);
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b010110,
                read_modify_write);
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b110111,
                read_modify_write);
        put_ptr(gcr_addr, rx_a_bank_controls_addr, rx_a_bank_controls_startbit, rx_a_bank_controls_endbit, 0b111111,
                read_modify_write);
    }
    else
    {
        // Bank B is Alt Bank
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b000100,
                read_modify_write);
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b010110,
                read_modify_write);
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b110111,
                read_modify_write);
        put_ptr(gcr_addr, rx_b_bank_controls_addr, rx_b_bank_controls_startbit, rx_b_bank_controls_endbit, 0b111111,
                read_modify_write);
    }

    // Resume the EOSM
    //TODO put_ptr(gcr_addr, rx_int_return_addr, rx_int_return_startbit, rx_int_return_endbit, 0b1, fast_write); // strobe register

    set_debug_state(0xFE2F); // DEBUG - Bank Power Down Done
} //irq_bank_power_down

