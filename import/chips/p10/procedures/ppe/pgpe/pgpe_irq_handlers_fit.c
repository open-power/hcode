/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_irq_handlers_fit.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
    uint16_t freq = pgpe_gppb_get(occ_complex_frequency_mhz);

    PK_TRACE("FIT: OCCCmpFreq=0x%dMhz", pgpe_gppb_get(occ_complex_frequency_mhz));

    //Set PGPE beacon count threshold. PGPE beacon should be incremented
    //every 2ms. This is monitored by OCC
    //\\todo Need to check with Michael and Greg, it this is still
    //correct way to do this in P19
    G_beacon_count_threshold = (freq < 1573) ? 6 :
                               (freq < 1835) ? 7 :
                               (freq < 2097) ? 8 :
                               (freq < 2359) ? 9 :
                               (freq < 2621) ? 10 : 11;
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

__attribute__((always_inline)) inline void handle_ocs()
{
    pgpe_occ_produce_wof_i_v_values();
}

//  p9_pgpe_fit_handler
//
//  This is a periodic FIT Handler which is called up at fixed period
//  as determined by GPE_TIMER_SELECT register
//
void pgpe_irq_fit_handler()
{
    handle_occ_beacon();
    handle_ocs();
    mtspr(SPRN_TSR, TSR_FIS);
}
