/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_vmin_disable.C $ */
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
#include "p10_hcd_common.H"
#include "p10_pm_hcd_flags.h"

#ifdef __PPE_QME
    #include "p10_ppe_c.H"
    #include "p10_ppe_eq.H"
    using namespace scomt::ppe_c;
    using namespace scomt::ppe_eq;
    #define QME_FLAGS_RVRM_ENABLE QME_FLAGS_RVRM_ENABLE
#else
    #include "p10_scom_c.H"
    #include "p10_scom_eq.H"
    using namespace scomt::c;
    using namespace scomt::eq;
    #define QME_FLAGS_RVRM_ENABLE p10hcd::QME_FLAGS_RVRM_ENABLE
#endif

//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

enum P10_HCD_CORE_VMIN_DISABLE_CONSTANTS
{
    HCD_VMIN_DIS_RVID_ENABLED_POLL_TIMEOUT_HW_NS      = 100000000, // 10^5ns = 100us timeout
    HCD_VMIN_DIS_RVID_ENABLED_POLL_DELAY_HW_NS        = 1000,   // 1us poll loop delay
    HCD_VMIN_DIS_RVID_ENABLED_POLL_DELAY_SIM_CYCLE    = 32000,  // 32k sim cycle delay
    HCD_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS       = 100000, // 10^5ns = 100us timeout
    HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_HW_NS         = 1000,   // 1us poll loop delay
    HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_SIM_CYCLE     = 32000,  // 32k sim cycle delay
    HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS   = 100000000, // 10^5ns = 100us timeout
    HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_HW_NS     = 1000,   // 1us poll loop delay
    HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_SIM_CYCLE = 32000,  // 32k sim cycle delay
    HCD_VMIN_DIS_VDD_PG_STATE_POLL_TIMEOUT_HW_NS      = 100000000, // 10^5ns = 100us timeout
    HCD_VMIN_DIS_VDD_PG_STATE_POLL_DELAY_HW_NS        = 1000,   // 1us poll loop delay
    HCD_VMIN_DIS_VDD_PG_STATE_POLL_DELAY_SIM_CYCLE    = 32000,  // 32k sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_vmin_disable
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_vmin_disable(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::Target < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > l_eq_target =
        i_target.getParent < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST > ();
    fapi2::buffer<buffer_t> l_mmioData = 0;
    fapi2::buffer<uint64_t> l_scomData = 0;
    uint32_t                l_timeout  = 0;
    uint8_t                 l_attr_mma_poweroff_disable = 0;
    fapi2::Target < fapi2::TARGET_TYPE_SYSTEM > l_sys;
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_SYSTEM_MMA_POWEROFF_DISABLE, l_sys,  l_attr_mma_poweroff_disable ) );
#ifdef USE_RUNN
    fapi2::ATTR_RUNN_MODE_Type                  l_attr_runn_mode;
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_RUNN_MODE, l_sys, l_attr_runn_mode ) );
#endif

    FAPI_INF(">>p10_hcd_core_vmin_disable");

    FAPI_TRY(HCD_GETMMIO_Q( l_eq_target, QME_FLAGS_RW, l_mmioData ) );

    if( MMIO_GET( QME_FLAGS_RVRM_ENABLE ) == 1 )
    {
        FAPI_DBG("Wait for RVID_ENABLED via CPMS_RVCSR[34]");
        l_timeout = HCD_VMIN_DIS_RVID_ENABLED_POLL_TIMEOUT_HW_NS /
                    HCD_VMIN_DIS_RVID_ENABLED_POLL_DELAY_HW_NS;

        do
        {
            FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_RVCSR, l_scomData ) );

            // use multicastAND to check 1
            if(
#ifdef USE_RUNN
                ( !l_attr_runn_mode ) &&
#endif
                ( SCOM_GET(34) == 1 ) )

            {
                break;
            }

            fapi2::delay(HCD_VMIN_DIS_RVID_ENABLED_POLL_DELAY_HW_NS,
                         HCD_VMIN_DIS_RVID_ENABLED_POLL_DELAY_SIM_CYCLE);
        }
        while( (--l_timeout) != 0 );

        HCD_ASSERT( (
#ifdef USE_RUNN
                        l_attr_runn_mode ? ( SCOM_GET(34) == 1 ) :
#endif
                        (l_timeout != 0) ),
                    VMIN_DIS_RVID_ENABLED_TIMEOUT,
                    set_VMIN_DIS_RVID_ENABLED_POLL_TIMEOUT_HW_NS, HCD_VMIN_DIS_RVID_ENABLED_POLL_TIMEOUT_HW_NS,
                    set_CPMS_RVCSR, l_scomData,
                    set_CORE_TARGET, i_target,
                    "ERROR: Vmin Disable Rvid Enabled Timeout");

        // TODO enable this once settings is known
        //FAPI_DBG("Set RVRM_TUNE to be 64ns(0b110) via CPMS_RVCSR[6:8]");
        //FAPI_TRY( HCD_PUTMMIO_S(i_target, CPMS_RVCSR_WO_OR, BITS64(6, 2) ) );

        FAPI_DBG("Drop RVID_ENABLE via CPMS_RVCSR[0]");
        FAPI_TRY( HCD_PUTMMIO_S(i_target, CPMS_RVCSR_WO_CLEAR, BIT64(0) ) );

        FAPI_DBG("Wait for RVID_BYPASS via CPMS_RVCSR[33]");
        l_timeout = HCD_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS /
                    HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_HW_NS;

        do
        {
            FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_RVCSR, l_scomData ) );

            // use multicastAND to check 1

            if(
#ifdef USE_RUNN
                ( !l_attr_runn_mode ) &&
#endif
                ( SCOM_GET(33) == 1 ) )
            {
                break;
            }

            fapi2::delay(HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_HW_NS,
                         HCD_VMIN_DIS_RVID_BYPASS_POLL_DELAY_SIM_CYCLE);
        }
        while( (--l_timeout) != 0 );

        if( !l_timeout )
        {
            FAPI_IMP("WARNING RVRM BYPASS TIMEOUT");
        }

        /*HW563996
        HCD_ASSERT( (
        #ifdef USE_RUNN
                    l_attr_runn_mode ? ( SCOM_GET(33) == 1 ) :
        #endif
                    (l_timeout != 0) ),
                    VMIN_DIS_RVID_BYPASS_TIMEOUT,
                    set_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS, HCD_VMIN_DIS_RVID_BYPASS_POLL_TIMEOUT_HW_NS,
                    set_CPMS_RVCSR, l_scomData,
                    set_CORE_TARGET, i_target,
                    "ERROR: Vmin Disable Rvid Bypass Timeout");
        */

        FAPI_DBG("Set VDD_PFET_SEQ_STATE to Von(0b11) via CPMS_CL2_PFETCNTL[0-1]");
        FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CL2_PFETCNTL_WO_OR,  BITS64(0, 2) ) );

        FAPI_DBG("Wait for VDD_PFETS_ENABLED_SENSE asserted via CPMS_CL2_PFETSTAT[0]");
        l_timeout = HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS /
                    HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_HW_NS;

        do
        {
            FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_CL2_PFETSTAT, l_scomData ) );

            // use multicastAND to check 1
            if(
#ifdef USE_RUNN
                ( !l_attr_runn_mode ) &&
#endif
#if defined(POWER10_DD_LEVEL) && POWER10_DD_LEVEL != 10
                ( SCOM_GET(4) == 1 ) )
#else
                ( SCOM_GET(0) == 1 ) )
#endif
            {
                break;
            }

            fapi2::delay(HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_HW_NS,
                         HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_DELAY_SIM_CYCLE);
        }
        while( (--l_timeout) != 0 );

        HCD_ASSERT( (
#ifdef USE_RUNN
                        l_attr_runn_mode ?
#if defined(POWER10_DD_LEVEL) && POWER10_DD_LEVEL != 10
                        ( SCOM_GET(4) == 1 ) :
#else
                        ( SCOM_GET(0) == 1 ) :
#endif
#endif
                        (l_timeout != 0) ),
                    VMIN_DIS_VDD_PFET_ENABLE_TIMEOUT,
                    set_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS, HCD_VMIN_DIS_VDD_PFET_ENABLE_POLL_TIMEOUT_HW_NS,
                    set_CPMS_CL2_PFETSTAT, l_scomData,
                    set_CORE_TARGET, i_target,
                    "ERROR: Vmin Disable VDD Pfet Enable Timeout");

        FAPI_DBG("Wait for VDD_PG_STATE == 0x8 via CPMS_CL2_PFETCNTL[42-45]");
        l_timeout = HCD_VMIN_DIS_VDD_PG_STATE_POLL_TIMEOUT_HW_NS /
                    HCD_VMIN_DIS_VDD_PG_STATE_POLL_DELAY_HW_NS;

        do
        {
            FAPI_TRY( HCD_GETMMIO_C( i_target, MMIO_LOWADDR(CPMS_CL2_PFETCNTL), l_mmioData ) );

            // use multicastAND to check 1
            if(
#ifdef USE_RUNN
                ( !l_attr_runn_mode ) &&
#endif
                ( MMIO_GET(MMIO_LOWBIT(42)) == 1 ) )
            {
                break;
            }

            fapi2::delay(HCD_VMIN_DIS_VDD_PG_STATE_POLL_DELAY_HW_NS,
                         HCD_VMIN_DIS_VDD_PG_STATE_POLL_DELAY_SIM_CYCLE);
        }
        while( (--l_timeout) != 0 );

        FAPI_ASSERT( (
#ifdef USE_RUNN
                         l_attr_runn_mode ? ( MMIO_GET(MMIO_LOWBIT(42)) == 1 ) :
#endif
                         (l_timeout != 0) ),
                     fapi2::VMIN_ENA_VDD_PG_STATE_TIMEOUT()
                     .set_VMIN_ENA_VDD_PG_STATE_POLL_TIMEOUT_HW_NS(HCD_VMIN_DIS_VDD_PG_STATE_POLL_TIMEOUT_HW_NS)
                     .set_CPMS_CL2_PFETCNTL(l_mmioData)
                     .set_CORE_TARGET(i_target),
                     "ERROR: Vmin Disable VDD_PG_STATE Timeout");

        FAPI_DBG("Reset VDD_PFET_SEQ_STATE to No-Op(0b00) via CPMS_CL2_PFETCNTL[0-1]");
        FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CL2_PFETCNTL_WO_CLEAR,  BITS64(0, 2)) );
    }

    //if not dynamic mode, stop2 only turn on mma clock, stop3 turn on mma power and scan
    if( l_attr_mma_poweroff_disable )
    {
        // will be redundent with stop2 scom but for mma scaninit this is required
        FAPI_DBG("Switch CL2 Glsmux to DPLL via CPMS_CGCSR[11:L2_CLKGLM_SEL]");
        FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CGCSR_WO_OR, BIT64(11) ) );

        FAPI_TRY( p10_hcd_mma_poweron( i_target ) );
        FAPI_TRY( p10_hcd_mma_scaninit( i_target ) );
    }

fapi_try_exit:

    FAPI_INF("<<p10_hcd_core_vmin_disable");

    return fapi2::current_err;

}
