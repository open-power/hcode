/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_dfe.h $               */
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
// *!---------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2016
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : rx_eo_dfe.h
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : Chris Steffen       Email: cwsteffen@us.ibm.com
// *! BACKUP NAME :
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// mbs19041001 |mbs     | Added recal flag to dfe_full function (HW486784)
// cws18071000 |cws     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef __RX_EO_DFE_H__
#define __RX_EO_DFE_H__

#include "eo_common.h"

/**
 * @brief The procedure calculates and sets proper latch dac values. The dac
 *   values represent latch offset, path offset, and dfe.
 *
 * @param[in] i_gcr_addr   References the unit target
 *
 * @return uint32_t. rc_pass if success, else error code.
 *
 */
uint32_t rx_eo_dfe_fast(t_gcr_addr* i_gcr_addr);

/**
 * @brief The procedure calculates and sets proper latch dac values. The dac
 *   values represent latch offset, path offset, and dfe.
 *
 * @param[in] i_gcr_addr   References the unit target
 * @param[in] i_bank       References the bank to be calibrated
 *
 * @return uint32_t. rc_pass if success, else error code.
 *
 */
uint32_t rx_eo_dfe_full(t_gcr_addr* i_gcr_addr, const t_bank i_bank, bool recal);

#endif // __RX_EO_DFE_H__
