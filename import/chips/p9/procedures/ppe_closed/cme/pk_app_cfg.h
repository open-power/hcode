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

// debug only enablement

#define DEBUG_RUNTIME_STATE_CHECK 0
#define TEST_ONLY_BCE_IRR         0

// --------------------

#define USE_PPE_IMPRECISE_MODE
#define USE_CME_QUEUED_SCOM
#define USE_CME_QUEUED_SCAN

#if !defined(USE_PPE_IMPRECISE_MODE) && (defined(USE_CME_QUEUED_SCOM) || defined(USE_CME_QUEUED_SCAN))
    #error "USE_PPE_IMPRECISE_MODE must be defined in order to enable USE_CME_QUEUED_SCOM or USE_CME_QUEUED_SCAN"
#endif

// @todo RTC 161182

#if NIMBUS_DD_LEVEL == 1
    #define HW386841_NDD1_DSL_STOP1_FIX         1
    #define HW402407_NDD1_TLBIE_STOP_WORKAROUND 1
    #define HW405292_NDD1_PCBMUX_SAVIOR         1
    #define MASK_MSR_SEM6
    #define RUN_NDD1_ABIST_IN_PARALLEL_MODE     1
#endif

// --------------------

#if EPM_P9_TUNING
    // EPM use broadside RTX instead of BCE
    #undef  SKIP_BCE_SCAN_RING
    #define SKIP_BCE_SCAN_RING 1

    #undef  SKIP_BCE_SCOM_RESTORE
    #define SKIP_BCE_SCOM_RESTORE 1

    #undef  LAB_P9_TUNING
    #define LAB_P9_TUNING 0

    #define PK_TRACE_BUFFER_WRAP_MARKER 1
    #define __FAPI_DELAY_SIM__
#endif

// --------------------

#if PK_TRACE_LEVEL == 0   /*No TRACEs*/
    #define PK_TRACE_ENABLE        0
    #define PK_KERNEL_TRACE_ENABLE 0
#elif PK_TRACE_LEVEL == 1 /*only PK_TRACE_ERR+INF*/
    #define PK_TRACE_ENABLE        1
    #define PK_TRACE_DBG_SUPPRESS  1
    #define PK_TRACE_CTRL_ENABLE   1
    #define PK_TRACE_CRIT_ENABLE   1
    #define PK_TRACE_CKPT_ENABLE   0
    #define PK_KERNEL_TRACE_ENABLE 0
#elif PK_TRACE_LEVEL == 2 /*only PK_TRACE_ERR+INF+DBG+KERNEL*/
    #define PK_TRACE_ENABLE        1
    #define PK_TRACE_DBG_SUPPRESS  1
    #define PK_TRACE_CTRL_ENABLE   1
    #define PK_TRACE_CRIT_ENABLE   1
    #define PK_TRACE_CKPT_ENABLE   1
    #define PK_KERNEL_TRACE_ENABLE 1
#else                    /*All TRACEs*/
    #define PK_TRACE_ENABLE        1
    #define PK_TRACE_DBG_SUPPRESS  0
    #define PK_TRACE_CTRL_ENABLE   1
    #define PK_TRACE_CRIT_ENABLE   1
    #define PK_TRACE_CKPT_ENABLE   1
    #define PK_KERNEL_TRACE_ENABLE 1
#endif

// --------------------

// If we are using the external timebase then assume
// a frequency of 37.5Mhz.  Otherwise, the default is to use
// the decrementer as a timebase and assume a frequency of 600MHz
// In product code, this value will be IPL-time configurable.

#ifdef APPCFG_USE_EXT_TIMEBASE
    #define PPE_TIMEBASE_HZ 37500000
#else
    #define PPE_TIMEBASE_HZ 600000000
#endif

// --------------------

/// This file provides architecture-specific symbol names for each interrupt
#include "cmehw_interrupts.h"

/// This file provides platform specific panic codes
#define PLATFORM_PANIC_CODES_H "cme_panic_codes.h"


#endif /*__PK_APP_CFG_H__*/
