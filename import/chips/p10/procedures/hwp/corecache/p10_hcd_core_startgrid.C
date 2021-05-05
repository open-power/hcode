/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_startgrid.C $ */
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
/// @file  p10_hcd_core_startgrid.C
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

#include "p10_hcd_core_startgrid.H"
#include "p10_hcd_corecache_realign.H"
#include "p10_hcd_common.H"

#ifdef __PPE_QME
    #include "p10_ppe_eq.H"
    #include "p10_ppe_c.H"
    using namespace scomt::ppe_eq;
    using namespace scomt::ppe_c;
#else
    #include "p10_scom_eq.H"
    #include "p10_scom_c.H"
    using namespace scomt::eq;
    using namespace scomt::c;
#endif

//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------

enum P10_HCD_CORE_STARTGRID_CONSTANTS
{
    HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_TIMEOUT_HW_NS              = 100000000, // 10^6ns = 1ms timeout
    HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_DELAY_HW_NS                = 10000,   // 10us poll loop delay
    HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_DELAY_SIM_CYCLE            = 32000    // 320k sim cycle delay
};

//------------------------------------------------------------------------------
// Procedure: p10_hcd_core_startgrid
//------------------------------------------------------------------------------

fapi2::ReturnCode
p10_hcd_core_startgrid(
    const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > & i_target)
{
    fapi2::buffer<buffer_t> l_mmioData = 0;
    fapi2::buffer<uint64_t> l_scomData = 0;
    uint32_t                l_timeout  = 0;
    uint32_t                l_core_change_done = 0;
    uint32_t                l_regions  = i_target.getCoreSelect();
    fapi2::Target < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > eq_target =
        i_target.getParent < fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST > ();

    FAPI_INF(">>p10_hcd_core_startgrid");

    FAPI_DBG("Switch CL2 Glsmux to DPLL via CPMS_CGCSR[11:L2_CLKGLM_SEL]");
    FAPI_TRY( HCD_PUTMMIO_S( i_target, CPMS_CGCSR_WO_OR, BIT64(11) ) );

    //FAPI_TRY( HCD_GETMMIO_Q( eq_target, QME_RCSCR, l_mmioData ) );
    //FAPI_DBG("Before Drop, RCSCR: %x, region: %x", l_mmioData, l_regions);

    FAPI_DBG("Drop CORE_OFF_REQ[0:3] of Resonent Clocking via RCSCR[0:3]");
    FAPI_TRY( HCD_PUTMMIO_Q( eq_target, QME_RCSCR_WO_CLEAR, MMIO_LOAD32H( ( l_regions << SHIFT32(3) ) ) ) );

    //FAPI_TRY( HCD_GETMMIO_Q( eq_target, QME_RCSCR, l_mmioData ) );
    //FAPI_DBG("After Drop, RCSCR: %x, region: %x", l_mmioData, l_regions);

    FAPI_DBG("Poll for CORE_CHANGE_DONE in RCSR[4:7]");
    l_timeout = HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_TIMEOUT_HW_NS /
                HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_DELAY_HW_NS;

    do
    {
        FAPI_TRY( HCD_GETMMIO_Q( eq_target, QME_RCSCR, l_mmioData ) );

        MMIO_EXTRACT(4, 4, l_core_change_done);

        if( (l_core_change_done & l_regions) == l_regions)
        {
            break;
        }

        fapi2::delay(HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_DELAY_HW_NS,
                     HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_DELAY_SIM_CYCLE);
    }
    while( (--l_timeout) != 0 );

    FAPI_DBG("After Poll, RCSCR: %x, region: %x, Change done: %x l_timeout %x", l_mmioData, l_regions, l_core_change_done,
             l_timeout);

    HCD_ASSERT( (l_timeout != 0),
                CORE_CHANGE_DONE_RESCLK_EXIT_TIMEOUT,
                set_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_TIMEOUT_HW_NS, HCD_CORE_CHANGE_DONE_RESCLK_EXIT_POLL_TIMEOUT_HW_NS,
                set_CORE_CHANGE_DONE, l_core_change_done,
                set_CORE_TARGET, i_target,
                "ERROR: Core Resclk Change Done Exit Timeout");

    FAPI_TRY( p10_hcd_corecache_realign(eq_target, ( l_regions << SHIFT32(8) ) ) );

fapi_try_exit:

    FAPI_INF("<<p10_hcd_core_startgrid");

    return fapi2::current_err;

}
