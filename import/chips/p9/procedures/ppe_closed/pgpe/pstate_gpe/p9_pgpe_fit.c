/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_fit.c $ */
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
#include "pk.h"
#include "p9_pgpe_gppb.h"
#include "p9_pgpe_header.h"

#define THROTTLE_SCOM_MULTICAST_READ_OR   0x41010A9E
#define THROTTLE_SCOM_MULTICAST_READ_AND  0x49010A9E
#define THROTTLE_SCOM_MULTICAST_WRITE     0x69010A9E

uint32_t G_orig_throttle; //original value of throttle SCOM before manipulation
uint32_t G_throttleOn;    //is throttling currently enabled
uint32_t G_throttleCount; //how long has throttle been in current state

uint32_t G_beacon_count_threshold;
uint32_t G_beacon_count;

extern GlobalPstateParmBlock* G_gppb;
extern PgpeHeader_t* G_pgpe_header_data;
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
//    uint16_t freq = G_gppb->nest_frequency_mhz;

    PK_TRACE_DBG("Fit NestFreq=0x%x", G_gppb->nest_frequency_mhz);
    //Set fit count threshold
    //\todo Set fit_count threshold correctly RTC: 173170
    /*
    G_beacon_count_threshold = (freq < 1049) ? 7 :
                            (freq < 1180) ? 8 :
                            (freq < 1311) ? 9 :
                            (freq < 1442) ? 10 :
                            (freq < 1573) ? 11 :
                            (freq < 1704) ? 12 :
                            (freq < 1835) ? 13 :
                            (freq < 1966) ? 14 :
                            (freq < 2097) ? 15 :
                            (freq < 2228) ? 16 :
                            (freq < 2359) ? 17 :
                            (freq < 2490) ? 18 :
                            (freq < 2621) ? 19 :
                            (freq < 2753) ? 20 :
                            (freq < 2884) ? 21 :
                            (freq < 3015) ? 22 :
                            (freq < 3146) ? 23 : 24;*/


    G_throttleCount = 0;
    G_beacon_count = 0;
    G_beacon_count_threshold = 2;
    ppe42_fit_setup(p9_pgpe_fit_handler, NULL);
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
                mtmsr(value | 0x20000000); //don't cause halt if all cores offline
                G_orig_throttle = in64(THROTTLE_SCOM_MULTICAST_READ_AND) >> 32;
                uint32_t fail = (((mfmsr() >> 20) & 0x7) == 2); //if all cores online
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
                mtmsr(value | 0x20000000); //don't cause halt if all cores offline
                out64(THROTTLE_SCOM_MULTICAST_WRITE, ((uint64_t) throttleData << 32)); //apply new throttle SCOM setting
                mtmsr(value);
            }

            G_throttleCount++; //count always incremented, it is impossible to reach a count of 0 while enabled
        }
        else if(G_throttleCount != 0)
        {
            G_throttleCount = 0;
            uint32_t value = mfmsr();
            mtmsr(value | 0x20000000); //don't cause halt if all cores offline
            G_throttleOn = 0;
            out64(THROTTLE_SCOM_MULTICAST_WRITE, ((uint64_t) G_orig_throttle << 32)); //restore throttle scom to original state
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
    }
    else
    {
        G_beacon_count++;
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
}
