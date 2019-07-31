/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_init_and_reset.h $    */
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
// *! FILENAME    : io_init_and_reset.h
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr17120100 |vbr     | Renamed file and added new function.
// vbr16101200 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _IO_INIT_AND_RESET_H_
#define _IO_INIT_AND_RESET_H_

#include "io_lib.h"

// Initialize HW Regs
void io_hw_reg_init(t_gcr_addr* gcr_addr);

// Reset and Re-initialize per-lane HW Regs. Also clear per-lane mem_regs.
void io_reset_lane(t_gcr_addr* gcr_addr);

// Power up a group (both RX and TX)
void io_group_power_on(t_gcr_addr* gcr_addr);

// Power down a group (both RX and TX)
void io_group_power_off(t_gcr_addr* gcr_addr);

// Power up a lane (both RX and TX)
void io_lane_power_on(t_gcr_addr* gcr_addr);

// Power down a lane (both RX and TX)
void io_lane_power_off(t_gcr_addr* gcr_addr);

#endif //_IO_INIT_AND_RESET_H_
