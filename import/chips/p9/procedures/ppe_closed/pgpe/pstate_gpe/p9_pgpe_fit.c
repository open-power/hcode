/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_fit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#include "p9_pgpe.h"
#include "p9_pgpe_pstate.h"
#include "p9_pgpe_gppb.h"
#include "p9_pgpe_header.h"
#include <p9_hcd_memmap_occ_sram.H>
#include "p9_pgpe_optrace.h"
#include "occhw_shared_data.h"

#define AUX_TASK 14
#define GPE2TSEL 0xC0020000
#define OCB_OCI_OCCHBR_OCC_HEARTBEAT_EN 16

uint32_t G_orig_throttle = 0; //original value of throttle SCOM before manipulation
uint32_t G_throttleOn;    //is throttling currently enabled
uint32_t G_throttleCount; //how long has throttle been in current state

uint32_t G_beacon_count_threshold;
uint32_t G_beacon_count;

uint32_t G_aux_task_count_threshold;
uint32_t G_aux_task_count;

uint32_t G_tb_sync_count_threshold;
uint32_t G_tb_sync_count;

uint32_t G_quad_hb_value;

uint32_t G_wov_count;

extern GlobalPstateParmBlock* G_gppb;
extern PgpeHeader_t* G_pgpe_header_data;
extern PgpePstateRecord G_pgpe_pstate_record;
extern TraceData_t G_pgpe_optrace_data;
extern uint32_t G_last_sync_op;

void (*p9_pgpe_auxiliary_task)() = (void*)OCC_SRAM_AUX_TASK_ADDR;


//
//  Local function declarations
//
void p9_pgpe_fit_handler(void* arg, PkIrqId irq);

//
//  p9_pgpe_fit_init
//
//  This is called during PGPE Boot to intialize FIT(Fixed Internal Timer) related
//  data.
//  For nest frequency of 2000Mhz, it is expected FIT interrupt will happen
//  every 262us
//
void p9_pgpe_fit_init()
{
    uint16_t freq = G_gppb->nest_frequency_mhz;
    uint16_t aux_period;

    PK_TRACE_DBG("Fit NestFreq=0x%dMhz", G_gppb->nest_frequency_mhz);

    //Set PGPE beacon count threshold. PGPE beacon should be incremented
    //every 2ms. This is monitored by OCC
    G_beacon_count_threshold = (freq < 1573) ? 6 :
                               (freq < 1835) ? 7 :
                               (freq < 2097) ? 8 :
                               (freq < 2359) ? 9 :
                               (freq < 2621) ? 10 : 11;
    PK_TRACE_DBG("Fit BeaconThr=0x%d", G_beacon_count_threshold);

    //Determine how often to call the auxillary function. It should be
    //attribute ATTR_AUX_FUNC_INVOCATION_TIME_MS * 1 ms
    G_aux_task_count_threshold = (freq < 1573) ? 3 :
                                 (freq < 2097) ? 4 :
                                 (freq < 2621) ? 5 : 6;

    aux_period = G_pgpe_header_data->g_pgpe_aux_controls >> 24;

    if(aux_period) //multiply by attribute if nonzero
    {
        //If auxilary task is enabled, then fills up the fields in OCC Complex Shared SRAM
        //NOte: PGPE ends up writing gpe3 area, but this is because in future aux task will
        //move to GPE3. So, to have continuity for aux task interface, we are writing
        //it through GPE2 for now.
        OSD_PTR->occ_comp_shr_data.gpe3_data.aux_region_start = OCC_SRAM_AUX_TASK_ADDR;
        OSD_PTR->occ_comp_shr_data.gpe3_data.aux_region_length =  PGPE_AUX_TASK_SIZE;
        G_aux_task_count_threshold *= aux_period;
    }

    PK_TRACE_DBG("Fit AuxTaskThr=0x%d", G_aux_task_count_threshold);
#if NIMBUS_DD_LEVEL != 10
    uint32_t tsel = ((in32(GPE2TSEL) >> 24) & 0xF);
#else
    uint32_t tsel = 0xA;
#endif

    //Determine how often to sync timebase
    G_tb_sync_count_threshold = ((0x2 << tsel) - 1);
    PK_TRACE_DBG("Fit TimebaseSyncThr=0x%d", G_tb_sync_count_threshold);

    //Determine PGPE heartbeat value to be written in each quad(monitored by CME)
    //This should be twice the interval between FIT interrupts in Quad HBR
    //ticks
    uint32_t sub = (((1 << (29 - tsel)) / G_gppb->nest_frequency_mhz) <<
                    4) * (G_beacon_count_threshold + 1);
    G_quad_hb_value = ((0x10000 - sub) << 16) | BIT32(OCB_OCI_OCCHBR_OCC_HEARTBEAT_EN);

    G_throttleOn = 0;
    G_throttleCount = 0;
    G_beacon_count = 0;
    G_tb_sync_count = 0;
    G_wov_count = 0;
    //Set FIT handler which is called on every FIT interrupt tick
    ppe42_fit_setup(p9_pgpe_fit_handler, NULL);
}


//
//  handle_core_throttle
//
// This function throttle/unthrottle the cores as determine by the OCC Scratch Register2 fields
//
//
__attribute__((always_inline)) inline void handle_core_throttle()
{
    uint32_t config = in32(G_OCB_OCCS2); //bits 16-18 in OCC Scratch Register 2
    uint32_t run = (config >> 14) & 0x3; //this looks at the inject and enable bits, if either are high we run

    if (!(in32(G_OCB_OCCFLG) & BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE)))
    {
        if(run) //Currently running
        {
            uint32_t throttleData = G_orig_throttle;
            uint32_t inject = run & 0x1; //Inject is bit 17, if this is high we run one throttle burst then turn off
            uint32_t type = (config >> 13) & 0x1; //type is bit 18, this determines which kind of throttling we do
            uint32_t mask = type ? CORE_SLOWDOWN : CORE_IFU_THROTTLE;
            uint32_t pgpe_throttle_assert   = G_pgpe_header_data->g_pgpe_core_throttle_assert_cnt;
            uint32_t pgpe_throttle_deassert = G_pgpe_header_data->g_pgpe_core_throttle_deassert_cnt;

            //if currently off, we don't desire always off, this is the first evaluation since become enabled, we are in always on,
            //or we (re enabled and have reached the count, then we turn throttling on (if both assert and deassert are 0 this statement fails)
            if(!G_throttleOn && pgpe_throttle_assert != 0 &&
               (G_throttleCount == 0 || pgpe_throttle_deassert == 0 || pgpe_throttle_deassert == G_throttleCount))
            {
                G_throttleOn = 1;
                G_throttleCount = 0;
                throttleData |= mask; //data for start throttle

            }
            //if currently on and we desire always off or we don't desire always on and have reached the count,
            //then we turn it off (if both assert and deassert are 0 this statement true)
            else if(G_throttleOn &&
                    (pgpe_throttle_assert == 0 || ( pgpe_throttle_deassert != 0 && pgpe_throttle_assert == G_throttleCount)))
            {
                G_throttleOn = 0;
                G_throttleCount = 0;
                throttleData &= ~mask; //data for stop throttle

                if(inject == 1)
                {
                    out32(G_OCB_OCCS2, (config & 0xFFFFBFFF)); //write out to indicate inject has finished
                }
            }

            if(G_throttleCount == 0)
            {
                p9_pgpe_pstate_write_core_throttle(throttleData, NO_RETRY);
            }

            G_throttleCount++; //count always incremented, it is impossible to reach a count of 0 while enabled
        }
        else if(G_throttleCount != 0)
        {
            G_throttleCount = 0;
            G_throttleOn = 0;
            p9_pgpe_pstate_write_core_throttle(G_orig_throttle, NO_RETRY);
        }
    }
}
//Quads must get HB value
__attribute__((always_inline)) inline void handle_quad_hb_update()
{
    uint32_t q;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(G_OCB_QCSR);

    for (q = 0; q < MAX_QUADS; q++)
    {
        //Update for configured quads
        if (qcsr.fields.ex_config & (0xC00 >> (q << 1)))
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_OCCHB, q), (uint64_t) G_quad_hb_value << 32);
        }
    }
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
        //Update OCC heart beat register
        handle_quad_hb_update();

        if (G_pgpe_pstate_record.updatePGPEBeacon == 1)
        {
            //write to SRAM
            *((uint32_t*)(G_pgpe_header_data->g_pgpe_beacon_addr)) = *((uint32_t*)(G_pgpe_header_data->g_pgpe_beacon_addr)) + 1;
            G_beacon_count = 0;
        }
    }
    else
    {
        G_beacon_count++;
    }
}

//
//  handle_occflg_requests
//
//  This function samples OCCFLG[0/Pstate Stop,2/Safe mode Request,3/PM Complex Suspend] and
//  updates PstateStatus accordingly
//
__attribute__((always_inline)) inline void handle_occflg_requests()
{
    ocb_occflg_t occFlag;
    //Read OCC_FLAGS
    occFlag.value = in32(G_OCB_OCCFLG);

    if(in32(G_OCB_OCCFLG2) & BIT32(OCCFLG2_PGPE_HCODE_FIT_ERR_INJ))
    {
        // Clear the injection so things are not permenently stuck
        out32(G_OCB_OCCFLG2_CLR, BIT32(OCCFLG2_PGPE_HCODE_FIT_ERR_INJ));
        PK_TRACE_ERR("FIT_IPC_ERROR_INJECT TRAP");
        PK_PANIC(PGPE_SET_PMCR_TRAP_INJECT);
    }

    if (G_pgpe_pstate_record.pstatesStatus & (PSTATE_INIT | PSTATE_ACTIVE | PSTATE_SAFE_MODE | PSTATE_STOPPED))
    {
        if(occFlag.value & BIT32(PM_COMPLEX_SUSPEND))
        {
            //If pstatesStatus != ACTIVE, then just need to notify SGPE, so
            //set status to PSTATE_PM_SUSPEND_PENDING and post to actuate thread
            //Otherwise, we need to first actuate to Psafe, so set PSTATE_SAFE_MODE_PENDING
            if (G_pgpe_pstate_record.pstatesStatus != PSTATE_ACTIVE)
            {
                G_pgpe_pstate_record.pstatesStatus = PSTATE_PM_SUSPEND_PENDING;
                pk_semaphore_post(&G_pgpe_pstate_record.sem_actuate);
            }
            else
            {
                G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE_PENDING;
            }
        }
        else if(G_pgpe_pstate_record.pstatesStatus != PSTATE_SAFE_MODE)
        {
            //If not in SAFE Mode and Safe Mode requested
            if(occFlag.value & BIT32(PGPE_SAFE_MODE))
            {
                //If safe mode is requested while pstatesStatus != PSTATE_ACTIVE , then
                //set error bit
                if(G_pgpe_pstate_record.pstatesStatus != PSTATE_ACTIVE)
                {
                    uint32_t occScr2 = in32(G_OCB_OCCS2);
                    occScr2 |= BIT32(PGPE_SAFE_MODE_ERROR);
                    out32(G_OCB_OCCS2, occScr2);
                }
                //Otherwise, process safe mode request
                else
                {
                    G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE_PENDING;
                }
            }
            //Only STOP, if STOP is requested, and pstatesStatus == PSTATES_ACTIVE
            else if((occFlag.value & BIT32(PGPE_PSTATE_PROTOCOL_STOP))
                    && (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE))
            {
                G_pgpe_pstate_record.pstatesStatus = PSTATE_STOP_PENDING;
            }
        }
    }
}

//
//  handle_aux_task
//
//  This function calls auxilliary task if enabled at period determined
//  by G_aux_task_count_threshold
//
//  PGPE characterization thread is called based on OCB_OCCFLG[AUX_THREAD_ACTIVATE] .
//  We set the FIT interrupt period smaller than that, and
//  call characterization method only when we have seen "G_aux_task_count_threshold"
//  number of FIT interrupts
__attribute__((always_inline)) inline void handle_aux_task()
{
    if(in32(G_OCB_OCCFLG) & BIT32(AUX_THREAD_ACTIVATE))
    {
        out32(G_OCB_OCCFLG_OR, BIT32(AUX_THREAD_ACTIVE));

        if(G_aux_task_count == G_aux_task_count_threshold)
        {
            (*p9_pgpe_auxiliary_task)();
            G_aux_task_count = 0;
        }
        else
        {
            G_aux_task_count++;
        }
    }
    else
    {
        out32(G_OCB_OCCFLG_CLR, BIT32(AUX_THREAD_ACTIVE));
    }
}


//
//  handle_fit_timebase_sync
//
//  This function syncs up timebase for pgpe op trace
//
//  FIT Timebase Sync is called every time bottom 3B of OTBR
//  roll over so it's clear in tracing how much time has passed
__attribute__((always_inline)) inline void handle_fit_timebase_sync()
{
    if (G_tb_sync_count == G_tb_sync_count_threshold)
    {
        if(G_last_sync_op)
        {
            if(G_last_sync_op == 0xFFFFFF)
            {
                G_pgpe_optrace_data.word[0] = G_last_sync_op;
                G_last_sync_op = 0;
                p9_pgpe_optrace(FIT_TB_RESYNC);
            }
            else
            {
                G_last_sync_op++;
            }
        }
        else
        {
            G_pgpe_optrace_data.word[0] = *((uint32_t*)(G_pgpe_header_data->g_pgpe_beacon_addr));
            p9_pgpe_optrace(FIT_TB_SYNC);
            G_last_sync_op = 1;
        }

        G_tb_sync_count  = 0;
    }
    else
    {
        G_tb_sync_count++;
    }
}
extern uint32_t G_pib_reset_flag;

//
// handle_undervolt
//
__attribute__((always_inline)) inline void handle_wov()
{
    if (G_pgpe_pstate_record.wov.status & WOV_UNDERVOLT_ENABLED)
    {
        G_wov_count++;

        if ((G_gppb->wov_sample_125us / 2)  == G_wov_count)
        {
            p9_pgpe_pstate_adjust_wov();
            G_wov_count = 0;
        }
    }
}

//  p9_pgpe_fit_handler
//
//  This is a periodic FIT Handler which is called up at fixed period
//  as determined by GPE_TIMER_SELECT register
//
void p9_pgpe_fit_handler(void* arg, PkIrqId irq)
{

    mtmsr(PPE42_MSR_INITIAL);
    PK_TRACE_DBG("IPB reset flag value %x", G_pib_reset_flag);
    G_pib_reset_flag = 0;
    handle_occ_beacon();
    handle_core_throttle();
    handle_occflg_requests();
    handle_aux_task();
    handle_fit_timebase_sync();
    handle_wov();
}
