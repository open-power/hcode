/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_vmin_disable.C $ */
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
/// @file  p10_hcd_core_vmin_disable.C
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

#include "p10_hcd_core_vmin_disable.H"
#include "p10_hcd_mma_poweron.H"
#include "p10_hcd_mma_scaninit.H"
#include "p10_hcd_mma_startclocks.H"
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

enum P10_HCD_CORE_VMIN_DISABLE_CONSTANTS
{
    HCD_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS       = 100000, // 10^5ns = 100us timeout
    HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_HW_NS         = 1000,   // 1us poll loop delay
    HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_SIM_CYCLE     = 32000,  // 32k sim cycle delay
    HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS   = 100000, // 10^5ns = 100us timeout
    HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_HW_NS     = 1000,   // 1us poll loop delay
    HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_SIM_CYCLE = 32000,  // 32k sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_vmin_disable
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_vmin_disable(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::buffer<buffer_t> l_mmioData = 0;
    uint32_t                l_timeout  = 0;

    fapi2::Target < fapi2::TARGET_TYPE_SYSTEM > l_sys;
    fapi2::ATTR_RUNN_MODE_Type                  l_attr_runn_mode;
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_RUNN_MODE, l_sys, l_attr_runn_mode ) );

    FAPI_INF(">>p10_hcd_core_vmin_disable");

    FAPI_DBG("Drop RVID_ENABLE via CPMS_RVCSR[0]");
    FAPI_TRY( HCD_PUTMMIO_C(i_target, CPMS_RVCSR_WO_CLEAR, MMIO_1BIT(0) ) );

    FAPI_DBG("Wait for RVID_BYPASS via CPMS_RVCSR[33]");
    l_timeout = HCD_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS /
                HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_C( i_target, MMIO_LOWADDR(CPMS_RVCSR), l_mmioData ) );

        // use multicastAND to check 1
        if( ( !l_attr_runn_mode ) &&
            ( MMIO_GET(MMIO_LOWBIT(33)) == 1 ) )
        {
            break;
        }

        fapi2::delay(HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_HW_NS,
                     HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT( ( l_attr_runn_mode ? ( MMIO_GET(MMIO_LOWBIT(33)) == 1 ) : (l_timeout != 0) ),
                 fapi2::VMIN_DIS_RVID_BYPASS_TIMEOUT()
                 .set_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS(HCD_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS)
                 .set_CPMS_RVCSR(l_mmioData)
                 .set_CORE_TARGET(i_target),
                 "Vmin Disable Rvid Bypass Timeout");

    FAPI_DBG("Set VDD_PFET_SEQ_STATE to Von(0b11) via CPMS_CL2_PFETCNTL[0-1]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_CL2_PFETCNTL_WO_OR,  MMIO_LOAD32H(BITS32(0, 2)) ) );

    FAPI_DBG("Drop VDD_PFET_REGULATION_FINGER_EN via CPMS_CL2_PFETCNTL[8]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_CL2_PFETCNTL_WO_CLEAR, MMIO_1BIT(8) ) );

    FAPI_DBG("Wait for VDD_PFETS_ENABLED_SENSE asserted via CPMS_CL2_PFETSTAT[0]");
    l_timeout = HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS /
                HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_C( i_target, CPMS_CL2_PFETSTAT, l_mmioData ) );

        // use multicastAND to check 1
        if( ( !l_attr_runn_mode ) &&
            ( MMIO_GET(0) == 1 ) )
        {
            break;
        }

        fapi2::delay(HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_HW_NS,
                     HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT( ( l_attr_runn_mode ? ( MMIO_GET(0) == 1 ) : (l_timeout != 0) ),
                 fapi2::VMIN_DIS_VDD_PFET_ENABLE_TIMEOUT()
                 .set_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS(HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS)
                 .set_CPMS_CL2_PFETSTAT(l_mmioData)
                 .set_CORE_TARGET(i_target),
                 "Vmin Disable VDD Pfet Enable Timeout");

#ifndef POWER_LOSS_DISABLE

    FAPI_DBG("Power On MMA after disabling Vmin");
    FAPI_TRY( p10_hcd_mma_poweron( i_target ) );

    FAPI_DBG("Scaninit MMA after disabling Vmin");
    FAPI_TRY( p10_hcd_mma_scaninit( i_target ) );


#endif

    FAPI_DBG("Clock On MMA after disabling Vmin");
    FAPI_TRY( p10_hcd_mma_startclocks( i_target ) );

fapi_try_exit:

    FAPI_INF("<<p10_hcd_core_vmin_disable");

    return fapi2::current_err;

}
