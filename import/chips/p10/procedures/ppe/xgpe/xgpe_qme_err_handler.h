/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_qme_err_handler.h $ */
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
#ifndef XGPE_QME_ERR_HANDLER_H
#define XGPE_QME_ERR_HANDLER_H

#include <stdint.h>

extern uint8_t* G_pErrLogsQme;
extern uint32_t G_qmeElogTblAddr;

// Error Codes that are expected in the OPITESV register, when the QME takes
// an error path or halt
typedef enum
{
    XGPE_QME_ERR_FIRMWARE = 0x0, // QME code generated fault, offload elog
    XGPE_QME_ERR_INTERNAL = 0x8, // QME halt due to int. error
    XGPE_QME_ERR_EXTERNAL = 0x4, // QME halt due to ext. error (mem bolton)
    XGPE_QME_ERR_HANG     = 0x2, // QME halt due to lack of forward progress
    XGPE_QME_ERR_BRKPOINT = 0x1, // QME halt due to hw debug / sw break point
}   XgpeQmeOpitEErrCode_t;

void xgpe_qme_sram_access(uint32_t i_quadId,
                          uint32_t i_address,
                          uint32_t i_words_to_access,
                          uint64_t* o_data);

uint32_t handleQmeErrl (const uint32_t i_quadId,
                        const uint32_t i_errCode);

#endif // XGPE_QME_ERR_HANDLER_H
