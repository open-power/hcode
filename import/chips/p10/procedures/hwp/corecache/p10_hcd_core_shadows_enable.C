/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_shadows_enable.C $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2020                                                    */
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
/// @file  p10_hcd_core_shadows_enable.C
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

#include "p10_hcd_core_shadows_enable.H"
#include "p10_hcd_common.H"
#include "p10_pm_hcd_flags.h"

#ifdef __PPE_QME
    #include "p10_ppe_c.H"
    #include "p10_ppe_eq.H"
    using namespace scomt::ppe_c;
    using namespace scomt::ppe_eq;
    #define QME_FLAGS_TOD_COMPLETE QME_FLAGS_TOD_SETUP_COMPLETE
#else
    #include "p10_scom_c.H"
    #include "p10_scom_eq.H"
    using namespace scomt::c;
    using namespace scomt::eq;
    #define QME_FLAGS_TOD_COMPLETE p10hcd::QME_FLAGS_TOD_SETUP_COMPLETE
#endif


//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

enum P10_HCD_CORE_SHADOWS_ENABLE_CONSTANTS
{
    HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_TIMEOUT_HW_NS   = 100000, // 10^5ns = 100us timeout
    HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_DELAY_HW_NS     = 1000,   // 1us poll loop delay
    HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_DELAY_SIM_CYCLE = 32000,  // 32k sim cycle delay
    HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS      = 100000, // 10^5ns = 100us timeout
    HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_DELAY_HW_NS        = 1000,   // 1us poll loop delay
    HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_DELAY_SIM_CYCLE    = 32000,  // 32k sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_shadows_enable
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_shadows_enable(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::buffer<buffer_t> l_mmioData = 0;
    uint32_t                l_timeout  = 0;
    uint32_t                l_shadow_states = 0;

    FAPI_INF(">>p10_hcd_core_shadows_enable");

    fapi2::Target < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > l_eq_target =
        i_target.getParent < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST > ();

    FAPI_TRY(HCD_GETMMIO_Q( l_eq_target, QME_FLAGS_RW, l_mmioData ) );

    if ( l_mmioData & BIT32( QME_FLAGS_TOD_COMPLETE ) )
    {

        FAPI_DBG("Assert CORE_INTR_SAMPLE/REFRESH_PMSR via PCR_SCSR[18/23]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_SCSR_WO_OR, MMIO_LOAD32H( BIT32(18) | BIT32(23) ) ) );

        FAPI_DBG("Assert XFER_START via PCR_TFCSR[0]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_TFCSR_WO_OR, MMIO_1BIT(0) ) );

        FAPI_DBG("Enable CORE_SHADOW via CUCR[0]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_CUCR_WO_OR, MMIO_1BIT(0) ) );

        FAPI_DBG("Wait for FTC/PP/DPT_SHADOW_STATE to be Idle via CUCR[33-35,40-41,45-46]");
        l_timeout = HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_TIMEOUT_HW_NS /
                    HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_DELAY_HW_NS;

        do
        {
            FAPI_TRY( HCD_GETMMIO_C( i_target, MMIO_LOWADDR(CPMS_CUCR), l_mmioData ) );

            // use multicastAND to check 0
            MMIO_GET32L(l_shadow_states);

            if( !( l_shadow_states & ( BITS64SH(33, 3) | BITS64SH(40, 2) | BITS64SH(45, 2) ) ) )
            {
                break;
            }

            fapi2::delay(HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_DELAY_HW_NS,
                         HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_DELAY_SIM_CYCLE);
        }
        while( (--l_timeout) != 0 );

        FAPI_ASSERT((l_timeout != 0),
                    fapi2::SHADOW_ENA_CORE_SHADOW_STATE_TIMEOUT()
                    .set_SHADOW_ENA_CORE_SHADOW_STATE_POLL_TIMEOUT_HW_NS(HCD_SHADOW_ENA_CORE_SHADOW_STATE_POLL_TIMEOUT_HW_NS)
                    .set_CPMS_CUCR(l_mmioData)
                    .set_CORE_TARGET(i_target),
                    "ERROR: Shadow Enable FTC/PP/DPT Shadow State Timeout");

        FAPI_DBG("Wait on XFER_SENT_DONE via PCR_TFCSR[33]");
        l_timeout = HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS /
                    HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_DELAY_HW_NS;

        do
        {
            FAPI_TRY( HCD_GETMMIO_C( i_target, MMIO_LOWADDR(QME_TFCSR), l_mmioData ) );

            // use multicastAND to check 1
            if( MMIO_GET(MMIO_LOWBIT(33)) == 1 )
            {
                break;
            }

            fapi2::delay(HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_DELAY_HW_NS,
                         HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_DELAY_SIM_CYCLE);
        }
        while( (--l_timeout) != 0 );

        FAPI_ASSERT((l_timeout != 0),
                    fapi2::SHADOW_ENA_XFER_SENT_DONE_TIMEOUT()
                    .set_SHADOW_ENA_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS(HCD_SHADOW_ENA_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS)
                    .set_QME_TFCSR(l_mmioData)
                    .set_CORE_TARGET(i_target),
                    "ERROR: Shadow Enable Xfer Sent Done Timeout");

#ifndef XFER_SENT_DONE_DISABLE

        FAPI_DBG("Drop XFER_SENT_DONE via PCR_TFCSR[33]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, MMIO_LOWADDR(QME_TFCSR_WO_CLEAR), MMIO_1BIT( MMIO_LOWBIT(33) ) ) );

#endif

        FAPI_DBG("Drop CTFS_WKUP_ENABLE via PCR_SCSR[27]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_SCSR_WO_CLEAR, MMIO_1BIT(27) ) );

        // P10 HW Spec requires 4 ppe cycle delay (to account for staging delay)
        // between asserting CUCR[0] above and then asserting CUCR[1] below
        // Extra poll loop above for XFER_SENT_DONE will be enough for 4 cycles
        FAPI_DBG("Enable CORE_SAMPLE via CUCR[1]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_CUCR_WO_OR, MMIO_1BIT(1) ) );
    }
    else
    {
        FAPI_INF("TOD not enabled.  Skipping enablement of TimeFac Shadow");
    }

    //TODO Program calibrated DDS delay

    FAPI_DBG("Enable Droop Detection via FDCR[0]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, CPMS_FDCR_WO_CLEAR, MMIO_LOAD32H(BIT32(0)) ) );

fapi_try_exit:

    FAPI_INF("<<p10_hcd_core_shadows_enable");

    return fapi2::current_err;

}
