/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_intercme.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
#include "pk.h"
#include "ppe42_scom.h"
#include "ppm_register_addresses.h"
#include "cppm_register_addresses.h"
#include "cppm_firmware_registers.h"
#include "cme_register_addresses.h"
#include "cmehw_common.h"
#include "ppehw_common.h"

#include "p9_cme_irq.h"
#include "p9_cme_pstate.h"
#include "pstate_pgpe_cme_api.h"
#include "ppe42_cache.h"
#include "p9_cme_pstate.h"
#include "cme_panic_codes.h"

//
//Globals
//
extern CmePstateRecord G_cme_pstate_record;
extern CmeRecord G_cme_record;
extern uint32_t g_comm_recv_pending_fit_tick_count;
extern uint32_t g_intercme_in0_pending_tick_count;

//
//InterCME_IN0 handler
//
void p9_cme_pstate_intercme_in0_irq_handler(void)
{
    g_intercme_in0_pending_tick_count = 0;
    p9_cme_pstate_process_db0_sibling();
}

void p9_cme_pstate_intercme_msg_handler(void)
{
    g_comm_recv_pending_fit_tick_count = 0;
    p9_cme_pstate_sibling_lock_and_intercme_protocol(INTERCME_MSG_LOCK_WAIT_ON_RECV);
}

void p9_cme_pstate_sibling_lock_and_intercme_protocol(INTERCME_MSG_LOCK_ACTION intercme_msg_lock_action)
{
    PK_TRACE_INF("SIBL: Enter");
    uint32_t msg;

    if (intercme_msg_lock_action == INTERCME_MSG_LOCK_WAIT_ON_RECV)
    {
        intercme_msg_recv(&msg, IMT_LOCK_SIBLING);
    }

    // Block on the intercme0/intercme1/intercme2 interrupt
    while((!(in32(G_CME_LCL_EISR) & BIT32(7))) &&
          (!(in32_sh(CME_LCL_EISR) & BIT64SH(38)))) {}

    //If INTERCME_DIRECT_IN1, then error.
    if(in32_sh(CME_LCL_EISR) & BIT64SH(38))
    {
        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_PSTATES_SUSPENDED));
        p9_cme_pstate_pmsr_updt();
        intercme_direct(INTERCME_DIRECT_IN1, INTERCME_DIRECT_ACK, 0);
    }

    //If INTERCME_DIRECT_IN0, then process DB0 data
    if(in32(G_CME_LCL_EISR) & BIT32(7))
    {
        p9_cme_pstate_process_db0_sibling();
    }

    PK_TRACE_INF("SIBL: Exit");
}

void p9_cme_pstate_process_db0_sibling()
{
    cppm_cmedb0_t dbData;
    uint32_t dbQuadInfo, dbBit8_15;

    //Read DB0 from first good core since PGPE
    //writes same value for both cores
    CME_GETSCOM(CPPM_CMEDB0, G_cme_pstate_record.firstGoodCoreMask, dbData.value);

    PK_TRACE_INF("INTER0: Enter");

    dbQuadInfo = (dbData.value >> (in32(G_CME_LCL_SRTCH0) &
                                   (BITS32(CME_SCRATCH_LOCAL_PSTATE_IDX_START, CME_SCRATCH_LOCAL_PSTATE_IDX_LENGTH)
                                   ))) & 0xFF;
    dbBit8_15 = (dbData.value & BITS64(8, 8)) >> SHIFT64(15);

    if(dbData.fields.cme_message_number0 == MSGID_DB0_START_PSTATE_BROADCAST)
    {
        //PK_TRACE_INF("INTER0: DB0 Start");

        G_cme_pstate_record.quadPstate = dbQuadInfo;
        G_cme_pstate_record.globalPstate = dbBit8_15;

        p9_cme_pstate_pmsr_updt();

        //Enable PMCR updates for good cores
        g_eimr_override &= ~(uint64_t)(G_cme_record.core_enabled << SHIFT64(35));

        //Unmask EIMR[OCC_HEARTBEAT_LOST/4]
        g_eimr_override &= ~BIT64(4);

        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_DB0_COMM_RECV_STARVATION_CNT_ENABLED));//Set Starvation Count enabled

        //Clear Core GPMMR RESET_STATE_INDICATOR bit to show pstates have started
        CME_PUTSCOM(PPM_GPMMR_CLR, G_cme_record.core_enabled, BIT64(15));
    }
    else if((dbData.fields.cme_message_number0 == MSGID_DB0_GLOBAL_ACTUAL_BROADCAST) ||
            (dbData.fields.cme_message_number0 == MSGID_DB0_DB3_PAYLOAD))
    {
        //PK_TRACE_INF("INTER0: DB0 GlbBcast");
        G_cme_pstate_record.quadPstate = dbQuadInfo;
        G_cme_pstate_record.globalPstate = dbBit8_15;
        p9_cme_pstate_pmsr_updt();
    }
    else if(dbData.fields.cme_message_number0 == MSGID_DB0_CLIP_BROADCAST)
    {
        //PK_TRACE_INF("INTER0: DB0 Clip");

        if (dbBit8_15 == DB0_CLIP_BCAST_TYPE_PMIN)
        {
            G_cme_pstate_record.pmin = dbQuadInfo;
        }
        else
        {
            G_cme_pstate_record.pmax = dbQuadInfo;
        }

        p9_cme_pstate_pmsr_updt();
    }
    else if(dbData.fields.cme_message_number0 == MSGID_DB0_STOP_PSTATE_BROADCAST)
    {
        //PK_TRACE_INF("INTER0: DB0 Stop");
        out32_sh(CME_LCL_EIMR_OR, (BITS64SH(34, 2)));//Disable PMCR0/1
        g_eimr_override |= BITS64(34, 2);

        g_eimr_override |= BIT64(4);

        //PGPE will update the LMCR[0] before sending the STOP PSTATE Doorbell.
        //Here we update the PMSR to indicate that Pstates are no longer honored accordingly.
        p9_cme_pstate_pmsr_updt();

        //Set Core GPMMR RESET_STATE_INDICATOR bit to show pstates have stopped
        CME_PUTSCOM(PPM_GPMMR_OR, G_cme_record.core_enabled, BIT64(15));
    }
    else if(dbData.fields.cme_message_number0 == MSGID_DB0_PMSR_UPDT)
    {
        //PK_TRACE_INF("INTER0: DB0 PMSR Updt");

        switch(dbBit8_15)
        {
            case DB0_PMSR_UPDT_SET_PSTATES_SUSPENDED:
                out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_PSTATES_SUSPENDED));
                break;

            case DB0_PMSR_UPDT_CLEAR_PSTATES_SUSPENDED:
                out32(G_CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_PSTATES_SUSPENDED));
                break;
        }

        p9_cme_pstate_pmsr_updt();
    }
    else
    {
        PK_PANIC(CME_PSTATE_INVALID_DB0_MSGID);
    }

    out32_sh(CME_LCL_EISR_CLR, BITS64SH(36, 2)); //Clear DB0_C0/C1

    intercme_direct(INTERCME_DIRECT_IN0, INTERCME_DIRECT_ACK, 0);

    PK_TRACE_INF("INTER0: Exit");
}
