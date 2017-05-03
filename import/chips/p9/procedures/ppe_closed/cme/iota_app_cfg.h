/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/iota_app_cfg.h $    */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017                                                         */
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

//Maximum number of external interrupt priority levels
// and thus also the maximum number of prioritized tasks allowed.
#define IOTA_NUM_EXT_IRQ_PRIORITIES  11

// Maximum number of expected nested interrupts
#define IOTA_MAX_NESTED_INTERRUPTS    4

//An "idle" task is one that only runs when the ppe42 engine would otherwise
//be idle and thus has the lowest priority and can be interrupted by anything.
//To automatically disable an "IDLE" task after executing, set this to 1. (OPT)
#define IOTA_AUTO_DISABLE_IDLE_TASKS  0

// Main "execution" stack size in bytes, must be multiple of 8
#define IOTA_EXECUTION_STACK_SIZE  2048

#endif
