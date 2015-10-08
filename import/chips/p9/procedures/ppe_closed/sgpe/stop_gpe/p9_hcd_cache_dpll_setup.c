/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_dpll_setup.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"

int
p9_hcd_cache_dpll_setup(uint8_t quad)
{
    int      rc = SGPE_STOP_SUCCESS;
    uint64_t data;

    // --------------
    // PRE-SCAN
    // --------------

    PK_TRACE("Drop DPLL Test Mode and Reset");
    GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BITS64(3, 2));

    PK_TRACE("Put DPLL into bypass");
    GPE_PUTSCOM(EQ_NET_CTRL0_WOR, QUAD_ADDR_BASE, quad, BIT64(5));

    PK_TRACE("Put DPLL into Mode 1 by asserting ff_bypass");
    GPE_PUTSCOM(EQ_QPPM_DPLL_CTRL_OR, QUAD_ADDR_BASE, quad, BIT64(2));

    /// @todo Is there a dpllclk_muxsel in p9?
    PK_TRACE("Set syncclk_muxsel and dpllclk_muxsel");
    GPE_PUTSCOM(EQ_CPLT_CTRL0_OR, QUAD_ADDR_BASE, quad, BIT64(1));

    // --------------
    // DPLL SCAN
    // --------------
    /// @todo scan dpll here
    /// @todo start dpll clock here?
    PK_TRACE("Set all bits to zero prior clock start via SCAN_REGION_TYPE");
    GPE_PUTSCOM(EQ_SCAN_REGION_TYPE, QUAD_ADDR_BASE, quad, 0);

    PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
    data = 0x5002000000006000;
    GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad, data);

    PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
    data = 0x500200000000E000;
    GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad, data);

    // --------------
    // DPLL SETUP
    // --------------

    // This is necessary to ensure that the DPLL is in Mode 1.
    // If not, the lock times will go from ~30us to 3-5ms
    PK_TRACE("Ensure DPLL in Mode 1, and set slew rate to a modest value");
    GPE_PUTSCOM(EQ_QPPM_DPLL_CTRL_OR, QUAD_ADDR_BASE, quad, BIT64(2) | BIT64(8));

    /// @todo Is there a dpllclk_muxsel in p9?
    PK_TRACE("Clear syncclk_muxsel and dpllclk_muxsel");
    GPE_PUTSCOM(EQ_CPLT_CTRL0_CLEAR, QUAD_ADDR_BASE, quad, BIT64(1));

    /// @todo Already done in chiplet_reset?
    PK_TRACE("Drop glitchless mux async reset");

    PK_TRACE("Take DPLL out of bypass");
    GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(5));

    /// @todo Is there a dpll_thold in p9?
    PK_TRACE("Drop internal DPLL THOLD");

    PK_TRACE("Poll for dpll lock");

    do
    {
        GPE_GETSCOM(EQ_QPPM_DPLL_STAT, QUAD_ADDR_BASE, quad, data);
        break; /// @todo Skipping the lock checking until model is ready
    }
    while (!(data & BIT64(63)));

    PK_TRACE("Recycle DPLL in and out of bypass");
    GPE_PUTSCOM(EQ_NET_CTRL0_WOR,  QUAD_ADDR_BASE, quad, BIT64(5));
    GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(5));

    PK_TRACE("DPLL is locked");

    /// @todo Later done in startclocks?
    PK_TRACE("Set glitchless mux select to dpll");
    GPE_PUTSCOM(EQ_PPM_CGCR_OR, QUAD_ADDR_BASE, quad, BIT64(3));

    PK_TRACE("Drop ff_bypass to switch into slew-controlled mode");
    GPE_PUTSCOM(EQ_QPPM_DPLL_CTRL_CLEAR, QUAD_ADDR_BASE, quad, BIT64(2));

    return rc;
}
