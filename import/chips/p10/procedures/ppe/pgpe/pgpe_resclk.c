/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_resclk.c $          */
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

#include "pgpe_resclk.h"
#include "pgpe_pstate.h"
#include "pstate_pgpe_qme_api.h"
#include "p10_scom_eq.H"

//
//Globals
//
ResClkFreqIdx_t RESCLK_INDEX[RESCLK_FREQ_REGIONS] =
{
    {0, 3},         //Freq, Index
    {1500, 3},      //Freq, Index
    {2000, 21},     //Freq, Index
    {3000, 23}      //Freq, Index
};

//\todo Review if defining this table as array of 8 bytes is ok or not. Spec
//defines it as array of bytes. However, defining it as array 8 bytes makes it
//easy to use in the initialization code below
uint64_t RESCLK_TABLE[RESCLK_STEPS / 8] =
{
    0x0001020304050607ULL,  //Entries 0-7
    0x08090a0b0c0d0e0fULL,  //Entries 8-15
    0x1011121314151617ULL,  //Entries 16-23
    0x18191a1b1c1d1e1fULL   //Entries 24-31
};

pgpe_resclk_t G_pgpe_resclk __attribute__((section (".data_structs")));

//
//Local Function Prototypes
//
void pgpe_resclk_rcptr_write(uint32_t target_pstate);
void pgpe_resclk_rcptr_poll_done(uint32_t compare, uint32_t pstate_target);

//
//pgpe_resclk_data_addr
//
void* pgpe_resclk_data_addr()
{
    return &G_pgpe_resclk;
}

//
//pgpe_resclk_init
//
void pgpe_resclk_init()
{
    //Write RCIMR(Index Map Register) with the pstate values for the 4-inflection points
    rcimr_t rcimr;
    uint32_t i;
#if USE_MC == 0
    uint32_t q;
#endif

    for (i = 0; i < RESCLK_FREQ_REGIONS; i++)
    {
        switch(i)
        {
            case(0):
                rcimr.fields.rp0 = pgpe_pstate_ps_from_freq(RESCLK_INDEX[i].freq * 1000);
                rcimr.fields.rx0 = RESCLK_INDEX[i].idx;
                break;

            case(1):
                rcimr.fields.rp1 = pgpe_pstate_ps_from_freq(RESCLK_INDEX[i].freq * 1000);
                rcimr.fields.rx1 = RESCLK_INDEX[i].idx;
                break;

            case(2):
                rcimr.fields.rp2 = pgpe_pstate_ps_from_freq(RESCLK_INDEX[i].freq * 1000);
                rcimr.fields.rx2 = RESCLK_INDEX[i].idx;
                break;

            case(3):
                rcimr.fields.rp3 = pgpe_pstate_ps_from_freq(RESCLK_INDEX[i].freq * 1000);
                rcimr.fields.rx3 = RESCLK_INDEX[i].idx;
                break;
        }
    }

    PK_TRACE("RCK: Init Write RCIMR=0x%08x%08x", rcimr.words.high_order, rcimr.words.low_order);
    PK_TRACE("RCK: Init Write rp0=0x%x rx0=0x%x", rcimr.fields.rp0, rcimr.fields.rx0);
    PK_TRACE("RCK: Init Write rp1=0x%x rx1=0x%x", rcimr.fields.rp1, rcimr.fields.rx1);
    PK_TRACE("RCK: Init Write rp2=0x%x rx2=0x%x", rcimr.fields.rp2, rcimr.fields.rx2);
    PK_TRACE("RCK: Init Write rp3=0x%x rx3=0x%x", rcimr.fields.rp3, rcimr.fields.rx3);
#if USE_MC == 0

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_PUTSCOM_UC_Q(QME_RCIMR, q, rcimr.value);
    }

#else
    PPE_PUTSCOM_MC_Q(QME_RCIMR, rcimr.value);
#endif

    //Write RCTARn with the resonant clock table values
    //Set configuration values before enabling the hardware
    rctar_t rctar;

    for (i = 0; i < RESCLK_STEPS / 8; i++)
    {
        rctar.value = RESCLK_TABLE[i];

        PK_TRACE("RCK: Init Write RCTAR[%u]=0x%08x%08x", i, rctar.words.high_order, rctar.words.low_order);
#if USE_MC == 0

        for (q = 0; q < MAX_QUADS; q++)
        {
            PPE_PUTSCOM_UC_Q((QME_RCTAR0 + (i << 2)), q, rctar.value);
        }

#else
        PPE_PUTSCOM_MC_Q((QME_RCTAR0 + (i << 2)), rctar.value);
#endif
    }

    rcmr_t rcmr;
    rcmr.value = 0;
    rcmr.fields.step_delay = 2; //todo Not use this hardcoded value
    PK_TRACE("RCK: Init RCMR=0x%08x%08x", rcmr.words.high_order, rcmr.words.low_order);
#if USE_MC == 0

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_PUTSCOM_UC_Q(QME_RCMR, q, rcmr.value);
    }

#else
    PPE_PUTSCOM_MC_Q(QME_RCMR, rcmr.value);
#endif

    G_pgpe_resclk.status = PGPE_RESCLK_INIT;
}

//
//pgpe_resclk_enable
//
void pgpe_resclk_enable(uint32_t pstate_target)
{
    rcimr_t rcimr;
    rcimr.value = 0;
    uint64_t data;
    PK_TRACE("RCK: Rclk Enable PS=0x%x"pstate_target);
    //Multicast Read-compare RCIMR[RP1]
#if USE_MC == 0
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_GETSCOM_UC_Q(QME_RCIMR, q, data);

        if (q == 0)
        {
            rcimr.value = data;
        }
        else
        {
            if(rcimr.value != data)
            {
                //This should not be needed. Currently, only needed in SIMICS
                //where multicast is broken right now. Otherwise, the
                //multicast equ will result in MCHK
                //todo RTC: 214435
                IOTA_PANIC(CRITICAL_ERROR_LOG);
            }
        }
    }

#else
    PK_TRACE("RCK:addr=0x%08x", PPE_SCOM_ADDR_MC_Q_EQU((uint32_t)QME_RCIMR));
    PPE_GETSCOM_MC_Q_EQU(QME_RCIMR, data);
    rcimr.value = data;
#endif

    //Multicast write the RP1+1 Pstate to the RCPTR
    PK_TRACE("RCK: Enable Write rp1=0x%x, rx1=0x%x", rcimr.fields.rp1, rcimr.fields.rx1);
    pgpe_resclk_rcptr_write(rcimr.fields.rp1 + 1);

    //Multicast write RMCR_OR
    //STEP_ENABLE = 1
    rcmr_t rcmr;
    rcmr.value = 0;
    rcmr.fields.step_enable = 1;
    PK_TRACE("RCK: Enable Write RCMR=0x%08x%08x", rcmr.words.high_order, rcmr.words.low_order);
#if USE_MC == 0

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_PUTSCOM_UC_Q(QME_RCMR_WO_OR, q, rcmr.value);
    }

#else
    PPE_PUTSCOM_MC_Q(QME_RCMR_WO_OR, rcmr.value);
#endif

    //Multicast write the actual Pstate to the RCPTR
    pgpe_resclk_rcptr_write(pstate_target);

    if (G_pgpe_resclk.status == PGPE_RESCLK_INIT)
    {
        pgpe_resclk_rcptr_poll_done(PGPE_RESCLK_RCPTR_COMPARE, pstate_target);
    }
    else
    {
        pgpe_resclk_rcptr_poll_done(PGPE_RESCLK_RCPTR_COMPARE_SKIP, 0);
    }

    G_pgpe_resclk.status = PGPE_RESCLK_ENABLED;
}


//
//pgpe_resclk_disable
//
void pgpe_resclk_disable()
{
    rcimr_t rcimr;
    rcimr.value = 0;
    uint64_t data;

    //Multicast Read-compare RCIMR[RP1]
#if USE_MC == 0
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_GETSCOM_UC_Q(QME_RCIMR, q, data);

        if (q == 0)
        {
            rcimr.value = data;
        }
        else
        {
            if(rcimr.value != data)
            {
                //This should not be needed in environments
                //other than SIMICS(where multicast is broken right now)
                //bc the multicast will result in MCHK
                //todo RTC: 214435
                IOTA_PANIC(CRITICAL_ERROR_LOG);
            }
        }
    }

#else
    PPE_GETSCOM_MC_Q_EQU(QME_RCIMR, data);
    rcimr.value = data;
#endif

    PK_TRACE("RCK: Disable Write rp1=0x%x, rx1=0x%x", rcimr.fields.rp1, rcimr.fields.rx1);
    pgpe_resclk_rcptr_write(rcimr.fields.rp1 + 1);
    pgpe_resclk_rcptr_poll_done(PGPE_RESCLK_RCPTR_COMPARE, rcimr.fields.rp1 + 1);

    //Multicast write RMCR_CLEAR
    //STEP_ENABLE = 0
    //AUTO_ACK_ENABLE = 0
    rcmr_t rcmr;
    rcmr.value = 0;
    rcmr.fields.step_enable = 1;
    rcmr.fields.auto_ack_enable = 1;
#if USE_MC == 0

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_PUTSCOM_UC_Q(QME_RCMR_WO_CLEAR, q, rcmr.value);
    }

#else
    PPE_PUTSCOM_MC_Q(QME_RCMR_WO_CLEAR, rcmr.value);
#endif

    G_pgpe_resclk.status = PGPE_RESCLK_DISABLED;
}

//
//pgpe_resclk_update
//
void pgpe_resclk_update(uint32_t pstate)
{
    pgpe_resclk_rcptr_write(pstate);
    pgpe_resclk_rcptr_poll_done(PGPE_RESCLK_RCPTR_COMPARE_SKIP, 0);
}

//
//pgpe_resclk_rcptr_write
//
void pgpe_resclk_rcptr_write(uint32_t target_pstate)
{
    rcptr_t rcptr;
    rcptr.value = 0;

    //Multicast write to all QMEs, RCPTR[target_pstate] with target pstate
    rcptr.fields.target_pstate = target_pstate;
    PK_TRACE("RCK: RCPTR[tgtPS]=0x%x psTgt=0x%x", rcptr.fields.target_pstate, target_pstate);
    PK_TRACE("RCK: Upd Write RCPTR=0x%08x%08x", rcptr.words.high_order, rcptr.words.low_order);

#if USE_MC == 0
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_PUTSCOM_UC_Q(QME_RCPTR, q, rcptr.value);
    }

#else
    PK_TRACE("RCK: addr=0x%08x", PPE_SCOM_ADDR_MC_Q_WR(PPE_QUEUED_SCOM(QME_RCPTR & PPE_MC_BASE_ADDR_MASK)));
    PPE_PUTSCOM_MC_Q(QME_RCPTR, rcptr.value);
#endif

}

//
//pgpe_resclk_rcptr_done
//
void pgpe_resclk_rcptr_poll_done(uint32_t compare, uint32_t pstate_target)
{
    rcptr_t rcptr;
    rcptr.value = 0;

    PK_TRACE("RCK: RCPTR Poll");

#if USE_MC == 0
    uint32_t q;
    uint32_t acks_rcvd = 0; //\Todo: Base this on Configured Quads/Cores

    while(acks_rcvd != 0xFF)   //\Todo Timeout: 50us, critical error
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            if (!(acks_rcvd  & (1 << q)))
            {
                PPE_GETSCOM_UC_Q(QME_RCPTR, q, rcptr.value);

                if (!rcptr.fields.pstate_ack_pending)
                {
                    acks_rcvd   |= (1 << q);
                    PK_TRACE("RCK: RCPTR[%u]=0x%08x%08x Acks_Rcvd=0x%x", q, rcptr.words.high_order, rcptr.words.low_order, acks_rcvd);
                }
            }
        }
    }

#else
    rcptr.fields.pstate_ack_pending = 1;

    while(rcptr.fields.pstate_ack_pending) //\Todo Timeout: 50us, critical error
    {
        PPE_GETSCOM_MC_Q_AND(QME_RCPTR, rcptr.value);
        PK_TRACE("RCK: RCPTR_MC_Q_AND=0x%08x, rcptr=0x%08x%08x", PPE_SCOM_ADDR_MC_Q_AND(QME_RCPTR), rcptr.words.high_order,
                 rcptr.words.low_order);
    }


    PK_TRACE("RCK: RCPTR_MC_Q_AND=0x%08x, rcptr=0x%08x%08x", PPE_SCOM_ADDR_MC_Q_AND(QME_RCPTR), rcptr.words.high_order,
             rcptr.words.low_order);

    //Check that the pstate in 16:23 from every QME matches the RCPTR target value
    //Check is only done upon the first enablement to ensure that the HW and hcode are in sync
    //If check fails, these values will be put into an Critical log
    if(compare == PGPE_RESCLK_RCPTR_COMPARE)
    {
        if (rcptr.fields.target_pstate != pstate_target)
        {
            //\todo RTC:214435 take critical log and not halt
            PK_TRACE("RCK: RCPTR[tgtPS]=0x%x psTgt=0x%x", rcptr.fields.target_pstate, pstate_target);
            IOTA_PANIC(CRITICAL_ERROR_LOG);
        }
    }

#endif

}
