/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_cppm_state.C $          */
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
/// @file  p9_cppm_state.C
/// @brief Get PPE's internal state
///
/// *HWP HW Owner        : Ashish More <ashish.more.@in.ibm.com>
/// *HWP HW Backup Owner : Brian Vanderpool <vanderp@us.ibm.com>
/// *HWP FW Owner        : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team            : PM
/// *HWP Level           : 2
/// *HWP Consumed by     : SBE, Cronus
/// @verbatim
///
/// Procedure Summary:
///   - Dump out CPPM's internal state
///
/// @endverbatim

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <fapi2.H>
#include <p9_cppm_state.H>
#include <p9_ppe_utils.H>
#include <p9_hcd_common.H>

std::vector<uint16_t> v_ppm_st =
{
    { CPMMR         },
    { CPPM_ERRSUM   },
    { CPPM_ERR      },
    { CPPM_ERRMSK   },
    { CPPM_NC0INDIR },
    { CPPM_NC1INDIR },
    { CPPM_CSAR     },
    { CPPM_CMEDB0   },
    { CPPM_CMEDB1   },
    { CPPM_CMEDB2   },
    { CPPM_CMEDB3   },
    { CPPM_CISR     },
    { CPPM_PECES    },
    { CPPM_CACCR    },
    { CPPM_CACSR    },
    { CPPM_IPPMCMD  },
    { CPPM_IPPMSTAT },
};




//-----------------------------------------------------------------------------

/**
 * @brief Perform CME internal reg "read" operation
 * @param[in]   i_target        Chip Target
 * @param[in]   i_base_address  Base SCOM address of the PPE
 * @param[out]  ppm_state_value   Returned data
 * @return  fapi2::ReturnCode
 */
fapi2::ReturnCode
p9_cppm_state_data(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                   const uint64_t i_base_address,
                   std::vector<SCOMRegValue_t>& ppm_state_value)
{
    fapi2::buffer<uint64_t> l_data64;
    SCOMRegValue_t l_scomregVal;

    for (auto it : v_ppm_st)
    {
        FAPI_DBG("cppm reg: Address offset %2x\n",  it );
        FAPI_TRY(getScom(i_target, i_base_address + it, l_data64), "Error in GETSCOM");
        l_scomregVal.number = it;
        l_scomregVal.value = l_data64;
        ppm_state_value.push_back(l_scomregVal);
    }

fapi_try_exit:
    return fapi2::current_err;
}

// Hardware procedure
fapi2::ReturnCode
p9_cppm_state(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
              const uint64_t i_base_address,
              std::vector<SCOMRegValue_t>& ppm_state_value)
{

    //Call the function to collect the data.
    p9_cppm_state_data(i_target,
                       i_base_address,
                       ppm_state_value);


    return fapi2::current_err;
} // Procedure
