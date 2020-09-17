/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_irq_handlers_fit.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
#include "pgpe.h"
#include "pgpe_irq_handlers.h"
#include "pgpe_gppb.h"
#include "pgpe_header.h"
#include "pgpe_pstate.h"
#include "pgpe_occ.h"
#include "pgpe_wov_ocs.h"
#include "pgpe_event_table.h"
#include "p10_oci_proc_6.H"
#include "p10_oci_proc_7.H"

uint32_t G_beacon_count_threshold;
uint32_t G_beacon_count;

//
//  Local function declarations
//
void pgpe_irq_fit_handler();

//
//  p9_pgpe_fit_init
//
//  This is called during PGPE Boot to intialize FIT(Fixed Internal Timer) related
//  data.
//
void pgpe_irq_fit_init()
{
    uint16_t freq = pgpe_gppb_get_occ_complex_frequency_mhz();

    PK_TRACE("FIT: OCCCmpFreq=0x%dMhz", pgpe_gppb_get_occ_complex_frequency_mhz());

    //Set PGPE beacon count threshold. PGPE beacon should be incremented
    //every 2ms. This is monitored by OCC
    G_beacon_count_threshold = (freq < 360) ? 11 :
                               (freq < 393) ? 12 :
                               (freq < 426) ? 13 :
                               (freq < 458) ? 14 :
                               (freq < 491) ? 15 :
                               (freq < 524) ? 16 :
                               (freq < 557) ? 17 :
                               (freq < 589) ? 18 :
                               (freq < 622) ? 19 : 20;
    PK_TRACE("Fit BeaconThr=0x%d", G_beacon_count_threshold);

    //Determine PGPE heartbeat value to be written in each quad(monitored by CME)
    G_beacon_count = 0;

    //Set FIT handler which is called on every FIT interrupt tick
    uint32_t tcr_val = mfspr(SPRN_TCR);
    tcr_val |= TCR_FIE;
    IOTA_FIT_HANDLER(pgpe_irq_fit_handler);
    mtspr(SPRN_TCR, tcr_val);
}

//
//  handle_occ_beacon
//
//  Updates Heart Beat Register in every quad, and increments PGPE Beacon
//
//  PGPE beacon needs to be written every 2ms. However, we
//  set the FIT interrupt period smaller than that, and
//  update PGPE beacon only when we have seen "G_beacon_count_threshold"
//  number of FIT interrupts
__attribute__((always_inline)) inline void handle_occ_beacon()
{
    if (G_beacon_count == G_beacon_count_threshold)
    {
        pgpe_occ_update_beacon();
        G_beacon_count = 0;
    }
    else
    {
        G_beacon_count++;
    }
}

__attribute__((always_inline)) inline void handle_occflg_requests()
{
    uint32_t occFlag;
    //Read OCC_FLAGS
    occFlag = in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_RW);

    //PK_TRACE("FIT: OCCFLG=0x%08x",occFlag);
    if(occFlag & BIT32(PGPE_SAFE_MODE))
    {
        //Mark event
        pgpe_event_tbl_set_status(EV_SAFE_MODE, EVENT_PENDING);
        pgpe_opt_set_byte(0, 0);
        pgpe_opt_set_byte(1, pgpe_pstate_get(pstate_curr));
        pgpe_opt_set_byte(2, pgpe_pstate_get(pstate_safe));
        pgpe_opt_set_byte(3, SAFE_MODE_FAULT_OCC);
        ppe_trace_op(PGPE_OPT_SAFE_MODE, pgpe_opt_get());
    }

    if(occFlag & BIT32(PGPE_PSTATE_PROTOCOL_STOP))
    {
        //Mark event
        pgpe_event_tbl_set_status(EV_PSTATE_STOP, EVENT_PENDING);
        pgpe_opt_set_byte(0, 0);
        pgpe_opt_set_byte(1, pgpe_pstate_get(pstate_curr));
        pgpe_opt_set_byte(2, pgpe_pstate_get(pstate_safe));
        pgpe_opt_set_byte(3, SAFE_MODE_FAULT_OCC);
        ppe_trace_op(PGPE_OPT_SAFE_MODE, pgpe_opt_get());
    }
}


__attribute__((always_inline)) inline void handle_produce_wof()
{
    pgpe_occ_produce_wof_values();
}

__attribute__((always_inline)) inline void handle_wov_ocs()
{
    pgpe_wov_ocs_determine_perf_loss();
    pgpe_wov_ocs_update_dirty();
}

//  p9_pgpe_fit_handler
//
//  This is a periodic FIT Handler which is called up at fixed period
//  as determined by GPE_TIMER_SELECT register
//
void pgpe_irq_fit_handler()
{
    handle_occflg_requests();
    handle_occ_beacon();
    handle_produce_wof();

    if (pgpe_wov_ocs_is_ocs_enabled() || pgpe_wov_ocs_is_wov_underv_enabled() || pgpe_wov_ocs_is_wov_overv_enabled())
    {
        handle_wov_ocs();

    }

    mtspr(SPRN_TSR, TSR_FIS);
}
