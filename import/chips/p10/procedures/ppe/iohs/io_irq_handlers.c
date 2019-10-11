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
// vbr19100300 |vbr     | Removing old P9 IRQ handlers.
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
// Example IRQ Handler
////////////////////////////////////////////////////////////////
void io_example_irq_handler(void* arg, PkIrqId irq)
{
    set_debug_state(0xFE00); // DEBUG - Example IRQ Handler Start

    // Clear the IRQ Status (not a level interrupt) to allow another IRQ to be queued up
    pk_irq_status_clear(irq);

    // Parse input arg to get passed in parameters
    //int *config = (int*)arg;
    //int param0 = config[0]; // configuration parameter 0
    //int param1 = config[1]; // configuration parameter 1

    // Do Stuff Here

    set_debug_state(0xFEFF); // DEBUG - Example IRQ Handler Done
} //io_example_irq_handler()
