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

SgpeStopRecord G_sgpe_stop_record;

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
p9_sgpe_stop_pig_type2_handler(void* arg, PkIrqId irq)
{
    int      event;
    uint32_t qloop;
    uint32_t cloop;
    uint32_t cgood;
    uint32_t pending;
    uint32_t payload;

    MARK_TRAP(STOP_TYPE2_HANDLER)
    // Disable Type2 Interrupt
    out32(OCB_OIMR1_OR, BIT32(15));
    // Cleart Type2 Interrupt
    out32(OCB_OISR1_CLR, BIT32(15));
    // read type2 interrupt status
    pending = in32(OCB_OPITNPRA(2));
    // then clear interrupt pending bits
    out32(OCB_OPITNPRA_CLR(2), pending);

    PK_TRACE("Type2: %x", pending);
    // clear group before analyzing input
    G_sgpe_stop_record.group.entry_x0 = 0;
    G_sgpe_stop_record.group.entry_x1 = 0;
    G_sgpe_stop_record.group.entry_x  = 0;
    G_sgpe_stop_record.group.entry_q  = 0;
    G_sgpe_stop_record.group.entry_c  = 0;
    G_sgpe_stop_record.group.exit_x0  = 0;
    G_sgpe_stop_record.group.exit_x1  = 0;
    G_sgpe_stop_record.group.exit_x   = 0;
    G_sgpe_stop_record.group.exit_q   = 0;
    G_sgpe_stop_record.group.exit_c   = 0;

    // loop all quads
    for(qloop = 0, cgood = G_sgpe_stop_record.group.good_c;
        qloop < MAX_QUADS;
        qloop++, pending = pending << 4, cgood = cgood << 4)
    {
        // if nothing happening to this quad, skip
        if(!(BITS32(0, 4) & pending & cgood))
        {
            continue;
        }

        PK_TRACE("q[%d]", qloop);
        PK_TRACE("clv[%d][%d][%d][%d]",
                 G_sgpe_stop_record.level[qloop][0],
                 G_sgpe_stop_record.level[qloop][1],
                 G_sgpe_stop_record.level[qloop][2],
                 G_sgpe_stop_record.level[qloop][3]);

        // then loop all cores in the quad
        for(cloop = 0, event = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            // again skip core that doesnt have interrupt pending
            if (!(pending & BIT32(cloop)))
            {
                continue;
            }

            // read payload on core has interrupt pending
            payload = in32(OCB_OPIT2CN(((qloop << 2) + cloop)));
            PK_TRACE("c[%d] payload [%x]", cloop, payload);

            // check if exit request
            if (payload & TYPE2_PAYLOAD_STOP_EVENT)
            {
                PK_TRACE("c[%d] request exit", cloop);
                // remember which core asking to exit
                event |= SGPE_EXIT_FLAG;

                if (cloop < CORES_PER_EX)
                {
                    G_sgpe_stop_record.group.exit_x0 |= BIT32(qloop);
                    G_sgpe_stop_record.group.exit_x  |= BIT32(qloop << 1);
                }
                else
                {
                    G_sgpe_stop_record.group.exit_x1 |= BIT32(qloop);
                    G_sgpe_stop_record.group.exit_x  |= BIT32((qloop << 1) + 1);
                }

                G_sgpe_stop_record.group.exit_q |= BIT32(qloop);
                G_sgpe_stop_record.group.exit_c |=
                    BIT32(((qloop << 2) + cloop));
            }
            // otherwise it is entry request with stop level in payload
            else
            {
                PK_TRACE("c[%d] request enter to lv[%d]", cloop,
                         (payload & TYPE2_PAYLOAD_STOP_LEVEL));
                // read stop level on core asking to enter
                event |= SGPE_ENTRY_FLAG;
                G_sgpe_stop_record.level[qloop][cloop] =
                    (payload & TYPE2_PAYLOAD_STOP_LEVEL);
                G_sgpe_stop_record.group.entry_c |=
                    BIT32(((qloop << 2) + cloop));
            }

        }

        // If an entry being requested by at least one core
        if (event & SGPE_ENTRY_FLAG)
        {
            PK_TRACE("clv[%d][%d][%d][%d]",
                     G_sgpe_stop_record.level[qloop][0],
                     G_sgpe_stop_record.level[qloop][1],
                     G_sgpe_stop_record.level[qloop][2],
                     G_sgpe_stop_record.level[qloop][3]);

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

            // Check if EX and/or Quad qualifies to proceed with entry
            if (G_sgpe_stop_record.state[qloop].act_state_x0 <
                SGPE_EX_BASE_LV &&
                G_sgpe_stop_record.state[qloop].req_state_x0 >=
                SGPE_EX_BASE_LV)
            {
                G_sgpe_stop_record.group.entry_x0 |= BIT32(qloop);
                G_sgpe_stop_record.group.entry_x  |= BIT32(qloop << 1);
            }

            if (G_sgpe_stop_record.state[qloop].act_state_x1 <
                SGPE_EX_BASE_LV &&
                G_sgpe_stop_record.state[qloop].req_state_x1 >=
                SGPE_EX_BASE_LV)
            {
                G_sgpe_stop_record.group.entry_x1 |= BIT32(qloop);
                G_sgpe_stop_record.group.entry_x  |= BIT32((qloop << 1) + 1);
            }

            if (G_sgpe_stop_record.state[qloop].act_state_q <
                G_sgpe_stop_record.state[qloop].req_state_q &&
                G_sgpe_stop_record.state[qloop].req_state_q >=
                SGPE_EQ_BASE_LV)
            {
                G_sgpe_stop_record.group.entry_q |= BIT32(qloop);
            }

        }

        // todo MARK_TAG(SE_LESSTHAN8_WAIT)
        PK_TRACE("req:x0lv[%d]x1lv[%d]qlv[%d]",
                 G_sgpe_stop_record.state[qloop].req_state_x0,
                 G_sgpe_stop_record.state[qloop].req_state_x1,
                 G_sgpe_stop_record.state[qloop].req_state_q);

        PK_TRACE("act:x0lv[%d]x1lv[%d]qlv[%d]",
                 G_sgpe_stop_record.state[qloop].act_state_x0,
                 G_sgpe_stop_record.state[qloop].act_state_x1,
                 G_sgpe_stop_record.state[qloop].act_state_q);
    }

    G_sgpe_stop_record.group.entry_x0 &= G_sgpe_stop_record.group.good_x0;
    G_sgpe_stop_record.group.entry_x1 &= G_sgpe_stop_record.group.good_x1;
    G_sgpe_stop_record.group.entry_x  &= G_sgpe_stop_record.group.good_x;
    G_sgpe_stop_record.group.entry_q  &= G_sgpe_stop_record.group.good_q;
    G_sgpe_stop_record.group.entry_c  &= G_sgpe_stop_record.group.good_c;
    G_sgpe_stop_record.group.exit_x0  &= G_sgpe_stop_record.group.good_x0;
    G_sgpe_stop_record.group.exit_x1  &= G_sgpe_stop_record.group.good_x1;
    G_sgpe_stop_record.group.exit_x   &= G_sgpe_stop_record.group.good_x;
    G_sgpe_stop_record.group.exit_q   &= G_sgpe_stop_record.group.good_q;
    G_sgpe_stop_record.group.exit_c   &= G_sgpe_stop_record.group.good_c;

    PK_TRACE("Good: X0[%x] X1[%x] Q[%x] C[%x]",
             G_sgpe_stop_record.group.good_x0,
             G_sgpe_stop_record.group.good_x1,
             G_sgpe_stop_record.group.good_q,
             G_sgpe_stop_record.group.good_c);
    PK_TRACE("Entry: X0[%x] X1[%x] Q[%x] C[%x]",
             G_sgpe_stop_record.group.entry_x0,
             G_sgpe_stop_record.group.entry_x1,
             G_sgpe_stop_record.group.entry_q,
             G_sgpe_stop_record.group.entry_c);
    PK_TRACE("Exit: X0[%x] X1[%x] Q[%x] C[%x]",
             G_sgpe_stop_record.group.exit_x0,
             G_sgpe_stop_record.group.exit_x1,
             G_sgpe_stop_record.group.exit_q,
             G_sgpe_stop_record.group.exit_c);
    PK_TRACE("X: G[%x] E[%x] X[%x]",
             G_sgpe_stop_record.group.good_x,
             G_sgpe_stop_record.group.entry_x,
             G_sgpe_stop_record.group.exit_x);

    if (G_sgpe_stop_record.group.exit_c)
    {
        PK_TRACE("unblock exit");
        pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
    }

    if (G_sgpe_stop_record.group.entry_c)
    {
        PK_TRACE("unblock entry");
        pk_semaphore_post(&(G_sgpe_stop_record.sem[0]));
    }

}
