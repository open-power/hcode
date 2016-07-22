/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/p9_ringid_cme_enums.h $ */
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

#ifndef _P9_RINGID_CME_ENUM_H_
#define _P9_RINGID_CME_ENUM_H_
#include <stdint.h>

///
/// @enum RingID
/// @brief Enumeration of Ring ID values. These values are used to traverse
///        an image having Ring Containers.
// NOTE: Do not change the numbering, the sequence or add new constants to
//       the below enum, unless you know the effect it has on the traversing
//       of the image for Ring Containers.
typedef enum
{
    //*****************************
    // Rings needed for CME - Start
    //*****************************
    // Core Chiplet Rings
    // Common - apply to all Core instances
    ec_func = 0,
    ec_gptr = 1,
    ec_time = 2,
    ec_mode = 3,

    // Core Chiplet Rings
    // EC0 - EC23 instance specific Ring
    ec_repr = 4,
    //***************************
    // Rings needed for SBE - End
    //***************************

    P9_NUM_RINGS // This shoud always be the last constant
} RingID; // end of enum RingID

#endif
