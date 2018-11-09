/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/pk_app_cfg.h $ */
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

// Debug only enablement

#define DEBUG_RUNTIME_STATE_CHECK 0

// Function disablement

#define DISABLE_STOP8             1

// --------------------

#if NIMBUS_DD_LEVEL == 10
    #define HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX            1
    #define HW388878_NDD1_VCS_POWER_ON_IN_CHIPLET_RESET_FIX 1
    #define NDD1_FUSED_CORE_MODE_SCAN_FIX                   1
#endif

// --------------------

#if !SKIP_IPC
    #define GLOBAL_CFG_USE_IPC
    #define STATIC_IPC_TABLES
#endif

// --------------------

#if EPM_P9_TUNING
    // EPM already consumed hardware fix
    #undef  HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX
    #define HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX            0

    // EPM doesnt have this problem
    #undef  HW388878_NDD1_VCS_POWER_ON_IN_CHIPLET_RESET_FIX
    #define HW388878_NDD1_VCS_POWER_ON_IN_CHIPLET_RESET_FIX 0

    // EPM doesnt have real homer images and pba setup to access homer
    #undef  SKIP_HOMER_ACCESS
    #define SKIP_HOMER_ACCESS 1

    // EPM uses broadside RTX instead of BCE
    #undef  SKIP_CME_BOOT_STOP11
    #define SKIP_CME_BOOT_STOP11 1

    #undef  SKIP_CME_BOOT_IPL_HB
    #define SKIP_CME_BOOT_IPL_HB 1

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
    OCCHW_IRQ_GPE2_HALT                   OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_CHECK_STOP_GPE3             OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_IPI3_HI_PRIORITY            OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_IPI3_LO_PRIORITY            OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE0_PENDING  OCCHW_IRQ_TYPE_LEVEL OCCHW_IRQ_POLARITY_HI      OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE2_PENDING  OCCHW_IRQ_TYPE_LEVEL OCCHW_IRQ_POLARITY_HI      OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE3_PENDING  OCCHW_IRQ_TYPE_LEVEL OCCHW_IRQ_POLARITY_HI      OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE6_PENDING  OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED \
    OCCHW_IRQ_PMC_PCB_INTR_TYPE7_PENDING  OCCHW_IRQ_TYPE_EDGE  OCCHW_IRQ_POLARITY_RISING  OCCHW_IRQ_MASKED

// --------------------

/// This file provides platform specific panic codes
#define PLATFORM_PANIC_CODES_H "sgpe_panic_codes.h"

#define PK_MACHINE_HANDLER_SUPPORT 1

#define PPE42_MACHINE_CHECK_HANDLER \
    b __special_machine_check_handler

#endif /*__PK_APP_CFG_H__*/
