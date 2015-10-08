/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_entry.c $ */
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

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_enter_marks.h"

extern SgpeStopRecord G_sgpe_stop_record;

int
p9_sgpe_stop_entry()
{
    int          rc;
    uint8_t      ex;
    uint8_t      qloop;
    uint8_t      cloop;
    uint8_t      climit;
    uint8_t      qentry;
    uint16_t     xentry;
    uint64_t     scom_data;
    uint8_t      entry_ongoing[2] = {0, 0};
    ppm_sshsrc_t hist;

    //===================================================================
    MARK_TAG(BEGINSCOPE_STOP_ENTRY, G_sgpe_stop_record.group.member.c_in)
    //===================================================================

    // ------------------------------------------------------------------------
    // EX STOP ENTRY
    // ------------------------------------------------------------------------

    for(xentry = G_sgpe_stop_record.group.member.x_in, qloop = 0;
        xentry > 0;
        xentry = xentry << 2, qloop++)
    {
        // if this ex is not up to entry, skip
        if (!(ex = ((xentry & BITS16(0, 2)) >> SHIFT16(1))))
        {
            continue;
        }

        PK_TRACE("q[%d]exmask[%d] starts entry", qloop, ex);

        //-------------------------------------------------------------------------
        // STOP LEVEL 8
        //-------------------------------------------------------------------------

        // Update QSSR: stop_entry_ongoing
        out32(OCB_QSSR_OR, BIT32(qloop + 20));

        // Update History for ongoing stop 8 entry
        cloop  = (ex & FST_EX_IN_QUAD) ?              0 : CORES_PER_EX;
        climit = (ex & SND_EX_IN_QUAD) ? CORES_PER_QUAD : CORES_PER_EX;

        for(; cloop < climit; cloop++)
        {
            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_ENTRY,
                                     STOP_LEVEL_8,
                                     STOP_LEVEL_8,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_DISABLE);
        }

        //========================
        MARK_TRAP(SE_STOP_L2_CLKS)
        //========================

        PK_TRACE("SE8.a");
        // Disable L2 Snoop(quiesce L2-L3 interface, what about NCU?)
        GPE_PUTSCOM(EQ_PM_L2_RCMD_DIS_REG, QUAD_ADDR_BASE, qloop, BIT64(0));

        PK_TRACE("SE8.b");
        // Set all bits to zero prior stop core clocks
        GPE_PUTSCOM(EQ_SCAN_REGION_TYPE, QUAD_ADDR_BASE, qloop, 0);

        PK_TRACE("SE8.c");
        // Stop L2 Clocks
        GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, qloop,
                    (0x900000000000E000 | ((uint64_t)ex << SHIFT64(9))));

        PK_TRACE("SE8.d");

        // Poll for L2 clocks stopped
        do
        {
            GPE_GETSCOM(EQ_CLOCK_STAT_SL, QUAD_ADDR_BASE, qloop, scom_data);
        }
        while(((scom_data >> SHIFT64(9)) & ex) != ex);

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE("SE8: L2 Clock Stopped");

        //========================
        MARK_TRAP(SE_STOP_L2_GRID)
        //========================

#if !EPM_P9_TUNING
        PK_TRACE("SE8.e");
        // Drop clock sync enable before switch to refclk
        GPE_PUTSCOM(EQ_QPPM_EXCGCR_CLR, QUAD_ADDR_BASE, qloop,
                    (ex << SHIFT64(37)));

        PK_TRACE("SE8.f");

        // Poll for clock sync done to drop
        do
        {
            GPE_GETSCOM(QPPM_QACSR, QUAD_ADDR_BASE, qloop, scom_data);
        }
        while((~scom_data >> SHIFT64(37)) & ex != ex);

#endif

        PK_TRACE("SE8.g");
        // Switch glsmux to refclk to save clock grid power
        GPE_PUTSCOM(EQ_QPPM_EXCGCR_CLR, QUAD_ADDR_BASE, qloop,
                    (ex << SHIFT64(35)));

        PK_TRACE("SE8.h");

        if (ex & FST_EX_IN_QUAD)
        {
            cloop = 0;
            G_sgpe_stop_record.state[qloop].detail.x0act = STOP_LEVEL_8;
            entry_ongoing[0] =
                G_sgpe_stop_record.state[qloop].detail.x0req == STOP_LEVEL_8 ?
                STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;
        }
        else
        {
            cloop = CORES_PER_EX;
        }

        if (ex & SND_EX_IN_QUAD)
        {
            climit = CORES_PER_QUAD;
            G_sgpe_stop_record.state[qloop].detail.x1act = STOP_LEVEL_8;
            entry_ongoing[1] =
                G_sgpe_stop_record.state[qloop].detail.x0req == STOP_LEVEL_8 ?
                STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;
        }
        else
        {
            climit = CORES_PER_EX;
        }

        for(; cloop < climit; cloop++)
        {
            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     entry_ongoing[cloop >> 1],
                                     STOP_LEVEL_8,
                                     STOP_LEVEL_8,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_ENABLE);
        }

        // Update QSSR: l2_stopped, drop stop_entry_ongoing
        out32(OCB_QSSR_OR, (ex << SHIFT32((qloop << 1) + 1)) | BIT32(qloop + 20));

        //=================================================
        MARK_TAG(SE_STOP8_DONE, ((ex << 6) | (1 << qloop)))
        //=================================================

    };

    // ------------------------------------------------------------------------
    // QUAD STOP ENTRY
    // ------------------------------------------------------------------------

    for(qentry = G_sgpe_stop_record.group.member.q_in, qloop = 0;
        qentry > 0;
        qentry = qentry << 1, qloop++)
    {
        // if this quad is not up to entry, skip
        if (!(qentry & BIT16(0)))
        {
            continue;
        }

        PK_TRACE("q[%d] starts entry", qloop);

        // Update QSSR: stop_entry_ongoing
        out32(OCB_QSSR_OR, BIT32(qloop + 20));

        // Update STOP History
        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_ENTRY,
                                     G_sgpe_stop_record.state[qloop].detail.q_req,
                                     STOP_LEVEL_9,
                                     STOP_REQ_ENABLE,
                                     STOP_ACT_DISABLE);
        }

        // ------------------------------------------------------------------------
        // STOP LEVEL 9
        //-------------------------------------------------------------------------

        //=================================
        MARK_TAG(SE_PURGE_L3, (1 << qloop))
        //=================================

        // Assert chtm purges
        GPE_PUTSCOM(CME_SCOM_SICR_OR, QUAD_ADDR_BASE | CME_ADDR_OFFSET_EX0,
                    qloop, BIT64(24) | BIT64(25));
        GPE_PUTSCOM(CME_SCOM_SICR_OR, QUAD_ADDR_BASE | CME_ADDR_OFFSET_EX1,
                    qloop, BIT64(24) | BIT64(25));

        PK_TRACE("SE9.a");
        // Disable LCO prior to purge
        GPE_PUTSCOM(EQ_PM_LCO_DIS_REG, QUAD_ADDR_BASE, qloop, BIT64(0));

        PK_TRACE("SE9.b");
        // Assert Purge L3
        GPE_PUTSCOM(PM_PURGE_REG, QUAD_ADDR_BASE, qloop, BIT64(0));

        PK_TRACE("SE9.b");

        // Poll for purge done on the same request bit thus no need to deassert
        do
        {
            GPE_GETSCOM(PM_PURGE_REG, QUAD_ADDR_BASE, qloop, scom_data);
        }
        while(scom_data & BIT64(0));

        //====================
        MARK_TRAP(SE_PURGE_PB)
        //====================

        PK_TRACE("SE9.b");
        // Purge PowerBus
        GPE_PUTSCOM(EQ_QPPM_QCCR_WOR, QUAD_ADDR_BASE, qloop, BIT64(30));

        PK_TRACE("SE9.b");

        // Poll purge PowerBus done
        do
        {
            GPE_GETSCOM(EQ_QPPM_QCCR, QUAD_ADDR_BASE, qloop, scom_data);
        }
        while(!(scom_data & BIT64(31)));

        //==========================================
        MARK_TAG(SE_WAIT_PGPE_SUSPEND, (1 << qloop))
        //==========================================
        // Poll PGPE Suspend Ack

        //=====================================
        MARK_TAG(SE_STOP_L3_CLKS, (1 << qloop))
        //=====================================

        PK_TRACE("SE9.d");
        // Assert refresh quiesce prior to L3 (refresh domain) stop clk
        // Edram quiesce is asserted by hardware when l3 thold is asserted in cc
        GPE_PUTSCOM(DRAM_REF_REG, qloop, QUAD_ADDR_BASE, BIT64(7));

        PK_TRACE("SE9.c");
        // Raise Cache Logical fence
        GPE_PUTSCOM(EQ_NET_CTRL0_WOR, QUAD_ADDR_BASE, qloop, BIT64(18));

        // clock off cache chiplet
        PK_TRACE("SE9.e");
        // Set all bits to zero prior stop core clocks
        GPE_PUTSCOM(EQ_SCAN_REGION_TYPE, QUAD_ADDR_BASE, qloop, 0);

        PK_TRACE("SE9.f");
        // Stop Cache Clocks
        GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, qloop, 0x9FFC00000000E000);

        PK_TRACE("SE9.g");

        // Poll for Cache clocks stopped
        do
        {
            GPE_GETSCOM(EQ_CLOCK_STAT_SL, QUAD_ADDR_BASE, qloop, scom_data);
        }
        while((scom_data & BITS64(4, 10)) != BITS64(4, 10));

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE("SE9: Cache Clock Stopped");

        PK_TRACE("SE9.h");
        // Switch glsmux to refclk to save clock grid power
        GPE_PUTSCOM(PPM_CGCR_CLR, QUAD_ADDR_BASE, qloop, BIT64(3));

        PK_TRACE("SE9.i");
        // Update Stop History
        G_sgpe_stop_record.state[qloop].detail.q_act = STOP_LEVEL_9;
        entry_ongoing[0] =
            G_sgpe_stop_record.state[qloop].detail.q_req == STOP_LEVEL_9 ?
            STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;
        /*
        for(cloop=0;cloop<CORES_PER_QUAD;cloop++) {
            SGPE_STOP_UPDATE_HISTORY(((qloop<<2)+cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     entry_ongoing[0],
                                     STOP_LEVEL_9,
                                     STOP_LEVEL_9,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_ENABLE);
        }*/
        SGPE_STOP_UPDATE_HISTORY(qloop,
                                 QUAD_ADDR_BASE,
                                 STOP_CORE_IS_GATED,
                                 entry_ongoing[0],
                                 STOP_LEVEL_9,
                                 STOP_LEVEL_9,
                                 STOP_REQ_DISABLE,
                                 STOP_ACT_ENABLE);

        // Update QSSR: quad_stopped
        out32(OCB_QSSR_OR, BIT32(qloop + 14));

        //===================================
        MARK_TAG(SE_STOP9_DONE, (1 << qloop))
        //===================================

        if (!entry_ongoing[0])
        {
            // Update QSSR: drop stop_entry_ongoing
            out32(OCB_QSSR_CLR, BIT32(qloop + 20));
            continue;
        }

        //-------------------------------------------------------------------------
        // STOP LEVEL 11
        //-------------------------------------------------------------------------

        //========================================
        MARK_TAG(SE_POWER_OFF_CACHE, (1 << qloop))
        //========================================

        // Assert Cache Electrical Fence
        PK_TRACE("SE11.a");
        GPE_PUTSCOM(EQ_NET_CTRL0_WOR, QUAD_ADDR_BASE, qloop, BIT64(26));

        // L3 edram shutdown
        PK_TRACE("SE11.b");
        GPE_PUTSCOM(EQ_QPPM_EDRAM_CTRL_CLEAR, QUAD_ADDR_BASE, qloop,
                    BIT64(3) | BIT64(7));
        GPE_PUTSCOM(EQ_QPPM_EDRAM_CTRL_CLEAR, QUAD_ADDR_BASE, qloop,
                    BIT64(2) | BIT64(6));
        GPE_PUTSCOM(EQ_QPPM_EDRAM_CTRL_CLEAR, QUAD_ADDR_BASE, qloop,
                    BIT64(1) | BIT64(5));
        GPE_PUTSCOM(EQ_QPPM_EDRAM_CTRL_CLEAR, QUAD_ADDR_BASE, qloop,
                    BIT64(0) | BIT64(4));

        // Make sure we are not forcing PFET for VDD or VCS off
        // vdd_pfet_force_state == 00 (Nop)
        // vcs_pfet_force_state == 00 (Nop)
        PK_TRACE("SE11.c");
        GPE_GETSCOM(PPM_PFCS, QUAD_ADDR_BASE, qloop, scom_data);

        if (scom_data & BITS64(0, 4))
        {
            return SGPE_STOP_ENTRY_VDD_PFET_NOT_IDLE;
        }

        // Prepare PFET Controls
        // vdd_pfet_val/sel_override     = 0 (disbaled)
        // vcs_pfet_val/sel_override     = 0 (disbaled)
        // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
        PK_TRACE("SE11.d");
        GPE_PUTSCOM(PPM_PFCS_CLR, QUAD_ADDR_BASE, qloop, BITS64(4, 4) | BIT64(8));

        // Power Off Core VDD
        // vdd_pfet_force_state = 01 (Force Voff)
        // vcs_pfet_force_state = 01 (Force Voff)
        PK_TRACE("SE11.e");
        GPE_PUTSCOM(PPM_PFCS_OR, QUAD_ADDR_BASE, qloop, BIT64(1) | BIT64(3));

        // Poll for power gate sequencer state: 0x8 (FSM Idle)
        PK_TRACE("SE11.f");

        do
        {
            GPE_GETSCOM(PPM_PFCS, QUAD_ADDR_BASE, qloop, scom_data);
        }
        while(!(scom_data & (BIT64(42) | BIT64(50))));

#if !EPM_P9_TUNING
        // Optional: Poll for vdd_pg_sel/vcs_pg_sel being: 0x8
        PK_TRACE("SE11.g");

        do
        {
            CME_GETSCOM(PPM_PFCS, QUAD_ADDR_BASE, qloop, scom_data);
        }
        while(!(scom_data & BIT64(46) | BIT64(54)));

#endif

        // Turn Off Force Voff
        // vdd_pfet_force_state = 00 (Nop)
        PK_TRACE("SE11.h");
        GPE_PUTSCOM(PPM_PFCS_CLR, QUAD_ADDR_BASE, qloop, BITS64(0, 4));

        PK_TRACE("SE11.i");
        G_sgpe_stop_record.state[qloop].detail.q_act = STOP_LEVEL_11;

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_COMPLETE,
                                     STOP_LEVEL_11,
                                     STOP_LEVEL_11,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_ENABLE);
        }

        SGPE_STOP_UPDATE_HISTORY(qloop,
                                 QUAD_ADDR_BASE,
                                 STOP_CORE_IS_GATED,
                                 STOP_TRANS_COMPLETE,
                                 STOP_LEVEL_11,
                                 STOP_LEVEL_11,
                                 STOP_REQ_DISABLE,
                                 STOP_ACT_ENABLE);

        // Update QSSR: drop stop_entry_ongoing
        out32(OCB_QSSR_CLR, BIT32(qloop + 20));

        //====================================
        MARK_TAG(SE_STOP11_DONE, (1 << qloop))
        //====================================
    };

    // Enable Type2 Interrupt
    out32(OCB_OIMR1_CLR, BIT32(15));

    //============================
    MARK_TRAP(ENDSCOPE_STOP_ENTRY)
    //============================
    return SGPE_STOP_SUCCESS;
}
