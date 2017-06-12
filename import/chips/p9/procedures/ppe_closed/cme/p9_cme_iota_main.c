/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme_iota_main.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017                                                         */
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
#include "iota_trace.h"

#include "cmehw_common.h"
#include "cme_register_addresses.h"

// CME Pstate Header and Structure
#include "p9_cme.h"
CmeRecord G_cme_record ;

// CME Pstate Header and Structure
#include "p9_cme_pstate.h"
CmePstateRecord G_cme_pstate_record;

// CME Stop Header and Structure
#include "p9_cme_stop.h"
CmeStopRecord G_cme_stop_record __attribute__((section (".dump_ptrs"))) = {{0}, {0}, 0, 0, 0, 0, 0, 0, 0, {0}};

void fit_handler()
{
    // Default is to do nothing
}

void dec_handler()
{
    // Currently not available
}

void ext_handler(uint32_t task_idx)
{
}

// List of low priority tasks that run when the cme engine would
// otheriwse be idle.
IOTA_BEGIN_IDLE_TASK_TABLE
{ IOTA_IDLE_DISABLED, IOTA_NO_TASK },
IOTA_END_IDLE_TASK_TABLE

IOTA_BEGIN_TASK_TABLE
IOTA_TASK(ext_handler), // bits 0-6   default
          IOTA_TASK(ext_handler), // bits 10,11 default
          IOTA_TASK(p9_cme_stop_db2_handler), // bits 18,19 p9_cme_stop_db2_handler
          IOTA_TASK(p9_cme_stop_spwu_handler), // bits 14,15 p9_cme_stop_spwu_handler
          IOTA_TASK(p9_cme_stop_rgwu_handler), // bits 16,17 p9_cme_stop_rgwu_handler
          IOTA_TASK(p9_cme_stop_pcwu_handler), // bits 12,13 p9_cme_stop_pcwu_handler
          IOTA_TASK(p9_cme_stop_enter_handler), // bits 20,21 p9_cme_stop_enter_handler
          IOTA_TASK(p9_cme_stop_db1_handler), // bits 40,41 p9_cme_stop_db1_handler
          IOTA_TASK(p9_cme_pstate_db_handler), // bits 36,37 p9_cme_pstate_db_handler
          IOTA_TASK(p9_cme_pstate_intercme_in0_handler), // bit  7     p9_cme_pstate_intercme_in0_handler
          IOTA_TASK(p9_cme_pstate_pmcr_handler), // bits 34,35 p9_cme_pstate_pmcr_handler
          IOTA_TASK(p9_cme_pstate_intercme_msg_handler), // bit  29    p9_cme_pstate_intercme_msg_handler
          IOTA_NO_TASK  // Should never see these
          IOTA_END_TASK_TABLE;

int main()
{
    IOTA_DEC_HANDLER(dec_handler);
    IOTA_FIT_HANDLER(fit_handler);

    PK_TRACE("E>CME MAIN");

#if defined(USE_CME_QUEUED_SCOM) || defined(USE_CME_QUEUED_SCAN)
    out32(CME_LCL_LMCR_OR, BITS32(8, 2));
#endif

    //Read which cores are good
    G_cme_record.core_enabled = in32(CME_LCL_FLAGS) &
                                (BIT32(CME_FLAGS_CORE0_GOOD) | BIT32(CME_FLAGS_CORE1_GOOD));

    p9_cme_stop_init();

    // In IOTA, these have become initialization routines, not threads
    p9_cme_stop_exit_thread(NULL);
    p9_cme_stop_enter_thread(NULL);
    p9_cme_pstate_db_thread(NULL);
    p9_cme_pstate_pmcr_thread(NULL);

    iota_run();

    return 0;
}
