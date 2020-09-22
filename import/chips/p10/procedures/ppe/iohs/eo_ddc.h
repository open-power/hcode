/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_ddc.h $               */
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
// *! FILENAME    : eo_ddc.h
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
// jfg20090100 |jfg     | HW532333 Move offset changes to eo_main
// jfg18081000 |jfg     | Modified for new function def
// vbr16021600 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _EO_DDC_H_
#define _EO_DDC_H_

#include "eo_common.h"

// All four PR positions packed in as: {Data NS, Edge NS, Data EW, Edge EW}
#define prDns_i 0
#define prEns_i 1
#define prDew_i 2
#define prEew_i 3

#define prmask_Dns(a) ( ((a) & (rx_a_pr_ns_data_mask >> rx_a_pr_ns_edge_shift)) >> (rx_a_pr_ns_data_shift - rx_a_pr_ns_edge_shift) )
#define prmask_Ens(a) ( ((a) & (rx_a_pr_ns_edge_mask >> rx_a_pr_ns_edge_shift)) )
#define prmask_Dew(a) ( ((a) & (rx_a_pr_ew_data_mask >> rx_a_pr_ew_edge_shift)) >> (rx_a_pr_ew_data_shift - rx_a_pr_ew_edge_shift) )
#define prmask_Eew(a) ( ((a) & (rx_a_pr_ew_edge_mask >> rx_a_pr_ew_edge_shift)) )

bool  pr_recenter(t_gcr_addr* gcr_addr, t_bank bank, int* pr_vals, uint32_t* Esave, uint32_t* Dsave, int* Doffset,
                  int Eoffset);
// Run DDC on a lane and update historical width
int eo_ddc(t_gcr_addr* gcr_addr, t_bank bank, bool recal, bool recal_dac_changed);

#endif //_EO_DDC_H_
