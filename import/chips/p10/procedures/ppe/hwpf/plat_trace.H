/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/plat_trace.H $           */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2011,2021                                                    */
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
/**
 *  @file plat_trace.H
 *  @brief Defines the FAPI2 trace macros.
 *
 *  Note that platform code must provide the implementation.
 *
 *  FAPI has provided a default implementation. Platform code must
 *  provide an alternate implementation if needed.
 */

#ifndef FAPI2_PLATTRACE_H_
#define FAPI2_PLATTRACE_H_

//F2//#include <stdio.h>
#include <stdint.h>

extern "C" {
#include "iota_trace.h"
}

// Why not a #define, why is this in the fapi2 namespace?
// To prevent problems with Cronus and the fapi1 definitions.
namespace fapi2
{
static const uint32_t MAX_ECMD_STRING_LEN = 64;
};

//PLAT NOTE// map fapi trace levels to pk trace levels

// General traces
#define FAPI_TRACE(_id_, _fmt_, _args_...) PK_TRACE(_fmt_, ##_args_)

// Information traces (go into fast trace buffer that can wrap often)
#define FAPI_INF(_fmt_, _args_...) PK_TRACE(_fmt_, ##_args_)

// Important traces (go into slow trace buffer that should not wrap often)
#define FAPI_IMP(_fmt_, _args_...) PKTRACE(_fmt_, ##_args_)

// Error traces (go into slow trace buffer that should not wrap often)
#define FAPI_ERR(_fmt_, _args_...) PK_TRACE_ERR(_fmt_, ##_args_)

// Debug traces (go into fast trace buffer that can wrap often)
#define FAPI_DBG(_fmt_, _args_...) PK_TRACE(_fmt_, ##_args_)

// Scan traces
#define FAPI_SCAN(_fmt_, _args_...) PK_TRACE_INF(_fmt_, ##_args_)

#define FAPI_MFG(_fmt_, _args_...) PK_TRACE_INF(_fmt_, ##_args_)

#define FAPI_LAB(__fmt_, _args_...) PK_TRACE_DBG(_fmt_, ##_args_)

#endif // FAPI2_PLATTRACE_H_
