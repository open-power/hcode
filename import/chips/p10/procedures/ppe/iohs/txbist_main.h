/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/txbist_main.h $          */
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
// *! FILENAME    : txbist_main.h
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : Gary Peterson       Email: garyp@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr19111500 |vbr     | Initial implementation of debug levels
// gap19091000 |gap     | Change rx_dcc_debug to tx_dcc_debug HW503432
// gap18112700 |gap     | Remove min and max defines
// gap18101100 |gap     | Created
// -----------------------------------------------------------------------------

#ifndef _TXBIST_MAIN_H_
#define _TXBIST_MAIN_H_

void txbist_main(t_gcr_addr* gcr_addr_i);
void txbist_main_dcc(t_gcr_addr* gcr_addr_i);
void txbist_main_ls(t_gcr_addr* gcr_addr_i);
void txbist_main_hs(t_gcr_addr* gcr_addr_i);
void txbist_main_hs_pat(t_gcr_addr* gcr_addr_i, uint8_t clk_pattern_i);
void txbist_main_hs_pat_sel(t_gcr_addr* gcr_addr_i, uint8_t clk_pattern_i, uint8_t hs_sel_i);
void txbist_main_set_bist_fail(t_gcr_addr* gcr_addr_i);

////////////////////////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
// Some functions and macros to help in debugging.
// These are light weight but the code size and performance hit can add up,
// so allow for a compiler option to enable/disable based on debug level.
////////////////////////////////////////////////////////////////////////////////////////////
// share with dcc since these are not run at the same time
#if IO_DEBUG_LEVEL < 3
    #define set_tx_dcc_debug_txbist(marker, value) {}
#else
    // This writes a "marker" followed by a value "value" to the mem_regs which can be used for tracking execution value.
    #define set_tx_dcc_debug_txbist(marker, value) { mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (marker);  mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (value); }
#endif //IO_DEBUG_LEVEL
#endif //_TXBIST_MAIN_H_
