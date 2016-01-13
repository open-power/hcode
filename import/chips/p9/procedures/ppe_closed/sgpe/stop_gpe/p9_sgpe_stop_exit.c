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

extern SgpeStopRecord G_sgpe_stop_record;

int
p9_sgpe_stop_exit()
{
    int          rc;
    uint8_t      ex;
    uint8_t      cloop;
    uint8_t      qloop;
    uint32_t     cexit;
    //uint64_t     scom_data;
    ppm_sshsrc_t hist;

    MARK_TAG(BEGINSCOPE_STOP_EXIT, (G_sgpe_stop_record.group.member.q_out >> 10))

    for(cexit = G_sgpe_stop_record.group.member.c_out, qloop = 0, ex = 0;
        cexit > 0;
        cexit = cexit << 4, qloop++, ex = 0)
    {
        ex |= ((cexit & BITS32(0, 2)) ? FST_EX_IN_QUAD : 0);
        ex |= ((cexit & BITS32(2, 2)) ? SND_EX_IN_QUAD : 0);

        if(!ex)
        {
            continue;
        }

        if(G_sgpe_stop_record.state[qloop].detail.q_act >= STOP_LEVEL_11)
        {
            SGPE_STOP_UPDATE_HISTORY(qloop,
                                     QUAD_ADDR_BASE,
                                     STOP_CORE_IS_GATED,
                                     STOP_TRANS_EXIT,
                                     STOP_LEVEL_0,
                                     STOP_LEVEL_0,
                                     STOP_REQ_DISABLE,
                                     STOP_ACT_DISABLE);
            MARK_TRAP(SX_LV11_WAKEUP_START)

#if !STOP_PRIME
            PK_TRACE("Cache Poweron");
            p9_hcd_cache_poweron(qloop);
            MARK_TRAP(SX_POWERON_END)

            PK_TRACE("Cache Chiplet Reset");
            p9_hcd_cache_chiplet_reset(qloop);
            MARK_TRAP(SX_CHIPLET_RESET_END)

            PK_TRACE("Cache Gptr Time Initf");
            p9_hcd_cache_gptr_time_initf(qloop);
            MARK_TRAP(SX_GPTR_TIME_INITF_END)

            PK_TRACE("Cache Dpll Setup");
            p9_hcd_cache_dpll_setup(qloop);
            MARK_TRAP(SX_DPLL_SETUP_END)

            PK_TRACE("Cache Chiplet Init");
            p9_hcd_cache_chiplet_init(qloop);
            MARK_TRAP(SX_CHIPLET_INIT_END)

            PK_TRACE("Cache Repair Initf");
            p9_hcd_cache_repair_initf(qloop);
            MARK_TRAP(SX_REPAIR_INITF_END)

            PK_TRACE("Cache Arrayinit");
            p9_hcd_cache_arrayinit(qloop);
            MARK_TRAP(SX_ARRAYINIT_END)

            PK_TRACE("Cache Initf");
            p9_hcd_cache_initf(qloop);
            MARK_TRAP(SX_INITF_END)
#endif

            PK_TRACE("Cache Startclocks");
            p9_hcd_cache_startclocks(qloop);
            MARK_TRAP(SX_STARTCLOCKS_END)

            G_sgpe_stop_record.state[qloop].detail.q_act = 0;
        }

        if((G_sgpe_stop_record.state[qloop].detail.x0act >= STOP_LEVEL_8 &&
            ex == FST_EX_IN_QUAD) ||
           (G_sgpe_stop_record.state[qloop].detail.x1act >= STOP_LEVEL_8 &&
            ex == SND_EX_IN_QUAD) )
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

            MARK_TRAP(SX_LV8_WAKEUP_START)

            PK_TRACE("Cache L2 Startclocks");
            p9_hcd_cache_l2_startclocks(ex, qloop);
            MARK_TRAP(SX_L2_STARTCLOCKS_END)

            // reset ex actual state if ex is exited.
            if (ex & FST_EX_IN_QUAD)
            {
                G_sgpe_stop_record.state[qloop].detail.x0act = 0;
            }

            if (ex & SND_EX_IN_QUAD)
            {
                G_sgpe_stop_record.state[qloop].detail.x1act = 0;
            }
        }

        if(G_sgpe_stop_record.state[qloop].detail.q_act >= STOP_LEVEL_11)
        {
            MARK_TRAP(SX_LV11_WAKEUP_CONTINUE)

#if !STOP_PRIME
            PK_TRACE("Cache Scom Init");
            p9_hcd_cache_scominit(qloop);
            MARK_TRAP(SX_SCOMINIT_END)

            PK_TRACE("Cache Scom Cust");
            p9_hcd_cache_scomcust(qloop);
            MARK_TRAP(SX_SCOMCUST_END)

            PK_TRACE("Boot CME");
            //cme_boot();
            MARK_TRAP(SX_CME_BOOT_END)

            PK_TRACE("Cache RAS Runtime Scom");
            p9_hcd_cache_ras_runtime_scom(qloop);
            MARK_TRAP(SX_RAS_RUNTIME_SCOM_END)

            PK_TRACE("Cache OCC Runtime Scom");
            p9_hcd_cache_occ_runtime_scom(qloop);
            MARK_TRAP(SX_OCC_RUNTIME_SCOM_END)
#endif
        }

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            if(!(cexit & BIT32(cloop)))
            {
                continue;
            }

            // reset clevel to 0 if core is going to wake up
            G_sgpe_stop_record.level[qloop].qlevel &= ~BITS16((cloop << 2), 4);
            /*do {
                GPE_GETSCOM(CME_SCOM_FLAGS, QUAD_ADDR_BASE|CME_ADDR_OFFSET_EX0,
                            ((qloop<<2)+cloop), scom_data);
            } while(!(scom_data & BIT64(0)));*/
            // Change PPM Wakeup to CME
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_CLR, ((qloop << 2) + cloop)),
                        BIT64(13));
            PK_TRACE("Doorbell1 the CME");
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1_OR, ((qloop << 2) + cloop)),
                        BIT64(7));
        }
    }

    // Enable Type2 Interrupt
    out32(OCB_OIMR1_CLR, BIT32(15));

    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    return SGPE_STOP_SUCCESS;
}
