/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/p9_ringid_cme.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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

#ifndef _P9_RINGID_CME_H_
#define _P9_RINGID_CME_H_

#include <stdint.h>
#include "p9_ringid_cme_enums.h"
#include <common_ringId.H>


typedef enum RingOffset
{
    // Common Rings
    EC_FUNC = 0,
    EC_GPTR = 1,
    EC_TIME = 2,
    EC_MODE = 3,
    EC_ABST = 4,
    // Instance Rings
    EC_REPR = (INSTANCE_RING_MARK | 0)
} ringOffset;

static const ChipletData_t g_ecData =
{
    32, // Core Chiplet ID range is 32-55. The base ID is 32.
    5,  // 4 common rings for Core chiplet
    1,  // 1 instance specific ring for each Core chiplet
    1,  // 1 different instance rings
    3   //base,CC and risk level variants supported
};


struct ringPropertiesCme_t
{
    ringOffset iv_torOffSet;
};

static const struct ringPropertiesCme_t RING_PROPERTIES[P9_NUM_RINGS] =
{
    // Core Ring
    {EC_FUNC}, // 0
    {EC_GPTR}, // 1
    {EC_TIME}, // 2
    {EC_MODE}, // 3
    {EC_REPR}, // 4
    {EC_ABST}  // 5
};
#endif
