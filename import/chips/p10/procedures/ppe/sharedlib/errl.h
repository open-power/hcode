/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errl.h $            */
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
#ifndef ERRL_H
#define ERRL_H

#include <stdbool.h>
#include "occ_hcode_errldefs.h"

#ifdef __cplusplus
extern "C" {
#endif

/// Status code of error logging from error logging infrastructure
enum errlStatusCodes
{
    ERRL_STATUS_SUCCESS = 0,       // errl operation(s) completed successfully
    ERRL_STATUS_INIT_ERROR,        // errl framework uninitialized on PPE
    ERRL_STATUS_GLOBAL_SLOTS_FULL, // prev error not yet consumed by FW,
    // a retry may work
    ERRL_STATUS_LOCAL_SLOTS_FULL,  // another error being processed on PPE,
    // a retry may work
    ERRL_STATUS_USER_ERROR,        // errl API called with bad params / sequence
    ERRL_STATUS_LOG_FULL,          // errl does not have space for adding data
    ERRL_STATUS_INTERNAL_ERROR,    // errl internal framework error
    ERRL_STATUS_UNKNOWN,           // errl framework got an unknown error
};

/// Self referential structure to add code/hardware  (e.g. code, core, cache,
/// etc.) callouts to an error log
struct errlDataCallout
{
    ERRL_CALLOUT_TYPE         type;     // see ERRL_CALLOUT_TYPE
    ERRL_CALLOUT_PRIORITY     priority; // see ERRL_CALLOUT_PRIORITY
    uint64_t                  value;    // fapi target to be called out
    struct errlDataCallout*   pNext;    // pointer to next callout, NULL if none
};

typedef struct errlDataCallout errlDataCallout_t;

/// Self referential structure to add user detail sections to an error log
struct errlDataUsrDtls
{
    ERRL_USR_DETAIL_TYPE      type;    // see ERRL_USR_DETAIL_TYPE
    uint16_t                  size;    // size of data at pData, multiples of 8B
    uint8_t*                  pData;   // ptr. to user details data, 8B aligned
    uint8_t                   version; // version on the user details added
    struct errlDataUsrDtls*   pNext;   // ptr to next user detail, NULL if none
};

typedef struct errlDataUsrDtls errlDataUsrDtls_t;

// Structure aggregating the user data words 1-3 that get into a PEL's
// SRC words 4-6, as additional FFDC info for the error
struct errlUserDataWords
{
    uint32_t userdata1;
    uint32_t userdata2;
    uint32_t userdata3;
};

typedef struct errlUserDataWords errlUDWords_t;

/// @brief Creates an Error Log in the PPE's local SRAM
///
/// @param [in] i_modId Module/function ID where the error log is being created
/// @param [in] i_reasonCode A unique code identifying the reason of this error
/// @param [in] i_extReasonCode An extended Reason Code for this error
/// @param [in] i_sev Severity this Error Log should be created with
/// @param [in] p_uDWords User data words 1-3 to add to the Error Log as FFDC
/// @param[out] o_status, See errlStatusCodes
///
/// @return On Success: A non-NULL handle to the Error Log created
///         On Failure: NULL, and o_status indicating reason for failure
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
    errlUDWords_t* p_uDWords,
    uint32_t*      o_status );


/// @brief Adds a callout to the Error Log
///
/// @param [inout] io_err A valid error log handle returned via by createErrl
/// @param [in] i_type Type of the callout (hardware FRU, code, etc.)
/// @param [in] i_calloutValue Specific instance of the type being called out
/// @param [in] i_priority Priority of this callout for service action
///
/// @return uint32_t status of the operation. See errlStatusCodes
///
//  @note: Callouts help a service engineer isolate the failing part/subsystem
/// @note: Customer visible errors (Pred/Unrec) need at least 1 callout.
/// @note: If there is an error adding callout to the Error Log, the callout
///        will be dropped from the Error Log

/// @TODO via RTC 211557: Support adding callouts to Hcode Error Logs
///       TMGT adds a Processor callout as default, until this is supported
uint32_t  addCalloutToErrl (
    errlHndl_t io_err,
    const ERRL_CALLOUT_TYPE i_type,
    const uint64_t i_calloutValue,
    const ERRL_CALLOUT_PRIORITY i_priority);


/// @brief Adds User Details Section to the Error log
///
/// @param [inout] io_err A valid error log handle returned via by createErrl
/// @param [in] i_dataPtr Pointer to the data being added
/// @param [in] i_size Size of the data being added in bytes. Min. 128B
/// @param [in] i_version Version of the User Details Section Header
/// @param [in] i_type Type of the user details section being added
///
/// @return uint32_t status of the operation. See errlStatusCodes
///
/// @note: Generic method to add user specific data like traces, dashboard, etc.
/// @note: i_size must be a multiple of 8, min. 128B  & data must be 8B aligned
/// @note: If i_size is more than available space, an attempt is made to add
///        user data truncated to the size that can fit in the log (min. 128 B)
/// @note: If there is an error adding user details section to the Error Log,
///        the user details section will be dropped from the Error Log
uint32_t addUsrDtlsToErrl (
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


/// @brief Commit the Error Log to the Error Log Table for FW processing
///
/// @param [inout] io_err Input: Pointer to a valid error log handle
///                       Output: NULL if committed without errors
///
/// @return uint32_t status of the operation. See errlStatusCodes
///
/// @note: No further changes can be made to an error log once it is committed
/// @note: It can take time for OCC & (H)TMGT to consume an error log commited
///        to the OCC SRAM and convert it to a PEL/SEL
/// @note: OCC or (H)TMGT being busy or not functional due to other reasons, can
///        can cause HCode commited errors not converting to PELs/SELs
uint32_t commitErrl (errlHndl_t* io_err);


/// @brief Delete the Error Log being processed on this PPE
///
/// @param [inout] io_err Input: Pointer to a valid error log handle
///                       Output: NULL if deleted without errors
///
/// @return uint32_t status of the operation. See errlStatusCodes
/// @note: To be used to free up this error slot for reuse by a new error.
///        Typically used to abort an error log being processed on the PPE due
///        to errors adding callouts or user detail sections, etc.
uint32_t deleteErrl (errlHndl_t* io_errl);


/// @brief Utility API to accept -all- error log params from user code and
///        abstract away orchestration (create, add user details/callouts and
///        commit) of error log from calling code
///
/// @param [in] i_rc A unique code identifying the reason of this error
/// @param [in] i_extRc An extended Reason Code for this error
/// @param [in] i_modId Module/function ID where the error log is being created
/// @param [in] i_sev Severity this Error Log should be created with
/// @param [in] p_uDWords User data words 1-3 to add to the Error Log as FFDC
/// @param [in] p_usrDtls Linked list of user detail sections to be added. NULL
///             if there is no user detail section to be added to the error log.
/// @param [in] p_callOuts Linked list of callouts to be added. NULL if there is
///             no callout to be added to the error log
///
/// @note: (COMP_ID | i_rc) become bits 16-31 of SRC
/// @note: (i_modId<<16 | i_extRc) become userdata4 in a PEL
/// @note: Until pending Error Logs are processed and room is created for a new
///        HCode Error Log in SRAM by OCC/(H)TMGT, attempts to create new Error
///        Log via createErrl will fail and HCode error logs will be dropped
///
/// @return uint32_t status of the operation. See errlStatusCodes
///
/// @note: User specified data (via p_usrDtls) is given higher priority.
///        Traces will be added to an error log -automatically-, after all the
///        other user details sections are added and there is still enough
///        room available in the error log
/// @note: No further changes can be made to an error log once it is committed
/// @note: It can take time for OCC & (H)TMGT to consume an error log commited
///        to the OCC SRAM and convert it to a PEL/SEL
/// @note: OCC or (H)TMGT being busy or not functional due to other reasons, can
///        can cause HCode commited errors not converting to PELs/SELs

uint32_t  ppeLogError (
    const uint8_t       i_rc,
    const uint16_t      i_extRc,
    const uint16_t      i_modId,
    const ERRL_SEVERITY i_sev,
    errlUDWords_t*      p_uDWords,
    errlDataUsrDtls_t*  p_usrDtls,
    errlDataCallout_t*  p_callOuts
);

#ifdef __cplusplus
}
#endif

#endif // ERRL_H
