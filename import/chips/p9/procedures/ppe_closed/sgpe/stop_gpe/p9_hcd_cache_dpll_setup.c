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
p9_hcd_cache_dpll_setup(uint32_t quad)
{
    int      rc = SGPE_STOP_SUCCESS;
    uint64_t scom_data;

    // This is necessary to ensure that the DPLL is in Mode 1.
    // If not, the lock times will go from ~30us to 3-5ms
    PK_TRACE("Assert DPLL in mode 1,set slew rate via QPPM_DPLL_CTRL[2,6-15]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_OR, quad), BIT64(2) | BIT64(8));

    PK_TRACE("Drop DPLL test mode and reset via NET_CTRL0[3,4]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BITS64(3, 2));

    PK_TRACE("Drop DPLL clock region fence via NET_CTRL1[14]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), BIT64(14));

    PK_TRACE("Clear all bits prior start DPLL clock via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start DPLL clock(arrays+nsl clock region) via CLK_REGION");
    scom_data = 0x4002000000006000;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data);

    PK_TRACE("Start DPLL clock(sl+refresh clock region) via CLK_REGION");
    scom_data = 0x400200000000E000;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data);

    PK_TRACE("Polling for DPLL clock running via CLOCK_STAT_SL");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), scom_data);
    }
    while((~scom_data & BIT64(14)) != BIT64(14));

    PK_TRACE("DPLL clock is now running");

    MARK_TRAP(SX_DPLL_START_DONE)

    PK_TRACE("Poll for DPLL lock");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_STAT, quad), scom_data);
        break; /// @todo Skipping the lock checking until model is ready
    }
    while (!(scom_data & BIT64(63)));

    PK_TRACE("DPLL is locked now");

    PK_TRACE("Drop DPLL bypass via NET_CTRL0[5]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(5));

    PK_TRACE("Drop DPLL ff_bypass via QPPM_DPLL_CTRL[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_CLEAR, quad), BIT64(2));

    PK_TRACE("Set scan ratio to 4:1 in bypass mode via OPCG_ALIGN[47-51]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);
    scom_data &= ~BITS64(47, 5);
    scom_data |=  BITS64(50, 2);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);

    PK_TRACE("Drop ANEP clock region fence via CPLT_CTRL1[10]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), BIT64(10));

    PK_TRACE("Drop skew/duty cycle adjust func_clksel via NET_CTRL0[22]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(22));

    PK_TRACE("Drop skew adjust reset via NET_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(2));

    return rc;
}
