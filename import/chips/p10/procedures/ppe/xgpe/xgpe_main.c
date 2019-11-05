/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_main.c $            */
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
#include "ocb_register_addresses.h"

uint32_t G_OCB_OISR0_CLR     = OCB_OISR0_CLR;
uint32_t G_OCB_OIMR0_CLR     = OCB_OIMR0_CLR;
uint32_t G_OCB_OIMR1_CLR     = OCB_OIMR1_CLR;
uint32_t G_OCB_OIMR0_OR      = OCB_OIMR0_OR;
uint32_t G_OCB_OIMR1_OR      = OCB_OIMR1_OR;
uint32_t G_OCB_OCCFLG3       = OCB_OCCFLG3;
uint32_t G_OCB_OCCFLG3_OR    = OCB_OCCFLG3_OR;
uint32_t G_OCB_OCCFLG3_CLR   = OCB_OCCFLG3_CLR;
uint32_t G_OCB_CCSR          = OCB_CCSR;
uint32_t G_OCB_OPITFSV       = OCB_OPITFSV;
uint32_t G_OCB_OPITFPRD      = OCB_OPITFPRD;
uint32_t G_OCB_OPITFSVRR     = OCB_OPITFSVRR;


int main()
{
    PK_TRACE("XGPE Booted");

    xgpe_init();

    xgpe_header_init ();

    iota_run();
    return 0;
}

///////////////////////////////////////
// xgpe_init
/////////////////////////////////////////
void xgpe_init()
{
    //Bit 16 in OCCFLG3 indicates XGPE active
    out32(G_OCB_OCCFLG3, BIT32(XGPE_ACTIVE));

    //Unmask
    //PCBtype F(31)
    //ipi3(9)
    //GPE2 error (2) notify
    //XSTOP GPE3 (5)interrupts
    out32(G_OCB_OIMR0_CLR, BIT32(31) | BIT32(11) | BIT32(9) | BIT32(2) | BIT32(5));

#if (ENABLE_FIT_TIMER || ENABLE_DEC_TIMER)

    uint32_t TCR_VAL = 0;
    PK_TRACE("Main: Set Watch Dog Timer Rate to 6 and FIT Timer Rate to 8");
    //out32(QME_LCL_TSEL, (BITS32(1, 2) | BIT32(4)));

#if ENABLE_FIT_TIMER
    PK_TRACE("Main: Register and Enable FIT Timer");
    IOTA_FIT_HANDLER(xgpe_irq_fit_handler);
    TCR_VAL |= TCR_FIE;
#endif

#if ENABLE_DEC_TIMER
    PK_TRACE("Main: Register and Enable DEC Timer");
    TCR_VAL |= TCR_DIE;
#endif

    mtspr(SPRN_TCR, TCR_VAL);

#endif

}
