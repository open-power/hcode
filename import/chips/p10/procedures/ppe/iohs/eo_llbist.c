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
// bja19082100 |bja     | Set rx_fail_flag on fail
// bja19081900 |bja     | Set FIR on fail
// bja19081400 |bja     | Remove while loops. Use longer spins instead.
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

void eo_llbist(t_gcr_addr* gcr_addr)
{
    //start eo_llbist
    set_debug_state(0x51E0); // DEBUG

    //turn on seed mode and turn off rx_berpl_timer_run_slow
    put_ptr_field(gcr_addr, rx_io_pb_nv_iobist_reset, 0b1, read_modify_write);

    //Wait for prbs 15 to sink
    set_debug_state(0x51E1);
    io_spin_us(2);//2 micro-sec

    //turn off seed mode and turn on rx_berpl_timer_run_slow
    put_ptr_field(gcr_addr, rx_io_pb_nv_iobist_reset, 0b0, read_modify_write);

    //let comparison run
    set_debug_state(0x51E2);
    io_spin_us(1);//1 micro-sec

    int error = get_ptr_field(gcr_addr, rx_pb_io_nv_iobist_prbs_error);//pg

    if ( error )
    {
        set_fir(fir_code_dft_error);
    }

    mem_pg_field_put(rx_linklayer_done, 0b1);//pg
    mem_pg_field_put(rx_linklayer_fail, error);//pg
    mem_pg_field_put(rx_fail_flag, error);

    set_debug_state(0x51E3); // DEBUG
}//end eo_llbist
