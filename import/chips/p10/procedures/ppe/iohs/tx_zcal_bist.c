/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_zcal_bist.c $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
// *! FILENAME    : tx_zcal_bist.c
// *! TITLE       :
// *! DESCRIPTION : Run tx zcal bist using bist state machine
// *!
// *! OWNER NAME  : Gary Peterson       Email: garyp@us.ibm.com
// *! BACKUP NAME : Brian Albertson     Email: brian.j.albertson@ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// gap20052700 |gap     | Remove power down, SWO enable after test
// gap20021100 |gap     | Created
// -----------------------------------------------------------------------------

#include "eo_common.h"
#include "tx_zcal_bist.h"

#include "ppe_com_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"
#include "config_ioo.h"
#include "io_logger.h"

////////////////////////////////////////////////////////////////////////////////////
// tx_zcal_bist
//   gcr_addr_i is for bus level access
////////////////////////////////////////////////////////////////////////////////////
void tx_zcal_bist(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC400); // tx_zcal_bist begin

    // Set proper bus_id and reg_id for accessing zcal registers.
    int saved_bus_id_l = get_gcr_addr_bus_id(gcr_addr_i);
    set_gcr_addr_bus_id(gcr_addr_i, zcal_bus_id);
    int saved_reg_id_l = get_gcr_addr_reg_id(gcr_addr_i);
    set_gcr_addr_reg_id(gcr_addr_i, zcal_group);

    //   set tx_zcal_test_clk_div to 0b11 -- largest divider, slowest clock
    put_ptr_field(gcr_addr_i, tx_zcal_test_clk_div, 0x3,
                  read_modify_write); // pb, 2 bits in larger reg, doing rmw to be safe

    // Run test, check status
    put_ptr_field(gcr_addr_i, tx_zcal_test_enable,  0x1,
                  fast_write);        // pb, 1 bit in larger reg, other bits edge triggered, fast_write ok

    do
    {
    }
    while (get_ptr_field(gcr_addr_i, tx_zcal_test_done) == 0);

    if (get_ptr_field(gcr_addr_i, tx_zcal_test_status) == 1)
    {
        img_bit_set(ppe_tx_zcal_bist_fail); // single bit, per bus image reg
        set_debug_state(0xC401); // zcal_bist fail
        set_fir(fir_code_dft_error | fir_code_warning); // set DFT FIR bit
        ADD_LOG(DEBUG_BIST_TX_ZCAL_FAIL, gcr_addr_i, 0x0); // ADD_LOG requires type, addr, log_data
    }

    // Restore bus_id and reg_id
    set_gcr_addr_bus_id(gcr_addr_i, saved_bus_id_l);
    set_gcr_addr_reg_id(gcr_addr_i, saved_reg_id_l);

    set_debug_state(0xC4FF); // tx_zcal_bist end
} // tx_zcal_bist
