/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_cme_regs.H $            */
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
/// @file  p9_cme_regs.H
/// @brief Dump a PPE engine's state.
/// *HWP HW Owner        : Ashish More <ashish.more.@in.ibm.com>
/// *HWP HW Backup Owner : Brian Vanderpool <vanderp@us.ibm.com>
/// *HWP FW Owner        : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team            : PM
/// *HWP Level           : 2
/// *HWP Consumed by     : SBE, Cronus
#include <p9_ppe_utils.H>
#include <map>

#ifndef __P9_CME_REGS_H__
#define __P9_CME_REGS_H__
/**
 * @brief Offsets from base address for CME regs.
 */
enum CME_REGS
{
    //Stop State information and CME Control
    LMCR     = 0x3A,
    SICR     = 0x3D,
    SISR     = 0x4C,
    PMSRS0   = 0x40,
    PMSRS1   = 0x41,
    PMCRS0   = 0x42,
    PMCRC1   = 0x43,
    PSCRS00  = 0x44,
    PSCRS01  = 0x45,
    PSCRS02  = 0x46,
    PSCRS03  = 0x47,
    PSCRS10  = 0x48,
    PSCRS11  = 0x49,
    PSCRS12  = 0x4A,
    PSCRS13  = 0x4B,
    FLAGS    = 0x20,
    SCRATCH0 = 0x23,
    SCRATCH1 = 0x24,
};
const std::map<uint16_t, std::string> v_cme_num_name =
{
    { LMCR    ,    "LMCR"      },
    { SICR    ,    "SICR"      },
    { SISR    ,    "SISR"      },
    { PMSRS0  ,    "PMSRS0"    },
    { PMSRS1  ,    "PMSRS1"    },
    { PMCRS0  ,    "PMCRS0"    },
    { PMCRC1  ,    "PMCRC1"    },
    { PSCRS00 ,    "PSCRS00"   },
    { PSCRS01 ,    "PSCRS01"   },
    { PSCRS02 ,    "PSCRS02"   },
    { PSCRS03 ,    "PSCRS03"   },
    { PSCRS10 ,    "PSCRS10"   },
    { PSCRS11 ,    "PSCRS11"   },
    { PSCRS12 ,    "PSCRS12"   },
    { PSCRS13 ,    "PSCRS13"   },
    { FLAGS   ,    "FLAGS"     },
    { SCRATCH0,    "SCRATCH0"  },
    { SCRATCH1,    "SCRATCH1"  },

};

/// @typedef p9_cme_regs_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_cme_regs_FP_t) (
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&,
    const uint64_t, std::vector<SCOMRegValue_t>& v_cme_stop_st_cntrl_value);

extern "C"
{

/// @brief Dump the PPE state based on the based base address
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [in] i_base_address Base offset to be used for all accesses
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_cme_regs(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                const uint64_t i_base_address,  std::vector<SCOMRegValue_t>& v_cme_stop_st_cntrl_value);

} // extern C

#endif  // __P9_CME_REGS_H__
