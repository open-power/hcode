/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_irq_handlers.c $ */
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

#include "p9_cme_stop.h"
#include "p9_cme_stop_enter_marks.h"
#include "p9_cme_irq.h"
#include "p9_cme_pstate.h"

extern CmeStopRecord   G_cme_stop_record;
extern CmePstateRecord G_cme_pstate_record;
extern CmeRecord       G_cme_record;

#if DISABLE_STOP8

    uint8_t G_ndd20_disable_stop8_abort_stop11_rclk_handshake_flag = 0;

#endif

void
p9_cme_stop_pcwu_handler(void)
{
    uint32_t  core_mask = 0;
    uint32_t  core      = (in32(CME_LCL_EISR) & BITS32(12, 2)) >> SHIFT32(13);
    data64_t  scom_data = {0};
    ppm_pig_t pig       = {0};

    MARK_TRAP(STOP_PCWU_HANDLER)
    PK_TRACE_INF("PCWU Handler Trigger: Core Interrupts %x", core);

    out32(CME_LCL_EISR_CLR, (G_cme_stop_record.core_running << SHIFT32(13)));
    g_eimr_override |= ((uint64_t)G_cme_stop_record.core_running << SHIFT64(13));
    core &= (~G_cme_stop_record.core_running);

    for (core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(CPPM_CPMMR, core_mask, scom_data.value);

            // If notify_select == sgpe
            if (scom_data.words.upper & BIT32(13))
            {
                // In stop5 as using type2, send exit pig
                if (!(scom_data.words.upper & BIT32(10)))
                {
                    pig.fields.req_intr_type    = PIG_TYPE2;
                    pig.fields.req_intr_payload = TYPE2_PAYLOAD_DECREMENTER_WAKEUP;
                    CME_PUTSCOM_NOP(PPM_PIG, core_mask, pig.value);
                }

                // block pc for stop8,11 or stop5 as pig sent
                // use 32 bit UPPER mask to prevent compiler from doing 64-bit shifting
                g_eimr_override |= ((uint64_t)(IRQ_VEC_PCWU_C0_UPPER >> (core_mask & 1))) << 32 | 0x00000000;
                G_cme_stop_record.core_blockpc |= core_mask;
                core = core - core_mask;
            }
        }
    }

    // if still wakeup for core with notify_select == cme, go exit
    if (core)
    {
        PK_TRACE_INF("PCWU Launching exit thread");

        out32(CME_LCL_EIMR_OR, BITS32(12, 10));
        wrteei(1);
        p9_cme_stop_exit();

        // re-evaluate stop entry & exit enables
        p9_cme_stop_eval_eimr_override();
    }
}



// When take an Interrupt on falling edge of SPWU from a CPPM.
// 1) Read EINR to check if another one has been set
//    in the meantime from the same core.  If so abort.
// 2) Clear Special Wakeup Done to that CPPM.
// 3) Read GPMMR[1] to see if any Special Wakeup has been sent to active
//    in the meantime.  If so, set Special Wakeup Done again and abort.
// 4) Otherwise flip polarity of Special Wakeup in EISR and clear PM_EXIT
//    (note for abort cases do not Do not flip polarity of Special Wakeup in EISR.)
void
p9_cme_stop_spwu_handler(void)
{
    int      spwu_rise   = 0;
    uint32_t core_mask  = 0;
    uint32_t core_index = 0;
    uint32_t raw_spwu   = (in32(CME_LCL_EISR) & BITS32(14, 2)) >> SHIFT32(15);
    uint64_t scom_data  = 0;

    MARK_TRAP(STOP_SPWU_HANDLER)
    PK_TRACE_INF("SPWU Handler Trigger: Core Interrupts %x SPWU States %x",
                 raw_spwu, G_cme_stop_record.core_in_spwu);

    for(core_mask = 2; core_mask; core_mask--)
    {
        if (raw_spwu & core_mask)
        {
            core_index = core_mask & 1;
            PK_TRACE("Detect SPWU signal level change on core%d", core_index);

            // if falling edge == spwu drop:
            if (G_cme_stop_record.core_in_spwu & core_mask)
            {
                PK_TRACE("Falling edge of spwu, first clearing EISR");
                out32(CME_LCL_EISR_CLR, BIT32((14 + core_index)));

                // if spwu asserts again before we drop spwu_done, do nothing, else:
                if ((~(in32(CME_LCL_EINR))) & BIT32((14 + core_index)))
                {
                    PK_TRACE("SPWU drop confirmed, now dropping spwu_done");
                    out32(CME_LCL_SICR_CLR, BIT32((16 + core_index)));

                    CME_GETSCOM(PPM_GPMMR, core_mask, scom_data);

                    // if spwu has been re-asserted after spwu_done is dropped:
                    if (scom_data & BIT64(1))
                    {
                        PK_TRACE("SPWU asserts again, re-asserting spwu_done");
                        out32(CME_LCL_SICR_OR, BIT32((16 + core_index)));
                    }
                    // if spwu truly dropped:
                    else
                    {
                        PK_TRACE("Flip EIPR to raising edge and drop pm_exit");
                        out32(CME_LCL_EIPR_OR,  BIT32((14 + core_index)));
                        out32(CME_LCL_SICR_CLR, BIT32((4  + core_index)));

                        // Core is now out of spwu, allow pm_active
                        G_cme_stop_record.core_in_spwu &= ~core_mask;

                        // if in block entry mode, do not release the mask
                        if (!(G_cme_stop_record.core_blockey & core_mask))
                        {
                            // use 32 bit UPPER mask to prevent compiler from doing 64-bit shifting
                            g_eimr_override &=  ((uint64_t)((~IRQ_VEC_STOP_C0_UPPER) >> core_index)) << 32 | 0xFFFFFFFF;
                        }
                    }
                }
            }
            // rising edge, do not clear EISR since thread will read and clear:
            else
            {
                PK_TRACE("Rising edge of spwu, clear EISR later in exit thread");
                spwu_rise = 1;
            }
        }
    }

    if (spwu_rise)
    {
        PK_TRACE_INF("SPWU Launching exit thread");

        out32(CME_LCL_EIMR_OR, BITS32(12, 10));
        wrteei(1);
        p9_cme_stop_exit();

        // re-evaluate stop entry & exit enables
        p9_cme_stop_eval_eimr_override();
    }
}



void
p9_cme_stop_rgwu_handler(void)
{
    MARK_TRAP(STOP_RGWU_HANDLER)
    PK_TRACE_INF("RGWU Handler Trigger");

    out32(CME_LCL_EIMR_OR, BITS32(12, 10));
    wrteei(1);
    p9_cme_stop_exit();

    // re-evaluate stop entry & exit enables
    p9_cme_stop_eval_eimr_override();
}



void
p9_cme_stop_enter_handler(void)
{
    MARK_TRAP(STOP_ENTER_HANDLER)
    PK_TRACE_INF("PM_ACTIVE Handler Trigger");

    out32(CME_LCL_EIMR_OR, BITS32(12, 10));
    wrteei(1);

    // The actual entry sequence
    p9_cme_stop_entry();

    // re-evaluate stop entry & exit enables
    p9_cme_stop_eval_eimr_override();
}



void
p9_cme_stop_db2_handler(void)
{
    cppm_cmedb2_t    db2 = {0};
    ppm_pig_t        pig = {0};
    uint32_t         core = (in32(CME_LCL_EISR) & BITS32(18, 2)) >> SHIFT32(19);
    uint32_t         core_mask;

    MARK_TRAP(STOP_DB2_HANDLER)
    PK_TRACE_INF("DB2 Handler Trigger: Core Interrupts %x", core);

    for(core_mask = 2; core_mask; core_mask--)
    {
        if (core & core_mask)
        {
            CME_GETSCOM(CPPM_CMEDB2, core_mask, db2.value);
            CME_PUTSCOM_NOP(CPPM_CMEDB2, core_mask, 0);
            out32(CME_LCL_EISR_CLR, (core_mask << SHIFT32(19)));

            PK_TRACE_DBG("DB2 Handler MessageID %d Triggered By Core %d",
                         db2.fields.cme_message_numbern, core_mask);

            switch (db2.fields.cme_message_numbern)
            {
                case MSGID_DB2_DECREMENTER_WAKEUP:

                    // unmask pc interrupt pending to wakeup that is still pending
                    G_cme_stop_record.core_blockpc &=
                        ~(core_mask & (~(G_cme_stop_record.core_running)));
                    g_eimr_override &= ~(((uint64_t)core_mask) << SHIFT64(13));
                    break;

                case MSGID_DB2_RESONANT_CLOCK_DISABLE:

#if (NIMBUS_DD_LEVEL < 21 || CUMULUS_DD_LEVEL == 10) || DISABLE_STOP8 == 1
#ifdef USE_CME_RESCLK_FEATURE

                    // Quad going into Stop11, need to potentially disable Resclks
                    if((in32(CME_LCL_FLAGS) & BIT32(CME_FLAGS_RCLK_OPERABLE))
                       && G_cme_pstate_record.qmFlag)
                    {

                        p9_cme_resclk_update(ANALOG_COMMON, p9_cme_resclk_get_index(ANALOG_PSTATE_RESCLK_OFF),
                                             G_cme_pstate_record.resclkData.common_resclk_idx);

                        // prevent Pstate changes from accidentally re-enabling
                        // in the meantime before interlock with PGPE
                        out32(CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_RCLK_OPERABLE));
                        // in case we abort, need this flag to get into reenable below
                        G_ndd20_disable_stop8_abort_stop11_rclk_handshake_flag = 1;
                    }

#endif
#endif
                    // Finish handshake with SGPE for Stop11 via PIG
                    pig.fields.req_intr_type    = PIG_TYPE5;
                    pig.fields.req_intr_payload = TYPE5_PAYLOAD_ENTRY_RCLK | STOP_LEVEL_11;
                    CME_PUTSCOM_NOP(PPM_PIG, core_mask, pig.value);
                    break;

                case MSGID_DB2_RESONANT_CLOCK_ENABLE:

#if (NIMBUS_DD_LEVEL < 21 || CUMULUS_DD_LEVEL == 10) || DISABLE_STOP8 == 1
#ifdef USE_CME_RESCLK_FEATURE

                    // Quad aborted Stop11, need to regressively enable Resclks
                    // IF wakeup from fully entered Stop11, this is done by QM
                    if(((in32(CME_LCL_FLAGS) & BIT32(CME_FLAGS_RCLK_OPERABLE)) ||
                        G_ndd20_disable_stop8_abort_stop11_rclk_handshake_flag)
                       && G_cme_pstate_record.qmFlag)
                    {
                        p9_cme_resclk_update(ANALOG_COMMON, p9_cme_resclk_get_index(G_cme_pstate_record.quadPstate),
                                             G_cme_pstate_record.resclkData.common_resclk_idx);

                        // reenable pstate from changing resonant clock
                        out32(CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_RCLK_OPERABLE));
                        // clear abort flag to start clean slate
                        G_ndd20_disable_stop8_abort_stop11_rclk_handshake_flag = 0;
                    }

#endif
#endif
                    // Finish handshake with SGPE for Stop11 via PIG
                    pig.fields.req_intr_type    = PIG_TYPE5;
                    pig.fields.req_intr_payload = TYPE5_PAYLOAD_EXIT_RCLK;
                    CME_PUTSCOM_NOP(PPM_PIG, core_mask, pig.value);
                    break;

                default:
                    break;
            }
        }
    }
}



void
p9_cme_stop_db1_handler(void)
{
    cppm_cmedb1_t    db1         = {0};
    ppm_pig_t        pig         = {0};
    uint32_t         suspend_ack = 0;

    MARK_TRAP(STOP_DB1_HANDLER)
    PK_TRACE_INF("DB1 Handler Trigger");

    // Suspend DB should only come from the first good core
    uint32_t core = G_cme_pstate_record.firstGoodCoreMask;

    CME_GETSCOM(CPPM_CMEDB1, core, db1.value);
    CME_PUTSCOM_NOP(CPPM_CMEDB1, core, 0);
    out32_sh(CME_LCL_EISR_CLR, core << SHIFT64SH(41));

    PK_TRACE_DBG("DB1 Handler MessageID %d Triggered By Core %d",
                 db1.fields.cme_message_numbern, core);

    // block msgs
    if ((db1.fields.cme_message_numbern > 0x4) &&
        (db1.fields.cme_message_numbern < 0x8))
    {
        suspend_ack = 1;

        // exit
        if (db1.fields.cme_message_numbern & 0x2)
        {
            G_cme_stop_record.core_blockwu |= CME_MASK_BC;
            g_eimr_override                |= IRQ_VEC_WAKE_C0 | IRQ_VEC_WAKE_C1;

#if HW386841_NDD1_DSL_STOP1_FIX

            // Set AUTO_STOP1_DISABLE
            out32(CME_LCL_LMCR_OR,  BIT32(18));

#endif

            // Set PM_BLOCK_INTERRUPTS
            out32(CME_LCL_SICR_OR,  BITS32(2, 2));

            // Block Exit Enabled
            out32(CME_LCL_FLAGS_OR, BITS32(8, 2));
        }

        // entry
        if (db1.fields.cme_message_numbern & 0x1)
        {
            G_cme_stop_record.core_blockey |= CME_MASK_BC;
            g_eimr_override                |= IRQ_VEC_STOP_C0 | IRQ_VEC_STOP_C1;

#if HW386841_NDD1_DSL_STOP1_FIX

            // Set AUTO_STOP1_DISABLE
            out32(CME_LCL_LMCR_OR,  BIT32(18));

#endif

            // Block Entry Enabled
            out32(CME_LCL_FLAGS_OR, BITS32(10, 2));
        }
    }
    // unblock msgs
    else if ((db1.fields.cme_message_numbern < 0x4) &&
             (db1.fields.cme_message_numbern > 0))
    {
        suspend_ack = 1;

        // exit
        if (db1.fields.cme_message_numbern & 0x2)
        {
            G_cme_stop_record.core_blockwu &= ~CME_MASK_BC;
            g_eimr_override                &= ~(IRQ_VEC_WAKE_C0 | IRQ_VEC_WAKE_C1);

#if HW386841_NDD1_DSL_STOP1_FIX

            // Clear AUTO_STOP1_DISABLE
            out32(CME_LCL_LMCR_CLR,  BIT32(18));

#endif

            // Clear PM_BLOCK_INTERRUPTS
            out32(CME_LCL_SICR_CLR,  BITS32(2, 2));

            // Block Exit Disabled
            out32(CME_LCL_FLAGS_CLR, BITS32(8, 2));
        }

        // entry
        if (db1.fields.cme_message_numbern & 0x1)
        {
            G_cme_stop_record.core_blockey &= ~CME_MASK_BC;
            g_eimr_override                &= ~(IRQ_VEC_STOP_C0 | IRQ_VEC_STOP_C1);

#if HW386841_NDD1_DSL_STOP1_FIX

            // Clear AUTO_STOP1_DISABLE
            out32(CME_LCL_LMCR_CLR,  BIT32(18));

#endif

            // Block Entry Disabled
            out32(CME_LCL_FLAGS_CLR, BITS32(10, 2));
        }
    }

    if (suspend_ack)
    {
        pig.fields.req_intr_payload = db1.fields.cme_message_numbern;
        pig.fields.req_intr_payload = pig.fields.req_intr_payload << 8;
        pig.fields.req_intr_payload |= 0x080; // set bit 4 for ack package
        pig.fields.req_intr_type    = PIG_TYPE2;
        CME_PUTSCOM_NOP(PPM_PIG, core, pig.value);
    }
}
