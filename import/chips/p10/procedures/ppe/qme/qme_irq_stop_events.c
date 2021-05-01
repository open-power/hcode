/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_irq_stop_events.c $   */
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
#include "iota_lnk_cfg.h"
#include "p10_hcode_image_defines.H"
#include "p10_hcd_memmap_base.H"

extern QmeRecord G_qme_record;
extern uint64_t g_eimr_override;

enum
{
    CPMR_HDR_AUTO_WAKEUP_OFFSET  = 0xE0,
};

//only call this function within interrupt handler where ee is disabled
//otherwise, protect this function by handle ee around the function call
void
qme_eval_eimr_override()
{
    G_qme_record.c_pm_state_active_mask =
        (((~G_qme_record.c_configured)       |
          G_qme_record.c_stop2_reached       |
          G_qme_record.c_in_error            |
          G_qme_record.c_special_wakeup_done |
          G_qme_record.c_block_stop_done)    & QME_MASK_ALL_CORES);

    G_qme_record.c_regular_wakeup_mask =
        (((~G_qme_record.c_configured)       |
          (~(G_qme_record.c_stop1_targets    |
             G_qme_record.c_stop2_reached))  |
          G_qme_record.c_in_error            |
          G_qme_record.c_block_wake_override |
          G_qme_record.c_block_wake_done)    & QME_MASK_ALL_CORES);

    G_qme_record.c_special_wakeup_rise_mask =
        (((~G_qme_record.c_configured)       |
          G_qme_record.c_in_error            |
          G_qme_record.c_special_wakeup_done |
          G_qme_record.c_block_wake_override |
          G_qme_record.c_block_wake_done     )  & QME_MASK_ALL_CORES);

    G_qme_record.c_special_wakeup_fall_mask =
        (((~G_qme_record.c_configured)       |
          G_qme_record.c_in_error            |
          (~G_qme_record.c_special_wakeup_done)) & QME_MASK_ALL_CORES);


    G_qme_record.c_all_stop_mask =
        ((G_qme_record.c_special_wakeup_rise_mask  << SHIFT64SH(35)) |
         (G_qme_record.c_special_wakeup_fall_mask  << SHIFT64SH(39)) |
         (G_qme_record.c_regular_wakeup_mask  << SHIFT64SH(43)) |
         (G_qme_record.c_regular_wakeup_mask  << SHIFT64SH(47)) |
         (G_qme_record.c_pm_state_active_mask << SHIFT64SH(51)) |
         (G_qme_record.c_pm_state_active_mask << SHIFT64SH(55)));

    g_eimr_override       &= ~BITS64(28, 28);
    data64_t mask_irqs     = {0};
    mask_irqs.words.upper  = G_qme_record.c_mma_available |
                             G_qme_record.c_stop2_reached |
                             G_qme_record.c_stop2_enter_targets |
                             G_qme_record.c_stop2_exit_targets;
    mask_irqs.words.lower  = G_qme_record.c_all_stop_mask;
    g_eimr_override |= mask_irqs.value;
}


void
qme_send_pig_type_a()
{
    uint32_t pig_data = 0;
    uint32_t just_stop2;

    if( G_qme_record.hcode_func_enabled & QME_PIG_TYPEA_ENABLE )
    {
        just_stop2 = G_qme_record.c_stop2_reached &
                     (~G_qme_record.c_stop3_reached) &
                     (~G_qme_record.c_stop11_reached);

        pig_data = ( PIG_TYPE_A << SHIFT32(4) ) |
                   ( just_stop2 << SHIFT32(11) ) |
                   ( G_qme_record.c_stop3_reached << SHIFT32(15) ) |
                   ( ( (~G_qme_record.c_mma_available) & 0xF ) << SHIFT32(19) ) |
                   ( G_qme_record.c_stop11_reached << SHIFT32(23) );

        qme_send_pig_packet(pig_data);
    }
}

void
qme_stop1_exit(uint32_t c_mask)
{
    // handle stop1 wakeup
    // normal core mode
    // a) runtime wakeup: Covered by HW520675 and HW527893
    // b) stop1 wakeup:   Covered by this code
    // c) stop2+ abort wakeup      -- pm_state_active pending at same fast/slow channel:
    //                    Covered by Stop_fast, L2 Purge Abort
    // d) stop11 mischannel wakeup -- pm_state_active pending at different fast/slow channel:
    //                    Covered by Stop_slow clear rgwu_fast and due to a) we shouldnt see this.

    // fused core pair mode
    // c0 stop1 target, c1 sibling
    // c1 in run state, pm_exit is noop
    // c1 in stop state, no pc_intr_pending, pm_exit is noop
    // c1 in stop state, pc_intr_pending, pm_exit wakes it up

    c_mask &= ~G_qme_record.c_stop2_reached;

    if( c_mask )
    {
        G_qme_record.c_stop1_targets &= ~c_mask;

        PK_TRACE_INF("Core %x Waking up(pm_exit=1) via PCR_SCSR[1]", c_mask);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, c_mask ), BIT32(1) );

        PK_TRACE("Update STOP history: STOP exit completed, core ready");
        out32( QME_LCL_CORE_ADDR_WR( QME_SSH_SRC, c_mask ), SSH_EXIT_COMPLETE );

        PK_TRACE("Polling for Core Waking up(pm_active=0) via QME_SSDR[12-15]");

        //TODO:  this needs a timeout and error log.
        while( ( ( (~in32(QME_LCL_SSDR)) >> SHIFT32(15) ) & c_mask ) != c_mask );

        c_mask &= ~G_qme_record.c_special_wakeup_done;

        if( c_mask )
        {
            PK_TRACE_INF("WAKE1: Core[%x] Drop PM_EXIT via PCR_SCSR[1]", c_mask );
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, c_mask ), BIT32(1) );
        }
    }
}

//==============================
void
qme_parse_pm_state_active_fast()
{
    uint32_t c_mask     = 0;
    uint32_t c_loop     = 0;
    uint32_t c_start    = 0;
    uint32_t c_index    = 0;
    uint32_t pm_state_even = 0;
    uint32_t pm_state_odd  = 0;
    uint32_t c_stop11      = 0;
    uint32_t c_stops       = 0;

    G_qme_record.c_pm_state_active_fast_req = ( in32_sh(QME_LCL_EISR) & BITS64SH(48, 4) );

#ifdef QME_EDGE_TRIGGER_INTERRUPT
    out32_sh(QME_LCL_EISR_CLR, G_qme_record.c_pm_state_active_fast_req);
#endif
    G_qme_record.c_pm_state_active_fast_req = G_qme_record.c_pm_state_active_fast_req >> SHIFT64SH(51);

    if( G_qme_record.fused_core_enabled )
    {
        c_stop11 = ( in32_sh(QME_LCL_EISR) & BITS64SH(52, 4) ) >> SHIFT64SH(55);
        c_stops  = G_qme_record.c_pm_state_active_fast_req | c_stop11;

        PK_TRACE_INF("Parse: Fused Core Mode Entry Request on Cores: Fast[%x] Slow[%x] OR of both[%x] (both Siblings required)",
                     G_qme_record.c_pm_state_active_fast_req, c_stop11, c_stops);

        if( G_qme_record.c_pm_state_active_fast_req & 0xc )
        {
            if( ( c_stops & 0xc ) != 0xc )
            {
                G_qme_record.c_stop1_targets |= G_qme_record.c_pm_state_active_fast_req & 0xc;
                G_qme_record.c_pm_state_active_fast_req &= ~0xc;
            }
            else
            {
                G_qme_record.c_pm_state_active_fast_req |= 0xc;
                G_qme_record.c_stop1_targets &= ~0xc;
            }
        }

        if( G_qme_record.c_pm_state_active_fast_req & 0x3 )
        {
            if( ( c_stops & 0x3 ) != 0x3 )
            {
                G_qme_record.c_stop1_targets |= G_qme_record.c_pm_state_active_fast_req & 0x3;
                G_qme_record.c_pm_state_active_fast_req &= ~0x3;
            }
            else
            {
                G_qme_record.c_pm_state_active_fast_req |= 0x3;
                G_qme_record.c_stop1_targets &= ~0x3;
            }
        }

        if( !G_qme_record.c_pm_state_active_fast_req )
        {
            return;
        }
    }

    // -------------------

    PK_TRACE_INF("Parse: PM State Active Fast on Cores[%x], Cores in STOP2+[%x], Partial Good Cores[%x], Block Entry on Cores[%x]",
                 G_qme_record.c_pm_state_active_fast_req,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_configured,
                 G_qme_record.c_block_stop_done);

    c_mask = G_qme_record.c_pm_state_active_fast_req &
             G_qme_record.c_configured &
             (~G_qme_record.c_stop2_reached) &
             (~G_qme_record.c_block_stop_done);

    for( c_start = 16, c_loop = 8,
         c_index = 0;  c_index < 4; c_index++,
         c_start += 4, c_loop = c_loop >> 1)
    {
        if( c_loop & c_mask )
        {
            if( G_qme_record.fused_core_enabled )
            {
                if( c_loop & 0xA )
                {
                    pm_state_even =
                        ( in32( QME_LCL_SSDR ) & BITS32(c_start, 4) ) >> SHIFT32( (c_start + 3) );
                    pm_state_odd =
                        ( in32( QME_LCL_SSDR ) & BITS32((c_start + 4), 4) ) >> SHIFT32( ((c_start + 4) + 3) );

                    G_qme_record.c_pm_state[c_index] = pm_state_even < pm_state_odd ? pm_state_even : pm_state_odd;

                    PK_TRACE_INF("even pair mode pm_state_even %x pm_state_odd %x c_loop %x c_mask %x",
                                 pm_state_even, pm_state_odd, c_loop, c_mask);
                }
                else
                {
                    pm_state_even =
                        ( in32( QME_LCL_SSDR ) & BITS32((c_start - 4), 4) ) >> SHIFT32( ((c_start - 4) + 3) );
                    pm_state_odd =
                        ( in32( QME_LCL_SSDR ) & BITS32(c_start, 4) ) >> SHIFT32( (c_start + 3) );

                    G_qme_record.c_pm_state[c_index] = pm_state_even < pm_state_odd ? pm_state_even : pm_state_odd;

                    PK_TRACE_INF("odd pair mode pm_state_even %x pm_state_odd %x c_loop %x c_mask %x",
                                 pm_state_even, pm_state_odd, c_loop, c_mask);

                    // if either are 0, then the other is not, we will fail as something went south
                    // if both are 0, then they wont be targeted, and nothing would have done
                    if( G_qme_record.c_pm_state[c_index] != G_qme_record.c_pm_state[c_index - 1] )
                    {
                        PK_TRACE_INF("balanced pm_state[even] %x pm_state[odd] %x, index %d is not made even, Halt",
                                     G_qme_record.c_pm_state[c_index], G_qme_record.c_pm_state[c_index - 1], c_index);
                        QME_ERROR_HANDLER(QME_FUSED_EVEN_STOP_LEVELS_DD1,
                                          G_qme_record.c_pm_state[c_index], G_qme_record.c_pm_state[c_index - 1], c_index);
                    }
                }
            }
            else
            {
                G_qme_record.c_pm_state[c_index] =
                    ( in32( QME_LCL_SSDR ) & BITS32(c_start, 4) ) >> SHIFT32( (c_start + 3) );
            }

            out32( QME_LCL_CORE_ADDR_WR( QME_SSH_SRC, c_loop ),
                   ( SSH_REQ_LEVEL_UPDATE | ( G_qme_record.c_pm_state[c_index] << SHIFT32(7) ) ) );

            if( ( G_qme_record.stop_level_enabled & BIT32(STOP_LEVEL_5) ) &&
                ( G_qme_record.c_pm_state[c_index] >= STOP_LEVEL_5 ) )
            {
                G_qme_record.c_stop5_enter_targets |= c_loop;
            }

            if( ( G_qme_record.stop_level_enabled & BIT32(STOP_LEVEL_3) ) &&
                ( G_qme_record.c_pm_state[c_index] >= STOP_LEVEL_3 ) )
            {
                if( !(G_qme_record.c_stop5_enter_targets & c_loop) )
                {
                    G_qme_record.c_stop3_enter_targets |= c_loop;
                }
            }

            if( ( G_qme_record.stop_level_enabled & BIT32(STOP_LEVEL_2) ) &&
                ( G_qme_record.c_pm_state[c_index] >= STOP_LEVEL_2 ) )
            {
                G_qme_record.c_stop2_enter_targets |= c_loop;
            }
        }
    }

    if( !( G_qme_record.stop_level_enabled & BIT32(STOP_LEVEL_2) ) )
    {
        G_qme_record.c_stop2_enter_targets =
            G_qme_record.c_stop3_enter_targets |
            G_qme_record.c_stop5_enter_targets;

        G_qme_record.hcode_func_enabled &= (~QME_STOP3OR5_ABORT_PATH_ENABLE);
    }

    //stop0 pm_state_active is blocked from qme by hw.
    G_qme_record.c_stop1_targets |= c_mask & (~G_qme_record.c_stop2_enter_targets);

    PK_TRACE_DBG("Check: PM State Core0[%x], PM State Core1[%x], PM State Core2[%x], PM State Core3[%x]",
                 G_qme_record.c_pm_state[0],
                 G_qme_record.c_pm_state[1],
                 G_qme_record.c_pm_state[2],
                 G_qme_record.c_pm_state[3]);
}


void
qme_parse_regular_wakeup_fast()
{
    G_qme_record.c_regular_wakeup_fast_req = ( in32_sh(QME_LCL_EISR) & BITS64SH(40, 4) ) >> SHIFT64SH(43);

    uint32_t c_mask = G_qme_record.c_regular_wakeup_fast_req &
                      G_qme_record.c_configured &
                      (G_qme_record.c_stop1_targets |
                       G_qme_record.c_stop2_reached) & // not clear or handle wakeup until we enter stop first
                      (~(G_qme_record.c_block_wake_done | G_qme_record.c_block_wake_override));

    // leave block wakeup interrupts asserted until the protocol releases
    // and leave deconfigured core signal alone as they are always masked
    out32_sh(QME_LCL_EISR_CLR, (c_mask << SHIFT64SH(43)) );

    PK_TRACE_INF("Parse: Regular Wakeup Fast on Cores[%x], Partial Good Cores[%x], Cores in STOP2+[%x], Block Exit on Cores[%x]",
                 G_qme_record.c_regular_wakeup_fast_req,
                 G_qme_record.c_configured,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_block_wake_done);

    if( G_qme_record.fused_core_enabled )
    {
        if( ( c_mask & 0xc ) && ( (G_qme_record.c_stop2_reached & 0xc) == 0xc ) )
        {
            c_mask |= 0xc;
        }

        if( ( c_mask & 0x3 ) && ( (G_qme_record.c_stop2_reached & 0x3) == 0x3 ) )
        {
            c_mask |= 0x3;
        }

        PK_TRACE_INF("Parse: Hcode pair core mode wakeup_fast targets: %x", c_mask);
    }

    // clear and noop potential leftover wakeup from previous iteration that is now in stop11
    c_mask &= (~G_qme_record.c_stop11_reached);
    G_qme_record.c_stop2_exit_targets |= c_mask & G_qme_record.c_stop2_reached;
    G_qme_record.c_stop3_exit_targets |= c_mask & G_qme_record.c_stop3_reached;
    G_qme_record.c_stop5_exit_targets |= c_mask & G_qme_record.c_stop5_reached;

    qme_stop1_exit(c_mask);
}



void
qme_parse_special_wakeup_rise()
{
    G_qme_record.c_special_wakeup_rise_req = ( in32_sh(QME_LCL_EISR) & BITS64SH(32, 4) ) >> SHIFT64SH(35);

    uint32_t c_mask = G_qme_record.c_special_wakeup_rise_req &
                      G_qme_record.c_configured &
                      (~(G_qme_record.c_block_wake_done | G_qme_record.c_block_wake_override));

    out32_sh(QME_LCL_EISR_CLR, (c_mask << SHIFT64SH(35)) );

    if( G_qme_record.fused_core_enabled )
    {
        PK_TRACE_INF("Parse: Consider Fused SMT4 Cores[%x] Pairing together for Stop and Wake", c_mask);

        if( c_mask & 0x3 )
        {
            c_mask |= 0x3;
        }

        if( c_mask & 0xC )
        {
            c_mask |= 0xC;
        }
    }

    uint32_t c_spwu = c_mask & (~G_qme_record.c_stop2_reached);

    if( c_spwu )
    {
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, c_spwu ), ( BIT32(1) | BIT32(16) ) );
        G_qme_record.c_special_wakeup_done  |= c_spwu;
        PK_TRACE_DBG("Event: Assert Special Wakeup Done and PM_EXIT on Cores[%x]", c_spwu);
    }

    G_qme_record.c_stop11_exit_targets   |= c_mask & G_qme_record.c_stop11_reached;
    G_qme_record.c_stop5_exit_targets    |= c_mask & G_qme_record.c_stop5_reached;
    G_qme_record.c_stop3_exit_targets    |= c_mask & G_qme_record.c_stop3_reached;
    G_qme_record.c_stop2_exit_targets    |= c_mask & G_qme_record.c_stop2_reached;
    G_qme_record.c_special_wakeup_exit_pending = c_mask & G_qme_record.c_stop2_exit_targets ;

    PK_TRACE("Parse: Special Wakeup Rise on Cores[%x], Cores in STOP2+[%x], Partial Good Cores[%x], Block Exit on Cores[%x]",
             G_qme_record.c_special_wakeup_rise_req,
             G_qme_record.c_stop2_reached,
             G_qme_record.c_configured,
             G_qme_record.c_block_wake_done);
}




void
qme_parse_special_wakeup_fall()
{
    uint32_t c_einr = 0;
    uint32_t c_eisr = 0;
    uint32_t c_rise = 0;
    uint32_t c_fall = 0;
    uint32_t c_rise_rise = 0;
    uint32_t c_rise_fall = 0;
    uint32_t c_fall_fall = 0;

    G_qme_record.c_special_wakeup_fall_req = ( in32_sh(QME_LCL_EISR) & BITS64SH(36, 4) );
    out32_sh(QME_LCL_EISR_CLR, G_qme_record.c_special_wakeup_fall_req);
    G_qme_record.c_special_wakeup_fall_req = G_qme_record.c_special_wakeup_fall_req >> SHIFT64SH(39);

    uint32_t c_mask = G_qme_record.c_special_wakeup_fall_req &
                      G_qme_record.c_special_wakeup_done &
                      G_qme_record.c_configured;

    if( G_qme_record.fused_core_enabled )
    {
        PK_TRACE_INF("Parse: Fused Core Mode Special Wakeup Fall[%x] on Cores[%x] (both Siblings required)",
                     G_qme_record.c_fused_spwu_fall, c_mask);

        uint32_t spwu_assert = ( in32_sh(QME_LCL_EINR) & BITS64SH(32, 4) ) >> SHIFT64SH(35);
        G_qme_record.c_fused_spwu_fall |= c_mask;

        if( ( G_qme_record.c_fused_spwu_fall & 0xc ) &&
            ( (spwu_assert & 0xC) == 0 ) )
        {
            G_qme_record.c_fused_spwu_fall &= ~0xc;
            c_mask |= 0xc;
        }
        else
        {
            c_mask &= ~0xc;
        }

        if( ( G_qme_record.c_fused_spwu_fall & 0x3 ) &&
            ( (spwu_assert & 0x3) == 0 ) )
        {
            G_qme_record.c_fused_spwu_fall &= ~0x3;
            c_mask |= 0x3;
        }
        else
        {
            c_mask &= ~0x3;
        }
    }

    if( c_mask )
    {
        PK_TRACE("Check: Drop Special Wakeup Done on Cores[%x]", c_mask);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, c_mask ), BIT32(16) );

        c_eisr = ( in32_sh(QME_LCL_EISR) & BITS64SH(32, 4) ) >> SHIFT64SH(35);
        c_einr = ( in32_sh(QME_LCL_EINR) & BITS64SH(32, 4) ) >> SHIFT64SH(35);

        c_rise      = c_mask & c_eisr;
        out32_sh( QME_LCL_EISR_CLR, (c_rise << SHIFT64SH(35)) );

        c_rise_fall = c_rise & (~c_einr);
        out32_sh( QME_LCL_EISR_CLR, (c_rise_fall << SHIFT64SH(39)) );

        c_fall      = c_mask & (~c_eisr);
        c_rise_rise = c_rise & c_einr;
        c_fall_fall = c_fall | c_rise_fall;

        // if spwu has been re-asserted after spwu_done is dropped:
        if( c_rise_rise )
        {
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, c_rise_rise ), BIT32(16) );
            PK_TRACE("Check: SPWU asserts again on Cores:c_rise[%x], Re-assert Special Wakeup Done on Cores:c_rise_rise[%x]",
                     c_rise, c_rise_rise);
        }

        // if spwu truly dropped
        if( c_fall_fall )
        {
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, c_fall_fall ), BIT32(1) );
            G_qme_record.c_special_wakeup_done &= ~c_fall_fall;
            PK_TRACE("Check: SPWU drop confirmed, now drop PM_EXIT on Cores[%x]", c_fall);
        }

        PK_TRACE_INF("Check: Keep SPWU Done on Cores(c_rise[%x] c_rise_rise[%x]) Drop SPWU Done+PM_EXIT on Cores(c_fall[%x] c_rise_fall[%x])",
                     c_rise, c_rise_rise, c_fall, c_rise_fall);
    }

    PK_TRACE("Parse: Special Wakeup Fall on Cores[%x], Cores in STOP2+[%x], Partial Good Cores[%x], Block Entry on Cores[%x]",
             G_qme_record.c_special_wakeup_fall_req,
             G_qme_record.c_stop2_reached,
             G_qme_record.c_configured,
             G_qme_record.c_block_stop_done);
}




//==============================

void
qme_special_wakeup_rise_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_SPWU_RISE);

    qme_parse_special_wakeup_rise();

    //===============//

    MARK_TAG( G_qme_record.c_special_wakeup_rise_req, IRQ_SPECIAL_WAKEUP_RISE_EVENT );

    PK_TRACE_INF("Event: UIH Status[%x], Special Wakeup Rise on Core[%x], Special Wakeup Done on Cores[%x], Cores reached STOP2+[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.c_special_wakeup_rise_req,
                 G_qme_record.c_special_wakeup_done,
                 G_qme_record.c_stop2_reached);

    if( G_qme_record.c_stop2_exit_targets )
    {
        qme_parse_regular_wakeup_fast();

        // For the control intention of Stop Abort,
        // Masking the following interrupt groups:
        // Special_Wakeup_Rise/Fall
        // Regular_Wakeup_Hipri/Lopri
        // PM_State_Active_Hipri/Lopri

        out64(QME_LCL_EIMR_OR, ((uint64_t)G_qme_record.c_stop2_exit_targets << 32));
        out64(QME_LCL_EIMR_OR, BITS64(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
        qme_send_pig_type_a();
        wrteei(0);
    }

    // If Stop Entry was aborted
    // The retrun of this handler will be back to Stop Entry leftover,
    // which will then re-evaluate eimr overrides, thus skip for now
    if( (~G_qme_record.uih_status) & BIT32(IDX_PRTY_LVL_STOP_FAST) )
    {
        qme_eval_eimr_override();
    }

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_SPWU_RISE);
}

void
load_auto_wakeup_vector()
{
    QmeHeader_t* l_pQmeHdr  =  (QmeHeader_t*)( SRAM_START + QME_INT_VECTOR_SIZE );
    uint32_t l_sramOffset   =  l_pQmeHdr->g_qme_common_ring_offset;
    uint32_t l_cpmrOffset   =  CPMR_HDR_AUTO_WAKEUP_OFFSET; //Auto Wkup Vector from CPMR Header
    PK_TRACE_INF( "Cmn Ring Offset 0x%08x", l_sramOffset );


    qme_block_copy_start( QME_BCEBAR_1,
                          ( l_cpmrOffset >> 5 ),
                          ( l_sramOffset >> 5 ),
                          1,        // 32B
                          QME_COMMON ); // Copied for all QMEs in same way

    if( BLOCK_COPY_SUCCESS != qme_block_copy_check() )
    {
        PK_TRACE_INF("ERROR: BCE Failed For Block Copy Of Auto Wakeup Vector" );
        IOTA_PANIC(QME_STOP_BLOCK_COPY_AUTO_WKUP_FAILED);
    }

    //Copying Auto Wakeup Vector from temp location to QME Record
    G_qme_record.c_auto_stop11_wakeup = *(uint32_t*) ( SRAM_START + l_sramOffset );

    G_qme_record.bce_buf_content_type = AUTO_WAKUP_VECT;

    PK_TRACE_INF("Auto Wakeup Vector Block Copied 0x%08x", G_qme_record.c_auto_stop11_wakeup);
}

void
qme_special_wakeup_fall_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_SPWU_FALL);

    // Note this IRQ handler will only parse special wakeup fall
    // and drop special wakeup done accordingly
    // The re-entry of potential STOP is handled by
    // PM_State_Active interrupt event and handler
    qme_parse_special_wakeup_fall();

    //===============//

    MARK_TAG( G_qme_record.c_special_wakeup_fall_req, IRQ_SPECIAL_WAKEUP_FALL_EVENT );

    PK_TRACE_INF("Event: UIH Status[%x], Special Wakeup Fall on Core[%x], Special Wakeup Done on Core[%x], Cores reached STOP2+[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.c_special_wakeup_fall_req,
                 G_qme_record.c_special_wakeup_done,
                 G_qme_record.c_stop2_reached);

    qme_eval_eimr_override();

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_SPWU_FALL);
}

void
qme_regular_wakeup_fast_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_RGWU_FAST);

    qme_parse_regular_wakeup_fast();

    PK_TRACE_INF("Event: UIH Status[%x], Regular Wakeup Fast on Core[%x], Cores reached STOP2+[%x], Cores reached STOP5+[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.c_regular_wakeup_fast_req,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_stop5_reached);

    if( G_qme_record.c_stop2_exit_targets )
    {
        MARK_TAG( G_qme_record.c_stop2_exit_targets, IRQ_REGULAR_WAKEUP_FAST_EVENT );

        //===============//

        qme_parse_special_wakeup_rise();

        // For the control intention of Stop Abort,
        // Masking the following interrupt groups:
        // Special_Wakeup_Rise/Fall
        // Regular_Wakeup_Hipri/Lopri
        // PM_State_Active_Hipri/Lopri

        out64(QME_LCL_EIMR_OR, ((uint64_t)G_qme_record.c_stop2_exit_targets << 32));
        out64(QME_LCL_EIMR_OR, BITS64(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
        qme_send_pig_type_a();
        wrteei(0);
    }

    // If Stop Entry was aborted
    // The retrun of this handler will be back to Stop Entry leftover,
    // which will then re-evaluate eimr overrides, thus skip for now
    if( (~G_qme_record.uih_status) & BIT32(IDX_PRTY_LVL_STOP_FAST) )
    {
        qme_eval_eimr_override();
    }

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_RGWU_FAST);
}

void
qme_pm_state_active_fast_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_STOP_FAST);

    qme_parse_pm_state_active_fast();

    PK_TRACE_INF("Event: UIH Status[%x], PM State Active Fast on Cores[%x], STOP2+ Request on Cores[%x], STOP5 Request on Cores[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.c_pm_state_active_fast_req,
                 G_qme_record.c_stop2_enter_targets,
                 G_qme_record.c_stop5_enter_targets);

    if( G_qme_record.c_stop2_enter_targets )
    {
        MARK_TAG( G_qme_record.c_stop2_enter_targets, IRQ_PM_STATE_ACTIVE_FAST_EVENT )
        qme_fault_inject(QME_PCSCR_STOP23_ENTRY_FAULT_INJECT, G_qme_record.c_stop2_enter_targets);

        if( G_qme_record.fused_core_enabled )
        {
            G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_CATCHUP_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_ABORT_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_NCU_PURGE_ABORT_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_CATCHUP_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_ABORT_PATH_ENABLE;
        }

        //===============//

        out64(QME_LCL_EIMR_OR, ((uint64_t)G_qme_record.c_stop2_enter_targets << 32));
        out64(QME_LCL_EIMR_OR, BITS64(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_entry();
        qme_send_pig_type_a();
        wrteei(0);
    }

    // Stop Entry is lower priority than Wakeups and other events
    // Thus not likely to interrupt other contexts; therefore
    // Always re-evaluate eimr override masks is safe here
    qme_eval_eimr_override();

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_STOP_FAST);
}


//==============================

void
qme_parse_pm_state_active_slow()
{
    uint32_t c_mask     = 0;
    uint32_t c_loop     = 0;
    uint32_t c_start    = 0;
    uint32_t c_index    = 0;
    uint32_t t_offset   = 0;
    uint32_t esl_ec     = 0;
    uint32_t pscrs      = 0;

    G_qme_record.c_pm_state_active_slow_req = ( in32_sh(QME_LCL_EISR) & BITS64SH(52, 4) );
#ifdef QME_EDGE_TRIGGER_INTERRUPT
    out32_sh(QME_LCL_EISR_CLR, G_qme_record.c_pm_state_active_slow_req);
#endif
    G_qme_record.c_pm_state_active_slow_req = G_qme_record.c_pm_state_active_slow_req >> SHIFT64SH(55);

    if( G_qme_record.fused_core_enabled )
    {
        PK_TRACE_INF("Parse: Fused Core Mode Stop11 Entry Request on Cores[%x] (both Siblings required)",
                     G_qme_record.c_pm_state_active_slow_req);

        if( (G_qme_record.c_pm_state_active_slow_req & 0xc) != 0xc )
        {
            G_qme_record.c_stop1_targets |= G_qme_record.c_pm_state_active_slow_req & 0xc;
            G_qme_record.c_pm_state_active_slow_req &= ~0xc;
        }
        else
        {
            G_qme_record.c_stop1_targets &= ~0xc;
        }

        if( (G_qme_record.c_pm_state_active_slow_req & 0x3) != 0x3 )
        {
            G_qme_record.c_stop1_targets |= G_qme_record.c_pm_state_active_slow_req & 0x3;
            G_qme_record.c_pm_state_active_slow_req &= ~0x3;
        }
        else
        {
            G_qme_record.c_stop1_targets &= ~0x3;
        }


        if( !G_qme_record.c_pm_state_active_slow_req )
        {
            return;
        }
    }

    // on Stop11 entry immediately clear HIPRI wakeups for that core in EISR in case there was a previous stale one.
    out32_sh(QME_LCL_EISR_CLR, ( G_qme_record.c_pm_state_active_slow_req << SHIFT64SH(43) ) );

    // -------------------

    PK_TRACE_INF("Parse: PM State Active Slow on Cores[%x], Cores in STOP2+[%x], Partial Good Cores[%x], Block Entry on Cores[%x]",
                 G_qme_record.c_pm_state_active_slow_req,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_configured,
                 G_qme_record.c_block_stop_done);

    c_mask = G_qme_record.c_pm_state_active_slow_req &
             G_qme_record.c_configured &
             (~G_qme_record.c_stop2_reached) &
             (~G_qme_record.c_block_stop_done);

    for( c_start = 16, c_loop = 8,
         c_index = 0;  c_index < 4; c_index++,
         c_start += 4, c_loop = c_loop >> 1)
    {
        if( c_loop & c_mask )
        {
            G_qme_record.c_pm_state[c_index] =
                ( in32( QME_LCL_SSDR ) & BITS32(c_start, 4) ) >> SHIFT32( (c_start + 3) );

            out32( QME_LCL_CORE_ADDR_WR( QME_SSH_SRC, c_loop ),
                   ( SSH_REQ_LEVEL_UPDATE | ( G_qme_record.c_pm_state[c_index] << SHIFT32(7) ) ) );

            if( ( G_qme_record.stop_level_enabled & BIT32(STOP_LEVEL_11) ) &&
                ( G_qme_record.c_pm_state[c_index] >= STOP_LEVEL_11 ) )
            {
                // if either esl or ec bit is off with at least one thread
                esl_ec = in32_sh( QME_LCL_CORE_ADDR_OR( QME_SCSR, c_loop ) ) & BITS64SH(50, 2);

                if( esl_ec != BITS64SH(50, 2) )
                {
                    PK_TRACE_ERR("WARNING: Core[%x] Requested to enter Power Loss State while PSSCR_POWEROFF_ALLOWED[%X]. CHECK QME!",
                                 c_loop, esl_ec);

                    for( t_offset = 0; t_offset < 16; t_offset += 4 )
                    {
                        pscrs = in32( ( QME_PSCRS | (c_loop << 16) | (t_offset << 4) ) );
                        PK_TRACE_ERR("DEBUG: PSCRS[%d] = %x", t_offset, pscrs);
                    }

                    // If this is the case, cannot do Power Loss State when esl is actually 0 that would be error
                    if( G_qme_record.hcode_func_enabled & QME_POWER_LOSS_ESL_CHECK_ENABLE )
                    {
                        QME_ERROR_HANDLER(QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED, pscrs, esl_ec, c_loop);
                    }
                }

                G_qme_record.c_stop2_enter_targets  |= c_loop;
                G_qme_record.c_stop5_enter_targets  |= c_loop;
                G_qme_record.c_stop11_enter_targets |= c_loop;
            }
        }
    }

    PK_TRACE_DBG("Check: PM State Core0[%x], PM State Core1[%x], PM State Core2[%x], PM State Core3[%x]",
                 G_qme_record.c_pm_state[0],
                 G_qme_record.c_pm_state[1],
                 G_qme_record.c_pm_state[2],
                 G_qme_record.c_pm_state[3]);
}



void
qme_parse_regular_wakeup_slow()
{
    G_qme_record.c_regular_wakeup_slow_req = ( in32_sh(QME_LCL_EISR) & BITS64SH(44, 4) ) >> SHIFT64SH(47);

    uint32_t c_mask = G_qme_record.c_regular_wakeup_slow_req &
                      G_qme_record.c_configured &
                      (G_qme_record.c_stop1_targets |
                       G_qme_record.c_stop2_reached) &   // not clear or handle wakeup until we enter stop11
                      (~(G_qme_record.c_block_wake_done | G_qme_record.c_block_wake_override));

    // Note: not possible to get this wakeup when core is only entered stop2
    // In that case if happened, we should clear the wakeup and do nothing.

    // leave block wakeup interrupts asserted until the protocol releases
    // and leave deconfigured core signal alone as they are always masked
    out32_sh(QME_LCL_EISR_CLR, (c_mask << SHIFT64SH(47)) );

    PK_TRACE_INF("Parse: Regular Wakeup Slow on Cores[%x], Partial Good Cores[%x], Cores in STOP11[%x], Block Exit on Cores[%x]",
                 G_qme_record.c_regular_wakeup_slow_req,
                 G_qme_record.c_configured,
                 G_qme_record.c_stop11_reached,
                 G_qme_record.c_block_wake_done);

    if( G_qme_record.fused_core_enabled )
    {
        if( ( c_mask & 0xc ) && ( (G_qme_record.c_stop2_reached & 0xc) == 0xc ) )
        {
            c_mask |= 0xc;
        }

        if( ( c_mask & 0x3 ) && ( (G_qme_record.c_stop2_reached & 0x3) == 0x3 ) )
        {
            c_mask |= 0x3;
        }

        PK_TRACE_INF("Parse: Hcode pair core mode wakeup_slow targets: %x", c_mask);
    }

    // clear and noop potential leftover wakeup from previous iteration that is now in stop2+
    G_qme_record.c_stop2_exit_targets  |= c_mask & G_qme_record.c_stop11_reached;
    G_qme_record.c_stop5_exit_targets  |= c_mask & G_qme_record.c_stop11_reached;
    G_qme_record.c_stop11_exit_targets |= c_mask & G_qme_record.c_stop11_reached;

    qme_stop1_exit(c_mask);
}

void
qme_regular_wakeup_slow_event()
{
    //technically contained mode implies stop11 is not supported with it
    if( ( G_qme_record.hcode_func_enabled & QME_RUNN_MODE_ENABLE ) ||
        ( G_qme_record.hcode_func_enabled & QME_CONTAINED_MODE_ENABLE ) )
    {
        PK_TRACE_ERR("ERROR: Attempt to Perform Stop11 when RUNN mode or Contained mode is enabled ");
        QME_ERROR_HANDLER(QME_STOP11_RUNN_CONTAINED_MODE_ERROR, 0, 0, 0);
    }

    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_RGWU_SLOW);

    qme_parse_regular_wakeup_slow();

    PK_TRACE_INF("Event: UIH Status[%x], Regular Wakeup Slow on Core[%x], Cores Waking up from STOP11[%x], Cores reached STOP11[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.c_regular_wakeup_slow_req,
                 G_qme_record.c_stop11_exit_targets,
                 G_qme_record.c_stop11_reached);

    if( G_qme_record.c_stop11_exit_targets )
    {
        MARK_TAG( G_qme_record.c_stop11_exit_targets, IRQ_REGULAR_WAKEUP_SLOW_EVENT );

        //===============//

        qme_parse_special_wakeup_rise();

        // Stop11 is expected not to be aborted
        out64(QME_LCL_EIMR_OR, ((uint64_t)G_qme_record.c_stop11_exit_targets << 32));
        out64(QME_LCL_EIMR_OR, BITS64(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
        qme_send_pig_type_a();
        wrteei(0);
    }

    // If Stop Entry was aborted
    // The retrun of this handler will be back to Stop Entry leftover,
    // which will then re-evaluate eimr overrides, thus skip for now
    if( (~G_qme_record.uih_status) & BIT32(IDX_PRTY_LVL_STOP_FAST) )
    {
        qme_eval_eimr_override();
    }

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_RGWU_SLOW);
}

void
qme_stop11_msgsnd_injection(uint32_t core_target)
{
    uint32_t i           = 0;
    uint32_t core_mask   = 0;
    uint32_t thread_mask = 0;

    //this keeps further wake-up from getting to the core
    PK_TRACE("Assert BLOCK_INTERRUPT_OUTPUT to PC via SCSR[24]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), BIT32(24) );

    //256 core cycles to deal with round-trip latencies
    PK_TRACE("Delay 32 QME cycles");

    for(i = 0; i < 32; i++)
    {
        asm volatile ("tw 0, 0, 0");
    }

    for(core_mask = 8; core_mask; core_mask = core_mask >> 1)
    {
        if( core_target & core_mask )
        {
            thread_mask = ( in32( QME_LCL_CORE_ADDR_OR( QME_CISR, core_mask ) ) &
                            BITS32(8, 4) ) >> SHIFT32(11);

            if( thread_mask )
            {
                PK_TRACE_INF("Injecting Msgsnd to core[%x] thread[%x] via CIIR[28:31]",
                             core_mask, thread_mask);
                out32( QME_LCL_CORE_ADDR_OR( QME_CIIR, core_mask ), thread_mask );
                //BLOCK_INTERRUPT_OUTPUT will be dropped after stop11 entry later
            }
            else
            {
                PK_TRACE("Drop BLOCK_INTERRUPT_OUTPUT to PC[%x] via SCSR[24]", core_mask);
                out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_mask ), BIT32(24) );
            }
        }
    }
}


void
qme_pm_state_active_slow_event()
{
    //technically contained mode implies stop11 is not supported with it
    if( ( G_qme_record.hcode_func_enabled & QME_RUNN_MODE_ENABLE ) ||
        ( G_qme_record.hcode_func_enabled & QME_CONTAINED_MODE_ENABLE ) )
    {
        PK_TRACE_ERR("ERROR: Attempt to Perform Stop11 when RUNN mode or Contained mode is enabled ");
        QME_ERROR_HANDLER(QME_STOP11_RUNN_CONTAINED_MODE_ERROR, 0, 0, 0);
    }

    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_STOP_SLOW);

    qme_parse_pm_state_active_slow();

    PK_TRACE_INF("Event: UIH Status[%x], PM State Active Slow on Cores[%x], STOP11 Request on Cores[%x], STOP11 Reached on Cores[%x]",
                 G_qme_record.uih_status,
                 G_qme_record.c_pm_state_active_slow_req,
                 G_qme_record.c_stop11_enter_targets,
                 G_qme_record.c_stop11_reached);

    if( G_qme_record.c_stop11_enter_targets )
    {
        MARK_TAG( G_qme_record.c_stop11_enter_targets, IRQ_PM_STATE_ACTIVE_SLOW_EVENT )
        qme_fault_inject(QME_PCSCR_STOP11_ENTRY_FAULT_INJECT, G_qme_record.c_stop11_enter_targets);

        qme_stop11_msgsnd_injection( G_qme_record.c_stop11_enter_targets );

        //===============//

        G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_CATCHUP_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_ABORT_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_NCU_PURGE_ABORT_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_CATCHUP_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_ABORT_PATH_ENABLE;

        if( G_qme_record.hcode_func_enabled & QME_SELF_SAVE_ENABLE )
        {
            qme_stop_self_execute(G_qme_record.c_stop11_enter_targets, SPR_SELF_SAVE);
            qme_stop_self_complete(G_qme_record.c_stop11_enter_targets, SPR_SELF_SAVE);
        }

        // stop11 is expected not to be aborted
        out64(QME_LCL_EIMR_OR, ((uint64_t)G_qme_record.c_stop11_enter_targets << 32));
        out64(QME_LCL_EIMR_OR, BITS64(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_entry();
        qme_send_pig_type_a();

        // TODO  Read Auto Wake-up Controls from HOMER for this chip Parse to bit X and, if set

        if( G_qme_record.hcode_func_enabled & QME_AUTO_STOP11_WAKEUP_ENABLE )
        {
            load_auto_wakeup_vector();

            if( G_qme_record.c_auto_stop11_wakeup )
            {
                uint32_t l_quad_auto_wkup_vect = G_qme_record.c_auto_stop11_wakeup;
                l_quad_auto_wkup_vect = ( l_quad_auto_wkup_vect >> ( 28 - ( G_qme_record.quad_id * 4 ) ) );
                l_quad_auto_wkup_vect = l_quad_auto_wkup_vect & 0x0f;

                PK_TRACE_INF( "Auto Stop11 Wakeup On Cores[%x]", l_quad_auto_wkup_vect );
                G_qme_record.c_stop2_exit_targets  |= l_quad_auto_wkup_vect;
                G_qme_record.c_stop5_exit_targets  |= l_quad_auto_wkup_vect;
                G_qme_record.c_stop11_exit_targets |= l_quad_auto_wkup_vect;

                qme_stop_exit();

                // After self-restore, Sreset the core(s) with PHYP URMOR/HRMOR.
                // This is unique for this flow as interrupts normally cause
                // the hardware to perform the sreset.
                wrteei(0);
                PPE_PUTSCOM_MC( DIRECT_CONTROLS, l_quad_auto_wkup_vect,
                                BIT64(4) | BIT64(12) | BIT64(20) | BIT64(28));
                sync();
                wrteei(1);

                G_qme_record.c_auto_stop11_wakeup = 0;
                qme_send_pig_type_a();
            }
        }

        wrteei(0);
    }

    // Stop Entry is lower priority than Wakeups and other events
    // Thus not likely to interrupt other contexts; therefore
    // Always re-evaluate eimr override masks is safe here
    qme_eval_eimr_override();

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_STOP_SLOW);

}
