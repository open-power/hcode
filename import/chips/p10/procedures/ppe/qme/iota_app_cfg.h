/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/iota_app_cfg.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2020                                                    */
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
#if !defined(__IOTA_APP_CFG__)
#define __IOTA_APP_CFG__
/**
 * @file iota_app_cfg.h
 * @brief IOTA CONFIGURATION SETTINGS
 */

#if !defined(USE_PPE_IMPRECISE_MODE) && (defined(USE_QME_QUEUED_SCOM) || defined(USE_QME_QUEUED_SCAN))
    #error "USE_PPE_IMPRECISE_MODE must be defined in order to enable USE_QME_QUEUED_SCOM or USE_QME_QUEUED_SCAN"
#endif

// --------------------

//EPM SPECIFIC
#define PK_TRACE_BUFFER_WRAP_MARKER 1

// --------------------
#define VALUE_TO_STRING(x) #x
#define VALUE(x) VALUE_TO_STRING(x)
#define VAR_NAME_VALUE(var) #var "="  VALUE(var)
//#pragma message(VAR_NAME_VALUE(PK_TRACE_LEVEL))
//#pragma message(VAR_NAME_VALUE(CURRENT_GIT_HEAD))

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

// The actual timebase is provided in an ipl time attribute.
// If the attribute is not set up then PPE_TIMEBASE_HZ is used as a default.
// If we are using the external timebase register, then assume a nominal
// frequency of nest_freq/64  (2GHz/64).
// If APPCFG_USE_EXT_TIMEBASE is not defined then use the internal
// decrementer as a timebase.

#ifdef APPCFG_USE_EXT_TIMEBASE
    // Nest freq / 64 - use a nominal 2GH as the default
    #define PPE_TIMEBASE_HZ 31250000
#else
    #define PPE_TIMEBASE_HZ 600000000
#endif

// --------------------

/// This file provides architecture-specific symbol names for each interrupt
#define PLATFORM_PANIC_CODES_H "qme_panic_codes.h"
#include "iota_panic_codes.h"
#include "qmehw_interrupts.h"

#if !defined(__ASSEMBLER__)

    #include "iota_uih_cfg.h"

#endif


#define ENABLE_FIT_TIMER             1
#define ENABLE_DEC_TIMER             0
#define ENABLE_WATCHDOG_TIMER        0


#define NUM_TIMER_INTERRUPTS \
    (ENABLE_WATCHDOG_TIMER ? 1:0 + \
     ENABLE_DEC_TIMER ? 1:0 + \
     ENABLE_FIT_TIMER ? 1:0)

// Maximum number of expected nested interrupts
//
// We add 3 here to account for FIT, DEC, and Watchdog Interrupts
// First, we start with the total number of priority levels, and then
// add one for each enabled timer interrupt plus one to leave a
// stack entry unused for checking
//
#define IOTA_MAX_NESTED_INTERRUPTS   (IOTA_NUM_EXT_IRQ_PRIORITIES + \
                                      NUM_TIMER_INTERRUPTS + 1)

// --------------------

//An "idle" task is one that only runs when the ppe42 engine would otherwise
//be idle and thus has the lowest priority and can be interrupted by anything.
//To enable IDLE task support in the kernel set this to 1. (OPT)
#define IOTA_IDLE_TASKS_ENABLE 0

//To automatically disable an "IDLE" task after executing, set this to 1. (OPT)
#define IOTA_AUTO_DISABLE_IDLE_TASKS  0

// Main "execution" stack size in bytes, must be multiple of 8
#define IOTA_EXECUTION_STACK_SIZE  2048

#define LOCAL_TIMEBASE_REGISTER STD_LCL_TBR

#endif
