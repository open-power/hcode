/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/iota_uih.c $              */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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
#include "iota.h"
#include "iota_uih.h"
#include "iota_panic_codes.h"

uint32_t g_current_prty_level = IOTA_NUM_EXT_IRQ_PRIORITIES - 1;
uint8_t  g_eimr_stack[IOTA_NUM_EXT_IRQ_PRIORITIES];
int      g_eimr_stack_ctr = -1;
uint64_t g_eimr_override_stack[IOTA_NUM_EXT_IRQ_PRIORITIES];
uint64_t g_eimr_override = 0x0000000000000000;
uint64_t g_ext_irq_vector = 0;
uint32_t g_db0_pending_fit_tick_count = 0;
uint32_t g_comm_recv_pending_fit_tick_count = 0;
uint32_t g_intercme_in0_pending_tick_count  = 0;

// Unified IRQ priority and masking handler.
// - Locates the highest priority IRQ task vector that has at least one of its
//   interrupts in the current external PK interrupt vector.
uint32_t iota_uih(void)
{
    uint32_t  iPrtyLvl = 0, bFound = 0;
    //uint64_t  ext_irq_vector;

    // 1. Identify the priority level of the interrupt.
    g_ext_irq_vector = in64(CME_LCL_EISTR);

    if(g_ext_irq_vector == 0)
    {
        iota_dead(IOTA_UIH_PHANTOM_INTERRUPT);
    }

    do
    {
        //Note: Special handling of DB0/COMM_RECV to handle the db0/comm_recv
        //starvation case.
        //
        //Reason: DB0(Quad Manager CME) and COMM_RECV(Sibling CME) are lower priority
        //than the STOP related interrupts,
        //and can stay pending for very long time(~ms scale) on systems with
        //high frequency of STOP requests. This can then prevent PGPE from
        //completing OCC directed IPC operations within the expected
        //time bounds(< 8ms)
        //
        //Mechanism:
        //1)In FIT: Every FIT tick, we check if DB0(on Quad manager)/COMM_RECV(on Sibling CME)
        //is pending. If DB0(on Quad manager)/COMM_RECV(on Sibling CME) is seen pending for
        //more than DB0_FIT_TICK_THRESHOLD/COMM_RECV_FIT_TICK_THRESHOLD FIT ticks,
        //then we take action in UIH
        //
        //2)In UIH: We set priority level to IDX_PRTY_LVL_DB0/IDX_PRTY_LVL_COMM_RECVD, and  mask
        //everything except Priority 0(xstop, exceptions, etc). This then allows a
        //pending DB0 to complete
        if(g_db0_pending_fit_tick_count > DB0_FIT_TICK_THRESHOLD)
        {
            bFound = 1;
            iPrtyLvl = IDX_PRTY_LVL_DB0;
            break;
        }
        else if(g_comm_recv_pending_fit_tick_count > COMM_RECV_FIT_TICK_THRESHOLD)
        {
            bFound = 1;
            iPrtyLvl = IDX_PRTY_LVL_COMM_RECVD;
            break;
        }
        else if(g_intercme_in0_pending_tick_count > INTERCME_IN0_FIT_TICK_THRESHOLD)
        {
            bFound = 1;
            iPrtyLvl = IDX_PRTY_LVL_INTERCME_IN0;
            break;
        }
        else if(ext_irq_vectors_cme[iPrtyLvl][IDX_PRTY_VEC] & g_ext_irq_vector)
        {
            bFound = 1;
            break;
        }
    }
    while(++iPrtyLvl < (IOTA_NUM_EXT_IRQ_PRIORITIES - 1));   //No need to check DISABLED.

    // Only manipulate EIMR masks for task level prty levels.
    // Let shared non-task IRQs (iPrtyLvl=0) be processed by
    // the PK kernel in usual fashion.
    if(bFound)
    {
        // 2. Save current mask (assume current prty level).
        //    Note, reading EIMR is NOT safe because overrides may already have
        //      happened to the EIMR. And we always want to restore
        //      the EIMR to a known value when we exit our thread.
        if(++g_eimr_stack_ctr < IOTA_NUM_EXT_IRQ_PRIORITIES)
        {
            // Make a note of present prty level and
            // then update tracker to new prty level.
            g_eimr_stack[g_eimr_stack_ctr] = g_current_prty_level;
            g_current_prty_level = iPrtyLvl; // Update prty level tracker.
            g_eimr_override_stack[g_eimr_stack_ctr] = g_eimr_override;
        }
        else
        {
            iota_dead(IOTA_UIH_STACK_OVERFLOW);
        }

        // 3. Write the new mask for this priority level.
        //Note: Special handling of DB0/COMM_RECV to handle the db0/comm_recv
        //starvation case.
        //
        //Reason: DB0(Quad Manager CME) and COMM_RECV(Sibling CME) are lower priority
        //than the STOP related interrupts,
        //and can stay pending for very long time(~ms scale) on systems with
        //high frequency of STOP requests. This can then prevent PGPE from
        //completing OCC directed IPC operations within the expected
        //time bounds(< 8ms)
        //
        //Mechanism:
        //1)In FIT: Every FIT tick, we check if DB0(on Quad manager)/COMM_RECV(on Sibling CME)
        //is pending. If DB0(on Quad manager)/COMM_RECV(on Sibling CME) is seen pending for
        //more than DB0_FIT_TICK_THRESHOLD/COMM_RECV_FIT_TICK_THRESHOLD FIT ticks,
        //then we take action in UIH
        //
        //2)In UIH: We set priority level to IDX_PRTY_LVL_DB0/IDX_PRTY_LVL_COMM_RECVD, and  mask
        //everything except Priority 0(xstop, exceptions, etc). This then allows a
        //pending DB0 to complete
        if ((g_db0_pending_fit_tick_count > DB0_FIT_TICK_THRESHOLD) ||
            (g_comm_recv_pending_fit_tick_count > COMM_RECV_FIT_TICK_THRESHOLD) ||
            (g_intercme_in0_pending_tick_count > INTERCME_IN0_FIT_TICK_THRESHOLD))
        {
            PK_TRACE_INF("UIH: Starvation Detected. Overriding Mask!");
            out64(CME_LCL_EIMR, (ext_irq_vectors_cme[0][IDX_MASK_VEC] |
                                 g_eimr_override));
        }
        else
        {
            out64(CME_LCL_EIMR, ext_irq_vectors_cme[iPrtyLvl][IDX_MASK_VEC] |
                  g_eimr_override);
        }
    }
    else
    {
        // Disabled IRQ fired
        iota_dead(IOTA_UIH_DISABLED_FIRED);
    }

    // Return the priority level
    return iPrtyLvl;
}

void iota_uih_restore()
{
    if (g_eimr_stack_ctr >= 0)
    {
        out64(CME_LCL_EIMR,
              ext_irq_vectors_cme[g_eimr_stack[g_eimr_stack_ctr]][IDX_MASK_VEC]);
        out64(CME_LCL_EIMR_CLR,
              g_eimr_override_stack[g_eimr_stack_ctr]);
        out64(CME_LCL_EIMR_OR,
              g_eimr_override);
        // Restore the prty level tracker to the task that was interrupted, if any.
        g_current_prty_level = g_eimr_stack[g_eimr_stack_ctr];
        g_eimr_stack_ctr--;
    }
    else
    {
        iota_dead(IOTA_UIH_STACK_UNDERFLOW);
    }
}
