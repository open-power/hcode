/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errlqmeproxy.h $    */
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
#ifndef ERRLQMEPROXY_H
#define ERRLQMEPROXY_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __PPE_QME
/// @brief Initialize QME Error Log addresses in Global Hcode Error Log Table
///
/// @param i_pElogPayloadBase Base address to contiguous space where error logs
///                           from all QMEs on the chip would be offloaded
///
/// @note Engine responsible to offload QME error logs to the global error log
///       table, is required to allocate space (#qmes * #logs/qme * sizeoflog)
///       and call this API, before the QMEs are initialized
///
void initQmeErrSlots ( const uint8_t* i_pElogPayloadBase );

/// @brief Get QME error log slot address in the global error log table space
///
/// @param [in] i_qmeId Instance id of QME whose err log slot address is needed
/// @param [in] i_elogSlotIndex  Relative err log index from QME's Err Log Table
/// @param[out] o_ppElogSlotAddr On success, address of global error log payload
///                              On failure, NULL with appropriate return value
/// @return status of the operation, See errlStatusCodes
///
uint32_t getQmeElogSlotAddr ( const uint8_t i_qmeId,
                              const uint8_t i_elogSlotIndex,
                              uint64_t**    o_ppElogSlotAddr );

/// @brief Report QME error log to FW
///
/// @param [in] i_qmeId Instance id of QME
/// @param [in] i_elogSlotIndex Relative err log index from QME's Err Log Table
/// @param [in] i_elogEntry Error Log Entry to be reported from QME
///
/// @return status of the operation, See errlStatusCodes
///
uint32_t reportQmeError (const uint8_t  i_qmeId,
                         const uint8_t  i_elogSlotIndex,
                         const hcode_elog_entry_t i_elogEntry);
#endif //__PPE_QME

#ifdef __cplusplus
}
#endif
#endif // ERRLQMEPROXY_H
