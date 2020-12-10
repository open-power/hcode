/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_vmin_enable.C $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2021                                                    */
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
#include "p10_hcd_mma_poweroff.H"
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
    HCD_VMIN_ENA_PFET_ENABLE_DELAY_HW_NS           = 50,     // 50ns quiesce delay
    HCD_VMIN_ENA_PFET_ENABLE_DELAY_SIM_CYCLE       = 250     // 250 sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_vmin_enable
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_vmin_enable(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::buffer<buffer_t> l_mmioData = 0;
    fapi2::buffer<uint64_t> l_scomData = 0;
    uint32_t                l_timeout  = 0;
#ifndef PFET_SENSE_POLL_DISABLE
    uint32_t                l_vdd_pfet_enable_actual = 0;
#endif

    fapi2::Target < fapi2::TARGET_TYPE_SYSTEM > l_sys;
    fapi2::ATTR_RUNN_MODE_Type                  l_attr_runn_mode;
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_RUNN_MODE, l_sys, l_attr_runn_mode ) );

    FAPI_INF(">>p10_hcd_core_vmin_enable");

    // MMA clock would already be turned off by stop2 with core clocks

    // MMA PFET Power On/Off sequence requires CL2 PFET[ON] + CL2 RegulationFinger[ON]
    // Stop3: Set RF -> MMA PFET[OFF] -> CL2 PFET[Vmin]
    // Exit3:                            CL2 PFET[ON] -> MMA PFET[ON] (keep RF on)
    FAPI_DBG("Assert VDD_PFET_REGULATION_FINGER_EN via CPMS_CL2_PFETCNTL[8]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CL2_PFETCNTL_WO_OR, BIT64(8) ) );

#ifndef POWER_LOSS_DISABLE

    FAPI_DBG("Power Off MMA before enabling Vmin");
    FAPI_TRY( p10_hcd_mma_poweroff( i_target ) );

#endif

    FAPI_DBG("Set VDD_PFET_SEQ_STATE to Voff(0b01) via CPMS_CL2_PFETCNTL[0-1]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CL2_PFETCNTL_WO_OR, BIT64(1) ) );

#ifndef PFET_SENSE_POLL_DISABLE

    FAPI_DBG("Wait for VDD_PG_STATE == 0x8 via CPMS_CL2_PFETCNTL[42-45]");
    l_timeout = HCD_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS /
                HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_CL2_PFETCNTL, l_scomData ) );

        // use multicastAND to check 1
        if( ( !l_attr_runn_mode ) &&
            ( SCOM_GET(42) == 1 ) )
        {
            break;
        }

        fapi2::delay(HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_HW_NS,
                     HCD_VMIN_ENA_VDD_PG_STATE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT( ( l_attr_runn_mode ? ( SCOM_GET(42) == 1 ) : (l_timeout != 0) ),
                 fapi2::VMIN_ENA_VDD_PG_STATE_TIMEOUT()
                 .set_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS(HCD_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS)
                 .set_CPMS_CL2_PFETCNTL(l_scomData)
                 .set_CORE_TARGET(i_target),
                 "ERROR: Vmin Enable VDD_PG_STATE Timeout");

    FAPI_DBG("Check VDD_PFET_ENABLE_ACTUAL == 0x80 via CPMS_CL2_PFETSTAT[16-23]");
    FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_CL2_PFETSTAT, l_scomData ) );

    SCOM_EXTRACT(16, 8, l_vdd_pfet_enable_actual);
    FAPI_ASSERT((l_vdd_pfet_enable_actual == 0x80),
                fapi2::VMIN_ENA_VDD_PFET_ENABLE_ACTUAL_FAILED()
                .set_CPMS_CL2_PFETSTAT(l_scomData)
                .set_CORE_TARGET(i_target),
                "ERROR: Vmin Enable VDD_PFET_ENABLE_ACTUAL Failed");

    FAPI_DBG("Delay 50ns");
    fapi2::delay(HCD_VMIN_ENA_PFET_ENABLE_DELAY_HW_NS,
                 HCD_VMIN_ENA_PFET_ENABLE_DELAY_SIM_CYCLE);

#ifdef __PPE_PLAT
    asm("sync");
#endif

#endif

    FAPI_DBG("Reset VDD_PFET_SEQ_STATE to No-Op(0b00) via CPMS_CL2_PFETCNTL[0-1]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CL2_PFETCNTL_WO_CLEAR, BIT64(1) ) );

    FAPI_DBG("Assert RVID_ENABLE via CPMS_RVCSR[0]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_RVCSR_WO_OR, BIT64(0) ) );

    FAPI_DBG("Wait for RVID_ACTIVE and RVID_ENABLED via CPMS_RVCSR[32/34]");
    l_timeout = HCD_VMIN_ENA_RVID_ACTIVE_POLL_TIMEOUT_HW_NS /
                HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_RVCSR, l_scomData ) );

        // use multicastAND to check 1
        if( ( !l_attr_runn_mode ) &&
            ( ( SCOM_GET(32) == 1 ) &&
              ( SCOM_GET(34) == 1 ) ) )
        {
            break;
        }

        fapi2::delay(HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_HW_NS,
                     HCD_VMIN_ENA_RVID_ACTIVE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT( ( l_attr_runn_mode ?
                   ( ( SCOM_GET(32) == 1 ) &&
                     ( SCOM_GET(34) == 1 ) ) : (l_timeout != 0) ),
                 fapi2::VMIN_ENA_RVID_ACTIVE_TIMEOUT()
                 .set_VMIN_ENA_RVID_ACTIVE_POLL_TIMEOUT_HW_NS(HCD_VMIN_ENA_RVID_ACTIVE_POLL_TIMEOUT_HW_NS)
                 .set_CPMS_RVCSR(l_scomData)
                 .set_CORE_TARGET(i_target),
                 "ERROR: Vmin Enable Rvid Active/Enabled Timeout");

fapi_try_exit:

    FAPI_INF("<<p10_hcd_core_vmin_enable");

    return fapi2::current_err;

}
