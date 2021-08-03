/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_resclk.c $          */
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

#include "pgpe_resclk.h"
#include "pgpe_pstate.h"
#include "pstate_pgpe_qme_api.h"
#include "p10_scom_eq.H"
#include "pgpe_gppb.h"
#include "p10_resclk.H"
#include "pgpe_utils.h"
#include "pgpe_error.h"


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

    PK_TRACE_INF("RCK: Resclk Init");
    //Write RCIMR(Index Map Register) with the pstate values for the 4-inflection points
    rcimr_t rcimr;
    uint32_t i;
#if USE_MC == 0
    uint32_t q;
#endif

    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RESCLK_ENABLE))
    {
        for (i = 0; i < RESCLK_FREQ_REGIONS; i++)
        {
            switch(i)
            {
                case(0):
                    rcimr.fields.rp0 = pgpe_pstate_ps_from_freq_clipped(RESCLK_INDEX[i + 1].freq * 1000, PS_FROM_FREQ_ROUND_UP);
                    rcimr.fields.rx0 = RESCLK_INDEX[i].idx;
                    break;

                case(1):
                    rcimr.fields.rp1 = pgpe_pstate_ps_from_freq_clipped(RESCLK_INDEX[i + 1].freq * 1000, PS_FROM_FREQ_ROUND_UP);
                    rcimr.fields.rx1 = RESCLK_INDEX[i].idx;
                    break;

                case(2):
                    rcimr.fields.rp2 = pgpe_pstate_ps_from_freq_clipped(RESCLK_INDEX[i + 1].freq * 1000, PS_FROM_FREQ_ROUND_UP);
                    rcimr.fields.rx2 = RESCLK_INDEX[i].idx;
                    break;

                case(3):
                    rcimr.fields.rp3 = 0;
                    rcimr.fields.rx3 = RESCLK_INDEX[i].idx;
                    break;
            }
        }

        PK_TRACE_DBG("RCK: Init Write RCIMR=0x%08x%08x", rcimr.words.high_order, rcimr.words.low_order);
        PK_TRACE_DBG("RCK: Init Write rp0=0x%x rx0=0x%x", rcimr.fields.rp0, rcimr.fields.rx0);
        PK_TRACE_DBG("RCK: Init Write rp1=0x%x rx1=0x%x", rcimr.fields.rp1, rcimr.fields.rx1);
        PK_TRACE_DBG("RCK: Init Write rp2=0x%x rx2=0x%x", rcimr.fields.rp2, rcimr.fields.rx2);
        PK_TRACE_DBG("RCK: Init Write rp3=0x%x rx3=0x%x", rcimr.fields.rp3, rcimr.fields.rx3);
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

            PK_TRACE_DBG("RCK: Init Write RCTAR[%u]=0x%08x%08x", i, rctar.words.high_order, rctar.words.low_order);
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
        rcmr.value = 0;  // Note: this will clear AUTO_DONE_DISABLE set by QME
        rcmr.fields.step_delay = 2; //todo Not use this hardcoded value
        PK_TRACE_DBG("RCK: Init RCMR=0x%08x%08x", rcmr.words.high_order, rcmr.words.low_order);
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
}

//
//pgpe_resclk_enable
//
void pgpe_resclk_enable(uint32_t pstate_target)
{
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RESCLK_ENABLE))
    {
        rcimr_t rcimr;
        rcimr.value = 0;
        uint64_t data;
        PK_TRACE_INF("RCK: Rclk Enable PS=0x%x"pstate_target);
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
        PK_TRACE_DBG("RCK:addr=0x%08x", PPE_SCOM_ADDR_MC_Q_EQU((uint32_t)QME_RCIMR));
        PPE_GETSCOM_MC_Q_EQU(QME_RCIMR, data);
        rcimr.value = data;
#endif

        //Multicast write the RP1+1 Pstate to the RCPTR
        PK_TRACE_DBG("RCK: Enable Write rp1=0x%x, rx1=0x%x", rcimr.fields.rp1, rcimr.fields.rx1);
        pgpe_resclk_rcptr_write(rcimr.fields.rp1 + 1);

        //Multicast write RMCR_OR
        //STEP_ENABLE = 1
        rcmr_t rcmr;
        rcmr.value = 0;
        rcmr.fields.step_enable = 1;
        PK_TRACE_DBG("RCK: Enable Write RCMR=0x%08x%08x", rcmr.words.high_order, rcmr.words.low_order);
#if USE_MC == 0

        for (q = 0; q < MAX_QUADS; q++)
        {
            PPE_PUTSCOM_UC_Q(QME_RCMR_WO_OR, q, rcmr.value);
            // RCSCR OFF REQ is owned by QME.  Resclks are enabled by RCPTR updates below
            // PPE_PUTSCOM_UC_Q(QME_RCSCR_WO_CLEAR, q, BITS64(QME_RCSCR_OFF_REQ, QME_RCSCR_OFF_REQ_LEN));
        }

#else
        PPE_PUTSCOM_MC_Q(QME_RCMR_WO_OR, rcmr.value);
        // RCSCR OFF REQ is owned by QME.  Resclks are enabled by RCPTR updates below
        // PPE_PUTSCOM_MC_Q(QME_RCSCR_WO_CLEAR, BITS64(QME_RCSCR_OFF_REQ, QME_RCSCR_OFF_REQ_LEN));
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
}


//
//pgpe_resclk_disable
//
void pgpe_resclk_disable()
{
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RESCLK_ENABLE))
    {
        PK_TRACE_INF("RCK: Rclk Disable");
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

        PK_TRACE_INF("RCK: Disable Write rp1=0x%x, rx1=0x%x", rcimr.fields.rp1, rcimr.fields.rx1);
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
}

//
//pgpe_resclk_update
//
void pgpe_resclk_update(uint32_t pstate)
{
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RESCLK_ENABLE))
    {
        pgpe_resclk_rcptr_write(pstate);
        pgpe_resclk_rcptr_poll_done(PGPE_RESCLK_RCPTR_COMPARE_SKIP, 0);
    }
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
    PK_TRACE_INF("RCK: RCPTR[tgtPS]=0x%x psTgt=0x%x", rcptr.fields.target_pstate, target_pstate);
    PK_TRACE_DBG("RCK: Upd Write RCPTR=0x%08x%08x", rcptr.words.high_order, rcptr.words.low_order);

#if USE_MC == 0
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        PPE_PUTSCOM_UC_Q(QME_RCPTR, q, rcptr.value);
    }

#else
    //PK_TRACE("RCK: addr=0x%08x", PPE_SCOM_ADDR_MC_Q_WR(PPE_QUEUED_SCOM(QME_RCPTR & PPE_MC_BASE_ADDR_MASK)));
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
    PkMachineContext ctx;

    PK_TRACE_INF("RCK: RCPTR Poll");

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
                    PK_TRACE_DBG("RCK: RCPTR[%u]=0x%08x%08x Acks_Rcvd=0x%x", q, rcptr.words.high_order, rcptr.words.low_order, acks_rcvd);
                }
            }
        }
    }

#else
    rcptr.fields.pstate_ack_pending = 1;


    TIMER_START()

    //Status ead and timeout detection should be inside a critical section.
    //Otherwise, FIT interrupt can result in false timeouts being detected
    while(rcptr.value & BIT64(8)) //Timeout: 50us, critical error
    {
        pk_critical_section_enter(&ctx);
        PPE_GETSCOM_MC_Q_AND(QME_RCPTR, rcptr.value);//Read status

        if(rcptr.value & BIT64(8))  //If not done check for timeout. Otherwise, we are done.
        {
            TIMER_DELTA()//Compute timebase delta
            TIMER_DETECT_TIMEOUT_US(50)//Detect and set timeout, but take out log outside of critical section
        }

        pk_critical_section_exit(&ctx);

        //If timeout detected, then take out log and go to error state
        if(TIMER_GET_TIMEOUT)
        {
            PK_TRACE_INF("RCK: RCPTR_PSTATE_ACK_TIMEOUT");
            pgpe_error_handle_fault(PGPE_ERR_CODE_RESCLK_RCPTR_PSTATE_ACK_TIMEOUT);
            pgpe_error_state_loop();
        }

        //PK_TRACE("RCK: RCPTR_MC_Q_AND=0x%08x, rcptr=0x%08x%08x", PPE_SCOM_ADDR_MC_Q_AND(QME_RCPTR), rcptr.words.high_order,
        //         rcptr.words.low_order);
    }


    //PK_TRACE("RCK: RCPTR_MC_Q_AND=0x%08x, rcptr=0x%08x%08x", PPE_SCOM_ADDR_MC_Q_AND(QME_RCPTR), rcptr.words.high_order,
    //         rcptr.words.low_order);

    //Check that the pstate in 16:23 from every QME matches the RCPTR target value
    //Check is only done upon the first enablement to ensure that the HW and hcode are in sync
    //If check fails, these values will be put into an Critical log
    if(compare == PGPE_RESCLK_RCPTR_COMPARE)
    {
        if (rcptr.fields.target_pstate != pstate_target)
        {
            PK_TRACE("RCK: RCPTR[tgtPS]=0x%x psTgt=0x%x", rcptr.fields.target_pstate, pstate_target);
            pgpe_error_handle_fault(PGPE_ERR_CODE_RESCLK_RCPTR_TGT_PSTATE_NOT_EQUAL);
            pgpe_error_state_loop();
        }
    }

#endif

}
