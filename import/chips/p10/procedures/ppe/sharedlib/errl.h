/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errl.h $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
#ifndef ERRL_H
#define ERRL_H

#include <stdbool.h>
#include "hcode_occ_errldefs.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Creates an Error Log in the PPE's local SRAM
///
/// @param [in] i_modId Module/function ID where the error log is being created
/// @param [in] i_reasonCode A unique code identifying the reason of this error
/// @param [in] i_extReasonCode An extended Reason Code for this error
/// @param [in] i_sev Severity this Error Log should be created with
/// @param [in] i_userData1-3 User data to add to the Error Log as a FFDC
///
/// @return On Success: A non-NULL handle to the Error Log created
///         On Failure: NULL
///
/// @note: (COMP_ID | i_reasonCode) become bits 16-31 of SRC
/// @note: (i_modId<<16 | i_extReasonCode) becomes userdata4 in a PEL
/// @note: Until pending Error Logs are processed and room is created for a new
///        HCode Error Log in SRAM by OCC/(H)TMGT, attempts to create new Error
///        Log via createErrl will fail and HCode error logs will be dropped

errlHndl_t createErrl (
    const uint16_t i_modId,
    const uint8_t i_reasonCode,
    const uint16_t i_extReasonCode,
    const ERRL_SEVERITY i_sev,
    const uint32_t i_userData1,
    const uint32_t i_userData2,
    const uint32_t i_userData3 );


/// @brief Adds a callout to the Error Log
///
/// @param [inout] io_err A valid error log handle returned via by createErrl
/// @param [in] i_type Type of the callout (hardware FRU, code, etc.)
/// @param [in] i_calloutValue Specific instance of the type being called out
/// @param [in] i_priority Priority of this callout for service action
///
/// @return void
///
//  @note: Callouts help a service engineer isolate the failing part/subsystem
/// @note: Customer visible errors (Pred/Unrec) need at least 1 callout.
/// @note: If there is an error adding callout to the Error Log, the callout
///        will be dropped from the Error Log

/// @TODO via RTC 211557: Support adding callouts to Hcode Error Logs
///       TMGT adds a Processor callout as default, until this is supported

void addCalloutToErrl (
    errlHndl_t io_err,
    const ERRL_CALLOUT_TYPE i_type,
    const uint64_t i_calloutValue,
    const ERRL_CALLOUT_PRIORITY i_priority);


/// @brief Adds User Details Section to the Error log
///
/// @param [inout] io_err A valid error log handle returned via by createErrl
/// @param [in] i_dataPtr Pointer to the data being added
/// @param [in] i_size Size of the data being added in bytes
/// @param [in] i_version Version of the User Details Section Header
/// @param [in] i_type Type of the user details section being added
///
/// @return void
///
/// @note: Generic method to add user specific data like traces, dashboard, etc.
/// @note: i_size must be a multiple of 8 & data must be 8 byte aligned
/// @note: If there is an error adding user details section to the Error Log,
///        the user details section will be dropped from the Error Log

void addUsrDtlsToErrl (
    errlHndl_t io_err,
    uint8_t* i_dataPtr,
    const uint16_t i_size,
    const uint8_t i_version,
    const ERRL_USR_DETAIL_TYPE i_type);


/// @brief Add Trace Data to the Error log
///
/// @param [inout] io_err A valid error log handle returned via by createErrl
///
/// @return void
///
/// @note: Common method to add Hcode traces from PK trace buffer to Error Log
/// @note: If there is an error adding traces to the Error Log, the trace data
///        will be dropped from the Error Log

void addTraceToErrl (errlHndl_t io_errl);


/// @brief Commit the Error Log to the Error Log Table in OCC Shared SRAM
///
/// @param [inout] io_err Input: Pointer to a valid error log handle
///                       Output: NULL
///
/// @return void
///
/// @note: No further changes can be made to an error log once it is committed
/// @note: It can take time for OCC & (H)TMGT to consume an error log commited
///        to the OCC SRAM and convert it to a PEL/SEL
/// @note: OCC or (H)TMGT being busy or not functional due to other reasons, can
///        can cause HCode commited errors not converting to PELs/SELs

void commitErrl (errlHndl_t* io_err);

#ifdef __cplusplus
}
#endif

#endif // ERRL_H
