/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/test/driver.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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

// ******************************************************
// Unit test code.  Compile on big-endian machine (AIX)
// ******************************************************

#if !defined(__DRIVER_H)
#define __DRIVER_H
#include <stdint.h>

#define PK_TRACE_HASH_PREFIX 0xcccc

typedef unsigned long PkMachineContext;
typedef uint64_t PkTimebase;

#define trace_ppe_hash(s, prefix) 0x6677
void pk_critical_section_enter(PkMachineContext* ctx);
void pk_critical_section_exit(PkMachineContext* ctx);
// Unit test code.  Compile on big-endian machine (AIX)

void barrier(void);

uint64_t pk_timebase_get();

void pk_trace_tiny(uint32_t);
void pk_trace_big(uint32_t, uint64_t, uint64_t);


#endif
