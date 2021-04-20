/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_service_codes.h $     */
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
#ifndef _QME_SERVICE_CODES_H_
#define _QME_SERVICE_CODES_H_

#include "qme_panic_codes.h"

enum qmeReasonCode
{
    REASON_SR_FAIL              =   0x01,
    PUTRING_PARALLEL_SCAN_ERR   =   0x02,
    PUTRING_HEADER_ERR          =   0x03,
    PUTRING_BAD_STRING          =   0x04,
    PUTRING_HEADER_MISMATCH     =   0x05,
    PUTRING_BAD_NIBBLE_INDEX    =   0x06,
    PUTRING_UNKNOWN_ERR         =   0x07,
    // do not change this before check qme_panic_codes.h
    ERR_REASON_ID_QME_SETUP     =   0x10,
    ERR_REASON_ID_IRQ_ERR       =   0x11,
    ERR_REASON_ID_MACH_CHECK    =   0x13,
    ERR_REASON_ID_FAULT_INJ     =   0x20,
    ERR_REASON_ID_STOP_REQ      =   0x21,
    ERR_REASON_ID_PFET_CLK      =   0x23,
    ERR_REASON_ID_STOP2_ENTRY   =   0x30,
    ERR_REASON_ID_STOP3_ENTRY   =   0x31,
    ERR_REASON_ID_STOP11_ENTRY  =   0x33,
    ERR_REASON_ID_STOP2_EXIT    =   0x40,
    ERR_REASON_ID_STOP3_EXIT    =   0x41,
    ERR_REASON_ID_STOP11_EXIT   =   0x43,
};

enum qmeExtReasonCode
{
    QME_STOP11_EXIT         =   0x01,
    QME_PUT_RING_FAIL       =   0x02,
    // see others in qme_panic_codes.h
};

enum qmeModuleId
{
    // do not change this before check qme_panic_codes.h
    QME_MODULE_ID_BASE_ERR   =   0x01,
    QME_MODULE_ID_STOP_FLOW  =   0x02,
    QME_MODULE_ID_STOP_ENTRY =   0x03,
    QME_MODULE_ID_STOP_EXIT  =   0x04,
    QME_MODULE_ID_QME_SCAN   =   0x05,
    QME_MODULE_ID_SR         =   0x06,
};

#endif // _QME_SERVICE_CODES_H_
