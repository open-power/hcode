/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_vmin_enable.C $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2019                                                    */
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
/// @file  p10_hcd_core_vmin_enable.C
/// @brief
///


// *HWP HWP Owner          : David Du         <daviddu@us.ibm.com>
// *HWP Backup HWP Owner   : Greg Still       <stillgs@us.ibm.com>
// *HWP FW Owner           : Prem Shanker Jha <premjha2@in.ibm.com>
// *HWP Team               : PM
// *HWP Consumed by        : SBE:QME
// *HWP Level              : 2


//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------

#include "p10_hcd_core_vmin_enable.H"
#include "p10_hcd_common.H"

#ifdef __PPE_QME
    #include "p10_ppe_c.H"
    using namespace scomt::ppe_c;
#else
    #include "p10_scom_c.H"
    using namespace scomt::c;
#endif

//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

enum P10_HCD_CORE_VMIN_ENABLE_CONSTANTS
{
    HCD_VMIN_ENA_RVID_ACTIVE_POLL_TIMEOUT_HW_NS    = 100000, // 10^5ns = 100us timeout
    HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_HW_NS      = 1000,   // 1us poll loop delay
    HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_SIM_CYCLE  = 32000,  // 32k sim cycle delay
    HCD_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS   = 100000, // 10^5ns = 100us timeout
    HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_HW_NS     = 1000,   // 1us poll loop delay
    HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_SIM_CYCLE = 32000,  // 32k sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_vmin_enable
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_vmin_enable(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::buffer<buffer_t> l_mmioData = 0;
    uint32_t                l_timeout  = 0;
    uint32_t                l_vdd_pfet_enable = 0;

    FAPI_INF(">>p10_hcd_core_vmin_enable");

    //TODO 1. Clock & Power off the MMA if not already.

    FAPI_DBG("Assert VDD_PFET_REGULATION_FINGER_EN via CPMS_CL2_PFETCNTL[8]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_CL2_PFETCNTL_WO_OR, MMIO_1BIT(8) ) );

    FAPI_DBG("Set VDD_PFET_SEQ_STATE to Voff(0b01) via CPMS_CL2_PFETCNTL[0-1]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_CL2_PFETCNTL_WO_OR, MMIO_1BIT(1) ) );

    FAPI_DBG("Wait for VDD_PG_STATE == 0x8 via CPMS_CL2_PFETCNTL[42-45]");
    l_timeout = HCD_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS /
                HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_C( i_target, MMIO_LOWADDR(CPMS_CL2_PFETCNTL), l_mmioData ) );

        // use multicastAND to check 1
        if( MMIO_GET(MMIO_LOWBIT(42)) == 1 )
        {
            break;
        }

        fapi2::delay(HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_HW_NS,
                     HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT((l_timeout != 0),
                fapi2::VMIN_ENA_VDD_PG_STATE_TIMEOUT()
                .set_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS(HCD_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS)
                .set_CPMS_CL2_PFETCNTL(l_mmioData)
                .set_CORE_TARGET(i_target),
                "Vmin Enable VDD_PG_STATE Timeout");

    FAPI_DBG("Check VDD_PFET_ENABLE_ACTUAL == 0x80 via CPMS_CL2_PFETSTAT[16-23]");
    FAPI_TRY( HCD_GETMMIO_C( i_target, CPMS_CL2_PFETSTAT, l_mmioData ) );

    MMIO_EXTRACT(16, 8, l_vdd_pfet_enable);
    FAPI_ASSERT((l_vdd_pfet_enable == 0x80),
                fapi2::VMIN_ENA_VDD_PFET_ENABLE_FAILED()
                .set_CPMS_CL2_PFETSTAT(l_mmioData)
                .set_CORE_TARGET(i_target),
                "Vmin Enable VDD_PFET_ENABLE Failed");

    FAPI_DBG("Assert RVID_ENABLE via CPMS_RVCSR[0]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_RVCSR_WO_OR, MMIO_1BIT(0) ) );

    FAPI_DBG("Wait for RVID_ACTIVE and RVID_ENABLED via CPMS_RVCSR[32/34]");
    l_timeout = HCD_VMIN_ENA_RVID_ACTIVE_POLL_TIMEOUT_HW_NS /
                HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_C( i_target, MMIO_LOWADDR(CPMS_RVCSR), l_mmioData ) );

        // use multicastAND to check 1
        if( MMIO_GET(MMIO_LOWBIT(32)) == 1 && MMIO_GET(MMIO_LOWBIT(34)) == 1)
        {
            break;
        }

        fapi2::delay(HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_HW_NS,
                     HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT((l_timeout != 0),
                fapi2::VMIN_ENA_RVID_ACTIVE_TIMEOUT()
                .set_VMIN_ENA_RVID_ACTIVE_POLL_TIMEOUT_HW_NS(HCD_VMIN_ENA_RVID_ACTIVE_POLL_TIMEOUT_HW_NS)
                .set_CPMS_RVCSR(l_mmioData)
                .set_CORE_TARGET(i_target),
                "Vmin Enable Rvid Active/Enabled Timeout");

fapi_try_exit:

    FAPI_INF("<<p10_hcd_core_vmin_enable");

    return fapi2::current_err;

}
