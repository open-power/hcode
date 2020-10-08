/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_irq_stop_events.c $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2020                                                    */
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

//only call this function within interrupt handler where ee is disabled
//otherwise, protect this function by handle ee around the function call
void
qme_eval_eimr_override()
{
    G_qme_record.c_pm_state_active_mask =
        (((~G_qme_record.c_configured)       |
          G_qme_record.c_stop1_targets       |
          G_qme_record.c_stop2_reached       |
          G_qme_record.c_in_error            |
          G_qme_record.c_special_wakeup_done |
          G_qme_record.c_block_stop_done)    & QME_MASK_ALL_CORES);

    G_qme_record.c_regular_wakeup_mask =
        (((~G_qme_record.c_configured)       |
          (~(G_qme_record.c_stop1_targets    |
             G_qme_record.c_stop2_reached))  |
          G_qme_record.c_in_error            |
          G_qme_record.c_block_wake_done)    & QME_MASK_ALL_CORES);

    G_qme_record.c_special_wakeup_rise_mask =
        (((~G_qme_record.c_configured)       |
          G_qme_record.c_in_error            |
          G_qme_record.c_special_wakeup_done |
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

    g_eimr_override       &= ~BITS64(32, 24);
    data64_t mask_irqs     = {0};
    mask_irqs.words.upper  = 0;
    mask_irqs.words.lower  = G_qme_record.c_all_stop_mask;
    g_eimr_override |= mask_irqs.value;
}


void
qme_fused_core_pair_mode(uint32_t* c_mask)
{
    if( G_qme_record.fused_core_enabled )
    {
        PK_TRACE_INF("Parse: Consider Fused SMT4 Cores[%x] Pairing together for Stop and Wake", *c_mask);

        if( (*c_mask) & 0x3 )
        {
            (*c_mask) |= 0x3;
        }

        if( (*c_mask) & 0xC )
        {
            (*c_mask) |= 0xC;
        }
    }
}

void
qme_stop1_exit(uint32_t c_mask)
{
    uint32_t c_loop    = 0;
//    uint32_t c_temp    = 0;
    uint32_t cisr0     = 0;
    uint32_t cisr1     = 0;
    uint32_t scsr0     = 0;
    uint32_t scsr1     = 0;
//    uint32_t einr      = 0;

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

    // pair on target took off by run state filter
    /*
    if( in32(QME_LCL_QMCR) & BIT32(10) )
    {
        c_temp  = c_mask;
        qme_fused_core_pair_mode(&c_mask);
        c_temp = c_mask & ~c_temp;
        out32_sh(QME_LCL_EISR_CLR, ( (c_temp << SHIFT64SH(43)) | (c_temp << SHIFT64SH(47)) ) );
    }
    */

    // if still dont have pc_interrupt_pending, ignore until real one show up
    for( c_loop = 8; c_loop > 0; c_loop = c_loop >> 1 )
    {
        if ( c_mask & c_loop )
        {
            cisr0 = in32( QME_LCL_CORE_ADDR_OR( QME_CISR, c_loop ) );
            cisr1 = in32_sh( QME_LCL_CORE_ADDR_OR( QME_CISR, c_loop ) );

            scsr0 = in32( QME_LCL_CORE_ADDR_OR( QME_SCSR, c_loop ) );
            scsr1 = in32_sh( QME_LCL_CORE_ADDR_OR( QME_SCSR, c_loop ) );

            PK_TRACE_INF("IRQ Cisr %x %x Scsr %x %x", cisr0, cisr1, scsr0, scsr1);
        }

        /*
                if ( ! ( scsr1 & BIT64SH(46) ) )
                {
                    c_mask &= ~core_loop;
                }
        */
    }

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
            /*
                        if( in32(QME_LCL_QMCR) & BIT32(10) )
                        {
                            do
                            {
                                einr = in32(QME_LCL_EINR);

                                if( !(einr & c_mask) )
                                {
                                    break;
                                }
                            }
                            while(1);
                        }
            */

            PK_TRACE_INF("WAKE1: Core[%x] Drop PM_EXIT via PCR_SCSR[1]", c_mask );
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, c_mask ), BIT32(1) );
        }
    }
}

//==============================
void
qme_parse_pm_state_active_fast()
{
    //uint32_t c_cpms     = 0;
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

    if( !(in32(QME_LCL_QMCR) & BIT32(10)) &&
        G_qme_record.fused_core_enabled )
    {
        c_stop11 = ( in32_sh(QME_LCL_EISR) & BITS64SH(52, 4) ) >> SHIFT64SH(55);
        c_stops  = G_qme_record.c_pm_state_active_fast_req | c_stop11;

        PK_TRACE_INF("Parse: Fused Core Mode Entry Request on Cores: Fast[%x] Slow[%x] OR of both[%x] (both Siblings required)",
                     G_qme_record.c_pm_state_active_fast_req, c_stop11, c_stops);

        if( G_qme_record.c_pm_state_active_fast_req & 0xc )
        {
            if( ( c_stops & 0xc ) != 0xc )
            {
                G_qme_record.c_stop1_targets |= G_qme_record.c_pm_state_active_fast_req >> 2;
                G_qme_record.c_pm_state_active_fast_req &= ~0xc;
            }
            else
            {
                G_qme_record.c_pm_state_active_fast_req |= 0xc;
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
            }
        }

        if( !G_qme_record.c_pm_state_active_fast_req )
        {
            return;
        }
    }

    // use cpms interrupt as pair mode patch
    /*
        if( in32(QME_LCL_QMCR) & BIT32(10) )
        {
            c_cpms = ( in32_sh(QME_LCL_EISR) & BITS64SH(60, 4) );
            out32_sh(QME_LCL_EISR_CLR, c_cpms);
            G_qme_record.c_pm_state_active_fast_req |= c_cpms;
            PK_TRACE_INF("Parse: different channel pm_active under pair mode: %x, current pm_active_fast %x",
                         c_cpms, G_qme_record.c_pm_state_active_fast_req);
        }
    */
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
            if( !(in32(QME_LCL_QMCR) & BIT32(10)) &&
                G_qme_record.fused_core_enabled )
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
                        IOTA_PANIC(QME_FUSED_EVEN_STOP_LEVELS_DD1);
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
                      (~G_qme_record.c_block_wake_done);

    // leave block wakeup interrupts asserted until the protocol releases
    // and leave deconfigured core signal alone as they are always masked
    out32_sh(QME_LCL_EISR_CLR, (c_mask << SHIFT64SH(43)) );

    PK_TRACE_INF("Parse: Regular Wakeup Fast on Cores[%x], Partial Good Cores[%x], Cores in STOP2+[%x], Block Exit on Cores[%x]",
                 G_qme_record.c_regular_wakeup_fast_req,
                 G_qme_record.c_configured,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_block_wake_done);

    if( !(in32(QME_LCL_QMCR) & BIT32(10)) &&
        G_qme_record.fused_core_enabled )
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
                      (~G_qme_record.c_block_wake_done);

    out32_sh(QME_LCL_EISR_CLR, (c_mask << SHIFT64SH(35)) );

    qme_fused_core_pair_mode(&c_mask);

    uint32_t c_spwu = c_mask & (~G_qme_record.c_stop2_reached);

    if( c_spwu )
    {
        if( G_qme_record.hcode_func_enabled & QME_SPWU_PROTOCOL_CHECK_ENABLE )
        {
            uint32_t scdr = in32(QME_LCL_SCDR);

            if( c_spwu & ( scdr >> SHIFT32(3) ) )
            {
                G_qme_record.c_special_wakeup_error |= c_spwu << 8;
                PK_TRACE_ERR("ERROR: Cores[%x] Running while Assert SPWU_Done when STOP_GATED=1 with SCDR[%x]. HALT QME!",
                             c_spwu, scdr);
                IOTA_PANIC(QME_STOP_SPWU_PROTOCOL_ERROR);
            }
        }

        PK_TRACE_DBG("Event: Assert Special Wakeup Done and PM_EXIT on Cores[%x]", c_spwu);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, c_spwu ), ( BIT32(1) | BIT32(16) ) );
        G_qme_record.c_special_wakeup_done  |= c_spwu;
    }

    G_qme_record.c_stop11_exit_targets   |= c_mask & G_qme_record.c_stop11_reached;
    G_qme_record.c_stop5_exit_targets    |= c_mask & G_qme_record.c_stop5_reached;
    G_qme_record.c_stop3_exit_targets    |= c_mask & G_qme_record.c_stop3_reached;
    G_qme_record.c_stop2_exit_targets    |= c_mask & G_qme_record.c_stop2_reached;
    G_qme_record.c_special_wakeup_exit_pending = c_mask & G_qme_record.c_stop2_exit_targets ;

    PK_TRACE_INF("Parse: Special Wakeup Rise on Cores[%x], Cores in STOP2+[%x], Partial Good Cores[%x], Block Exit on Cores[%x]",
                 G_qme_record.c_special_wakeup_rise_req,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_configured,
                 G_qme_record.c_block_wake_done);
}




void
qme_parse_special_wakeup_fall()
{
    G_qme_record.c_special_wakeup_fall_req =  ( in32_sh(QME_LCL_EISR) & BITS64SH(36, 4) );
    out32_sh(QME_LCL_EISR_CLR, G_qme_record.c_special_wakeup_fall_req);
    G_qme_record.c_special_wakeup_fall_req = G_qme_record.c_special_wakeup_fall_req >> SHIFT64SH(39);

    PK_TRACE_INF("Parse: Special Wakeup Fall on Cores[%x], Cores in STOP2+[%x], Partial Good Cores[%x], Block Entry on Cores[%x]",
                 G_qme_record.c_special_wakeup_fall_req,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_configured,
                 G_qme_record.c_block_stop_done);

    uint32_t c_mask = G_qme_record.c_special_wakeup_fall_req &
                      G_qme_record.c_special_wakeup_done &
                      G_qme_record.c_configured;

    qme_fused_core_pair_mode(&c_mask);

    if( c_mask )
    {
        if( G_qme_record.hcode_func_enabled & QME_SPWU_PROTOCOL_CHECK_ENABLE )
        {
            uint32_t scdr = in32(QME_LCL_SCDR);

            if( c_mask & ( scdr >> SHIFT32(3) ) )
            {
                G_qme_record.c_special_wakeup_error |= c_mask << 16;
                PK_TRACE_ERR("ERROR: Cores[%x] SPWU/Done Dropped when STOP_GATED=1 with SCDR[%x]. HALT QME!",
                             c_mask, scdr);
                IOTA_PANIC(QME_STOP_SPWU_PROTOCOL_ERROR);
            }
        }

        PK_TRACE_DBG("Check: Drop Special Wakeup Done and PM_EXIT on Cores[%x]", c_mask);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, c_mask ), ( BIT32(1) | BIT32(16) ) );
        G_qme_record.c_special_wakeup_done &= ~c_mask;
    }
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
        out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
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
        out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
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

        if( G_qme_record.fused_core_enabled )
        {
            G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_CATCHUP_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_ABORT_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_NCU_PURGE_ABORT_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_CATCHUP_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_ABORT_PATH_ENABLE;
        }

        //===============//

        out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_entry();
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

    if( !(in32(QME_LCL_QMCR) & BIT32(10)) &&
        G_qme_record.fused_core_enabled )
    {
        PK_TRACE_INF("Parse: Fused Core Mode Stop11 Entry Request on Cores[%x] (both Siblings required)",
                     G_qme_record.c_pm_state_active_slow_req);

        if( (G_qme_record.c_pm_state_active_slow_req & 0xc) != 0xc )
        {
            G_qme_record.c_stop1_targets |= G_qme_record.c_pm_state_active_slow_req >> 2;
            G_qme_record.c_pm_state_active_slow_req &= ~0xc;
        }

        if( (G_qme_record.c_pm_state_active_slow_req & 0x3) != 0x3 )
        {
            G_qme_record.c_stop1_targets |= G_qme_record.c_pm_state_active_slow_req & 0x3;
            G_qme_record.c_pm_state_active_slow_req &= ~0x3;
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
                        IOTA_PANIC(QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED);
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
                      (~G_qme_record.c_block_wake_done);

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

    if( !(in32(QME_LCL_QMCR) & BIT32(10)) &&
        G_qme_record.fused_core_enabled )
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
        IOTA_PANIC(QME_STOP11_RUNN_CONTAINED_MODE_ERROR);
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
        out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
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
qme_pm_state_active_slow_event()
{
    //technically contained mode implies stop11 is not supported with it
    if( ( G_qme_record.hcode_func_enabled & QME_RUNN_MODE_ENABLE ) ||
        ( G_qme_record.hcode_func_enabled & QME_CONTAINED_MODE_ENABLE ) )
    {
        PK_TRACE_ERR("ERROR: Attempt to Perform Stop11 when RUNN mode or Contained mode is enabled ");
        IOTA_PANIC(QME_STOP11_RUNN_CONTAINED_MODE_ERROR);
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

        //===============//

        G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_CATCHUP_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_ABORT_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_NCU_PURGE_ABORT_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_CATCHUP_PATH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_ABORT_PATH_ENABLE;

        if( G_qme_record.hcode_func_enabled & QME_SELF_SAVE_ENABLE )
        {
            qme_stop_self_execute(G_qme_record.c_stop11_enter_targets, SPR_SELF_SAVE);
            qme_stop_self_complete(G_qme_record.c_stop11_enter_targets);
        }

        // stop11 is expected not to be aborted
        out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_entry();
        wrteei(0);
    }

    // Stop Entry is lower priority than Wakeups and other events
    // Thus not likely to interrupt other contexts; therefore
    // Always re-evaluate eimr override masks is safe here
    qme_eval_eimr_override();

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_STOP_SLOW);

}
