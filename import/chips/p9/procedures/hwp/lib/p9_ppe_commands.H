/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_ppe_commands.H $        */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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

///
/// @file  p9_ppe_commands.H
/// @brief PPE commands utility
///
/// *HWP HW Owner        : Ashish More <ashish.more.@in.ibm.com>
/// *HWP HW Backup Owner : Brian Vanderpool <vanderp@us.ibm.com>
/// *HWP FW Owner        : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team            : PM
/// *HWP Level           : 2
/// *HWP Consumed by     : CMEs, GPEs, SBE, Cronus

#ifndef __P9_PPE_COMMANDS_H__
#define __P9_PPE_COMMANDS_H__
#include <p9_ppe_utils.H>

typedef struct
{
    bool  cmnd_halt ;
    bool  cmnd_force_halt;
    bool  cmnd_check_status;
    bool  cmnd_resume;
    bool  cmnd_resume_brkpt;
    bool  cmnd_clear_brkpt;
    bool  cmnd_resume_with_ram;
    bool  cmnd_set_instr_addr_brkpt;
    bool  cmnd_set_load_addr_brkpt;
    bool  cmnd_set_store_addr_brkpt;
    bool  cmnd_set_store_load_addr_brkpt;
    bool  cmnd_set_trap;
    bool  cmnd_step_trap;
    bool  cmnd_reset_trap;
    bool  cmnd_single_step;
    bool  cmnd_ram;
    bool  xcr_cmnd_clear_dbg_status;
    bool  xcr_cmnd_toggle_xsr_trh;
    bool  xcr_cmnd_soft_reset;
    bool  xcr_cmnd_hard_reset;
    bool  xcr_cmnd_resume_only;
    bool  xcr_cmnd_ss_only;
    bool  write_iar;

    uint64_t brkpt_address;
    uint64_t ram_instr;
    uint64_t step_count;

} PPE_Cmnds;



/// @typedef p9_ppe_commands_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_ppe_commands_FP_t) (
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&,
    const uint64_t, const PPE_Cmnds,
    std::vector<PPERegValue_t>& v_ppe_xirs_value, uint8_t& v_ppe_halt_state
);

extern "C"
{

/// @brief PPE Commands
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [in] i_base_address Base offset to be used for all accesses
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_ppe_commands(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                    const uint64_t i_base_address, const PPE_Cmnds i_cmnds,
                    std::vector<PPERegValue_t>& v_ppe_xirs_value, uint8_t& v_ppe_halt_state
                   );

} // extern C

#endif  // __P9_PPE_COMMANDS_H__
