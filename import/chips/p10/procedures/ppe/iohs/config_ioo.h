/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/config_ioo.h $           */
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
// *! FILENAME    : config_ioo.h
// *! TITLE       :
// *! DESCRIPTION : Configuration options for IOO
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr18092700 |vbr     | File is mostly stale old idea we're not using so cleaning up.
// jfg18041800 |jfg     | add ctle_mode and ctle_quad_diff_thresh
// vbr17082500 |vbr     | Removed max_lanes since added a fw_reg for num_lanes.
// vbr17020600 |vbr     | Renamed test_mode to static_config (and inverted meaning)
// vbr16092100 |vbr     | Added config for ctle middle of eye method
// vbr16033100 |vbr     | Added additional vga config
// vbr16033000 |vbr     | Added max_lanes
// vbr16032500 |vbr     | changed to test_mode; made enables match RegDef defaults
// vbr16030200 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _CONFIG_IOO_H_
#define _CONFIG_IOO_H_

#include <stdbool.h>


///////////////////////////////////////////////////////////////////////////
// IO_READ_CONFIG: Read configuration from mem_regs.
// This should be 1 (true) for Mesa sim runs and lab testing.
// It allows EO steps to be individually enabled/disabled and some other
// options to be set through the mem_regs.
///////////////////////////////////////////////////////////////////////////
#if IO_READ_CONFIG == 1
    #define static_config 0
#else
    #define static_config 1
#endif


/////////////////////////
// Eyeopt Steps (DC Cal)
/////////////////////////


/////////////////////////
// Eyeopt Steps (Init)
/////////////////////////


/////////////////////////
// Eyeopt Steps (Recal)
/////////////////////////


////////////////////////
// DFT on off
/////////////////////////
#define txbist_run false
#define rxbist_run false
#define segtest_run110 false
#define segtest_run011 false
#define segtest_run010 false
#define zcal_run false


/////////////////////////
// Other Options
/////////////////////////

// ctle quadrant mode: 0=Run on each quadrant, 1=Run on North quad only
#define ctle_mode 0

// Value larger than 0 enables and causes an error condition if any quadrant peaking result differs from the median by more than this amount
#define ctle_quad_diff_thresh 0

// hist_min_eye_width_mode: 0=Check all lanes on bus, 1=Check only the designated rx_hist_min_eye_width_lane
#define hist_min_eye_width_mode 0


#endif //_CONFIG_IOO_H_

