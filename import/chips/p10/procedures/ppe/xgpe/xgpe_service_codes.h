/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_service_codes.h $   */
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
#ifndef _XGPE_SERVICE_CODES_H_
#define _XGPE_SERVICE_CODES_H_

enum xgpeReasonCode
{
    XGPE_RC_INTERNAL_ERR          = 0x01,
    XGPE_RC_QME_CRITICAL_ERR      = 0X02,
    XGPE_RC_QME_ERR_DOWNLOAD      = 0x03,
    XGPE_RC_HCODE_ERR_INJECT      = 0x04,
    XGPE_SCOM_MACHINE_CHECK_ERROR = 0x05,
    XGPE_RC_PGPE_CRITICAL_ERR     = 0x06,
    XGPE_RC_PGPE_INFO_ERR         = 0x07,
};

enum xgpeExtReasonCode
{
    XGPE_ERC_QME_ELOG_OVERFLOW  = 0x0001,
    XGPE_ERC_QME_HW_FAULT       = 0x0002,
};

enum xgpeModuleId
{
    XGPE_MODID_HANDLE_QME_ERRL  = 0x0001,
    XGPE_MODID_FIT_HANDLER      = 0x0002,
    XGPE_HCODE_SCOM             = 0x0003,
    XGPE_MODID_HANDLE_PGPE_ERRL = 0x0004,
};

#endif
