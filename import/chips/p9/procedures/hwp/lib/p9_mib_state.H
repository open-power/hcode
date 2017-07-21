/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_mib_state.H $           */
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
/// @file  p9_mib_state.H
/// @brief Dump a PPE engine's state.
///
/// *HWP HW Owner        : Ashish More <ashish.more.@in.ibm.com>
/// *HWP HW Backup Owner : Brian Vanderpool <vanderp@us.ibm.com>
/// *HWP FW Owner        : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team            : PM
/// *HWP Level           : 2
/// *HWP Consumed by     : SBE, Cronus

#include <p9_ppe_utils.H>
#include <map>

#ifndef __P9_MIB_STATE_H__
#define __P9_MIB_STATE_H__
enum MIB_REGS
{
    //Interrupts
    //CME MIB specific XIRs
    SIB_INFO        = 0x16,
    MEM_INFO        = 0x17,
    SGB_INFO        = 0x18,
    ICACHE_INFO     = 0x19,
    PCB_QUEUE0_INFO = 0x1A,
    PCB_QUEUE1_INFO = 0x1B,
    PCBMUX0_DATA    = 0x1C,
    PCBMUX1_DATA    = 0x1D,
    EI_PCBMUX0_INFO = 0x1E,
    EI_PCBMUX1_INFO = 0x1F,

    //GPE Extra Dcach Info reg
    DCACH_INFO = 0x1A,
    //CME MIB specific XIRs
    SBE_SIB_INFO        = 0x06,
    SBE_MEM_INFO        = 0x07,
    SBE_SGB_INFO        = 0x08,
    SBE_ICACHE_INFO     = 0x09,

    FBC_SIB_INFO        = 0x06,
    FBC_MEM_INFO        = 0x07,
    FBC_SGB_INFO        = 0x08,
    FBC_ICACHE_INFO     = 0x09,

};
enum MIB_ID
{
    CMEMIB        = 0x1,
    GPEMIB        = 0x2,
    SBEMIB        = 0x3,
};
const std::map<uint16_t, std::string> v_cmemib_num_name  =
{
    { SIB_INFO       ,    "SIB_INFO"       },
    { MEM_INFO       ,    "MEM_INFO"       },
    { SGB_INFO       ,    "SGB_INFO"       },
    { ICACHE_INFO    ,    "ICACHE_INFO"    },
    { PCB_QUEUE0_INFO,    "PCB_QUEUE0_INFO"},
    { PCB_QUEUE1_INFO,    "PCB_QUEUE1_INFO"},
    { PCBMUX0_DATA   ,    "PCBMUX0_DATA"   },
    { PCBMUX1_DATA   ,    "PCBMUX1_DATA"   },
    { EI_PCBMUX0_INFO,    "EI_PCBMUX0_INFO"},
    { EI_PCBMUX0_INFO,    "EI_PCBMUX0_INFO"},

};
const std::map<uint16_t, std::string> v_gpemib_num_name  =

{
    { SIB_INFO       ,    "SIB_INFO"       },
    { MEM_INFO       ,    "MEM_INFO"       },
    { SGB_INFO       ,    "SGB_INFO"       },
    { ICACHE_INFO    ,    "ICACHE_INFO"    },
    { DCACH_INFO,         "DCACH_INFO"     },
};

const std::map<uint16_t, std::string> v_sbemib_num_name  =
{
    { SBE_SIB_INFO       ,    "SIB_INFO"       },
    { SBE_MEM_INFO       ,    "MEM_INFO"       },
    { SBE_SGB_INFO       ,    "SGB_INFO"       },
    { SBE_ICACHE_INFO    ,    "ICACHE_INFO"    },


};

const std::map<uint16_t, std::string> v_fbcmib_num_name  =
{
    { FBC_SIB_INFO       ,    "SIB_INFO"       },
    { FBC_MEM_INFO       ,    "MEM_INFO"       },
    { FBC_SGB_INFO       ,    "SGB_INFO"       },
    { FBC_ICACHE_INFO    ,    "ICACHE_INFO"    },


};

/// @typedef p9_mib_state_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_mib_state_FP_t) (
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&,
    const uint64_t, const uint8_t i_name, std::vector<SCOMRegValue_t>& v_mib_xirs_value);

extern "C"
{

/// @brief Dump the PPE state based on the based base address
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [in] i_base_address Base offset to be used for all accesses
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_mib_state(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                 const uint64_t, const uint8_t i_name, std::vector<SCOMRegValue_t>& v_mib_xirs_value);

} // extern C

#endif  // __P9_MIB_STATE_H__
