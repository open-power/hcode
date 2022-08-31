/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_dds.c $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2022                                                    */
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
#include "pgpe_wov_ocs.h"
#include "pgpe_gppb.h"
#include "p10_scom_eq.H"
#include "p10_scom_eq_9.H"
#include "p10_scom_c.H"
#include "p10_scom_c_d.H"
#include "p10_oci_proc.H"
#include "p10_oci_proc_4.H"
#include "p10_oci_proc_5.H"
#include "pgpe_utils.h"
#include "pgpe_error.h"
#include "pstate_pgpe_qme_api.h"

pgpe_dds_t G_pgpe_dds __attribute__((section (".data_structs")));

//Local Function Prototypes
inline uint32_t pgpe_dds_intp_ins_delay_from_ps(uint32_t ps, uint32_t c, uint32_t r, uint32_t ps_delta);
inline uint32_t pgpe_dds_intp_cal_adj_from_ps(uint32_t ps, uint32_t c);
inline uint32_t pgpe_dds_intp_trip(uint32_t ps, uint32_t c, uint32_t r, uint32_t ps_delta);
inline uint32_t pgpe_dds_intp_large(uint32_t ps, uint32_t c, uint32_t r, uint32_t ps_delta);

void* pgpe_dds_data_addr()
{
    return &G_pgpe_dds;
}

//
//pgpe_dds_init()
//
void pgpe_dds_init(uint32_t pstate)
{
    PK_TRACE_INF("DDS: Init");
    uint32_t q, c, f;

    //1. Write DCCR, FLMR and FMMR values
    //Write DCCR
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_DCCR, 0xF), pgpe_gppb_get_dds_other_droop_count_control());
    /*PK_TRACE("DDS: DCCR=0x%08x%08x", pgpe_gppb_get_dds_other_droop_count_control() >> 32,
             pgpe_gppb_get_dds_other_droop_count_control());*/

    //Write FLMR
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FLMR_RW, 0xF), pgpe_gppb_get_dds_other_ftc_large_droop_mode_reg_setting());
    /*PK_TRACE("DDS: FLMR=0x%08x%08x", pgpe_gppb_get_dds_other_ftc_large_droop_mode_reg_setting() >> 32,
             pgpe_gppb_get_dds_other_ftc_large_droop_mode_reg_setting());*/

    //Write FMMR
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FMMR_RW, 0xF), pgpe_gppb_get_dds_other_ftc_misc_droop_mode_reg_setting());
    /*PK_TRACE("DDS: FMMR=0x%08x%08x", pgpe_gppb_get_dds_other_ftc_misc_droop_mode_reg_setting() >> 32,
             pgpe_gppb_get_dds_other_ftc_misc_droop_mode_reg_setting());*/

    //2. Clear PGPE internal DDS structure state to 0s
    for (q = 0; q < MAX_QUADS; q++)
    {
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            G_pgpe_dds.fdcr[q][c].value = 0;
            G_pgpe_dds.delay[q][c] = 0;
            G_pgpe_dds.delay_prev[q][c] = 0;
            G_pgpe_dds.cal_adjust[q][c] = 0;
            G_pgpe_dds.cal_adjust_prev[q][c] = 0;

            for (f = 0; f < PGPE_DDS_OTHER_MAX; f++)
            {
                G_pgpe_dds.other[f][q][c] = 0;
                G_pgpe_dds.other_prev[f][q][c] = 0;
                G_pgpe_dds.any_other_larger[f][q][c] = 0;
                G_pgpe_dds.any_other_smaller[f][q][c] = 0;
            }
        }

        G_pgpe_dds.ducr[q].value = 0;
        G_pgpe_dds.any_delay_larger[q] = 0;
        G_pgpe_dds.any_delay_smaller[q] = 0;
        G_pgpe_dds.any_cal_later[q] = 0;
        G_pgpe_dds.any_cal_earlier[q] = 0;
    }

    for (f = 0; f < PGPE_DDS_OTHER_MAX; f++)
    {
        G_pgpe_dds.other_chip[f] = 0;
        G_pgpe_dds.other_chip_prev[f] = 0;
        G_pgpe_dds.any_other_larger_chip[f] = 0;
        G_pgpe_dds.any_other_smaller_chip[f] = 0;
    }

    G_pgpe_dds.fdcr_chip.value = 0;

    G_pgpe_dds.init_ttsr_cnt = 0;
    G_pgpe_dds.init_ttsr = 0;

    //3.Pre-DVFS DDS Update.

    uint32_t ccsr;
    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);
    uint32_t ecomask = in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW);
    G_pgpe_dds.core_mask = ccsr & (~ecomask);
    PK_TRACE_INF("DDS: Ecomask=0x%08x, ccsr=0x%08x, core_mask=0x%08x", ecomask, ccsr, G_pgpe_dds.core_mask);

    pgpe_dds_compute(pstate);
    pgpe_dds_update_pre(pstate);

    //4. Send Doorbell2 interrupt to QME
    //uint32_t ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);
    uint64_t data = (uint64_t)MSGID_DB2_DDS_AUTO << 56;
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_Q_WR(QME_DB2), data);

    //5. Collect ACKs from QME(PCB Type2)
    //Read Pending bits
    uint32_t opit2pra;
    uint32_t expAck, ack;
    expAck = 0;

    for(q = 0; q < MAX_QUADS; q++)
    {
        if(ccsr & (0xF0000000 >> (q << 2)))
        {
            expAck |= (0x80000000 >> q);
        }
    }

    PK_TRACE_INF("DDS: ccsr=0x%08x", ccsr);
    PK_TRACE_INF("DDS: expAck=0x%08x", expAck);

    while (expAck)
    {
        opit2pra = in32(TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_RO);

        //Loop through quads
        for (q = 0; q < MAX_QUADS; q++)
        {
            //Read payload
            if ((expAck & QUAD_MASK(q)) && opit2pra & QUAD_MASK(q))
            {
                ack = in32(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR + (q << 3));
                PK_TRACE_INF("DDS: Received Ack from Quad[%u], ack=0x%08x", q, ack);

                if (ack != MSGID_PCB_TYPE2_ACK_AUTO_DDS_SUCCESS)
                {
                    //Take out an error log \\TODO
                }

                expAck = expAck & (~QUAD_MASK(q));
                //PK_TRACE_INF("DDS: quad_mask=0x%08x, ~quad_mask=0x%08x, expAck=0x%08x", QUAD_MASK(q), ~QUAD_MASK(q), expAck);
            }
        }
    }

    {
        // Read TTSR
        uint64_t ttsr;
        PPE_GETSCOM_MC_Q_OR(QME_TTSR, ttsr);

        uint64_t ttsr_masked = ttsr & G_pgpe_wov_ocs.eco_ttsr_mask;
        uint64_t thr_heavy_loss = ttsr_masked & 0X0F0F0F0F0F0F0F0F;

        if (thr_heavy_loss)
        {
            pgpe_opt_set_word(0, (thr_heavy_loss & 0xFFFF0000) >> 32);
            pgpe_opt_set_word(1, (thr_heavy_loss & 0x0000FFFF));
            ppe_trace_op(PGPE_OPT_DDS_INIT_HVY, pgpe_opt_get());

            G_pgpe_dds.init_ttsr_cnt++;
            G_pgpe_dds.init_ttsr = thr_heavy_loss;
        }
    }

    //PK_TRACE("DDS: Init Exit");
}

//
//pgpe_dds_compute()
//
void pgpe_dds_compute(uint32_t pstate)
{
    PK_TRACE_INF("DDS: Compute");
    uint32_t q, c, core;
    //uint32_t ccsr;
    //ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    //Compute delay and cal adjust
    uint32_t region  = pgpe_pstate_get_ps_region(pstate, VPD_PT_SET_BIASED);
    uint32_t ps_delta = pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, region) - pstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_dds.any_delay_larger[q] = 0;
        G_pgpe_dds.any_delay_smaller[q] = 0;

        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            uint32_t core_num = q * CORES_PER_QUAD + c;

            if (G_pgpe_dds.core_mask & CORE_MASK(core_num))
            {
                core = (q << 2 ) + c;
                G_pgpe_dds.delay_prev[q][c] = G_pgpe_dds.delay[q][c];
                G_pgpe_dds.delay[q][c] = pgpe_dds_intp_ins_delay_from_ps(pstate, core, region,
                                         ps_delta) & 0x000000FF;
                G_pgpe_dds.cal_adjust_prev[q][c] = G_pgpe_dds.cal_adjust[q][c];
                G_pgpe_dds.cal_adjust[q][c] = pgpe_dds_intp_cal_adj_from_ps(pstate, core);

                //PK_TRACE_INF("DDS: delay=0x%08x, cal_adjust=0x%08x", G_pgpe_dds.delay[q][c], G_pgpe_dds.cal_adjust[q][c]);
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

                if (pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CORE)
                {
                    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET))
                    {
                        G_pgpe_dds.other_prev[PGPE_DDS_OTHER_TRIP_IDX][q][c] = G_pgpe_dds.other[PGPE_DDS_OTHER_TRIP_IDX][q][c];
                        G_pgpe_dds.other[PGPE_DDS_OTHER_TRIP_IDX][q][c] = pgpe_dds_intp_trip(pstate, core, region, ps_delta);
                        PK_TRACE_DBG("DDS: trip=0x%08x", G_pgpe_dds.other[PGPE_DDS_OTHER_TRIP_IDX][q][c]);
                        G_pgpe_dds.any_other_larger[PGPE_DDS_OTHER_TRIP_IDX][q][c]  = G_pgpe_dds.other[PGPE_DDS_OTHER_TRIP_IDX][q][c] >
                                G_pgpe_dds.other_prev[PGPE_DDS_OTHER_TRIP_IDX][q][c] ? 1 : 0;
                        G_pgpe_dds.any_other_smaller[PGPE_DDS_OTHER_TRIP_IDX][q][c] = G_pgpe_dds.other[PGPE_DDS_OTHER_TRIP_IDX][q][c] <
                                G_pgpe_dds.other_prev[PGPE_DDS_OTHER_TRIP_IDX][q][c] ? 1 : 0;
                    }

                    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_LARGE))
                    {
                        G_pgpe_dds.other_prev[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] = G_pgpe_dds.other[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c];
                        G_pgpe_dds.other[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] = pgpe_dds_intp_large(pstate, core, region, ps_delta);
                        PK_TRACE_DBG("DDS: large=0x%08x", G_pgpe_dds.other[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c]);
                        G_pgpe_dds.any_other_larger[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c]  =
                            G_pgpe_dds.other[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] >
                            G_pgpe_dds.other_prev[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] ? 1 : 0;
                        G_pgpe_dds.any_other_smaller[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] =
                            G_pgpe_dds.other[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] <
                            G_pgpe_dds.other_prev[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] ? 1 : 0;

                    }
                }

            }
        }
    }

    //Trip Offsets
    if (pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CHIP)
    {
        if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET))
        {
            G_pgpe_dds.other_chip_prev[PGPE_DDS_OTHER_TRIP_IDX] = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_TRIP_IDX];
            G_pgpe_dds.other_chip[PGPE_DDS_OTHER_TRIP_IDX] = pgpe_dds_intp_trip(pstate, 0, region, ps_delta);
            G_pgpe_dds.any_other_larger_chip[PGPE_DDS_OTHER_TRIP_IDX] = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_TRIP_IDX] >
                    G_pgpe_dds.other_chip_prev[PGPE_DDS_OTHER_TRIP_IDX] ? 1 : 0;
            G_pgpe_dds.any_other_smaller_chip[PGPE_DDS_OTHER_TRIP_IDX] = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_TRIP_IDX] <
                    G_pgpe_dds.other_chip_prev[PGPE_DDS_OTHER_TRIP_IDX] ? 1 : 0;

            //PK_TRACE("DDS: trip=0x%08x", G_pgpe_dds.other_chip[PGPE_DDS_OTHER_TRIP_IDX]);
        }

        //Large
        if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_LARGE))
        {
            G_pgpe_dds.other_chip_prev[PGPE_DDS_OTHER_LARGE_DROOP_IDX] = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX];
            G_pgpe_dds.other_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX] = pgpe_dds_intp_large(pstate, 0, region, ps_delta);
            G_pgpe_dds.any_other_larger_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX] = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX]
                    > G_pgpe_dds.other_chip_prev[PGPE_DDS_OTHER_LARGE_DROOP_IDX] ? 1 : 0;
            G_pgpe_dds.any_other_smaller_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX] =
                G_pgpe_dds.other_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX] < G_pgpe_dds.other_chip_prev[PGPE_DDS_OTHER_LARGE_DROOP_IDX] ? 1 :
                0;

            //PK_TRACE("DDS: large=0x%08x", G_pgpe_dds.other_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX]);
        }
    }
}

//
//pgpe_dds_update_pre
//
//Note:\TODO The pre and post update function are similar, so it's possible to combine them simply add
//parameters for small differences they might have
void pgpe_dds_update_pre(uint32_t pstate)
{
    PK_TRACE_INF("DDS: Update Pre ");
    uint32_t ducr_upd_needed = 0;
    uint32_t q, c;
    uint32_t update = 0;

    //1. If TripMode=chip and any_trip_larger
    if (pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CHIP)
    {
        if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
            && G_pgpe_dds.any_other_larger_chip[PGPE_DDS_OTHER_TRIP_IDX])
        {
            G_pgpe_dds.fdcr_chip.fields.trip_offset = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_TRIP_IDX];
            update = 1;
        }

        if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_LARGE)
            && G_pgpe_dds.any_other_larger_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX])
        {
            G_pgpe_dds.fdcr_chip.fields.large_droop_detect = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX];
            update = 1;
        }

        if (update)
        {
            //1. FDCR.CPMS_FDCR_SUPPRESS_FTC_UPDATE bit
            G_pgpe_dds.fdcr_chip.fields.control_update_disable = 1;
            G_pgpe_dds.fdcr_chip.fields.suppress_ftc_update = 1;

            //2. Multicast write FDCR
            PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FDCR, 0xF), G_pgpe_dds.fdcr_chip.value);
            /*PK_TRACE("DDS: Chip, Trip Mode FDCR=0x%08x%08x", G_pgpe_dds.fdcr_chip.words.high_order,
                     G_pgpe_dds.fdcr_chip.words.low_order);*/

            //3. ducr_update_needed = true
            ducr_upd_needed = 1;
        }
    }

    //2. for each quad q
    for (q = 0; q < MAX_QUADS; q++)
    {
        //1. for each core c
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            uint32_t core_num = q * CORES_PER_QUAD + c;

            if (G_pgpe_dds.core_mask & CORE_MASK(core_num))
            {
                //1. If TripMode=Core
                if ((pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CORE))
                {
                    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
                        && G_pgpe_dds.any_other_larger[PGPE_DDS_OTHER_TRIP_IDX][q][c] == 1)
                    {
                        G_pgpe_dds.fdcr[q][c].fields.trip_offset = G_pgpe_dds.other[PGPE_DDS_OTHER_TRIP_IDX][q][c];
                        update = 1;
                        PK_TRACE_DBG("DDS: Post Any Larger Trip");
                    }

                    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_LARGE)
                        && G_pgpe_dds.any_other_larger[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] == 1)
                    {
                        G_pgpe_dds.fdcr[q][c].fields.large_droop_detect = G_pgpe_dds.other[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c];
                        update = 1;
                        PK_TRACE_DBG("DDS: Post Any Larger Large");
                    }

                    if(update)
                    {
                        //1. Update to larger trip values in FDCR.data and set FDCR.CPMS_FDCR_SUPPRESS_FTC_UPDATE bit
                        G_pgpe_dds.fdcr[q][c].fields.control_update_disable = 1;
                        G_pgpe_dds.fdcr[q][c].fields.suppress_ftc_update = 1;

                        //2. Unicast write FDCR[c]
                        uint32_t core = 0x8 >> c;
                        PPE_PUTSCOM(PPE_SCOM_ADDR_UC(CPMS_FDCR, q, core), G_pgpe_dds.fdcr[q][c].value);

                        PK_TRACE_DBG("DDS: Pre Core Trip Mode FDCR=0x%08x%08x", G_pgpe_dds.fdcr[q][c].words.high_order,
                                     G_pgpe_dds.fdcr[q][c].words.low_order);
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

    PK_TRACE("DDS: Update Pre Exit");
}

//
//pgpe_dds_update_post
//
//Note:\TODO The pre and post update function are similar, so it's possible to combine them simply add
//parameters for small differences they might have
void pgpe_dds_update_post(uint32_t pstate)
{
    PK_TRACE_INF("DDS: Update Post");

    uint32_t ducr_upd_needed = 0;
    uint32_t q, c;
    uint32_t update = 0;

    //1. If TripMode=chip and any_trip_smaller
    if( pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CHIP)
    {
        if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET) && G_pgpe_dds.any_other_smaller_chip[TRIP_OFFSET])
        {
            G_pgpe_dds.fdcr_chip.fields.trip_offset = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_TRIP_IDX];
            update = 1;
        }

        if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_LARGE)
            && G_pgpe_dds.any_other_smaller_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX])
        {
            G_pgpe_dds.fdcr_chip.fields.large_droop_detect = G_pgpe_dds.other_chip[PGPE_DDS_OTHER_LARGE_DROOP_IDX];
            update = 1;
        }

        if(update)
        {
            //1. update to smaller trip values in FDCR.data and set FDCR.CPMS_FDCR_SUPPRESS_FTC_UPDATE bit
            G_pgpe_dds.fdcr_chip.fields.control_update_disable = 1;
            G_pgpe_dds.fdcr_chip.fields.suppress_ftc_update = 1;

            //2. Multicast write FDCR
            PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FDCR, 0xF), G_pgpe_dds.fdcr_chip.value);

            //3. ducr_update_needed=true
            ducr_upd_needed = 1;
        }
    }

    //2. For each quad q
    for (q = 0; q < MAX_QUADS; q++)
    {
        //1. For each core c
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            if (G_pgpe_dds.core_mask & CORE_MASK(((q << 2) + c)))
            {
                //1. If TripMode=Core
                if (pgpe_gppb_get_dds_trip_mode() == DDS_TRIP_MODE_CORE)
                {
                    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_TRIP_OFFSET)
                        && (G_pgpe_dds.any_other_smaller[PGPE_DDS_OTHER_TRIP_IDX][q][c] == 1))
                    {
                        G_pgpe_dds.fdcr[q][c].fields.trip_offset = G_pgpe_dds.other[PGPE_DDS_OTHER_TRIP_IDX][q][c];
                        update = 1;
                        PK_TRACE_DBG("DDS: Post Any Smaller Trip");
                    }

                    if (pgpe_gppb_get_dds_trip_intp_ctrl(DDS_TRIP_INTP_CTRL_LARGE)
                        && (G_pgpe_dds.any_other_smaller[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c] == 1))
                    {
                        G_pgpe_dds.fdcr[q][c].fields.large_droop_detect = G_pgpe_dds.other[PGPE_DDS_OTHER_LARGE_DROOP_IDX][q][c];
                        update = 1;
                        PK_TRACE_DBG("DDS: Post Any Smaller Large");
                    }

                    if (update)
                    {
                        G_pgpe_dds.fdcr[q][c].fields.control_update_disable = 1;
                        G_pgpe_dds.fdcr[q][c].fields.suppress_ftc_update = 1;

                        //Unicast write FDCR[c]
                        PPE_PUTSCOM(PPE_SCOM_ADDR_UC(CPMS_FDCR, q, (0x8 >> c)), G_pgpe_dds.fdcr[q][c].value);

                        PK_TRACE_DBG("DDS: Post Core Trip Mode FDCR=0x%08x%08x", G_pgpe_dds.fdcr[q][c].words.high_order,
                                     G_pgpe_dds.fdcr[q][c].words.low_order);
                        //ducr_update_needed=true
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



    PK_TRACE("DDS: Update Post Exit");
}


//
//pgpe_dds_poll_done()
//
void pgpe_dds_poll_done()
{
    //Poll for FDCR_UPDATE_IN_PROGRESS being with Multicast READ-OR to all core regions
    //Poll Time: direct, Timeout: 10us with critical error log
    uint64_t data;
    PkMachineContext ctx;

    PPE_GETSCOM_MC_OR(CPMS_CUCR, 0xF, data);

    TIMER_START()

    while(data & BIT64(56))
    {
        //Status should be read and timeout should be detected inside a critical section.
        //Otherwise, FIT interval can result in false timeouts being detected
        pk_critical_section_enter(&ctx);
        PPE_GETSCOM_MC_OR(CPMS_CUCR, 0xF, data); //Read Status

        if (data & BIT64(56))  //If not done check for timeout. Otherwise, we are done.
        {
            TIMER_DELTA()//Compute timebase delta
            TIMER_DETECT_TIMEOUT_US(50);//Detect and set timeout, but take out log outside of critical section
        }

        pk_critical_section_exit(&ctx);

        //If timeout detected, then take out log and go to error state
        if(TIMER_GET_TIMEOUT)
        {
            PK_TRACE("DDS: FDCR_UPDATE_TIMEOUT");
            pgpe_error_handle_fault(PGPE_ERR_CODE_DDS_FDCR_UPDATE_TIMEOUT);
            pgpe_error_state_loop();
        }

    }
}

//
//pgpe_dds_delay()
//
inline uint32_t pgpe_dds_intp_ins_delay_from_ps(uint32_t ps, uint32_t c, uint32_t r, uint32_t ps_delta)
{
    PK_TRACE_DBG("DDS: Intp Delay ps=0x%x, c=%u", ps, c);
    uint32_t delay;

    //Round-up by adding 1/2
    delay = (((pgpe_gppb_get_dds_delay_ps_slope(VPD_PT_SET_BIASED, c, r)) *
              (ps_delta)) >> (DDS_DELAY_SLOPE_FP_SHIFT_12 - 1));

    if (pgpe_gppb_get_dds_delay(c, r) <= pgpe_gppb_get_dds_delay(c, r + 1))
    {
        delay = (pgpe_gppb_get_dds_delay(c, r) << 1) + 1 + delay;
    }
    else
    {
        delay = (pgpe_gppb_get_dds_delay(c, r) << 1) + 1 - delay;
    }

    delay = delay >> 1; //Shift back

    PK_TRACE_DBG("DDS: Intp Ps=%u, Delay r=0x%x, delay=0x%x base_delay=0x%x", ps, r, delay, pgpe_gppb_get_dds_delay(c, r) );
    return delay;
}

//
//pgpe_dds_cal_adjust()
//
inline uint32_t pgpe_dds_intp_cal_adj_from_ps(uint32_t ps, uint32_t c)
{
    uint32_t cal_adj;

    //PK_TRACE("DDS: Intp Cal Adjust ps=0x%x, c=%u", ps, c);
    //determine closest vpd pt
    uint32_t p = pgpe_pstate_get_ps_closest_vpd_pt(ps);
    cal_adj = pgpe_gppb_get_dds_cal_adj(c, p);

    //PK_TRACE("DDS: Intp Cal Adjust p=0x%x, cal_adj=%u", p, cal_adj);

    return cal_adj;
}

//
//pgpe_dds_intp_trip()
//
inline uint32_t pgpe_dds_intp_trip(uint32_t ps, uint32_t c, uint32_t r, uint32_t ps_delta)
{
    uint32_t trip;

    //Round-up by adding 1/2
    trip = (((pgpe_gppb_get_dds_trip_ps_slope(VPD_PT_SET_BIASED, c, r)) *
             (ps_delta)) >> (DDS_SLOPE_FP_SHIFT_6 - 1));

    if (pgpe_gppb_get_dds_trip(c, r) <= pgpe_gppb_get_dds_trip(c, r + 1))
    {
        trip = (pgpe_gppb_get_dds_trip(c, r) << 1) + 1 + trip;
    }
    else
    {
        trip = (pgpe_gppb_get_dds_trip(c, r) << 1) + 1 - trip;
    }

    trip = trip >> 1; //Shift back

    return trip;
}

//
//pgpe_dds_intp_large()
//
inline uint32_t pgpe_dds_intp_large(uint32_t ps, uint32_t c, uint32_t r, uint32_t ps_delta)
{
    uint32_t large;

    //Round-up by adding 1/2
    large = (((pgpe_gppb_get_dds_large_ps_slope(VPD_PT_SET_BIASED, c, r)) *
              (ps_delta )) >> (DDS_SLOPE_FP_SHIFT_6 - 1));

    PK_TRACE_DBG("DDS: Intp Large c=%u, r=0x%x, large=0x%x base_large=0x%x", c, r, large, pgpe_gppb_get_dds_large(c, r));

    if (pgpe_gppb_get_dds_large(c, r) <= pgpe_gppb_get_dds_large(c, r + 1))
    {
        large = (pgpe_gppb_get_dds_large(c, r) << 1) + 1 + large;
    }
    else
    {
        large = (pgpe_gppb_get_dds_large(c, r) << 1) + 1 - large;
    }


    PK_TRACE_DBG("DDS: Intp Large c=%u, r=0x%x, large=0x%x base_large=0x%x", c, r, large, pgpe_gppb_get_dds_large(c, r));
    large = large >> 1; //Shift back

    //PK_TRACE("DDS: Intp Large p=0x%x, cal_adj=%u", p, cal_adj);
    PK_TRACE_DBG("DDS: Intp Large c=%u, r=0x%x, large=0x%x base_large=0x%x", c, r, large, pgpe_gppb_get_dds_large(c, r));

    return large;
}
