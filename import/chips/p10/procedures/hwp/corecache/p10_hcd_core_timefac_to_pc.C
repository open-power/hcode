/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_timefac_to_pc.C $ */
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
/// @file  p10_hcd_core_timefac_to_pc.C
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

#include "p10_hcd_core_timefac_to_pc.H"
#include "p10_hcd_common.H"
#include "p10_pm_hcd_flags.h"

#ifdef __PPE_QME
    #include "p10_ppe_c.H"
    #include "p10_ppe_eq.H"
    using namespace scomt::ppe_c;
    using namespace scomt::ppe_eq;
    #define EC_PC_TFX_SM                    0x2002049b
    #define EC_PC_TOD_READ                  0x200204A3
    #define EC_PC_FIR_CORE_RW               0x20020440
    #define EC_PC_FIR_CORE_WO_AND           0x20020441
    #define QME_FLAGS_TOD_COMPLETE QME_FLAGS_TOD_SETUP_COMPLETE
#else
    #include <multicast_group_defs.H>
    #include "p10_scom_c.H"
    #include "p10_scom_eq.H"
    using namespace scomt::c;
    using namespace scomt::eq;
    #define QME_FLAGS_TOD_COMPLETE p10hcd::QME_FLAGS_TOD_SETUP_COMPLETE
#endif


//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

enum P10_HCD_CORE_TIMEFAC_TO_PC_CONSTANTS
{
    HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS      = 100000, // 10^5ns = 100us timeout
    HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_DELAY_HW_NS        = 1000,   // 1us poll loop delay
    HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_DELAY_SIM_CYCLE    = 32000,  // 32k sim cycle delay
    HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_TIMEOUT_HW_NS     = 100000, // 10^5ns = 100us timeout
    HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_DELAY_HW_NS       = 1000,   // 1us poll loop delay
    HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_DELAY_SIM_CYCLE   = 32000,  // 32k sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_timefac_to_pc
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_timefac_to_pc(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::buffer<buffer_t> l_mmioData            = 0;
    fapi2::buffer<uint64_t> l_scomData            = 0;
    uint32_t                l_timeout             = 0;
    uint32_t                l_scsr                = 0;
    uint32_t                l_tfcsr_errors        = 0;
    uint32_t                l_pc_fir_errors       = 0;
    uint32_t                l_state_loss_cores    = 0;
    uint32_t                l_retry_counter       = 0; //global fixme
    fapi2::ATTR_CHIP_UNIT_POS_Type l_attr_chip_unit_pos  = 0;
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > l_target =
        i_target;//getChildren w/o and/or
    fapi2::Target < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > l_eq_target =
        i_target.getParent < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST > ();
    fapi2::Target< fapi2::TARGET_TYPE_PROC_CHIP > l_chip =
        i_target.getParent< fapi2::TARGET_TYPE_PROC_CHIP >();

    FAPI_INF(">>p10_hcd_core_timefac_to_pc");

    FAPI_TRY(HCD_GETMMIO_Q( l_eq_target, QME_FLAGS_RW, l_mmioData ) );

    if ( MMIO_GET( QME_FLAGS_TOD_COMPLETE ) == 1 )
    {
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_QME_STATE_LOSS_CORES, l_chip, l_state_loss_cores));

        FAPI_INF("Stop11 only targets: %x timefac current_target %x",
                 l_state_loss_cores, i_target.getCoreSelect());
        l_state_loss_cores &= i_target.getCoreSelect();

        if( l_state_loss_cores )
        {

#if POWER10_DD_LEVEL == 10 // HW534619

            fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST,
                  fapi2::MULTICAST_AND > l_state_loss_core_target =
                      l_chip.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                              static_cast<fapi2::MulticastCoreSelect>(l_state_loss_cores));

            FAPI_DBG("DD1 HW534619: Write 0 to TOD_READ");
            FAPI_TRY( HCD_PUTSCOM_C( l_state_loss_core_target, EC_PC_TOD_READ, 0 ) );

#endif

            // reset stop11 targets
            l_state_loss_cores = 0;
            FAPI_TRY(FAPI_ATTR_SET(fapi2::ATTR_QME_STATE_LOSS_CORES, l_chip, l_state_loss_cores));
        }

        for (auto const& l_core : l_target.getChildren<fapi2::TARGET_TYPE_CORE>())
        {
            // Retry Xfer if error
            l_retry_counter = 0;

            do
            {
                // HW534619
                // DD1 and DD2:
                // self restore -> timefac start -> poll for receive_done
                FAPI_DBG("Assert XFER_START via PCR_TFCSR[0]");
                FAPI_TRY( HCD_PUTMMIO_C( l_core, QME_TFCSR_WO_OR, MMIO_1BIT(0) ) );

                // For STOP exit, after TFAC shadow has been initiated,
                // check that TFCSR[XFER_SEND_DONE is set;
                // after timeout of 50us, create critical error log
                // calling out this core with the TFSCR as part of the FFDC
                FAPI_DBG("Wait on XFER_SENT_DONE via PCR_TFCSR[33]");
                l_timeout = HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS /
                            HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_DELAY_HW_NS;

                do
                {
                    FAPI_TRY( HCD_GETMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR), l_mmioData ) );

                    // use multicastAND to check 1
                    if( MMIO_GET(MMIO_LOWBIT(33)) == 1 )
                    {
                        break;
                    }

                    fapi2::delay(HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_DELAY_HW_NS,
                                 HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_DELAY_SIM_CYCLE);
                }
                while( (--l_timeout) != 0 );

                HCD_ASSERT((l_timeout != 0),
                           TIMEFAC_TO_PC_XFER_SENT_DONE_TIMEOUT,
                           set_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS, HCD_TIMEFAC_TO_PC_XFER_SENT_DONE_POLL_TIMEOUT_HW_NS,
                           set_QME_TFCSR, l_mmioData,
                           set_CORE_TARGET, l_core,
                           "ERROR: TimeFac to PC Xfer Sent Done Timeout");

                FAPI_DBG("Drop XFER_SENT_DONE via PCR_TFCSR[33]");
                FAPI_TRY( HCD_PUTMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR_WO_CLEAR), MMIO_1BIT( MMIO_LOWBIT(33) ) ) );

                FAPI_TRY( HCD_GETMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR), l_mmioData ) );
                MMIO_EXTRACT(MMIO_LOWBIT(34), 3, l_tfcsr_errors);
                FAPI_DBG("Check INCOMING/RUNTIME/STATE_ERR[%x] == 0 via PCR_TFCSR[34-36]", l_tfcsr_errors);

                FAPI_TRY( HCD_GETSCOM_C( l_core, EC_PC_FIR_CORE_RW, l_scomData ) );
                SCOM_EXTRACT(46, 2, l_pc_fir_errors);
                FAPI_DBG("Check PC_TFX_XSTOP_ERROR/PC_TFAC_XSTOP_ERROR[%x] == 0 via CORE_FIR[46,47]", l_pc_fir_errors);

                HCD_ASSERT( ( (l_tfcsr_errors == 0) || (l_tfcsr_errors & 0x1) ),
                            TIMEFAC_TO_PC_TFCSR_ERROR_CHECK_FAILED,
                            set_PC_FIR, l_pc_fir_errors,
                            set_QME_TFCSR, l_tfcsr_errors,
                            set_CORE_TARGET, i_target,
                            "ERROR: TimeFac to PC TFCSR Error Check Failed");

                // On stop exit, if PC gets this error when shifting, reset the PC and shift the shadow again
                if( l_tfcsr_errors || l_pc_fir_errors )
                {
                    l_retry_counter++;

                    FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_CHIP_UNIT_POS, l_core, l_attr_chip_unit_pos));

                    FAPI_DBG("Retry[%x]: Clear INCOMING/RUNTIME/STATE_ERR[%x] via PCR_TFCSR[34-36]",
                             l_retry_counter, l_tfcsr_errors);
                    FAPI_TRY( HCD_PUTMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR_WO_CLEAR), MMIO_LOAD32L( BITS64SH(34, 3) ) ) );

                    FAPI_DBG("Core[%x]: Clear PC_TFX_XSTOP_ERROR/PC_TFAC_XSTOP_ERROR[%x] via CORE_FIR[46,47]",
                             (uint32_t)l_attr_chip_unit_pos, l_pc_fir_errors);
                    FAPI_TRY( HCD_PUTSCOM_C( l_core, EC_PC_FIR_CORE_WO_AND, ( ~BITS64(46, 2) ) ) );
                    FAPI_TRY( HCD_PUTSCOM_C( l_eq_target, 0x200e0001, ( ~BIT64(11) ) ) );

                    FAPI_DBG("Reset the core timefac to INACTIVE via PC.COMMON.TFX[0]");
                    FAPI_TRY( HCD_PUTSCOM_C( l_core, EC_PC_TFX_SM, BIT64(0) ) );
                }
            }
            while( l_tfcsr_errors || l_pc_fir_errors );

#ifdef __PPE_QME

            if( l_retry_counter )
            {
                G_qme_record.c_tfac_s2c_retry_total[l_attr_chip_unit_pos]++;

                if( G_qme_record.c_tfac_s2c_retry_limit[l_attr_chip_unit_pos] < l_retry_counter )
                {
                    G_qme_record.c_tfac_s2c_retry_limit[l_attr_chip_unit_pos] = l_retry_counter;
                }
            }

#endif

        }


#if POWER10_DD_LEVEL != 10 // HW534619 or HW524921

        FAPI_TRY(HCD_GETMMIO_Q( l_eq_target, MMIO_LOWADDR(QME_QMCR), l_mmioData ) );

        if( MMIO_GET(MMIO_LOWBIT(47)) == 1 )
        {
            uint32_t l_core_select    = i_target.getCoreSelect() ;
            uint32_t l_stop_gated     = 0;
            uint32_t l_awake_sibling  = 0;

            FAPI_TRY( HCD_GETMMIO_Q( l_eq_target, QME_SCDR, l_mmioData ) );
            MMIO_EXTRACT(0, 4, l_stop_gated);

            // if both cores waking up, no action
            // if both cores stays in stop, no action
            // if one core wakes up, the sibling stays in stop, no action
            // if one core wakes up, the sibling is already awake,
            //   perform this sequence to the sibling
            l_awake_sibling = (l_core_select ^ 0xF) & 0xF;

            if( (l_awake_sibling & 0x3) == 0x3 )
            {
                l_awake_sibling &= 0xC;
            }

            if( (l_awake_sibling & 0xC) == 0xC )
            {
                l_awake_sibling &= 0x3;
            }

            l_awake_sibling &= ~l_stop_gated;

            FAPI_INF("Awake Sibling core vector[%x] given Current Core Select[%x] and Stop_Gated Cores[%x]",
                     l_awake_sibling, l_core_select, l_stop_gated);

            if( l_awake_sibling )
            {
                fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST,
                      fapi2::MULTICAST_AND > l_sibling_target =
                          l_chip.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                                  static_cast<fapi2::MulticastCoreSelect>(l_awake_sibling));

                FAPI_DBG("Assert PC_COPY_FUSED_SPRS via PCR_SCSR[28]");
                FAPI_TRY( HCD_PUTMMIO_C( l_sibling_target, QME_SCSR_WO_OR, MMIO_LOAD32H( BIT32(28) ) ) );

                FAPI_DBG("Wait on PC_FUSED_COPY_DONE via PCR_SCSR[42]");
                l_timeout = HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_TIMEOUT_HW_NS /
                            HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_DELAY_HW_NS;

                do
                {
                    FAPI_TRY( HCD_GETMMIO_C( l_sibling_target, MMIO_LOWADDR(QME_SCSR), l_mmioData ) );

                    // use multicastAND to check 1
                    if( MMIO_GET(MMIO_LOWBIT(42)) == 1 )
                    {
                        break;
                    }

                    fapi2::delay(HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_DELAY_HW_NS,
                                 HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_DELAY_SIM_CYCLE);
                }
                while( (--l_timeout) != 0 );

                FAPI_ASSERT((l_timeout != 0),
                            fapi2::SHADOW_ENA_FUSED_COPY_DONE_TIMEOUT()
                            .set_SHADOW_ENA_FUSED_COPY_DONE_POLL_TIMEOUT_HW_NS(HCD_SHADOW_ENA_FUSED_COPY_DONE_POLL_TIMEOUT_HW_NS)
                            .set_QME_SCSR(l_mmioData)
                            .set_CORE_TARGET(l_sibling_target),
                            "ERROR: Shadow Enable Fused Copy Done Timeout");

                FAPI_DBG("Drop PC_COPY_FUSED_SPRS via PCR_SCSR[28]");
                FAPI_TRY( HCD_PUTMMIO_C( l_sibling_target, QME_SCSR_WO_CLEAR, MMIO_LOAD32H( BIT32(28) ) ) );
            }
        }

#endif


        // This may be redundent in stop11 exit as scominit would have done it already
        // but for stop2/3, this would be done here once.
        // Undo potential quiesces before last clock off, no-op for istep4
        l_scsr = ( BIT32(4) | BITS32(7, 2) | BIT32(22) );

        FAPI_DBG("Drop HBUS_DISABLE/L2RCMD_INTF_QUIESCE/NCU_TLBIE_QUIESCE/AUTO_PMSR_SHIFT_DIS via PCR_SCSR[4,7,8,22]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_SCSR_WO_CLEAR, MMIO_LOAD32H( l_scsr ) ) );
    }
    else
    {
        FAPI_INF("TOD not enabled.  Skipping enablement of TimeFac Shadow");

        // reset stop11 targets only for IPL
        l_state_loss_cores = 0;
        FAPI_TRY(FAPI_ATTR_SET(fapi2::ATTR_QME_STATE_LOSS_CORES, l_chip, l_state_loss_cores));
    }

fapi_try_exit:
    FAPI_INF("<<p10_hcd_core_timefac_to_pc");
    return fapi2::current_err;
}
