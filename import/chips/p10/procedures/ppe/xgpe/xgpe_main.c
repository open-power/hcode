/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_main.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include "xgpe_irq_handlers.h"
#include "errlqmeproxy.h"
#include "pstate_pgpe_occ_api.h"
#include "p10_oci_proc.H"

uint32_t G_OCB_OISR0         = OCB_OISR0;
uint32_t G_OCB_OISR0_CLR     = OCB_OISR0_CLR;
uint32_t G_OCB_OIMR0_CLR     = OCB_OIMR0_CLR;
uint32_t G_OCB_OIMR1_CLR     = OCB_OIMR1_CLR;
uint32_t G_OCB_OIMR0_OR      = OCB_OIMR0_OR;
uint32_t G_OCB_OIMR1_OR      = OCB_OIMR1_OR;
uint32_t G_OCB_OCCFLG3       = OCB_OCCFLG3;
uint32_t G_OCB_OCCFLG6       = OCB_OCCFLG6;
uint32_t G_OCB_OCCFLG3_OR    = OCB_OCCFLG3_OR;
uint32_t G_OCB_OCCFLG3_CLR   = OCB_OCCFLG3_CLR;
uint32_t G_OCB_CCSR          = OCB_CCSR;
uint32_t G_OCB_OPITFSV       = OCB_OPITFSV;
uint32_t G_OCB_OPITESV       = OCB_OPITESV;
uint32_t G_OCB_OPITFPRD      = OCB_OPITFPRD;
uint32_t G_OCB_OPITFPRD_CLR  = OCB_OPITFPRD_WO_CLEAR;
uint32_t G_OCB_OPITEPRD      = OCB_OPITEPRD;
uint32_t G_OCB_OPITEPRD_CLR  = OCB_OPITEPRD_WO_CLEAR;
uint32_t G_OCB_OPITFSVRR     = OCB_OPITFSVRR;
uint32_t G_OCB_OPITESVRR     = OCB_OPITESVRR;
extern uint64_t  g_oimr_override;

int main()
{
    PK_TRACE("XGPE Booted");

#if (POWER10_DD_LEVEL != 0)
#define PVR_CONST (0x421A0000 | (((POWER10_DD_LEVEL ) / 10) << 8) | (POWER10_DD_LEVEL % 10))
#else
#define PVR_CONST 0
#endif

#define OCC_FLAGS_RUNNING_SIMICS 63

    // @note If OCC Flag 0 [63] is set .. execution environment is Simics
    if( in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW) & BIT64SH(OCC_FLAGS_RUNNING_SIMICS) )
    {
        PK_TRACE ("XGPE running on Simics");
    }
    else
    {
        if(mfspr(287) != PVR_CONST)
        {
            IOTA_PANIC(XGPE_BAD_DD_LEVEL);
        }
    }

    // initialize XGPE's error logging function
    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*) OCC_SHARED_SRAM_ADDR_START;
    initErrLogging ((uint8_t) ERRL_SOURCE_XGPE, &(occ_shared_data->errlog_idx));
    // Setup where Error Logs offloaded from QME SRAM are expected to land
    initQmeErrSlots (G_pErrLogsQme);

    xgpe_header_init ();
    xgpe_init();


    iota_run();
    return 0;
}

///////////////////////////////////////
// xgpe_init
/////////////////////////////////////////
void xgpe_init()
{
    //Bit 16 in OCCFLG3 indicates XGPE active
    out32(G_OCB_OCCFLG3_OR, BIT32(XGPE_ACTIVE));

    //Unmask
    //PCBtype E(30), F(31)
    //ipi3(9)
    //GPE2 error (2) notify
    //XSTOP GPE3 (5)interrupts
    out32(G_OCB_OIMR0_CLR, BITS32(30, 2) | BIT32(11) | BIT32(9) | BIT32(2) | BIT32(5));
#if ENABLE_MACHINE_CHECK_HANDLER
    IOTA_MC_HANDLER(__xgpe_machine_check_handler);
#endif

    g_oimr_override |= BIT32(26); //Type A is only polled by XGPE
#if (ENABLE_FIT_TIMER || ENABLE_DEC_TIMER)

    uint32_t TCR_VAL = 0;
    PK_TRACE("Main: Set Watch Dog Timer Rate to 6 and FIT Timer Rate to 8");
    //out32(QME_LCL_TSEL, (BITS32(1, 2) | BIT32(4)));

#if ENABLE_FIT_TIMER
    PK_TRACE("Main: Register and Enable FIT Timer");
    IOTA_FIT_HANDLER(xgpe_irq_fit_handler);
    TCR_VAL |= TCR_FIE;
    xgpe_irq_fit_init();
#endif

#if ENABLE_DEC_TIMER
    PK_TRACE("Main: Register and Enable DEC Timer");
    TCR_VAL |= TCR_DIE;
#endif

    mtspr(SPRN_TCR, TCR_VAL);

#endif

    xgpe_irq_ipc_init();

}
