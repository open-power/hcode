/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers_fit.c $ */
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
#include "xgpe.h"

extern uint32_t G_OCB_OCCFLG3_OR;
extern uint32_t G_OCB_OCCFLG3;


//
//  This is a periodic FIT Handler which is called up at fixed period
//  as determined by GPE_TIMER_SELECT register
//
void xgpe_irq_fit_handler()
{
    handle_pm_suspend();
}


void handle_pm_suspend()
{
    uint32_t l_occflg3;
    //Read OCCFLG3 and check for XGPE_PM_COMPLEX_SUSPEND
    //if this is set.. then we are in mpipl mode.
    l_occflg3 = in32(G_OCB_OCCFLG3);

    if (l_occflg3 & BIT32(XGPE_PM_COMPLEX_SUSPEND))
    {
        //if this is set.. then just set pm suspended is done(useful to test the
        //procedure unit test)
        if (G_xgpe_header_data->g_xgpe_flags & XGPE_OCC_PM_SUSPEND_IMMEDIATE_MODE)
        {
            out32(G_OCB_OCCFLG3_OR, BIT32(XGPE_PM_COMPLEX_SUSPENDED));
        }
        else
        {
            //Send request to QME to suspend all its stop states
        }
    }
}
