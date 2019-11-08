/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_dds.c $             */
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
#include "pgpe.h"
#include "pgpe_dds.h"
#include "pgpe_pstate.h"
#include "pgpe_gppb.h"
#include "p10_scom_eq.H"
#include "p10_scom_c.H"
#include "p10_oci_proc.H"


//Local Function Prototypes
uint32_t pgpe_dds_intp_ins_delay_from_ps(uint32_t ps, uint32_t c);
uint32_t pgpe_dds_intp_cal_adj_from_ps(uint32_t ps, uint32_t c);

//
//pgpe_dds_init()
//
void pgpe_dds_init()
{
    //\todo
    //Determine if DDS is enabled and what level(PROTECT/DETECT)
}

//
//pgpe_dds_update()
//
void pgpe_dds_update(uint32_t pstate)
{
    uint64_t ducr;
    uint32_t delay_shift, cal_shift;
    uint32_t q, c;
    uint32_t cfg_cnt;
    uint32_t ccsr;

    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    for (q = 0; q < MAX_QUADS; q++)
    {
        ducr = 0xF00000;    //Core Enable for all 4 cores in the quad
        delay_shift = 56;
        cal_shift = 30;

        cfg_cnt = 0;

        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            if (ccsr & CORE_MASK(c))
            {
                ducr |= (((uint64_t)pgpe_dds_intp_ins_delay_from_ps(pgpe_pstate_get(pstate_next), c) & 0x000000FF) << delay_shift);
                ducr |= (pgpe_dds_intp_cal_adj_from_ps(pgpe_pstate_get(pstate_next), c) & 0x00000003) << (cal_shift);
                delay_shift -= 8;
                cal_shift = -2;
                cfg_cnt++;
            }
        }

        //Write DUCR only if atleast one core is configured in this quad
        if (cfg_cnt)
        {
            uint32_t addr = PPE_SCOM_ADDR_UC_Q(QME_DUCR, q);
            PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_DUCR, q), ducr);
            PK_TRACE("DDS: ducr[%u]=0x%08x%08x,addr=0x%x", q, ducr >> 32, ducr & 0xFFFFFFFF, addr);
        }
    }
}

void pgpe_dds_poll_done()
{
    //Poll for FDCR_UPDATE_IN_PROGRESS being with Multicast READ-OR to all core regions
    //Poll Time: direct, Timeout: 10us with critical error log
    uint64_t data;

    PPE_GETSCOM_MC_OR(CPMS_CUCR, 0xF, data);

    while(data & BIT64(56))   //todo: Timeout and take critical error log
    {
        PPE_GETSCOM_MC_OR(CPMS_CUCR, 0xF, data);
    }
}
//
//pgpe_dds_delay()
//
uint32_t pgpe_dds_intp_ins_delay_from_ps(uint32_t ps, uint32_t c)
{
    uint32_t delay;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, VPD_PT_SET_BIASED);

    //Round-up by adding 1/2
    delay = (((pgpe_gppb_get_dds_delay_ps_slope(VPD_PT_SET_BIASED, c, r)) *
              (-ps + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, r))) >> (DDS_DELAY_SLOPE_FP_SHIFT_12 - 1)) +
            (pgpe_gppb_get_dds_delay(c, r) << 1) + 1;

    delay = delay >> 1; //Shift back

    return delay;
}

//
//pgpe_dds_cal_adjust()
//
uint32_t pgpe_dds_intp_cal_adj_from_ps(uint32_t ps, uint32_t c)
{
    uint32_t cal_adj;

    //determine closest vpd pt
    uint32_t p = pgpe_pstate_get_ps_vpd_pt(ps);
    cal_adj = pgpe_gppb_get_dds_cal_adj(c, p);

    return cal_adj;
}


