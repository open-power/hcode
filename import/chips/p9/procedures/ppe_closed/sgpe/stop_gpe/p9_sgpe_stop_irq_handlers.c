/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_irq_handlers.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2019                                                    */
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
        {0, 0},
        {0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
#if DISABLE_STOP8
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#else
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif
    },
    // wof status
    {0, 0, 0, 0},
    // fit status
    {0, 0},
    // semaphores
    {{0, 0, 0}}
};

extern uint32_t G_pib_reset_flag;


void
p9_sgpe_fit_handler()
{
    PK_TRACE("FIT: Handler Fired");

    PK_TRACE_DBG("IPB reset flag value %x", G_pib_reset_flag);
    G_pib_reset_flag = 0;
    uint32_t tpending = in32(G_OCB_OPIT0PRA) |
                        in32(G_OCB_OPIT3PRA) |
                        in32(G_OCB_OPIT6PRB);

    // reset counter if current processing stop8+
    if (G_sgpe_stop_record.wof.status_stop & STATUS_STOP_PROCESSING)
    {
        G_sgpe_stop_record.fit.starve_counter = 0;
    }
    // count to 10 times that stop8+ is not serviced, then block stop5
    else if (tpending)
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
            out32(G_OCB_OIMR1_OR, BIT32(15));
            g_oimr_override |= BIT64(47);
        }
    }
}



void
p9_sgpe_pgpe_halt_handler(void* arg, PkIrqId irq)
{
    PkMachineContext   ctx;

    g_oimr_override |=   BIT64(7);
    out32(G_OCB_OIMR0_OR,  BIT32(7));

    PK_TRACE_INF("WARNING: PGPE Halted Due to Error");
    PK_OPTIONAL_DEBUG_HALT(SGPE_PGPE_ERROR_DETECTED);
    out32(G_OCB_OISR0_CLR, BIT32(7));

    G_sgpe_stop_record.wof.update_pgpe = IPC_SGPE_PGPE_UPDATE_PGPE_HALTED;

    p9_stop_recovery_trigger();

    pk_irq_vec_restore(&ctx);
}

void
p9_sgpe_checkstop_handler(void* arg, PkIrqId irq)
{
    PkMachineContext   ctx;

    g_oimr_override |=   BIT64(16);
    out32(G_OCB_OIMR0_OR,  BIT32(16));

    PK_TRACE_INF("WARNING: System Checkstop Detected");
    PK_OPTIONAL_DEBUG_HALT(SGPE_SYSTEM_CHECKSTOP_DETECTED);
    out32(G_OCB_OISR0_CLR, BIT32(16));

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
    uint32_t      block_index   = 0;
    uint32_t      block_mask    = 0;
    uint32_t      suspend_index = 0;
    uint32_t      suspend_mask  = 0;
    uint32_t      entry_ignored = 0;
    uint32_t      exit_ignored  = 0;
#if DISABLE_STOP8
    uint32_t      s11x_rclk_enabled  = 0;
    uint32_t      s11e_rclk_disabled = 0;
#endif
    data64_t      scom_data     = {0};
    sgpeHeader_t* pSgpeImgHdr   = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

    // read typeX interrupt pending status
    // then clear interrupt pending status
    cpending = in32(OCB_OPITNPRA(type));

#if DISABLE_STOP8

    if (type == PIG_TYPE3)
    {
        // if having ongoing stop11 in resclk disable phase, hold on to all exits
        // Note: no clearing interrupt pending bits in this case
        cpending &= ~G_sgpe_stop_record.group.core[VECTOR_RCLKE];
    }

#endif

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
                cpayload = in32(OCB_OPIT0CN(cindex));
            }

            PK_TRACE_INF("Core[%d] sent PIG Type[%d] with Payload [%x]", cindex, type, cpayload);

            // if not hardware pig and is an suspend ack pig
            if ((type == PIG_TYPE3) &&
                ((~cpayload) & TYPE2_PAYLOAD_HARDWARE_WAKEUP) &&
                (cpayload  & TYPE2_PAYLOAD_SUSPEND_ACK_MASK))
            {
                if (cpayload & TYPE2_PAYLOAD_SUSPEND_SELECT_MASK)
                {
                    if ((~cpayload) & TYPE2_PAYLOAD_SUSPEND_ACTION_MASK)
                    {
                        if (cpayload & TYPE2_PAYLOAD_SUSPEND_EXIT_MASK)
                        {
                            G_sgpe_stop_record.group.core[VECTOR_PIGX] |=
                                G_sgpe_stop_record.group.core[VECTOR_SUSPENDX] & BITS32((qloop << 2), 4);
                            G_sgpe_stop_record.group.qswu[VECTOR_EXIT] |=
                                G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDX] & BITS32((qloop << 2), 4);
                            G_sgpe_stop_record.group.core[VECTOR_SUSPENDX] &= ~BITS32((qloop << 2), 4);
                            G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDX] &= ~BITS32((qloop << 2), 4);
                        }

                        if (cpayload & TYPE2_PAYLOAD_SUSPEND_ENTRY_MASK)
                        {
                            G_sgpe_stop_record.group.core[VECTOR_PIGE] |=
                                G_sgpe_stop_record.group.core[VECTOR_SUSPENDE] & BITS32((qloop << 2), 4);
                            G_sgpe_stop_record.group.qswu[VECTOR_ENTRY] |=
                                G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDE] & BITS32((qloop << 2), 4);
                            G_sgpe_stop_record.group.core[VECTOR_SUSPENDE] &= ~BITS32((qloop << 2), 4);
                            G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDE] &= ~BITS32((qloop << 2), 4);
                        }
                    }

                    continue;
                }

                for(block_mask = TYPE2_PAYLOAD_SUSPEND_ENTRY_MASK,
                    suspend_mask = STATUS_ENTRY_SUSPENDED,
                    suspend_index = VECTOR_SUSPENDE,
                    vector_index  = VECTOR_ENTRY,
                    request_index = VECTOR_PIGE,
                    block_index = VECTOR_BLOCKE;
                    block_index <= VECTOR_BLOCKX;
                    block_index++,
                    vector_index++,
                    request_index++,
                    suspend_index++,
                    suspend_mask++,
                    block_mask = block_mask << 1)
                {
                    // if entry/exit is selected for performing block/unblock operation
                    if (cpayload & block_mask)
                    {
                        // block entry/exit/both
                        if (cpayload & TYPE2_PAYLOAD_SUSPEND_ACTION_MASK)
                        {
                            G_sgpe_stop_record.group.cack[block_index] |= BIT32(cindex);

                            if (G_sgpe_stop_record.group.cack[block_index] ==
                                G_sgpe_stop_record.group.creq[block_index])
                            {
                                out32(G_OCB_OCCFLG_CLR, BIT32(SGPE_IGNORE_STOP_CONTROL));
                            }
                        }
                        // unblock entry/exit/both
                        else
                        {
                            G_sgpe_stop_record.group.cack[block_index] |= BIT32(cindex);

                            if (G_sgpe_stop_record.group.cack[block_index] ==
                                G_sgpe_stop_record.group.creq[block_index])
                            {
                                if (G_sgpe_stop_record.wof.status_stop & suspend_mask)
                                {
                                    G_sgpe_stop_record.group.core[suspend_index] |=
                                        G_sgpe_stop_record.group.core[block_index];
                                    G_sgpe_stop_record.group.qswu[suspend_index] |=
                                        G_sgpe_stop_record.group.qswu[block_index];
                                }
                                else
                                {
                                    G_sgpe_stop_record.group.core[request_index] |=
                                        G_sgpe_stop_record.group.core[block_index];
                                    G_sgpe_stop_record.group.qswu[vector_index] |=
                                        G_sgpe_stop_record.group.qswu[block_index];
                                }

                                G_sgpe_stop_record.group.core[block_index] = 0;
                                G_sgpe_stop_record.group.qswu[block_index] = 0;
                                out32(G_OCB_OCCFLG_CLR, BIT32(SGPE_IGNORE_STOP_CONTROL));
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

                if ((in32(G_OCB_OPIT2PRA) & BIT32(cindex)) &&
                    (!(tpayload & TYPE2_PAYLOAD_EXIT_EVENT)) &&
                    (tpayload & TYPE2_PAYLOAD_STOP_LEVEL))
                {
                    PK_TRACE_INF("WARNING: Leftover dec wakeup following by new TYPE2 entry PIG");
                    cpayload = tpayload;
                }
                else if (in32(G_OCB_OPIT3PRA) & BIT32(cindex))
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
                    // also not suppose to handoff to cme if resclk is not enabled before(type0)
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

                    // Priority of Processing Exit Requests
                    // 1) Receive PIG Type0 with Rclk Exit encoding, aka
                    //      Stop11 Entry aborted and Resonant Clock Enable completed
                    //      --> allow wakeup from Stop5, previously saved off to RCLKX vector
                    //      +++ set sibling RCLK_OPERATABLE
                    // AND/OR
                    // 2) Receive PIG Type3/2 with Core Exit encoding, but
                    //      Stop Exit is Suspended, on all quads
                    //      --> save off exit requests to suspend list
                    //          if it was Type0 above, move RCLKX to SUSPEND list
                    //      AND/OR
                    //      Stop Exit is Blocked, on this quad
                    //      --> save off exit requests to block list
                    //          if it was Type0 above, move RCLKX to BLOCK list

                    s11x_rclk_enabled = 0;
                    exit_ignored      = 0;

                    // Quad-Manager completed the resonant clock enable, proceed stop5 exit is now allowed
                    if ((type == PIG_TYPE0) && (cpayload == TYPE0_PAYLOAD_EXIT_RCLK))
                    {
                        PK_TRACE_INF("Core Request Exit Allowed as Resonant Clock Enable is Completed");
                        G_sgpe_stop_record.group.quad[VECTOR_RCLKX] &= ~BIT32(qloop);
                        s11x_rclk_enabled = 1;

                        // restore Sibling's ability to change rclk as QM just did to itself
                        ex = (cindex % 4) >> 1;

                        if (G_sgpe_stop_record.group.expg[qloop] & (ex + 1))
                        {
                            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_OR, qloop, (ex ^ 1)),
                                        BIT64(CME_FLAGS_RCLK_OPERABLE));
                        }
                    }

                    if (G_sgpe_stop_record.wof.status_stop & STATUS_EXIT_SUSPENDED)
                    {
                        PK_TRACE_DBG("Core Request Exit But in Suspend Wakeup Mode so Ignore");
                        exit_ignored = 1;

                        if (s11x_rclk_enabled)
                        {
                            G_sgpe_stop_record.group.core[VECTOR_SUSPENDX] |=
                                G_sgpe_stop_record.group.core[VECTOR_RCLKX] & BITS32((qloop << 2), 4);
                        }
                        else
                        {
                            G_sgpe_stop_record.group.core[VECTOR_SUSPENDX] |= BIT32(cindex);
                        }
                    }

                    if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))
                    {
                        PK_TRACE_DBG("Core Request Exit But in Block Wakeup Mode so Ignore");
                        exit_ignored = 1;

                        if (s11x_rclk_enabled)
                        {
                            G_sgpe_stop_record.group.core[VECTOR_BLOCKX] |=
                                G_sgpe_stop_record.group.core[VECTOR_RCLKX] & BITS32((qloop << 2), 4);
                        }
                        else
                        {
                            G_sgpe_stop_record.group.core[VECTOR_BLOCKX] |= BIT32(cindex);
                        }
                    }

                    if (exit_ignored)
                    {
                        continue;
                    }

                    if (s11x_rclk_enabled)
                    {
                        G_sgpe_stop_record.group.core[VECTOR_PIGX] |=
                            G_sgpe_stop_record.group.core[VECTOR_RCLKX] & BITS32((qloop << 2), 4);
                        continue;
                    }

#else

                    exit_ignored = 0;

                    if (G_sgpe_stop_record.wof.status_stop & STATUS_EXIT_SUSPENDED)
                    {
                        PK_TRACE_DBG("Core Request Exit But in Suspend Wakeup Mode so Ignore");
                        G_sgpe_stop_record.group.core[VECTOR_SUSPENDX] |= BIT32(cindex);
                        exit_ignored = 1;
                    }

                    if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))
                    {
                        PK_TRACE_DBG("Core Request Exit But in Block Wakeup Mode so Ignore");
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKX] |= BIT32(cindex);
                        exit_ignored = 1;
                    }

                    if (exit_ignored)
                    {
                        continue;
                    }

#endif

                    PK_TRACE_INF("Core Request Exit Confirmed");
                    G_sgpe_stop_record.group.core[VECTOR_PIGX] |= BIT32(cindex);

                    PK_TRACE("Update STOP history on core: in transition of exit");
                    scom_data.words.upper = SSH_EXIT_IN_SESSION;
                    scom_data.words.lower = 0;
                    GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
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

                // Priority of Processing Entry Requests
                // 1) Receive PIG Type0 with Rclk Entry encoding, aka Resonant Clock Disable completed
                //      --> allow stop11 entry to proceed
                // ELSE
                // 2) Receive PIG Type3/2 with Core Entry encoding, but
                //     Stop Entry is Suspended, on all quads
                //     --> save off entry requests to suspend list
                // AND/OR
                //     Stop Entry is Blocked, on this quad
                //     --> save off entry requests to block list

                entry_ignored      = 0;
                s11e_rclk_disabled = 0;

                // Quad-Manager completed the resonant clock disable, proceed stop11 entry
                // block entry protocol is checked in the entry code instead of here below
                if ((type == PIG_TYPE0) &&
                    (cpayload == (TYPE0_PAYLOAD_ENTRY_RCLK | STOP_LEVEL_11)))
                {
                    PK_TRACE_INF("Core Request Entry Allowed as Resonant Clock Disable is Completed");
                    G_sgpe_stop_record.group.quad[VECTOR_RCLKE] &= ~BIT32((qloop + RCLK_DIS_REQ_OFFSET));
                    G_sgpe_stop_record.group.quad[VECTOR_RCLKE] |=  BIT32((qloop + RCLK_DIS_DONE_OFFSET));
                    s11e_rclk_disabled = 1;
                }

                if (G_sgpe_stop_record.wof.status_stop & STATUS_ENTRY_SUSPENDED && !s11e_rclk_disabled)
                {
                    PK_TRACE_DBG("Core Request Entry But in Suspend Entry Mode so Ignore");
                    G_sgpe_stop_record.group.core[VECTOR_SUSPENDE] |= BIT32(cindex);
                    entry_ignored = 1;
                }

                if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(qloop) && !s11e_rclk_disabled)
                {
                    PK_TRACE_DBG("Core Request Entry But in Block Entry Mode so Ignore");
                    G_sgpe_stop_record.group.core[VECTOR_BLOCKE] |= BIT32(cindex);
                    entry_ignored = 1;
                }

                if (entry_ignored || s11e_rclk_disabled)
                {
                    continue;
                }

#else

                entry_ignored = 0;

                if (G_sgpe_stop_record.wof.status_stop & STATUS_ENTRY_SUSPENDED)
                {
                    PK_TRACE_DBG("Core Request Entry But in Suspend Entry Mode so Ignore");
                    G_sgpe_stop_record.group.core[VECTOR_SUSPENDE] |= BIT32(cindex);
                    entry_ignored = 1;
                }

                if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(qloop))
                {
                    PK_TRACE_DBG("Core Request Entry But in Block Entry Mode so Ignore");
                    G_sgpe_stop_record.group.core[VECTOR_BLOCKE] |= BIT32(cindex);
                    entry_ignored = 1;
                }

                if (entry_ignored)
                {
                    continue;
                }

#endif

                PK_TRACE_INF("Core Request Entry Confirmed");
                G_sgpe_stop_record.group.core[VECTOR_PIGE] |= BIT32(cindex);
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

    // Taking Stop5 Actions, Can only do these steps after ipc done above
    scom_data.words.lower = 0;
    cexit  = G_sgpe_stop_record.group.core[VECTOR_PIGX];
    center = G_sgpe_stop_record.group.core[VECTOR_PIGE];

    for(cindex = 0; cexit || center; cexit <<= 1, center <<= 1, cindex++)
    {
        if (cexit & BIT32(0))
        {
            G_sgpe_stop_record.group.core[VECTOR_ACTIVE] |= BIT32(cindex);

            if (type == 2)
            {
                p9_sgpe_stop_exit_handoff_cme(cindex);
            }
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

    if (type == PIG_TYPE2)
    {
        G_sgpe_stop_record.group.core[VECTOR_PIGX] = 0;
        G_sgpe_stop_record.group.core[VECTOR_PIGE] = 0;
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
    if (G_sgpe_stop_record.group.qswu[VECTOR_EXIT] ||
        G_sgpe_stop_record.group.qswu[VECTOR_ENTRY] ||
        G_sgpe_stop_record.group.core[VECTOR_PIGX] ||
        G_sgpe_stop_record.group.core[VECTOR_PIGE] ||
        (G_sgpe_stop_record.group.quad[VECTOR_RCLKE] & BITS32(RCLK_DIS_DONE_OFFSET, 6)))
    {
        // block both type3, type0, type6
        // so another doesnt interrupt until next round
        out32(G_OCB_OIMR1_OR, (BIT32(13) | BIT32(16) | BIT32(19)));
        g_oimr_override |= (BIT64(45) | BIT64(48) | BIT64(51));

        if ((G_sgpe_stop_record.group.core[VECTOR_PIGX]) ||
            (G_sgpe_stop_record.group.qswu[VECTOR_EXIT]))
        {
            PK_TRACE_INF("Unblock Exit Thread");
            G_sgpe_stop_record.group.core[VECTOR_EXIT] =
                G_sgpe_stop_record.group.core[VECTOR_PIGX];
            G_sgpe_stop_record.group.core[VECTOR_PIGX] = 0;
            pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
        }

        if ((G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]) ||
            (G_sgpe_stop_record.group.core[VECTOR_PIGE]) ||
            (G_sgpe_stop_record.group.quad[VECTOR_RCLKE] & BITS32(RCLK_DIS_DONE_OFFSET, 6) &
             (~(G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] >> 16))))
        {
            PK_TRACE_INF("Unblock Entry Thread");
            G_sgpe_stop_record.fit.entry_pending = 1;
            G_sgpe_stop_record.group.core[VECTOR_ENTRY] =
                G_sgpe_stop_record.group.core[VECTOR_PIGE];
            G_sgpe_stop_record.group.core[VECTOR_PIGE] = 0;
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



uint32_t
p9_sgpe_stop_suspend_db1_cme(uint32_t qloop, uint32_t msgid)
{
    uint32_t  cstart    = 0;
    uint32_t  cindex    = 0;
    uint32_t  cloop     = 0;
    uint32_t  cmask     = 0;
    uint32_t  req_list  = 0;
    data64_t  scom_data = {0};

    // For each quad that is not in STOP 11, send doorbeel
    // Note: Stop11 wakeup will write CME_FLAGS to inform CME about BLOCK Entry
    //       No need for BLOCK Exit with STOP11 tells CME as the wakeup itself is blocked
    if (!(G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] & BIT32(qloop)))
    {
        return 0;
    }

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

        if (cloop != (cstart + CORES_PER_EX)) // if ex is partial good
        {
            req_list |= BIT32(cindex);
            scom_data.words.upper = msgid;
            scom_data.words.lower = 0;

#if NIMBUS_DD_LEVEL != 10

            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1, cindex), scom_data.value);

#else

            p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1, cindex), scom_data.value);

#endif

        }
    }

    return req_list;
}



void
p9_sgpe_ipi3_low_handler(void* arg, PkIrqId irq)
{
    uint32_t req_list      = 0;
    uint32_t qloop         = 0;
    uint32_t action        = 0;
    uint32_t occflg        = in32(G_OCB_OCCFLG) & BITS32(SGPE_IGNORE_STOP_CONTROL, 4);
    data64_t scom_data     = {0};

    PK_TRACE_INF("IPI-IRQ: %d", irq);
    // Clear ipi3_lo interrupt
    out32(G_OCB_OISR1_CLR, BIT32(29));

    // occflg[9]control + [11]exit/[12]entry(filter bit[10] here)
    // bit[9] must be on to perform any operations below
    // also verify we are doing at least one operation from entry/exit
    // otherwise, even bit[9] is on, the requested operation is undefined
    // thus cannot be performed(no error taking out when this happens)
    if ((occflg & (~BIT32(SGPE_IGNORE_STOP_ACTION))) > BIT32(SGPE_IGNORE_STOP_CONTROL))
    {
        // msg[4-6] << occflg[10]enable + [11]exit/[12]entry (filter bit[9] here)
        // msg[4] : perform block/unblock operation (enable/disable ignore stop func)
        // msg[5] : perform exit block/unblock operation
        // msg[6] : perform entry block/unblock operation
        // msg[7] : reserved for suspend function
        action = ((occflg & (~BIT32(SGPE_IGNORE_STOP_CONTROL))) << 6);

        if (occflg & BIT32(SGPE_IGNORE_STOP_EXITS))
        {
            G_sgpe_stop_record.group.creq[VECTOR_BLOCKX] = 0;
            G_sgpe_stop_record.group.cack[VECTOR_BLOCKX] = 0;
        }

        if (occflg & BIT32(SGPE_IGNORE_STOP_ENTRIES))
        {
            G_sgpe_stop_record.group.creq[VECTOR_BLOCKE] = 0;
            G_sgpe_stop_record.group.cack[VECTOR_BLOCKE] = 0;
        }

        for (qloop = 0; qloop < MAX_QUADS; qloop++)
        {
            if (!(G_sgpe_stop_record.group.quad[VECTOR_CONFIG] & BIT32(qloop)))
            {
                continue;
            }

            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QCCR, qloop), scom_data.value);

            // target quad is to participate block/unblock exit
            if (scom_data.words.upper & BIT32(QPPM_QCCR_IGNORE_QUAD_STOP_EXITS))
            {
                action = action | BIT32(5);

                if (action & BIT32(4))
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
                action = action & (~BIT32(5));
            }

            // target quad is to participate block/unblock entry
            if (scom_data.words.upper & BIT32(QPPM_QCCR_IGNORE_QUAD_STOP_ENTRIES))
            {
                action = action | BIT32(6);

                if (action & BIT32(4))
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
                action = action & (~BIT32(6));
            }

            // if this quad participates either entry/exit for block/unlock
            // send msg; otherwise skip the quad
            if (action & BITS32(5, 2))
            {
                req_list = p9_sgpe_stop_suspend_db1_cme(qloop, action);

                if (action & BIT32(5))
                {
                    G_sgpe_stop_record.group.creq[VECTOR_BLOCKX] |= req_list;
                }

                if (action & BIT32(6))
                {
                    G_sgpe_stop_record.group.creq[VECTOR_BLOCKE] |= req_list;
                }
            }
        }

        if ((occflg & BIT32(SGPE_IGNORE_STOP_EXITS)) &&
            (G_sgpe_stop_record.group.creq[VECTOR_BLOCKX] == 0))
        {
            if (!(occflg & BIT32(SGPE_IGNORE_STOP_ACTION)))
            {
                if (G_sgpe_stop_record.wof.status_stop & STATUS_EXIT_SUSPENDED)
                {
                    G_sgpe_stop_record.group.core[VECTOR_SUSPENDX] |=
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKX];
                    G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDX] |=
                        G_sgpe_stop_record.group.qswu[VECTOR_BLOCKX];
                }
                else
                {
                    G_sgpe_stop_record.group.core[VECTOR_PIGX] |=
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKX];
                    G_sgpe_stop_record.group.qswu[VECTOR_EXIT] |=
                        G_sgpe_stop_record.group.qswu[VECTOR_BLOCKX];
                }

                G_sgpe_stop_record.group.core[VECTOR_BLOCKX] = 0;
                G_sgpe_stop_record.group.qswu[VECTOR_BLOCKX] = 0;
            }

            out32(G_OCB_OCCFLG_CLR, BIT32(SGPE_IGNORE_STOP_CONTROL));
        }

        if ((occflg & BIT32(SGPE_IGNORE_STOP_ENTRIES)) &&
            (G_sgpe_stop_record.group.creq[VECTOR_BLOCKE] == 0))
        {
            if (!(occflg & BIT32(SGPE_IGNORE_STOP_ACTION)))
            {
                if (G_sgpe_stop_record.wof.status_stop & STATUS_ENTRY_SUSPENDED)
                {
                    G_sgpe_stop_record.group.core[VECTOR_SUSPENDE] |=
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKE];
                    G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDE] |=
                        G_sgpe_stop_record.group.qswu[VECTOR_BLOCKE];
                }
                else
                {
                    G_sgpe_stop_record.group.core[VECTOR_PIGE] |=
                        G_sgpe_stop_record.group.core[VECTOR_BLOCKE];
                    G_sgpe_stop_record.group.qswu[VECTOR_ENTRY] |=
                        G_sgpe_stop_record.group.qswu[VECTOR_BLOCKE];
                }

                G_sgpe_stop_record.group.core[VECTOR_BLOCKE] = 0;
                G_sgpe_stop_record.group.qswu[VECTOR_BLOCKE] = 0;
            }

            out32(G_OCB_OCCFLG_CLR, BIT32(SGPE_IGNORE_STOP_CONTROL));
        }
    }

    // decide if launch the thread
    p9_sgpe_pig_thread_lanucher();
}



void
p9_sgpe_pig_type2_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;

    //===============================
    MARK_TRAP(STOP_PIG_TYPE2_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE2: %d", irq);

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

    // Parse Type3 Requests
    p9_sgpe_pig_cpayload_parser(PIG_TYPE3);

    // decide if launch the thread
    p9_sgpe_pig_thread_lanucher();
}


void
p9_sgpe_pig_type0_handler(void* arg, PkIrqId irq)
{
    //===============================
    MARK_TRAP(STOP_PIG_TYPE0_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE0: %d", irq);

#if DISABLE_STOP8

    // Parse Type0 Requests
    p9_sgpe_pig_cpayload_parser(PIG_TYPE0);

    // decide if launch the thread
    p9_sgpe_pig_thread_lanucher();

#endif

}



void
p9_sgpe_pig_type6_handler(void* arg, PkIrqId irq)
{
    uint32_t         qloop    = 0;
    uint32_t         qpending = 0;
    uint32_t         qpayload = 0;
    uint32_t         exit_ignored  = 0;
    uint32_t         entry_ignored = 0;

    //===============================
    MARK_TRAP(STOP_PIG_TYPE6_HANDLER)
    //===============================
    PK_TRACE_DBG("PIG-TYPE6: %d", irq);

    // Clear type6 interrupt
    out32(G_OCB_OISR1_CLR, BIT32(19));

    // read type6 interrupt pending status
    // then clear interrupt pending status
    qpending = in32(G_OCB_OPIT6PRB);
    out32(G_OCB_OPIT6PRB_CLR, qpending);
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
            else
            {
                if (G_sgpe_stop_record.wof.status_stop & STATUS_EXIT_SUSPENDED)
                {
                    PK_TRACE_DBG("Quad is in Suspend Wakeup Mode, Ignore Now");
                    G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDX] |= BIT32(qloop);
                    exit_ignored = 1;
                }

                if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKX] & BIT32(qloop))
                {
                    PK_TRACE_DBG("Quad is in Block Wakeup Mode, Ignore Now");
                    G_sgpe_stop_record.group.qswu[VECTOR_BLOCKX] |= BIT32(qloop);
                    exit_ignored = 1;
                }

                if (!exit_ignored)
                {
                    G_sgpe_stop_record.group.qswu[VECTOR_EXIT] |= BIT32(qloop);
                }
            }
        }
        else
        {
            PK_TRACE_DBG("Quad Drop Special Wakeup, Clearing Done");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_CLR, qloop), BIT64(0));

            if (G_sgpe_stop_record.wof.status_stop & STATUS_ENTRY_SUSPENDED)
            {
                PK_TRACE_DBG("Quad is in Suspend Entry Mode, Ignore Re-entry Now");
                G_sgpe_stop_record.group.qswu[VECTOR_SUSPENDE] |= BIT32(qloop);
                entry_ignored = 1;
            }

            if (G_sgpe_stop_record.group.quad[VECTOR_BLOCKE] & BIT32(qloop))
            {
                PK_TRACE_DBG("Quad is in Block Entry Mode, Ignore Re-entry Now");
                G_sgpe_stop_record.group.qswu[VECTOR_BLOCKE] |= BIT32(qloop);
                entry_ignored = 1;
            }

            if (!entry_ignored)
            {
                G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]  |=  BIT32(qloop);
                G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE] &= ~BIT32(qloop);
            }
        }
    }

    PK_TRACE_DBG("Quad Special Wakeup: Raise[%x], Drop[%x]",
                 G_sgpe_stop_record.group.qswu[VECTOR_EXIT],
                 G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]);

    // decide if launch the thread
    p9_sgpe_pig_thread_lanucher();
}
