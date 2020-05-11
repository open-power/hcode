/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_c_unused.H $        */
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

#ifndef __p10_ppe_c_c_H_UNUSED__
#define __p10_ppe_c_c_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_DHCR]
static const uint32_t CPMS_DHCR = 0xc000e540ull;

static const uint32_t CPMS_DHCR_FREEZE_HISTORY_ON_LARGE = 0;
static const uint32_t CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE = 1;
static const uint32_t CPMS_DHCR_ADJACENT_WARN_RECORD_MODE = 2;
static const uint32_t CPMS_DHCR_SPARE = 3;
static const uint32_t CPMS_DHCR_SPARE_LEN = 2;
static const uint32_t CPMS_DHCR_EVENT_HISTORY_SELECT = 5;
static const uint32_t CPMS_DHCR_EVENT_HISTORY_SELECT_LEN = 3;
static const uint32_t CPMS_DHCR_EVENT_COUNT = 8;
static const uint32_t CPMS_DHCR_EVENT_COUNT_LEN = 8;
//<< [CPMS_DHCR]
// ppe_c/reg00012.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00012_unused.H"
#endif
#endif
