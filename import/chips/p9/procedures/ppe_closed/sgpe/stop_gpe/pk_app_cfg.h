/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/pk_app_cfg.h $ */
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

#define STOP_PRIME           0
#define SKIP_L3_PURGE        0
#define SKIP_L3_PURGE_ABORT  0
#define SKIP_CME_BOOT_STOP11 1
#define SKIP_CME_BOOT_IPL_HB 1
#define SKIP_ARRAYINIT       1
#define SKIP_SCAN0           1
#define SKIP_INITF           0

// --------------------

#define EPM_P9_TUNING 1
#define SIMICS_TUNING 0
#define USE_SIMICS_IO 0
#define DEV_DEBUG     1

#if EPM_P9_TUNING
    #define PK_TRACE_BUFFER_WRAP_MARKER 1
#endif
#define PK_TRACE_TIMER_OUTPUT 0
#define PK_TRACE_ENABLE       1

// --------------------

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

// GPE3 is the SGPE and is the route owner for now.
// (Change this to #4 for the 405 when we pull that in.)
#define OCCHW_IRQ_ROUTE_OWNER  3

/// The Instance ID of the OCC processor that this application is intended to run on
///// 0-3 -> GPE, 4 -> 405
#define APPCFG_OCC_INSTANCE_ID 3

/// This application will statically initialize it's external interrupt table
/// using the table defined in pk_app_irq_table.c.
#define STATIC_IRQ_TABLE

/// About OCCHW_IRQ_PMC_PCB_INTR_TYPE1_PENDING :
/// This interrupt is used by the PGPE (GPE2) exclusively. Thus, rather than
///   defining the entire OCCHW_IRQ_ROUTES table here, and thus over-riding
///   the default routing table, I've updated the default table in
///   p9_code/include/occhw_irq_config.h .

/// Static configuration data for external interrupts:
/// Note, that these interrupts only have relevance for 405 IPC messaging and
///   xstop. The PCB type 1 interrupt is configured manually in the code.)
///
/// IRQ#, TYPE, POLARITY, ENABLE
///
#define APPCFG_EXT_IRQS_CONFIG \
    OCCHW_IRQ_CHECK_STOP_GPE3             OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_IPI3_HI_PRIORITY            OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_IPI3_LO_PRIORITY            OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE2_PENDING  OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE3_PENDING  OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE6_PENDING  OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED
#endif /*__PK_APP_CFG_H__*/
