/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errlutil.h $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020,2021                                                    */
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
#ifndef ERRLUTIL_H
#define ERRLUTIL_H

#include "errl.h"

/// @brief Create and commit an informational error log
///
/// @param [in] i_rc [uint8_t] Unique code identifying the reason of this error
/// @param [in] i_extRc [uint16_t] Extended Reason Code for this error
/// @param [in] i_modId [uint16_t] Module/function ID where the error log is created
/// @param [in] i_userData1-3 [uint32_t] User data to add to SRC words of Error Log
/// @param [in] p_usrDtls [errlDataUsrDtls_t*] Linked list of user detail sections to
///             be added. NULL if there is none to be added.
/// @param[out] o_status [uint32_t] See errlStatusCodes
///
#define PPE_LOG_ERR_INF(i_rc, i_extRc, i_modId,                   \
                        i_userData1, i_userData2, i_userData3,    \
                        p_usrDtls, o_status)                     \
{                                                                 \
    errlUDWords_t uDWords = {i_userData1, i_userData2, i_userData3};\
    o_status = ppeLogError ( i_rc, i_extRc, i_modId,       \
                             ERRL_SEV_INFORMATIONAL,       \
                             &uDWords, p_usrDtls, NULL );              \
}

/// @brief Create and commit an unrecoverable (critical) error log and continue
///
/// @param [in] i_rc [uint8_t] Unique code identifying the reason of this error
/// @param [in] i_extRc [uint16_t] Extended Reason Code for this error
/// @param [in] i_modId [uint16_t] Module/function ID where the error log is created
/// @param [in] i_userData1-3 [uint32_t] User data to add to SRC words of Error Log
/// @param [in] p_usrDtls [errlDataUsrDtls_t*] Linked list of user detail sections to
///             be added. NULL if there is none to be added.
/// @param [in] p_callOuts [errlDataCallout_t*] Linked list of callouts to be added.
///             Unrecov errors need a callout to be specified. If none is specified,
///             underlying handlers will callout the processor by default.
/// @param[out] o_status [uint32_t] See errlStatusCodes
///
#define PPE_LOG_ERR_CRITICAL( i_rc, i_extRc, i_modId,               \
                              i_userData1, i_userData2, i_userData3,\
                              p_usrDtls, p_callOuts, o_status )     \
{                                                                   \
    errlUDWords_t uDWords = {i_userData1, i_userData2, i_userData3};\
    o_status = ppeLogError ( i_rc, i_extRc, i_modId, ERRL_SEV_UNRECOVERABLE, \
                             &uDWords, p_usrDtls, p_callOuts );              \
}

/// @brief Create and commit an unrecoverable (critical) error log and halt PPE
///
/// @param [in] i_rc [uint8_t] Unique code identifying the reason of this error
/// @param [in] i_extRc [uint16_t] Extended Reason Code for this error.
///             Also used as the Panic/Halt Code
/// @param [in] i_modId [uint16_t] Module/function ID where the error log is created
/// @param [in] i_userData1-3 [uint32_t] User data to add to SRC words of Error Log
/// @param [in] p_usrDtls [errlDataUsrDtls_t*] Linked list of user detail sections to
///             be added. NULL if there is none to be added.
/// @param [in] p_callOuts [errlDataCallout_t*] Linked list of callouts to be added.
///             Unrecov errors need a callout to be specified. If none is specified,
///             underlying handlers will callout the processor by default.
/// @param[out] o_status [uint32_t] See errlStatusCodes
/// @note This macro will return with status of error that was being logged,
///       only if the operation fails. This macro halts the PPE on success
///
#define PPE_LOG_ERR_N_PANIC( i_rc, i_extRc, i_modId,                \
                             i_userData1, i_userData2, i_userData3, \
                             p_usrDtls, p_callOuts, o_status )      \
{                                                                   \
    errlUDWords_t uDWords = {i_userData1, i_userData2, i_userData3};\
    o_status = ppeLogError ( i_rc, i_extRc, i_modId, ERRL_SEV_UNRECOVERABLE, \
                             &uDWords, p_usrDtls, p_callOuts );              \
}

#endif // ERRLUTIL_H
