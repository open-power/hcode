/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/pk_app_cfg.h $           */
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
// *! FILENAME    : pk_app_cfg.h
// *! TITLE       :
// *! DESCRIPTION : Application specific overrides for the kernel go here.
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr18120400 |vbr     | Updated comments and added TIMER_US_DIVIDER.
// vbr18072000 |vbr     | HW456268: Updated for P10 where PPE runs at 250MHz (2GHz PAU clock divided by 8).
// vbr16072900 |vbr     | Changes to properly handle different clock rate in half_rate (4:1) mode
// vbr16071400 |vbr     | Now override PK_BASE_FREQ_HZ
// vbr16061600 |vbr     | Initial Rev (Copied from Brian A.)
// -----------------------------------------------------------------------------

#ifndef __PK_APP_CFG_H__
#define __PK_APP_CFG_H__


// ----------------------------------------------------------------------------
// The timer input to the memory bolt-on is sourced by a pervasive hang pulse
// generation macro which is configured to rise every 32 ns.
// When APPCFG_USE_EXT_TIMEBASE is defined, the DEC timer uses this hang pulse;
// otherwise, it uses the PPE core clock which is the PAU clock divided by 8.
//   P10: PAU clock  = 2000 MHz => 250 MHz core clock (4 ns)
//   P10: Hang pulse = 31.250 MHz hang pulse (32 ns)
// A divider is defined for the stopwatch function to aproximate microseconds
// by doing a shift instead of a divide. This introduces a small error.
//   Core clock: 250 / 256 = 97.66%
//   Hang pulse: 31.25 / 32 = 97.66%
#ifdef APPCFG_USE_EXT_TIMEBASE
    #define PK_BASE_FREQ_HZ  31250000
    #define TIMER_US_DIVIDER 32
#else
    #define PK_BASE_FREQ_HZ 250000000
    #define TIMER_US_DIVIDER 256
#endif /* APPCFG_USE_EXT_TIMEBASE */


/// This file provides architecture-specific symbol names for each interrupt
#include "iohw_interrupts.h"

/// This application will statically initialize it's external interrupt table
/// using the table defined in pk_app_irq_table.c.
#define STATIC_IRQ_TABLE

#endif /*__PK_APP_CFG_H__*/
