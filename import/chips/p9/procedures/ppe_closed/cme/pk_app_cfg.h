/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pk_app_cfg.h $      */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
#ifndef __PK_APP_CFG_H__
#define __PK_APP_CFG_H__
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file pk_app_cfg.h
/// \brief Application specific overrides go here.
///

#define HW386841_PLS_SRR1_DSL_STOP1_FIX 0
#define BROADSIDE_SCAN0                 0
#define TEST_ONLY_BCE_IRR               0

#define STOP_PRIME            0
#define SKIP_ABORT            0
#define SKIP_L2_PURGE_ABORT   0
#define SKIP_ENTRY_CATCHUP    0
#define ISTEP15_HACK          0

#if !ISTEP15_HACK
    #define SKIP_EXIT_CATCHUP     0
    #define EPM_P9_TUNING         1
    #define SKIP_SCAN0            0
    #define SKIP_INITF            0
    #define SKIP_SELF_RESTORE     0
    #define SKIP_RAM_HRMOR        0
    #define SKIP_BCE_SCAN_RING    1
    #define SKIP_BCE_SCOM_RESTORE 1
    #define SPWU_AUTO             1
    #define SKIP_ARRAYINIT        0
#else
    #define SKIP_EXIT_CATCHUP     1
    #define EPM_P9_TUNING         0
    #define SKIP_SCAN0            0
    #define SKIP_INITF            0
    #define SKIP_SELF_RESTORE     0
    #define SKIP_RAM_HRMOR        0
    #define SKIP_BCE_SCAN_RING    0
    #define SKIP_BCE_SCOM_RESTORE 1
    #define SPWU_AUTO             0
    #define SKIP_ARRAYINIT        0
#endif


// --------------------

#define SIMICS_TUNING         0
#define USE_SIMICS_IO         0
#define DEV_DEBUG             1

#if EPM_P9_TUNING
    #define PK_TRACE_BUFFER_WRAP_MARKER 1
#endif
#define PK_TRACE_TIMER_OUTPUT  0
#define PK_TRACE_ENABLE        1
#define PK_KERNEL_TRACE_ENABLE 1

// --------------------

// Force CME and GPE tasks to use the unified interrupt handler.
#define UNIFIED_IRQ_HANDLER_CME

// This application will use the external timebase register
// (comment this line out to use the decrementer as timebase)
#define APPCFG_USE_EXT_TIMEBASE

// If we are using the external timebase then assume
// a frequency of 37.5Mhz.  Otherwise, the default is to use
// the decrementer as a timebase and assume a frequency of
// 600MHz
// In product code, this value will be IPL-time configurable.
#ifdef APPCFG_USE_EXT_TIMEBASE
    #define PPE_TIMEBASE_HZ 37500000
#else
    #define PPE_TIMEBASE_HZ 600000000
#endif /* APPCFG_USE_EXT_TIMEBASE */

// --------------------

/// This file provides architecture-specific symbol names for each interrupt
#include "cmehw_interrupts.h"

/// This application will statically initialize it's external interrupt table
/// using the table defined in pk_app_irq_table.c.
#define STATIC_IRQ_TABLE

#endif /*__PK_APP_CFG_H__*/
