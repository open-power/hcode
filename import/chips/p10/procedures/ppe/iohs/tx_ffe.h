/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_ffe.h $               */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
// *! FILENAME    : tx_ffe.h
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
// vbr19120900 |vbr     | Initial implementation of debug levels
// gap19100400 |gap     | Created
// -----------------------------------------------------------------------------

#ifndef _TX_FFE_H_
#define _TX_FFE_H_

// Design parameters
#define tx_ffe_zcal_valid_min_2r_c     33 /* results < this will be replaced with default             */
#define tx_ffe_zcal_default_2r_c       50 /* value used when zcal result is invalid                   */
#define tx_ffe_zcal_bound_min_2r_c     40 /* zcal result will be clipped to this minimum              */
#define tx_ffe_zcal_bound_max_2r_c     65 /* zcal result will be clipped to this maximum              */

// types of sst segments
typedef enum
{
    TX_FFE_SEGTYPE_MAIN_PSEG,
    TX_FFE_SEGTYPE_MAIN_NSEG,
} t_tx_ffe_main_segtype;

typedef enum
{
    TX_FFE_BANKTYPE_PRE1,
    TX_FFE_BANKTYPE_PRE2,
} t_tx_ffe_ffe_banktype;

typedef struct TX_FFE_FFE_CNTL_SEG_STRUCT
{
    uint8_t main ;
    uint8_t ffe  ;
} t_tx_ffe_ffe_seg;

typedef struct TX_FFE_CNTL_SEG_STRUCT
{
    t_tx_ffe_ffe_seg pre1;
    t_tx_ffe_ffe_seg pre2;
    uint8_t main;
} t_tx_ffe_seg;

typedef struct TX_FFE_CNTL_STRUCT
{
    t_tx_ffe_seg pseg ;
    t_tx_ffe_seg nseg ;
} t_tx_ffe_cntl;

void     tx_ffe(t_gcr_addr* gcr_addr_i);
uint8_t  tx_ffe_get_zcal(t_gcr_addr* gcr_addr_i, t_tx_ffe_main_segtype segtype_i);
void     tx_ffe_calc_ffe(uint8_t pre2_coef_x128_i, uint8_t pre1_coef_x128_i, uint8_t zcal_result_nseg_i,
                         uint8_t zcal_result_pseg_i, t_tx_ffe_cntl* seg_values_o);
void     tx_ffe_write_ffe(t_gcr_addr* gcr_addr_i, t_tx_ffe_cntl* seg_values_i);
void     tx_ffe_bound_zcal(uint8_t* zcal_2r_l);
uint8_t  tx_ffe_calc_sel(uint8_t zcal_i, uint8_t ffe_coef_x128_i) ;
uint8_t  tx_ffe_segments_needed_for_ffe(uint8_t nseg_sel_2r_i, uint8_t pseg_sel_2r_i);
void     tx_ffe_write_main_en(t_gcr_addr* gcr_addr_i, uint8_t num_2r_equiv_i, t_tx_ffe_main_segtype segtype_i);
void     tx_ffe_write_ffe_en_sel(t_gcr_addr* gcr_addr_i, uint8_t num_2r_equiv_nseg_main_en_i,
                                 uint8_t num_2r_equiv_nseg_ffe_en_i,
                                 uint8_t num_2r_equiv_pseg_main_en_i, uint8_t num_2r_equiv_pseg_ffe_en_i, t_tx_ffe_ffe_banktype banktype_i);
uint8_t  tx_ffe_fromVecWithHalf(const uint32_t i_vec, const uint8_t i_width);
uint32_t tx_ffe_toTherm(const uint8_t i_dec);
uint32_t tx_ffe_toThermRev(const uint8_t i_dec, const uint8_t i_width);
uint32_t tx_ffe_toThermWithHalf(const uint8_t i_dec, const uint8_t i_width);
uint32_t tx_ffe_toThermWithHalfRev(const uint8_t i_dec, const uint8_t i_width);

////////////////////////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
// Some functions and macros to help in debugging.
// These are light weight but the code size and performance hit can add up,
// so allow for a compiler option to enable/disable based on debug level.
////////////////////////////////////////////////////////////////////////////////////////////
// share with dcc since these are not run at the same time
#if IO_DEBUG_LEVEL < 3
    #define set_tx_dcc_debug_tx_ffe(marker, value) {}
#else
    // This writes a "marker" followed by a value "value" to the mem_regs which can be used for tracking execution value.
    #define set_tx_dcc_debug_tx_ffe(marker, value) { mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (marker);  mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (value); }
#endif //IO_DEBUG_LEVEL
#endif // _TX_FFE_H_
