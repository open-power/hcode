/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_irq_handlers.c $ */
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
#include "p9_sgpe_stop_enter_marks.h"
#include "p9_stop_recovery_trigger.h"



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
#if DISABLE_STOP8
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#else
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif
    },
    // wof status
    {0, 0, 0, 0},
    // fit status
    {0, 0},
    // semaphores
    {{0, 0, 0}}
};



void
p9_sgpe_fit_handler()
{
    PK_TRACE("FIT: Handler Fired");

    uint32_t tpending = in32(OCB_OPITNPRA(PIG_TYPE3)) |
                        in32(OCB_OPITNPRA(PIG_TYPE5)) |
                        in32(OCB_OPIT6PRB);

    // count to 10 times that stop8+ is not serviced, then block stop5
    if (G_sgpe_stop_record.wof.status_stop == STATUS_IDLE && tpending)
    {
        PK_TRACE("FIT: Stravation Counter: %d", G_sgpe_stop_record.fit.starve_counter);

        if (G_sgpe_stop_record.fit.starve_counter < 25)
        {
            G_sgpe_stop_record.fit.starve_counter++;
        }
        else
        {
            PK_TRACE_INF("FIT: Stop8+ Stravation Detected");
            G_sgpe_stop_record.fit.starve_counter = 0;
            out32(OCB_OIMR1_OR, BIT32(15));
            g_oimr_override |= BIT64(47);
        }
    }
    // reset counter if current processing stop8+
    else if (G_sgpe_stop_record.wof.status_stop == STATUS_PROCESSING)
    {
        G_sgpe_stop_record.fit.starve_counter = 0;
    }
}



void
p9_sgpe_pgpe_halt_handler(void* arg, PkIrqId irq)
{
    PkMachineContext   ctx;

    PK_TRACE_INF("WARNING: PGPE Has Halted");
    PK_OPTIONAL_DEBUG_HALT(SGPE_PGPE_HALT_DETECTED);
    out32(OCB_OISR0_CLR, BIT32(7));

    G_sgpe_stop_record.wof.update_pgpe = IPC_SGPE_PGPE_UPDATE_PGPE_HALTED;

    if (in32(OCB_OCCFLG2) & BIT32(STOP_RECOVERY_TRIGGER_ENABLE))
    {
        p9_stop_recovery_trigger();
    }

    pk_irq_vec_restore(&ctx);
}

void
p9_sgpe_checkstop_handler(void* arg, PkIrqId irq)
{
    PkMachineContext   ctx;

    PK_TRACE_INF("WARNING: System Checkstop Detected");
    PK_OPTIONAL_DEBUG_HALT(SGPE_SYSTEM_CHECKSTOP_DETECTED);
    out32(OCB_OISR0_CLR, BIT32(16));

    pk_irq_vec_restore(&ctx);
}



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

#if NIMBUS_DD_LEVEL != 10

            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1, cindex), scom_data.value);

#else

            p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1, cindex), scom_data.value);

#endif

        }
        // otherwise send an ack pig on behalf of that quad(stop11 or partial bad) or ex (ex is partial bad)
        else
        {
            if (cloop == (cstart + CORES_PER_EX))
            {
                cindex = (qloop << 2) + cstart;
            }

            pig.fields.req_intr_payload = msgid >> 16;
            pig.fields.req_intr_payload |= TYPE2_PAYLOAD_SUSPEND_ACK_MASK;
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
p9_sgpe_pig_cpayload_parser(const uint32_t type)
{
    uint32_t      timeout       = 0;
    uint32_t      ex            = 0;
    uint32_t      qloop         = 0;
    uint32_t      cloop         = 0;
    uint32_t      cstart        = 0;
    uint32_t      cindex        = 0;
    uint32_t      cexit         = 0;
    uint32_t      center        = 0;
    uint32_t      cpending      = 0;
    uint32_t      cpayload      = 0;
    uint32_t      tpayload      = 0;
    uint32_t      vector_index  = 0;
    uint32_t      request_index = 0;
    uint32_t      suspend_index = 0;
    uint32_t      suspend_mask  = 0;
    data64_t      scom_data     = {0};
    sgpeHeader_t* pSgpeImgHdr   = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

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
            if (type == PIG_TYPE2)
            {
                cpayload = in32(OCB_OPIT2CN(cindex));
            }
            else if (type == PIG_TYPE3)
            {
                cpayload = in32(OCB_OPIT3CN(cindex));
            }
            else
            {
                cpayload = in32(OCB_OPIT5CN(cindex));
            }


            PK_TRACE_INF("Core[%d] sent PIG Type[%d] with Payload [%x]", cindex, type, cpayload);

            if (type == PIG_TYPE5)
            {

#if DISABLE_STOP8

                if ((cpayload != TYPE5_PAYLOAD_EXIT_RCLK) &&
                    (cpayload != (TYPE5_PAYLOAD_ENTRY_RCLK | STOP_LEVEL_11)))
                {

#endif

                    // Errors detected by the CME for any reason (STOP or Pstate)
                    // will cause the CME to halt. The CME halt is communicated via
                    // a PCB Interrupt Type 5 to SGPE. SGPE will, in turn, set OCC
                    // LFIR[cme_error_notify] (2) as an FFDC marker for this type of error.
                    GPE_PUTSCOM(OCB_OCCLFIR_OR, BIT64(2));

                    if (cpayload == TYPE5_PAYLOAD_CME_ERROR)
                    {
                        PK_TRACE_ERR("ERROR: CME Halt Due to Error");
                        PK_PANIC(SGPE_PIG_TYPE5_CME_ERROR);
                    }
                    else
                    {
                        PK_TRACE_ERR("ERROR: Undefined Type5 Payload");
                        PK_PANIC(SGPE_PIG_TYPE5_PAYLOAD_INVALID);
                    }

#if DISABLE_STOP8

                }

#endif

            }

            // if not hardware pig and is an suspend ack pig
            if ((type == PIG_TYPE2) &&
                ((~cpayload) & TYPE2_PAYLOAD_HARDWARE_WAKEUP) &&
                (cpayload & TYPE2_PAYLOAD_SUSPEND_ACK_MASK))
            {
                for(suspend_mask  = TYPE2_PAYLOAD_SUSPEND_ENTRY_MASK,
                    vector_index  = VECTOR_ENTRY,
                    request_index = VECTOR_PIGE,
                    suspend_index = VECTOR_BLOCKE;
                    suspend_index <= VECTOR_BLOCKX;
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
                                G_sgpe_stop_record.group.qex1[suspend_index] |= BIT32(qloop);
                            }
                            else
                            {
                                G_sgpe_stop_record.group.qex0[suspend_index] |= BIT32(qloop);
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
                                G_sgpe_stop_record.group.qex1[suspend_index] &= ~BIT32(qloop);
                            }
                            else
                            {
                                G_sgpe_stop_record.group.qex0[suspend_index] &= ~BIT32(qloop);
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

            if ((scom_data.words.upper & BIT32(13)) &&
                (type == PIG_TYPE2) &&
                (cpayload == TYPE2_PAYLOAD_DECREMENTER_WAKEUP))
            {
                tpayload = in32(OCB_OPIT2CN(cindex));

                if ((in32(OCB_OPITNPRA(PIG_TYPE2)) & BIT32(cindex)) &&
                    (!(tpayload & TYPE2_PAYLOAD_EXIT_EVENT)) &&
                    (tpayload & TYPE2_PAYLOAD_STOP_LEVEL))
                {
                    PK_TRACE_INF("WARNING: Leftover dec wakeup following by new TYPE2 entry PIG");
                    cpayload = tpayload;
                }
                else if (in32(OCB_OPITNPRA(PIG_TYPE3)) & BIT32(cindex))
                {
                    PK_TRACE_INF("WARNING: Leftover dec wakeup following by new TYPE3 PIG");
                    continue;
                }
            }

            // request exit
            if (cpayload & TYPE2_PAYLOAD_EXIT_EVENT)
            {
                if (!(scom_data.words.upper & BIT32(13)))
                {
                    // type2 duplicate wakeup can happen due to manual PCWU vs other HW wakeup
                    if ((type == PIG_TYPE2) && (cpayload == TYPE2_PAYLOAD_DECREMENTER_WAKEUP))
                    {
                        PK_TRACE_INF("WARNING: Ignore Phantom Software PC/Decrementer Wakeup PIG \
                                      (already handoff cme by other wakeup");
                    }
                    // otherwise PPM shouldnt send duplicate pig if wakeup is present
                    // also not suppose to handoff to cme if resclk is not enabled before(type5)
                    else
                    {
                        PK_TRACE_INF("ERROR: Received Phantom Hardware Type%d Wakeup PIG \
                                      When Wakeup_notify_select = 0. HALT SGPE!", type);

                        if (pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_PHANTOM_HALT_ENABLE_BIT_POS)
                        {
                            PK_PANIC(SGPE_PIG_TYPE23_EXIT_WNS_CME);
                        }
                    }
                }
                else
                {
                    // if wakeup by pc_intr_pending,
                    // go exit with flag to do extra doorbell from normal wakeup
                    if ((type == PIG_TYPE2) && (cpayload == TYPE2_PAYLOAD_DECREMENTER_WAKEUP))
                    {
                        PK_TRACE_INF("Core Request Exit with Decrementer Wakeup");
                        G_sgpe_stop_record.group.core[VECTOR_PCWU] |= BIT32(cindex);
                    }

#if DISABLE_STOP8

                    // if having ongoing stop11 in resclk disable phase, hold on to all exits
                    if (G_sgpe_stop_record.group.quad[VECTOR_RCLKE] & BIT32((qloop + RCLK_DIS_REQ_OFFSET)))
                    {
                        if ((type == PIG_TYPE5) && (cpayload == TYPE5_PAYLOAD_EXIT_RCLK))
                        {
                            PK_TRACE_ERR("ERROR: IMPOSSIBLE! RESCLK CME HANDSHAKE BROKEN! HALT SGPE!");
                            PK_PANIC(SGPE_PIG_RESCLK_CME_HANDSHAKE_BROKEN);
                        }

                        PK_TRACE_INF("Core Request Exit But Resonent Clock Disable Ongoing so ignore");
                        G_sgpe_stop_record.group.core[VECTOR_RCLKE] |= BIT32(cindex);
                    }
                    else if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))
                    {
                        PK_TRACE_DBG("Core Request Exit But in Block Wakeup Mode so Ignore");

                        if ((type == PIG_TYPE5) && (cpayload == TYPE5_PAYLOAD_EXIT_RCLK))
                        {
                            G_sgpe_stop_record.group.quad[VECTOR_RCLKX] &= ~BIT32(qloop);
                            G_sgpe_stop_record.group.core[VECTOR_BLOCKX] |=
                                G_sgpe_stop_record.group.core[VECTOR_RCLKX] & BITS32((qloop << 2), 4);

                            // restore Sibling's ability to change rclk as QM just did to itself
                            ex = (cindex % 4) >> 1;

                            if (G_sgpe_stop_record.group.expg[qloop] & (ex + 1))
                            {
                                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_OR, qloop, (ex ^ 1)),
                                            BIT64(CME_FLAGS_RCLK_OPERABLE));
                            }
                        }
                        else
                        {
                            G_sgpe_stop_record.group.core[VECTOR_BLOCKX] |= BIT32(cindex);
                        }
                    }
                    // Quad-Manager completed the resonant clock enable, proceed stop5 exit is now allowed
                    else if ((type == PIG_TYPE5) && (cpayload == TYPE5_PAYLOAD_EXIT_RCLK))
                    {
                        PK_TRACE_INF("Core Request Exit Allowed as Resonant Clock Enable is Completed");
                        G_sgpe_stop_record.group.quad[VECTOR_RCLKX] &= ~BIT32(qloop);
                        G_sgpe_stop_record.group.core[VECTOR_PIGX] |=
                            G_sgpe_stop_record.group.core[VECTOR_RCLKX] & BITS32((qloop << 2), 4);

                        // restore Sibling's ability to change rclk as QM just did to itself
                        ex = (cindex % 4) >> 1;

                        if (G_sgpe_stop_record.group.expg[qloop] & (ex + 1))
                        {
                            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_OR, qloop, (ex ^ 1)),
                                        BIT64(CME_FLAGS_RCLK_OPERABLE));
                        }
                    }

#else

                    if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))
                    {
                        PK_TRACE_DBG("Core Request Exit But in Block Wakeup Mode so Ignore");
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKX] |= BIT32(cindex);
                    }

#endif

                    else
                    {
                        PK_TRACE_INF("Core Request Exit Confirmed");
                        G_sgpe_stop_record.group.core[VECTOR_PIGX] |= BIT32(cindex);

                        PK_TRACE("Update STOP history on core: in transition of exit");
                        scom_data.words.upper = SSH_EXIT_IN_SESSION;
                        scom_data.words.lower = 0;
                        GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
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
                    PK_TRACE_ERR("ERROR: Received Phantom Entry PIG"
                                 " When Wakeup_notify_select = 0. HALT SGPE!");

                    if (pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_PHANTOM_HALT_ENABLE_BIT_POS)
                    {
                        PK_PANIC(SGPE_PIG_TYPE23_ENTRY_WNS_CME);
                    }
                }

#if DISABLE_STOP8

                if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(qloop))
                {
                    PK_TRACE_DBG("Core Request Entry But in Block Entry Mode so Ignore");

                    if ((type == PIG_TYPE5) &&
                        (cpayload == (TYPE5_PAYLOAD_ENTRY_RCLK | STOP_LEVEL_11)))
                    {
                        G_sgpe_stop_record.group.quad[VECTOR_RCLKE] &= ~BIT32((qloop + RCLK_DIS_REQ_OFFSET));
                        G_sgpe_stop_record.group.quad[VECTOR_RCLKE] |=  BIT32((qloop + RCLK_DIS_DONE_OFFSET));
                    }
                    else
                    {
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKE] |= BIT32(cindex);
                    }
                }

                // Quad-Manager completed the resonant clock disable, proceed stop11 entry
                // block entry protocol is checked in the entry code instead of here below
                else if ((type == PIG_TYPE5) &&
                         (cpayload == (TYPE5_PAYLOAD_ENTRY_RCLK | STOP_LEVEL_11)))
                {
                    PK_TRACE_INF("Core Request Entry Allowed as Resonant Clock Disable is Completed");
                    G_sgpe_stop_record.group.quad[VECTOR_RCLKE] &= ~BIT32((qloop + RCLK_DIS_REQ_OFFSET));
                    G_sgpe_stop_record.group.quad[VECTOR_RCLKE] |=  BIT32((qloop + RCLK_DIS_DONE_OFFSET));
                }

#else

                if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(qloop))
                {
                    PK_TRACE_DBG("Core Request Entry But in Block Entry Mode so Ignore");
                    G_sgpe_stop_record.group.core[VECTOR_BLOCKE] |= BIT32(cindex);
                }

#endif

                else
                {
                    PK_TRACE_INF("Core Request Entry Confirmed");
                    G_sgpe_stop_record.group.core[VECTOR_PIGE] |= BIT32(cindex);
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
            p9_sgpe_ipc_pgpe_update_active_cores_poll_ack(UPDATE_ACTIVE_CORES_TYPE_EXIT);
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
            p9_sgpe_ipc_pgpe_update_active_cores_poll_ack(UPDATE_ACTIVE_CORES_TYPE_ENTRY);
        }

    }

#endif

    if ((cexit  = G_sgpe_stop_record.group.core[VECTOR_PIGX]) ||
        (center = G_sgpe_stop_record.group.core[VECTOR_PIGE]))
    {
        // Taking Stop5 Actions, Can only do these steps after ipc done above
        scom_data.words.lower = 0;

        for(cindex = 0; cexit || center; cexit <<= 1, center <<= 1, cindex++)
        {
            if ((cexit & BIT32(0)) && (type == 2))
            {
                p9_sgpe_stop_exit_handoff_cme(cindex);
            }

            if (center & BIT32(0))
            {
                PK_TRACE("Update STOP history: in core[%d] stop level 5", cindex);
                scom_data.words.upper = SSH_ACT_LV5_COMPLETE;
                GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);

                G_sgpe_stop_record.group.core[VECTOR_ACTIVE] &= ~BIT32(cindex);

                //================================================
                MARK_TAG(SE_LESSTHAN8_DONE, (32 >> (cindex >> 2)))
                //================================================
            }
        }
    }
}



static void
p9_sgpe_pig_thread_lanucher()
{
    PkMachineContext ctx;

    // clear group before analyzing input
    G_sgpe_stop_record.group.core[VECTOR_ENTRY] = 0;
    G_sgpe_stop_record.group.core[VECTOR_EXIT]  = 0;

    // Taking Stop8/11 Actions if any
    if (G_sgpe_stop_record.group.core[VECTOR_PIGX] ||
        G_sgpe_stop_record.group.core[VECTOR_PIGE] ||
        (G_sgpe_stop_record.group.quad[VECTOR_RCLKE] & BITS32(RCLK_DIS_DONE_OFFSET, 6)))
    {
        // block both type3 and type5, 6
        // so another doesnt interrupt until next round
        out32(OCB_OIMR1_OR, (BIT32(16) | BITS32(18, 2)));
        g_oimr_override |= (BIT64(48) | BITS64(50, 2));

        if (G_sgpe_stop_record.group.core[VECTOR_PIGX])
        {
            PK_TRACE_INF("Unblock Exit Thread");
            G_sgpe_stop_record.group.core[VECTOR_EXIT] =
                G_sgpe_stop_record.group.core[VECTOR_PIGX];
            pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
        }

        if ((G_sgpe_stop_record.group.core[VECTOR_PIGE]) ||
            (G_sgpe_stop_record.group.quad[VECTOR_RCLKE] & BITS32(RCLK_DIS_DONE_OFFSET, 6) &
             (~(G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] >> 16))))
        {
            PK_TRACE_INF("Unblock Entry Thread");
            G_sgpe_stop_record.fit.entry_pending = 1;
            G_sgpe_stop_record.group.core[VECTOR_ENTRY] =
                G_sgpe_stop_record.group.core[VECTOR_PIGE];
            pk_semaphore_post(&(G_sgpe_stop_record.sem[0]));
        }
    }
    else
    {
        PK_TRACE_INF("Nothing to do, Enable Interrupts");
        g_oimr_override &= ~BIT64(47);
        pk_irq_vec_restore(&ctx);
    }
}



void
p9_sgpe_pig_type2_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;

    //===============================
    MARK_TRAP(STOP_PIG_TYPE2_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE2: %d", irq);

    // Clear Type2 Interrupt
    out32(OCB_OISR1_CLR, BIT32(15));

    // Parse Type2 Requests
    p9_sgpe_pig_cpayload_parser(PIG_TYPE2);

    // Enable Interrupts
    pk_irq_vec_restore(&ctx);
}



void
p9_sgpe_pig_type3_handler(void* arg, PkIrqId irq)
{
    //===============================
    MARK_TRAP(STOP_PIG_TYPE3_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE3: %d", irq);

    // Clear Type3 Interrupt
    out32(OCB_OISR1_CLR, BIT32(16));

    // Parse Type3 Requests
    p9_sgpe_pig_cpayload_parser(PIG_TYPE3);

    // decide if launch the thread
    p9_sgpe_pig_thread_lanucher();
}


void
p9_sgpe_pig_type5_handler(void* arg, PkIrqId irq)
{
    //===============================
    MARK_TRAP(STOP_PIG_TYPE5_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE5: %d", irq);

    // Clear Type5 Interrupt
    out32(OCB_OISR1_CLR, BIT32(18));

#if DISABLE_STOP8

    // Parse Type5 Requests
    p9_sgpe_pig_cpayload_parser(PIG_TYPE5);

    // decide if launch the thread
    p9_sgpe_pig_thread_lanucher();

#endif

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
            else if (G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] & BIT32(qloop))
            {
                PK_TRACE_DBG("Quad Already Waken up, Assert SPWU_DONE");
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_OR, qloop), BIT64(0));
                G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE] |= BIT32(qloop);
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
        // block both type3 and type5, 6
        // so another doesnt interrupt until next round
        out32(OCB_OIMR1_OR, (BIT32(16) | BITS32(18, 2)));
        g_oimr_override |= (BIT64(48) | BITS64(50, 2));

        if (G_sgpe_stop_record.group.qswu[VECTOR_EXIT])
        {
            PK_TRACE_INF("Unblock Exit");
            pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
        }

        if (G_sgpe_stop_record.group.qswu[VECTOR_ENTRY])
        {
            PK_TRACE_INF("Unblock Entry");
            G_sgpe_stop_record.fit.entry_pending = 1;
            pk_semaphore_post(&(G_sgpe_stop_record.sem[0]));
        }
    }
    else
    {
        PK_TRACE_INF("Nothing to do, Enable Interrupts");
        g_oimr_override &= ~BIT64(47);
        pk_irq_vec_restore(&ctx);
    }
}
