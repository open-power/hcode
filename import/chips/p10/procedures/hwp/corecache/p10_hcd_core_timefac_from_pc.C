/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_timefac_from_pc.C $ */
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
/// @file  p10_hcd_core_timefac_from_pc.C
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

#include "p10_hcd_core_timefac_from_pc.H"
#include "p10_hcd_common.H"
#include "p10_pm_hcd_flags.h"

#ifdef __PPE_QME
    #include "p10_ppe_c.H"
    #include "p10_ppe_eq.H"
    using namespace scomt::ppe_c;
    using namespace scomt::ppe_eq;
    #define EC_PC_TFX_SM                    0x2002049b
    #define EC_PC_TOD_READ                  0x200204A3
    #define EC_PC_PMC_UPDATE                0x20020414
    #define EC_PC_FIR_CORE_RW               0x20020440
    #define EC_PC_FIR_CORE_WO_AND           0x20020441
    #define QME_FLAGS_TOD_COMPLETE QME_FLAGS_TOD_SETUP_COMPLETE
    #include "qme_record.h"
    extern QmeRecord G_qme_record;
#else
    #include <multicast_group_defs.H>
    #include "p10_scom_c.H"
    #include "p10_scom_eq.H"
    using namespace scomt::c;
    using namespace scomt::eq;
    #define EC_PC_PMC_UPDATE                0x20020414
    #define QME_FLAGS_TOD_COMPLETE p10hcd::QME_FLAGS_TOD_SETUP_COMPLETE
#endif


//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

enum P10_HCD_CORE_TIMEFAC_FROM_PC_CONSTANTS
{
    HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_TIMEOUT_HW_NS   = 100000, // 10^5ns = 100us timeout
    HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_DELAY_HW_NS     = 1000,   // 1us poll loop delay
    HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_DELAY_SIM_CYCLE = 32000,  // 32k sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_timefac_from_pc
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_timefac_from_pc(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::buffer<buffer_t> l_mmioData = 0;
    fapi2::buffer<uint64_t> l_scomData = 0;
    uint32_t                l_timeout  = 0;
    uint32_t                l_tfcsr_errors = 0;
    uint32_t                l_pc_fir_errors = 0;
    uint32_t                l_retry_counter = 0;
    fapi2::ATTR_CHIP_UNIT_POS_Type l_attr_chip_unit_pos  = 0;
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > l_target =
        i_target;//getChildren w/o and/or
    fapi2::Target < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > l_eq_target =
        i_target.getParent < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST > ();

    FAPI_INF(">>p10_hcd_core_timefac_from_pc");

    FAPI_TRY(HCD_GETMMIO_Q( l_eq_target, QME_FLAGS_RW, l_mmioData ) );

    if ( MMIO_GET ( QME_FLAGS_TOD_COMPLETE ) == 1 )
    {
        for (auto const& l_core : l_target.getChildren<fapi2::TARGET_TYPE_CORE>())
        {
            // retry shadows if errors
            l_retry_counter = 0;

            do
            {
                // In case special wakeup toggles pm_exit causing core re-enter psave state
                // resulting pc timefac state machine turns back to inactive and pc2shadow
                // transfer would already occur that time but then wont occur on next acutal
                // stop entry due to state machine now being inactive in light of lack of
                // another shadow2pc from would be stop2+ exit calling timefac_to_pc hwp.
                FAPI_DBG("Assert TFAC_RESET via PCR_TFCSR[1]");
                FAPI_TRY( HCD_PUTMMIO_C( l_core, QME_TFCSR_WO_OR, MMIO_1BIT(1) ) );

                FAPI_DBG("Reset the core timefac to ACTIVE via PC.COMMON.TFX[1]");
                FAPI_TRY( HCD_PUTSCOM_C( l_core, EC_PC_TFX_SM, BIT64(1) ) );

                FAPI_DBG("Re-transfer TB from PC to Shadow via PMC_UPDATE[31]");
                FAPI_TRY( HCD_PUTSCOM_C( l_core, EC_PC_PMC_UPDATE, BIT64(31) ) );

                FAPI_DBG("Wait on XFER_RECEIVE_DONE via PCR_TFCSR[32]");
                l_timeout = HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_TIMEOUT_HW_NS /
                            HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_DELAY_HW_NS;

                do
                {
                    FAPI_TRY( HCD_GETMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR), l_mmioData ) );

                    // use multicastAND to check 1
                    if( MMIO_GET(MMIO_LOWBIT(32)) == 1 )
                    {
                        break;
                    }

                    fapi2::delay(HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_DELAY_HW_NS,
                                 HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_DELAY_SIM_CYCLE);
                }
                while( (--l_timeout) != 0 );

                FAPI_ASSERT((l_timeout != 0),
                            fapi2::TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_TIMEOUT()
                            .set_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_TIMEOUT_HW_NS(HCD_TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_POLL_TIMEOUT_HW_NS)
                            .set_QME_TFCSR(l_mmioData)
                            .set_CORE_TARGET(l_core),
                            "ERROR: TimeFac From PC Xfer Receive Done Timeout");

                FAPI_DBG("Drop XFER_RECEIVE_DONE via PCR_TFCSR[32]");
                FAPI_TRY( HCD_PUTMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR_WO_CLEAR), MMIO_1BIT( MMIO_LOWBIT(32) ) ) );

                FAPI_TRY( HCD_GETMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR), l_mmioData ) );
                MMIO_EXTRACT(MMIO_LOWBIT(34), 3, l_tfcsr_errors);
                FAPI_DBG("Retry[%x] Check INCOMING/RUNTIME/STATE_ERR[%x] == 0 via PCR_TFCSR[34-36]",
                         l_retry_counter, l_tfcsr_errors);

                FAPI_TRY( HCD_GETSCOM_C( l_core, EC_PC_FIR_CORE_RW, l_scomData ) );
                SCOM_EXTRACT(46, 2, l_pc_fir_errors);
                FAPI_DBG("Core[%x] Check PC_TFX_XSTOP_ERROR/PC_TFAC_XSTOP_ERROR[%x] == 0 via CORE_FIR[46,47]",
                         l_attr_chip_unit_pos, l_pc_fir_errors);

                FAPI_ASSERT( ( (l_tfcsr_errors == 0) || (l_tfcsr_errors & 0x1) ),
                             fapi2::TIMEFAC_FROM_PC_TFCSR_ERROR_CHECK_FAILED()
                             .set_QME_TFCSR(l_tfcsr_errors)
                             .set_CORE_TARGET(i_target),
                             "ERROR: TimeFac From PC TFCSR Error Check Failed");

                // on stop entry detect that it happened, reset the shadow, and write PC to shift it again
                if( l_tfcsr_errors || l_pc_fir_errors )
                {
                    l_retry_counter++;

                    FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_CHIP_UNIT_POS, l_core, l_attr_chip_unit_pos));

                    FAPI_DBG("Retry[%x]: Clear INCOMING/RUNTIME/STATE_ERR[%x] via PCR_TFCSR[34-36] and QME_LFIR[11]",
                             l_retry_counter, l_tfcsr_errors);
                    FAPI_TRY( HCD_PUTMMIO_C( l_core, MMIO_LOWADDR(QME_TFCSR_WO_CLEAR), MMIO_LOAD32L( BITS64SH(34, 3) ) ) );

                    FAPI_DBG("Core[%x]: Clear PC_TFX_XSTOP_ERROR/PC_TFAC_XSTOP_ERROR[%x] via CORE_FIR[46,47]",
                             l_attr_chip_unit_pos, l_pc_fir_errors);
                    FAPI_TRY( HCD_PUTSCOM_C( l_core, EC_PC_FIR_CORE_WO_AND, ( ~BITS64(46, 2) ) ) );
                    FAPI_TRY( HCD_PUTSCOM_C( l_eq_target, 0x200e0001, ( ~BIT64(11) ) ) );

                    FAPI_DBG("Assert TFAC_RESET via PCR_TFCSR[1]");
                    FAPI_TRY( HCD_PUTMMIO_C( l_core, QME_TFCSR_WO_OR, MMIO_1BIT(1) ) );

                    FAPI_DBG("Reset the core timefac to ACTIVE via PC.COMMON.TFX[1]");
                    FAPI_TRY( HCD_PUTSCOM_C( l_core, EC_PC_TFX_SM, BIT64(1) ) );

#ifdef __PPE_QME

                    // delay 100 core cycles before retry to let SM reset complete.
                    for(int i = 0; i < 25; i++)
                    {
                        asm volatile ("tw 0, 0, 0");
                    }

#endif

                    FAPI_DBG("Re-transfer TB from PC to Shadow via PMC_UPDATE[31]");
                    FAPI_TRY( HCD_PUTSCOM_C( l_core, EC_PC_PMC_UPDATE, BIT64(31) ) );
                }
            }
            while( l_tfcsr_errors || l_pc_fir_errors );

#ifdef __PPE_QME

            if( l_retry_counter )
            {
                G_qme_record.c_tfac_c2s_retry_total[l_attr_chip_unit_pos]++;

                if( G_qme_record.c_tfac_c2s_retry_limit[l_attr_chip_unit_pos] < l_retry_counter )
                {
                    G_qme_record.c_tfac_c2s_retry_limit[l_attr_chip_unit_pos] = l_retry_counter;
                }
            }

#endif


        }
    }
    else
    {
        FAPI_INF("TOD not enabled.  Resetting TimeFac Shadow");

        FAPI_DBG("Assert TFAC_RESET via PCR_TFCSR[1]");
        FAPI_TRY( HCD_PUTMMIO_C( i_target, QME_TFCSR_WO_OR, BIT32(1) ) );

        FAPI_DBG("Reset the core timefac to INACTIVE via PC.COMMON.TFX[0]");
        FAPI_TRY( HCD_PUTSCOM_C( i_target, EC_PC_TFX_SM, BIT64(0) ) );
    }

fapi_try_exit:
    FAPI_INF("<<p10_hcd_core_timefac_from_pc");
    return fapi2::current_err;
}
