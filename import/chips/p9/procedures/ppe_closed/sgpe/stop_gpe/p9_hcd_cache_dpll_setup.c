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
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_OR, quad), BIT64(2) | BIT64(9));

    PK_TRACE("Drop DPLL test mode and reset via NET_CTRL0[3,4]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BITS64(3, 2));

    PK_TRACE("Drop ANEP+DPLL clock region fence via NET_CTRL1[10,14]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), (BIT64(10) | BIT64(14)));

    // start_clock()

    PK_TRACE("Clear all bits prior start DPLL clock via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start DPLL clock via CLK_REGION");
    scom_data = (CLK_START_CMD | CLK_REGION_DPLL | CLK_THOLD_ALL);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data);

    PK_TRACE("Polling for DPLL clock running via CPLT_STAT0[8]");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, quad), scom_data);
    }
    while(!(scom_data & BIT64(8)));

    PK_TRACE("Check DPLL clock running via CLOCK_STAT_SL[14]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), scom_data);

    if (scom_data & BIT64(14))
    {
        PK_TRACE("Start DPLL clock failed");
        pk_halt();
    }

    PK_TRACE("DPLL clock is now running");
    MARK_TRAP(SX_DPLL_START_DONE)

    PK_TRACE("Poll for DPLL lock");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_STAT, quad), scom_data);
#if !LAB_P9_TUNING
        break; // only skiping DPLL lock check when in Sim
#endif
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

    PK_TRACE("Drop skew/duty cycle adjust func_clksel via NET_CTRL0[22]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(22));

    return rc;
}
