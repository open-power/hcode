/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_irq_timer_events.c $  */
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
    uint64_t top = in64(QME_LCL_EISR) & BITS64(0, 8);
    out64(QME_LCL_EIMR_OR, top);
    g_eimr_override |= top;

    if( top & BIT64(2) )
    {
        PK_TRACE_INF("Event: Top Priority: %x", (uint32_t)(top >> 32));
    }

    //placeholder if flag: errlog and halt
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_TOPPRI);
}

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
    G_qme_record.uih_status |= BIT32(IDX_PRTY_LVL_MMA);
    PK_TRACE("Event: MMA Active");
    G_qme_record.uih_status &= ~BIT32(IDX_PRTY_LVL_MMA);
}


#if ENABLE_DEC_TIMER

void
qme_dec_handler()
{
    G_qme_record.uih_status |= BIT32(IDX_TIMER_DEC);
    mtspr(SPRN_TSR, TSR_DIS);
    //PK_TRACE_INF("Timer: Decrementer");
    G_qme_record.uih_status &= ~BIT32(IDX_TIMER_DEC);
}

#endif //dec handler




#if ENABLE_FIT_TIMER

void
qme_fit_handler()
{
    uint32_t c_stop11 = 0;
#if POWER10_DD_LEVEL == 10
    uint32_t c_mask   = 0;
    uint32_t c_pair   = 0;
    uint32_t c_entry  = 0;
    uint32_t scsr     = 0;
    uint32_t shift    = 0;
    uint32_t pm_active      = 0;
    uint32_t pm_state       = 0;
    uint32_t pm_state_even  = 0;
    uint32_t pm_state_odd   = 0;
#endif
    mtspr(SPRN_TSR, TSR_FIS);

    G_qme_record.uih_status |= BIT32(IDX_TIMER_FIT);

    //PK_TRACE("Timer: FIT, UIH Status[%x]", G_qme_record.uih_status);

#if POWER10_DD_LEVEL == 10

    if( in32(QME_LCL_QMCR) & BIT32(10) )
    {
        for( c_mask = 8; c_mask > 0; c_mask = c_mask >> 1 )
        {
            if( c_mask & G_qme_record.c_configured )
            {
                scsr = in32_sh( QME_LCL_CORE_ADDR_OR( QME_SCSR, c_mask ) );
                pm_active = scsr & BIT64SH(59);

                if( c_mask & 0xA )
                {
                    c_pair = (pm_active >> 3);
                    pm_state_even = scsr & BITS64SH(60, 4);
                }
                else
                {
                    c_pair |= (pm_active >> 4);
                    pm_state_odd = scsr & BITS64SH(60, 4);

                    if( c_pair == 0x3 )
                    {
                        pm_state = pm_state_even < pm_state_odd ? pm_state_even : pm_state_odd ;

                        // fast
                        shift = SHIFT64SH(51);

                        // slow
                        if( pm_state > 10 )
                        {
                            shift = SHIFT64SH(55);
                        }

                        // c2 c3
                        c_entry = 0x3 << shift;

                        // c0 c1
                        if( c_mask > 3 )
                        {
                            c_entry = 0x3 << (shift + 2);
                        }

                        out64( QME_LCL_EISR_OR, ((uint64_t)c_entry) );
                        PK_TRACE_INF("pair mode pm_state_even %x pm_state_odd %x c_entry %x c_mask %x",
                                     pm_state_even, pm_state_odd, c_entry, c_mask);
                    }
                }
            }
        }
    }

#endif

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
            out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
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
