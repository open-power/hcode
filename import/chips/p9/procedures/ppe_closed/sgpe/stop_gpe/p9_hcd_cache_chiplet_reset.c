/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_chiplet_reset.c $ */
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

enum P9_HCD_CACHE_CHIPLET_RESET_CONSTANTS
{
    // (1)PCB_EP_RESET
    // (2)CLK_ASYNC_RESET
    // (3)PLL_TEST_EN
    // (4)PLLRST
    // (5)PLLBYP
    // (11)EDIS
    // (12)VITL_MPW1
    // (13)VITL_MPW2
    // (14)VITL_MPW3
    // (16)VITL_THOLD
    // (18)FENCE_EN
    // (22)FUNC_CLKSEL
    // (25)PCB_FENCE
    // (26)LVLTRANS_FENCE
    Q_NET_CTRL0_INIT_VECTOR = (BITS64(1, 5) | BITS64(11, 4) | BIT64(16) |
                               BIT64(18) | BIT64(22) | BITS64(25, 2))
};

inline __attribute__((always_inline))
void
p9_hcd_cache_chiplet_reset(uint32_t quad)
{
    uint64_t scom_data  = 0;
    uint32_t core       = 0;
    uint32_t cbit       = 0;

    for(core = 0, cbit = BIT32((quad << 2));
        core < CORES_PER_QUAD;
        core++, cbit = cbit >> 1)
    {
        if (G_sgpe_stop_record.group.core[VECTOR_CONFIG] & cbit)
        {
            PK_TRACE("Assert Core DCC reset via NET_CTRL0[2]");
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0_WOR, ((quad << 2) + core)), BIT64(2));
        }
    }

    PK_TRACE("Init heartbeat hang counter via HANG_PULSE_6[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_HANG_PULSE_6_REG, quad), BIT64(2));

    PK_TRACE("Init NET_CTRL0[1-5,11-14,16,18,22,25,26],step needed for hotplug");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), Q_NET_CTRL0_INIT_VECTOR);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), Q_NET_CTRL0_INIT_VECTOR);

    PK_TRACE("Assert Progdly/DCC bypass,L2 DCC reset via NET_CTRL1[1,2,23,24]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL1_WOR, quad), (BITS64(1, 2) | BITS64(23, 2)));

    PK_TRACE("Flip cache glsmux to DPLL via PPM_CGCR[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, quad), (BIT64(0) | BIT64(3)));

    PK_TRACE("Flip L2 glsmux to DPLL via QPPM_EXCGCR[34:35]");
#if HW388878_NDD1_VCS_POWER_ON_IN_CHIPLET_RESET_FIX
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, quad), BITS64(34, 2));
#else
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, quad),
                ((uint64_t)G_sgpe_stop_record.group.expg[quad] << SHIFT64(35)));
#endif

    PK_TRACE("Assert DPLL ff_bypass via QPPM_DPLL_CTRL[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_OR, quad), BIT64(2));

    PK_TRACE("Drop vital thold via NET_CTRL0[16]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(16));

    PK_TRACE("Drop cache glsmux reset via PPM_CGCR[0]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, quad), BIT64(3));

    PK_TRACE("Drop L2 glsmux reset via QPPM_EXCGCR[32:33]");
#if HW388878_NDD1_VCS_POWER_ON_IN_CHIPLET_RESET_FIX
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, quad), BITS64(32, 2));
#else
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, quad),
                ((uint64_t)G_sgpe_stop_record.group.expg[quad] << SHIFT64(33)));
#endif

    // 40 ref cycles
    PPE_WAIT_CORE_CYCLES(1600);

    PK_TRACE("Assert chiplet enable via NET_CTRL0[0]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), BIT64(0));

    PK_TRACE("Drop PCB endpoint reset via NET_CTRL0[1]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(1));

    PK_TRACE("Drop chiplet electrical fence via NET_CTRL0[26]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(26));

    PK_TRACE("Drop PCB fence via NET_CTRL0[25]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(25));

    PK_TRACE("Assert sram_enable via NET_CTRL0[23]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), BIT64(23));

    PK_TRACE("Set scan ratio to 1:1 in bypass mode via OPCG_ALIGN[47-51]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);
    scom_data &= ~BITS64(47, 5);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);

    // Marker for scan0
    MARK_TRAP(SX_CHIPLET_RESET_SCAN0)
#if !SKIP_SCAN0
#if !HW388878_NDD1_VCS_POWER_ON_IN_CHIPLET_RESET_FIX
    uint64_t regions = SCAN0_REGION_ALL_BUT_EX;

    if (G_sgpe_stop_record.group.expg[quad] & FST_EX_IN_QUAD)
    {
        regions |= SCAN0_REGION_EX0_L2_L3_REFR;
    }

    if (G_sgpe_stop_record.group.expg[quad] & SND_EX_IN_QUAD)
    {
        regions |= SCAN0_REGION_EX1_L2_L3_REFR;
    }

    p9_hcd_cache_scan0(quad, regions, SCAN0_TYPE_GPTR_REPR_TIME);
#else
    PK_TRACE_INF("NDD1 VCS workaround:");
    uint32_t l_loop  = 0;
    uint64_t regions = SCAN0_REGION_ALL;
    p9_hcd_cache_scan0(quad, regions, SCAN0_TYPE_GPTR_REPR_TIME);

    //Eq_fure + Ex_l2_fure(ex0) + Ex_l2_fure(ex1)
#define NDD1_EQ_FURE_RING_LENGTH (46532+119192+119192)
    uint64_t l_regions = CLK_REGION_PERV | CLK_REGION_EX0_L2 | CLK_REGION_EX1_L2;

    // ----------------------------------------------------
    // Scan1 initialize region:Perv/L20/L21 type:Fure rings
    // Note: must also scan partial good "bad" L2 rings,
    // and clock start&stop their latches, as well
    // ----------------------------------------------------

    PK_TRACE("Assert Vital clock regional fence via CPLT_CTRL1[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, quad), BIT64(3));

    PK_TRACE("Assert regional fences of scanned regions via CPLT_CTRL1[4,8,9]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, quad), l_regions);

    PK_TRACE("Clear clock region register via CLK_REGION");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), 0);

    PK_TRACE("Setup scan select register via SCAN_REGION_TYPE[4,8,9,48,51]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad),
                (l_regions | SCAN_TYPE_FUNC | SCAN_TYPE_REGF));

    PK_TRACE("Write scan data register via 0x1003E040");

    for (l_loop = 0; l_loop <= NDD1_EQ_FURE_RING_LENGTH / 64; l_loop++)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E040, quad), BITS64(0, 64));
    }

    PK_TRACE("Final Scan Loop Count: %d", l_loop);

    // -------------------------------
    // Start Perv/L20/L21 clocks
    // -------------------------------

    PK_TRACE("Clear all SCAN_REGION_TYPE bits");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start cache clocks(perv/l20/l21) via CLK_REGION");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad),
                (CLK_START_CMD | CLK_THOLD_ARY | l_regions));

    PK_TRACE("Poll for perv/l20/l21 clocks running via CPLT_STAT0[8]");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, quad), scom_data);
    }
    while((~scom_data) & BIT64(8));

    PK_TRACE("Check perv/l20/l21 clocks running");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_ARY, quad), scom_data);

    if (scom_data & l_regions)
    {
        PK_TRACE_ERR("ERROR: Perv/L20/L21 Clock Start Failed. HALT SGPE!");
        PK_PANIC(SGPE_STOP_EXIT_VCS_STARTCLK_FAILED);
    }

    PK_TRACE("Perv/l20/l21 clocks running now");

    // -------------------------------
    // Turn on power headers for VCS
    // -------------------------------

    // vcs_pfet_force_state = 11 (Force Von)
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, quad), BITS64(2, 2));

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFSNS, quad), scom_data);
    }
    while(!(scom_data & BIT64(2)));

    // vdd_pfet_force_state = 00 (Nop)
    // vcs_pfet_force_state = 00 (Nop)
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, quad), BITS64(0, 4));

    PK_TRACE("Powered On VCS");

    // -------------------------------
    // Stop Perv/L20/L21 clocks
    // -------------------------------

    PK_TRACE("Clear all SCAN_REGION_TYPE bits");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Stop perv/l20/l21 clocks via CLK_REGION");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad),
                (CLK_STOP_CMD | CLK_THOLD_ARY | l_regions));

    PK_TRACE("Poll for perv/l20/l21 clocks stopped via CPLT_STAT0[8]");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, quad), scom_data);
    }
    while((~scom_data) & BIT64(8));

    PK_TRACE("Check perv/l20/l21 clocks stopped");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_ARY, quad), scom_data);

    if (((~scom_data) & l_regions) != 0)
    {
        PK_TRACE_ERR("ERROR: Perv/L20/L21 Clock Stop Failed. HALT SGPE!");
        PK_PANIC(SGPE_STOP_EXIT_VCS_STOPCLK_FAILED);
    }

    PK_TRACE("Perv/l20/l21 Clock Stopped");

    // -------------------------------
    // Clean up
    // -------------------------------

    PK_TRACE("Drop Vital clock regional fence via CPLT_CTRL1[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), BIT64(3));

    PK_TRACE("Drop Perv/L20/L21 regional fences via CPLT_CTRL1[4,8,9]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), l_regions);

#endif

    p9_hcd_cache_scan0(quad, regions, SCAN0_TYPE_ALL_BUT_GPTR_REPR_TIME);
#endif
}
