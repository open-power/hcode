/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_4_unused.H $     */
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

#ifndef __p10_scom_pec_4_H_UNUSED__
#define __p10_scom_pec_4_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [REGION_CCFLUSH_STATUS]
static const uint64_t REGION_CCFLUSH_STATUS = 0x08030016ull;

static const uint32_t REGION_CCFLUSH_STATUS_REGION_CCFLUSH = 4;
static const uint32_t REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN = 15;
//<< [REGION_CCFLUSH_STATUS]
// pec/reg00004.H

//>> [EPS_THERM_WSUB_INJECT_REG]
static const uint64_t EPS_THERM_WSUB_INJECT_REG = 0x08050011ull;

static const uint32_t EPS_THERM_WSUB_INJECT_REG_TRIP = 0;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_TRIP_LEN = 2;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_MODE = 2;
static const uint32_t EPS_THERM_WSUB_INJECT_REG_MODE_LEN = 2;
//<< [EPS_THERM_WSUB_INJECT_REG]
// pec/reg00004.H

//>> [PCB_OPCG_GO]
static const uint64_t PCB_OPCG_GO = 0x08030020ull;

static const uint32_t PCB_OPCG_GO_PCB_OPCGGO = 0;
//<< [PCB_OPCG_GO]
// pec/reg00004.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00004_unused.H"
#endif
#endif
