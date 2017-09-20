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

#include "p9_cme_stop_exit_marks.h"

extern CmeStopRecord G_cme_stop_record;

inline __attribute__((always_inline))
void
p9_hcd_core_startclocks(uint32_t core)
{
    uint32_t     core_mask  = 0;
    data64_t     scom_data  = {0};
    cmeHeader_t* pCmeImgHdr = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
    uint32_t     id_vector  = pCmeImgHdr->g_cme_location_id;

#if NIMBUS_DD_LEVEL == 10

    PK_TRACE("Assert sdis_n(flushing LCBES condition) via CPLT_CONF0[34]");
    CME_PUTSCOM(C_CPLT_CONF0_OR, core, BIT64(34));

#endif

    PK_TRACE("Set inop_align/wait/wait_cycles via OPCG_ALIGN[0-3,12-19,52-63]");

    // this register requires unicast, dual cast with eq check will fail
    for(core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(C_OPCG_ALIGN, core_mask, scom_data.value);
            scom_data.value &= ~(BITS64(0, 4) | BITS64(12, 8) | BITS64(52, 12));
            scom_data.value |=  (BIT64(1) | BIT64(3) | BIT64(59));
            CME_PUTSCOM(C_OPCG_ALIGN, core_mask, scom_data.value);
        }
    }

    PK_TRACE("Drop partial good fences via CPLT_CTRL1[4-14]");
    CME_PUTSCOM(C_CPLT_CTRL1_CLEAR, core, BITS64(4, 11));

    PK_TRACE("Drop vital fences via CPLT_CTRL1[3]");
    CME_PUTSCOM(C_CPLT_CTRL1_CLEAR, core, BIT64(3));

    sync();

    PK_TRACE("Drop skew sense to skew adjust fence via NET_CTRL0[22]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(22));

    PK_TRACE("Assert core clock sync enable via CPPM_CACCR[15]");
    CME_PUTSCOM(CPPM_CACCR_OR, core, BIT64(15));

    PK_TRACE("Poll for core clock sync done via CPPM_CACSR[13]");

    do
    {
        CME_GETSCOM_AND(CPPM_CACSR, core, scom_data.value);
    }
    while((~(scom_data.words.upper)) & BIT32(13));

    MARK_TRAP(SX_STARTCLOCKS_ALIGN)

    sync();

    PK_TRACE("Assert ABIST_SRAM_MODE_DC to support ABIST Recovery via BIST[1]");
    CME_GETSCOM(C_BIST, core, scom_data.value);
    scom_data.words.upper |= BIT32(1);
    CME_PUTSCOM(C_BIST, core, scom_data.value);

    PK_TRACE("Reset abstclk & syncclk muxsel(io_clk_sel) via CPLT_CTRL0[0:1]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BITS64(0, 2));

    PK_TRACE("Set fabric chiplet ID values via EQ_CPLT_CONF0[48-51,52-54,56-60]");

    // this register requires unicast, dual cast with eq check will fail
    for(core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(C_CPLT_CONF0, core_mask, scom_data.value);
            scom_data.words.lower &= ~(BITS64SH(48, 7) | BITS64SH(56, 5));
            scom_data.words.lower |= id_vector;
            CME_PUTSCOM(C_CPLT_CONF0, core_mask, scom_data.value);
        }
    }

    // align_chiplets()

    PK_TRACE("Assert flushmode_inhibit via CPLT_CTRL0[2]");
    CME_PUTSCOM(C_CPLT_CTRL0_OR, core, BIT64(2));

    PK_TRACE("Assert force_align via CPLT_CTRL0[3]");
    CME_PUTSCOM(C_CPLT_CTRL0_OR, core, BIT64(3));

    PK_TRACE("Set then unset clear_chiplet_is_aligned via SYNC_CONFIG[7]");

    // this register requires unicast, dual cast with eq check will fail
    for(core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(C_SYNC_CONFIG, core_mask, scom_data.value);
            scom_data.words.upper |=  BITS32(7, 2);
            CME_PUTSCOM(C_SYNC_CONFIG, core_mask, scom_data.value);
            scom_data.words.upper &= ~BIT32(7);
            CME_PUTSCOM(C_SYNC_CONFIG, core_mask, scom_data.value);
        }
    }

    // 255 cache cycles
    PPE_WAIT_CORE_CYCLES(510);

    PK_TRACE("Check chiplet_is_aligned");

    do
    {
        CME_GETSCOM_AND(C_CPLT_STAT0, core, scom_data.value);
    }
    while((~(scom_data.words.upper)) & BIT32(9));

    MARK_TRAP(SX_STARTCLOCKS_REGION)

    PK_TRACE("Drop force_align via CPLT_CTRL0[3]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BIT64(3));

    // clock_start()

    PK_TRACE("Clear all bits prior start core clocks via SCAN_REGION_TYPE");
    CME_PUTSCOM(C_SCAN_REGION_TYPE, core, 0);

    PK_TRACE("Start core clocks(all but pll) via CLK_REGION");
    scom_data.value = (CLK_START_CMD | CLK_REGION_ALL_BUT_PLL | CLK_THOLD_ALL);
    CME_PUTSCOM(C_CLK_REGION, core, scom_data.value);

    PK_TRACE("Polling for core clocks running via CPLT_STAT0[8]");

    do
    {
        CME_GETSCOM_AND(C_CPLT_STAT0, core, scom_data.value);
    }
    while((~(scom_data.words.upper)) & BIT32(8));

    PK_TRACE("Check core clock is running via CLOCK_STAT_SL[4-13]");

    for (core_mask = 2; core_mask > 0; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(C_CLOCK_STAT_SL, core_mask, scom_data.value);

            if(scom_data.value & CLK_REGION_ALL_BUT_PLL)
            {
                PK_TRACE_ERR("ERROR: Core[%d] Clock Start Failed. Gard Core!", core_mask);
                CME_STOP_CORE_ERROR_HANDLER(core, core_mask, CME_STOP_EXIT_STARTCLK_FAILED);
            }
        }
    }

    PK_TRACE("Core clock is now running");

    MARK_TRAP(SX_STARTCLOCKS_DONE)

    sync();

    PK_TRACE("Drop chiplet fence via NC0INDIR[18]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(18));

#if !EPM_P9_TUNING

    PK_TRACE("Check Global Xstop FIR of Core Chiplet");

    for (core_mask = 2; core_mask > 0; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(C_XFIR, core_mask, scom_data.value);

            if (scom_data.words.upper & BITS32(0, 27))
            {
                PK_TRACE_ERR("Core[%d] Chiplet Global Xstop FIR[%x] Detected. Gard Core!",
                             core_mask, scom_data.words.upper);
                CME_STOP_CORE_ERROR_HANDLER(core, core_mask, CME_STOP_EXIT_STARTCLK_XSTOP_ERROR);

                if (!core)
                {
                    return;
                }
            }
        }
    }

#endif

    PK_TRACE("Drop flushmode_inhibit via CPLT_CTRL0[2]");
    CME_PUTSCOM(C_CPLT_CTRL0_CLEAR, core, BIT64(2));

    PK_TRACE("Drop Core-L2/CC/TLBIE Quiesces via CME_LCL_SICR[6,8]/[7,9][21]");
    out32(CME_LCL_SICR_CLR, ((core << SHIFT32(7)) | (core << SHIFT32(9)) | BIT32(21)));
}
