/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_sgpe_boot_cme.h $ */
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
#ifndef __P9_HCD_SGPE_BOOT_H__
#define __P9_HCD_SGPE_BOOT_H__


//Error code associated with CME boot firmware.
typedef enum
{
    CME_BOOT_SUCCESS = 0,
    CME_BOOT_FAIL    = 1,
} BootErrorCode_t;

/// @brief      boots CME by initiating first block copy transfer.
/// @param[in]  i_exMask    mask associated with EX.
/// @note       Each instance of CME is assigned a specifc bit position in
///             big endian order. Bit 0 positions stands for CME0 and bit 11
///             stands for CME11.
BootErrorCode_t boot_cme( uint16_t i_exMask );

#endif
