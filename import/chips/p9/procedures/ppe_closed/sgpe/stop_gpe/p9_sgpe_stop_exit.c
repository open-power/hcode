/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_exit.c $ */
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

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"
#include "p9_hcd_sgpe_boot_cme.h"

extern SgpeStopRecord G_sgpe_stop_record;

int
p9_sgpe_stop_exit()
{
    uint32_t     m_l2;
    uint32_t     m_pg;
    uint32_t     cloop;
    uint32_t     qloop;
    uint32_t     cexit;
    uint32_t     qspwu;
    int          cme;
    uint32_t     core;
    uint64_t     scom_data = 0;
    uint64_t     cme_flags;
    ppm_sshsrc_t hist;
    ocb_ccsr_t   ccsr;

    //===============================
    MARK_TAG(BEGINSCOPE_STOP_EXIT, 0)
    //===============================

    PK_TRACE("Core Exit Vectors:    X[%x] X0[%x] X1[%x] Q[%x]",
             G_sgpe_stop_record.group.ex_b[VECTOR_EXIT],
             G_sgpe_stop_record.group.ex_l[VECTOR_EXIT],
             G_sgpe_stop_record.group.ex_r[VECTOR_EXIT],
             G_sgpe_stop_record.group.quad[VECTOR_EXIT]);

    for(cexit = G_sgpe_stop_record.group.core[VECTOR_EXIT],
        qspwu = G_sgpe_stop_record.group.qswu[VECTOR_EXIT],
        qloop = 0, m_l2 = 0, m_pg = 0;
        cexit > 0 || qspwu > 0;
        cexit = cexit << 4, qspwu = qspwu << 1, qloop++, m_l2 = 0, m_pg = 0)
    {

        if (!((cexit & BITS32(0, 4)) || (qspwu & BIT32(0))))
        {
            continue;
        }

        if (((cexit & BITS32(0, 2)) &&
             (G_sgpe_stop_record.state[qloop].act_state_x0 >= STOP_LEVEL_8)))
        {
            m_l2 |= FST_EX_IN_QUAD;
        }

        if (((cexit & BITS32(2, 2)) &&
             (G_sgpe_stop_record.state[qloop].act_state_x1 >= STOP_LEVEL_8)))
        {
            m_l2 |= SND_EX_IN_QUAD;
        }

        if (G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG] & BIT32(qloop))
        {
            m_pg |= FST_EX_IN_QUAD;

            if (qspwu & BIT32(0))
            {
                m_l2 |= FST_EX_IN_QUAD;
            }
        }

        if (G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG] & BIT32(qloop))
        {
            m_pg |= SND_EX_IN_QUAD;

            if (qspwu & BIT32(0))
            {
                m_l2 |= SND_EX_IN_QUAD;
            }
        }

        PK_TRACE("quad[%d]m_l2[%d]m_pg[%d]", qloop, m_l2, m_pg);

        if (G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG] & BIT32(qloop))
        {
            m_pg |= FST_EX_IN_QUAD;
        }

        if (G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG] & BIT32(qloop))
        {
            m_pg |= SND_EX_IN_QUAD;
        }

        PK_TRACE("quad[%d]m_l2[%d]m_pg[%d]", qloop, m_l2, m_pg);

        // Update QSSR: stop_exit_ongoing
        out32(OCB_QSSR_OR, BIT32(qloop + 26));

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            if(!(cexit & BIT32(cloop)))
            {
                continue;
            }

            SGPE_STOP_UPDATE_HISTORY(((qloop << 2) + cloop),
                                     CORE_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_EXIT,
                                     STOP_LEVEL_0,
                                     STOP_LEVEL_0,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_DISABLE);
        }

        if(m_l2 && G_sgpe_stop_record.state[qloop].act_state_q >= STOP_LEVEL_11)
        {
            SGPE_STOP_UPDATE_HISTORY(qloop,
                                     QUAD_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_EXIT,
                                     STOP_LEVEL_0,
                                     STOP_LEVEL_0,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_DISABLE);

            //=================================
            MARK_TAG(SX_POWERON, (32 >> qloop))
            //=================================

            PK_TRACE("Cache Poweron");
            p9_hcd_cache_poweron(qloop);

            //=========================
            MARK_TRAP(SX_CHIPLET_RESET)
            //=========================

            PK_TRACE("Cache Chiplet Reset m_pg[%d]", m_pg);
            p9_hcd_cache_chiplet_reset(qloop, m_pg);

#if !STOP_PRIME
            PK_TRACE("Cache Gptr Time Initf");
            p9_hcd_cache_gptr_time_initf(qloop);
#endif

            //====================================
            MARK_TAG(SX_DPLL_SETUP, (32 >> qloop))
            //====================================

            ///@todo dpll_initf

            PK_TRACE("Cache Dpll Setup");
            p9_hcd_cache_dpll_setup(qloop);

#if !STOP_PRIME
            //=======================================
            MARK_TAG(SX_CHIPLET_INITS, (32 >> qloop))
            //=======================================

            PK_TRACE("Cache Chiplet Init");
            p9_hcd_cache_chiplet_init(qloop);

            PK_TRACE("Cache Repair Initf");
            p9_hcd_cache_repair_initf(qloop);

            //====================================
            MARK_TAG(SX_ARRAY_INIT, (32 >> qloop))
            //====================================
#if !SKIP_ARRAYINIT
            PK_TRACE("Cache Arrayinit");

            p9_hcd_cache_arrayinit(qloop, m_pg);
#endif
            //=====================
            MARK_TRAP(SX_FUNC_INIT)
            //=====================

            PK_TRACE("Cache Initf");
            p9_hcd_cache_initf(qloop);
#if !ISTEP15_HACK
            asm volatile ("nop");
#else
            asm volatile ("tw 31, 0, 0");
#endif

#endif

            //===========================================
            MARK_TAG(SX_CACHE_STARTCLOCKS, (32 >> qloop))
            //===========================================

            PK_TRACE("Cache Startclocks m_pg[%d]", m_pg);
            p9_hcd_cache_startclocks(qloop, m_pg);

        }

        if (m_l2)
        {
            //========================================================
            MARK_TAG(SX_L2_STARTCLOCKS, ((m_l2 << 6) | (32 >> qloop)))
            //========================================================

            // do this again here for stop8 in addition to dpll_setup
            PK_TRACE("4S8: Switch L2 glsmux select to DPLL output");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, qloop), BITS64(34, 2));

            PK_TRACE("Cache L2 Startclocks");
            p9_hcd_cache_l2_startclocks(qloop, m_l2, m_pg);
#if !ISTEP15_HACK
            asm volatile ("nop");
#else
            asm volatile ("tw 31, 0, 0");
#endif

            // reset ex actual state if ex is exited.
            if (m_l2 & FST_EX_IN_QUAD)
            {
                G_sgpe_stop_record.state[qloop].act_state_x0 = 0;
            }

            if (m_l2 & SND_EX_IN_QUAD)
            {
                G_sgpe_stop_record.state[qloop].act_state_x1 = 0;
            }



            // Update QSSR: drop l2_stopped,
            out32(OCB_QSSR_CLR, (m_l2 << SHIFT32((qloop << 1) + 1)));
        }

        if(m_l2 && G_sgpe_stop_record.state[qloop].act_state_q >= STOP_LEVEL_11)
        {
            for(cme = 0; cme < EXES_PER_QUAD; cme += 2)
            {

                core = ((cexit & BITS32(cme, 2)) >> SHIFT32((cme + 1)));

                if(!core)
                {
                    continue;
                }

                // Raise Core-L2 + Core-CC Quiesces
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_OR,
                                              qloop, (cme >> 1)),
                            ((uint64_t)core << SHIFT64(7) |
                             (uint64_t)core << SHIFT64(9)));

                do
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SISR,
                                                  qloop, (cme >> 1)), scom_data);
                }
                while(((scom_data >> 32) & core) != core);
            }

#if !STOP_PRIME
            //====================================
            MARK_TAG(SX_SCOM_INITS, (32 >> qloop))
            //====================================

            PK_TRACE("Cache Scom Init");
            p9_hcd_cache_scominit(qloop);

            PK_TRACE("Cache Scom Cust");
            p9_hcd_cache_scomcust(qloop);

            //==================================
            MARK_TAG(SX_CME_BOOT, (32 >> qloop))
            //==================================

            // doorbell cme to let rebooted cme knows about ongoing stop11
            for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
            {
                if(!(cexit & BIT32(cloop)))
                {
                    continue;
                }

                PK_TRACE("Doorbell1 the CME %d", ((qloop << 2) + cloop));
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEMSG,
                                               ((qloop << 2) + cloop)), (BIT64(0)));
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1_OR,
                                               ((qloop << 2) + cloop)), BIT64(7));
            }

            // Setting up cme_flags
            do
            {
                ccsr.value = in32(OCB_CCSR);
            }
            while (ccsr.fields.change_in_progress);

            if (m_pg & FST_EX_IN_QUAD)
            {
                cme_flags = 0;

                if (ccsr.value & BIT32((qloop << 2)))
                {
                    cme_flags |= CME_CORE0_ENABLE;
                    GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0,
                                                   ((qloop << 2))),     scom_data);

                    if (!(scom_data & BIT64(18)))
                    {
                        cme_flags |= CME_CORE0_ENTRY_FIRST;
                    }
                }

                if (ccsr.value & BIT32((qloop << 2) + 1))
                {
                    cme_flags |= CME_CORE1_ENABLE;
                    GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0,
                                                   ((qloop << 2) + 1)), scom_data);

                    if (!(scom_data & BIT64(18)))
                    {
                        cme_flags |= CME_CORE1_ENTRY_FIRST;
                    }
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_OR, qloop, 0),
                            cme_flags);
            }

            if (m_pg & SND_EX_IN_QUAD)
            {
                cme_flags = CME_EX1_INDICATOR;

                if (ccsr.value & BIT32(((qloop << 2) + 2)))
                {
                    cme_flags |= CME_CORE0_ENABLE;
                    GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0,
                                                   ((qloop << 2) + 2)), scom_data);

                    if (!(scom_data & BIT64(18)))
                    {
                        cme_flags |= CME_CORE0_ENTRY_FIRST;
                    }
                }

                if (ccsr.value & BIT32(((qloop << 2) + 3)))
                {
                    cme_flags |= CME_CORE1_ENABLE;
                    GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0,
                                                   ((qloop << 2) + 3)), scom_data);

                    if (!(scom_data & BIT64(18)))
                    {
                        cme_flags |= CME_CORE1_ENTRY_FIRST;
                    }
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_OR, qloop, 1),
                            cme_flags);
            }

#if !SKIP_CME_BOOT_STOP11
            uint16_t cmeBootList = (m_pg << SHIFT16(((qloop << 1) + 1)));
            PK_TRACE("Boot CME [%x]", cmeBootList);
            boot_cme( cmeBootList );
#endif

            //=======================================
            MARK_TAG(SX_RUNTIME_INITS, (32 >> qloop))
            //=======================================

            PK_TRACE("Cache RAS Runtime Scom");
            p9_hcd_cache_ras_runtime_scom(qloop);

            PK_TRACE("Cache OCC Runtime Scom");
            p9_hcd_cache_occ_runtime_scom(qloop);

            //=========================
            MARK_TRAP(SX_ENABLE_ANALOG)
            //=========================
#endif
            G_sgpe_stop_record.state[qloop].act_state_q = 0;

            SGPE_STOP_UPDATE_HISTORY(qloop,
                                     QUAD_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_COMPLETE,
                                     STOP_LEVEL_0,
                                     STOP_LEVEL_0,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_DISABLE);

            // Update QSSR: drop quad_stopped
            out32(OCB_QSSR_CLR, BIT32(qloop + 26));
        }

        // assert quad special wakeup done
        if (qspwu & BIT32(0))
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_OR, qloop), BIT64(0));
        }

        // process core portion of core request
        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            if(!(cexit & BIT32(cloop)))
            {
                continue;
            }

            // reset clevel to 0 if core is going to wake up
            G_sgpe_stop_record.level[qloop][cloop] = 0;
            // Change PPM Wakeup to CME
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_CLR,
                                           ((qloop << 2) + cloop)), BIT64(13));
        }

        // Update QSSR: drop stop_exit_ongoing
        out32(OCB_QSSR_CLR, BIT32(qloop + 26));
    }

    //===========================
    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    //===========================

    return SGPE_STOP_SUCCESS;
}
