/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_eq_7_unused.H $       */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_ppe_eq_7_H_UNUSED__
#define __p10_ppe_eq_7_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> [QME_ERR]
//ERRCODE: // Some of the name targets not found in address targets: eq

static const uint32_t QME_ERR = 0xc0000100ull;

static const uint32_t QME_ERR_PPE_INTERNAL_ERROR = 0;
static const uint32_t QME_ERR_PPE_EXTERNAL_ERROR = 1;
static const uint32_t QME_ERR_PPE_PROGRESS_ERROR = 2;
static const uint32_t QME_ERR_PPE_BREAKPOINT_ERROR = 3;
static const uint32_t QME_ERR_RESCLK_FREEZE = 4;
static const uint32_t QME_ERR_RESCLK_FREEZE_LEN = 4;
static const uint32_t QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR = 8;
static const uint32_t QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR_LEN = 4;
static const uint32_t QME_ERR_SPECIAL_WKUP_DONE_WINDOW = 12;
static const uint32_t QME_ERR_SPECIAL_WKUP_DONE_WINDOW_LEN = 4;
static const uint32_t QME_ERR_DISABLED_INTR = 16;
static const uint32_t QME_ERR_DISABLED_INTR_LEN = 4;
static const uint32_t QME_ERR_DECONFIGURED_INTR = 20;
static const uint32_t QME_ERR_DECONFIGURED_INTR_LEN = 4;
static const uint32_t QME_ERR_CTFS_ERR = 24;
static const uint32_t QME_ERR_CTFS_ERR_LEN = 4;
static const uint32_t QME_ERR_CPMS_ERR = 28;
static const uint32_t QME_ERR_CPMS_ERR_LEN = 4;
static const uint32_t QME_ERR_PCB_ENDPOINT_RESET = 32;
static const uint32_t QME_ERR_PCB_NETWORK_RESET = 33;
static const uint32_t QME_ERR_PIG_PENDING_SOURCE_LOST = 34;
static const uint32_t QME_ERR_PIG_PENDING_SOURCE_LOST_LEN = 6;
static const uint32_t QME_ERR_SPARE = 40;
static const uint32_t QME_ERR_SPARE_LEN = 4;
static const uint32_t QME_ERR_LOCAL_ACCESS_PROTECT_ERR = 44;
static const uint32_t QME_ERR_LOCAL_ACCESS_REGION_ERR = 45;
static const uint32_t QME_ERR_LOCAL_ACCESS_PARTIAL_ERR = 46;
//<< [QME_ERR]
// ppe_eq/reg00007.H

//>> [QME_QHTTRIG]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_QHTTRIG = 0xc0001b00ull;

static const uint32_t QME_QHTTRIG_START = 0;
static const uint32_t QME_QHTTRIG_STOP = 1;
static const uint32_t QME_QHTTRIG_PAUSE = 2;
//<< [QME_QHTTRIG]
// ppe_eq/reg00007.H

//>> [QME_SWPR1]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_SWPR1 = 0xc0000940ull;

static const uint32_t QME_SWPR1_BAR = 0;
static const uint32_t QME_SWPR1_BAR_LEN = 27;
static const uint32_t QME_SWPR1_SIZE = 44;
static const uint32_t QME_SWPR1_SIZE_LEN = 15;
//<< [QME_SWPR1]
// ppe_eq/reg00007.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_eq/reg00007_unused.H"
#endif
#endif
