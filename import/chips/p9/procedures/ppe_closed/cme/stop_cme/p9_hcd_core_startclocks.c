/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_hcd_core_startclocks.c $ */
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
p9_hcd_core_startclocks(uint32_t core)
{
    int      rc = CME_STOP_SUCCESS;
    uint64_t scom_data, loop;

    // do this again here for stop2 in addition to chiplet_reset
    PK_TRACE("4S2: Set Core Glitchless Mux to DPLL");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(3));

    PK_TRACE("Set inop_align/wait/wait_cycles via OPCG_ALIGN[0-3,12-19,52-63]");
    CME_GETSCOM(C_OPCG_ALIGN, core, CME_SCOM_AND, scom_data);
    scom_data = scom_data & ~(BITS64(0, 4) & BITS64(12, 8) & BITS64(52, 12));
    scom_data = scom_data | (BIT64(1) | BIT64(3) | BIT64(59));
    CME_PUTSCOM(C_OPCG_ALIGN, core, scom_data);

    PK_TRACE("Drop partial good fences via CPLT_CTRL1[3-14]");
    CME_PUTSCOM(C_CPLT_CTRL1_CLEAR, core, 0xFFFF700000000000);

    PK_TRACE("Drop vital fences via CPLT_CTRL1[3]");
    CME_PUTSCOM(C_CPLT_CTRL1_CLEAR, core, BIT64(3));

    PK_TRACE("Assert core clock sync enable via CPPM_CACCR[15]");
    CME_PUTSCOM(CPPM_CACCR_OR, core, BIT64(15));

    PK_TRACE("Poll for core clock sync done via CPPM_CACSR[13]");

    do
    {
        CME_GETSCOM(CPPM_CACSR, core, CME_SCOM_AND, scom_data);
    }
    while(~scom_data & BIT64(13));

    PK_TRACE("Reset abstclk & syncclk muxsel(io_clk_sel) via CPLT_CTRL0[0:1]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BITS64(0, 2));

    // align_chiplets()

    PK_TRACE("Assert flushmode_inhibit via CPLT_CTRL0[2]");
    CME_PUTSCOM(C_CPLT_CTRL0_OR, core, BIT64(2));

    PK_TRACE("Assert force_align via CPLT_CTRL0[3]");
    CME_PUTSCOM(C_CPLT_CTRL0_OR, core, BIT64(3));

    PK_TRACE("Set then unset clear_chiplet_is_aligned via SYNC_CONFIG[7]");
    CME_GETSCOM(C_SYNC_CONFIG, core, CME_SCOM_AND, scom_data);
    scom_data = scom_data | BIT64(7);
    CME_PUTSCOM(C_SYNC_CONFIG, core, scom_data);
    scom_data = scom_data & ~BIT64(7);
    CME_PUTSCOM(C_SYNC_CONFIG, core, scom_data);

    PK_TRACE("Check chiplet_is_aligned");

    do
    {
        CME_GETSCOM(C_CPLT_STAT0, core, CME_SCOM_AND, scom_data);
    }
    while(~scom_data & BIT64(9));

    PK_TRACE("Drop force_align via CPLT_CTRL0[3]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BIT64(3));
    PPE_WAIT_CORE_CYCLES(loop, 450);

    // clock_start()

    PK_TRACE("Clear all bits prior start core clocks via SCAN_REGION_TYPE");
    CME_PUTSCOM(C_SCAN_REGION_TYPE, core, 0);

    PK_TRACE("Start core clocks(arrays+nsl clock region) via CLK_REGION");
    scom_data = 0x4FFC000000006000;
    CME_PUTSCOM(C_CLK_REGION, core, scom_data);

    PK_TRACE("Start core clocks(sl+refresh clock region) via CLK_REGION");
    scom_data = 0x4FFC00000000E000;
    CME_PUTSCOM(C_CLK_REGION, core, scom_data);

    PK_TRACE("Polling for core clocks running via CLOCK_STAT_SL");

    do
    {
        CME_GETSCOM(C_CLOCK_STAT_SL, core, CME_SCOM_AND, scom_data);
    }
    while((scom_data & BITS64(4, 10)) != 0);

    PK_TRACE("Core clock is now running");

    MARK_TRAP(SX_STARTCLOCKS_DONE)

    PK_TRACE("Drop chiplet fence via NC0INDIR[18]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(18));

    // checkstop

    PK_TRACE("Drop flushmode_inhibit via CPLT_CTRL0[2]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BIT64(2));

    // check align

    // needed by cme
    PK_TRACE("Drop Core-L2 + Core-CC Quiesces");
    out32(CME_LCL_SICR_CLR, (core << SHIFT32(7)) | (core << SHIFT32(9)));

    return rc;
}
