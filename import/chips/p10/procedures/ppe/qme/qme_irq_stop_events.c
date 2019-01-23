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

void
qme_eval_eimr_override()
{
    wrteei(0);

    G_qme_record.c_pm_state_active_mask =
        (((~G_qme_record.c_configured)       |
          G_qme_record.c_stop2_reached       |
          G_qme_record.c_in_error            |
          G_qme_record.c_special_wakeup_done |
          G_qme_record.c_block_stop_done)    & QME_MASK_ALL_CORES);

    G_qme_record.c_regular_wakeup_mask =
        (((~G_qme_record.c_configured)       |
          (~G_qme_record.c_stop2_reached)    |
          G_qme_record.c_in_error            |
          G_qme_record.c_block_wake_done)    & QME_MASK_ALL_CORES);

    G_qme_record.c_special_wakeup_rise_mask =
        (((~G_qme_record.c_configured)       |
          G_qme_record.c_in_error            |
          G_qme_record.c_special_wakeup_done)  & QME_MASK_ALL_CORES);

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

    wrteei(1);
}





//==============================



void
qme_parse_pm_state_active_fast()
{
    uint32_t c_mask   = 0;
    uint32_t c_loop   = 0;
    uint32_t c_start  = 0;
    uint32_t c_index  = 0;

    G_qme_record.c_pm_state_active_fast_req =
        ( in32_sh(G_QME_LCL_EISR) & BITS64SH(48, 4) ) >> SHIFT64SH(51);

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
            G_qme_record.c_pm_state[c_index] =
                ( in32( G_QME_LCL_SSDR ) & BITS32(c_start, 4) ) >> SHIFT32( (c_start + 3) );

            if( G_qme_record.c_pm_state[c_index] >= STOP_LEVEL_5 )
            {
                G_qme_record.c_stop5_enter_targets |= c_loop;
            }

            if( G_qme_record.c_pm_state[c_index] >= STOP_LEVEL_2 )
            {
                G_qme_record.c_stop2_enter_targets |= c_loop;
            }

            if( !( G_qme_record.stop_level_enabled & BIT32(STOP_LEVEL_5) ) )
            {
                G_qme_record.c_stop5_enter_targets = 0;
            }

            if( !( G_qme_record.stop_level_enabled & BIT32(STOP_LEVEL_2) ) )
            {
                G_qme_record.c_stop0_targets =
                    G_qme_record.c_stop2_enter_targets & (~G_qme_record.c_stop5_enter_targets);
                G_qme_record.c_stop2_enter_targets = G_qme_record.c_stop5_enter_targets;

                G_qme_record.hcode_func_enabled &= (~QME_STOP5_ABORT_PATH_ENABLE);

                if( G_qme_record.c_stop0_targets )
                {
                    PK_TRACE("Core Waking up(pm_exit=1) via PCR_SCSR[1]");
                    out32( QME_LCL_CORE_ADDR_WR(
                               G_QME_SCSR_OR, G_qme_record.c_stop0_targets ), BIT32(1) );

                    WAIT_4_PPE_CYCLES

                    PK_TRACE("Polling for Core Waking up(pm_active=0) via QME_SSDR[12-15]");

                    while( ( ( (~in32(G_QME_LCL_SSDR)) >> SHIFT32(15) ) &
                             G_qme_record.c_stop0_targets ) != G_qme_record.c_stop0_targets );

                    PK_TRACE_INF("WAKE0: Core[%x] Drop PM_EXIT via PCR_SCSR[1]",
                                 G_qme_record.c_stop0_targets);
                    out32( QME_LCL_CORE_ADDR_WR(
                               G_QME_SCSR_CLR, G_qme_record.c_stop0_targets ), BIT32(1) );
                }
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
qme_parse_regular_wakeup_fast()
{
    G_qme_record.c_regular_wakeup_fast_req =
        ( in32_sh(G_QME_LCL_EISR) & BITS64SH(40, 4) ) >> SHIFT64SH(43);

    uint32_t c_mask = G_qme_record.c_regular_wakeup_fast_req &
                      G_qme_record.c_configured &
                      (~G_qme_record.c_block_wake_done);

    G_qme_record.c_stop2_exit_targets |= c_mask & G_qme_record.c_stop2_reached;
    G_qme_record.c_stop5_exit_targets |= c_mask & G_qme_record.c_stop5_reached;

    PK_TRACE_INF("Parse: Regular Wakeup Fast on Cores[%x], Partial Good Cores[%x], Cores in STOP2+[%x], Block Exit on Cores[%x]",
                 G_qme_record.c_regular_wakeup_fast_req,
                 G_qme_record.c_configured,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_block_wake_done);
}



void
qme_parse_special_wakeup_rise()
{
    G_qme_record.c_special_wakeup_rise_req =
        ( in32_sh(G_QME_LCL_EISR) & BITS64SH(32, 4) ) >> SHIFT64SH(35);

    uint32_t c_mask = G_qme_record.c_special_wakeup_rise_req &
                      G_qme_record.c_configured;

    uint32_t c_spwu = c_mask & (~G_qme_record.c_stop2_reached);

    if( c_spwu )
    {
        if( G_qme_record.hcode_func_enabled & QME_SPWU_PROTOCOL_CHECK_ENABLE )
        {
            uint32_t scdr = in32(G_QME_LCL_SCDR);

            if( c_spwu & ( scdr >> SHIFT32(3) ) )
            {
                PK_TRACE_ERR("ERROR: Cores[%x] Running while Assert SPWU_Done when STOP_GATED=1 with SCDR[%x]. HALT QME!",
                             c_spwu, scdr);

                IOTA_PANIC(QME_STOP_SPWU_PROTOCOL_ERROR);
            }
        }

        PK_TRACE_DBG("Event: Assert Special Wakeup Done and PM_EXIT on Cores[%x]", c_spwu);
        out32( QME_LCL_CORE_ADDR_WR( G_QME_SCSR_OR, c_spwu ), ( BIT32(1) | BIT32(16) ) );
        G_qme_record.c_special_wakeup_done  |= c_spwu;
    }

    c_mask &= (~G_qme_record.c_block_wake_done);

    G_qme_record.c_stop11_exit_targets   |= c_mask & G_qme_record.c_stop11_reached;
    G_qme_record.c_stop5_exit_targets    |= c_mask & G_qme_record.c_stop5_reached;
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
    G_qme_record.c_special_wakeup_fall_req =
        ( in32_sh(G_QME_LCL_EISR) & BITS64SH(36, 4) ) >> SHIFT64SH(39);

    PK_TRACE_INF("Parse: Special Wakeup Fall on Cores[%x], Cores in STOP2+[%x], Partial Good Cores[%x], Block Entry on Cores[%x]",
                 G_qme_record.c_special_wakeup_fall_req,
                 G_qme_record.c_stop2_reached,
                 G_qme_record.c_configured,
                 G_qme_record.c_block_stop_done);


    uint32_t c_mask = G_qme_record.c_special_wakeup_fall_req &
                      G_qme_record.c_configured;

    if( c_mask )
    {
        if( G_qme_record.hcode_func_enabled & QME_SPWU_PROTOCOL_CHECK_ENABLE )
        {
            uint32_t scdr = in32(G_QME_LCL_SCDR);

            if( c_mask &
                ( (   scdr  >> SHIFT32(3) ) |
                  ( (~scdr) >> SHIFT32(15) ) ) )
            {
                PK_TRACE_ERR("ERROR: Cores[%x] SPWU Dropped when STOP_GATED=1/SPWU_DONE=0 with SCDR[%x]. HALT QME!",
                             c_mask, scdr);
                IOTA_PANIC(QME_STOP_SPWU_PROTOCOL_ERROR);
            }
        }

        PK_TRACE_DBG("Check: Drop Special Wakeup Done and PM_EXIT on Cores[%x]", c_mask);
        out32( QME_LCL_CORE_ADDR_WR( G_QME_SCSR_CLR, c_mask ), ( BIT32(1) | BIT32(16) ) );
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
        out32_sh(G_QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
        wrteei(0);
    }

    // If Stop Entry was aborted
    // The retrun of this handler will be back to Stop Entry leftover,
    // which will then re-evaluate eimr overrides, thus skip for now
    if( (~G_qme_record.uih_status) & IDX_PRTY_LVL_STOP_FAST )
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
        out32_sh(G_QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);

        wrteei(1);
        qme_stop_exit();
        wrteei(0);
    }

    // If Stop Entry was aborted
    // The retrun of this handler will be back to Stop Entry leftover,
    // which will then re-evaluate eimr overrides, thus skip for now
    if( (~G_qme_record.uih_status) & IDX_PRTY_LVL_STOP_FAST )
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

        //===============//

        out32_sh(G_QME_LCL_EIMR_OR, BITS64SH(32, 24));
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
qme_regular_wakeup_slow_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_RGWU_SLOW);
    PK_TRACE("Event: Regular Wakeup Slow");
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_RGWU_SLOW);
}

void
qme_pm_state_active_slow_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_STOP_SLOW);
    PK_TRACE("Event: PM State Active Slow");

    /*
        uint32_t t_offset = 0;
        uint32_t esl_ec   = 0;

        esl_ec = BITS32(2, 2);

        for( t_offset = 0; t_offset < 16; t_offset += 4 )
        {
            esl_ec &= in32( ( G_QME_PSCRS | (c_loop << 16) | (t_offset << 4) ) );
        }
    */

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_STOP_SLOW);
}
