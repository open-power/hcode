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
    {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0},
        {0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    // wof status
    {0, 0, 0},
    // semaphores
    {{0, 0, 0}}
};



void
p9_sgpe_stop_suspend_db1_cme(uint32_t qloop, uint32_t msgid)
{
    uint32_t  cstart    = 0;
    uint32_t  cindex    = 0;
    uint32_t  cloop     = 0;
    uint32_t  cmask     = 0;
    data64_t  scom_data = {0};
    ppm_pig_t pig       = {0};

    for(cstart = 0; cstart < CORES_PER_QUAD; cstart += 2)
    {
        for(cloop =  cstart, cmask = BIT32(((qloop << 2) + cstart));
            cloop < (cstart + CORES_PER_EX);
            cloop++, cmask = cmask >> 1)
        {
            // find the first good core served by each active CME
            if (G_sgpe_stop_record.group.core[VECTOR_CONFIG] & cmask)
            {
                break;
            }
        }

        cindex = (qloop << 2) + cloop;

        // For each quad that is not in STOP 11, send doorbeel
        if ((G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] & BIT32(qloop)) &&
            (cloop != (cstart + CORES_PER_EX))) // if ex is partial good
        {
            scom_data.words.upper = msgid;
            scom_data.words.lower = 0;
            p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1, cindex), scom_data.value);
        }
        // otherwise send an ack pig on behalf of that quad(stop11 or partial bad) or ex (ex is partial bad)
        else
        {
            if (cloop == (cstart + CORES_PER_EX))
            {
                cindex = (qloop << 2) + cstart;
            }

            pig.fields.req_intr_payload = msgid >> 16;
            pig.fields.req_intr_payload |= 0x080; // set bit 4 for ack package
            pig.fields.req_intr_type    = PIG_TYPE2;
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(PPM_PIG, cindex), pig.value);
        }
    }
}

void
p9_sgpe_ipi3_low_handler(void* arg, PkIrqId irq)
{
    PkMachineContext   ctx;
    uint32_t qloop     = 0;
    uint32_t action    = 0;
    uint32_t occflg    = in32(OCB_OCCFLG) & BITS32(9, 4);
    data64_t scom_data = {0};

    PK_TRACE_INF("IPI-IRQ: %d", irq);
    // Clear ipi3_lo interrupt
    out32(OCB_OISR1_CLR, BIT32(29));

    // occflg[9]control + [11]exit/[12]entry(filter bit[10] here)
    // bit[9] must be on to perform any operations below
    // also verify we are doing at least one operation from entry/exit
    // otherwise, even bit[9] is on, the requested operation is undefined
    // thus cannot be performed(no error taking out when this happens)
    if ((occflg & (~BIT32(10))) > BIT32(9))
    {
        // msg[5-7] << occflg[10]enable + [11]exit/[12]entry (filter bit[9] here)
        // msg[5] : perform block/unblock operation (enable/disable ignore stop func)
        // msg[6] : perform exit block/unblock operation
        // msg[7] : perform entry block/unblock operation
        action = ((occflg & (~BIT32(9))) << 5);

        for (qloop = 0; qloop < MAX_QUADS; qloop++)
        {
            if (!(G_sgpe_stop_record.group.quad[VECTOR_CONFIG] & BIT32(qloop)))
            {
                continue;
            }

            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QCCR, qloop), scom_data.value);

            // target quad is to participate block/unblock exit
            if (scom_data.words.upper & BIT32(10))
            {
                action = action | BIT32(6);

                if (action & BIT32(5))
                {
                    G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] |= BIT32(qloop);
                }
                else
                {
                    G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] &= ~BIT32(qloop);
                }
            }
            // not participate exit, taking exit encoding bit out
            else
            {
                action = action & (~BIT32(6));
            }

            // target quad is to participate block/unblock entry
            if (scom_data.words.upper & BIT32(11))
            {
                action = action | BIT32(7);

                if (action & BIT32(5))
                {
                    G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] |= BIT32(qloop);
                }
                else
                {
                    G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] &= ~BIT32(qloop);
                }
            }
            // not participate entry, taking entry encoding bit out
            else
            {
                action = action & (~BIT32(7));
            }

            // if this quad participates either entry/exit for block/unlock
            // send msg; otherwise skip the quad
            if (action & BITS32(6, 2))
            {
                p9_sgpe_stop_suspend_db1_cme(qloop, action);
            }
        }
    }

    pk_irq_vec_restore(&ctx);
}



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


static void
p9_sgpe_pig_type23_parser(const uint32_t type)
{
    uint32_t   timeout       = 0;
    uint32_t   qloop         = 0;
    uint32_t   cloop         = 0;
    uint32_t   cstart        = 0;
    uint32_t   cindex        = 0;
    uint32_t   cpending      = 0;
    uint32_t   cpayload      = 0;
    uint32_t   payload2      = 0;
    uint32_t   payload3      = 0;
    uint32_t   vector_index  = 0;
    uint32_t   request_index = 0;
    uint32_t   suspend_index = 0;
    uint32_t   suspend_mask  = 0;
    data64_t   scom_data     = {0};

    // read typeX interrupt pending status
    // then clear interrupt pending status
    cpending = in32(OCB_OPITNPRA(type));
    out32(OCB_OPITNPRA_CLR(type), cpending);
    PK_TRACE("Cores Pending: %x", cpending);

    // clear group before analyzing input
    G_sgpe_stop_record.group.core[VECTOR_PIGE] = 0;
    G_sgpe_stop_record.group.core[VECTOR_PIGX] = 0;

    // loop all quads
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        cstart = qloop << 2;

        // if no core request, skip to next quad
        if (!(BITS32(cstart, CORES_PER_QUAD) & cpending))
        {
            continue;
        }

        PK_TRACE_DBG("Quad[%d] Has Core Request:", qloop);
        PK_TRACE_DBG("Now Core Levels[%d][%d][%d][%d]",
                     G_sgpe_stop_record.level[qloop][0],
                     G_sgpe_stop_record.level[qloop][1],
                     G_sgpe_stop_record.level[qloop][2],
                     G_sgpe_stop_record.level[qloop][3]);

        // then loop all cores in the quad
        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            cindex = cstart + cloop;

            // again skip core that doesnt have interrupt pending
            if (!(BIT32(cindex) & cpending))
            {
                continue;
            }

            // read payload on core has interrupt pending
            if (type == 2)
            {
                cpayload = in32(OCB_OPIT2CN(cindex));
            }
            else
            {
                cpayload = in32(OCB_OPIT3CN(cindex));
            }

            PK_TRACE_INF("Core[%d] sent PIG Type[%d] with Payload [%x]", cindex, type, cpayload);

            // if not hardware pig and is an suspend ack pig
            if ((type == 2) &&
                ((~cpayload) & TYPE2_PAYLOAD_HARDWARE_WAKEUP) &&
                (cpayload & TYPE2_PAYLOAD_SUSPEND_ACK_MASK))
            {
                for(suspend_mask  = TYPE2_PAYLOAD_SUSPEND_ENTRY_MASK,
                    vector_index  = VECTOR_ENTRY,
                    request_index = VECTOR_PIGE,
                    suspend_index = VECTOR_BLOCKE;
                    suspend_index > VECTOR_BLOCKX;
                    suspend_index++,
                    request_index++,
                    vector_index++,
                    suspend_mask = suspend_mask << 1)
                {
                    // if entry/exit is selected for performing suspend/unsuspend operation
                    if (cpayload & suspend_mask)
                    {
                        // suspend entry/exit/both
                        if (cpayload & TYPE2_PAYLOAD_SUSPEND_OP_MASK)
                        {
                            if ((cloop >> 1) % 2)
                            {
                                G_sgpe_stop_record.group.qex0[suspend_index] |= BIT32(qloop);
                            }
                            else
                            {
                                G_sgpe_stop_record.group.qex1[suspend_index] |= BIT32(qloop);
                            }

                            if((G_sgpe_stop_record.group.qex0[suspend_index] &
                                G_sgpe_stop_record.group.qex1[suspend_index] &
                                G_sgpe_stop_record.group.quad[suspend_index]) ==
                               G_sgpe_stop_record.group.quad[suspend_index])
                            {
                                out32(OCB_OCCFLG_CLR, BIT32(SGPE_IGNORE_STOP_CONTROL));
                            }
                        }
                        // unsuspend entry/exit/both
                        else
                        {
                            if ((cloop >> 1) % 2)
                            {
                                G_sgpe_stop_record.group.qex0[suspend_index] &= ~BIT32(qloop);
                            }
                            else
                            {
                                G_sgpe_stop_record.group.qex1[suspend_index] &= ~BIT32(qloop);
                            }

                            if ((G_sgpe_stop_record.group.qex0[suspend_index]  |
                                 G_sgpe_stop_record.group.qex1[suspend_index]) == 0)
                            {
                                G_sgpe_stop_record.group.core[request_index] |=
                                    G_sgpe_stop_record.group.core[suspend_index];
                                G_sgpe_stop_record.group.core[suspend_index] = 0;
                                G_sgpe_stop_record.group.qswu[vector_index] |=
                                    G_sgpe_stop_record.group.qswu[suspend_index];
                                G_sgpe_stop_record.group.qswu[suspend_index] = 0;
                                out32(OCB_OCCFLG_CLR, BIT32(SGPE_IGNORE_STOP_CONTROL));
                            }
                        }
                    }
                }

                continue;
            }

            // check core partial good here as suspend protocol may send pig on bad core
            // on behalf of bad ex, which is processed by code above
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                continue;
            }

            // read wakeup_notify_select
            GPE_GETSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR, cindex), scom_data.value);

            // phantom can be processed when WNS already handoff to cme by a different wakeup
            // OR can be delayed long enough when WNS handoff back to sgpe by next cme entry

            // In latter case, if left over type2 software dec wakeup happen to catch up with
            // WNS = 1 by next entry(could be type 2 or 3), we want to detect the type2 entry
            // and process it instead of this phantom; if type 3 entry, then ignore both
            // as type3 needs to be hanndled in type3 handler while current is obvious type2

            if ((scom_data.words.upper & BIT32(13)) && cpayload == 0x400)
            {
                payload2 = in32(OCB_OPIT2CN(cindex));
                payload3 = in32(OCB_OPIT3CN(cindex));

                if ((!(payload2 & TYPE2_PAYLOAD_EXIT_EVENT)) &&
                    (payload2 & TYPE2_PAYLOAD_STOP_LEVEL))
                {
                    PK_TRACE_INF("WARNING: Leftover dec wakeup following by new TYPE2 entry PIG");
                    cpayload = payload2;
                }
                else if ((!(payload3 & TYPE2_PAYLOAD_EXIT_EVENT)) &&
                         (payload3 & TYPE2_PAYLOAD_STOP_LEVEL))
                {
                    PK_TRACE_INF("WARNING: Leftover dec wakeup following by new TYPE3 entry PIG");
                    continue;
                }
            }

            // request exit
            if (cpayload & TYPE2_PAYLOAD_EXIT_EVENT)
            {
                if (!(scom_data.words.upper & BIT32(13)))
                {
                    // type2 duplicate wakeup can happen due to manual PCWU vs other HW wakeup
                    if (cpayload == 0x400)
                    {
                        PK_TRACE_INF("WARNING: Ignore Phantom Software PC/Decrementer Wakeup PIG \
                                      (already handoff cme by other wakeup");
                    }
                    // otherwise PPM shouldnt send duplicate pig if wakeup is present
                    else
                    {
                        PK_TRACE_INF("ERROR: Received Phantom Hardware Type2/3 Wakeup PIG \
                                      When Wakeup_notify_select = 0. HALT SGPE!");
                        PK_PANIC(SGPE_PIG_TYPE23_EXIT_WNS_CME);
                    }
                }
                else
                {
                    if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))
                    {
                        PK_TRACE_DBG("Core Request Exit, but in Block Wakeup Mode so Ignore");
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKX] |= BIT32(cindex);
                    }
                    else
                    {
                        PK_TRACE_INF("Core Request Exit");
                        G_sgpe_stop_record.group.core[VECTOR_PIGX] |= BIT32(cindex);

                        PK_TRACE("Update STOP history on core: in transition of exit");
                        scom_data.words.upper = SSH_EXIT_IN_SESSION;
                        scom_data.words.lower = 0;
                        GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);

                        // if wakeup by pc_intr_pending,
                        // go exit with flag to do extra doorbell from normal wakeup
                        if (cpayload == 0x400)
                        {
                            G_sgpe_stop_record.group.core[VECTOR_PCWU] |= BIT32(cindex);
                        }
                    }
                }
            }
            // request entry
            else if ((G_sgpe_stop_record.level[qloop][cloop] =
                          (cpayload & TYPE2_PAYLOAD_STOP_LEVEL)))
            {
                timeout = 16;

                while((!(scom_data.words.upper & BIT32(13))) && timeout)
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR, cindex), scom_data.value);
                    timeout--;
                }

                if (!timeout)
                {
                    PK_TRACE_ERR("ERROR: Received Phantom Entry PIG \
                                  When Wakeup_notify_select = 0. HALT SGPE!");
                    PK_PANIC(SGPE_PIG_TYPE23_ENTRY_WNS_CME);
                }

                if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(qloop))
                {
                    PK_TRACE_DBG("Core Request Entry, but in Block Entry Mode so Ignore");
                    G_sgpe_stop_record.group.core[VECTOR_BLOCKE] |= BIT32(cindex);
                }
                else
                {
                    PK_TRACE_INF("Core Request Entry");
                    G_sgpe_stop_record.group.core[VECTOR_PIGE] |= BIT32(cindex);

                    PK_TRACE("Update STOP history on core: in transition of entry");
                    scom_data.words.upper = SSH_ENTRY_IN_SESSION;
                    scom_data.words.lower = 0;
                    GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
                }
            }
            // payload invalid
            else
            {
                PK_TRACE_ERR("ERROR: Invalid STOP Requests on Type2 or Type3 PIG. HALT SGPE!");
                PK_PANIC(SGPE_PIG_TYPE23_PAYLOAD_INVALID);
            }

        }

        PK_TRACE_DBG("New Core Levels[%d][%d][%d][%d]",
                     G_sgpe_stop_record.level[qloop][0],
                     G_sgpe_stop_record.level[qloop][1],
                     G_sgpe_stop_record.level[qloop][2],
                     G_sgpe_stop_record.level[qloop][3]);
    }

    PK_TRACE_DBG("Core Request Stop:   Entry[%x], Exit[%x]",
                 G_sgpe_stop_record.group.core[VECTOR_PIGE],
                 G_sgpe_stop_record.group.core[VECTOR_PIGX]);

#if !SKIP_IPC

    if (G_sgpe_stop_record.wof.update_pgpe & IPC_SGPE_PGPE_UPDATE_CORE_ENABLED)
    {

        // If any core exits, including waking up from stop5 to stop15
        //   sends Update Active Cores IPC to the PGPE
        //   with Update Type being Exit and the ActiveCores field
        //   indicating the resultant cores that will be powered and clocking
        //   after the response is received.
        // PGPE will perform the necessary adjustments to the Pstates to allow the cores to exit.
        // Upon a good response from the PGPE,
        //   the SGPE will communicate to the CMEs for the requested cores to proceed
        //   with powering them on and completing the exit process.
        // Upon a bad response from the PGPE,
        //   the SGPE will halt as this is an unrecoverable error condition.
        //   [Exits cannot be allowed as the machine may then be in an unsafe frequency/voltage
        //    combination that could violate the current or thermal parameters
        //    which could lead to system checkstop]

        if (G_sgpe_stop_record.group.core[VECTOR_PIGX])
        {
            p9_sgpe_ipc_pgpe_update_active_cores(UPDATE_ACTIVE_CORES_TYPE_EXIT);

            /// poll for ack is located before switch exit to cme
            p9_sgpe_ipc_pgpe_update_active_cores_poll_ack();
        }

        // If any core entries, including stop5 to stop15
        //   sends Update Active Cores IPC to the PGPE
        //   with Update Type being Enter and the ActiveCores field
        //   indicating the resultant cores that have already been powered off.
        // PGPE acknowledge immediately and
        //   then perform any adjustments to take advantage of the powered off cores.
        // Upon a good response from the PGPE,
        //   the SGPE retires the operation ???
        // Upon a bad response from the PGPE,
        //   the SGPE will halt as the SGPE and PGPE are now out of synchronization.
        //   [This is not a likely error.]

        if (G_sgpe_stop_record.group.core[VECTOR_PIGE])
        {
            p9_sgpe_ipc_pgpe_update_active_cores(UPDATE_ACTIVE_CORES_TYPE_ENTRY);

            // pgpe should ack right away
            p9_sgpe_ipc_pgpe_update_active_cores_poll_ack();
        }

    }

#endif

}


void
p9_sgpe_pig_type2_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;
    uint32_t         cexit     = 0;
    uint32_t         center    = 0;
    uint32_t         cindex    = 0;
    data64_t         scom_data = {0};

    //===============================
    MARK_TRAP(STOP_PIG_TYPE2_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE2: %d", irq);

    // Clear Type2 Interrupt
    out32(OCB_OISR1_CLR, BIT32(15));

    // Parse Type2 Requests
    p9_sgpe_pig_type23_parser(2);

    // Taking Stop5 Actions,
    // Can only do these steps after ipc done at end of parser above
    if ((cexit  = G_sgpe_stop_record.group.core[VECTOR_PIGX]) ||
        (center = G_sgpe_stop_record.group.core[VECTOR_PIGE]))
    {
        for(cindex = 0; cexit || center; cexit <<= 1, center <<= 1, cindex++)
        {
            if (cexit & BIT32(0))
            {
                p9_sgpe_stop_exit_handoff_cme(cindex);
            }

            if (center & BIT32(0))
            {
                PK_TRACE("Update STOP history: in core stop level 5");
                scom_data.words.upper = SSH_ACT_LV5_COMPLETE;
                scom_data.words.lower = 0;
                GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);

                G_sgpe_stop_record.group.core[VECTOR_ACTIVE] &= ~BIT32(cindex);
            }
        }
    }
    else
    {
        PK_TRACE_INF("WARNING: PHANTOM TYPE2 STOP5 INTERRUPT");
    }

    // Enable Interrupts
    pk_irq_vec_restore(&ctx);
}

void
p9_sgpe_pig_type3_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;

    //===============================
    MARK_TRAP(STOP_PIG_TYPE3_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE3: %d", irq);

    // Clear Type3 Interrupt
    out32(OCB_OISR1_CLR, BIT32(16));

    // Parse Type2 Requests
    p9_sgpe_pig_type23_parser(3);

    // clear group before analyzing input
    G_sgpe_stop_record.group.core[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.core[VECTOR_EXIT]  = 0;

    // Taking Stop8/11 Actions if any
    if (G_sgpe_stop_record.group.core[VECTOR_PIGX] ||
        G_sgpe_stop_record.group.core[VECTOR_PIGE])
    {
        // block both type3 and type6
        // so another doesnt interrupt until next round
        out32(OCB_OIMR1_OR, (BIT32(16) | BIT32(19)));

        if (G_sgpe_stop_record.group.core[VECTOR_PIGX])
        {
            PK_TRACE_INF("Unblock Exit Thread");
            G_sgpe_stop_record.group.core[VECTOR_EXIT] =
                G_sgpe_stop_record.group.core[VECTOR_PIGX];
            pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
        }

        if (G_sgpe_stop_record.group.core[VECTOR_PIGE])
        {
            PK_TRACE_INF("Unblock Entry Thread");
            G_sgpe_stop_record.group.core[VECTOR_ENTRY] =
                G_sgpe_stop_record.group.core[VECTOR_PIGE];
            G_sgpe_stop_record.group.core[VECTOR_ACTIVE] &=
                ~(G_sgpe_stop_record.group.core[VECTOR_PIGE]);
            pk_semaphore_post(&(G_sgpe_stop_record.sem[0]));
        }
    }
    else
    {
        PK_TRACE_INF("Nothing to do, Enable Interrupts");
        pk_irq_vec_restore(&ctx);
    }
}


void
p9_sgpe_pig_type6_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;
    uint32_t         qloop    = 0;
    uint32_t         qpending = 0;
    uint32_t         qpayload = 0;

    //===============================
    MARK_TRAP(STOP_PIG_TYPE6_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE6: %d", irq);

    // Clear type6 interrupt
    out32(OCB_OISR1_CLR, BIT32(19));

    // read type6 interrupt pending status
    // then clear interrupt pending status
    qpending = in32(OCB_OPIT6PRB);
    out32(OCB_OPIT6PRB_CLR, qpending);
    PK_TRACE("Quads Pending: %x", qpending);

    // clear group before analyzing input
    G_sgpe_stop_record.group.qswu[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.qswu[VECTOR_EXIT]  = 0;

    // loop all quads
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // if no quad special wakeup, skip to next quad
        if (!(BIT32(qloop) & qpending &
              G_sgpe_stop_record.group.quad[VECTOR_CONFIG]))
        {
            continue;
        }

        // read payload on quad has interrupt pending
        qpayload = in32(OCB_OPIT6QN(qloop));
        PK_TRACE_INF("Quad[%d] Payload [%x]", qloop, qpayload);

        if (qpayload & TYPE6_PAYLOAD_EXIT_EVENT)
        {
            PK_TRACE_DBG("Quad Request Special Wakeup");

            if (G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE] & BIT32(qloop))
            {
                PK_TRACE_DBG("Quad Already in Special Wakeup");
            }
            else if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))
            {
                PK_TRACE_DBG("Quad is in Block Wakeup Mode, Ignore Now");
                G_sgpe_stop_record.group.qswu[VECTOR_BLOCKX] |= BIT32(qloop);
            }
            else
            {
                G_sgpe_stop_record.group.qswu[VECTOR_EXIT] |= BIT32(qloop);
            }
        }
        else
        {
            PK_TRACE_DBG("Quad Drop Special Wakeup, Clearing Done");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_CLR, qloop), BIT64(0));

            if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(qloop))
            {
                PK_TRACE_DBG("Quad is in Block Entry Mode, Ignore Re-entry Now");
                G_sgpe_stop_record.group.qswu[VECTOR_BLOCKE] |= BIT32(qloop);
            }
            else
            {
                G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]  |=  BIT32(qloop);
                G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE] &= ~BIT32(qloop);
            }
        }
    }

    PK_TRACE_DBG("Quad Special Wakeup: Raise[%x], Drop[%x]",
                 G_sgpe_stop_record.group.qswu[VECTOR_EXIT],
                 G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]);

    if (G_sgpe_stop_record.group.qswu[VECTOR_EXIT] ||
        G_sgpe_stop_record.group.qswu[VECTOR_ENTRY])
    {
        // block both type3 and type6
        // so another doesnt interrupt until next round
        out32(OCB_OIMR1_OR, (BIT32(16) | BIT32(19)));

        if (G_sgpe_stop_record.group.qswu[VECTOR_EXIT])
        {
            PK_TRACE_INF("Unblock Exit");
            pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
        }

        if (G_sgpe_stop_record.group.qswu[VECTOR_ENTRY])
        {
            PK_TRACE_INF("Unblock Entry");
            pk_semaphore_post(&(G_sgpe_stop_record.sem[0]));
        }
    }
    else
    {
        PK_TRACE_INF("Nothing to do, Enable Interrupts");
        pk_irq_vec_restore(&ctx);
    }
}
