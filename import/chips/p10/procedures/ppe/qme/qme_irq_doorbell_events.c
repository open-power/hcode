/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_irq_doorbell_events.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2019                                                    */
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

#include "qme.h"

extern QmeRecord G_qme_record;




//wof interlock, safe mode
void
qme_doorbell2_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_DB2);
    PK_TRACE("Event: Doorbell 2");
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_DB2);
}

//block entry/exit
void
qme_doorbell1_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_DB1);

    G_qme_record.doorbell1_msg = in32(QME_LCL_DB1) >> SHIFT32(7);
    out32(QME_LCL_DB1,  0);
    out32(QME_LCL_EISR_CLR, BIT32(17));
    uint32_t scratchB = in32(QME_LCL_SCRB);
    uint32_t pig_data = 0;

    PK_TRACE_INF("Event: UIH Status[%x], Doorbell 1 Message[%x], Scratch B[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.doorbell1_msg,
                 scratchB);

    // block msgs(0x5-0x7)
    if ( (G_qme_record.doorbell1_msg > STOP_BLOCK_ACTION) &&
         (G_qme_record.doorbell1_msg <= STOP_BLOCK_ENCODE) )
    {
        // exit
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_EXIT)
        {
            G_qme_record.c_block_wake_req   = (scratchB & BITS32(0, 4)) >> SHIFT32(3);
            G_qme_record.c_block_wake_done |= G_qme_record.c_block_wake_req;

            // Set PM_BLOCK_INTERRUPTS
            // prevent the core from waking on any interrupts
            // (including Decrementer and Hypervisor Decrementer).
            out32( QME_LCL_CORE_ADDR_WR(
                       QME_SCSR_WO_OR, G_qme_record.c_block_wake_req ),
                   BIT32(0) );

            // Block Exit Enabled
            out32(QME_LCL_SCRB_OR, ( G_qme_record.c_block_wake_req << SHIFT32(11) ));
        }

        // entry
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_ENTRY)
        {
            G_qme_record.c_block_stop_req   = (scratchB & BITS32(4, 4)) >> SHIFT32(7);
            G_qme_record.c_block_stop_done |= G_qme_record.c_block_stop_req;

            // Set PM_EXIT
            // prevent the core from entering any STOP state.
            out32( QME_LCL_CORE_ADDR_WR(
                       QME_SCSR_WO_OR, G_qme_record.c_block_stop_req ),
                   BIT32(1) );

            // Block Entry Enabled
            out32(QME_LCL_SCRB_OR, ( G_qme_record.c_block_stop_req << SHIFT32(15) ));
        }

        // acknowledge the mode has been entered
        // This occurs even if no cores actually transtiion
        // as the XGPE does not have knowledge of the selected cores.
        pig_data = ( PIG_TYPE_F << SHIFT32(4) ) &
                   ( G_qme_record.doorbell1_msg << SHIFT32(23) );
        qme_send_pig_packet(pig_data);
    }
    // unblock msgs(0x1-0x3)
    else if ( (G_qme_record.doorbell1_msg < STOP_BLOCK_ACTION) &&
              (G_qme_record.doorbell1_msg > 0) )
    {
        // exit
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_EXIT)
        {
            G_qme_record.c_block_wake_req   = (scratchB & BITS32(0, 4)) >> SHIFT32(3);
            G_qme_record.c_block_wake_done &= ~( G_qme_record.c_block_wake_req );

            // Clear PM_BLOCK_INTERRUPTS
            out32( QME_LCL_CORE_ADDR_WR(
                       QME_SCSR_WO_CLEAR, G_qme_record.c_block_wake_req ),
                   BIT32(0) );

            // Block Exit Disabled
            out32(QME_LCL_SCRB_CLR, ( G_qme_record.c_block_wake_req << SHIFT32(11) ));
        }

        // entry
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_ENTRY)
        {
            G_qme_record.c_block_stop_req   = (scratchB & BITS32(4, 4)) >> SHIFT32(7);
            G_qme_record.c_block_stop_done &= ~( G_qme_record.c_block_stop_req );

            // Clear PM_EXIT
            // prevent the core from entering any STOP state.
            out32( QME_LCL_CORE_ADDR_WR(
                       QME_SCSR_WO_CLEAR, G_qme_record.c_block_stop_req ),
                   BIT32(1) );

            // Block Entry Disabled
            out32(QME_LCL_SCRB_CLR, ( G_qme_record.c_block_stop_req << SHIFT32(15) ));
        }

        // acknowledge the mode has been entered
        // This occurs even if no cores actually transtiion
        // as the XGPE does not have knowledge of the selected cores.
        pig_data = ( PIG_TYPE_F << SHIFT32(4) ) &
                   ( G_qme_record.doorbell1_msg << SHIFT32(23) );
        qme_send_pig_packet(pig_data);
    }

    PK_TRACE_DBG("Block Exit Req[%x], Block Exit Done[%x], Block Entry Req[%x], Block Entry Done[%x]",
                 G_qme_record.c_block_wake_req,
                 G_qme_record.c_block_wake_done,
                 G_qme_record.c_block_stop_req,
                 G_qme_record.c_block_stop_done);

    qme_eval_eimr_override();
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_DB1);
}

//core throttle
void
qme_doorbell0_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_DB0);
    PK_TRACE("Event: Doorbell 0");
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_DB0);
}

void
qme_pmcr_update_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_PMCR);
    PK_TRACE("Event: PMCR Update");
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_PMCR);
}

void
qme_send_pig_packet(uint32_t data)
{
    uint32_t temp = 0;

    wrteei(0);

    // First make sure no interrupt request is currently granted
    do
    {
        // Read PPMPIG status
        temp = in32(QME_LCL_PIG);
    }
    while ( temp & BIT32(24) );

    // Send PIG packet
    out32(QME_LCL_PIG, data);
    PK_TRACE_DBG("PIG: Sending[%x]", data);

    wrteei(1);
}
