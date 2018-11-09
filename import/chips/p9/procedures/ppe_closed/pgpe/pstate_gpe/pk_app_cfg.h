/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/pk_app_cfg.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2019                                                    */
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

// --------------------
#define EPM_P9_TUNING 0
#define SIMICS_TUNING 0
#define GEN_PSTATE_TBL 1
#define USE_BOOT_TEMP 0
#define DEV_DEBUG     1
#define PK_TRACE_TIMER_OUTPUT 0
#define SGPE_IPC_ENABLED 1
#define OVERRIDE_OTHER_ENGINES_IRQS 0
#define OVERRIDE_PSAFE_PSTATE 0
#define USE_GEN_PSTATE_STRUCT_V 2

///This application uses IPC code
#define GLOBAL_CFG_USE_IPC
#define STATIC_IPC_TABLES

// Force CME and GPE tasks to use the unified interrupt handler.
#define UNIFIED_IRQ_HANDLER_GPE

// This application will use the external timebase register
// (comment this line out to use the decrementer as timebase)
#define APPCFG_USE_EXT_TIMEBASE

#define PLATFORM_PANIC_CODES_H "pgpe_panic_codes.h"

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
#if PK_TRACE_LEVEL == 0   /*No TRACEs*/
    #define PK_TRACE_ENABLE        0
    #define PK_KERNEL_TRACE_ENABLE 0
#elif PK_TRACE_LEVEL == 1 /*only PK_TRACE_INF*/
    #define PK_TRACE_ENABLE        1
    #define PK_TRACE_DBG_SUPPRESS  1
    #define PK_TRACE_CRIT_ENABLE   1
    #define PK_TRACE_CKPT_ENABLE   0
    #define PK_KERNEL_TRACE_ENABLE 0
#elif PK_TRACE_LEVEL == 2 /*only PK_TRACE_INF+DBG+KERNEL*/
    #define PK_TRACE_ENABLE        1
    #define PK_TRACE_DBG_SUPPRESS  0
    #define PK_TRACE_CRIT_ENABLE   1
    #define PK_TRACE_CKPT_ENABLE   1
    #define PK_KERNEL_TRACE_ENABLE 0
#else                    /*All TRACEs*/
    #define PK_TRACE_ENABLE        1
    #define PK_TRACE_DBG_SUPPRESS  0
    #define PK_TRACE_CRIT_ENABLE   1
    #define PK_TRACE_CKPT_ENABLE   1
    #define PK_KERNEL_TRACE_ENABLE 1
#endif


// GPE2 is the PGPE and is the route owner for now.
// (Change this to #3 when pulling in SGPE)
#define OCCHW_IRQ_ROUTE_OWNER  3

/// The Instance ID of the OCC processor that this application is intended to run on
///// 0-3 -> GPE, 4 -> 405
#define APPCFG_OCC_INSTANCE_ID 2

/// This application will statically initialize it's external interrupt table
/// using the table defined in pk_app_irq_table.c.
#define STATIC_IRQ_TABLE

#define PK_MACHINE_HANDLER_SUPPORT 1

#define PPE42_MACHINE_CHECK_HANDLER \
    b __special_machine_check_handler


/// Static configuration data for external interrupts:
///
/// IRQ#, TYPE, POLARITY, ENABLE
///
#define APPCFG_EXT_IRQS_CONFIG \
    OCCHW_IRQ_OCC_ERROR                   OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_GPE3_HALT                   OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_CHECK_STOP_GPE2             OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_IVRM_PVREF_ERROR            OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_IPI2_HI_PRIORITY            OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_IPI2_LO_PRIORITY            OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE1_PENDING  OCCHW_IRQ_TYPE_LEVEL OCCHW_IRQ_POLARITY_HI      OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE4_PENDING  OCCHW_IRQ_TYPE_LEVEL OCCHW_IRQ_POLARITY_HI      OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE5_PENDING  OCCHW_IRQ_TYPE_LEVEL OCCHW_IRQ_POLARITY_HI      OCCHW_IRQ_MASKED
#endif /*__PK_APP_CFG_H__*/
