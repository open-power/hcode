/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_arrayinit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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

#include "p9_sgpe_stop_exit_marks.h"

extern SgpeStopRecord G_sgpe_stop_record;

inline __attribute__((always_inline))
void
p9_hcd_cache_arrayinit(uint32_t quad)
{
    uint64_t scom_data = 0;
    uint64_t regions   = SCAN0_REGION_ALL_BUT_EX_DPLL;

    if (G_sgpe_stop_record.group.expg[quad] & FST_EX_IN_QUAD)
    {
        regions |= SCAN0_REGION_EX0_L2_L3_REFR;
    }

    if (G_sgpe_stop_record.group.expg[quad] & SND_EX_IN_QUAD)
    {
        regions |= SCAN0_REGION_EX1_L2_L3_REFR;
    }

    PK_TRACE("Assert sdis_n(flushing LCBES condition) via CPLT_CONF0[34]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CONF0_OR, quad), BIT64(34));

    PK_TRACE("Drop vital fence (moved to arrayinit from sacn0 module)");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_CTRL1_CLEAR, quad), BIT64(3));

    PK_TRACE("Setup ABISTMUX_SEL");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_CTRL0_OR, quad), BIT64(0));

    PK_TRACE("setup ABIST modes");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_BIST, quad), scom_data);
    scom_data &= ~BIT64(0);
    scom_data |=  BIT64(1);     // select_sram  = 1
    scom_data &= ~BIT64(2);     // select_edram = 0
    scom_data |=  (regions << SHIFT64(14));
    scom_data &= ~BIT64(14);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_BIST, quad), scom_data);

    PK_TRACE("Setup all Clock Domains and Clock Types");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_CLK_REGION, quad), scom_data);
    scom_data |= ((regions << SHIFT64(14)) | BITS64(48, 3));
    scom_data &= ~BIT64(14);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CLK_REGION, quad), scom_data);

    PK_TRACE("Drop Region fences");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_CTRL1_CLEAR, quad), (regions << SHIFT64(14)));

    PK_TRACE("Setup: loopcount , OPCG engine start ABIST, run-N mode");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);
    scom_data |=  0x8002000000042FFF; // b0 = 1 b14 = 1 loop_counter = 0x42FFF
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);

    PK_TRACE("Setup IDLE count");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG1, quad), scom_data);
    scom_data |= 0x0000000F00000000; //scan_count|misr_a_valur|misr_b_value
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG1, quad), scom_data);

    PK_TRACE("opcg go");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);
    scom_data |= BIT64(1);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);

    PK_TRACE("Poll OPCG done bit to check for run-N completeness");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_STAT0, quad), scom_data);
    }
    while(!(scom_data & BIT64(8)));

    PK_TRACE("OPCG done, clear Run-N mode");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);
    scom_data &= ~(BIT64(0) | BIT64(14) | BITS64(21, 43));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);

    PK_TRACE("clear all clock REGIONS and type");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CLK_REGION, quad), 0);

    PK_TRACE("clear ABISTCLK_MUXSEL");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_CTRL0_CLEAR, quad), BIT64(0));

    PK_TRACE("clear BIST REGISTER");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_BIST, quad), 0);

#if !SKIP_SCAN0
    regions &= ~(0x010); // taking out ANEP for scan0
    p9_hcd_cache_scan0(quad, regions, SCAN0_TYPE_ALL_BUT_GPTR_REPR_TIME);
    // all but anep dpll all but gptr repr time
#endif

    PK_TRACE("Drop sdis_n(flushing LCBES condition) via CPLT_CONF0[34]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CONF0_CLEAR, quad), BIT64(34));
}
