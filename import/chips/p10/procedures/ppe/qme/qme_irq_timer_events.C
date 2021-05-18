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
qme_mma_stop_exit(uint32_t c_mask)
{
    fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP > chip_target;
    fapi2::Target < fapi2::TARGET_TYPE_CORE |
    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_target =
        chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
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
#if POWER10_DD_LEVEL == 10
    out64( QME_LCL_EISR_CLR, ((uint64_t)G_qme_record.c_mma_available << 32));
#else
    out32( QME_LCL_EISR_CLR, G_qme_record.c_mma_available );
#endif
    out64( QME_LCL_CORE_ADDR_WR(CPMS_MMAR_WO_OR, c_mask), BIT64(0) );
    MARK_TAG( c_mask, SX_MMA_AVAILABLE )
}


void
qme_mma_active_event()
{
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_MMA);
    PK_TRACE("Event: MMA Active, UIH Status[%x]", G_qme_record.uih_status);

    G_qme_record.c_mma_active_req = in32(QME_LCL_EINR) & BITS32(28, 4);
#if POWER10_DD_LEVEL == 10
    out64(QME_LCL_EISR_CLR, (((uint64_t)G_qme_record.c_mma_active_req << 32)));
#else
    out32(QME_LCL_EISR_CLR, G_qme_record.c_mma_active_req);
#endif

    uint32_t c_mask = G_qme_record.c_mma_active_req &
                      G_qme_record.c_configured     &
                      (~G_qme_record.c_mma_available) &
                      (~G_qme_record.c_stop2_reached);

    PK_TRACE_INF("Parse: MMA Active on EINR[%x], MMA Available on Cores[%x], Cores in STOP2+[%x], MMA to Bringup[%x]",
                 G_qme_record.c_mma_active_req,
                 G_qme_record.c_mma_available,
                 G_qme_record.c_stop2_reached,
                 c_mask);

    if( c_mask && G_qme_record.mma_modes_enabled == MMA_POFF_DYNAMIC )
    {
        qme_mma_stop_exit(c_mask);

        //mask EIMR[28+c] mma_active
        data64_t mask_irqs     = {0};
        mask_irqs.words.upper  = c_mask;
        mask_irqs.words.lower  = 0;
        g_eimr_override |= mask_irqs.value;
#if POWER10_DD_LEVEL == 10
        out64(QME_LCL_EIMR_OR, ((uint64_t)c_mask << 32));
#else
        out32(QME_LCL_EIMR_OR, c_mask);
#endif
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
                G_qme_record.c_mma_available &
                (~G_qme_record.c_special_wakeup_done))
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
#if POWER10_DD_LEVEL == 10
                out64( QME_LCL_EISR_CLR, ((uint64_t)c_mma_abort << 32));
#else
                out32( QME_LCL_EISR_CLR, c_mma_abort );
#endif
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
#if POWER10_DD_LEVEL == 10
                out64( QME_LCL_EISR_CLR, ((uint64_t)c_eisr << 32));
#else
                out32( QME_LCL_EISR_CLR, c_eisr);

#endif
                c_einr   = in32(QME_LCL_EINR) & BITS32(28, 4) & c_mask;

                if( c_einr )
                {
#if POWER10_DD_LEVEL == 10
                    out64( QME_LCL_EISR_OR, ((uint64_t)c_einr << 32));
#else
                    out32( QME_LCL_EISR_OR, c_einr);
#endif

                }

                //unmask EIMR[28+c] to allow for MMA power-on
                data64_t mask_irqs     = {0};
                mask_irqs.words.upper  = c_mask;
                mask_irqs.words.lower  = 0;
                g_eimr_override &= ~mask_irqs.value;
#if POWER10_DD_LEVEL == 10
                out64(QME_LCL_EIMR_CLR, ((uint64_t)c_mask << 32));
#else
                out32(QME_LCL_EIMR_CLR, c_mask);
#endif
            }
        }

        mtspr(SPRN_DEC, G_qme_record.mma_pwoff_dec_val);
    }

    G_qme_record.uih_status &= ~BIT32(IDX_TIMER_DEC);
}

#endif //dec handler




#if ENABLE_FIT_TIMER

void
qme_fit_handler()
{
    uint32_t recovery_dis   = 0;
    uint32_t core_stop_gated = 0;
    uint32_t core_spwu_done = 0;
    uint32_t core_mask  = 0;
    uint64_t c_hid      = 0;
    uint64_t c_fir      = 0;
    uint64_t c_firmask  = 0;
    uint64_t c_firact0  = 0;
    uint64_t c_firact1  = 0;
    uint32_t c_stop11   = 0;
    mtspr(SPRN_TSR, TSR_FIS);

    G_qme_record.uih_status |= BIT32(IDX_TIMER_FIT);

    recovery_dis   = 0;
    G_qme_record.c_in_recovery = 0;

    core_spwu_done = ((in32(QME_LCL_SCDR) & BITS32(12, 4)) >> SHIFT32(15));
    //Primarily for CCI, if we cannot get to spwu_done due to block_exit
    //then we can we take both block_exit(sitting in stop11) and
    //spwu_wakeup_done(out of stop11)
    //as safe zone to proceed with core recovery.
    core_spwu_done = core_spwu_done | G_qme_record.c_block_wake_done;

    core_stop_gated = ( in32(QME_LCL_SCDR) >> SHIFT32(3) ) & 0xF;

    for( core_mask = 8; core_mask; core_mask = core_mask >> 1 )
    {
        if( core_mask & G_qme_record.c_configured & (~core_stop_gated) )
        {
            PPE_GETSCOM_UC( CORE_HID, 0, core_mask, c_hid);

            if( recovery_dis || (c_hid & BIT64(11)) )
            {
                PK_TRACE("core recovery is disabled, do not perform any actions");
                recovery_dis = 1;
                break;
            }

            PPE_GETSCOM_UC( CORE_FIR,      0, core_mask, c_fir);
            PPE_GETSCOM_UC( CORE_FIR_MASK, 0, core_mask, c_firmask);
            PPE_GETSCOM_UC( CORE_FIR_ACT0, 0, core_mask, c_firact0);
            PPE_GETSCOM_UC( CORE_FIR_ACT1, 0, core_mask, c_firact1);

            //read core fir, mask, act0, act1 and determine if any recoverable errors are set.
            if( c_fir & (~c_firmask) & (~c_firact0) & c_firact1 )
            {
                G_qme_record.c_in_recovery |= core_mask;
                G_qme_record.recovery_ongoing = 1;

                //if any core is in recovery, and special wakeup done is set for all cores
                if( core_spwu_done == G_qme_record.c_configured )
                {
                    //make sure even block_exit is removed,
                    //we will keep them in place until this is done
                    G_qme_record.c_block_wake_override = G_qme_record.c_block_wake_done;

                    PK_TRACE("Assert EQ_FLUSHMODE_INH via CPLT_CTRL0[2]");
                    PPE_PUTSCOM(CPLT_CTRL0_OR, BIT64(2));

                    PK_TRACE("Assert EQ_SDIS_DC_N CPLT_CONF0[34]");
                    PPE_PUTSCOM(CPLT_CONF0_OR, BIT64(34));

                    PK_TRACE("Deassert HID(5) for any core in recovery");
                    c_hid &= ~BIT64(5);
                    PPE_PUTSCOM_UC(CORE_HID, 0, core_mask, c_hid);
                }
                //If any core is in recovery, set special wakeup for all cores
                else
                {
                    PK_TRACE("Core in Recovery, special wakeup all cores");
                    out32( QME_LCL_CORE_ADDR_WR( QME_SPWU_OTR, G_qme_record.c_configured ), BIT32(0) );
                }
            }
        }
    }

    if( G_qme_record.c_in_recovery )
    {
        PK_TRACE_INF("detected core[%x] in recovery", G_qme_record.c_in_recovery);
    }

    //If all cores are out of recovery, and special wakeup done is asserted on all cores
    if( (!recovery_dis) && (!G_qme_record.c_in_recovery) && G_qme_record.recovery_ongoing &&
        (core_spwu_done == G_qme_record.c_configured) )
    {
        G_qme_record.recovery_ongoing = 0;
        G_qme_record.c_block_wake_override = 0;

        PK_TRACE("Clear CORE_FIR[28]");
        PPE_PUTSCOM_MC( CORE_FIR_AND, G_qme_record.c_configured, (~BIT64(28)));

        PK_TRACE("Unmask CORE_FIR[28]");
        PPE_PUTSCOM_MC( CORE_FIR_MASK_AND, G_qme_record.c_configured, (~BIT64(28)));

        PK_TRACE("Assert HID(5) for all cores to disable recovery");

        for( core_mask = 8; core_mask; core_mask = core_mask >> 1 )
        {
            if( core_mask & G_qme_record.c_configured )
            {
                PPE_GETSCOM_UC( CORE_HID, 0, core_mask, c_hid);
                c_hid |= BIT64(5);
                PPE_PUTSCOM_UC( CORE_HID, 0, core_mask, c_hid);
            }
        }

        PK_TRACE("Drop EQ_FLUSHMODE_INH via CPLT_CTRL0[2]");
        PPE_PUTSCOM(CPLT_CTRL0_CLR, BIT64(2));

        PK_TRACE("Drop EQ_SDIS_DC_N CPLT_CONF0[34]");
        PPE_PUTSCOM(CPLT_CONF0_CLR, BIT64(34));

        for( core_mask = 8; core_mask; core_mask = core_mask >> 1 )
        {
            if( core_mask & G_qme_record.c_configured )
            {
                PPE_GETSCOM_UC( CORE_FIR, 0, core_mask, c_fir);

                //Read CORE_FIR[28]. If 0 then mask CORE_FIR[28].
                //If 1 do not mask CORE_FIR[28]. Leave breadcrumbs for PRD
                if( !(c_fir & BIT64(28)) )
                {
                    PK_TRACE("Mask CORE_FIR[28] only if it isnt set");
                    PPE_PUTSCOM_UC( CORE_FIR_MASK_OR, 0, core_mask, BIT64(28));
                }
            }
        }

        PK_TRACE("Drop special wakeup on all cores");
        out32( QME_LCL_CORE_ADDR_WR( QME_SPWU_OTR, G_qme_record.c_configured ), 0 );
    }


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
#if POWER10_DD_LEVEL == 10
            out64(QME_LCL_EIMR_OR, BITS64(32, 24));
#else
            out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
#endif
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

    /*enable when needs such injection
        // Sense for QME machine check error inject
        if (in32 (QME_LCL_FLAGS) & BIT32 (QME_FLAGS_FATAL_FAULT_ERR_INJECT))
        {
            uint64_t scom_data  = 0;
            uint32_t local_data = 0;

            // If bit 8 set on any PCSCR reg, trigger a machine check bad scom access
            if ( BIT32 (QME_PCSCR_BAD_SCOM_FAULT_INJECT) &
                 in32 (QME_LCL_CORE_ADDR_OR (QME_LCL_SCR, 0xF)) )
            {
                PK_TRACE_DBG ("Access bad SCOM as trigger for QME machine check");
                PPE_GETSCOM (TP_TPBR_AD_ALTD_CMD_REG, scom_data);
                //per core: PPE_GETSCOM_MC_AND( CORE_PCR_INVALID_ADDR, fault_core, scom_data);
            }

            // If bit 9 set on any PCSCR reg, trigger a machine check via bad local access
            if ( BIT32 (QME_PCSCR_BAD_LOCAL_FAULT_INJECT) &
                 in32 (QME_LCL_CORE_ADDR_OR (QME_LCL_SCR, 0xF)) )
            {
                PK_TRACE_DBG ("Access bad Local as trigger for QME machine check");
                local_data = in32(QME_FLAGS_INVALID_ADDR);
                //per core: local_data = in32( QME_LCL_CORE_ADDR_WR( QME_SCR_INVALID_ADDR, fault_core) );
                local_data++;//prevent vairable not used error
            }
        }
    */
    G_qme_record.uih_status &= ~BIT32(IDX_TIMER_FIT);
}

#endif //fit handler
