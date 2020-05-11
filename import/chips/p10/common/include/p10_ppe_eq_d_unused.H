/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_eq_d_unused.H $       */
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

#ifndef __p10_ppe_eq_d_H_UNUSED__
#define __p10_ppe_eq_d_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> [QME_PIG]
//ERRCODE: // Some of the name targets not found in address targets: eq

static const uint32_t QME_PIG = 0xc0000300ull;

static const uint32_t QME_PIG_REQ_INTR_TYPE = 1;
static const uint32_t QME_PIG_REQ_INTR_TYPE_LEN = 4;
static const uint32_t QME_PIG_REQ_INTR_PAYLOAD = 5;
static const uint32_t QME_PIG_REQ_INTR_PAYLOAD_LEN = 19;
static const uint32_t QME_PIG_PENDING_SOURCE = 24;
static const uint32_t QME_PIG_PENDING_SOURCE_LEN = 6;
static const uint32_t QME_PIG_INTR_GRANTED = 32;
static const uint32_t QME_PIG_GRANTED_SOURCE = 33;
static const uint32_t QME_PIG_GRANTED_SOURCE_LEN = 3;
static const uint32_t QME_PIG_QUAD_ID = 37;
static const uint32_t QME_PIG_QUAD_ID_LEN = 3;
static const uint32_t QME_PIG_GRANTED_PACKET = 40;
static const uint32_t QME_PIG_GRANTED_PACKET_LEN = 24;
//<< [QME_PIG]
// ppe_eq/reg00013.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_eq/reg00013_unused.H"
#endif
#endif
