/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_pstate.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#include "p9_pgpe.h"
#include "pstate_pgpe_cme_api.h"
#include "p9_pstates_common.h"
#include "p9_pgpe_gppb.h"
#include "p9_pgpe_boot_temp.h"
#include "avs_driver.h"
#include "p9_dd1_doorbell_wr.h"
#include "p9_pgpe_pstate.h"
#include "pstate_pgpe_occ_api.h"
//#include "pstate_pgpe_sgpe_api.h"
#include "ipc_messages.h"
#include "p9_pgpe_header.h"

//
//Global External Data
//
extern pgpe_header_data_t* G_pgpe_header_data;

//
//Global Data
//
uint8_t G_safeModeEnabled;              //safe mode enabled/disabled
uint8_t G_pstatesEnabled;               //pstates_enabled/disable
uint8_t G_pmcrOwner;
uint8_t G_wofEnabled;                   //wof enable/disable
uint8_t G_wofPending;                   //wof enable pending
uint8_t G_psClipMax[MAX_QUADS],
        G_psClipMin[MAX_QUADS];         //pmin and pmax clips
uint8_t G_wofClip;                      //wof clip
uint8_t G_coresPSRequest[MAX_CORES];    //per core requested pstate
uint8_t G_quadPSComputed[MAX_QUADS];    //computed Pstate per quad
uint8_t G_globalPSComputed;             //computed global Pstate
uint8_t G_quadPSTarget[MAX_QUADS];      //target Pstate per quad
uint8_t G_globalPSTarget;               //target global Pstate
uint8_t G_quadPSCurr[MAX_QUADS];      //target Pstate per quad
uint8_t G_globalPSCurr;               //target global Pstate
uint8_t G_quadPSNext[MAX_QUADS];      //target Pstate per quad
uint8_t G_globalPSNext;
uint32_t G_eVidCurr, G_eVidNext;
VFRT_Hcode_t* G_vfrt_ptr;
quad_state0_t* G_quadState0;
quad_state1_t* G_quadState1;

#define GPE_BUFFER(declaration) \
    declaration __attribute__ ((__aligned__(8))) __attribute__ ((section (".noncacheable")))

GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_pgpe_sgpe);
GPE_BUFFER(ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);


//
//Data passing between IPC interrupt and threads
//
ipc_req_t G_ipc_pend_tbl[MAX_IPC_PEND_TBL_ENTRIES];
uint32_t G_already_sem_posted;

extern VpdOperatingPoint G_operating_points[NUM_VPD_PTS_SET][VPD_PV_POINTS];

//
//p9_pgpe_pstate_init
//
void p9_pgpe_pstate_init()
{
    uint32_t q;

    G_safeModeEnabled = 0;
    G_pstatesEnabled = 0;
    G_wofEnabled = 0;
    G_wofPending = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_psClipMax[q] = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_psClipMin[q] = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSComputed[q] = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSComputed = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSTarget[q] = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSTarget = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSCurr[q] = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSCurr  = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSNext[q] = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSNext  = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
    }

    G_quadState0 = (quad_state0_t*)G_pgpe_header_data->actual_quad_status_addr;
    G_quadState1 = (quad_state1_t*)(G_pgpe_header_data->actual_quad_status_addr + 2);
}

//
//p9_pgpe_pstate_update_
//
void p9_pgpe_pstate_update(uint8_t* s)
{
    uint32_t q, c;

    for (q = 0; q < MAX_QUADS; q++)
    {
        for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
        {
            G_coresPSRequest[c] = s[q];
        }

        G_quadPSCurr[q] = s[q];
        G_quadPSNext[q] = s[q];
    }

    p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
    p9_pgpe_pstate_apply_clips(NULL);
}

//
//p9_pgpe_pstate_do_auction
//
void p9_pgpe_pstate_do_auction(uint8_t quadAuctionRequest)
{
    PK_TRACE_DBG("AUCT: Enter\n");
    //Get active cores and quads
    uint32_t q, c;
    uint32_t activeCores = G_quadState0->fields.core_poweron_state ;
    activeCores = (activeCores << 16) | (G_quadState1->fields.core_poweron_state);
    uint32_t activeQuads = G_quadState1->fields.requested_active_quad;

    //Local PStates Auction
    for (q = 0; q < MAX_QUADS; q++)
    {
        //Make sure quad is active
        if ((activeQuads & (QUAD0_BIT_MASK >> q)) &
            (quadAuctionRequest & (QUAD0_BIT_MASK >> q)))
        {
            //Go through all the cores in this quad with pending request
            //and find the lowest numbered PState
            G_quadPSComputed[q] = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

            for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
            {
                if (activeCores & (0x80000000 >> c))
                {
                    if (G_quadPSComputed[q] > G_coresPSRequest[c])
                    {
                        G_quadPSComputed[q] = G_coresPSRequest[c];
                    }
                }
            }
        }
        else
        {
            G_quadPSComputed[q] = 0xFF;
        }

        //   PK_TRACE_DBG("AUCTION: G_quadPSComputed: 0x%x\n", G_quadPSComputed[q]);
    }

    //Global PState Auction
    G_globalPSComputed = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {
            if (G_globalPSComputed  > G_quadPSComputed[q])
            {
                G_globalPSComputed  = G_quadPSComputed[q];
            }
        }
    }

    PK_TRACE_DBG("AUCT glbPSCmpted: 0x%x\n", G_globalPSComputed);
    PK_TRACE_DBG("AUCT: Exit\n");
}

//
//p9_pgpe_pstate_apply_clips
//
void p9_pgpe_pstate_apply_clips()
{
    PK_TRACE_DBG("APCLP: Enter\n");
    uint32_t q;
    uint32_t activeQuads = G_quadState1->fields.requested_active_quad;

    //Apply clips to quad computed
    PK_TRACE_DBG("APCLP: 0x%x\n", activeQuads);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {
            uint8_t maxPS = G_psClipMax[q];

            if (G_wofEnabled == 1)
            {
                if (G_wofClip <= G_psClipMax[q])
                {
                    maxPS = G_wofClip;
                }
            }

            if (G_quadPSComputed[q] > maxPS)
            {
                G_quadPSTarget[q] = maxPS;
            }
            else if(G_quadPSComputed[q] < G_psClipMin[q])
            {
                G_quadPSTarget[q] = G_psClipMin[q];
            }
            else
            {
                G_quadPSTarget[q] = G_quadPSComputed[q];
            }
        }
        else
        {
            G_quadPSTarget[q] = 0xFF;
        }

        //    PK_TRACE_DBG("APP_CLIP: G_quadPSTarget: 0x%x\n", G_quadPSTarget[q]);
    }

    //Global PState Auction
    G_globalPSTarget = G_operating_points[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {
            if (G_globalPSTarget  > G_quadPSTarget[q])
            {
                G_globalPSTarget  = G_quadPSTarget[q];
            }
        }
    }

    PK_TRACE_DBG("APCLP: glbPSTgt: 0x%x\n", G_globalPSTarget);
    PK_TRACE_DBG("APCLP: Exit\n");
}

//
//p9_pgpe_pstate_calc_wof
//
void p9_pgpe_pstate_calc_wof()
{
    //\TODO RTC 162896
    //Figure out how to calculate WOF Clip
    G_wofClip = 150;

    p9_pgpe_pstate_apply_clips();
}

void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg)
{
    pk_semaphore_post((PkSemaphore*)arg);
}
