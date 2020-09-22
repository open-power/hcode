/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_vga.h $               */
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
// *! FILENAME    : eo_vga.h
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
// vbr20091600 |vbr     | Added saved_Amax pointer input
// vbr17081501 |vbr     | Added copy_to_b input.
// vbr16081000 |vbr     | No bank input for IOF
// vbr16032100 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _EO_VGA_H_
#define _EO_VGA_H_

#include <stdbool.h>
#include "eo_common.h"

// VGA Gain loop portion of VGA
int eo_vga(t_gcr_addr* gcr_addr, t_bank bank, int* saved_Amax, bool* gain_changed, bool recal, bool copy_gain_to_b,
           bool copy_gain_to_b_loop, bool first_loop_iteration );

//copy function for vga and write
void write_a_copy_b (t_gcr_addr* gcr_addr, int gain, t_bank bank, int copy_gain_to_b );

//  Gain loop portion of VGA
//int eo_vga_gain(t_gcr_addr *gcr_addr, t_bank bank, bool *gain_changed, bool recal, bool copy_gain_to_b, bool copy_gain_to_b_loop, bool first_loop_iteration);

// Path offset adjustment portion of VGA; also does the historical eye height.
//int eo_vga_path_offset(t_gcr_addr *gcr_addr, t_bank bank);

#endif //_EO_VGA_H_
