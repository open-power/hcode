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


#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX

    extern struct ring_save* G_ring_save;
    extern uint64_t   G_ring_spin[10][2];

#endif

void
p9_sgpe_stop_entry()
{
    uint32_t     l3_purge_aborted  = 0;
    uint32_t     ex                = 0;
    uint32_t     ex_mask           = 0;
    uint32_t     ex_index          = 0;
    uint32_t     bitloc            = 0;
    uint32_t     qloop             = 0;
    uint32_t     cloop             = 0;
    uint32_t     climit            = 0;
    uint32_t     cindex            = 0;
    uint32_t     quad_error        = 0;
    uint64_t     host_attn         = 0;
    uint64_t     local_xstop       = 0;
    data64_t     scom_data         = {0};
    data64_t     temp_data         = {0};
    uint32_t     flg2_data         = 0;
#if DISABLE_STOP8
    ppm_pig_t    pig               = {0};
#endif
#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX
    uint32_t      spin             = 0;
#endif
#if !SKIP_IPC
    uint32_t      ipc_quad_entry   = 0;
#endif
    sgpeHeader_t* pSgpeImgHdr     = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ BEGIN OF STOP ENTRY +++++ +++++");
    //--------------------------------------------------------------------------

    //================================
    MARK_TAG(BEGINSCOPE_STOP_ENTRY, 0)
    //================================

    flg2_data = in32(OCB_OCCFLG2);

    if( flg2_data & SGPE_HCODE_ERR_INJ_BIT )
    {
        PK_TRACE_ERR("SGPE STOP ENTRY ERROR INJECT TRAP");
        PK_PANIC(SGPE_STOP_ENTRY_TRAP_INJECT);
    }

    G_sgpe_stop_record.group.core[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.quad[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.ex01[0]            = 0;
    G_sgpe_stop_record.group.ex01[1]            = 0;
    G_sgpe_stop_record.group.ex01[2]            = 0;
    G_sgpe_stop_record.group.ex01[3]            = 0;
    G_sgpe_stop_record.group.ex01[4]            = 0;
    G_sgpe_stop_record.group.ex01[5]            = 0;

    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        if ((G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE] |
             G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] |

#if DISABLE_STOP8

             G_sgpe_stop_record.group.quad[VECTOR_RCLKE]  |
             G_sgpe_stop_record.group.quad[VECTOR_RCLKX]  |

#endif

             (~G_sgpe_stop_record.group.quad[VECTOR_CONFIG])) & BIT32(qloop))
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

#if !DISABLE_STOP8

        // Check if EX and/or Quad qualifies to proceed with entry
        if(G_sgpe_stop_record.state[qloop].act_state_x0 <  LEVEL_EX_BASE &&
           G_sgpe_stop_record.state[qloop].req_state_x0 >= LEVEL_EX_BASE)
        {
            G_sgpe_stop_record.group.ex01[qloop] |= FST_EX_IN_QUAD;
        }

        if(G_sgpe_stop_record.state[qloop].act_state_x1 <  LEVEL_EX_BASE &&
           G_sgpe_stop_record.state[qloop].req_state_x1 >= LEVEL_EX_BASE)
        {
            G_sgpe_stop_record.group.ex01[qloop] |= SND_EX_IN_QUAD;
        }

#endif

        if(G_sgpe_stop_record.state[qloop].act_state_q <  LEVEL_EQ_BASE &&
           G_sgpe_stop_record.state[qloop].req_state_q >= LEVEL_EQ_BASE)
        {

#if !DISABLE_STOP8

            G_sgpe_stop_record.group.quad[VECTOR_ENTRY] |= BIT32(qloop);

#else

            // if resonant clock disable is completed, process stop11 entry
            if (G_sgpe_stop_record.group.quad[VECTOR_RCLKE] & BIT32((qloop + RCLK_DIS_DONE_OFFSET)))
            {
                G_sgpe_stop_record.group.quad[VECTOR_RCLKE] &= ~BIT32((qloop + RCLK_DIS_DONE_OFFSET));
                G_sgpe_stop_record.group.quad[VECTOR_RCLKE] |=  BIT32((qloop + QUAD_IN_STOP11_OFFSET));

                // if during resonant clock disable, any exit occured, re-assert them,
                // but we are going to complete the stop11 entry prior to process it
                for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
                {
                    cindex = (qloop << 2) + cloop;

                    if (G_sgpe_stop_record.group.core[VECTOR_RCLKE] & BIT32(cindex))
                    {
                        G_sgpe_stop_record.group.core[VECTOR_RCLKE] &= ~BIT32(cindex);
                        pig.fields.req_intr_payload = TYPE2_PAYLOAD_SOFTWARE_WAKEUP;
                        pig.fields.req_intr_type = PIG_TYPE3;
                        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(PPM_PIG, cindex), pig.value);
                    }
                }

                G_sgpe_stop_record.group.quad[VECTOR_ENTRY] |= BIT32(qloop);

                ocb_qssr_t qssr = {0};
                qssr.value      = in32(OCB_QSSR);

                // check qssr for already stopped ex
                G_sgpe_stop_record.group.ex01[qloop] =
                    (((~qssr.value) & BITS32((qloop << 1), 2)) >>
                     SHIFT32(((qloop << 1) + 1)));

            }
            // if stop11 entry qualifies, hold on processing it but first
            // send DB to Quad-Manager to disable the resonant clock
            else if (!(G_sgpe_stop_record.group.quad[VECTOR_RCLKE] & BIT32((qloop + QUAD_IN_STOP11_OFFSET))))
            {
                // from this point on, only process wakeup when stop11 is entered
                G_sgpe_stop_record.group.quad[VECTOR_RCLKE] |= BIT32((qloop + RCLK_DIS_REQ_OFFSET));

                // assume ex0 core0 is good
                cindex = (qloop << 2);
                ex = 0;

                // if ex0 is bad, switch to ex1
                if (!(G_sgpe_stop_record.group.expg[qloop] & FST_EX_IN_QUAD))
                {
                    cindex += 2;
                    ex = 1;
                }

                // if first core in the ex is bad
                if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
                {
                    cindex++;
                }

                // send DB2 with msgid 0x2 to the first good core
                // to trigger Quad Manager to disable resonant clock

                // QM will also clear the cme_flag[rclk_operatable] to
                // temporarily disable pstate code from changing rclk
                // but the Sibling CME also needs to do so, here SGPE
                // will do it for the Sibling.

                if (G_sgpe_stop_record.group.expg[qloop] & (ex + 1))
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_CLR, qloop, (ex ^ 1)),
                                BIT64(CME_FLAGS_RCLK_OPERABLE));
                }

                PK_TRACE_INF("DB2 MessageID 2(Rclk Entry) sent to core %d", cindex);

#if NIMBUS_DD_LEVEL != 10

                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB2, cindex), BIT64(6));

#else

                p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB2, cindex), BIT64(6));

#endif

            }

#endif

        }

        G_sgpe_stop_record.group.ex01[qloop] &=
            G_sgpe_stop_record.group.expg[qloop];

        if (G_sgpe_stop_record.group.ex01[qloop] ||
            G_sgpe_stop_record.group.quad[VECTOR_ENTRY])
        {
            PK_TRACE_DBG("Actual:  clv[%d][%d][%d][%d]",
                         G_sgpe_stop_record.level[qloop][0],
                         G_sgpe_stop_record.level[qloop][1],
                         G_sgpe_stop_record.level[qloop][2],
                         G_sgpe_stop_record.level[qloop][3]);

            PK_TRACE_DBG("Actual:  qlv:[%d]x0lv[%d]x1lv[%d]",
                         G_sgpe_stop_record.state[qloop].act_state_q,
                         G_sgpe_stop_record.state[qloop].act_state_x0,
                         G_sgpe_stop_record.state[qloop].act_state_x1);

            PK_TRACE_DBG("Request: qlv[%d]x0lv[%d]x1lv[%d]",
                         G_sgpe_stop_record.state[qloop].req_state_q,
                         G_sgpe_stop_record.state[qloop].req_state_x0,
                         G_sgpe_stop_record.state[qloop].req_state_x1);
        }
    }

    PK_TRACE_DBG("Entry Vectors: Q0_EX[%x] Q1_EX[%x] Q2_EX[%x] QSPWU[%x]",
                 G_sgpe_stop_record.group.ex01[0],
                 G_sgpe_stop_record.group.ex01[1],
                 G_sgpe_stop_record.group.ex01[2],
                 G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE]);

    PK_TRACE_DBG("Entry Vectors: Q3_EX[%x] Q4_EX[%x] Q5_EX[%x] QENTRY[%x]",
                 G_sgpe_stop_record.group.ex01[3],
                 G_sgpe_stop_record.group.ex01[4],
                 G_sgpe_stop_record.group.ex01[5],
                 G_sgpe_stop_record.group.quad[VECTOR_ENTRY]);



    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // if this ex is not up to entry, skip
        if (!(ex = G_sgpe_stop_record.group.ex01[qloop]))
        {
            continue;
        }

        // In order to preserve state for PRD,
        // If host attn or local xstop present,
        // abort L2 Purge and rest of Entry
        // Note: Need to read status before stopclocks
        // while these registers are still accessible
        PK_TRACE("Checking status of Host Attention");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_HOST_ATTN, qloop), host_attn);

        PK_TRACE("Checking status of Local Checkstop");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_LOCAL_XSTOP_ERR, qloop), local_xstop);

        if ((host_attn | local_xstop) & BIT64(0))
        {
            PK_TRACE_INF("WARNING: HostAttn or LocalXstop Present, Abort EX Entry for Quad[%d]", qloop);
            quad_error |= BIT32(qloop);
            continue;
        }
    }



// Permanent workaround to save cme image size
#if NIMBUS_DD_LEVEL == 10 || DISABLE_STOP8 == 1

    //-----------------------------------------------------------
    PK_TRACE("+++++ +++++ EX STOP ENTRY [L2 PURGE] +++++ +++++");
    //-----------------------------------------------------------

    PK_TRACE("Assert L2+NCU purge and NCU tlbie quiesce via SICR[18,21,22]");

    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        if (quad_error & BIT32(qloop))
        {
            continue;
        }

        // insert tlbie quiesce before ncu purge to avoid window condition
        // of ncu traffic still happening when purging starts
        // Note: chtm purge and drop tlbie quiesce will be done in SGPE

        if (G_sgpe_stop_record.group.ex01[qloop] & FST_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_OR, qloop, 0), BIT64(18) | BIT64(21));
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_OR, qloop, 0), BIT64(22));
        }

        if (G_sgpe_stop_record.group.ex01[qloop] & SND_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_OR, qloop, 1), BIT64(18) | BIT64(21));
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_OR, qloop, 1), BIT64(22));
        }
    }

    PK_TRACE("Poll for purged done via EISR[22,23] then Drop L2+NCU purges via SICR[18,22]");

    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        if (quad_error & BIT32(qloop))
        {
            continue;
        }

        if (G_sgpe_stop_record.group.ex01[qloop] & FST_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_EISR, qloop, 0), scom_data.value);
            }
            while((scom_data.words.upper & BITS32(22, 2)) != BITS32(22, 2));

            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_CLR, qloop, 0), (BIT64(18) | BIT64(22)));
        }

        if (G_sgpe_stop_record.group.ex01[qloop] & SND_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_EISR, qloop, 1), scom_data.value);
            }
            while((scom_data.words.upper & BITS32(22, 2)) != BITS32(22, 2));

            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_CLR, qloop, 1), (BIT64(18) | BIT64(22)));
        }
    }

    PK_TRACE_INF("SE.5+: L2 and NCU Purged by SGPE");

#endif



    // only stop 8 sets x_in
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // if this ex is not up to entry, skip
        if ((!(ex = G_sgpe_stop_record.group.ex01[qloop])) || (quad_error & BIT32(qloop)))
        {
            continue;
        }

        // ------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ EX STOP ENTRY [LEVEL 8-10] +++++ +++++");
        // ------------------------------------------------------------------------

        if (ex & FST_EX_IN_QUAD)
        {
            cloop = 0;
        }
        else
        {
            cloop = CORES_PER_EX;
        }

        if (ex & SND_EX_IN_QUAD)
        {
            climit = CORES_PER_QUAD;
        }
        else
        {
            climit = CORES_PER_EX;
        }

        for(; cloop < climit; cloop++)
        {
            cindex = (qloop << 2) + cloop;

            // Check partial good core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                continue;
            }

            PK_TRACE("Update STOP history on core[%d]: continue on entering", cindex);
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_ENTRY_IN_SESSION;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
        }

        PK_TRACE_INF("SE.8A: Quad[%d] EX_L2[%d] Stopping L2 Clocks", qloop, ex);

        PK_TRACE("Acquire cache clock controller atomic lock");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), BITS64(0, 5));
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), scom_data.value);

        if ((scom_data.words.upper & BITS32(0, 5)) != 0xC0000000)
        {
            PK_TRACE_ERR("ERROR: Failed to Obtain Cache %d Clk Ctrl Atomic Lock. Register Content: %x",
                         qloop, scom_data.words.upper);
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_ENTRY_GET_CLK_LOCK_FAILED);
            continue;
        }

        PK_TRACE("Update QSSR: stop_entry_ongoing");
        out32(OCB_QSSR_OR, BIT32(qloop + 20));

        //====================================================
        MARK_TAG(SE_STOP_L2_CLKS, ((ex << 6) | (32 >> qloop)))
        //====================================================

        PK_TRACE("Drop L2 Snoop(quiesce L2-L3 interface) via EX_PM_L2_RCMD_DIS_REG[0]");

        if (ex & FST_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, qloop, 0), BIT64(0));
        }

        if (ex & SND_EX_IN_QUAD)
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, qloop, 1), BIT64(0));
        }

        PPE_WAIT_CORE_CYCLES(256)

        PK_TRACE("Assert partial bad L2/L3 and stopping/stoped l2 pscom masks via RING_FENCE_MASK_LATCH");
        scom_data.value = 0;

        if (!(G_sgpe_stop_record.group.expg[qloop] & FST_EX_IN_QUAD))
        {
            scom_data.words.upper |= (PSCOM_MASK_EX0_L2 | PSCOM_MASK_EX0_L3);
        }
        else if ((ex & FST_EX_IN_QUAD) ||
                 (G_sgpe_stop_record.state[qloop].act_state_x0 >= LEVEL_EX_BASE))
        {
            scom_data.words.upper |= PSCOM_MASK_EX0_L2;
        }

        if (!(G_sgpe_stop_record.group.expg[qloop] & SND_EX_IN_QUAD))
        {
            scom_data.words.upper |= (PSCOM_MASK_EX1_L2 | PSCOM_MASK_EX1_L3);
        }
        else if ((ex & SND_EX_IN_QUAD) ||
                 (G_sgpe_stop_record.state[qloop].act_state_x1 >= LEVEL_EX_BASE))
        {
            scom_data.words.upper |= PSCOM_MASK_EX1_L2;
        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_RING_FENCE_MASK_LATCH, qloop), scom_data.value);



        PK_TRACE("Clear SCAN_REGION_TYPE prior to stop L2 clocks");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, qloop), 0);

        PK_TRACE("Stop L2 clocks via CLK_REGION[8/9]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, qloop),
                    (CLK_STOP_CMD | CLK_THOLD_ALL |
                     ((uint64_t)ex << SHIFT64(9))));

        PK_TRACE("Poll for L2 clocks stopped via CPLT_STAT0[8]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, qloop), scom_data.value);
        }
        while(!(scom_data.words.upper & BIT32(8)));

        PK_TRACE("Check L2 clock is stopped via CLOCK_STAT_SL[4-13]");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, qloop), scom_data.value);

        if (((~(scom_data.words.upper)) & (ex << SHIFT32(9))) != 0)
        {
            PK_TRACE_ERR("ERROR: L2 clock stop failed. HALT SGPE!");
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_ENTRY_L2_STOPCLK_FAILED);
            continue;
        }

        // MF: verify compiler generate single rlwmni
        // MF: delay may be needed for stage latch to propagate thold

        PK_TRACE_INF("SE.8B: L2 Clock Stopped");

        //========================
        MARK_TRAP(SE_STOP_L2_GRID)
        //========================

        PK_TRACE("Drop clock sync enable before switch to refclk via EXCGCR[36/37]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, qloop),
                    ((uint64_t)ex << SHIFT64(37)));

        PK_TRACE("Poll for clock sync done to drop via QACSR[36/37]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACSR, qloop), scom_data.value);
        }
        while((((~(scom_data.words.lower)) >> SHIFT64SH(37)) & ex) != ex);

        PK_TRACE("Switch glsmux to refclk to save clock grid power via EXCGCR[34/35]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, qloop),
                    ((uint64_t)ex << SHIFT64(35)));

        if (ex & FST_EX_IN_QUAD)
        {
            cloop = 0;
            G_sgpe_stop_record.state[qloop].act_state_x0 = STOP_LEVEL_8;
        }
        else
        {
            cloop = CORES_PER_EX;
        }

        if (ex & SND_EX_IN_QUAD)
        {
            climit = CORES_PER_QUAD;
            G_sgpe_stop_record.state[qloop].act_state_x1 = STOP_LEVEL_8;
        }
        else
        {
            climit = CORES_PER_EX;
        }

        for(; cloop < climit; cloop++)
        {
            cindex = (qloop << 2) + cloop;

            // Check partial good core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                continue;
            }

            PK_TRACE("Update STOP history on core[%d]: in stop level 8", cindex);
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_ACT_LV8_COMPLETE;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
        }

        PK_TRACE("Update QSSR: l2_stopped, drop stop_entry_ongoing");
        out32(OCB_QSSR_CLR, BIT32(qloop + 20));
        out32(OCB_QSSR_OR, (ex << SHIFT32((qloop << 1) + 1)));

        PK_TRACE_INF("SE.8C: L2 Clock Sync Dropped");

        PK_TRACE("Release cache clock controller atomic lock");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), 0);
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), scom_data.value);

        if (scom_data.words.upper & BIT32(0))
        {
            PK_TRACE_ERR("ERROR: Failed to Release Cache %d Clk Ctrl Atomic Lock. Register Content: %x",
                         qloop, scom_data.words.upper);
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_ENTRY_DROP_CLK_LOCK_FAILED);
            continue;
        }

        //==================================================
        MARK_TAG(SE_STOP8_DONE, ((ex << 6) | (32 >> qloop)))
        //==================================================

    }



    // L3 Purge loop to parallel all quad purges
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // if this quad is not up to entry, skip
        if (!(G_sgpe_stop_record.group.quad[VECTOR_ENTRY] & BIT32(qloop)))
        {
            continue;
        }

        // In order to preserve state for PRD,
        // If host attn or local xstop present,
        // abort L3 Purge and rest of Entry
        // Note: Need to read status before stopclocks
        // while these registers are still accessible
        PK_TRACE("Checking status of Host Attention");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_HOST_ATTN, qloop), host_attn);

        PK_TRACE("Checking status of Local Checkstop");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_LOCAL_XSTOP_ERR, qloop), local_xstop);

        if ((host_attn | local_xstop) & BIT64(0))
        {
            PK_TRACE_INF("WARNING: HostAttn or LocalXstop Present, Abort L3 Purge on Quad[%d]", qloop);
            quad_error |= BIT32(qloop);
        }

        // for L3 Purge check above and L2 Purge check earlier
        if (quad_error & BIT32(qloop))
        {
            // Take this out for rest of Stop11 entry and IPC code at the end
            G_sgpe_stop_record.group.quad[VECTOR_ENTRY] &= ~BIT32(qloop);
            continue;
        }

        // ------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ QUAD STOP ENTRY [LEVEL 11-15, L3 PURGE] +++++ +++++");
        // ------------------------------------------------------------------------

        ex = G_sgpe_stop_record.group.expg[qloop];

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            cindex = (qloop << 2) + cloop;

            // Check partial good core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                continue;
            }

            PK_TRACE("Update STOP history on core[%d]: continue entering", cindex);
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_ENTRY_IN_SESSION;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
        }

        PK_TRACE("Update STOP history on quad[%d]: update request stop level", qloop);
        scom_data.words.lower = 0;
        scom_data.words.upper = (SSH_REQ_LEVEL_UPDATE |
                                 ((uint32_t)G_sgpe_stop_record.state[qloop].req_state_q << SHIFT32(7)));
        GPE_PUTSCOM_VAR(PPM_SSHSRC, QUAD_ADDR_BASE, qloop, 0, scom_data.value);

        PK_TRACE("Update QSSR: stop_entry_ongoing");
        out32(OCB_QSSR_OR, BIT32(qloop + 20));

        PK_TRACE_INF("SE.11A: Quad[%d] EX_PG[%d] Shutting Cache Down", qloop, ex);

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

        for (ex_mask = 2; ex_mask; ex_mask--)
        {
            if (ex & ex_mask)
            {
                ex_index = ex_mask & 1;

                PK_TRACE("Assert purge L3 on EX[%d] via EX_PM_PURGE_REG[0]", ex_index);
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, ex_index), BIT64(0));

                PK_TRACE("Halt CHTM[0+1] on EX[%d] via HTM_TRIG[1]", ex_index);
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_CHTM0_TRIG_REG, qloop, ex_index), BIT64(1));
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_CHTM1_TRIG_REG, qloop, ex_index), BIT64(1));

                // Disable PMISC and IMA - Bits 1,2,4
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_CHTM0_CTRL_REG, qloop, ex_index), 0);
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_CHTM1_CTRL_REG, qloop, ex_index), 0);

                // Disable Tracing
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_CHTM0_MODE_REG, qloop, ex_index), 0);
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_CHTM1_MODE_REG, qloop, ex_index), 0);

            }
        }

        PK_TRACE("Disable cme trace array via DEBUG_TRACE_CONTROL[1]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(DEBUG_TRACE_CONTROL, qloop), BIT64(1));

    }



    // L3 Purge done poll loop to parallel all quad purge done polls
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // if this quad is not up to entry, skip
        if (!(G_sgpe_stop_record.group.quad[VECTOR_ENTRY] & BIT32(qloop)))
        {
            continue;
        }

        ex = G_sgpe_stop_record.group.expg[qloop];

        // ------------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ QUAD STOP ENTRY [LEVEL 11-15, L3 PURGE DONE] +++++ +++++");
        // ------------------------------------------------------------------------------

        PK_TRACE("Poll for L3 purge done via EX_PM_PURGE_REG[0]");

        // Poll on the same request bit thus no need to deassert
        do
        {

#if !SKIP_L3_PURGE_ABORT

            if ((in32(OCB_OISR1) & (BITS32(15, 2) | BIT32(19))) &&
                // Skip L3 Purge Abort check if in Block Wakeup mode
                (!(G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))))
            {
                PK_TRACE("Abort: interrupt detected");

                if ((in32(OCB_OPITNPRA(2)) & BITS32((qloop << 2), 4)) ||
                    (in32(OCB_OPITNPRA(3)) & BITS32((qloop << 2), 4)))
                {
                    PK_TRACE("Abort: core interrupt detected");

                    for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
                    {
                        cindex = (qloop << 2) + cloop;

                        if ((in32(OCB_OPIT2CN(cindex)) & TYPE2_PAYLOAD_EXIT_EVENT) ||
                            (in32(OCB_OPIT3CN(cindex)) & TYPE2_PAYLOAD_EXIT_EVENT))
                        {
                            PK_TRACE_DBG("Abort: core wakeup detected");
                            l3_purge_aborted = 1;
                            break;
                        }
                    }
                }

                if ((in32(OCB_OPIT6PRB) & BIT32(qloop)) &&
                    (in32(OCB_OPIT6QN(qloop)) & TYPE6_PAYLOAD_EXIT_EVENT))
                {
                    PK_TRACE_DBG("Abort: quad wakeup detected");
                    l3_purge_aborted = 1;
                }

                if (l3_purge_aborted)
                {

                    //========================================
                    MARK_TAG(SE_PURGE_L3_ABORT, (32 >> qloop))
                    //========================================

                    PK_TRACE_DBG("Abort: assert purge L3 abort");

                    if (ex & FST_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 0),
                                    BIT64(2));

                    if (ex & SND_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 1),
                                    BIT64(2));

                    PK_TRACE_DBG("Abort: poll for abort done");

                    if(ex & FST_EX_IN_QUAD)
                    {
                        do
                        {
                            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG,
                                                         qloop, 0), scom_data.value);
                        }
                        while(scom_data.words.upper & (BIT32(0) | BIT32(2)));
                    }

                    if(ex & SND_EX_IN_QUAD)
                    {
                        do
                        {
                            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG,
                                                         qloop, 1), scom_data.value);
                        }
                        while(scom_data.words.upper & (BIT32(0) | BIT32(2)));
                    }

                    //=============================================
                    MARK_TAG(SE_PURGE_L3_ABORT_DONE, (32 >> qloop))
                    //=============================================

                    PK_TRACE("Abort: Drop LCO Disable");

                    if (ex & FST_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG,
                                                     qloop, 0), 0);

                    if (ex & SND_EX_IN_QUAD)
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG,
                                                     qloop, 1), 0);
                }
            }

#endif
            scom_data.value = 0;
            temp_data.value = 0;

            if (ex & FST_EX_IN_QUAD)
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 0),
                            scom_data.value);
            }

            if (ex & SND_EX_IN_QUAD)
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_PM_PURGE_REG, qloop, 1),
                            temp_data.value);
            }
        }
        while((scom_data.words.upper | temp_data.words.upper) & BIT32(0));

        if (l3_purge_aborted)
        {
            PK_TRACE_INF("Abort: L3 Purge Aborted");

#if DISABLE_STOP8

            // assume ex0 core0 is good
            cindex = (qloop << 2);

            // if ex0 is bad, switch to ex1
            if (!(G_sgpe_stop_record.group.expg[qloop] & FST_EX_IN_QUAD))
            {
                cindex += 2;
            }

            // if first core in the ex is bad, switch to second core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                cindex++;
            }

            // send DB2 with msgid 0x3 to the first good core
            // to trigger Quad Manager to enable resonant clock again

            PK_TRACE_INF("DB2 MessageID 3(Rclk Entry Abort) sent to core %d", cindex);

#if NIMBUS_DD_LEVEL != 10

            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB2, cindex), BITS64(6, 2));

#else

            p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB2, cindex), BITS64(6, 2));

#endif

            // block handoff to cme until resonant clock enable is completed.
            G_sgpe_stop_record.group.quad[VECTOR_RCLKX] |= BIT32(qloop);

#endif

            // For IPC reporting, taking aborted quad out of the list
            G_sgpe_stop_record.group.quad[VECTOR_ENTRY] &= ~BIT32(qloop);
            continue;
        }

        PK_TRACE_INF("SE.11B: L3 Purged");

#endif

    }



    // loop for rest of quad stop
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // if this quad is not up to entry, skip
        if (!(G_sgpe_stop_record.group.quad[VECTOR_ENTRY] & BIT32(qloop)))
        {
            continue;
        }

        ex = G_sgpe_stop_record.group.expg[qloop];

        // ------------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ QUAD STOP ENTRY [LEVEL 11-15, CONTINUE] +++++ +++++");
        // ------------------------------------------------------------------------------

#if !SKIP_IPC

        // Upon entry into STOP 11, right before stopping the clocks to the cache chiplet
        // the SGPE must communicate to the PGPE to
        //   allow it to know which CME Quad Managers will no longer be active; and
        //   if WOF is enabled,
        //     to perform VRFT calculations to take advantage of the core/cache power.
        // If Pstates are disabled, SGPE does nothing.
        // If Pstates are enabled, the SGPE:
        //   1. sends Suspend Pstates IPC to PGPE and waits for the response IPC .
        //      PGPE completes any current Pstate operations and responses to the Suspend Pstates IPC.
        //   2. stops the clocks (and optionally finishes the entry)
        //   3. sends Update Active Quads IPC to PGPE and waits for the response IPC.
        //      PGPE, as a side effect of processing the Update Active Quads IPC,
        //            will resume Pstate protocol operations.
        //   4. optionally finishes the entry (if not done above)

        if ((!ipc_quad_entry) &&
            (in32(OCB_OCCS2) & BIT32(PGPE_ACTIVE)) &&
            G_sgpe_stop_record.wof.update_pgpe != IPC_SGPE_PGPE_UPDATE_PGPE_HALTED &&
            G_sgpe_stop_record.group.quad[VECTOR_ENTRY]) // entry into STOP11
        {
            //============================
            MARK_TRAP(SE_PGPE_QUAD_NOTIFY)
            //============================

            p9_sgpe_ipc_pgpe_update_active_quads(UPDATE_ACTIVE_QUADS_TYPE_ENTRY,
                                                 UPDATE_ACTIVE_QUADS_ENTRY_TYPE_NOTIFY);

            //===============================================
            MARK_TAG(SE_WAIT_PGPE_QUAD_NOTIFY, (32 >> qloop))
            //===============================================

            p9_sgpe_ipc_pgpe_update_active_quads_poll_ack(UPDATE_ACTIVE_QUADS_TYPE_ENTRY);
            ipc_quad_entry = 1;
        }

#endif

        //==================================
        MARK_TAG(SE_PURGE_PB, (32 >> qloop))
        //==================================

        PK_TRACE("Acquire cache PCB slave atomic lock");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), BITS64(0, 5));
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), scom_data.value);

        if ((scom_data.words.upper & BITS32(0, 5)) != 0xC0000000)
        {
            PK_TRACE_ERR("ERROR: Failed to Obtain Cache %d PCB Slave Atomic Lock. Register Content: %x",
                         qloop, scom_data.words.upper);
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_ENTRY_GET_SLV_LOCK_FAILED);
            continue;
        }

        // Stopping CME first in case CME initiates Powerbus Traffic

        if (ex & FST_EX_IN_QUAD)
        {
            PK_TRACE("Halting CME0");
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIXCR, qloop, 0), BIT64(3));
        }

        if (ex & SND_EX_IN_QUAD)
        {
            PK_TRACE("Halting CME1");
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIXCR, qloop, 1), BIT64(3));
        }

        if (ex & FST_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIRAMDBG, qloop, 0),
                            scom_data.value);
            }
            while(!(scom_data.words.upper & BIT32(0)));

            PK_TRACE("CME0 Halted");
        }

        if (ex & SND_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIRAMDBG, qloop, 1),
                            scom_data.value);
            }
            while(!(scom_data.words.upper & BIT32(0)));

            PK_TRACE("CME1 Halted");
        }

        PK_TRACE_DBG("CME Halted");

        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACCR, qloop), scom_data.value);

        if (scom_data.words.upper)
        {
            // Stop11 needs resclk to be off, otherwise exit will fail
            PK_TRACE_INF("ERROR: Q[%d]ACCR[%x] is not clean after CMEs are halted",
                         qloop, scom_data.words.upper);
            PK_PANIC(SGPE_STOP_ENTRY_STOP11_RESCLK_ON);
        }

        //Set Quad GPMMR RESET_STATE_INDICATOR bit to indicate CME is offline
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_OR, qloop), BIT64(15));

        PK_TRACE("Assert powerbus purge via QCCR[30]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, qloop), BIT64(30));

        PK_TRACE("Poll PowerBus purge done via QCCR[31]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR, qloop), scom_data.value);
        }
        while(!(scom_data.words.upper & BIT32(31)));

        PK_TRACE("Drop powerbus purge via QCCR[30]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop), BIT64(30));

        PK_TRACE_INF("SE.11C: PowerBus Purged");

        //======================================
        MARK_TAG(SE_QUIESCE_QUAD, (32 >> qloop))
        //======================================

        PK_TRACE("Assert refresh quiesce prior to L3 (refresh domain) stop clk via EX_DRAM_REF_REG[7]");

        // Assert refresh quiesce prior to L3 (refresh domain) stop clk
        // Edram quiesce is asserted by hardware when l3 thold is asserted in cc
        if (ex & FST_EX_IN_QUAD)
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 0), scom_data.value);
            scom_data.words.upper |= BIT32(7);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 0), scom_data.value);
        }

        if (ex & SND_EX_IN_QUAD)
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 1), scom_data.value);
            scom_data.words.upper |= BIT32(7);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, qloop, 1), scom_data.value);
        }

        PK_TRACE("Check NCU_STATUS_REG[0:3] for all zeros");
        // HW407207 - can only check bit 0:2

        if (ex & FST_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_NCU_STATUS_REG, qloop, 0),
                            scom_data.value);
                PK_TRACE("Polling NCU_STATUS_REG 0");
            }
            while(((~(scom_data.words.upper)) & BITS32(0, 3)) != BITS32(0, 3));
        }

        if (ex & SND_EX_IN_QUAD)
        {
            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_NCU_STATUS_REG, qloop, 1),
                            scom_data.value);
                PK_TRACE("Polling NCU_STATUS_REG 1");
            }
            while(((~(scom_data.words.upper)) & BITS32(0, 3)) != BITS32(0, 3));
        }

        PK_TRACE_DBG("NCU Status Clean");

        // PGPE may have already cleared bit26: DPLL_ENABLE if booted,
        // but SGPE can always do it in case PGPE isnt booted
        PK_TRACE("Drop CME_INTERPPM_IVRM/ACLK/VDATA_ENABLE via QPMMR[20,22,24]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, qloop), (BIT64(20) | BIT64(22) | BIT64(24) | BIT64(26)));

        if(pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_VDM_ENABLE_BIT_POS)
        {
            PK_TRACE("Clear Jump Protect Enable (no need to poll DPLL_STAT");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_CLEAR, qloop), BIT64(1));

            PK_TRACE("Write QPPM VDMCR to set Disable and clear Poweron");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_VDMCR, qloop), BIT64(1));

            PK_TRACE("Clear QPPM VDMCFGR");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_VDMCFGR, qloop), 0);
        }

        //===========================
        MARK_TRAP(SE_STOP_CACHE_CLKS)
        //===========================

        PK_TRACE("Assert cache chiplet fence via NET_CTRL0[18]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(18));

        PK_TRACE("Switch glsmux to refclk to save clock grid power via CGCR[3]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, qloop), 0);

        PK_TRACE("Clear SCAN_REGION prior to stop cache clocks");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, qloop), 0);

        PK_TRACE("Stop cache clocks via CLK_REGION");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, qloop),
                    (CLK_STOP_CMD | CLK_THOLD_ALL | CLK_REGION_ALL));

        PK_TRACE("Poll for cache clocks stopped via CPLT_STAT0[8]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, qloop), scom_data.value);
        }
        while(!(scom_data.words.upper & BIT32(8)));

        PK_TRACE("Check cache clock is stopped via CLOCK_STAT_SL[4-13]");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, qloop), scom_data.value);

        if (((~scom_data.value) & CLK_REGION_ALL) != 0)
        {
            PK_TRACE_ERR("ERROR: Cache clock stop failed. HALT SGPE!");
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_ENTRY_EQ_STOPCLK_FAILED);
            continue;
        }

        PK_TRACE("Assert vital fence via CPLT_CTRL1[3]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, qloop), BIT64(3));

        PK_TRACE("Assert partial good regional fences via CPLT_CTRL1[4-14]");
        // Must cover partial bad fences as well or powerbus error will raise
        // Note: Stop11 will lose all the fences so here needs to assert them
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_OR, qloop), CLK_REGION_ALL);


        PK_TRACE_INF("SE.11D: Cache Clock Stopped");

        PK_TRACE("Gate the PCBMux request so scanning doesn't cause random requests");

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            cindex = (qloop << 2) + cloop;

            // only loop over configured cores
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                continue;
            }

            GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG, cindex), scom_data.value);
            scom_data.words.upper |= BITS32(6, 2);
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG, cindex), scom_data.value);
        }

        //=========================================
        MARK_TAG(SE_POWER_OFF_CACHE, (32 >> qloop))
        //=========================================

#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX

        PK_TRACE_DBG("PBRW: Engage with PBIE Read/Write Pointer Scan Workaround");

        // bit4,5,11 = perv/eqpb/pbieq, bit59 = inex
        PK_TRACE("PBRW: Setup scan register to select the ring");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), BITS64(4, 2) | BIT64(11) | BIT64(59));

        PK_TRACE("PBRW: checkword set");
        scom_data.value = 0xa5a5a5a5a5a5a5a5;
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);

        for(spin = 1;; spin++)
        {
            PK_TRACE("PBRW: spin ring loop%d", spin);
            scom_data.words.upper = (G_ring_spin[spin][0] - G_ring_spin[spin - 1][0]);
            scom_data.words.lower = 0;
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10039000, qloop), scom_data.value);

            PK_TRACE("PBRW: Poll OPCG done for ring spin");

            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10000100, qloop), scom_data.value);
            }
            while(!(scom_data.words.upper & BIT32(8)));

            if (spin == 9)
            {
                PK_TRACE("PBRW: checkword check");
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);

                if (scom_data.value != 0xa5a5a5a5a5a5a5a5)
                {
                    PK_TRACE_ERR("ERROR: Checkword[%x%x] Failed. HALT SGPE!",
                                 scom_data.words.upper, scom_data.words.lower);
                    PK_PANIC(SGPE_STOP_ENTRY_PBRW_SCAN_HEADER_ERR);
                }

                break;
            }

            PK_TRACE("PBRW: save pbie read ptr");
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);
            EXTRACT_RING_BITS(G_ring_spin[spin][1], scom_data.value,
                              G_ring_save->element[qloop][spin - 1]);
            PK_TRACE("PBRW: mask: %8x %8x",
                     UPPER32(G_ring_spin[spin][1]),
                     LOWER32(G_ring_spin[spin][1]));
            PK_TRACE("PBRW: ring: %8x %8x",
                     scom_data.words.upper,
                     scom_data.words.lower);
            PK_TRACE("PBRW: save: %8x %8x",
                     UPPER32(G_ring_save->element[qloop][spin - 1]),
                     LOWER32(G_ring_save->element[qloop][spin - 1]));
        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), 0);

#endif

        PK_TRACE("Assert PCB fence via NET_CTRL0[25]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(25));

        PK_TRACE("Assert electrical fence via NET_CTRL0[26]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(26));

        PK_TRACE("Drop sram_enable via NET_CTRL0[23]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, qloop), ~BIT64(23));

        PK_TRACE("Assert vital thold via NET_CTRL0[16]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, qloop), BIT64(16));

        PK_TRACE("Shutdown L3 EDRAM via QCCR[0-3/4-7]");

        // QCCR[0/4] EDRAM_ENABLE_DC
        // QCCR[1/5] EDRAM_VWL_ENABLE_DC
        // QCCR[2/6] L3_EX0/1_EDRAM_VROW_VBLH_ENABLE_DC
        // QCCR[3/7] EDRAM_VPP_ENABLE_DC
        for (ex_mask = 2; ex_mask; ex_mask--)
        {
            if (ex & ex_mask)
            {
                bitloc = (ex_mask & 1) << 2;

                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                            BIT64((bitloc + 3)));
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                            BIT64((bitloc + 2)));
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                            BIT64((bitloc + 1)));
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WCLEAR, qloop),
                            BIT64(bitloc));
            }
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

        PK_TRACE("Poll for vcs_pfets_disabled_sense via PFSNS[3]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFSNS, qloop), scom_data.value);
        }
        while(!(scom_data.words.upper & BIT32(3)));

        PK_TRACE("Power off VDD via PFCS[0-1]");
        // vdd_pfet_force_state = 01 (Force Voff)
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, qloop), BIT64(1));

        PK_TRACE("Poll for vdd_pfets_disabled_sense via PFSNS[1]");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFSNS, qloop), scom_data.value);
        }
        while(!(scom_data.words.upper & BIT32(1)));

        PK_TRACE("Turn off force voff via PFCS[0-3]");
        // vdd_pfet_force_state = 00 (Nop)
        // vcs_pfet_force_state = 00 (Nop)
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, qloop), BITS64(0, 4));

        PK_TRACE_INF("SE.11E: Cache Powered Off");

#endif

        PK_TRACE("Release cache PCB slave atomic lock");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), 0);
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), scom_data.value);

        if (scom_data.words.upper & BIT32(0))
        {
            PK_TRACE_ERR("ERROR: Failed to Release Cache %d PCB Slave Atomic Lock. Register Content: %x",
                         qloop, scom_data.words.upper);
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_ENTRY_DROP_SLV_LOCK_FAILED);
            continue;
        }

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            cindex = (qloop << 2) + cloop;

            // Check partial good core
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                continue;
            }

            PK_TRACE("Update STOP history on core[%d]: in stop level 11", cindex);
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_ACT_LV11_COMPLETE ;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
        }

        PK_TRACE("Update STOP history on quad[%d]: in stop level 11", qloop);
        scom_data.words.lower = 0;
        scom_data.words.upper = SSH_ACT_LV11_COMPLETE;
        GPE_PUTSCOM_VAR(PPM_SSHSRC, QUAD_ADDR_BASE, qloop, 0, scom_data.value);

        PK_TRACE("Update QSSR: quad_stopped");
        out32(OCB_QSSR_OR, BIT32(qloop + 14));

        PK_TRACE("Update QSSR: drop stop_entry_ongoing");
        out32(OCB_QSSR_CLR, BIT32(qloop + 20));

        G_sgpe_stop_record.state[qloop].act_state_q   = STOP_LEVEL_11;
        G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] &= ~BIT32(qloop);
        G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]  &= ~BIT32(qloop);

        //=====================================
        MARK_TAG(SE_STOP11_DONE, (32 >> qloop))
        //=====================================
    }

    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ END OF STOP ENTRY +++++ +++++");
    //--------------------------------------------------------------------------

#if !SKIP_IPC

    /// @todo RTC166577
    /// this block can be done as early as after stop cache clocks
    if ((in32(OCB_OCCS2) & BIT32(PGPE_ACTIVE)) &&
        G_sgpe_stop_record.wof.update_pgpe != IPC_SGPE_PGPE_UPDATE_PGPE_HALTED &&
        G_sgpe_stop_record.group.quad[VECTOR_ENTRY])
    {
        // Note: if all quads aborted on l3 purge, the quad list will be 0s;

        p9_sgpe_ipc_pgpe_update_active_quads(UPDATE_ACTIVE_QUADS_TYPE_ENTRY,
                                             UPDATE_ACTIVE_QUADS_ENTRY_TYPE_DONE);

        // pgpe should ack right away
        p9_sgpe_ipc_pgpe_update_active_quads_poll_ack(UPDATE_ACTIVE_QUADS_TYPE_ENTRY);
    }

#endif

    //============================
    MARK_TRAP(ENDSCOPE_STOP_ENTRY)
    //============================

    return;
}
