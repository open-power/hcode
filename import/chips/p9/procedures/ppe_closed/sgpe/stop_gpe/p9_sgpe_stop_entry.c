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

#if HW386311_DD1_PBIE_RW_PTR_STOP11_FIX

uint64_t G_ring_save[MAX_QUADS][8] =
{
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}
};

uint64_t G_ring_spin[10][2] =
{
    {0,    0},
    {5039, 0xE000000000000000}, //3
    {5100, 0xC1E061FFED5F0000}, //29
    {5664, 0xE000000000000000}, //3
    {5725, 0xC1E061FFED5F0000}, //29
    {5973, 0xE000000000000000}, //3
    {6034, 0xC1E061FFED5F0000}, //29
    {6282, 0xE000000000000000}, //3
    {6343, 0xC1E061FFED5F0000}, //29
    {17871, 0}                  //128
};

#endif

int
p9_sgpe_stop_entry()
{
    int          entry_ongoing[2] = {0, 0};
    int          l3_purge_aborted = 0;
    uint32_t     ex = 0;
    uint32_t     qloop;
    uint32_t     cloop;
    uint32_t     climit;
    uint32_t     xentry;
    uint32_t     qentry;
    uint32_t     loop;
    uint64_t     scom_data;
    uint64_t     temp_data;
    ppm_sshsrc_t hist;
#if HW386311_DD1_PBIE_RW_PTR_STOP11_FIX
    int          spin;
#endif

    //--------------------------------------------------------------------------
    PK_TRACE_INF("+++++ +++++ BEGIN OF STOP ENTRY +++++ +++++");
    //--------------------------------------------------------------------------

    //================================
    MARK_TAG(BEGINSCOPE_STOP_ENTRY, 0)
    //================================

    G_sgpe_stop_record.group.ex_l[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.ex_r[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.quad[VECTOR_ENTRY] = 0;

    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {

        if (G_sgpe_stop_record.group.qswu[VECTOR_CONFIG] & BIT32(qloop))
        {
            continue;
        }

        // Calculate EX and Quad targets based on current core stop levels
        G_sgpe_stop_record.state[qloop].req_state_x0 =
            G_sgpe_stop_record.level[qloop][0] <
            G_sgpe_stop_record.level[qloop][1] ?
            G_sgpe_stop_record.level[qloop][0] :
            G_sgpe_stop_record.level[qloop][1] ;
        G_sgpe_stop_record.state[qloop].req_state_x1 =
            G_sgpe_stop_record.level[qloop][2] <
            G_sgpe_stop_record.level[qloop][3] ?
            G_sgpe_stop_record.level[qloop][2] :
            G_sgpe_stop_record.level[qloop][3] ;
        G_sgpe_stop_record.state[qloop].req_state_q =
            G_sgpe_stop_record.state[qloop].req_state_x0 <
            G_sgpe_stop_record.state[qloop].req_state_x1 ?
            G_sgpe_stop_record.state[qloop].req_state_x0 :
            G_sgpe_stop_record.state[qloop].req_state_x1 ;

        // Check if EX and/or Quad qualifies to proceed with entry
        if (G_sgpe_stop_record.state[qloop].act_state_x0 <  LEVEL_EX_BASE &&
            G_sgpe_stop_record.state[qloop].req_state_x0 >= LEVEL_EX_BASE)
        {
            G_sgpe_stop_record.group.ex_l[VECTOR_ENTRY] |= BIT32(qloop);
            G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY] |= BIT32(qloop << 1);
        }

        if (G_sgpe_stop_record.state[qloop].act_state_x1 <  LEVEL_EX_BASE &&
            G_sgpe_stop_record.state[qloop].req_state_x1 >= LEVEL_EX_BASE)
        {
            G_sgpe_stop_record.group.ex_r[VECTOR_ENTRY] |= BIT32(qloop);
            G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY] |=
                BIT32((qloop << 1) + 1);
        }

        if (G_sgpe_stop_record.state[qloop].act_state_q <  LEVEL_EQ_BASE &&
            G_sgpe_stop_record.state[qloop].req_state_q >= LEVEL_EQ_BASE)
        {
            G_sgpe_stop_record.group.quad[VECTOR_ENTRY] |= BIT32(qloop);
        }

        if (G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY] ||
            G_sgpe_stop_record.group.quad[VECTOR_ENTRY])
        {
            PK_TRACE_INF("Actual:  clv[%d][%d][%d][%d]",
                         G_sgpe_stop_record.level[qloop][0],
                         G_sgpe_stop_record.level[qloop][1],
                         G_sgpe_stop_record.level[qloop][2],
                         G_sgpe_stop_record.level[qloop][3]);

            PK_TRACE_INF("Actual:  qlv:[%d]x0lv[%d]x1lv[%d]",
                         G_sgpe_stop_record.state[qloop].act_state_q,
                         G_sgpe_stop_record.state[qloop].act_state_x0,
                         G_sgpe_stop_record.state[qloop].act_state_x1);

            PK_TRACE_INF("Request: qlv[%d]x0lv[%d]x1lv[%d]",
                         G_sgpe_stop_record.state[qloop].req_state_q,
                         G_sgpe_stop_record.state[qloop].req_state_x0,
                         G_sgpe_stop_record.state[qloop].req_state_x1);
        }
    }

    G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY] &=
        G_sgpe_stop_record.group.ex_b[VECTOR_CONFIG];
    G_sgpe_stop_record.group.ex_l[VECTOR_ENTRY] &=
        G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG];
    G_sgpe_stop_record.group.ex_r[VECTOR_ENTRY] &=
        G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG];
    G_sgpe_stop_record.group.quad[VECTOR_ENTRY] &=
        G_sgpe_stop_record.group.quad[VECTOR_CONFIG];

    PK_TRACE_INF("Core Entry Vectors:   X[%x] X0[%x] X1[%x] Q[%x]",
                 G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY],
                 G_sgpe_stop_record.group.ex_l[VECTOR_ENTRY],
                 G_sgpe_stop_record.group.ex_r[VECTOR_ENTRY],
                 G_sgpe_stop_record.group.quad[VECTOR_ENTRY]);

    //TODO: message pgpe to suspend Pstate only if stop level >= 8
    if (G_sgpe_stop_record.group.quad[VECTOR_ENTRY])
    {
        //===============================
        MARK_TRAP(SE_STOP_SUSPEND_PSTATE)
        //===============================
    }
    else if (!G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY])
    {
        //============================
        MARK_TAG(SE_LESSTHAN8_WAIT, 0)
        //============================
    }



    // only stop 8 sets x_in
    for(xentry = G_sgpe_stop_record.group.ex_b[VECTOR_ENTRY], qloop = 0;
        xentry > 0;
        xentry = xentry << 2, qloop++)
    {
        // if this ex is not up to entry, skip
        if (!(ex = ((xentry & BITS32(0, 2)) >> SHIFT32(1))))
        {
            continue;
        }

        // ------------------------------------------------------------------------
        PK_TRACE_INF("+++++ +++++ EX STOP ENTRY [LEVEL 8-10] +++++ +++++");
        // ------------------------------------------------------------------------

        PK_TRACE_INF("Check: q[%d]ex[%d] start ex entry", qloop, ex);

        PK_TRACE("Update QSSR: stop_entry_ongoing");
        out32(OCB_QSSR_OR, BIT32(qloop + 20));

        cloop  = (ex & FST_EX_IN_QUAD) ?              0 : CORES_PER_EX;
        climit = (ex & SND_EX_IN_QUAD) ? CORES_PER_QUAD : CORES_PER_EX;

        for(; cloop < climit; cloop++)
        {
            // Check partial good core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] &
                  BIT32(((qloop << 2) + cloop))))
            {
                continue;
            }

            PK_TRACE("Update STOP history on core[%d]: in transition of entry",
                     ((qloop << 2) + cloop));
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

        PK_TRACE("Drop L2 Snoop(quiesce L2-L3 interface) via EX_PM_L2_RCMD_DIS_REG[0]");

        if (ex & FST_EX_IN_QUAD)
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, qloop, 0),
                        BIT64(0));

        if (ex & SND_EX_IN_QUAD)
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, qloop, 1),
                        BIT64(0));

        PPE_WAIT_CORE_CYCLES(loop, 256)

        PK_TRACE("Assert partial bad L2/L3 and stopping/stoped l2 pscom masks via RING_FENCE_MASK_LATCH");
        scom_data = 0;

        if (!(G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG] & BIT32(qloop)))
        {
            scom_data |= (PSCOM_MASK_EX0_L2 | PSCOM_MASK_EX0_L3);
        }
        else if ((ex & FST_EX_IN_QUAD) ||
                 (G_sgpe_stop_record.state[qloop].act_state_x0 >= LEVEL_EX_BASE))
        {
            scom_data |= PSCOM_MASK_EX0_L2;
        }

        if (!(G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG] & BIT32(qloop)))
        {
            scom_data |= (PSCOM_MASK_EX1_L2 | PSCOM_MASK_EX1_L3);
        }
        else if ((ex & SND_EX_IN_QUAD) ||
                 (G_sgpe_stop_record.state[qloop].act_state_x1 >= LEVEL_EX_BASE))
        {
            scom_data |= PSCOM_MASK_EX1_L2;
        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_RING_FENCE_MASK_LATCH, qloop), scom_data);



        PK_TRACE("Clear SCAN_REGION_TYPE prior to stop L2 clocks");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, qloop), 0);

        PK_TRACE("Stop L2 clocks via CLK_REGION[8/9]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, qloop),
                    (CLK_STOP_CMD | CLK_THOLD_ALL |
                     ((uint64_t)ex << SHIFT64(9))));

        PK_TRACE("Poll for L2 clocks stopped via CPLT_STAT0[8]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, qloop), scom_data);
        }
        while((~scom_data) & BIT64(8));

        PK_TRACE("Check L2 clock is stopped via CLOCK_STAT_SL[4-13]");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, qloop), scom_data);

        if (((~scom_data) & ((uint64_t)ex << SHIFT64(9))) != 0)
        {
            PK_TRACE("ERROR: L2 clock stop failed. HALT SGPE!");
            pk_halt();
        }

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE_INF("SE8.A: L2 Clock Stopped");

        //========================
        MARK_TRAP(SE_STOP_L2_GRID)
        //========================

        PK_TRACE("Drop clock sync enable before switch to refclk via EXCGCR[36/37]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, qloop),
                    ((uint64_t)ex << SHIFT64(37)));

        PK_TRACE("Poll for clock sync done to drop via QACSR[36/37]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACSR, qloop), scom_data);
        }
        while(((~scom_data >> SHIFT64(37)) & ex) != ex);

        PK_TRACE("Switch glsmux to refclk to save clock grid power via EXCGCR[34/35]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, qloop),
                    ((uint64_t)ex << SHIFT64(35)));

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
                G_sgpe_stop_record.state[qloop].req_state_x1 == STOP_LEVEL_8 ?
                STOP_TRANS_COMPLETE : STOP_TRANS_ENTRY;
        }
        else
        {
            climit = CORES_PER_EX;
        }

        for(; cloop < climit; cloop++)
        {
            // Check partial good core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] &
                  BIT32(((qloop << 2) + cloop))))
            {
                continue;
            }

            // request levle already set by CME
            // shift by 2 == times 4, which is cores per quad
            PK_TRACE("Update STOP history on core[%d]: in stop level 8",
                     ((qloop << 2) + cloop));
            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     entry_ongoing[cloop >> 1],
                                     STOP_LEVEL_8,
                                     STOP_LEVEL_8,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_ENABLE);
        }

        PK_TRACE("Update QSSR: l2_stopped, drop stop_entry_ongoing");
        out32(OCB_QSSR_CLR, BIT32(qloop + 20));
        out32(OCB_QSSR_OR, (ex << SHIFT32((qloop << 1) + 1)));

        PK_TRACE_INF("SE8.B: L2 Clock Sync Dropped");

        //==================================================
        MARK_TAG(SE_STOP8_DONE, ((ex << 6) | (32 >> qloop)))
        //==================================================

    };



    for(qentry = G_sgpe_stop_record.group.quad[VECTOR_ENTRY], qloop = 0, ex = 0;
        qentry > 0;
        qentry = qentry << 1, qloop++, ex = 0)
    {
        // if this quad is not up to entry, skip
        if (!(qentry & BIT32(0)))
        {
            continue;
        }

        // ------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ QUAD STOP ENTRY [LEVEL 11-15] +++++ +++++");
        // ------------------------------------------------------------------------

        if (G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG] & BIT32(qloop))
        {
            ex |= FST_EX_IN_QUAD;
        }

        if (G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG] & BIT32(qloop))
        {
            ex |= SND_EX_IN_QUAD;
        }

        PK_TRACE_INF("Check: q[%d]ex[%d] starts quad entry", qloop, ex);

        PK_TRACE("Update QSSR: stop_entry_ongoing");
        out32(OCB_QSSR_OR, BIT32(qloop + 20));

        PK_TRACE("Update STOP history on quad[%d]: update request stop level", qloop);
        SGPE_STOP_UPDATE_HISTORY(qloop,
                                 QUAD_ADDR_BASE,
                                 STOP_CACHE_IS_GATED,
                                 STOP_TRANS_ENTRY,
                                 G_sgpe_stop_record.state[qloop].req_state_q,
                                 STOP_LEVEL_11,
                                 STOP_REQ_ENABLE,
                                 STOP_ACT_DISABLE);

        //==================================
        MARK_TAG(SE_PURGE_L3, (32 >> qloop))
        //==================================

        PK_TRACE("Drop LCO prior to purge via EX_PM_LCO_DIS_REG[0]");

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

        PK_TRACE("Assert purge L3 via EX_PM_PURGE_REG[0]");

        if(ex & FST_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 0), BIT64(0));
        }

        if(ex & SND_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 1), BIT64(0));
        }

        // todo: stop debug trace, attribute may be needed

        PK_TRACE("Poll for L3 purge done via EX_PM_PURGE_REG[0]");

        // Poll on the same request bit thus no need to deassert
        do
        {

#if !SKIP_L3_PURGE_ABORT

            if (in32(OCB_OISR1) & (BITS32(15, 2) | BIT32(19)))
            {
                PK_TRACE_INF("Abort: interrupt detected");

                if ((in32(OCB_OPITNPRA(2)) & BITS32((qloop << 2), 4)) ||
                    (in32(OCB_OPITNPRA(3)) & BITS32((qloop << 2), 4)))
                {
                    PK_TRACE_INF("Abort: core interrupt detected");

                    for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
                    {
                        if ((in32(OCB_OPIT2CN(((qloop << 2) + cloop))) &
                             TYPE2_PAYLOAD_EXIT_EVENT) ||
                            (in32(OCB_OPIT3CN(((qloop << 2) + cloop))) &
                             TYPE3_PAYLOAD_EXIT_EVENT))
                        {
                            PK_TRACE_INF("Abort: core wakeup detected");
                            l3_purge_aborted = 1;
                            break;
                        }
                    }
                }

                if ((in32(OCB_OPIT6PRB) & BIT32(qloop)) &&
                    (in32(OCB_OPIT6QN(qloop)) & TYPE6_PAYLOAD_EXIT_EVENT))
                {
                    PK_TRACE_INF("Abort: quad wakeup detected");
                    l3_purge_aborted = 1;
                }

                if (l3_purge_aborted)
                {

                    //========================================
                    MARK_TAG(SE_PURGE_L3_ABORT, (32 >> qloop))
                    //========================================

                    PK_TRACE_INF("Abort: assert purge L3 abort");

                    if (ex & FST_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 0),
                                    BIT64(2));

                    if (ex & SND_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 1),
                                    BIT64(2));

                    PK_TRACE_INF("Abort: poll for abort done");

                    if(ex & FST_EX_IN_QUAD)
                    {
                        do
                        {
                            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG,
                                                         qloop, 0), scom_data);
                        }
                        while(scom_data & (BIT64(0) | BIT64(2)));
                    }

                    if(ex & SND_EX_IN_QUAD)
                    {
                        do
                        {
                            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG,
                                                         qloop, 1), scom_data);
                        }
                        while(scom_data & (BIT64(0) | BIT64(2)));
                    }

                    //=============================================
                    MARK_TAG(SE_PURGE_L3_ABORT_DONE, (32 >> qloop))
                    //=============================================

                    PK_TRACE_INF("Abort: Drop LCO Disable");

                    if (ex & FST_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG,
                                                     qloop, 0), 0);

                    if (ex & SND_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG,
                                                     qloop, 1), 0);

                    // TODO Notify PGPE to resume
                }
            }

#endif
            scom_data = 0;
            temp_data = 0;

            if (ex & FST_EX_IN_QUAD)
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 0),
                            scom_data);
            }

            if (ex & SND_EX_IN_QUAD)
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 1),
                            temp_data);
            }
        }
        while((scom_data | temp_data) & BIT64(0));

        if (l3_purge_aborted)
        {
            PK_TRACE_INF("Abort: L3 Purge Aborted");
            continue;
        }

        PK_TRACE_INF("SE11.A: L3 Purged");

#endif

        //==================================
        MARK_TAG(SE_PURGE_PB, (32 >> qloop))
        //==================================

        PK_TRACE("Assert powerbus purge via QCCR[30]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, qloop), BIT64(30));

        PK_TRACE("Poll PowerBus purge done via QCCR[31]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR, qloop), scom_data);
        }
        while(!(scom_data & BIT64(31)));

        PK_TRACE("Drop powerbus purge via QCCR[30]");
        // todo may need to move this to wakeup
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop), BIT64(30));

        PK_TRACE_INF("SE11.B: PowerBus Purged");

        //===========================================
        MARK_TAG(SE_WAIT_PGPE_SUSPEND, (32 >> qloop))
        //===========================================

        // TODO: Poll PGPE Suspend Ack

        //======================================
        MARK_TAG(SE_QUIESCE_QUAD, (32 >> qloop))
        //======================================

        // TODO halt cme here

        PK_TRACE("Assert refresh quiesce prior to L3 (refresh domain) stop clk via EX_DRAM_REF_REG[7]");

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

        PK_TRACE("Check NCU_SATUS_REG[0:3] for all zeros");

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

        PK_TRACE_INF("SE11.C: NCU Status Clean");

        //===========================
        MARK_TRAP(SE_STOP_CACHE_CLKS)
        //===========================

        PK_TRACE("Assert cache chiplet fence via NET_CTRL0[18]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(18));

        PK_TRACE("Clear SCAN_REGION prior to stop cache clocks");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, qloop), 0);

        PK_TRACE("Stop cache clocks via CLK_REGION");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, qloop),
                    (CLK_STOP_CMD | CLK_THOLD_ALL |
                     CLK_REGION_ALL_BUT_EX        |
                     ((uint64_t)ex << SHIFT64(7)) |
                     ((uint64_t)ex << SHIFT64(13))));

        PK_TRACE("Poll for cache clocks stopped via CPLT_STAT0[8]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, qloop), scom_data);
        }
        while((~scom_data) & BIT64(8));

        PK_TRACE("Check core clock is stopped via CLOCK_STAT_SL[4-13]");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, qloop), scom_data);

        if (((~scom_data) & (CLK_REGION_ALL_BUT_EX        |
                             ((uint64_t)ex << SHIFT64(7)) |
                             ((uint64_t)ex << SHIFT64(13)))) != 0)
        {
            PK_TRACE("ERROR: Cache clock stop failed. HALT SGPE!");
            pk_halt();
        }

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE("Switch glsmux to refclk to save clock grid power via CGCR[3]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, qloop), 0);

        PK_TRACE("Assert vital fence via CPLT_CTRL1[3]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, qloop), BIT64(3));

        PK_TRACE("Assert partial good regional fences via CPLT_CTRL1[4-14]");
        // Must cover partial bad fences as well or powerbus error will raise
        // Note: Stop11 will lose all the fences so here needs to assert them
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, qloop),
                    (CLK_REGION_ALL_BUT_EX        |
                     ((uint64_t)ex << SHIFT64(7)) |
                     ((uint64_t)ex << SHIFT64(9)) |
                     ((uint64_t)ex << SHIFT64(13))));

        /// @todo add VDM_ENABLE attribute control
        PK_TRACE("Drop vdm enable via CPPM_VDMCR[0]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_VDMCR_CLR, qloop), BIT64(0));

        PK_TRACE_INF("SE11.D: Cache Clock Stopped");

        //=========================================
        MARK_TAG(SE_POWER_OFF_CACHE, (32 >> qloop))
        //=========================================

#if HW386311_DD1_PBIE_RW_PTR_STOP11_FIX

        PK_TRACE_INF("FCMS: Engage with PBIE Read/Write Pointer Scan Workaround");

        // bit4,5,11 = perv/eqpb/pbieq, bit59 = inex
        PK_TRACE("FCMS: Setup scan register to select the ring");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), BITS64(4, 2) | BIT64(11) | BIT64(59));

        PK_TRACE("FCMS: checkword set");
        scom_data = 0xa5a5a5a5a5a5a5a5;
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data);

        for(spin = 1;; spin++)
        {
            PK_TRACE("FCMS: spin ring loop%d", spin);
            scom_data = (G_ring_spin[spin][0] - G_ring_spin[spin - 1][0]) << 32;
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10039000, qloop), scom_data);

            PK_TRACE("FCMS: Poll OPCG done for ring spin");

            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10000100, qloop), scom_data);
            }
            while(~scom_data & BIT64(8));

            if (spin == 9)
            {
                PK_TRACE("FCMS: checkword check");
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data);

                if (scom_data != 0xa5a5a5a5a5a5a5a5)
                {
                    PK_TRACE("ERROR: checkword[%x%x] failed. HALT SGPE!",
                             UPPER32(scom_data), LOWER32(scom_data));
                    pk_halt();
                }

                break;
            }

            PK_TRACE("FCMS: save pbie read ptr");
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data);
            EXTRACT_RING_BITS(G_ring_spin[spin][1], scom_data, G_ring_save[qloop][spin - 1]);
            PK_TRACE("FCMS: mask: %8x %8x",
                     UPPER32(G_ring_spin[spin][1]),
                     LOWER32(G_ring_spin[spin][1]));
            PK_TRACE("FCMS: ring: %8x %8x",
                     UPPER32(scom_data),
                     LOWER32(scom_data));
            PK_TRACE("FCMS: save: %8x %8x",
                     UPPER32(G_ring_save[qloop][spin - 1]),
                     LOWER32(G_ring_save[qloop][spin - 1]));
        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), 0);

#endif

        PK_TRACE("Assert PCB fence via NET_CTRL0[25]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(25));

        PK_TRACE("Assert electrical fence via NET_CTRL0[26]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(26));

        PK_TRACE("Assert vital thold via NET_CTRL0[16]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(16));

        PK_TRACE("Shutdown L3[%d] EDRAM via QCCR[0-3/4-7]", ex);
        // QCCR[0/4] EDRAM_ENABLE_DC
        // QCCR[1/5] EDRAM_VWL_ENABLE_DC
        // QCCR[2/6] L3_EX0/1_EDRAM_VROW_VBLH_ENABLE_DC
        // QCCR[3/7] EDRAM_VPP_ENABLE_DC

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

        PK_TRACE("Drop vdd/vcs_pfet_val/sel_override/regulation_finger_en via PFCS[4-7,8]");
        // vdd_pfet_val/sel_override     = 0 (disbaled)
        // vcs_pfet_val/sel_override     = 0 (disbaled)
        // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, qloop),
                    BITS64(4, 4) | BIT64(8));

        PK_TRACE("Power off VCS via PFCS[2-3]");
        // vcs_pfet_force_state = 01 (Force Voff)
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, qloop), BIT64(3));

        PK_TRACE("Poll for power gate sequencer state: 0x8 (FSM Idle) via PFCS[50]");
        // todo: poll the sense line instead

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS, qloop), scom_data);
        }
        while(!(scom_data & BIT64(50)));

        PK_TRACE("Power off VDD via PFCS[0-1]");
        // vdd_pfet_force_state = 01 (Force Voff)
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, qloop), BIT64(1));

        PK_TRACE("Poll for power gate sequencer state: 0x8 (FSM Idle) via PFCS[42]");
        // todo: poll the sense line instead

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS, qloop), scom_data);
        }
        while(!(scom_data & BIT64(42)));

        PK_TRACE("Turn off force voff via PFCS[0-3]");
        // vdd_pfet_force_state = 00 (Nop)
        // vcs_pfet_force_state = 00 (Nop)
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, qloop), BITS64(0, 4));

        PK_TRACE_INF("SE11.E: Cache Powered Off");

#endif

        PK_TRACE("Drop CME_INTERPPM_DPLL_ENABLE after DPLL is stopped via QPMMR[26]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, qloop), BIT64(20) | BIT64(22) | BIT64(24) | BIT64(26));

        G_sgpe_stop_record.state[qloop].act_state_q = STOP_LEVEL_11;

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            // Check partial good core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] &
                  BIT32(((qloop << 2) + cloop))))
            {
                continue;
            }

            PK_TRACE("Update STOP history on core[%d]: in stop level 11",
                     ((qloop << 2) + cloop));
            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_COMPLETE,
                                     STOP_LEVEL_11,
                                     STOP_LEVEL_11,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_ENABLE);
        }

        PK_TRACE("Update STOP history on quad[%d]: in stop level 11", qloop);
        SGPE_STOP_UPDATE_HISTORY(qloop,
                                 QUAD_ADDR_BASE,
                                 STOP_CACHE_IS_GATED,
                                 STOP_TRANS_COMPLETE,
                                 STOP_LEVEL_11,
                                 STOP_LEVEL_11,
                                 STOP_REQ_DISABLE,
                                 STOP_ACT_ENABLE);

        PK_TRACE("Update QSSR: quad_stopped");
        out32(OCB_QSSR_OR, BIT32(qloop + 14));

        PK_TRACE("Update QSSR: drop stop_entry_ongoing");
        out32(OCB_QSSR_CLR, BIT32(qloop + 20));

        //=====================================
        MARK_TAG(SE_STOP11_DONE, (32 >> qloop))
        //=====================================
    }

    //--------------------------------------------------------------------------
    PK_TRACE_INF("+++++ +++++ END OF STOP ENTRY +++++ +++++");
    //--------------------------------------------------------------------------

    //loop quad to clear qswu record
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        if (G_sgpe_stop_record.group.qswu[VECTOR_ENTRY] & BIT32(qloop))
        {
            G_sgpe_stop_record.group.qswu[VECTOR_ENTRY] &= ~BIT32(qloop);
        }
    }

    //============================
    MARK_TRAP(ENDSCOPE_STOP_ENTRY)
    //============================

    return SGPE_STOP_SUCCESS;
}
