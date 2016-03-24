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
    int          rc = 0;
    uint32_t     m_l2;
    uint32_t     m_l3;
    uint32_t     cloop;
    uint32_t     qloop;
    uint32_t     cexit;
    uint32_t     qspwu;
    int          cme;
    uint32_t     core;
    uint64_t     scom_data = 0;
    ppm_sshsrc_t hist;

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
        qloop = 0, m_l2 = 0, m_l3 = 0;
        cexit > 0 || qspwu > 0;
        cexit = cexit << 4, qspwu = qspwu << 1, qloop++, m_l2 = 0, m_l3 = 0)
    {
        m_l2 |= ((cexit & BITS32(0, 2)) ? FST_EX_IN_QUAD : 0);
        m_l2 |= ((cexit & BITS32(2, 2)) ? SND_EX_IN_QUAD : 0);

        if (qspwu & BIT32(0))
        {
            if (G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG] & BIT32(qloop))
            {
                m_l2 |= FST_EX_IN_QUAD;
            }

            if (G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG] & BIT32(qloop))
            {
                m_l2 |= SND_EX_IN_QUAD;
            }
        }

        if(!m_l2)
        {
            continue;
        }

        // Update QSSR: stop_exit_ongoing
        out32(OCB_QSSR_OR, BIT32(qloop + 26));

        if(G_sgpe_stop_record.state[qloop].act_state_q >= STOP_LEVEL_11)
        {
            SGPE_STOP_UPDATE_HISTORY(qloop,
                                     QUAD_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_EXIT,
                                     STOP_LEVEL_0,
                                     STOP_LEVEL_0,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_DISABLE);

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

            //=================================
            MARK_TAG(SX_POWERON, (32 >> qloop))
            //=================================

            PK_TRACE("Cache Poweron");
            p9_hcd_cache_poweron(qloop);

            //=========================
            MARK_TRAP(SX_CHIPLET_RESET)
            //=========================

            PK_TRACE("Cache Chiplet Reset");
            p9_hcd_cache_chiplet_reset(qloop);

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

            PK_TRACE("Cache Arrayinit");
            p9_hcd_cache_arrayinit(qloop);

            //=====================
            MARK_TRAP(SX_FUNC_INIT)
            //=====================

            PK_TRACE("Cache Initf");
            p9_hcd_cache_initf(qloop);
#endif

            if (G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG] & BIT32(qloop))
            {
                m_l3 |= FST_EX_IN_QUAD;
            }

            if (G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG] & BIT32(qloop))
            {
                m_l3 |= SND_EX_IN_QUAD;
            }

            //===========================================
            MARK_TAG(SX_CACHE_STARTCLOCKS, (32 >> qloop))
            //===========================================

            PK_TRACE("Cache Startclocks");
            p9_hcd_cache_startclocks(qloop, m_l3);

        }

        if((G_sgpe_stop_record.state[qloop].act_state_x0 >= STOP_LEVEL_8 &&
            m_l2 == FST_EX_IN_QUAD) ||
           (G_sgpe_stop_record.state[qloop].act_state_x1 >= STOP_LEVEL_8 &&
            m_l2 == SND_EX_IN_QUAD) )
        {
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

            //========================================================
            MARK_TAG(SX_L2_STARTCLOCKS, ((m_l2 << 6) | (32 >> qloop)))
            //========================================================

            PK_TRACE("Cache L2 Startclocks");
            p9_hcd_cache_l2_startclocks(qloop, m_l2);

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

        if(G_sgpe_stop_record.state[qloop].act_state_q >= STOP_LEVEL_11)
        {
            for(cme = 0; cme < EXES_PER_QUAD; cme += 2)
            {
                core = ((cexit & BITS32(cme, 2)) >> SHIFT32(cme + 1));

                if(!core)
                {
                    continue;
                }

                // Raise Core-L2 + Core-CC Quiesces
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_OR,
                                              qloop, (cme >> 1)),
                            ((core << SHIFT32(7)) | (core << SHIFT32(9))));

                do
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SISR,
                                                  qloop, (cme >> 1)), scom_data);
                }
                while((scom_data & core) != core);
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

#if !SKIP_CME_BOOT
            uint16_t cmeBootList = (m_l3 << SHIFT16(((qloop << 1) + 1)));
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
            /*do {
                GPE_GETSCOM(CME_SCOM_FLAGS, QUAD_ADDR_BASE|CME_ADDR_OFFSET_EX0,
                            ((qloop<<2)+cloop), scom_data);
            } while(!(scom_data & BIT64(0)));*/
            // TODO PUT THE FOLLOWING TWO BEFORE CME_BOOT()
            // Change PPM Wakeup to CME
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_CLR,
                                           ((qloop << 2) + cloop)), BIT64(13));
            PK_TRACE("Doorbell1 the CME %d", ((qloop << 2) + cloop));
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEMSG, ((qloop << 2) + cloop)),
                        (BIT64(0)));
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1_OR,
                                           ((qloop << 2) + cloop)), BIT64(7));
        }

        // Update QSSR: drop stop_exit_ongoing
        out32(OCB_QSSR_CLR, BIT32(qloop + 26));
    }

    // Enable Type2/3/6 Interrupt
    if (!G_sgpe_stop_record.group.core[VECTOR_ENTRY])
    {
        out32(OCB_OIMR1_CLR, (BITS32(15, 2) | BIT32(19)));
    }

    //===========================
    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    //===========================

    return SGPE_STOP_SUCCESS;
}
