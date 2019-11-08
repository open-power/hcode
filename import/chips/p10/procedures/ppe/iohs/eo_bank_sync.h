/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_bank_sync.h $         */
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
// *! FILENAME    : eo_bank_sync.h
// *! TITLE       :
// *! DESCRIPTION : Common functions and defines for eyeopt steps
// *!
// *! OWNER NAME  : Brian Albertson     Email: brian.j.albertson@ibm.com
// *! BACKUP NAME : Vikram Raj          Email: vbraj@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// vbr18092700 |vbr     | Added return codes.
// bja18081000 |bja     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _EO_BANK_SYNC_H_
#define _EO_BANK_SYNC_H_

///////////////////////////////////////
// CONSTANTS & DEFINITIONS
///////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Use BERM logic to determine if the banks are aligned on the same data beat
// Alignment is assumed if the BER between the banks is <40%
// If the BER is >40%, the calibration bank is bumped and the BER is remeasured
int align_bank_ui(t_gcr_addr* gcr_addr, t_bank current_cal_bank);

#endif
