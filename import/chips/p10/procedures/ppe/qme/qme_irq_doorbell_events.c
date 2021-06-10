/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_irq_doorbell_events.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2021                                                    */
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
extern uint64_t g_eimr_override;

IOTA_BEGIN_TASK_TABLE
IOTA_TASK(qme_top_priority_event),                   // 0 Top  (Debugger/HB_Loss/QuadXstop)
          IOTA_TASK(qme_doorbell2_event),            // 1 DB2  (WOF/SafeMode/BlockStopWake)
          IOTA_TASK(qme_doorbell1_event),            // 2 DB1  (XGPE reserved)
          IOTA_TASK(qme_special_wakeup_rise_event),  // 3 SPWU_RISE
          IOTA_TASK(qme_special_wakeup_fall_event),  // 4 SPWU_FALL
          IOTA_TASK(qme_regular_wakeup_fast_event),  // 5 RGWU_Hipri
          IOTA_TASK(qme_pmcr_update_event),          // 6 PMCR (Permentaly masked as handled by PSREQ reg)
          IOTA_TASK(qme_doorbell0_event),            // 7 DB0  (Core Throttle)
          IOTA_TASK(qme_mma_active_event),           // 8 MMA  (TODO MMA priority tops spwu to be discussed)
          IOTA_TASK(qme_pm_state_active_fast_event), // 9 STOP_Hipri
          IOTA_TASK(qme_regular_wakeup_slow_event),  // 10 RGWU_Lopri
          IOTA_TASK(qme_pm_state_active_slow_event), // 11 STOP_Lopri
          IOTA_NO_TASK                               // Should never see these
          IOTA_END_TASK_TABLE;

void
qme_top_priority_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_TOPPRI);
    uint64_t fir = 0;
    uint64_t fir_action = 0;
#if POWER10_DD_LEVEL == 10
    uint64_t top = in64(QME_LCL_EISR) & BITS64(0, 8);
    out64(QME_LCL_EIMR_OR, top);
    g_eimr_override |= top;
    PK_TRACE("Event: Top Priority Error/Debug Interrupt[0:DEBUGGER,1:TRIGGER,2:SYS_XSTOP,3:LFIR]: %x",
             (uint32_t)(top >> 60));
#else
    uint32_t top = in32(QME_LCL_EISR) & BITS32(0, 8);
    out32(QME_LCL_EIMR_OR, top);
    g_eimr_override |= ((uint64_t)top << 32);
    PK_TRACE("Event: Top Priority Error/Debug Interrupt[0:DEBUGGER,1:TRIGGER,2:SYS_XSTOP,3:LFIR]: %x", top);
#endif

    if( top & BIT64(3) )
    {
        if (!G_IsSimics)
        {
            G_qme_record.qme_lfir = in64( QME_LCL_LFIR );
            fir_action = in64( QME_LCL_ACTION0 );
            fir = ( G_qme_record.qme_lfir & fir_action );
            fir_action = in64( QME_LCL_ACTION1 );
            fir = ( fir & ( ~fir_action ) );
            out64(QME_LCL_LFIRMASK_OR, fir);
            PK_TRACE_INF("Event: QME LFIR %x %x", (uint32_t)(fir >> 32), (uint32_t)(fir & 0xFFFFFFFF) );
        }

        //currently do not decide to halt qme upon just any lfir
        //IOTA_PANIC(QME_LFIR_INDICATION_DETECTED);
    }

    if( top & BIT64(2) )
    {
        PK_TRACE_INF("Event: SYSTEM CHECKSTOP");

        if (in32( QME_LCL_FLAGS ) & BIT32(QME_FLAGS_HALT_ON_CHECKSTOP))
        {
            IOTA_PANIC(QME_SYSTEM_CHECKSTOP_DETECTED);
        }
    }

    if( top & BITS64(0, 2) )
    {
        PK_TRACE_INF("Event: SOFTWARE DEBUGGER");
        IOTA_PANIC(QME_DEBUGGER_TRIGGER_DETECTED);
    }

    //placeholder if flag: errlog and halt
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_TOPPRI);
}

//wof interlock, safe mode
void
qme_doorbell2_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_DB2);
    PK_TRACE("Event: Doorbell 2");
#if POWER10_DD_LEVEL == 10
    out64( QME_LCL_EISR_CLR, BIT64(18) );
#else
    out32( QME_LCL_EISR_CLR, BIT32(18) );
#endif
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_DB2);
}

//block entry/exit
void
qme_doorbell1_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_DB1);

    G_qme_record.doorbell1_msg = in32(QME_LCL_DB1) >> SHIFT32(7);
    out32(QME_LCL_DB1,  0);
    //HW525040
#if POWER10_DD_LEVEL == 10
    out64( QME_LCL_EISR_CLR, BIT64(17) );
#else
    out32(QME_LCL_EISR_CLR, BIT32(17));
#endif
    uint32_t scratchB = in32(QME_LCL_SCRB);
    uint32_t pig_data = 0;

    PK_TRACE_INF("Event: UIH Status[%x], Doorbell 1 Message[%x], Scratch B[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.doorbell1_msg,
                 scratchB);

    // block msgs(0x5-0x7) and scratchB register shouldn't be 0
    if ( (G_qme_record.doorbell1_msg > STOP_BLOCK_ACTION) &&
         (G_qme_record.doorbell1_msg <= STOP_BLOCK_ENCODE) &&
         scratchB)
    {
        // exit
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_EXIT)
        {
            G_qme_record.c_block_wake_req   = (scratchB &
                                               BITS32(QME_SCRB_STOP_BLOCK_EXIT_VECTOR_BASE, QME_SCRB_STOP_BLOCK_EXIT_VECTOR_SIZE)) >>
                                              SHIFT32((QME_SCRB_STOP_BLOCK_EXIT_VECTOR_BASE + QME_SCRB_STOP_BLOCK_EXIT_VECTOR_SIZE - 1));

            if( G_qme_record.c_block_wake_req )
            {
                // Set PM_BLOCK_INTERRUPTS
                // prevent the core from waking on any interrupts
                // (including Decrementer and Hypervisor Decrementer).
                out32( QME_LCL_CORE_ADDR_WR(
                           QME_SCSR_WO_OR, G_qme_record.c_block_wake_req ),
                       BIT32(0) );

                // Block Exit Enabled
                out32(QME_LCL_SCRB_OR, ( G_qme_record.c_block_wake_req <<
                                         SHIFT32((QME_SCRB_STOP_EXIT_BLOCKED_VECTOR_BASE + QME_SCRB_STOP_EXIT_BLOCKED_VECTOR_SIZE - 1)) ));
                G_qme_record.c_block_wake_done |= G_qme_record.c_block_wake_req;
            }
        }

        // entry
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_ENTRY)
        {
            G_qme_record.c_block_stop_req   = (scratchB &
                                               BITS32(QME_SCRB_STOP_BLOCK_ENTRY_VECTOR_BASE, QME_SCRB_STOP_BLOCK_ENTRY_VECTOR_SIZE)) >>
                                              SHIFT32((QME_SCRB_STOP_BLOCK_ENTRY_VECTOR_BASE + QME_SCRB_STOP_BLOCK_ENTRY_VECTOR_SIZE - 1));

            if( G_qme_record.c_block_stop_req )
            {
                // Set PM_EXIT
                // prevent the core from entering any STOP state.
                out32( QME_LCL_CORE_ADDR_WR(
                           QME_SCSR_WO_OR, G_qme_record.c_block_stop_req ),
                       BIT32(1) );

                // Block Entry Enabled
                out32(QME_LCL_SCRB_OR, ( G_qme_record.c_block_stop_req <<
                                         SHIFT32((QME_SCRB_STOP_ENTRY_BLOCKED_VECTOR_BASE + QME_SCRB_STOP_ENTRY_BLOCKED_VECTOR_SIZE - 1)) ));
                G_qme_record.c_block_stop_done |= G_qme_record.c_block_stop_req;
            }
        }

        // acknowledge the mode has been entered
        // This occurs even if no cores actually transtiion
        // as the XGPE does not have knowledge of the selected cores.
        pig_data = ( PIG_TYPE_F << SHIFT32(4) ) |
                   ( G_qme_record.quad_id       << SHIFT32(19) ) |
                   ( G_qme_record.doorbell1_msg << SHIFT32(23) );
        qme_send_pig_packet(pig_data);
    }
    // unblock msgs(0x1-0x3) and scratchB register shouldn't be 0
    else if ( (G_qme_record.doorbell1_msg < STOP_BLOCK_ACTION) &&
              (G_qme_record.doorbell1_msg > 0) &&
              scratchB )
    {
        // exit
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_EXIT)
        {
            G_qme_record.c_block_wake_req   = (scratchB & BITS32(0, 4)) >> SHIFT32(3);

            if( G_qme_record.c_block_wake_req )
            {
                // Clear PM_BLOCK_INTERRUPTS
                out32( QME_LCL_CORE_ADDR_WR(
                           QME_SCSR_WO_CLEAR, G_qme_record.c_block_wake_req ),
                       BIT32(0) );

                // Block Exit Disabled
                out32(QME_LCL_SCRB_CLR, ( G_qme_record.c_block_wake_req << SHIFT32(11) ));
                G_qme_record.c_block_wake_done &= ~( G_qme_record.c_block_wake_req );
            }
        }

        // entry
        if (G_qme_record.doorbell1_msg & STOP_BLOCK_ENTRY)
        {
            G_qme_record.c_block_stop_req   = (scratchB & BITS32(4, 4)) >> SHIFT32(7);

            if( G_qme_record.c_block_stop_req )
            {
                // Clear PM_EXIT
                // prevent the core from entering any STOP state.
                out32( QME_LCL_CORE_ADDR_WR(
                           QME_SCSR_WO_CLEAR, G_qme_record.c_block_stop_req ),
                       BIT32(1) );

                // Block Entry Disabled
                out32(QME_LCL_SCRB_CLR, ( G_qme_record.c_block_stop_req << SHIFT32(15) ));
                G_qme_record.c_block_stop_done &= ~( G_qme_record.c_block_stop_req );
            }
        }

        // acknowledge the mode has been entered
        // This occurs even if no cores actually transtiion
        // as the XGPE does not have knowledge of the selected cores.
        pig_data = ( PIG_TYPE_F << SHIFT32(4) ) |
                   ( G_qme_record.quad_id       << SHIFT32(19) ) |
                   ( G_qme_record.doorbell1_msg << SHIFT32(23) );
        qme_send_pig_packet(pig_data);
    }

    PK_TRACE_DBG("Block Exit Req[%x], Block Exit Done[%x], Block Entry Req[%x], Block Entry Done[%x]",
                 G_qme_record.c_block_wake_req,
                 G_qme_record.c_block_wake_done,
                 G_qme_record.c_block_stop_req,
                 G_qme_record.c_block_stop_done);

    if( !( G_qme_record.uih_status & UIH_STOP_EVENT_MASKING ) )
    {
        qme_eval_eimr_override();
    }

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_DB1);
}

//core throttle
void
qme_doorbell0_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_DB0);
    PK_TRACE("Event: Doorbell 0");
#if POWER10_DD_LEVEL == 10
    out64( QME_LCL_EISR_CLR, BIT64(16) );
#else
    out32( QME_LCL_EISR_CLR, BIT32(16) );
#endif
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_DB0);
}

void
qme_pmcr_update_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_PMCR);
    PK_TRACE("Event: PMCR Update");
#if POWER10_DD_LEVEL == 10
    out64( QME_LCL_EISR_CLR, BIT64(19) );
#else
    out32( QME_LCL_EISR_CLR, BIT32(19) );
#endif
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_PMCR);
}

void
qme_send_pig_packet(uint32_t data)
{
    uint32_t temp = 0;

    // First make sure no interrupt request is currently granted
    do
    {
        // Read PPMPIG status
        temp = in32(QME_LCL_PIG);
    }
    while ( temp & BIT32(24) );

    // Send PIG packet
#ifdef USE_RUNN

    if( !(G_qme_record.hcode_func_enabled & QME_RUNN_MODE_ENABLE) )
    {
#endif
        out32(QME_LCL_PIG, data);
#ifdef USE_RUNN
    }

#endif

    PK_TRACE_DBG("PIG: Sending[%x]", data);
}
