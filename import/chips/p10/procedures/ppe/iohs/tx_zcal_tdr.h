/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_zcal_tdr.h $          */
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
// gap20092200 |gap     | Update for 32:1 in 16:1 mode
// gap20032600 |gap     | Added wait time for th after changing segments
// vbr19111500 |vbr     | Initial implementation of debug levels
// gap19091000 |gap     | Change rx_dcc_debug to tx_dcc_debug HW503432
// gap19041000 |gap     | Created
// -----------------------------------------------------------------------------

#ifndef _TX_ZCAL_TDR_H_
#define _TX_ZCAL_TDR_H_

// Design parameters
#define tx_zcal_tdr_dac_75percent_vio_c    192 /* assumes 255 step dac                                     */
#define tx_zcal_tdr_dac_25percent_vio_c     64 /* assumes 255 step dac                                     */

/* at 16 ui/grid clk, 32G, a value of 100 gives a 100nS pulse width                                        */
#define tx_zcal_tdr_pulse_width_c          100 /* width of pulse; period is 4*pulse_width*grid clk period  */

/* want the sample after the pulse settling time; the later in the pulse, the better, though we don't want */
/* to hit the trailing edge                                                                                */
/* designer sim shows TH to edge with offset 0 is 100 UI =~ 7 grid clocks at 16ui/grid clock               */
/* for some margin, sampling 10 grid clocks from end; => offset 2*pw_reg_val - 10 = 190                    */
#define tx_zcal_tdr_sample_position_c      190 /* grid clocks from start of pulse to sample                */
#define tx_zcal_tdr_matches_needed_c         2 /* # compare reads that must match before removing segments */

/* 20 tdr pulses to settle; at 50G, 32:1, pw=100; a period is 12800/50 = 256nS; x 20 = 5.12 uS; assume at  */
/* least 0.12 us due to pepe put/get --> 5uS wait time                                                     */
#define tx_zcal_tdr_sw_wait_us_c             5 /* wait time for track and hold to settle on phase switch   */
#define tx_zcal_tdr_seg_wait_us_c            5 /* wait time for track and hold to settle on segment update */

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
bool tx_zcal_tdr_split_main_therm (const uint32_t num_2r_equiv_i, uint8_t high_width_i, uint8_t low_width_i,
                                   uint32_t* high_bits_io, uint32_t* low_bits_io);
uint32_t tx_zcal_tdr_toTherm( const uint32_t i_dec );
uint32_t tx_zcal_tdr_toThermWithHalf( const uint32_t i_dec, const uint8_t i_width );

////////////////////////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
// Some functions and macros to help in debugging.
// These are light weight but the code size and performance hit can add up,
// so allow for a compiler option to enable/disable based on debug level.
////////////////////////////////////////////////////////////////////////////////////////////
// share with dcc since these are not run at the same time
#if IO_DEBUG_LEVEL < 3
    #define set_tx_dcc_debug_tx_zcal_tdr(marker, value) {}
#else
    // This writes a "marker" followed by a value "value" to the mem_regs which can be used for tracking execution value.
    #define set_tx_dcc_debug_tx_zcal_tdr(marker, value) { mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (marker);  mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (value); }
#endif //IO_DEBUG_LEVEL
#endif // _TX_ZCAL_TDR_H_
