/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_hcd_core_arrayinit.c $ */
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

#include "p9_cme_stop.h"
#include "p9_cme_stop_exit_marks.h"

int
p9_hcd_core_arrayinit(uint32_t core)
{
    int rc = CME_STOP_SUCCESS;
    uint64_t scom_data;

    PK_TRACE("Assert sdis_n(flushing LCBES condition) via CPLT_CONF0[34]");
    CME_PUTSCOM(C_CPLT_CONF0_OR, core, BIT64(34));

    PK_TRACE("Drop vital fence (moved to arrayinit from sacn0 module)");
    CME_PUTSCOM(PERV_CPLT_CTRL1_CLEAR, core, BIT64(3));

    PK_TRACE("Setup ABISTMUX_SEL");
    CME_PUTSCOM(PERV_CPLT_CTRL0_OR, core, BIT64(0));

    PK_TRACE("setup ABIST modes");
    CME_GETSCOM(PERV_BIST, core, CME_SCOM_AND, scom_data);
    scom_data &= ~BIT64(0);
    scom_data |=  BIT64(1);     // select_sram  = 1
    scom_data &= ~BIT64(2);     // select_edram = 0
    scom_data |= BITS64(4, 11); // regions      = 0x7FF
    CME_PUTSCOM(PERV_BIST, core, scom_data);

    PK_TRACE("Setup all Clock Domains and Clock Types");
    CME_GETSCOM(PERV_CLK_REGION, core, CME_SCOM_AND, scom_data);
    scom_data |= (BITS64(4, 11) | BITS64(48, 3));// regions = 0x7FF
    CME_PUTSCOM(PERV_CLK_REGION, core, scom_data);

    PK_TRACE("Drop Region fences");
    CME_PUTSCOM(PERV_CPLT_CTRL1_CLEAR, core, BITS64(4, 11));

    PK_TRACE("Setup: loopcount , OPCG engine start ABIST, run-N mode");
    CME_GETSCOM(PERV_OPCG_REG0, core, CME_SCOM_AND, scom_data);
    scom_data |=  0x8002000000042FFF; // b0 = 1 b14 = 1 loop_counter = 0x42FFF
    CME_PUTSCOM(PERV_OPCG_REG0, core, scom_data);

    PK_TRACE("Setup IDLE count");
    CME_GETSCOM(PERV_OPCG_REG1, core, CME_SCOM_AND, scom_data);
    scom_data |= 0x0000000F00000000; //scan_count|misr_a_valur|misr_b_value
    CME_PUTSCOM(PERV_OPCG_REG1, core, scom_data);

    PK_TRACE("opcg go");
    CME_GETSCOM(PERV_OPCG_REG0, core, CME_SCOM_AND, scom_data);
    scom_data |= BIT64(1);
    CME_PUTSCOM(PERV_OPCG_REG0, core, scom_data);

    PK_TRACE("Poll OPCG done bit to check for run-N completeness");

    do
    {
        CME_GETSCOM(PERV_CPLT_STAT0, core, CME_SCOM_AND, scom_data);
    }
    while(!(scom_data & BIT64(8)));

    PK_TRACE("OPCG done, clear Run-N mode");
    CME_GETSCOM(PERV_OPCG_REG0, core, CME_SCOM_AND, scom_data);
    scom_data &= ~(BIT64(0) | BIT64(14) | BITS64(21, 43));
    CME_PUTSCOM(PERV_OPCG_REG0, core, scom_data);

    PK_TRACE("clear all clock REGIONS and type");
    CME_PUTSCOM(PERV_CLK_REGION, core, 0);

    PK_TRACE("clear ABISTCLK_MUXSEL");
    CME_PUTSCOM(PERV_CPLT_CTRL0_CLEAR, core, BIT64(0));

    PK_TRACE("clear BIST REGISTER");
    CME_PUTSCOM(PERV_BIST, core, 0);

#if !SKIP_SCAN0
    p9_hcd_core_scan0(core, SCAN0_REGION_ALL_BUT_PLL, SCAN0_TYPE_ALL_BUT_GPTR_REPR_TIME);
#endif

    PK_TRACE("Drop sdis_n(flushing LCBES condition) via CPLT_CONF0[34]");
    CME_PUTSCOM(C_CPLT_CONF0_CLEAR, core, BIT64(34));

    return rc;
}
