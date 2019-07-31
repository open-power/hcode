/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_tx_zcal.h $           */
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
// *! (C) Copyright International Business Machines Corp. 2018
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : io_tx_zcal.h
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
//-------------|--------|-------------------------------------------------------
// vbr18091900 |vbr     | Added functions for writing therm codes.
// vbr18082900 |vbr     | Initial Rev
//------------------------------------------------------------------------------

#ifndef _IO_TX_ZCAL_H_
#define _IO_TX_ZCAL_H_

#include <stdbool.h>

#include "io_lib.h"

// Run Zcal Measurements
void io_tx_zcal_meas(t_gcr_addr* gcr_addr);

///////////////////////////
// Helper Functions
///////////////////////////

// Reset and run offset null on the comparator
void reset_and_null_zcal_comparator(t_gcr_addr* gcr_addr);

// Filtered comparator read: check the comparator multiple times and return the filtered result
int zcal_comparator_filter(t_gcr_addr* gcr_addr);

// Search for the correct segment setting
unsigned int zcal_segment_search(t_gcr_addr* gcr_addr, bool nseg, bool inc);

// Write therm code registers
inline void set_zcal_4x_p(t_gcr_addr* gcr_addr, unsigned int segments);
void set_zcal_1x_p(t_gcr_addr* gcr_addr, unsigned int segments_x2);
void set_zcal_1x_n(t_gcr_addr* gcr_addr, unsigned int segments_x2);

#endif //_IO_TX_ZCAL_H_
