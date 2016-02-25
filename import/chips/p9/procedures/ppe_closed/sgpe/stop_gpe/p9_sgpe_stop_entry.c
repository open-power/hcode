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
    int          entry_ongoing[2] = {0, 0};
    int          l3_purge_aborted = 0;
    int          rc = 0;
    uint32_t     ex = 0;
    uint32_t     qloop;
    uint32_t     cloop;
    uint32_t     climit;
    uint32_t     xentry;
    uint32_t     qentry;
    uint32_t     loop;
    uint64_t     scom_data;
    ppm_sshsrc_t hist;

    //================================
    MARK_TAG(BEGINSCOPE_STOP_ENTRY, 0)
    //================================

    if (G_sgpe_stop_record.group.entry_q)
    {
        MARK_TRAP(SE_STOP_SUSPEND_PSTATE)
    }

    //TODO: message pgpe to suspend Pstate only if stop level >= 8

    // ------------------------------------------------------------------------
    // EX STOP ENTRY [LEVEL 8-10]
    // ------------------------------------------------------------------------
    // only stop 8 sets x_in
    for(xentry = G_sgpe_stop_record.group.entry_x, qloop = 0;
        xentry > 0;
        xentry = xentry << 2, qloop++)
    {
        // if this ex is not up to entry, skip
        if (!(ex = ((xentry & BITS32(0, 2)) >> SHIFT32(1))))
        {
            continue;
        }

        PK_TRACE("q[%d]exmask[%d] starts entry", qloop, ex);

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

        //====================================================
        MARK_TAG(SE_STOP_L2_CLKS, ((ex << 6) | (32 >> qloop)))
        //====================================================

        PK_TRACE("SE8.a");

        // Disable L2 Snoop(quiesce L2-L3 interface, what about NCU?)
        if (ex & FST_EX_IN_QUAD)
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, qloop, 0),
                        BIT64(0));

        if (ex & SND_EX_IN_QUAD)
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, qloop, 1),
                        BIT64(0));

        PPE_WAIT_CORE_CYCLES(loop, 256)

        PK_TRACE("SE8.b");
        // Set all bits to zero prior stop cache clocks
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, qloop), 0);

        PK_TRACE("SE8.c");
        // Stop L2 Clocks
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, qloop),
                    (0x800000000000E000 | ((uint64_t)ex << SHIFT64(9))));

        PK_TRACE("SE8.d");

        // Poll for L2 clocks stopped
        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, qloop), scom_data);
        }
        while(((scom_data >> SHIFT64(9)) & ex) != ex);

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE("SE8: L2 Clock Stopped");

        //========================
        MARK_TRAP(SE_STOP_L2_GRID)
        //========================

        PK_TRACE("SE8.e");
        // Drop clock sync enable before switch to refclk
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, qloop),
                    ((uint64_t)ex << SHIFT64(37)));

        PK_TRACE("SE8.f");

        // Poll for clock sync done to drop
        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACSR, qloop), scom_data);
        }
        while(((~scom_data >> SHIFT64(37)) & ex) != ex);

        PK_TRACE("SE8.g");
        // Switch glsmux to refclk to save clock grid power
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, qloop),
                    ((uint64_t)ex << SHIFT64(35)));

        PK_TRACE("SE8.h");

        if (ex & FST_EX_IN_QUAD)
        {
            cloop = 0;
            G_sgpe_stop_record.state[qloop].act_state_x0 = STOP_LEVEL_8;
            entry_ongoing[0] =
                G_sgpe_stop_record.state[qloop].req_state_x0 == STOP_LEVEL_8 ?
                STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;
        }
        else
        {
            cloop = CORES_PER_EX;
        }

        if (ex & SND_EX_IN_QUAD)
        {
            climit = CORES_PER_QUAD;
            G_sgpe_stop_record.state[qloop].act_state_x1 = STOP_LEVEL_8;
            entry_ongoing[1] =
                G_sgpe_stop_record.state[qloop].req_state_x0 == STOP_LEVEL_8 ?
                STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;
        }
        else
        {
            climit = CORES_PER_EX;
        }

        for(; cloop < climit; cloop++)
        {
            // request levle already set by CME
            // shift by 2 == times 4, which is cores per quad
            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     entry_ongoing[cloop >> 1],
                                     STOP_LEVEL_8,
                                     STOP_LEVEL_8,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_ENABLE);
        }

        // Update QSSR: l2_stopped, entry_ongoing = 0
        out32(OCB_QSSR_CLR, BIT32(qloop + 20));
        out32(OCB_QSSR_OR, (ex << SHIFT32((qloop << 1) + 1)));

        //==================================================
        MARK_TAG(SE_STOP8_DONE, ((ex << 6) | (32 >> qloop)))
        //==================================================

    };

    // ------------------------------------------------------------------------
    // QUAD STOP ENTRY [LEVEL 11-15]
    // ------------------------------------------------------------------------

    for(qentry = G_sgpe_stop_record.group.entry_q, qloop = 0;
        qentry > 0;
        qentry = qentry << 1, qloop++)
    {
        // if this quad is not up to entry, skip
        if (!(qentry & BIT32(0)))
        {
            continue;
        }

        if (G_sgpe_stop_record.group.good_x0 & BIT32(qloop))
        {
            ex |= FST_EX_IN_QUAD;
        }

        if (G_sgpe_stop_record.group.good_x1 & BIT32(qloop))
        {
            ex |= SND_EX_IN_QUAD;
        }

        PK_TRACE("q[%d]x[%d] starts quad entry", qloop, ex);

        // Update QSSR: stop_entry_ongoing
        out32(OCB_QSSR_OR, BIT32(qloop + 20));

        // Update Quad STOP History
        SGPE_STOP_UPDATE_HISTORY(qloop,
                                 QUAD_ADDR_BASE,
                                 STOP_CORE_IS_GATED,
                                 STOP_TRANS_ENTRY,
                                 G_sgpe_stop_record.state[qloop].req_state_q,
                                 STOP_LEVEL_11,
                                 STOP_REQ_ENABLE,
                                 STOP_ACT_DISABLE);

        //==================================
        MARK_TAG(SE_PURGE_L3, (32 >> qloop))
        //==================================

        PK_TRACE("SE11.a");

        // Disable LCO prior to purge
        if(ex & FST_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG, qloop, 0),
                        BIT64(0));
        }

        if(ex & SND_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG, qloop, 1),
                        BIT64(0));
        }

#if !SKIP_L3_PURGE
        PK_TRACE("SE11.b");

        // Assert Purge L3
        if(ex & FST_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 0), BIT64(0));
        }

        if(ex & SND_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 1), BIT64(0));
        }

        // todo: stop debug trace, attribute may be needed

        PK_TRACE("SE11.d");

        // Poll for purge done on the same request bit thus no need to deassert
        do
        {
#if !SKIP_L3_PURGE_ABORT

            if (in32(OCB_OISR1) & BIT32(15))
            {
                if (in32(OCB_OPITNPRA(2)) & (BITS32((qloop << 2), 4)))
                {
                    for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
                    {
                        // todo type3
                        if (in32(OCB_OPIT2CN(((qloop << 2) + cloop))) &
                            TYPE2_PAYLOAD_STOP_EVENT)
                        {

                            //========================================
                            MARK_TAG(SE_PURGE_L3_ABORT, (32 >> qloop))
                            //========================================

                            // Assert Purge L3 Abort
                            if (ex & FST_EX_IN_QUAD)
                                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG,
                                                             qloop, 0),
                                            BIT64(2));

                            if (ex & SND_EX_IN_QUAD)
                                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG,
                                                             qloop, 1),
                                            BIT64(2));

                            // Poll for Abort Done
                            if(ex & FST_EX_IN_QUAD)
                            {
                                do
                                {
                                    GPE_GETSCOM(GPE_SCOM_ADDR_EX(
                                                    EX_PM_PURGE_REG,
                                                    qloop, 0), scom_data);
                                }
                                while(scom_data & (BIT64(0) | BIT64(2)));
                            }

                            if(ex & SND_EX_IN_QUAD)
                            {
                                do
                                {
                                    GPE_GETSCOM(GPE_SCOM_ADDR_EX(
                                                    EX_PM_PURGE_REG,
                                                    qloop, 1), scom_data);
                                }
                                while(scom_data & (BIT64(0) | BIT64(2)));
                            }

                            //=============================================
                            MARK_TAG(SE_PURGE_L3_ABORT_DONE, (32 >> qloop))
                            //=============================================

                            // Deassert LCO Disable
                            if(ex & FST_EX_IN_QUAD)
                                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG,
                                                             qloop, 0), 0);

                            if(ex & SND_EX_IN_QUAD)
                                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG,
                                                             qloop, 1), 0);

                            // Notify PGPE to resume
                            l3_purge_aborted = 1;
                            break;
                        }
                    }
                }
            }

#endif

            if (ex & FST_EX_IN_QUAD)
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 0),
                            scom_data);

            if (ex & SND_EX_IN_QUAD)
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 1),
                            scom_data);
        }
        while(scom_data & BIT64(0));

        if (l3_purge_aborted)
        {
            continue;
        }

#endif

        //==================================
        MARK_TAG(SE_PURGE_PB, (32 >> qloop))
        //==================================

        PK_TRACE("SE11.g");
        // Assert PowerBus purge
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, qloop), BIT64(30));

        PK_TRACE("SE11.h");

        // Poll PowerBus purge done
        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR, qloop), scom_data);
        }
        while(!(scom_data & BIT64(31)));

        PK_TRACE("SE11.i");
        // Deassert PowerBus purge
        // todo may need to move this to wakeup
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop), BIT64(30));

        //===========================================
        MARK_TAG(SE_WAIT_PGPE_SUSPEND, (32 >> qloop))
        //===========================================
        // TODO: Poll PGPE Suspend Ack

        //======================================
        MARK_TAG(SE_QUIESCE_QUAD, (32 >> qloop))
        //======================================

        // todo halt cme here
        PK_TRACE("SE11.j");

        // Assert refresh quiesce prior to L3 (refresh domain) stop clk
        // Edram quiesce is asserted by hardware when l3 thold is asserted in cc
        if (ex & FST_EX_IN_QUAD)
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 0), scom_data);
            scom_data |= BIT64(7);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 0), scom_data);
        }

        if (ex & SND_EX_IN_QUAD)
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 1), scom_data);
            scom_data |= BIT64(7);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 1), scom_data);
        }

        // Check NCU_SATUS_REG[0:3] for all zeros
        if (ex & FST_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_NCU_STATUS_REG, qloop, 0),
                            scom_data);
            }
            while((~scom_data & BITS64(0, 4)) != BITS64(0 , 4));
        }

        if (ex & SND_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_NCU_STATUS_REG, qloop, 1),
                            scom_data);
            }
            while((~scom_data & BITS64(0, 4)) != BITS64(0 , 4));
        }

        //===========================
        MARK_TRAP(SE_STOP_CACHE_CLKS)
        //===========================

        PK_TRACE("SE11.k");
        // Raise Cache Logical fence
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(18));

        // clock off cache chiplet
        PK_TRACE("SE11.l");
        // Set all bits to zero prior stop core clocks
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, qloop), 0);

        PK_TRACE("SE11.m");
        // Stop Cache Clocks
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, qloop),
                    0x8C3E00000000E000 | ((uint64_t)ex << SHIFT64(7)));

        PK_TRACE("SE11.n");

        // Poll for Cache clocks stopped
        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, qloop), scom_data);
        }
        while((scom_data &
               (BITS64(4, 2) | ((uint64_t)ex << SHIFT64(7)) | BITS64(10, 5))) !=
              (BITS64(4, 2) | ((uint64_t)ex << SHIFT64(7)) | BITS64(10, 5)));

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE("SE11: Cache Clock Stopped");

        PK_TRACE("SE11.o");
        // Switch glsmux to refclk to save clock grid power
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, qloop), 0);
        // Assert Vital Fence
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, qloop), BIT64(3));
        // Raise Partial Good Fences
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, qloop),
                    0xFFFF700000000000);

        // Update QSSR: quad_stopped
        out32(OCB_QSSR_OR, BIT32(qloop + 14));

        //=========================================
        MARK_TAG(SE_POWER_OFF_CACHE, (32 >> qloop))
        //=========================================

        // DD: Assert Cache Vital Thold/PCB Fence/Electrical Fence
        PK_TRACE("SE11.q");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(25));
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(26));
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(16));

        // L3 edram shutdown
        // todo: not EPM flag for delay
        PK_TRACE("SE11.r");

        if (ex & SND_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(7));
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(6));
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(5));
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(4));
        }

        if (ex & FST_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(3));
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(2));
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(1));
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                        BIT64(0));
        }

#if !STOP_PRIME
        // todo needed?
        // Prepare PFET Controls
        // vdd_pfet_val/sel_override     = 0 (disbaled)
        // vcs_pfet_val/sel_override     = 0 (disbaled)
        // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
        PK_TRACE("SE11.t");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, qloop),
                    BITS64(4, 4) | BIT64(8));

        // Power Off Cache VDS then VDD
        // vcs_pfet_force_state = 01 (Force Voff)
        PK_TRACE("SE11.u");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, qloop), BIT64(3));

        // todo: poll the sense line instead
        // Poll for power gate sequencer state: 0x8 (FSM Idle)
        PK_TRACE("SE11.v");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS, qloop), scom_data);
        }
        while(!(scom_data & BIT64(50)));

        // vdd_pfet_force_state = 01 (Force Voff)
        PK_TRACE("SE11.u");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, qloop), BIT64(1));

        // todo: poll the sense line instead
        // Poll for power gate sequencer state: 0x8 (FSM Idle)
        PK_TRACE("SE11.v");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS, qloop), scom_data);
        }
        while(!(scom_data & BIT64(42)));

        // Turn Off Force Voff
        // vdd_pfet_force_state = 00 (Nop)
        // vcs_pfet_force_state = 00 (Nop)
        PK_TRACE("SE11.x");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, qloop), BITS64(0, 4));

#endif

        PK_TRACE("SE11.y");
        G_sgpe_stop_record.state[qloop].act_state_q = STOP_LEVEL_11;

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

        //=====================================
        MARK_TAG(SE_STOP11_DONE, (32 >> qloop))
        //=====================================
    }

    // Enable Type2 Interrupt
    out32(OCB_OIMR1_CLR, BIT32(15));
    //============================
    MARK_TRAP(ENDSCOPE_STOP_ENTRY)
    //============================
    return SGPE_STOP_SUCCESS;
}
