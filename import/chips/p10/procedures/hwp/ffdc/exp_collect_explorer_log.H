/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/ffdc/exp_collect_explorer_log.H $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
/// @file  exp_collect_explorer_log.H
///
/// @brief Collects and adds Explorer debug logs to rc
// ----------------------------------------
// *HWP HWP Owner: Matt Derksen <mderkse1@us.ibm.com>
// *HWP HWP Backup: Louis Stermole <stermole@us.ibm.com>
// *HWP Team: Memory
// *HWP Level: 2
// *HWP Consumed by: HB
// ----------------------------------------
#ifndef _COLLECT_EXPLORER_LOG_H_
#define _COLLECT_EXPLORER_LOG_H_

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include <return_code.H>
#include <error_info_defs.H>

/**
 * @brief Explorer Log type?
 *
 * The firmware maintains the log in a circular buffer in RAM (ACTIVE_LOG) and
 * in the event of a processor exception, firmware assert, or other critical
 * condition the firmware saves the data in RAM to SPI flash (SAVED_LOG).
 * Having the log stored in non-volatile memory allows post-analysis
 * of the log even if it requires a power-cycle to recover the system.
 */
enum exp_log_type : uint8_t
{
    ACTIVE_LOG  = 1, // RAM error section
    SAVED_LOG_A = 2, // SPI flash error section from image A
    SAVED_LOG_B = 3  // SPI flash error section from image B
};

//------------------------------------------------------------------------------
// Structure definitions
//------------------------------------------------------------------------------

// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*exp_collect_explorer_logs_FP_t)(
    const fapi2::ffdc_t&,
    const fapi2::ffdc_t&,
    const exp_log_type,
    fapi2::ReturnCode& );

extern "C"
{

    /**
     * @brief  Main procedure to grab log traces from Explorer chip
     *         and append the trace data to HWP error (o_rc)
     *
     * @param[in] i_ocmb_chip - OCMB chip target
     * @param[in] i_size - allowable total size (add entries upto this size)
     * @param[in] i_log_type - what kind of explorer log to grab
     * @param[out] o_rc - return code to add FFDC data to.
     *
     * @return FAPI2_RC_SUCCESS iff ok
     */
    fapi2::ReturnCode exp_collect_explorer_logs(const fapi2::ffdc_t& i_ocmb_chip,
            const fapi2::ffdc_t& i_size,
            const exp_log_type i_log_type,
            fapi2::ReturnCode& o_rc);
} // extern "C"

#endif // _COLLECT_EXPLORER_LOG_H_
