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
    uint64_t data, loop;

    PK_TRACE("Setup OPCG_ALIGN Register");
    CME_GETSCOM(C_OPCG_ALIGN, core, CME_SCOM_AND, data);
    data = data & ~(BITS64(0, 4) & BITS64(12, 8) & BITS64(52, 12));
    data = data | (BIT64(1) | BIT64(3) | BIT64(59));
    CME_PUTSCOM(C_OPCG_ALIGN, core, data);

    PK_TRACE("Drop partial good fences via CPLT_CTRL1");
    CME_PUTSCOM(C_CPLT_CTRL1_CLEAR, core, 0xFFFF700000000000);

    PK_TRACE("Drop vital fences via CPLT_CTRL1");
    CME_PUTSCOM(C_CPLT_CTRL1_CLEAR, core, BIT64(3));

    PK_TRACE("Raise core clock sync enable");
    CME_PUTSCOM(CPPM_CACCR_OR, core, BIT64(15));

#if !EPM_P9_TUNING
    PK_TRACE("Poll for core clock sync done to raise");

    do
    {
        CME_GETSCOM(CPPM_CACSR, core, CME_SCOM_AND, data);
    }
    while(~data & BIT64(13));

#endif

    PK_TRACE("Reset abstclk & syncclk muxsel(io_clk_sel) via CPLT_CTRL0[0:1]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BITS64(0, 2));

    // align_chiplets()

    PK_TRACE("Set flushmode_inhibit via CPLT_CTRL0[2]");
    CME_PUTSCOM(C_CPLT_CTRL0_OR, core, BIT64(2));

    PK_TRACE("Set force_align via CPLT_CTRL0[3]");
    CME_PUTSCOM(C_CPLT_CTRL0_OR, core, BIT64(3));

    PK_TRACE("Set/Unset clear_chiplet_is_aligned via SYNC_CONFIG[7]");
    CME_GETSCOM(C_SYNC_CONFIG, core, CME_SCOM_AND, data);
    data = data | BIT64(7);
    CME_PUTSCOM(C_SYNC_CONFIG, core, data);
    data = data & ~BIT64(7);
    CME_PUTSCOM(C_SYNC_CONFIG, core, data);

    PK_TRACE("Check chiplet_is_aligned");

    do
    {
        CME_GETSCOM(C_CPLT_STAT0, core, CME_SCOM_AND, data);
    }
    while(~data & BIT64(9));

    PK_TRACE("Clear force_align via CPLT_CTRL0[3]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BIT64(3));
    PPE_WAIT_CORE_CYCLES(loop, 450);

    // clock_start()

    PK_TRACE("Set all bits to zero prior clock start via SCAN_REGION_TYPE");
    CME_PUTSCOM(C_SCAN_REGION_TYPE, core, 0);

    PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
    data = 0x5FFC000000006000;
    CME_PUTSCOM(C_CLK_REGION, core, data);

    PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
    data = 0x5FFC00000000E000;
    CME_PUTSCOM(C_CLK_REGION, core, data);

    PK_TRACE("Polling for clocks starting via CLOCK_STAT_SL");

    do
    {
        CME_GETSCOM(C_CLOCK_STAT_SL, core, CME_SCOM_AND, data);
    }
    while((~data & BITS64(4, 10)) != BITS64(4, 10));

    PK_TRACE("Core clock is now running");

    MARK_TRAP(SX_STARTCLOCKS_DONE)

    PK_TRACE("Drop chiplet fence via NC0INDIR[18]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(18));

    //PK_TRACE("Drop fence to allow PCB operations to chiplet via NC0INDIR[26]");
    //CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(25));

    // checkstop

    PK_TRACE("Clear flushmode_inhibit via CPLT_CTRL0[2]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BIT64(2));

    // check align

    // needed by cme
    PK_TRACE("Drop Core-L2 + Core-CC Quiesces");
    out32(CME_LCL_SICR_CLR, (core << SHIFT32(7)) | (core << SHIFT32(9)));

    return rc;
}
