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

uint8_t G_fit_count_threshold;
uint8_t G_fit_count;
extern GlobalPstateParmBlock* G_gppb;
extern pgpe_header_data_t* G_pgpe_header_data;

//
//Local function declarations
//
void p9_pgpe_fit_handler(void* arg, PkIrqId irq);

//
//p9_pgpe_fit_init
//
//We set fit_count_threshold based on nest frequency
//and also enable and setup the fit handler
//
void p9_pgpe_fit_init()
{
    uint16_t freq = G_gppb->nest_frequency_mhz;

    //Set fit count threshold
    G_fit_count_threshold = (freq < 1049) ? 7 :
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
                            (freq < 3146) ? 23 : 24;

    ppe42_fit_setup(p9_pgpe_fit_handler, NULL);
}

//
//p9_pgpe_fit_handler
//
//This is a periodic FIT Handler whose period is determined
//by GPE_TIMER_SELECT register
//
//PGPE beacon needs to be written every 2ms. However, we
//set the FIT interrupt period smaller than that, and
//update PGPE beacon only when we have seen "G_fit_count_threshold"
//number of FIT interrupts
//
void p9_pgpe_fit_handler(void* arg, PkIrqId irq)
{
    if (G_fit_count == G_fit_count_threshold)
    {
        //write to SRAM
        *(G_pgpe_header_data->pgpe_beacon) = *(G_pgpe_header_data->pgpe_beacon) + 1;
        G_fit_count = 0;
    }
    else
    {
        G_fit_count++;
    }

}
