/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_qpa.h $               */
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
// *! FILENAME    : eo_qpa.h
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : John Gullickson     Email: gullicks@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr19061200 |vbr     | Added wrapper around nedge_seek_step() to limit step size
// jfg19040800 |jfg     | Comment updates and remove ber_lim from edge_seek
// jfg19030500 |jfg     | Rename recal_1strun as recal_2ndrun to match usage in main
// jfg19022800 |jfg     | Add result hysteresis and restore
// jfg19022200 |jfg     | Update prototype and change seek enum str to doseek
// jfg19021501 |jfg     | fix rx_abort call
// jfg19020600 |jfg     | Modified for new function def
// -----------------------------------------------------------------------------

#ifndef _EO_QPA_H_
#define _EO_QPA_H_

#include "eo_common.h"

// Order is used to iterate. noseekNS and noseekEW must remain after doseek
typedef enum  {noseek, doseek, noseekNS, noseekEW} t_seek;

/////////////////////////////////////////////////////////////////////////////////
// FUNCDOC: nedge_seek_step
// multi-purpose eye sample position shifting and testing
// Note: There's an engineering decision here to check the BER count *after* the PR movement. Yes after.
//       The motivation is to return a value which encompases the post-movement position. It should be understood
//       that this value may include a longer term measurement from the last PR position depending on the time
//       elapsed outside the function before a repeat call.
//       This is deemed more conservative because it 1) captures the newly positioned sample and
//       2) provides hysteresis of diminishing error when a sub-threshold rate is sought
// parms:
// - Estep   : Step size for edge mini-PR to take
// - Dstep   : Step size for data mini-PR to take
// - pr_vals: 4 int array containing values of MINI-PR in order of NS Data; NS Edge; EW Data; EW Edge
//--- dirL1R0 -- noBER -- seek_edge --- ACTION --- (IF PR MAX or PR MIN exceeded return max_eye) -------------------
//    FALSE      FALSE    noseek{ns/ew} Subtract D from selected DATA PR and add E to EDGE; Perform BER check
//    FALSE      FALSE    doseek        Add D to selected DATA PR and subtract E from EDGE PR; Perform BER check
//    FALSE      TRUE     noseek{ns/ew} Subtract D from selected DATA PR and add E to EDGE; Do NOT run BER check
//    FALSE      TRUE     doseek        Add D to selected DATA PR and subtract E from EDGE PR; Do NOT run BER check
//    TRUE       FALSE    noseek{ns/ew} Add D to selected DATA PR and subtract E from EDGE; Perform BER check
//    TRUE       FALSE    doseek        Subtract D from selected DATA PR and add E to EDGE PR; Perform BER check
//    TRUE       TRUE     noseek{ns/ew} Add D to selected DATA PR and subtract E from EDGE ; Do NOT run BER check
//    TRUE       TRUE     doseek        Subtract D from selected DATA PR and add E to EDGE PR; Do NOT run BER check
// Return value:
//   -- An error count value if noBER = false else 0
//   -- A constant == "max_eye" if the mini-PR extents will be violated
int nedge_seek_step (t_gcr_addr* gcr_addr, t_bank bank, unsigned int Dstep, unsigned int Estep, bool dirL1R0,
                     bool noBER, t_seek seek_edge, int* pr_vals);//, int ber_lim

// Wrapper aroung nedge_seek_step for stepping multiple times at a single step a time so don't violate Mini PR step limitations
int nedge_seek_multistep (t_gcr_addr* gcr_addr, t_bank bank, unsigned int Dstep, unsigned int Estep, bool dirL1R0,
                          bool noBER, t_seek seek_edge, int* pr_vals);//, int ber_lim


// Run QPA on a lane
int eo_qpa(t_gcr_addr* gcr_addr, t_bank bank, bool recal_2ndrun, bool* pr_changed);

#endif //_EO_QPA_H_

