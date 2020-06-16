/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_seg_test.h $          */
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
// *! FILENAME    : tx_seg_test.h
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : Gary Peterson       Email: garyp@us.ibm.com
// *! BACKUP NAME : Brian Albertson     Email: brian.j.albertson@ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// gap20021800 |gap     | Changed from IO_DISABLE_DEBUG to IO_DEBUG_LEVEL
// gap19121000 |gap     | Created
// -----------------------------------------------------------------------------

#ifndef _TX_SEG_TEST_H_
#define _TX_SEG_TEST_H_

////////////////////////////////////////////////////////////////////////////////////////////
// types of sst banks
// BANKTYPE_MIN, BANKTYPE_MAX are defined to allow iteration w/o hardcoding limits.
// Likewise, BANKTYPE_MAX_SEL is defined to show which banks have selects; they
// must be listed first.
typedef enum
{
    BANKTYPE_MIN,
    BANKTYPE_PRE1 = BANKTYPE_MIN,
    BANKTYPE_PRE2,
    BANKTYPE_MAX_SEL = BANKTYPE_PRE2,
    BANKTYPE_MAIN_LOW,
    BANKTYPE_MAIN_HIGH,
    BANKTYPE_MAX = BANKTYPE_MAIN_HIGH
} t_banktype;

void tx_seg_test(t_gcr_addr* gcr_addr_i);
void tx_seg_test_test_bank(t_gcr_addr* gcr_addr_i, t_banktype banktype_i, uint8_t sel_i);
void tx_seg_test_test_seg(t_gcr_addr* gcr_addr_i);
void tx_seg_test_clear_bank(t_gcr_addr* gcr_addr_i, t_banktype banktype_i);
void tx_seg_test_setup(t_gcr_addr* gcr_addr_i);
void tx_seg_test_0_pattern(t_gcr_addr* gcr_addr_i);
void tx_seg_test_1_pattern(t_gcr_addr* gcr_addr_i);
void tx_seg_test_set_segtest_fail(t_gcr_addr* gcr_addr_i);
void tx_seg_test_restore(t_gcr_addr* gcr_addr_i);

// DEBUG FUNCTIONS
// Some functions and macros to help in debugging.
// These are light weight but the code size and performance hit can add up,
// so allow for a compiler option to disable (IO_DEBUG_LEVEL).
////////////////////////////////////////////////////////////////////////////////////////////
// share with dcc since these are not run at the same time
#if IO_DEBUG_LEVEL < 3
    #define set_tx_dcc_debug_tx_seg_test(marker, value) {}
#else
    // This writes a "marker" followed by a value "value" to the mem_regs which can be used for tracking execution value.
    #define set_tx_dcc_debug_tx_seg_test(marker, value) { mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (marker);  mem_regs_u16[pg_addr(tx_dcc_debug_addr)] = (value); }
#endif //IO_DEBUG_LEVEL
#endif //_TX_SEG_TEST_H_
