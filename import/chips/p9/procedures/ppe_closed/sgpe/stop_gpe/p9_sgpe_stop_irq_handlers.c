/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_irq_handlers.c $ */
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
#include "p9_sgpe_stop_enter_marks.h"
#include "p9_sgpe_irq.h"

SgpeStopRecord G_sgpe_stop_record __attribute__((section (".dump_ptrs"))) =
{
    // core levels
    {   {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // quad states
    {   {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}
    },
    // group vectors
    {   {0, 0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    },
    // wof status
    {0, 0, 0, 0},
    // semaphores
    {{0, 0, 0}}
};

// PCB Interrupt Type2
// Payload
//   0    - set = Hardware Exit | unset = Firmware Stop
//   1    - set = Firmware Exit | unset = Firmware Entry (valid if b0 unset)
//   2:7  - Reserved
//   8:11 - Stop Level                                   (valid if b0 unset)
//
// SgpeStopRecord Structure
//     A) record all core latest stop levels from pcb interrupt payload
//     B) from A determine the overall quad/ex event(enter which level or exit)
//     C) with latest B, remember the vector of quad/ex entering and exiting
//     entry and exit will loop the vector for targets (or multicast) and
//     take a look at the events for stop flow depth
//     Possible entry/exit flow
//     Enter:
//       0  -> ex
//       ex -> eq
//       0  -> eq
//     Exit:
//       ex -> 0
//       eq -> ex -> 0
//

void
p9_sgpe_stop_pig_handler(void* arg, PkIrqId irq)
{
    PkMachineContext  ctx;
    uint32_t          cirq        = 0;
    uint32_t          qirq        = 0;
    uint32_t          cloop       = 0;
    uint32_t          qloop       = 0;
    uint32_t          cpending_t2 = 0;
    uint32_t          cpending_t3 = 0;
    uint32_t          qpending_t6 = 0;
    uint32_t          cpayload_t2 = 0;
    uint32_t          cpayload_t3 = 0;
    uint32_t          qpayload_t6 = 0;
    uint64_t          scom_data   = 0;

    //=========================
    MARK_TRAP(STOP_PIG_HANDLER)
    //=========================

    PK_TRACE_DBG("PIG-IRQ: %d", irq);
    // Disable type2/3/6 interrupt
    out32(OCB_OIMR1_OR, (BITS32(15, 2) | BIT32(19)));
    // Read type2/3/6 interrupt status
    qirq = in32(OCB_OISR1);
    cirq = qirq & BITS32(15, 2);
    qirq = qirq & BIT32(19);
    // Clear type2/3/6 interrupt status
    out32(OCB_OISR1_CLR, (cirq | qirq));

    // read type2/3/6 interrupt pending status
    // then clear interrupt pending status
    if (cirq & BIT32(15))
    {
        cpending_t2 = in32(OCB_OPITNPRA(2));
        out32(OCB_OPITNPRA_CLR(2), cpending_t2);
        PK_TRACE("Type2: %x", cpending_t2);
    }

    if (cirq & BIT32(16))
    {
        cpending_t3 = in32(OCB_OPITNPRA(3));
        out32(OCB_OPITNPRA_CLR(3), cpending_t3);
        PK_TRACE("Type3: %x", cpending_t3);
    }

    if (qirq)
    {
        qpending_t6 = in32(OCB_OPIT6PRB);
        out32(OCB_OPIT6PRB_CLR, qpending_t6);
        PK_TRACE_DBG("Type6: %x", qpending_t6);
    }

    // clear group before analyzing input
    G_sgpe_stop_record.group.qswu[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.core[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.qswu[VECTOR_EXIT]  = 0;
    G_sgpe_stop_record.group.core[VECTOR_EXIT]  = 0;
    G_sgpe_stop_record.group.ex_l[VECTOR_EXIT]  = 0;
    G_sgpe_stop_record.group.ex_r[VECTOR_EXIT]  = 0;
    G_sgpe_stop_record.group.ex_b[VECTOR_EXIT]  = 0;
    G_sgpe_stop_record.group.quad[VECTOR_EXIT]  = 0;

    // loop all quads
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {

        // if no quad special wakeup, skip to core request
        if (qirq && (BIT32(qloop) & qpending_t6 &
                     G_sgpe_stop_record.group.quad[VECTOR_CONFIG]))
        {

            // read payload on quad has interrupt pending
            qpayload_t6 = in32(OCB_OPIT6QN(qloop));
            PK_TRACE_DBG("Quad[%d] Payload [%x]", qloop, qpayload_t6);

            if (qpayload_t6 & TYPE6_PAYLOAD_EXIT_EVENT)
            {
                PK_TRACE_DBG("Quad Request Special Wakeup");

                if (G_sgpe_stop_record.group.qswu[VECTOR_CONFIG] & BIT32(qloop))
                {
                    PK_TRACE_DBG("Quad Already in Special Wakeup");
                }
                else
                {
                    G_sgpe_stop_record.group.qswu[VECTOR_EXIT] |= BIT32(qloop);
                    G_sgpe_stop_record.group.quad[VECTOR_EXIT] |= BIT32(qloop);
                    G_sgpe_stop_record.group.ex_l[VECTOR_EXIT] |= BIT32(qloop);
                    G_sgpe_stop_record.group.ex_r[VECTOR_EXIT] |= BIT32(qloop);
                    G_sgpe_stop_record.group.ex_b[VECTOR_EXIT] |=
                        BITS32((qloop << 1), 2);
                }
            }
            else
            {
                PK_TRACE_DBG("Quad Drop Special Wakeup, Clearing Done");
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_CLR, qloop), BIT64(0));

                G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]  |=  BIT32(qloop);
                G_sgpe_stop_record.group.qswu[VECTOR_CONFIG] &= ~BIT32(qloop);
            }
        }

        // if no core request, skip to next quad
        if(!cirq || (!(BITS32((qloop << 2), 4) & (cpending_t2 | cpending_t3) &
                       G_sgpe_stop_record.group.core[VECTOR_CONFIG])))
        {
            continue;
        }

        PK_TRACE_DBG("Quad[%d] Has Core Request:", qloop);
        PK_TRACE_DBG("Now clv[%d][%d][%d][%d]",
                     G_sgpe_stop_record.level[qloop][0],
                     G_sgpe_stop_record.level[qloop][1],
                     G_sgpe_stop_record.level[qloop][2],
                     G_sgpe_stop_record.level[qloop][3]);

        // then loop all cores in the quad
        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            // again skip core that doesnt have interrupt cpending
            if (!((cpending_t2 | cpending_t3) & BIT32((qloop << 2) + cloop)))
            {
                continue;
            }

            // read payload on core has interrupt2 cpending
            cpayload_t2 = 0;
            cpayload_t3 = 0;

            if (cpending_t2 & BIT32((qloop << 2) + cloop))
            {
                cpayload_t2 = in32(OCB_OPIT2CN(((qloop << 2) + cloop)));
            }

            // read payload on core has interrupt3 cpending
            if (cpending_t3 & BIT32((qloop << 2) + cloop))
            {
                cpayload_t3 = in32(OCB_OPIT3CN(((qloop << 2) + cloop)));
            }

            PK_TRACE_INF("Core[%d] Type2 Payload [%x] Type3 Payload [%x]",
                         ((qloop << 2) + cloop), cpayload_t2, cpayload_t3);

            GPE_GETSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR,
                                           ((qloop << 2) + cloop)), scom_data);

            // T2       T3     NS         given point to SGPE
            // exit     exit   SGPE  ---- proceed with exit
            // entry    exit   SGPE  ---- discard exit, proceed with entry
            // exit     entry  SGPE  ---- discard exit, proceed with entry
            // entry    entry  SGPE  ---- error
            //
            // exit     exit   CME   ---- error (hardware phantom exit can only send one type)
            // entry    exit   CME   ---- error (entry dominiant error)
            // exit     entry  CME   ---- error (entry dominiant error)
            // entry    entry  CME   ---- error (entry dominiant error)

            // T2 T3
            // 0  0  Error
            // E  E  Error
            // E  0  Entry
            // 0  E  Entry
            // X  E  Entry
            // E  X  Entry
            // X  0  Exit
            // 0  X  Exit
            // X  X  Exit
            // exit  = both exit or one exit + one empty
            // entry = one entry + one exit/empty

            // both empty
            if ((!cpayload_t2) && (!cpayload_t3))
            {
                PK_TRACE_ERR("ERROR: Empty Requests on Both Type2 and Type3. HALT SGPE!");
                PK_PANIC(SGPE_PIG_TYPE23_BOTH_EMPTY);
            }
            // both entry
            else if ((cpayload_t2 && (!(cpayload_t2 & TYPE2_PAYLOAD_EXIT_EVENT))) &&
                     (cpayload_t3 && (!(cpayload_t3 & TYPE2_PAYLOAD_EXIT_EVENT))))
            {
                PK_TRACE_ERR("ERROR: Entry Requests on Both Type2 and Type3. HALT SGPE!");
                PK_PANIC(SGPE_PIG_TYPE23_BOTH_ENTRY);
            }
            // if t2 entry (t3 exit or empty)
            else if (cpayload_t2 && (!(cpayload_t2 & TYPE2_PAYLOAD_EXIT_EVENT)))
            {
                if (!(scom_data & BIT64(13)))
                {
                    // wakeup=normal + notify=cme -> error
                    if (cpayload_t2 != 0x400)
                    {
                        PK_TRACE_ERR("ERROR: Received Type2 Entry PIG When Wakeup_notify_select = 0. HALT SGPE!");
                        PK_PANIC(SGPE_PIG_TYPE2_ENTRY_WNS_CME);
                    }

                    // wakeup=pc + notify=cme -> ignore phantom(already handoff to cme by other wakeup)
                }
                else
                {
                    // wakeup=pc + notify=sgpe -> go exit with flag to do extra doorbell from normal wakeup
                    if (cpayload_t2 == 0x400)
                    {
                        G_sgpe_stop_record.group.core[VECTOR_PCWU] |= BIT32(((qloop << 2) + cloop));
                    }

                    // wakeup=normal + notify=sgpe -> go exit
                    PK_TRACE_INF("Core Request Entry via Type2");
                    G_sgpe_stop_record.level[qloop][cloop] =
                        (cpayload_t2 & TYPE2_PAYLOAD_STOP_LEVEL);
                    G_sgpe_stop_record.group.core[VECTOR_ENTRY] |=
                        BIT32(((qloop << 2) + cloop));
                }
            }
            // if t3 entry (t2 exit or empty)
            else if (cpayload_t3 && (!(cpayload_t3 & TYPE2_PAYLOAD_EXIT_EVENT)))
            {
                if (!(scom_data & BIT64(13)))
                {
                    PK_TRACE_ERR("ERROR: Received Type3 Entry PIG When Wakeup_notify_select = 0. HALT SGPE!");
                    PK_PANIC(SGPE_PIG_TYPE3_ENTRY_WNS_CME);
                }

                PK_TRACE_INF("Core Request Entry via Type3");
                G_sgpe_stop_record.level[qloop][cloop] =
                    (cpayload_t3 & TYPE2_PAYLOAD_STOP_LEVEL);
                G_sgpe_stop_record.group.core[VECTOR_ENTRY] |=
                    BIT32(((qloop << 2) + cloop));
            }
            // both exit or one exit + one empty
            else
            {
                if (!(scom_data & BIT64(13)))
                {
                    if ((cpayload_t2 & TYPE2_PAYLOAD_EXIT_EVENT) &&
                        (cpayload_t3 & TYPE2_PAYLOAD_EXIT_EVENT))
                    {
                        PK_TRACE_ERR("ERROR: Received Both Types of Exit PIG When Wakeup_notify_select = 0. HALT SGPE!");
                        PK_PANIC(SGPE_PIG_TYPE23_EXIT_WNS_CME);
                    }
                    else
                    {
                        PK_TRACE_INF("WARNING: Received Phantom Exit PIG When Wakeup_notify_select = 0");
                    }
                }
                else
                {
                    PK_TRACE_INF("Core Request Exit");

                    if (cloop < CORES_PER_EX)
                    {
                        G_sgpe_stop_record.group.ex_l[VECTOR_EXIT] |=
                            BIT32(qloop);
                        G_sgpe_stop_record.group.ex_b[VECTOR_EXIT] |=
                            BIT32((qloop << 1));
                    }
                    else
                    {
                        G_sgpe_stop_record.group.ex_r[VECTOR_EXIT] |=
                            BIT32(qloop);
                        G_sgpe_stop_record.group.ex_b[VECTOR_EXIT] |=
                            BIT32(((qloop << 1) + 1));
                    }

                    G_sgpe_stop_record.group.quad[VECTOR_EXIT] |=
                        BIT32(qloop);
                    G_sgpe_stop_record.group.core[VECTOR_EXIT] |=
                        BIT32(((qloop << 2) + cloop));
                }
            }
        }

        PK_TRACE_DBG("New Core Levels[%d][%d][%d][%d]",
                     G_sgpe_stop_record.level[qloop][0],
                     G_sgpe_stop_record.level[qloop][1],
                     G_sgpe_stop_record.level[qloop][2],
                     G_sgpe_stop_record.level[qloop][3]);
    }

    G_sgpe_stop_record.group.ex_b[VECTOR_EXIT] &=
        G_sgpe_stop_record.group.ex_b[VECTOR_CONFIG];
    G_sgpe_stop_record.group.ex_l[VECTOR_EXIT] &=
        G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG];
    G_sgpe_stop_record.group.ex_r[VECTOR_EXIT] &=
        G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG];

    PK_TRACE_DBG("Quad Special Wakeup: Raise[%x], Drop[%x]",
                 G_sgpe_stop_record.group.qswu[VECTOR_EXIT],
                 G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]);
    PK_TRACE_DBG("Core Request Stop:   Entry[%x], Exit[%x]",
                 G_sgpe_stop_record.group.core[VECTOR_ENTRY],
                 G_sgpe_stop_record.group.core[VECTOR_EXIT]);

    if ((!G_sgpe_stop_record.group.core[VECTOR_EXIT])  &&
        (!G_sgpe_stop_record.group.core[VECTOR_ENTRY]) &&
        (!G_sgpe_stop_record.group.qswu[VECTOR_EXIT])  &&
        (!G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]))
    {
        PK_TRACE_INF("Nothing to do, Clear Masks");
        out32(OCB_OIMR1_CLR, (BITS32(15, 2) | BIT32(19)));
        pk_irq_vec_restore(&ctx);
    }
    else
    {
        if (G_sgpe_stop_record.group.core[VECTOR_EXIT] ||
            G_sgpe_stop_record.group.qswu[VECTOR_EXIT])
        {
            PK_TRACE_INF("Unblock Exit");
            G_sgpe_stop_record.wof.status_stop = STATUS_PROCESSING;
            pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
        }

        if (G_sgpe_stop_record.group.core[VECTOR_ENTRY] ||
            G_sgpe_stop_record.group.qswu[VECTOR_ENTRY])
        {
            PK_TRACE_INF("Unblock Entry");
            G_sgpe_stop_record.wof.status_stop = STATUS_PROCESSING;
            pk_semaphore_post(&(G_sgpe_stop_record.sem[0]));
        }
    }
}
