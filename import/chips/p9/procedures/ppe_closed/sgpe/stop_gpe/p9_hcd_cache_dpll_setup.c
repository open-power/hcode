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

    // --------------
    // DPLL SCAN
    // --------------
    /// @todo scan dpll here

    // --------------
    // DPLL SETUP
    // --------------

    // This is necessary to ensure that the DPLL is in Mode 1.
    // If not, the lock times will go from ~30us to 3-5ms
    PK_TRACE("Ensure DPLL in Mode 1, and set slew rate to a modest value");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_OR, quad), BIT64(2) | BIT64(8));

    PK_TRACE("Drop DPLL Test Mode and Reset");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BITS64(3, 2));

    PK_TRACE("Set all bits to zero prior clock start via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
    data = 0x5002000000006000;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), data);

    PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
    data = 0x500200000000E000;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), data);

    PK_TRACE("Polling for clocks starting via CLOCK_STAT_SL");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), data);
    }
    while((~data & BIT64(14)) != BIT64(14));

    PK_TRACE("DPLL clock is now running");

    MARK_TRAP(SX_DPLL_START_DONE)

    PK_TRACE("Poll for dpll lock");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_STAT, quad), data);
        break; /// @todo Skipping the lock checking until model is ready
    }
    while (!(data & BIT64(63)));

    PK_TRACE("DPLL is locked");

    PK_TRACE("Take DPLL out of bypass");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(5));

    PK_TRACE("Switch L3 glsmux select to DPLL output");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, quad), BIT64(3));

    PK_TRACE("Switch L2 glsmux select to DPLL output");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, quad), BITS64(34, 2));

    PK_TRACE("Drop ff_bypass to switch into slew-controlled mode");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_CLEAR, quad), BIT64(2));

    return rc;
}
