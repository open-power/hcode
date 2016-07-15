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
#include "p9_pstate_vpd.h" //\todo Temporary
#include "p9_pstate_common.h"
#include "p9_pgpe.h"
#include "avs_driver.h"

#define EVID_SLOPE_FP_SHIFT      13
#define CCSR_CORE_CONFIG_MASK    0xC0000000

enum quadManager
{
    QUAD_MANAGER_NONE =     -1,
    QUAD_MANAGER_CME0 =     0,
    QUAD_MANAGER_CME1 =     1
};

//Data derived from VPD(PPB)
uint16_t G_FVSlopes[VPD_PV_POINTS - 1];
uint16_t G_invFVSlopes[VPD_PV_POINTS - 1];

//External Voltage, GlobalPState, Local PStates
uint32_t G_eVidCurr, G_eVidNext;
uint8_t G_globalCurrPS, G_globalNextPS;
uint8_t G_localPSCurr[MAX_QUADS];
uint8_t G_localPSNext[MAX_QUADS];
uint8_t G_globalPSTgt;
uint8_t G_localPSTgt[MAX_QUADS];
uint32_t G_tgtEVid;
int8_t  G_quadManagerCME[MAX_QUADS]; //0->CME0, 1->CME1, -1->Quad not configured
uint8_t G_quadPendPSReq[MAX_QUADS];
uint8_t G_coresPendPSReqData[MAX_CORES];
uint8_t G_coreConf[MAX_CORES];
extern PgpePstateRecord G_pgpe_pstate_record;
extern global_pstate_table_t G_gpst;

//
//Function Prototypes
//
void p9_pgpe_pstate_init_derived_data();
void p9_pgpe_pstate_get_config();
uint32_t p9_pgpe_pstate_get_evid_from_pstate(uint8_t pstate);
uint8_t p9_pgpe_pstate_get_pstate_from_evid(uint16_t evid);
void p9_pgpe_pstate_update_ext_volt();
void p9_pgpe_pstate_freq_update();

//
//PIG Interrupt Handler
//
void p9_pgpe_pstate_pig_handler(void* arg, PkIrqId irq)
{
    //Read OCC_FLAG[PGPE_STARTNOTSTOP]]
    uint32_t occFlag = in32(OCB_OCCFLG);

    if (occFlag & BIT32(0))
    {
        pk_semaphore_post((PkSemaphore*)arg);
    }

}

//
//PState Thread
//
void p9_pgpe_pstate_thread(void* arg)
{
    int32_t q, c;
    uint8_t psClipMax, psClipMin;
    uint32_t coresPendPSReq;
    ocb_opit0cn_t opit0cn;
    ocb_opit1cn_t opit1cn;
    PkMachineContext  ctx;
    uint8_t effPSClipMin, effPSClipMax;
    uint8_t done;

    //Initialization

    //todo Read this data from HOMER/PPMR. RTC 159902
    p9_pstate_vpd_init();

    //\todo Set initial eVid, Global PState, Local PState, Max/Mins PStateClip for PGPE. RTC. 159900
    psClipMax = 0;
    psClipMin = 140;
    coresPendPSReq = 0;
    G_eVidCurr = G_gpst.infPT[POWERSAVE].evid;
    G_eVidNext = G_gpst.infPT[POWERSAVE].evid;
    G_globalCurrPS = G_globalNextPS = G_gpst.infPT[POWERSAVE].pstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_localPSCurr[q] = G_gpst.infPT[POWERSAVE].pstate;
        G_localPSNext[q] = G_gpst.infPT[POWERSAVE].pstate;
        G_localPSTgt[q] = G_gpst.infPT[POWERSAVE].pstate;
        G_quadPendPSReq[q] = 0;
    }

    for (c = 0; c < MAX_CORES; c++)
    {
        G_coresPendPSReqData[c] = G_gpst.infPT[POWERSAVE].pstate;
    }

    //Initialization
    external_voltage_control_init(&G_eVidCurr);
    G_eVidCurr = G_gpst.infPT[POWERSAVE].evid; //\todo RTC 159900. Remove this
    p9_pgpe_pstate_init_derived_data();
    p9_pgpe_pstate_get_config();

    out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1

    pk_semaphore_create(&(G_pgpe_pstate_record.sem[0]), 0, 1);

    //Set OCC_FLAG[PGPE_ACTIVE]
    out32(OCB_OCCFLG_OR, BIT32(4));
#if EPM_P9_TUNING
    asm volatile ("tw 0, 31, 0");
#endif

    //Thread Loop
    while (1)
    {
        //pend on semaphore
        pk_semaphore_pend(&(G_pgpe_pstate_record.sem[0]), PK_WAIT_FOREVER);

        done = 0;

        while (done == 0)
        {
            //Snapshot
            coresPendPSReq = in32(OCB_OPIT1PRA);

            //Make sure clips aren't below or above VPD points
            if (psClipMax < G_gpst.infPT[ULTRA].pstate)
            {
                effPSClipMax = G_gpst.infPT[ULTRA].pstate;
            }
            else
            {
                effPSClipMax = psClipMax;
            }

            if (psClipMin > G_gpst.infPT[POWERSAVE].pstate)
            {
                effPSClipMin = G_gpst.infPT[POWERSAVE].pstate;
            }
            else
            {
                effPSClipMin = psClipMin;
            }

            for (c = 0; c < MAX_CORES; c++)
            {
                //For each pending bit OPIT1PR[c] (OPIT1PR is 24 bits)
                if (coresPendPSReq & (0x80000000 >> c))
                {
                    //Read payload from OPIT0C[c] and OPIT1C[c] register corresponding to the core 'c'
                    //Bits 20:31 OPIT0C - Phase 1 OPIT1C - Phase 2
                    opit0cn.value = in32(OCB_OPIT0CN(c));
                    opit1cn.value = in32(OCB_OPIT1CN(c));

                    uint16_t op0 = opit0cn.fields.pcb_intr_type_a_core_n;
                    uint16_t op1 = opit1cn.fields.pcb_intr_type_a_core_n;

                    //make sure seq number matches for both phases
                    //otherwise, ignore the request
                    if (((op0 >> 10) && 0x3) ==
                        ((op1 >> 10) && 0x3))
                    {
                        //Extract the LowerPState field
                        G_coresPendPSReqData[c] = op1 & 0xff;
                        G_quadPendPSReq[QUAD_FROM_CORE(c)] = 1;
                        out32(OCB_OPIT1PRA_CLR, 0x80000000 >> c); //Clear out pending bits
                    }
                }
            }

            //Local PStates
            for (q = 0; q < MAX_QUADS; q++)
            {
                //Make sure quad is configured and there is a pending request
                if ((G_quadManagerCME[q] != QUAD_MANAGER_NONE) && (G_quadPendPSReq[q] == 1))
                {
                    //Go through all the cores in this quad with pending request
                    //and find the lowest numbered PState
                    G_localPSTgt[q] = G_gpst.infPT[POWERSAVE].pstate;

                    for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
                    {
                        if (G_coreConf[c])
                        {
                            if (G_localPSTgt[q] > G_coresPendPSReqData[c])
                            {
                                G_localPSTgt[q] = G_coresPendPSReqData[c];
                            }
                        }
                    }

                    //Apply Clip
                    if (G_localPSTgt[q] < effPSClipMax)
                    {
                        G_localPSTgt[q] = effPSClipMax;
                    }
                    else if (G_localPSTgt[q] > effPSClipMin)
                    {
                        G_localPSTgt[q] = effPSClipMin;
                    }

                    G_quadPendPSReq[q] = 0;
                }
            }

            //Global PState
            G_globalPSTgt = G_gpst.infPT[POWERSAVE].pstate;

            for (q = 0; q < MAX_QUADS; q++)
            {
                if ((G_quadManagerCME[q] != QUAD_MANAGER_NONE))
                {
                    if (G_globalPSTgt  > G_localPSTgt[q])
                    {
                        G_globalPSTgt  = G_localPSTgt[q];
                    }
                }
            }


#if EPM_P9_TUNING
            asm volatile ("tw 0, 31, 0");
#endif

            //Determine targetVoltage
            G_tgtEVid = p9_pgpe_pstate_get_evid_from_pstate(G_globalPSTgt);

            //Higher number PState
            if (((int16_t)(G_globalPSTgt) - (int16_t)(G_globalCurrPS)) > 0)
            {
                if ((G_eVidCurr - G_tgtEVid) <= G_gpst.evid_step_size)
                {
                    G_eVidNext = G_tgtEVid;
                    G_globalNextPS = G_globalPSTgt;

                    for (q = 0; q < MAX_QUADS; q++)
                    {
                        G_localPSNext[q] = G_localPSTgt[q];
                    }

                    done = 1;
                }
                else
                {
                    G_eVidNext = G_eVidCurr - G_gpst.evid_step_size;
                    G_globalNextPS = p9_pgpe_pstate_get_pstate_from_evid(G_eVidNext);

                    for (q = 0; q < MAX_QUADS; q++)
                    {
                        if (G_localPSTgt[q] < G_globalNextPS)   //Keep localPS under GlobalPS
                        {
                            G_localPSNext[q] = G_globalNextPS;
                        }
                        else
                        {
                            G_localPSNext[q] = G_localPSTgt[q];
                        }
                    }
                }

                p9_pgpe_pstate_freq_update();
                p9_pgpe_pstate_update_ext_volt();
            }
            //Lower number PState
            else if (((int16_t)(G_globalPSTgt) - (int16_t)(G_globalCurrPS)) < 0)
            {
                if ((G_tgtEVid - G_eVidCurr) <= G_gpst.evid_step_size)
                {
                    G_eVidNext = G_tgtEVid;
                    G_globalNextPS = G_globalPSTgt;

                    for (q = 0; q < MAX_QUADS; q++)
                    {
                        G_localPSNext[q] = G_localPSTgt[q];
                    }

                    done = 1;
                }
                else
                {
                    G_eVidNext = G_eVidCurr + G_gpst.evid_step_size;
                    G_globalNextPS = p9_pgpe_pstate_get_pstate_from_evid(G_eVidNext);

                    for (q = 0; q < MAX_QUADS; q++)
                    {
                        if (G_localPSTgt[q] < G_globalNextPS)   //Keep localPS under GlobalPS
                        {
                            G_localPSNext[q] = G_globalNextPS;
                        }
                        else
                        {
                            G_localPSNext[q] = G_localPSTgt[q];
                        }
                    }
                }

                p9_pgpe_pstate_update_ext_volt();
                p9_pgpe_pstate_freq_update();
            }
            else
            {
                for (q = 0; q < MAX_QUADS; q++)
                {
                    G_localPSNext[q] = G_localPSTgt[q];
                }

                p9_pgpe_pstate_freq_update();
                done = 1;
            }
        }

        pk_irq_vec_restore(&ctx);//Restore interrupts
    }//Thread Loop
}

//
//init_vpd_derived_data
//
void p9_pgpe_pstate_init_derived_data()
{
    int32_t i;
    uint32_t eVidFP[VPD_PV_POINTS];

    //convert to fixed-point number
    for (i = 0; i < VPD_PV_POINTS; i++)
    {
        eVidFP[i] = (G_gpst.infPT[i].evid << EVID_SLOPE_FP_SHIFT);
    }

    //PState(Frequency) on y-axis, Voltage is on x-axis for VF curve
    //Interpolation formula: (y-y0)/(x-x0) = (y1-y0)/(x1-x0)
    //m   = (x1-x0)/(y1-y0), then use this to calculate voltage, x = (y-y0)*m + x0
    //1/m = (y1-y0)/(x1-x0) here, then use this to calculate pstate(frequency), y = (x-x0)*m + y0
    //Region 0 is b/w POWERSAVE and NOMINAL
    //Region 1 is b/w NOMINAL and TURBO
    //Region 2 is between TURBO and ULTRA_TURBO
    //
    //Inflection Point 3 is ULTRA_TURBO
    //Inflection Point 2 is TURBO
    //Inflection Point 1 is NOMINAL
    //Inflection Point 0 is POWERSAVE
    //
    for (i = 0; i < VPD_PV_POINTS - 1; i++)
    {
        //Note: Since PState number decrease with frequency,
        //we flip the sign(add a minus)
        uint32_t tmp = (uint32_t)(eVidFP[i + 1] - eVidFP[i]) /
                       (uint32_t)(-G_gpst.infPT[i + 1].pstate + G_gpst.infPT[i].pstate);
        G_FVSlopes[i] = tmp;

        tmp =  (uint32_t)((-G_gpst.infPT[i + 1].pstate + G_gpst.infPT[i].pstate) << EVID_SLOPE_FP_SHIFT)
               / (uint32_t) (G_gpst.infPT[i + 1].evid - G_gpst.infPT[i].evid);
        G_invFVSlopes[i] = tmp;
    }
}

//
//p9_pgpe_pstate_get_evid_from_pstate
//
uint32_t p9_pgpe_pstate_get_evid_from_pstate(uint8_t pstate)
{
    uint32_t ret_evid;

    //Interpolate voltage based on the region PState falls under
    if (pstate > G_gpst.infPT[ULTRA].pstate
        && pstate < G_gpst.infPT[TURBO].pstate)
    {
        ret_evid = (((G_FVSlopes[REGION_TURBO_ULTRA]) *
                     (-pstate + G_gpst.infPT[TURBO].pstate)) >> EVID_SLOPE_FP_SHIFT)
                   + G_gpst.infPT[TURBO].evid;
    }
    else if (pstate > G_gpst.infPT[TURBO].pstate
             && pstate < G_gpst.infPT[NOMINAL].pstate)
    {
        ret_evid = (((G_FVSlopes[REGION_NOMINAL_TURBO]) *
                     (-pstate + G_gpst.infPT[NOMINAL].pstate)) >> EVID_SLOPE_FP_SHIFT)
                   + G_gpst.infPT[NOMINAL].evid;
    }
    else if (pstate > G_gpst.infPT[NOMINAL].pstate
             && pstate < G_gpst.infPT[POWERSAVE].pstate)
    {
        ret_evid = (((G_FVSlopes[REGION_POWERSAVE_NOMINAL]) *
                     (- pstate + G_gpst.infPT[POWERSAVE].pstate)) >> EVID_SLOPE_FP_SHIFT)
                   + G_gpst.infPT[POWERSAVE].evid;
    }
    else
    {
        if (pstate == G_gpst.infPT[ULTRA].pstate)
        {
            ret_evid = G_gpst.infPT[ULTRA].evid;
        }
        else if (pstate == G_gpst.infPT[TURBO].pstate)
        {
            ret_evid = G_gpst.infPT[TURBO].evid;
        }
        else if (pstate == G_gpst.infPT[NOMINAL].pstate)
        {
            ret_evid = G_gpst.infPT[NOMINAL].evid;
        }
        else if (pstate == G_gpst.infPT[POWERSAVE].pstate)
        {
            ret_evid = G_gpst.infPT[POWERSAVE].evid;
        }
        else
        {
            pk_halt();
        }
    }

    return (ret_evid);
}


//
//p9_pgpe_pstate_get_pstate_from_evid
//
uint8_t p9_pgpe_pstate_get_pstate_from_evid(uint16_t evid)
{
    uint32_t ret_ps;

    //Interpolate pstate based on the region voltage falls under
    if (evid < G_gpst.infPT[ULTRA].evid
        && evid > G_gpst.infPT[TURBO].evid)
    {
        ret_ps = -(((G_invFVSlopes[REGION_TURBO_ULTRA]) *
                    (evid - G_gpst.infPT[TURBO].evid)) >> EVID_SLOPE_FP_SHIFT)
                 + G_gpst.infPT[TURBO].pstate;
    }
    else if (evid < G_gpst.infPT[TURBO].evid
             && evid > G_gpst.infPT[NOMINAL].evid)
    {
        ret_ps = -(((G_invFVSlopes[REGION_NOMINAL_TURBO]) *
                    (evid - G_gpst.infPT[NOMINAL].evid)) >> EVID_SLOPE_FP_SHIFT)
                 + G_gpst.infPT[NOMINAL].pstate;
    }
    else if (evid < G_gpst.infPT[NOMINAL].evid
             && evid > G_gpst.infPT[POWERSAVE].evid)
    {
        ret_ps = -(((G_invFVSlopes[REGION_POWERSAVE_NOMINAL]) *
                    (evid - G_gpst.infPT[POWERSAVE].evid)) >> EVID_SLOPE_FP_SHIFT)
                 + G_gpst.infPT[POWERSAVE].pstate;
    }
    else
    {
        if (evid == G_gpst.infPT[ULTRA].evid)
        {
            ret_ps = G_gpst.infPT[ULTRA].pstate;
        }
        else if (evid == G_gpst.infPT[TURBO].evid)
        {
            ret_ps = G_gpst.infPT[TURBO].pstate;
        }
        else if (evid == G_gpst.infPT[NOMINAL].evid)
        {
            ret_ps = G_gpst.infPT[NOMINAL].pstate;
        }
        else if (evid == G_gpst.infPT[POWERSAVE].evid)
        {
            ret_ps = G_gpst.infPT[POWERSAVE].pstate;
        }
        else
        {
            pk_halt();
        }
    }

    return ret_ps;
}

uint8_t p9_pgpe_pstate_get_evid_region(uint32_t evid)
{
    if (evid > G_gpst.infPT[TURBO].evid)
    {
        return REGION_TURBO_ULTRA;
    }
    else if (evid < G_gpst.infPT[NOMINAL].evid)
    {
        return REGION_POWERSAVE_NOMINAL;
    }
    else
    {
        return REGION_NOMINAL_TURBO;
    }
}

//
//p9_pgpe_pstate_update_ext_volt
//
void p9_pgpe_pstate_update_ext_volt()
{
    //Update external voltage
    external_voltage_control_write(G_eVidNext);

#if !EPM_P9_TUNING
    //Do we need the pk_sleep call here now that we only increase voltage
    //by small step-size?
    uint32_t vddDelta;

    if (G_eVidCurr > G_eVidNext)
    {
        vddDelta = G_eVidCurr - G_eVidNext;
    }
    else if(G_eVidCurr < G_eVidNext)
    {
        vddDelta = G_eVidNext - G_eVidCurr;
    }
    else
    {
        vddDelta = 1;
    }

    pk_sleep(PK_NANOSECONDS((vddDelta)));
#endif

    G_eVidCurr = G_eVidNext;
}

//
//frequency_update
//
void p9_pgpe_pstate_freq_update()
{
    int32_t c, q;
    //int rc;
    uint32_t opit4pr;
    uint8_t pendingAcks = 0;
    uint8_t quadPendDBAck[MAX_QUADS];
    pgpe_db0_glb_bcast_t  db0;

    //Send Doorbell0 to every core by doing a multicast operation
    db0.value = 0;
    db0.fields.msg_id = MSGID_DB0_GLOBAL_ACTUAL_BROADCAST;
    db0.fields.global_actual = G_globalNextPS;
    db0.fields.quad0_ps = G_localPSNext[0];
    db0.fields.quad1_ps = G_localPSNext[1];
    db0.fields.quad2_ps = G_localPSNext[2];
    db0.fields.quad3_ps = G_localPSNext[3];
    db0.fields.quad4_ps = G_localPSNext[4];
    db0.fields.quad5_ps = G_localPSNext[5];
    GPE_PUTSCOM(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0.value);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_quadManagerCME[q] != QUAD_MANAGER_NONE)
        {
            quadPendDBAck[q] = 1;
        }
        else
        {
            quadPendDBAck[q] = 0;
        }
    }

    //Wait for all the acks to come
    pendingAcks = 1;

    while (pendingAcks)
    {
        //Process acks
        opit4pr = in32(OCB_OPIT4PRA);

        for (c = 0; c < MAX_CORES; c++)
        {
            if (opit4pr & (0x80000000 >> c))
            {
                if (quadPendDBAck[QUAD_FROM_CORE(c)])
                {
                    quadPendDBAck[QUAD_FROM_CORE(c)] = 0;
                    out32(OCB_OPIT4PRA_CLR, 0x80000000 >> c); //Clear out pending bits
                }
                else
                {
                    pk_halt();
                }
            }
        }

        //Check if any pending left
        pendingAcks = 0;

        for (q = 0; q < MAX_QUADS; q++)
        {
            if (quadPendDBAck[q])
            {
                pendingAcks = 1;
            }
        }
    }

    //Update Current Global and Local PState
    G_globalCurrPS = G_globalNextPS;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_localPSCurr[q] = G_localPSNext[q];
    }
}

//
//Determine which CMEs are quad manager
//
void p9_pgpe_pstate_get_config()
{
    int32_t q, c;
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);

    for (c = 0; c < MAX_CORES; c++)
    {
        if (ccsr.value & (0x80000000 >> c))
        {
            G_coreConf[c] = 1;
        }
        else
        {
            G_coreConf[c] = 0;
        }
    }

    for (q = 0; q < MAX_QUADS; q++)
    {
        //CME0 is quad manager
        if (ccsr.value & (CCSR_CORE_CONFIG_MASK >> (q * CORES_PER_QUAD)))
        {
            G_quadManagerCME[q] = QUAD_MANAGER_CME0;
        }
        else if (ccsr.value & (CCSR_CORE_CONFIG_MASK >> (q * CORES_PER_QUAD + 2)))
        {
            G_quadManagerCME[q] = QUAD_MANAGER_CME1;
        }
        else
        {
            G_quadManagerCME[q] = QUAD_MANAGER_NONE;
        }
    }
}
