/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/plat_ring_traverse.H $ */
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

#include "p9_putringutils.H" // for RS4 decompression utilities


///
/// @brief This is a plat pecific (SBE Plat) function that locates the
///        Ring Container in the image and calls the functin to decompress the
///        RS4 string and apply it to the hardware.
/// @param i_target The target of Ring apply.
/// @param i_ringID The Ring ID that identifies the ring to be applied.
/// @return FAPI2_RC_SUCCESS on success, else error code.
///
fapi2::ReturnCode findRS4InImageAndApply(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const RingID i_ringID);

#endif
