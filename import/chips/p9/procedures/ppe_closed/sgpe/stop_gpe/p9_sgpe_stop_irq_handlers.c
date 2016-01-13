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
    uint8_t  qloop;
    uint8_t  cloop;
    uint8_t  event;
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
    G_sgpe_stop_record.group.vector[0] = 0;
    G_sgpe_stop_record.group.vector[1] = 0;

    // loop all quads
    for(qloop = 0; qloop < MAX_QUADS; qloop++, pending = pending << 4)
    {
        // if nothing happening to this quad, skip
        if(!(BITS32(0, 4) & pending))
        {
            continue;
        }

        PK_TRACE("q[%d]lv: %x", qloop, G_sgpe_stop_record.level[qloop].qlevel);

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
            PK_TRACE("q[%d]c[%d] payload: %x", qloop, cloop, payload);

            // check if exit request
            if (payload & TYPE2_PAYLOAD_STOP_EVENT)
            {
                PK_TRACE("q[%d]c[%d] requested exit", qloop, cloop);
                // remember which core asking to exit
                event |= SGPE_EXIT_FLAG;
                G_sgpe_stop_record.group.member.c_out |=
                    BIT32(((qloop << 2) + cloop));
                G_sgpe_stop_record.group.member.x_out |=
                    BIT16(((qloop << 1) + (cloop >> 1)));
                G_sgpe_stop_record.group.member.q_out |=
                    BIT16(qloop);
                // otherwise it is entry request with stop level in payload
            }
            else
            {
                PK_TRACE("q[%d]c[%d] requested enter to lv%d", qloop, cloop,
                         (payload & TYPE2_PAYLOAD_STOP_LEVEL));
                // read stop level on core asking to enter
                event |= SGPE_ENTRY_FLAG;
                G_sgpe_stop_record.level[qloop].qlevel &= ~BITS16((cloop << 2), 4);
                G_sgpe_stop_record.level[qloop].qlevel |=
                    ((payload & TYPE2_PAYLOAD_STOP_LEVEL) << SHIFT16(((cloop << 2) + 3)));
                G_sgpe_stop_record.group.member.c_in |=
                    BIT32(((qloop << 2) + cloop));
            }
        }

        PK_TRACE("q[%d]lv: %x", qloop, G_sgpe_stop_record.level[qloop].qlevel);
        PK_TRACE("q[%d]st: %x", qloop, G_sgpe_stop_record.state[qloop].status);

        // If an entry being requested by at least one core
        if (event & SGPE_ENTRY_FLAG)
        {
            // Calculate EX and Quad targets based on current core stop levels
            G_sgpe_stop_record.state[qloop].detail.x0req =
                G_sgpe_stop_record.level[qloop].clevel.c0lv <
                G_sgpe_stop_record.level[qloop].clevel.c1lv ?
                G_sgpe_stop_record.level[qloop].clevel.c0lv :
                G_sgpe_stop_record.level[qloop].clevel.c1lv ;
            G_sgpe_stop_record.state[qloop].detail.x1req =
                G_sgpe_stop_record.level[qloop].clevel.c2lv <
                G_sgpe_stop_record.level[qloop].clevel.c3lv ?
                G_sgpe_stop_record.level[qloop].clevel.c2lv :
                G_sgpe_stop_record.level[qloop].clevel.c3lv ;
            G_sgpe_stop_record.state[qloop].detail.q_req =
                G_sgpe_stop_record.state[qloop].detail.x0req <
                G_sgpe_stop_record.state[qloop].detail.x1req ?
                G_sgpe_stop_record.state[qloop].detail.x0req :
                G_sgpe_stop_record.state[qloop].detail.x1req ;

            // Check if EX and/or Quad qualifies to proceed with entry
            if (G_sgpe_stop_record.state[qloop].detail.x0act < SGPE_EX_BASE_LV &&
                G_sgpe_stop_record.state[qloop].detail.x0req >= SGPE_EX_BASE_LV)
            {
                G_sgpe_stop_record.group.member.x_in |= BIT16((qloop << 1));
            }

            if (G_sgpe_stop_record.state[qloop].detail.x1act < SGPE_EX_BASE_LV &&
                G_sgpe_stop_record.state[qloop].detail.x1req >= SGPE_EX_BASE_LV)
            {
                G_sgpe_stop_record.group.member.x_in |= BIT16(((qloop << 1) + 1));
            }

            if (G_sgpe_stop_record.state[qloop].detail.q_act <
                G_sgpe_stop_record.state[qloop].detail.q_req &&
                G_sgpe_stop_record.state[qloop].detail.q_req >= SGPE_EQ_BASE_LV)
            {
                G_sgpe_stop_record.group.member.q_in |= BIT16(qloop);
            }
        }

        PK_TRACE("q[%d]st: %x", qloop, G_sgpe_stop_record.state[qloop].status);
    }

    PK_TRACE("Entry: C%x, X%x, Q%x",
             G_sgpe_stop_record.group.member.c_in,
             G_sgpe_stop_record.group.member.x_in,
             G_sgpe_stop_record.group.member.q_in);
    PK_TRACE("Exit: C%x, X%x, Q%x",
             G_sgpe_stop_record.group.member.c_out,
             G_sgpe_stop_record.group.member.x_out,
             G_sgpe_stop_record.group.member.q_out);

    if (G_sgpe_stop_record.group.member.c_in)
    {
        PK_TRACE("unblock entry");
        pk_semaphore_post(&(G_sgpe_stop_record.sem[0]));
    }

    if (G_sgpe_stop_record.group.member.c_out)
    {
        PK_TRACE("unblock exit");
        pk_semaphore_post(&(G_sgpe_stop_record.sem[1]));
    }

    if (!G_sgpe_stop_record.group.vector[0])
    {
        out32(OCB_OIMR1_CLR, BIT32(15));
    }
}
