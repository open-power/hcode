/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_shadows_enable.C $ */
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
    #define EC_PC_TFX_SM 0x2002049b
    #define QME_FLAGS_TOD_COMPLETE QME_FLAGS_TOD_SETUP_COMPLETE
    #define QME_FLAGS_DDS_ENABLED  QME_FLAGS_DDS_OPERABLE
#else
    #include <multicast_group_defs.H>
    #include "p10_scom_c.H"
    #include "p10_scom_eq.H"
    using namespace scomt::c;
    using namespace scomt::eq;
    #define QME_FLAGS_TOD_COMPLETE p10hcd::QME_FLAGS_TOD_SETUP_COMPLETE
    #define QME_FLAGS_DDS_ENABLED  p10hcd::QME_FLAGS_DDS_OPERABLE
#endif


//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

enum P10_HCD_CORE_SHADOWS_ENABLE_CONSTANTS
{
    HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_TIMEOUT_HW_NS   = 100000, // 10^5ns = 100us timeout
    HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_DELAY_HW_NS     = 1000,   // 1us poll loop delay
    HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_DELAY_SIM_CYCLE = 32000,  // 32k sim cycle delay
    HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS   = 100000, // 10^5ns = 100us timeout
    HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_HW_NS     = 1000,   // 1us poll loop delay
    HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_SIM_CYCLE = 32000,  // 32k sim cycle delay
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
    fapi2::buffer<buffer_t> l_mmioData            = 0;
    fapi2::buffer<uint64_t> l_scomData            = 0;
    uint32_t                l_timeout             = 0;
    uint32_t                l_state_loss_cores    = 0;
    uint32_t                l_core_refresh_active = 0;
    uint32_t                l_dds_operable        = 0;
//    HW534619 DD1 workaround move to after self restore
//    uint32_t                l_tfcsr_errors        = 0;
//    fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > l_mc_or = i_target;//default OR
    fapi2::Target < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > l_eq_target =
        i_target.getParent < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST > ();
    fapi2::Target< fapi2::TARGET_TYPE_PROC_CHIP > l_chip =
        i_target.getParent< fapi2::TARGET_TYPE_PROC_CHIP >();
    fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > l_pmsr_core_target =
        l_chip.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ, static_cast<fapi2::MulticastCoreSelect>(0xF));

    FAPI_INF(">>p10_hcd_core_shadows_enable");

    FAPI_TRY(HCD_GETMMIO_Q( l_eq_target, QME_FLAGS_RW, l_mmioData ) );
    l_dds_operable = MMIO_GET(QME_FLAGS_DDS_ENABLED);

    /* HW534619 becomes permenant for DD1 and DD2
    if ( MMIO_GET( QME_FLAGS_TOD_COMPLETE ) == 1 )
    {

    #if POWER10_DD_LEVEL != 10 // HW534619

    // DD1: self restore -> timefac start -> poll for receive_done
    // DD2: timefac start -> self restore -> poll for receive_done
    FAPI_DBG("Assert XFER_START via PCR_TFCSR[0]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_TFCSR_WO_OR, MMIO_1BIT(0) ) );

    #endif

    // HW534619 DD1 workaround move to after self restore
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

            FAPI_DBG("Check INCOMING/RUNTIME/STATE_ERR == 0 via PCR_TFCSR[34-36]");
            FAPI_TRY( HCD_GETMMIO_C( l_mc_or, MMIO_LOWADDR(QME_TFCSR), l_mmioData ) );

            MMIO_EXTRACT(MMIO_LOWBIT(34), 3, l_tfcsr_errors);

            if( l_tfcsr_errors != 0 )
            {
                FAPI_DBG("Clear INCOMING/RUNTIME/STATE_ERR[%x] via PCR_TFCSR[34-36]", l_tfcsr_errors);
                FAPI_TRY( HCD_PUTMMIO_C( i_target, MMIO_LOWADDR(QME_TFCSR_WO_CLEAR), MMIO_LOAD32L( BITS64SH(34, 3) ) ) );

                FAPI_DBG("Assert TFAC_RESET via PCR_TFCSR[1]");
                FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_TFCSR_WO_OR, MMIO_1BIT(1) ) );

                FAPI_DBG("Reset the core timefac to INACTIVE via PC.COMMON.TFX[1]");
                FAPI_TRY( HCD_PUTSCOM_C( i_target, EC_PC_TFX_SM, BIT64(1) ) );
            }

            FAPI_ASSERT((l_tfcsr_errors == 0),
                        fapi2::SHADOW_ENA_TFCSR_ERROR_CHECK_FAILED()
                        .set_QME_TFCSR(l_tfcsr_errors)
                        .set_CORE_TARGET(i_target),
                        "ERROR: Shadow Disable TFCSR Error Check Failed");

            FAPI_DBG("Drop XFER_SENT_DONE via PCR_TFCSR[33]");
            FAPI_TRY( HCD_PUTMMIO_C( i_target, MMIO_LOWADDR(QME_TFCSR_WO_CLEAR), MMIO_1BIT( MMIO_LOWBIT(33) ) ) );
    }
    else
    {
    FAPI_INF("TOD not enabled.  Skipping enablement of TimeFac Shadow");
    }
    */

    FAPI_DBG("Assert CORE_INTR_SAMPLE/REFRESH_PMSR via PCR_SCSR[18/23]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_SCSR_WO_OR, MMIO_LOAD32H( BIT32(18) ) ) );
    // HW555543: due to pmsr multicast issue, permanent workaround
    // by always asserting SCSR[23].REFRESH_PMSR to all cores
    FAPI_TRY( HCD_PUTMMIO_C( l_pmsr_core_target, QME_SCSR_WO_OR, MMIO_LOAD32H( BIT32(23) ) ) );


#if POWER10_DD_LEVEL == 10 //HW527679

    // on any stop wakeup before setting the CORE_SHADOW_ENABLE,
    // first do a Write-OR of all zero data to the FDIR.
    FAPI_DBG("DD1: Write-OR with 0s on FDIR");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_FDIR_WO_OR, 0 ) );
    //HW555711
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_FDIR_WO_OR, 0 ) );

#endif

    FAPI_DBG("Enable CORE_SHADOW via CUCR[0]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CUCR_WO_OR, BIT64(0) ) );

    // Making the following design purely to accommodate potential stop5,
    // or potentially stop11 mixed with stop2/3; otherwise a boolean switch
    // for stop11 execution would suffice, and scom with bit0 can be combined.
    //
    // Also note this attribute is assumed to be per qme regional cores,
    // but due to limit of multicast target not be able to access attribute,
    // decided to put at chip level on qme platform, which also implies that
    // this hwp is not meant to be ran at cronus/sbe level.
    //
    // If it were to be ran like that, with multicast to all cores on chip
    // can assume all cores on chip accross quads are only doing stop11,
    // then 0xF can be stored to this attribute before execution to make it work.
    FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_QME_STATE_LOSS_CORES, l_chip, l_state_loss_cores));

    FAPI_INF("Stop11 only targets: %x shadows current_targets %x",
             l_state_loss_cores, i_target.getCoreSelect());
    l_state_loss_cores &= i_target.getCoreSelect();

    if( l_state_loss_cores )
    {
        fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST,
              fapi2::MULTICAST_AND > l_state_loss_core_target =
                  l_chip.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                          static_cast<fapi2::MulticastCoreSelect>(l_state_loss_cores));

        FAPI_DBG("As Stop5/11[%x], Forcing REFRESH_FTC/PP/DPT_SHADOW via CUCR[9-11]", l_state_loss_cores);
        FAPI_TRY( HCD_PUTMMIO_S( l_state_loss_core_target, CPMS_CUCR_WO_OR, BITS64(9, 3) ) );

        // HW534619 reset l_state_loss_cores are done in later p10_hcd_core_timefac_enable.C
    }

    FAPI_DBG("Wait for CORE_REFRESH_ACTIVE to be 0x0 via CUCR[50]");
    l_timeout = HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS /
                HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_CUCR, l_scomData ) );

        // use multicastAND to check 0
        SCOM_GET32L(l_core_refresh_active);

        if( !( l_core_refresh_active & BIT64SH(50) ) )
        {
            break;
        }

        fapi2::delay(HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_HW_NS,
                     HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT((l_timeout != 0),
                fapi2::SHADOW_ENA_CORE_REFRESH_ACTIVE_TIMEOUT()
                .set_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS(HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS)
                .set_CPMS_CUCR(l_scomData)
                .set_CORE_TARGET(i_target),
                "ERROR: CORE_REFRESH_ACTIVE Timeout (phase 0)");

    if( l_dds_operable )
    {
        FAPI_DBG("Enable Droop Detection via FDCR[0]");
        FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_FDCR_WO_CLEAR, BIT64(0) ) );
#if POWER10_DD_LEVEL == 10 //HW555711
        FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_FDCR_WO_CLEAR, BIT64(0) ) );
#endif

        FAPI_DBG("Wait for FDCR_UPDATE_IN_PROGRESS to be 0x0 via CUCR[31]");
        l_timeout = HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_TIMEOUT_HW_NS /
                    HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_DELAY_HW_NS;

        do
        {

            FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_CUCR, l_scomData ) );

            // use multicastAND to check 0
            if( SCOM_GET(31) == 0 )
            {
                break;
            }

            fapi2::delay(HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_DELAY_HW_NS,
                         HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_DELAY_SIM_CYCLE);
        }
        while( (--l_timeout) != 0 );

        FAPI_ASSERT((l_timeout != 0),
                    fapi2::SHADOW_ENA_FDCR_UPDATE_IN_PROG_TIMEOUT()
                    .set_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_TIMEOUT_HW_NS(HCD_SHADOW_ENA_FDCR_UPDATE_IN_PROG_POLL_TIMEOUT_HW_NS)
                    .set_CPMS_CUCR(l_scomData)
                    .set_CORE_TARGET(i_target),
                    "ERROR: FDCR Update Timeout");

    }

    // wait for remaining registers to be done (overlap with DDS enable) -- DD1 may be partially done
    FAPI_DBG("Wait for CORE_REFRESH_ACTIVE to be 0x000 via CUCR[50-52]");
    l_timeout = HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS /
                HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_CUCR, l_scomData ) );

        // use multicastAND to check 0
        SCOM_GET32L(l_core_refresh_active);

        if( !( l_core_refresh_active & BITS64SH(50, 3) ) )
        {
            break;
        }

        fapi2::delay(HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_HW_NS,
                     HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT((l_timeout != 0),
                fapi2::SHADOW_ENA_CORE_REFRESH_ACTIVE_TIMEOUT()
                .set_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS(HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS)
                .set_CPMS_CUCR(l_scomData)
                .set_CORE_TARGET(i_target),
                "ERROR: CORE_REFRESH_ACTIVE Timeout (phase 1)");

    //TODO:  need to put condition compile switch around DD1 work-arounds.
    // DD1 WORKAROUND START
    FAPI_DBG("Disable CORE_SHADOW via CUCR[0]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CUCR_WO_CLEAR, BIT64(0) ) );

    FAPI_DBG("Enable CORE_SHADOW via CUCR[0]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CUCR_WO_OR, BIT64(0) ) );

    FAPI_DBG("Wait for CORE_REFRESH_ACTIVE to be 0x000 via CUCR[50-52]");
    l_timeout = HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS /
                HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_S( i_target, CPMS_CUCR, l_scomData ) );

        // use multicastAND to check 0
        SCOM_GET32L(l_core_refresh_active);

        if( !( l_core_refresh_active & BITS64SH(50, 3) ) )
        {
            break;
        }

        fapi2::delay(HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_HW_NS,
                     HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_ASSERT((l_timeout != 0),
                fapi2::SHADOW_ENA_CORE_REFRESH_ACTIVE_TIMEOUT()
                .set_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS(HCD_SHADOW_ENA_CORE_REFRESH_ACTIVE_POLL_TIMEOUT_HW_NS)
                .set_CPMS_CUCR(l_scomData)
                .set_CORE_TARGET(i_target),
                "ERROR: CORE_REFRESH_ACTIVE Timeout (phase 2)");
    // DD1 WORKAROUND END

    FAPI_DBG("Drop CTFS_WKUP_ENABLE via PCR_SCSR[27]");
    FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_SCSR_WO_CLEAR, MMIO_1BIT(27) ) );

    // P10 HW Spec requires 4 ppe cycle delay (to account for staging delay)
    // between asserting CUCR[0] above and then asserting CUCR[1] below
    // Extra poll loop above for XFER_SENT_DONE will be enough for 4 cycles
    FAPI_DBG("Enable CORE_SAMPLE via CUCR[1]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CUCR_WO_OR, BIT64(1) ) );

fapi_try_exit:
    FAPI_INF("<<p10_hcd_core_shadows_enable");
    return fapi2::current_err;
}
