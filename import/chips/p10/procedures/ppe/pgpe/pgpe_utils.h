/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_utils.h $           */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2021                                                         */
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
#ifndef __PGPE_UTILS_H__
#define __PGPE_UTILS_H__

#include "pgpe.h"

#define TIMER_START() \
    uint32_t otbr_t0 = in32(0xc00604f8ull); \
    uint32_t otbr_t1 = 0; \
    uint32_t otbr_delta = 0;


#define TIMER_DELTA() \
    otbr_t1 = in32(0xc00604f8ull);  \
    if(otbr_t1 > otbr_t0) { otbr_delta  = otbr_t1 - otbr_t0;} \
    else { otbr_delta  = otbr_t1 - otbr_t0 + 0xFFFFFFFF; }

//OTBR ticks every 32ns, so there are 31.25 OTBR ticks in 1uS. We round it off to 32
#define TIMER_DETECT_TIMEOUT_US(val) \
    (otbr_delta >= val*32)
#endif
