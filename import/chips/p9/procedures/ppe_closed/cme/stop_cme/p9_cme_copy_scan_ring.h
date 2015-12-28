/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_copy_scan_ring.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

/// models CME Image header copied during first block copy.
typedef struct
{
    uint64_t iv_magicWord;
    uint32_t iv_buildDate;
    uint32_t iv_buildVersion;
    uint32_t iv_cmeHcodeOfset;
    uint32_t iv_cmeHcodeLen;
    uint32_t iv_CommonRingOffset;
    uint32_t iv_CommonRingLength;
    uint32_t iv_cmeQuadPsate;
    uint32_t iv_cmeQuadPstateLen;
    uint32_t iv_coreSpecRingOffset;
    uint32_t iv_coreSpecRingLength;
    uint32_t iv_cmeImgMode;
    uint32_t iv_reserve[3];
} CmeImageHdr_t;

/// @brief      initiates the second block copy to copy instance specific scan rings.
void instance_scan_init();

/// @brief     checks if block copy of scan ring is complete.
/// @retval    BLOCK_COPY_SUCCESS if function succeeds else error code.
/// @note      function call is blocking
BceReturnCode_t isScanRingCopyDone();
#endif
