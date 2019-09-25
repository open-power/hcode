/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_a.H $               */
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

#ifndef __p10_ppe_c_a_H_
#define __p10_ppe_c_a_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


static const uint32_t CPMS_DPMR = 0xc000ea00ull;

static const uint32_t CPMS_DPMR_POWER_PROXY_ENABLE = 0;
static const uint32_t CPMS_DPMR_PROXY_CAL_MODE = 1;
static const uint32_t CPMS_DPMR_ENERGY_PROXY_RESET_MODE = 2;
static const uint32_t CPMS_DPMR_DDP_ENABLE = 3;
static const uint32_t CPMS_DPMR_DDP_ACTIVATION_SELECT = 4;
static const uint32_t CPMS_DPMR_DDP_ACTIVATION_SELECT_LEN = 2;
static const uint32_t CPMS_DPMR_DDP_PROXY_SHIFT = 6;
static const uint32_t CPMS_DPMR_DDP_PROXY_SHIFT_LEN = 2;
static const uint32_t CPMS_DPMR_DDP_ADJ_CORE_SCALE = 8;
static const uint32_t CPMS_DPMR_DDP_ADJ_CORE_SCALE_LEN = 4;
static const uint32_t CPMS_DPMR_DDP_ADJ_GLOBAL_SCALE = 12;
static const uint32_t CPMS_DPMR_DDP_ADJ_GLOBAL_SCALE_LEN = 4;
static const uint32_t CPMS_DPMR_DDP_DDS_ADJUST_EN = 16;
static const uint32_t CPMS_DPMR_DDP_DDS_ADJUST_SEL = 17;
static const uint32_t CPMS_DPMR_DDP_DDS_ADJUST_SEL_LEN = 2;
static const uint32_t CPMS_DPMR_PIL_ENABLE = 19;
static const uint32_t CPMS_DPMR_PIL_THROTTLE_ENABLE = 20;
static const uint32_t CPMS_DPMR_SPARE = 21;
static const uint32_t CPMS_DPMR_SPARE_LEN = 3;
// ppe_c/reg00010.H

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00010.H"
#endif
#endif
