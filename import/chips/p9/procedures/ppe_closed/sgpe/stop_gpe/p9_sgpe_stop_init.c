/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_init.c $ */
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
#include "p9_sgpe_irq.h"
#include "p9_hcd_sgpe_boot_cme.h"

extern SgpeStopRecord G_sgpe_stop_record;

#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX

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

// 1KB from bottom of SGPE Image region in OCC SRAM
struct ring_save* G_ring_save = (struct ring_save*)0xFFF3FC00;

#endif



// assume ex partial good checked by the caller
// if going to boot cme of the ex and calling this function to prepare
void p9_sgpe_stop_cme_scominit(uint32_t quad, uint32_t cme, uint32_t cme_flags)
{
    uint32_t chtm_mask = 0;
    uint64_t chtm_size = 0;
    data64_t scom_data = {0};

    if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(quad))
    {
        cme_flags |= BIT32(CME_FLAGS_BLOCK_ENTRY_STOP11);
    }

    PK_TRACE("Setup CME Flags");
    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS,     quad, cme), ((uint64_t)cme_flags) << 32);

    PK_TRACE("Clear Scratch0/1 Registers");
    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0,    quad, cme), 0);
    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH1,    quad, cme), 0);

    PK_TRACE("Setup CME SRAM Scrub Engine via CSCR[1,47:59]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_CSCR_CLR,  quad, cme), BITS64(47, 13));
    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_CSCR_OR,   quad, cme), BIT64(1));

    PK_TRACE("Allow the CME to access the PCB Slave NET_CTRL registers");

    // check core partial good
    if (cme_flags & 0x2)
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG,
                                       ((quad << 2) + (cme << 1))),     scom_data.value);
        scom_data.words.upper &= ~BITS32(6, 2);
        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG,
                                       ((quad << 2) + (cme << 1))),     scom_data.value);
    }

    if (cme_flags & 0x1)
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG,
                                       ((quad << 2) + (cme << 1) + 1)), scom_data.value);
        scom_data.words.upper &= ~BITS32(6, 2);
        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG,
                                       ((quad << 2) + (cme << 1) + 1)), scom_data.value);
    }

    // enable cme trace array
    //
    // Trace configuration
    // CME_LCL_DBG
    // 0: LCL_EN_DBG
    // 4: LCL_EN_INTR_ADDR
    // 5: LCL_EN_TRACE_EXTRA
    // 6: LCL_EN_TRACE_STALL
    // 7: LCL_EN_WAIT_CYCLES
    // 8: LCL_EN_FULL_SPEED
    // inst: 3D20C000 | addis r9, 0, 0xC000 | R9 = 0xC0000000
    // inst: 3C208F80 | addis r1, 0, 0x8F80 | R1 = 0x8F800000
    // HTM mode, if enabled, forces only 64 bits of data
    // inst: 38210300 | addi  r1, r1, 0x300 | R1 = 0x8F800300
    // inst: 90290120 | stw   r1, 0x120(r9) | 0xC0000120 = R1
    //
    // This configures L3 Trace array to receive CME data
    // 1. The trace array has to be stopped to configure it
    // 2. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRCTRL_CONFIG
    //    bit0: store_trig_mode_lt = 1
    //    bit 11 enh_trace_mode = 1
    //    bit 14:15 = trace_select_lt = 10 for CME0
    // 3. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_0
    //    Set trace data compare mask to 0  (0:63)
    // 4. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_1
    //    Set trace data compare mask to 0  (64:87)
    // 5. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_4
    //    Clear MSKa, MSKb
    // 6. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_5
    //    Clear MSKc, MSKd
    // 7. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_9
    //     bit 0 = disable compression:
    //     bit 1 = error_bit_compresion_care_mask
    //             (default is zero so should be enabled)
    //     32  msk_err_q                <= error_mode_lt(0);
    //     33  pat_err_q                <= error_mode_lt(1);
    //     34  trig0_err_msk            <= error_mode_lt(2);
    //     35  trig1_err_msk            <= error_mode_lt(3);
    //     match_err                    <= (msk_err_q or not pat_err_q)
    //                                     xor error_stage_lt(0);
    //     mask = 0 and pattern = 1 and may be trigger 0

    sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

    if (pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_ENABLE_CME_TRACE_ARRAY_BIT_POS)
    {
        // Stop the trace to configure it
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(DEBUG_TRACE_CONTROL, quad), BIT64(1));

        PK_TRACE("Configure and Enable L3 Trace Array to receive CME data");

        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(CME_SCOM_XIRAMEDR, quad, cme), 0x3D20C00000000000);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(CME_SCOM_XIRAMEDR, quad, cme), 0x3C20888000000000);

        if (pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_ENABLE_CHTM_TRACE_CME_BIT_POS)
        {
            PK_TRACE("Puttng PPE in 64 bit data mode before enable CHTM");
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIRAMEDR, quad, cme), 0x3821030000000000);
        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(CME_SCOM_XIRAMEDR, quad, cme), 0x9029012000000000);

        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                        (L3TRA_TRACE_TRCTRL_CONFIG   | (cme << 7)), quad), (BIT64(0) | BIT64(11) | BIT64(14)));
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                        (L3TRA_TRACE_TRDATA_CONFIG_0 | (cme << 7)), quad), 0);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                        (L3TRA_TRACE_TRDATA_CONFIG_1 | (cme << 7)), quad), 0);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                        (L3TRA_TRACE_TRDATA_CONFIG_4 | (cme << 7)), quad), 0);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                        (L3TRA_TRACE_TRDATA_CONFIG_5 | (cme << 7)), quad), 0);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                        (L3TRA_TRACE_TRDATA_CONFIG_9 | (cme << 7)), quad), BITS64(33, 2));

        // Start the trace
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(DEBUG_TRACE_CONTROL, quad), BIT64(0));
    }

    // Enable CHTM
    //
    // This configures CHTM to receive CME data
    // Set up HTM_MODE: [0] = start, [1:2] = 0b10 PPE Trace
    // Set up HTM_CTRL
    // Clear memory allocated in HTM_MEM
    // Allocate memory in HTM_MEM
    //   allow the user to have full control over size and starting address
    // Reset triggers
    // Start triggers

    if (pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_ENABLE_CHTM_TRACE_CME_BIT_POS)
    {
        PK_TRACE("Configure and Enable CHTM to receive CME data");

        chtm_mask = (uint32_t)pSgpeImgHdr->g_sgpe_chtm_mem_cfg;
        chtm_mask = chtm_mask & BITS64SH(40, 9) >> SHIFT64SH(48);

        //bit[5] size_small = 1, mask base[31:39,9] with size[40:48,9]
        if (pSgpeImgHdr->g_sgpe_chtm_mem_cfg & BIT64(5))
        {
            chtm_size = BIT64(39); // Base of 16M;
        }
        //bit[5] size_small = 0, mask base[26:34,9] with size[40:48,9]
        else
        {
            chtm_size = BIT64(34); // Base of 512M
        }

        // Note: it isn't 100% because it only uses the # of bits in the mask,
        //       but it isn't valid to configure the mask other ways
        while (chtm_mask != 0)
        {
            chtm_size = chtm_size << 1;
            chtm_mask = chtm_mask >> 1;
        }

        scom_data.value = BIT64(0) +
                          pSgpeImgHdr->g_sgpe_chtm_mem_cfg +
                          chtm_size * ((quad << 1) + cme);

        // CME Trace is routed through CHTM1
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX((EX_CHTM1_MODE_REG), quad, cme), 0xC00F000000000000);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX((EX_CHTM1_CTRL_REG), quad, cme), 0x7404000000000000);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX((EX_CHTM1_MEM_REG),  quad, cme), 0);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX((EX_CHTM1_MEM_REG),  quad, cme), scom_data.value);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX((EX_CHTM1_TRIG_REG), quad, cme), BIT64(4));
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX((EX_CHTM1_TRIG_REG), quad, cme), BIT64(0));
    }
}

void
p9_sgpe_stop_init()
{
    uint32_t          qloop      = 0;
    uint32_t          cloop      = 0;
    uint32_t          cindex     = 0;
#if !SKIP_CME_BOOT_IPL_HB
    uint32_t          xloop      = 0;
    uint32_t          cmask      = 0;
    uint32_t          xmask      = 0;
    uint32_t          xshift     = 0;
    sgpeHeader_t*     pSgpeImgHdr = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);
#endif
    uint32_t          m_1c       = 0;
    uint32_t          m_2c       = 0;
    uint32_t          m_4c       = 0;
    uint32_t          m_1x       = 0;
    uint32_t          m_2x       = 0;
    uint32_t          m_qs       = 0;
    data64_t          scom_data  = {0};
    ocb_ccsr_t        ccsr       = {0};
    ocb_qcsr_t        qcsr       = {0};
    ocb_qssr_t        qssr       = {0};

    //--------------------------------------------------------------------------
    // Basic Software Settings
    //--------------------------------------------------------------------------

    // Clear SPRG0
    ppe42_app_ctx_set(0);

    // Create a semaphore, updated by a single interrupt handler that services
    // two STOP threads. Thus, max sem count set to two.
    pk_semaphore_create(&(G_sgpe_stop_record.sem[0]), 0, 2);
    pk_semaphore_create(&(G_sgpe_stop_record.sem[1]), 0, 2);

    //--------------------------------------------------------------------------
    // Parse Partial Good Info and Initialize Global Structure
    //--------------------------------------------------------------------------

    // read partial good cores
    do
    {
        ccsr.value = in32(OCB_CCSR);
    }
    while (ccsr.fields.change_in_progress);

    // read partial good exes
    do
    {
        qcsr.value = in32(OCB_QCSR);
    }
    while (qcsr.fields.change_in_progress);

    // read initial stop states
    qssr.value = in32(OCB_QSSR);

    PK_TRACE_DBG("Setup: CCSR[%x] QCSR[%x] QSSR[%x]",
                 ccsr.value, qcsr.value, qssr.value);

    // initialize partial bad core/ex/quad stop level to 15,
    // set stopped ex/quad to ex/quad stop levels
    G_sgpe_stop_record.wof.status_stop           = 0;
    G_sgpe_stop_record.wof.update_pgpe           = 0;

    G_sgpe_stop_record.group.expg[0]             = 0;
    G_sgpe_stop_record.group.expg[1]             = 0;
    G_sgpe_stop_record.group.expg[2]             = 0;
    G_sgpe_stop_record.group.expg[3]             = 0;
    G_sgpe_stop_record.group.expg[4]             = 0;
    G_sgpe_stop_record.group.expg[5]             = 0;

    G_sgpe_stop_record.group.quad[VECTOR_CONFIG] = 0;
    G_sgpe_stop_record.group.core[VECTOR_CONFIG] = 0;

    G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE] = 0;
    G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] = 0;
    G_sgpe_stop_record.group.core[VECTOR_ACTIVE] = 0;

    G_sgpe_stop_record.group.core[VECTOR_PCWU]   = 0;

    for(qloop = 0, m_1c = BIT32(0), m_2c = BITS32(0, 2), m_4c = BITS32(0, 4),
        m_1x = BIT32(0), m_2x = BITS32(0, 2), m_qs = BIT32(14);
        qloop < MAX_QUADS;
        qloop++, m_4c = m_4c >> 4, m_2x = m_2x >> 2, m_qs = m_qs >> 1)
    {
        G_sgpe_stop_record.state[qloop].cme_flags = 0;

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++, m_1c = m_1c >> 1)
        {
            G_sgpe_stop_record.level[qloop][cloop] = STOP_LEVEL_15;

            if(ccsr.value & m_1c)
            {
                PK_TRACE_DBG("core[%d][%d] is configured", qloop, cloop);
                G_sgpe_stop_record.group.core[VECTOR_CONFIG] |= m_1c;
                G_sgpe_stop_record.state[qloop].cme_flags |= (0x8 >> cloop);
                cindex = (qloop << 2) + cloop;

                // set USE_PECE and default to pig type3 for configured core
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_OR, cindex), (BIT64(10) | BIT64(14)));
                GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0,   cindex), scom_data.value);

                if (!(scom_data.words.upper & BIT32(18)))
                {
                    // core is active
                    PK_TRACE_DBG("core[%d][%d] is entry first", qloop, cloop);
                    G_sgpe_stop_record.group.core[VECTOR_ACTIVE] |= m_1c;
                    G_sgpe_stop_record.state[qloop].cme_flags |= (0x80 >> cloop);
                    G_sgpe_stop_record.level[qloop][cloop] = STOP_LEVEL_0;

                }
            }
        }

        // 2 cores bad = 1 ex bad
        if((!(ccsr.value & m_2c)) && (!(qcsr.value & m_1x)))
        {
            PK_TRACE_DBG("q[%d]ex0 is partial bad", qloop, cloop);
            G_sgpe_stop_record.state[qloop].req_state_x0 = STOP_LEVEL_15;
            G_sgpe_stop_record.state[qloop].act_state_x0 = STOP_LEVEL_15;
        }
        // 1 or 2 cores good = 1 ex good
        else if ((ccsr.value & m_2c) && (qcsr.value & m_1x))
        {
            PK_TRACE_DBG("q[%d]ex0 is configured", qloop, cloop);
            G_sgpe_stop_record.state[qloop].req_state_x0 = STOP_LEVEL_0;
            G_sgpe_stop_record.state[qloop].act_state_x0 = STOP_LEVEL_0;
            G_sgpe_stop_record.group.expg[qloop] |= FST_EX_IN_QUAD;

            if (qssr.value & m_1x)
            {
                PK_TRACE_DBG("q[%d]ex0 is stopped", qloop, cloop);
                G_sgpe_stop_record.state[qloop].req_state_x0 = STOP_LEVEL_8;
                G_sgpe_stop_record.state[qloop].act_state_x0 = STOP_LEVEL_8;
            }
        }
        else
        {
            PK_TRACE_ERR("ERROR: Q[%d]EX0 Partial Good Config Check Failed. HALT SGPE!",
                         qloop);
            PK_PANIC(SGPE_CFG_EX0_PARTIAL_ERROR);
        }

        m_2c = m_2c >> 2;
        m_1x = m_1x >> 1;

        // 2 cores bad = 1 ex bad
        if((!(ccsr.value & m_2c)) && (!(qcsr.value & m_1x)))
        {
            PK_TRACE_DBG("q[%d]ex1 is partial bad", qloop, cloop);
            G_sgpe_stop_record.state[qloop].req_state_x1 = STOP_LEVEL_15;
            G_sgpe_stop_record.state[qloop].act_state_x1 = STOP_LEVEL_15;
        }
        // 1 or 2 cores good = 1 ex good
        else if((ccsr.value & m_2c) && (qcsr.value & m_1x))
        {
            PK_TRACE_DBG("q[%d]ex1 is configured", qloop, cloop);
            G_sgpe_stop_record.state[qloop].req_state_x1 = STOP_LEVEL_0;
            G_sgpe_stop_record.state[qloop].act_state_x1 = STOP_LEVEL_0;
            G_sgpe_stop_record.group.expg[qloop] |= SND_EX_IN_QUAD;

            if (qssr.value & m_1x)
            {
                PK_TRACE_DBG("q[%d]ex1 is stopped", qloop, cloop);
                G_sgpe_stop_record.state[qloop].req_state_x1 = STOP_LEVEL_8;
                G_sgpe_stop_record.state[qloop].act_state_x1 = STOP_LEVEL_8;
            }
        }
        else
        {
            PK_TRACE_ERR("ERROR: Q[%d]EX1 Partial Good Config Check Failed. HALT SGPE!",
                         qloop);
            PK_PANIC(SGPE_CFG_EX1_PARTIAL_ERROR);
        }

        m_2c = m_2c >> 2;
        m_1x = m_1x >> 1;

        // 4 cores bad = 2 exes bad = 1 quad bad
        if((!(ccsr.value & m_4c)) && (!(qcsr.value & m_2x)))
        {
            PK_TRACE_DBG("q[%d] is partial bad", qloop, cloop);
            G_sgpe_stop_record.state[qloop].req_state_q = STOP_LEVEL_15;
            G_sgpe_stop_record.state[qloop].act_state_q = STOP_LEVEL_15;
        }
        // 1 core good = 1 ex good = 1 quad good
        else if((ccsr.value & m_4c) && (qcsr.value & m_2x))
        {
            PK_TRACE_DBG("q[%d] is configured", qloop, cloop);
            G_sgpe_stop_record.state[qloop].req_state_q = STOP_LEVEL_0;
            G_sgpe_stop_record.state[qloop].act_state_q = STOP_LEVEL_0;
            G_sgpe_stop_record.group.quad[VECTOR_CONFIG] |= BIT32(qloop);
            // clear gpmmr[reset_state_indicator] if partial good quad
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_CLR, qloop), BIT64(15));

            if (qssr.value & m_qs)
            {
                PK_TRACE_DBG("q[%d] is stopped", qloop, cloop);
                G_sgpe_stop_record.state[qloop].req_state_q = STOP_LEVEL_11;
                G_sgpe_stop_record.state[qloop].act_state_q = STOP_LEVEL_11;
            }
            else
            {
                // quad is not stopped but active
                G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] |= BIT32(qloop);
            }
        }
        else
        {
            PK_TRACE_ERR("ERROR: Q[%d] Partial Good Config Check Failed. HALT SGPE!",
                         qloop);
            PK_PANIC(SGPE_CFG_QUAD_PARTIAL_ERROR);
        }
    }

    PK_TRACE_DBG("Setup: Partial Good EX0[%x] EX1[%x] EX2[%x] EQ[%x]",
                 G_sgpe_stop_record.group.expg[0],
                 G_sgpe_stop_record.group.expg[1],
                 G_sgpe_stop_record.group.expg[2],
                 G_sgpe_stop_record.group.quad[VECTOR_CONFIG]);

    PK_TRACE_DBG("Setup: Partial Good EX3[%x] EX4[%x] EX5[%x] C[%x]",
                 G_sgpe_stop_record.group.expg[3],
                 G_sgpe_stop_record.group.expg[4],
                 G_sgpe_stop_record.group.expg[5],
                 G_sgpe_stop_record.group.core[VECTOR_CONFIG]);

    //--------------------------------------------------------------------------
    // Hostboot Mode Booting CME
    //--------------------------------------------------------------------------

#if !SKIP_CME_BOOT_IPL_HB

    uint32_t cme_flags   = 0;
    uint16_t cmeBootList = ((~qssr.value) >> 16) & 0xFFF0;

    PK_TRACE_INF("Setup: Prepare CME[%x] to be Booted", cmeBootList);

    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        for(xloop = 0, cmask = 0x8, xmask = 0xC0, xshift = 4;
            xloop < EXES_PER_QUAD;
            xloop++, xmask = xmask >> 2)
        {
            if (cmeBootList & BIT16(((qloop << 1) + xloop)))
            {
                cme_flags =  ((G_sgpe_stop_record.state[qloop].cme_flags & xmask) >> xshift);
                xshift = xshift - 2;
                cme_flags |= ((G_sgpe_stop_record.state[qloop].cme_flags & (xmask >> 4)) >> xshift);

                if (cmeBootList & BIT16(((qloop << 1) + (xloop ^ 1))))
                {
                    cme_flags |= BIT32(CME_FLAGS_SIBLING_FUNCTIONAL);
                }

                if (xloop)
                {
                    cme_flags |= BIT32(CME_FLAGS_EX_ID);

                    if(!(cme_flags & BIT32(CME_FLAGS_SIBLING_FUNCTIONAL)))
                    {
                        //EX1 is configured, but EX0 isn't
                        cme_flags  |= BIT32(CME_FLAGS_QMGR_MASTER);
                    }
                }
                else
                {
                    cme_flags |= BIT32(CME_FLAGS_QMGR_MASTER);
                }

                if ((in32(OCB_OCCS2) & BIT32(PGPE_ACTIVE)) && (in32(OCB_OCCS2) & BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE)))
                {
                    cme_flags  |= BIT32(CME_FLAGS_WAIT_ON_PSTATE_START);
                }

                PK_TRACE_DBG("CME%d%d_FLAGS :%x", qloop, xloop, cme_flags);
                p9_sgpe_stop_cme_scominit(qloop, xloop, cme_flags);

                // set 20, 22, 24 before booting CME
                // if PGPE is booted, it and CME will take care bit 26
                // if PGPE is not booted like in HB, then CME doesnt need bit 26
                // either way leave bit 26 in default 0 to open external access
                // also see extra handling at VDM enabled in p9_sgpe_stop_exit()
                scom_data.words.lower = 0;
                scom_data.words.upper = BIT32(20) | BIT32(22) | BIT32(24);

                if (pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_VDM_ENABLE_BIT_POS)
                {
                    // If VDM function is configured to be turned on,
                    // then CME will enable VDM at CME boot regardless if pstate is enabled,
                    // which needs DPLL control access as early as booting time,
                    // so done here before the boot
                    // otherwise, when pstate is enabled, PGPE will take care of this bit.
                    scom_data.words.upper |= BIT32(26);
                }

                // set 21, 23, 25, and 27 if EX0 is bad (first two cores in the quad are bad)
                if (!(G_sgpe_stop_record.state[qloop].cme_flags & 0xC))
                {
                    scom_data.words.upper |= BIT32(21) | BIT32(23) | BIT32(25) | BIT32(27);
                }

                PK_TRACE("Assert inter-ppm settings via QPMMR[22,24,26,EX0PB:21,23,25]");
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, qloop), scom_data.value);

                // cpmmr[wakeup_notify_select] hardware reset value is 1(wakeup sent to sgpe)
                // In this hostboot mode, the cme booted by hostboot should at least have
                // one core running, which is entry first, set wakeup to cme to service the entry
                // the core stopped should remain wakeup to sgpe for exit from sgpe first

                for(cloop = 0; cloop < CORES_PER_EX; cloop++, cmask = cmask >> 1)
                {
                    cindex = (qloop << 2) + (xloop << 1) + cloop;

                    // clear CME DBs before HB boot or PM_RESET boot using this code
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEMSG, cindex), 0);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, cindex), 0);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1, cindex), 0);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB2, cindex), 0);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB3, cindex), 0);

                    if ((G_sgpe_stop_record.state[qloop].cme_flags &  cmask) &&
                        (G_sgpe_stop_record.state[qloop].cme_flags & (cmask << 4)))
                    {
                        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_CLR, cindex), BIT64(13));
                    }
                }
            }
            else
            {
                xshift = xshift - 2;
                cmask  = cmask >> 2;
            }
        }
    }

    PK_TRACE_INF("Setup: Booting CME in Hostboot Mode");
    boot_cme( cmeBootList );

    PK_TRACE_INF("Setup: Remove Hostboot Istep4 Special Wakeup");

    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        for(xloop = 0, cmask = 0x88; xloop < EXES_PER_QUAD; xloop++)
        {
            if (cmeBootList & BIT16(((qloop << 1) + xloop)))
            {
                for(cloop = 0; cloop < CORES_PER_EX; cloop++, cmask = cmask >> 1)
                {
                    if (G_sgpe_stop_record.state[qloop].cme_flags & cmask)
                    {
                        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(PPM_SPWKUP_OTR,
                                                       ((qloop << 2) + (xloop << 1) + cloop)), 0);
                        // Clear the CPPM error register bits as we just violated
                        // the special wake-up protocol of dropping special
                        // wake-up without a done
                        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(PPM_ERROR,
                                                       ((qloop << 2) + (xloop << 1) + cloop)), BITS64(1, 2));
                    }
                }
            }
            else
            {
                cmask = cmask >> 2;
            }
        }
    }

#endif

    //--------------------------------------------------------------------------
    // Interrupt Setup
    //--------------------------------------------------------------------------

#if !SKIP_IPC

    ipc_init();
    ipc_enable();
    ipc_set_done_hook(*p9_sgpe_ipc_uih_done_hook);

#endif

    PK_TRACE("Configure and Enable Fit Timer");
    out32(GPE_GPE3TSEL, BIT32(4));
    ppe42_fit_setup((PkIrqHandler)p9_sgpe_fit_handler, 0);

    PK_TRACE("Clear OCC LFIR[gpe3_halted] and OISR[gpe3_error and xstop] bits upon SGPE boot");
    GPE_PUTSCOM(OCB_OCCLFIR_AND, ~BIT64(25));
    out32(OCB_OISR0_CLR, (BIT32(8) | BIT32(16)));
    out32(OCB_OIMR0_CLR, (BIT32(8) | BIT32(16)));

    PK_TRACE_INF("Setup: Clear and Unmask Type 2,3,5,6 and ipi_lo_3 interrupts");
    out32(OCB_OISR1_CLR, (BITS32(15, 2) | BITS32(18, 2) | BIT32(29)));
    out32(OCB_OPITNPRA_CLR(2), BITS32(0, 24));
    out32(OCB_OPITNPRA_CLR(3), BITS32(0, 24));
    out32(OCB_OPITNPRA_CLR(5), BITS32(0, 24));
    out32(OCB_OPIT6PRB_CLR,    BITS32(0, 6));
    out32(OCB_OIMR1_CLR, (BITS32(15, 2) | BITS32(18, 2) | BIT32(29)));

    //--------------------------------------------------------------------------
    // SGPE Init Completed
    //--------------------------------------------------------------------------

    PK_TRACE_INF("Setup: SGPE STOP READY");
    out32(OCB_OCCFLG_OR, BIT32(SGPE_ACTIVE));

#if EPM_P9_TUNING
    asm volatile ("tw 0, 31, 0");
#endif

}
