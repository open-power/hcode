/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_llbist.c $            */
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
// *! FILENAME    : eo_llbist.c
// *! TITLE       :
// *! DESCRIPTION : Run the ber check logic after we have run init and recal
// *!             :
// *!
// *! OWNER NAME  : Mike Harper         Email: harperm@us.ibm.com
// *! BACKUP NAME : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// mwh19040900 |mwh     | Initial Rev 51yy debug state
//------------------------------------------------------------------------------



#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_llbist.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"





//rx_link_layer_check_en        scom pg
//rx_io_pb_nv_iobist_reset      scom pg
//rx_pb_io_nv_iobist_prbs_error scom rox pg
//rx_linklayer_done             ppe pg
//rx_linklayer_fail             ppe pg


void eo_llbist(t_gcr_addr* gcr_addr)
{
    //start eo_rxbist_ber
    set_debug_state(0x51E0); // DEBUG


    //int ber_num_lanes = fw_field_get(fw_num_lanes); set_debug_state(ber_num_lanes);//max number of lanes ??
    //int ber_num_lanes = 1;
    //int lane;// = get_gcr_addr_lane(gcr_addr);
    int count_loop = 3; //


    //turn on seed mode and turn off rx_berpl_timer_run_slow
    put_ptr_field(gcr_addr, rx_io_pb_nv_iobist_reset, 0b1, read_modify_write);

    //Wait for prbs 15 to sink
    while (count_loop > 1)//given time for CDR to lock since doing big jump
    {
        //while loop
        set_debug_state(0x51E1);
        io_spin_us(1);//1 micro-sec
        count_loop--;
    }//end while

    //turn off seed mode and turn on rx_berpl_timer_run_slow
    put_ptr_field(gcr_addr, rx_io_pb_nv_iobist_reset, 0b0, read_modify_write);

    while (count_loop > 2)//given time for CDR to lock since doing big jump
    {
        //while loop
        set_debug_state(0x51E2);
        io_spin_us(1);//1 micro-sec
        count_loop--;
    }//end while


    int error = get_ptr(gcr_addr, rx_pb_io_nv_iobist_prbs_error_addr , rx_pb_io_nv_iobist_prbs_error_startbit  ,
                        rx_pb_io_nv_iobist_prbs_error_endbit);//pg

    mem_pg_field_put(rx_linklayer_done, 0b1);//pg
    mem_pg_field_put(rx_linklayer_fail, error); //pg


    set_debug_state(0x51E3); // DEBUG
    //return pass_code;
}//end eo_rxbist_ber

