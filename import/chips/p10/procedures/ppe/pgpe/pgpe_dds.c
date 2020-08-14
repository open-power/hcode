/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_dds.c $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
#include "p10_scom_c_d.H"
#include "p10_scom_c_2_unused.H"
#include "p10_scom_c_5_unused.H"
#include "p10_oci_proc.H"

pgpe_dds_t G_pgpe_dds __attribute__((section (".data_structs")));

//Local Function Prototypes
uint32_t pgpe_dds_intp_ins_delay_from_ps(uint32_t ps, uint32_t c);
uint32_t pgpe_dds_intp_cal_adj_from_ps(uint32_t ps, uint32_t c);
uint32_t pgpe_dds_intp_trip(uint32_t ps, uint32_t c);
void pgpe_dds_compare_trip_and_delay();

void* pgpe_dds_data_addr()
{
    return &G_pgpe_dds;
}

//
//pgpe_dds_init()
//
void pgpe_dds_init(uint32_t pstate)
{
    uint32_t q, c;

    //1. Write DCCR, FLMR and FMMR values
    //Write DCCR
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_DCCR, 0xF), pgpe_gppb_get_dds_other(droop_count_control));

    //Write FLMR
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FLMR_RW, 0xF), pgpe_gppb_get_dds_other(ftc_large_droop_mode_reg_setting));

    //Write FMMR
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FMMR_RW, 0xF), pgpe_gppb_get_dds_other(ftc_misc_droop_mode_reg_setting));

    //2 Set OTR Special Wake-up (200E0830[0]=1) on all cores
    //RTC:214435 Add timeout
    //\TODO We really should poll for for special wake-up done to make sure all is well
    // especially as this is done via PM Restart. The cores should already be in Special Wake-up
    // in that path but we don't want to make assumptions.
    //
    //The timeout for this check needs to be in the 100ms range as there could possibly
    //be cores in STOP 11 and there could be more than 1 in any given EQ.
    //Polling time should be small (eg 10us) as the done should already set.
    //We don't want a tight polling loop so that the PIB/PCB is not flooded with polling
    //operations.  Also, a 10us latency adder for a Pstate Start operation is not a problem.
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_SPWU_OTR, 0xF), BIT64(0));

    //3. Clear PGPE internal DDS structure state to 0s
    for (q = 0; q < MAX_QUADS; q++)
    {
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            G_pgpe_dds.delay[q][c] = 0;
            G_pgpe_dds.cal_adjust[q][c] = 0;
            G_pgpe_dds.trip[q][c] = 0;
            G_pgpe_dds.fdcr[q][c].value = 0;
            G_pgpe_dds.any_trip_smaller[q][c] = 0;
            G_pgpe_dds.any_trip_larger[q][c] = 0;
        }

        G_pgpe_dds.any_delay_larger[q] = 0;
        G_pgpe_dds.any_delay_smaller[q] = 0;
        G_pgpe_dds.ducr[q].value = 0;
    }

    G_pgpe_dds.any_trip_larger_chip = 0;
    G_pgpe_dds.any_trip_smaller_chip = 0;
    G_pgpe_dds.fdcr_chip.value = 0;

    //4.Pre-DVFS DDS Update.
    pgpe_dds_compute(pstate);
    pgpe_dds_compare_trip_and_delay();
    pgpe_dds_update_pre(pstate);

    //5. Multicast write-CLEAR FDCR[DISABLE](0) = 1
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FDCR_WO_CLEAR, 0xF), BIT64(0));

    //6. Multicast write-OR QME FLAG[DDS Enable] = 1
    PPE_PUTSCOM_MC_Q(QME_FLAGS_WO_OR, BIT64(0));

    //7. Clear OTR Special Wake-up register on all cores
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_SPWU_OTR, 0xF), 0x0);
}

//
//pgpe_dds_compute()
//
void pgpe_dds_compute(uint32_t pstate)
{
    uint32_t q, c, core;
    uint32_t ccsr;
    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    //Compute delay and cal adjust
    for (q = 0; q < MAX_QUADS; q++)
    {
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            if (ccsr & CORE_MASK(((q << 2) + c)))
            {
                core = (q << 2 ) + c;
                G_pgpe_dds.delay_prev[q][c] = G_pgpe_dds.delay[q][c];
                G_pgpe_dds.delay[q][c] = pgpe_dds_intp_ins_delay_from_ps(pgpe_pstate_get(pstate_next), core) & 0x000000FF;
                G_pgpe_dds.cal_adjust_prev[q][c] = G_pgpe_dds.cal_adjust[q][c];
                G_pgpe_dds.cal_adjust[q][c] = pgpe_dds_intp_cal_adj_from_ps(pstate, core);

                if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
                    &&  pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CORE)
                {
                    G_pgpe_dds.trip_prev[q][c] = G_pgpe_dds.trip[q][c];
                    G_pgpe_dds.trip[q][c] = pgpe_dds_intp_trip(pstate, core);
                }
            }
        }
    }

    //Trip Offsets
    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
        && pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CHIP)
    {
        G_pgpe_dds.trip_chip_prev = G_pgpe_dds.trip_chip;
        G_pgpe_dds.trip_chip = pgpe_dds_intp_trip(pstate, MAX_CORES + 1);
    }

    //Compare trip and delay
    pgpe_dds_compare_trip_and_delay();
}

//
//pgpe_dds_compare_trip_and_delay()
//
void pgpe_dds_compare_trip_and_delay()
{
    uint32_t q, c;

    uint32_t ccsr;
    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    for(q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_dds.any_delay_larger[q] = 0;
        G_pgpe_dds.any_delay_smaller[q] = 0;

        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            if (ccsr & CORE_MASK(((q << 2) + c)))
            {
                if (G_pgpe_dds.any_delay_larger[q] == 0)
                {
                    G_pgpe_dds.any_delay_larger[q] = G_pgpe_dds.delay[q][c] > G_pgpe_dds.delay_prev[q][c] ? 1 : 0;
                }

                if (G_pgpe_dds.any_delay_smaller[q] == 0)
                {
                    G_pgpe_dds.any_delay_smaller[q] = G_pgpe_dds.delay[q][c] < G_pgpe_dds.delay_prev[q][c] ? 1 : 0;
                }

                if (G_pgpe_dds.any_cal_later[q] == 0)
                {
                    G_pgpe_dds.any_cal_later[q] = G_pgpe_dds.cal_adjust[q][c] > G_pgpe_dds.cal_adjust_prev[q][c] ? 1 : 0;
                }

                if (G_pgpe_dds.any_cal_earlier[q] == 0)
                {
                    G_pgpe_dds.any_cal_earlier[q] = G_pgpe_dds.cal_adjust[q][c] < G_pgpe_dds.cal_adjust_prev[q][c] ? 1 : 0;
                }

                if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
                    && pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CORE)
                {
                    G_pgpe_dds.any_trip_larger[q][c]  = G_pgpe_dds.trip[q][c] > G_pgpe_dds.trip_prev[q][c] ? 1 : 0;
                    G_pgpe_dds.any_trip_smaller[q][c] = G_pgpe_dds.trip[q][c] < G_pgpe_dds.trip_prev[q][c] ? 1 : 0;
                }
            }
        }
    }

    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
        && pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CHIP)
    {
        G_pgpe_dds.any_trip_larger_chip = G_pgpe_dds.trip_chip > G_pgpe_dds.trip_chip_prev ? 1 : 0;
        G_pgpe_dds.any_trip_smaller_chip = G_pgpe_dds.trip_chip < G_pgpe_dds.trip_chip_prev ? 1 : 0;
    }
}

//
//pgpe_dds_update_pre
//
//Note:\TODO The pre and post update function are similar, so it's possible to combine them simply add
//parameters for small differences they might have
void pgpe_dds_update_pre(uint32_t pstate)
{
    uint32_t ducr_upd_needed = 0;
    uint32_t q, c;
    uint32_t ccsr;
    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    //1. If TripMode=chip and any_trip_larger
    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET) &&
        (pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CHIP)
        && G_pgpe_dds.any_trip_larger)
    {
        //1. Update to larger trip values in FDCR.data and set FDCR.CPMS_FDCR_SUPPRESS_FTC_UPDATE bit
        G_pgpe_dds.fdcr_chip.fields.control_update_disable = 1;
        G_pgpe_dds.fdcr_chip.fields.trip_offset = G_pgpe_dds.trip_chip;
        G_pgpe_dds.fdcr_chip.fields.suppress_ftc_update = 1;

        //2. Multicast write FDCR
        PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FDCR, 0xF), G_pgpe_dds.fdcr_chip.value);

        //3. ducr_update_needed = true
        ducr_upd_needed = 1;
    }

    //2. for each quad q
    for (q = 0; q < MAX_QUADS; q++)
    {
        //1. for each core c
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            if (ccsr & CORE_MASK(((q << 2) + c)))
            {
                //1. If TripMode=Core
                if ((pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CORE))
                {
                    //1. If any_trip_larger[q][c]
                    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET) && G_pgpe_dds.any_trip_larger[q][c] == 1)
                    {
                        //1. Update to larger trip values in FDCR.data and set FDCR.CPMS_FDCR_SUPPRESS_FTC_UPDATE bit
                        G_pgpe_dds.fdcr[q][c].fields.control_update_disable = 1;
                        G_pgpe_dds.fdcr[q][c].fields.trip_offset = G_pgpe_dds.trip[q][c];
                        G_pgpe_dds.fdcr[q][c].fields.suppress_ftc_update = 1;

                        //2. Unicast write FDCR[c]
                        uint32_t core = 0x8 >> c;
                        PPE_PUTSCOM(PPE_SCOM_ADDR_UC(CPMS_FDCR, q, core), G_pgpe_dds.fdcr[q][c].value);

                        //3. ducr_update_needed=true
                        ducr_upd_needed = 1;
                    }
                }
            }
        }

        //2. If any_delay_larger[q]
        if (G_pgpe_dds.any_delay_larger[q] || G_pgpe_dds.any_cal_earlier[q])
        {
            //1 update to smaller delay values in DUCR[q].data
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c0 = G_pgpe_dds.delay[q][0];
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c1 = G_pgpe_dds.delay[q][1];
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c2 = G_pgpe_dds.delay[q][2];
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c3 = G_pgpe_dds.delay[q][3];

            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c0 = G_pgpe_dds.cal_adjust[q][0];
            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c1 = G_pgpe_dds.cal_adjust[q][1];
            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c2 = G_pgpe_dds.cal_adjust[q][2];
            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c3 = G_pgpe_dds.cal_adjust[q][3];
            G_pgpe_dds.ducr[q].fields.core_update_enable = 0xF; //HW automatically handles the PARTIAL GOOD cores

            //2 ducr_update_needed=true
            ducr_upd_needed = 1;
        }

        //3. if ducr_update_needed, write to per quad DUCR. This commits the updated values to hardware
        if (ducr_upd_needed)
        {
            PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_DUCR, q), G_pgpe_dds.ducr[q].value);
        }
    }
}

//
//pgpe_dds_update_post
//
//Note:\TODO The pre and post update function are similar, so it's possible to combine them simply add
//parameters for small differences they might have
void pgpe_dds_update_post(uint32_t pstate)
{
    uint32_t ducr_upd_needed = 0;
    uint32_t q, c;
    uint32_t ccsr;
    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    //1. If TripMode=chip and any_trip_smaller
    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
        && (pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CHIP) && G_pgpe_dds.any_trip_smaller)
    {
        //1. update to smaller trip values in FDCR.data and set FDCR.CPMS_FDCR_SUPPRESS_FTC_UPDATE bit
        G_pgpe_dds.fdcr_chip.fields.control_update_disable = 1;
        G_pgpe_dds.fdcr_chip.fields.trip_offset = G_pgpe_dds.trip_chip;
        G_pgpe_dds.fdcr_chip.fields.suppress_ftc_update = 1;

        //2. Multicast write FDCR
        PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FDCR, 0xF), G_pgpe_dds.fdcr_chip.value);

        //3. ducr_update_needed=true
        ducr_upd_needed = 1;
    }

    //2. For each quad q
    for (q = 0; q < MAX_QUADS; q++)
    {
        //1. For each core c
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            if (ccsr & CORE_MASK(((q << 2) + c)))
            {
                //1. If TripMode=Core
                if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
                    && (pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CORE))
                {
                    //1. if any_trip_smaller[q][c]
                    if (G_pgpe_dds.any_trip_smaller[q][c] == 1)
                    {
                        //1. update to smaller trip values in FDCR.data and set FDCR.CPMS_FDCR_SUPPRESS_FTC_UPDATE bit
                        G_pgpe_dds.fdcr[q][c].fields.control_update_disable = 1;
                        G_pgpe_dds.fdcr[q][c].fields.trip_offset = G_pgpe_dds.trip[q][c];
                        G_pgpe_dds.fdcr[q][c].fields.suppress_ftc_update = 1;

                        //2. Unicast write FDCR[c]
                        PPE_PUTSCOM(PPE_SCOM_ADDR_UC(CPMS_FDCR, q, (0x8 >> c)), G_pgpe_dds.fdcr[q][c].value);

                        //3. ducr_update_needed=true
                        ducr_upd_needed = 1;
                    }
                }
            }
        }

        //2. if any_delay_smaller[q]
        if (G_pgpe_dds.any_delay_smaller[q] || G_pgpe_dds.any_cal_later[q])
        {
            //1. update to smaller delay values in DUCR[q].data
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c0 = G_pgpe_dds.delay[q][0];
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c1 = G_pgpe_dds.delay[q][1];
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c2 = G_pgpe_dds.delay[q][2];
            G_pgpe_dds.ducr[q].fields.fdcr_delay_c3 = G_pgpe_dds.delay[q][3];
            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c0 = G_pgpe_dds.cal_adjust[q][0];
            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c1 = G_pgpe_dds.cal_adjust[q][1];
            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c2 = G_pgpe_dds.cal_adjust[q][2];
            G_pgpe_dds.ducr[q].fields.fdcr_cal_adjust_c3 = G_pgpe_dds.cal_adjust[q][3];
            G_pgpe_dds.ducr[q].fields.core_update_enable = 0xF; //HW automatically handles the PARTIAL GOOD cores
            //2. ducr_update_needed=true
            ducr_upd_needed = 1;
        }

        //3. if ducr_update_needed write to per quad DUCR. This commits the updated values to HW
        if(ducr_upd_needed )
        {
            PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_DUCR, q), G_pgpe_dds.ducr[q].value);
        }
    }
}


//
//pgpe_dds_poll_done()
//
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
    uint32_t r  = pgpe_pstate_get_ps_region(ps, VPD_PT_SET_RAW);

    //Round-up by adding 1/2
    delay = (((pgpe_gppb_get_dds_delay_ps_slope(VPD_PT_SET_RAW, c, r)) *
              (-ps + pgpe_gppb_get_ops_ps(VPD_PT_SET_RAW, r))) >> (DDS_DELAY_SLOPE_FP_SHIFT_12 - 1)) +
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

//
//pgpe_dds_intp_trip()
//
uint32_t pgpe_dds_intp_trip(uint32_t ps, uint32_t c)
{
    uint32_t trip;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, VPD_PT_SET_RAW);

    //Round-up by adding 1/2
    trip = (((pgpe_gppb_get_dds_trip_ps_slope(VPD_PT_SET_RAW, c, r)) *
             (-ps + pgpe_gppb_get_ops_ps(VPD_PT_SET_RAW, r))) >> (DDS_SLOPE_FP_SHIFT_6 - 1)) +
           (pgpe_gppb_get_dds_trip(c, r) << 1) + 1;

    trip = trip >> 1; //Shift back
    return trip;
}