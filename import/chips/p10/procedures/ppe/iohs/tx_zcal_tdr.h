/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_zcal_tdr.h $          */
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
// *! FILENAME    : tx_zcal_tdr.h
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
// gap19041000 |gap     | Created
// -----------------------------------------------------------------------------

#ifndef _TX_ZCAL_TDR_H_
#define _TX_ZCAL_TDR_H_

// Design parameters
#define tx_zcal_tdr_dac_75percent_vio_c    192 /* assumes 255 step dac                                     */
#define tx_zcal_tdr_dac_25percent_vio_c     64 /* assumes 255 step dac                                     */
#define tx_zcal_tdr_pulse_width_c      100
#define tx_zcal_tdr_sample_into_pulse_c      2 /* 2 --> 1/2 into pulse; 4 1/4 into pulse                   */
#define tx_zcal_tdr_16to1_grid_clk_ratio_c  16 /* ui's/pulse_width value for 16:1                          */
#define tx_zcal_tdr_matches_needed_c         2 /* # compare reads that must match before removing segments */


// types of sst segments
typedef enum
{
    SEGTYPE_MAIN_PSEG,
    SEGTYPE_MAIN_NSEG,
    SEGTYPE_PRE1_PSEG,
    SEGTYPE_PRE1_NSEG,
    SEGTYPE_PRE2_PSEG,
    SEGTYPE_PRE2_NSEG
} t_segtype;

void tx_zcal_tdr (t_gcr_addr* gcr_addr_i);
void tx_zcal_tdr_write_en (t_gcr_addr* gcr_addr_i, uint8_t num_2r_equiv_i, t_segtype segtype_i);
bool tx_zcal_tdr_decrement_bank(t_gcr_addr* gcr_addr_i, t_segtype segtype_i, uint8_t* current_pre2_io,
                                uint8_t* current_pre1_io, uint8_t* current_main_io);
bool tx_zcal_tdr_capt_match_mult_rds(t_gcr_addr* gcr_addr_i, uint8_t match_value_i, uint8_t times_i);
uint32_t tx_zcal_tdr_toTherm( const uint32_t i_dec );
uint32_t tx_zcal_tdr_toThermWithHalf( const uint32_t i_dec, const uint8_t i_width );

////////////////////////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
// Some functions and macros to help in debugging.
// These are light weight but the code size and performance hit can add up,
// so allow for a compiler option to disable (IO_DISABLE_DEBUG).
////////////////////////////////////////////////////////////////////////////////////////////
// share with dcc since these are not run at the same time
#if IO_DISABLE_DEBUG == 1
    #define set_rx_dcc_debug_tx_zcal_tdr(marker, value) {}
#else
    // This writes a "marker" followed by a value "value" to the mem_regs which can be used for tracking execution value.
    #define set_rx_dcc_debug_tx_zcal_tdr(marker, value) { mem_regs_u16[pg_addr(rx_dcc_debug_addr)] = (marker);  mem_regs_u16[pg_addr(rx_dcc_debug_addr)] = (value); }
#endif //DISABLE_IO_DEBUG
#endif // _TX_ZCAL_TDR_H_
