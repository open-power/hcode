/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_fit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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

#define THROTTLE_SCOM_MULTICAST_READ_OR   0x41010A9E
#define THROTTLE_SCOM_MULTICAST_READ_AND  0x49010A9E
#define THROTTLE_SCOM_MULTICAST_WRITE     0x69010A9E

#define WORKAROUND_SCOM_MULTICAST_WRITE   0x69010800

#define AUX_TASK 14
#define GPE2TSEL 0xC0020000

// Include core offline, address error, and timeout.   The timeout is included to avoid
// an extra mtmsr in the event we need to cleanup from SW407201
#define MSR_THROTTLE_MASK  0x29000000


uint32_t G_orig_throttle; //original value of throttle SCOM before manipulation
uint32_t G_throttleOn;    //is throttling currently enabled
uint32_t G_throttleCount; //how long has throttle been in current state

uint32_t G_beacon_count_threshold;
uint32_t G_beacon_count;

uint32_t G_aux_task_count_threshold;
uint32_t G_aux_task_count;

uint32_t G_tb_sync_count_threshold;
uint32_t G_tb_sync_count;

extern GlobalPstateParmBlock* G_gppb;
extern PgpeHeader_t* G_pgpe_header_data;
extern PgpePstateRecord G_pgpe_pstate_record;
extern TraceData_t G_pgpe_optrace_data;
extern uint32_t G_last_sync_op;

void (*p9_pgpe_auxiliary_task)() = (void*)OCC_SRAM_AUX_TASK_ADDR;

//
//Local function declarations
//
void p9_pgpe_fit_handler(void* arg, PkIrqId irq);

//
//p9_pgpe_fit_init
//
//We set fit_count_threshold based on nest frequency
//and also enable and setup the fit handler
void p9_pgpe_fit_init()
{
    uint16_t freq = G_gppb->nest_frequency_mhz;

    PK_TRACE_DBG("Fit NestFreq=0x%dMhz", G_gppb->nest_frequency_mhz);

    //Set fit count threshold
    G_beacon_count_threshold = (freq < 1573) ? 6 :
                               (freq < 1835) ? 7 :
                               (freq < 2097) ? 8 :
                               (freq < 2359) ? 9 :
                               (freq < 2621) ? 10 : 11;
    PK_TRACE_DBG("Fit BeaconThr=0x%d", G_beacon_count_threshold);
    //ATTR_AUX_FUNC_INVOCATION_TIME_MS * 1 ms
    G_aux_task_count_threshold = (freq < 1573) ? 3 :
                                 (freq < 2097) ? 4 :
                                 (freq < 2621) ? 5 : 6;

    if(G_pgpe_header_data->g_pgpe_aux_controls) //multiply by attribute if nonzero
    {
        G_aux_task_count_threshold *= G_pgpe_header_data->g_pgpe_aux_controls;
    }

    PK_TRACE_DBG("Fit AuxTaskThr=0x%d", G_aux_task_count_threshold);
#if NIMBUS_DD_LEVEL != 10
    uint32_t tsel = ((in32(GPE2TSEL) >> 24) & 0xF);
#else
    uint32_t tsel = 0xA;
#endif
    G_tb_sync_count_threshold = ((0x2 << tsel) - 1);
    PK_TRACE_DBG("Fit TimebaseSyncThr=0x%d", G_tb_sync_count_threshold);
    G_throttleOn = 0;
    G_throttleCount = 0;
    G_beacon_count = 0;
    G_tb_sync_count = 0;
    ppe42_fit_setup(p9_pgpe_fit_handler, NULL);
}

__attribute__((always_inline)) inline void cleanup_SW407201()
{
    do
    {
        if (((mfmsr() >> 20) & 0x7) == 0x4)
        {
            // Work-around for HW problem. See SW407201
            // If ADDRESS_ERROR then perform a SCOM write of all zeros to
            // 2n010800 where n is the core number. Ignore ADDRESS_ERROR
            // returned.
            out64(WORKAROUND_SCOM_MULTICAST_WRITE, 0);
        }
    }
    while (0);
}

__attribute__((always_inline)) inline void handle_core_throttle()
{
    do
    {
        uint32_t config = in32(OCB_OCCS2); //bits 16-18 in OCC Scratch Register 2
        uint32_t run = (config >> 14) & 0x3; //this looks at the inject and enable bits, if either are high we run

        if(run) //Currently running
        {
            uint32_t value = mfmsr();

            if(G_throttleCount == 0) //when throttle control enabled, read current state of throttle SCOM before manipulation
            {
                mtmsr(value | MSR_THROTTLE_MASK); //don't cause halt if all cores offline or address error (PC Timeout)
                G_orig_throttle = in64(THROTTLE_SCOM_MULTICAST_READ_AND) >> 32;

                // Fail the throttle on any return code.
                uint32_t fail = ((mfmsr() >> 20) & 0x7);

                cleanup_SW407201();

                mtmsr(value);

                if(fail)
                {
                    break;
                }
            }

            uint32_t throttleData = G_orig_throttle;
            uint32_t inject = run & 0x1; //Inject is bit 17, if this is high we run one throttle burst then turn off
            uint32_t type = (config >> 13) & 0x1; //type is bit 18, this determines which kind of throttling we do
            uint32_t mask = type ? 0x10000000 : 0x80000000;
            uint32_t pgpe_throttle_assert   = G_pgpe_header_data->g_pgpe_throttle_assert;
            uint32_t pgpe_throttle_deassert = G_pgpe_header_data->g_pgpe_throttle_deassert;

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
                    out32(OCB_OCCS2, (config & 0xFFFFBFFF)); //write out to indicate inject has finished
                }
            }

            if(G_throttleCount == 0)
            {
                mtmsr(value | MSR_THROTTLE_MASK); //don't cause halt if all cores offline or address error (PC Timeout)
                out64(THROTTLE_SCOM_MULTICAST_WRITE, ((uint64_t) throttleData << 32)); //apply new throttle SCOM setting
                cleanup_SW407201();
                mtmsr(value);
            }

            G_throttleCount++; //count always incremented, it is impossible to reach a count of 0 while enabled
        }
        else if(G_throttleCount != 0)
        {
            G_throttleCount = 0;
            uint32_t value = mfmsr();
            mtmsr(value | MSR_THROTTLE_MASK); //don't cause halt if all cores offline or address error (PC Timeout)
            G_throttleOn = 0;
            out64(THROTTLE_SCOM_MULTICAST_WRITE, ((uint64_t) G_orig_throttle << 32)); //restore throttle scom to original state
            cleanup_SW407201();
            mtmsr(value);
        }
    }
    while(0);
}

//PGPE beacon needs to be written every 2ms. However, we
//set the FIT interrupt period smaller than that, and
//update PGPE beacon only when we have seen "G_beacon_count_threshold"
//number of FIT interrupts
__attribute__((always_inline)) inline void handle_occ_beacon()
{
    if (G_beacon_count == G_beacon_count_threshold)
    {
        //write to SRAM
        *(G_pgpe_header_data->g_pgpe_beacon_addr) = *(G_pgpe_header_data->g_pgpe_beacon_addr) + 1;
        G_beacon_count = 0;

        ocb_occflg_t occFlag;
        //Read OCC_FLAGS
        occFlag.value = 0;
        occFlag.value = in32(OCB_OCCFLG);

        if((G_pgpe_pstate_record.pstatesStatus != PSTATE_PM_SUSPENDED)
           && (G_pgpe_pstate_record.pstatesStatus != PSTATE_PM_SUSPEND_PENDING))
        {
            if(occFlag.value & BIT32(PM_COMPLEX_SUSPEND))
            {
                p9_pgpe_pstate_safe_mode();
            }
            else if(G_pgpe_pstate_record.pstatesStatus != PSTATE_SAFE_MODE)
            {
                if(occFlag.value & BIT32(PGPE_SAFE_MODE))
                {
                    p9_pgpe_pstate_safe_mode();
                }
                else if((occFlag.value & BIT32(PGPE_START_NOT_STOP))
                        && (G_pgpe_pstate_record.pstatesStatus != PSTATE_STOPPED))
                {
                    p9_pgpe_pstate_stop();
                    G_pgpe_optrace_data.word[0] = (START_STOP_FLAG << 24) | (G_pgpe_pstate_record.globalPSComputed << 16) | (in32(
                                                      OCB_QCSR) >> 16);
                    p9_pgpe_optrace(PRC_START_STOP);

                }
            }
        }
    }
    else
    {
        G_beacon_count++;
    }
}

//PGPE characterization thread is called based on . However, we
//set the FIT interrupt period smaller than that, and
//call characterization method only when we have seen "G_characterization_count_threshold"
//number of FIT interrupts
__attribute__((always_inline)) inline void handle_aux_task()
{
    if(in32(OCB_OCCFLG) & BIT32(SGPE_24_7_ACTIVATE))
    {
        out32(OCB_OCCFLG_OR, BIT32(SGPE_24_7_ACTIVE));

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
        out32(OCB_OCCFLG_CLR, BIT32(SGPE_24_7_ACTIVE));
    }
}

//FIT Timebase Sync is called every time bottom 3B of OTBR
//roll over so it's clear in tracing how much time has passed
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
            G_pgpe_optrace_data.word[0] = *(G_pgpe_header_data->g_pgpe_beacon_addr);
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

//p9_pgpe_fit_handler
//
//This is a periodic FIT Handler whose period is determined
//by GPE_TIMER_SELECT register
void p9_pgpe_fit_handler(void* arg, PkIrqId irq)
{
    mtmsr(PPE42_MSR_INITIAL);
    handle_occ_beacon();
    handle_core_throttle();
    handle_aux_task();
    handle_fit_timebase_sync();
}
