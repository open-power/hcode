/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_irq_timer_events.C $  */
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
#include "p10_hcd_mma_scaninit.H"
#include "p10_hcd_mma_poweroff.H"
#include "p10_hcd_mma_poweron.H"
#include "p10_hcd_mma_stopclocks.H"
#include "p10_hcd_mma_startclocks.H"

extern QmeRecord G_qme_record;
extern uint64_t g_eimr_override;


// Core Awake, ISU issues EISR[MMA_ACTIVE]:
//   qme_mma_poweron();
//   qme_mma_scans();
//   qme_mma_startclocks();
//   qme_dec_timer(ENABLE);
//   EIMR_OR[MMA_ACTIVE];
//
// DEC_TIMER:
// check EISR[MMA_ACTIVE]
// IF ON
//   EISR_CLR[MMA_ACTIVE]
//   qme_dec_timer(ENABLE)
// ELSE
//   qme_mma_stopclocks();
//   qme_mma_poweroff();
//   qme_dec_timer(DISABLE)
//
// PM_STATE_ACTIVE:
//   qme_dec_timer(DISABLE)    //who cares if already disabled
//   STOP2  will Clock OFF MMA,//who cares if already off
//   STOP5  will Power OFF MMA,//who cares if already off
//   STOP11 will Power OFF MMA //automatically by core pfet
//
// WAKEUP:
// IF STOP2 and DecTimer is disabled before shut off MMA
//   (MMA is still Powered ON but Clock is OFF)
//   qme_mma_startclocks();
//   qme_dec_timer(ENABLE)
//   NOTE: Exit here do NOT just bring MMA back up
//         instead should let dec timer decide MMA
//         needs to be completely off or turned back on.
// ELSE
//   MMA should be completely OFF by either DecTimer or STOP5/11
//   do nothing and wait for ISU's next poweron request

void
qme_mma_active_event()
{
    fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP > chip_target;
    fapi2::Target < fapi2::TARGET_TYPE_CORE |
    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_target;

    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_MMA);
    PK_TRACE("Event: MMA Active, UIH Status[%x]", G_qme_record.uih_status);

    if( G_qme_record.mma_modes_enabled == MMA_POFF_DYNAMIC )
    {
        G_qme_record.c_mma_active_req = in32(QME_LCL_EISR) & BITS32(28, 4);
        uint32_t c_mask = G_qme_record.c_mma_active_req &
                          G_qme_record.c_configured;
        out64(QME_LCL_EISR_CLR, (((uint64_t)c_mask << 32))); //DD1 FIXME

        PK_TRACE_INF("Parse: MMA Active on Cores[%x], MMA Available on Cores[%x], Partial Good Cores[%x], Cores in STOP2+[%x]",
                     G_qme_record.c_mma_active_req,
                     G_qme_record.c_mma_available,
                     G_qme_record.c_configured,
                     G_qme_record.c_stop2_reached);

        c_mask &= ~(G_qme_record.c_mma_available);

        if( c_mask )
        {
            core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                          static_cast<fapi2::MulticastCoreSelect>(c_mask));

            MARK_TAG( c_mask, SX_MMA_POWERON )

            p10_hcd_mma_poweron(core_target);

            MARK_TAG( c_mask, SX_MMA_SCANINIT )

            p10_hcd_mma_scaninit(core_target);

            MARK_TAG( c_mask, SX_MMA_STARTCLOCKS )

            p10_hcd_mma_startclocks(core_target);

            // delay for mma available travel window
            for(uint32_t i = 0; i < 10; i++)
            {
                asm volatile ("tw 0, 0, 0");
            }

            // assert mma_available
            G_qme_record.c_mma_available |= c_mask;
            // core can pulse mma_active during poweron, this is to cleanup
            out64( QME_LCL_EISR_CLR, ((uint64_t)G_qme_record.c_mma_available << 32)); //DD1 FIXME
            out64( QME_LCL_CORE_ADDR_WR(CPMS_MMAR_WO_OR, c_mask), BIT64(0) );

            MARK_TAG( c_mask, SX_MMA_AVAILABLE )

            //mask EIMR[28+c] mma_active
            data64_t mask_irqs     = {0};
            mask_irqs.words.upper  = c_mask;
            mask_irqs.words.lower  = 0;
            g_eimr_override |= mask_irqs.value;
            out64(QME_LCL_EIMR_OR, ((uint64_t)c_mask << 32));
        }
    }

    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_MMA);
}


#if ENABLE_DEC_TIMER

void
qme_dec_handler()
{
    uint32_t c_eisr   = 0;
    uint32_t c_einr   = 0;
    uint32_t c_mask   = 0;
    uint32_t c_loop   = 0;
    uint32_t c_index  = 0;
    uint32_t c_active = 0;
    uint32_t c_mma_active = 0;
    uint32_t c_mma_abort  = 0;
    fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP > chip_target;
    fapi2::Target < fapi2::TARGET_TYPE_CORE |
    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_target;

    mtspr(SPRN_TSR, TSR_DIS);
    G_qme_record.uih_status |= BIT32(IDX_TIMER_DEC);
    // DO NOT Enable this trace unless debug needs
    //PK_TRACE_INF("Timer: Decrementer, UIH Status[%x]", G_qme_record.uih_status);

    if( G_qme_record.mma_modes_enabled == MMA_POFF_DYNAMIC )
    {
        // einr = 0 and eisr = 0 -> no active
        // einr = 0 and eisr = 1 -> no active
        // einr = 1 and eisr = 0 -> active -> reset counter
        // eisr = 1 and eisr = 1 -> active -> reset counter
        c_active = in32(QME_LCL_EINR) & BITS32(28, 4);

        for( c_index = 0, c_loop = 8; c_index < 4; c_index++, c_loop = c_loop >> 1 )
        {
            // advance poweroff count down
            // if core not in stop2+ state(mma already stopped)
            // or core is running but mma already stopped
            // and mma is not executing instruction
            if( c_loop & (~c_active) &
                G_qme_record.c_configured &
                G_qme_record.c_mma_available )
            {
                G_qme_record.c_mma_poweroff_count[c_index]++;
            }
            else
            {
                G_qme_record.c_mma_poweroff_count[c_index] = 0;
            }

            // add to poweroff list and core_mma_poweroff_counter[c] = 0
            if( (G_qme_record.c_mma_poweroff_count[c_index] > G_qme_record.mma_pwoff_dec_ticks ) )
            {
                G_qme_record.c_mma_poweroff_count[c_index] = 0;
                c_mask |= c_loop;
            }
        }

        if( c_mask )
        {
            PK_TRACE_INF("Event: MMA Powering OFF, Targets[%x] Current MMA Available[%x] Current MMA Active[%x]",
                         c_mask,
                         G_qme_record.c_mma_available,
                         c_active);

            // take away mma_available
            G_qme_record.c_mma_available &= ~c_mask;
            out64( QME_LCL_CORE_ADDR_WR(CPMS_MMAR_WO_CLEAR, c_mask), BIT64(0) );

            // fence the MMA[c] by asserting mma_functional_reset
            //out64( QME_LCL_CORE_ADDR_WR(CPMS_MMAR_WO_OR, c_mask), BIT64(1) );

            // delay for mma available travel window
            for(uint32_t i = 0; i < 10; i++)
            {
                asm volatile ("tw 0, 0, 0");
            }

            // Hcode must wait for 2X the round trip time of mma_available
            // to the Core ISU then check to ensure MMA_ACTIVE
            // in the QME EISR has not asserted again,
            // to cover the window case (if so, abort MMA power off routine).
            // Also note that QME Hcode should check SCSR[CORE_QUIESCED]==0
            // before powering off the MMA dynamically.
            c_mma_active = in32(QME_LCL_EINR) & BITS32(28, 4);
            c_mma_abort = c_mask & c_mma_active;

            if( c_mma_abort )
            {
                out64( QME_LCL_EISR_CLR, ((uint64_t)c_mma_abort << 32)); //DD1 FIXME
                out64( QME_LCL_CORE_ADDR_WR(CPMS_MMAR_WO_OR, c_mma_abort), BIT64(0) );
                G_qme_record.c_mma_available |= c_mma_abort;
                PK_TRACE_INF("Event: MMA Abort Detect on MMA_ACTIVE[%x], Current MMA Power OFF target[%x]",
                             c_mma_active, c_mask);
            }

            c_mask &= ~c_mma_active;

            if( c_mask )
            {
                core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                              static_cast<fapi2::MulticastCoreSelect>(c_mask));

                MARK_TAG( c_mask, SE_MMA_STOPCLOCKS )

                p10_hcd_mma_stopclocks(core_target);

                MARK_TAG( c_mask, SE_MMA_POWEROFF )

                p10_hcd_mma_poweroff(core_target);

                MARK_TAG( c_mask, SE_MMA_STOPPED )

                // clean eisr for any leftover, check if einr is set so mma_active here would be real
                c_eisr   = in32(QME_LCL_EISR) & BITS32(28, 4) & c_mask;
                out64( QME_LCL_EISR_CLR, ((uint64_t)c_eisr << 32)); //DD1 FIXME
                c_einr   = in32(QME_LCL_EINR) & BITS32(28, 4) & c_mask;

                if( c_einr )
                {
                    out64( QME_LCL_EISR_OR, ((uint64_t)c_einr << 32)); //DD1 FIXME
                }

                //unmask EIMR[28+c] to allow for MMA power-on
                data64_t mask_irqs     = {0};
                mask_irqs.words.upper  = c_mask;
                mask_irqs.words.lower  = 0;
                g_eimr_override &= ~mask_irqs.value;
                out64(QME_LCL_EIMR_CLR, ((uint64_t)c_mask << 32));
            }
        }
    }

    mtspr(SPRN_DEC, G_qme_record.mma_pwoff_dec_val);

    G_qme_record.uih_status &= ~BIT32(IDX_TIMER_DEC);
}

#endif //dec handler




#if ENABLE_FIT_TIMER

void
qme_fit_handler()
{
    uint32_t c_stop11 = 0;
    mtspr(SPRN_TSR, TSR_FIS);

    G_qme_record.uih_status |= BIT32(IDX_TIMER_FIT);

    if ( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_STOP11_ENTRY_REQUESTED ) )
    {
        // Clear so that resampling will not occur.
        out32( QME_LCL_FLAGS_CLR, BIT32( QME_FLAGS_STOP11_ENTRY_REQUESTED ) );

        // Read stop11 request from scrb
        c_stop11 = ( in32( QME_LCL_SCRB ) & BITS32(24, 4) ) >> SHIFT32(27) ;

        PK_TRACE_INF("Event: Stop11 Requested via Flags and Scrb[%x]", c_stop11);

        if( c_stop11 )
        {
            G_qme_record.c_stop2_enter_targets  |= c_stop11;
            G_qme_record.c_stop5_enter_targets  |= c_stop11;
            G_qme_record.c_stop11_enter_targets |= c_stop11;

            MARK_TAG( G_qme_record.c_stop11_enter_targets, IRQ_PM_STATE_ACTIVE_SLOW_EVENT )

            //===============//

            G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_ABORT_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_NCU_PURGE_ABORT_PATH_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_STOP3OR5_ABORT_PATH_ENABLE;

            // stop11 is expected not to be aborted
            out64(QME_LCL_EIMR_OR, BITS64(32, 24));
            g_eimr_override |= BITS64(32, 24);

            wrteei(1);
            qme_stop_entry();
            wrteei(0);

            // Stop Entry is lower priority than Wakeups and other events
            // Thus not likely to interrupt other contexts; therefore
            // Always re-evaluate eimr override masks is safe here
            qme_eval_eimr_override();
        }
    }

    G_qme_record.uih_status &= ~BIT32(IDX_TIMER_FIT);
}

#endif //fit handler
