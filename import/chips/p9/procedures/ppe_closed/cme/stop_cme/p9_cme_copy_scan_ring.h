/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_copy_scan_ring.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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
#ifndef __P9_CME_COPY_SCAN_RING_H__
#define __P9_CME_COPY_SCAN_RING_H__

#include "p9_hcd_block_copy.h"


/// @brief      initiates the second block copy to copy instance specific scan rings.
void            start_cme_block_copy(uint32_t, uint32_t, uint32_t, uint32_t);


/// @brief     checks if block copy of scan ring is complete.
/// @retval    BLOCK_COPY_SUCCESS if function succeeds else error code.
/// @note      function call is blocking
BceReturnCode_t check_cme_block_copy();


#if TEST_ONLY_BCE_IRR
    void bce_irr_setup();
    void bce_irr_run();
    void bce_irr_thread();
#endif

#endif
