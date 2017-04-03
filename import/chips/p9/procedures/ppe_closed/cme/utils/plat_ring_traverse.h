/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/plat_ring_traverse.h $ */
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

#ifndef _PLAT_RING_TRAVERSE_H_
#define _PLAT_RING_TRAVERSE_H_

#include "p9_putringutils.h" // for RS4 decompression utilities

///
/// @brief This is a plat specific (CME) function that locates the
///        Ring Container in the image and calls the functin to decompress the
///        RS4 string and apply it to the hardware.
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param i_ringID The Ring ID that identifies the ring to be applied.
///
int putRing(
    enum CME_CORE_MASKS i_core,
    enum CME_SCOM_CONTROLS i_scom_op,
    const RingID i_ringID);

#endif
