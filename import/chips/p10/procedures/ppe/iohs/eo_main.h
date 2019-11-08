/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_main.h $              */
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
// *! FILENAME    : eo_main.h
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
// vbr17080800 |vbr     | Changed to individual functions for each cal type. Removed calibration_type typedef.
// vbr16081000 |vbr     | No bank input for IOF
// mbs16062400 |mbs     | Added gcr_addr struct
// vbr16021600 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _EO_MAIN_H_
#define _EO_MAIN_H_

// Run DC Cal on both banks of the lane specified in gcr_addr
void eo_main_dccal(t_gcr_addr* gcr_addr);

// Run Initial Cal on both banks of the lane specified in gcr_addr
void eo_main_init(t_gcr_addr* gcr_addr);

// Run Recal on the ALT bank of the lane specified in gcr_addr
int eo_main_recal(t_gcr_addr* gcr_addr);

#endif //_EO_MAIN_H_

