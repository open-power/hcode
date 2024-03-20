/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_process.c $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2024                                                    */
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
#include "pgpe_event_process.h"
#include "pgpe_event_table.h"
#include "pgpe_occ.h"
#include "pgpe_pstate.h"
#include "pgpe_header.h"
#include "pgpe_dpll.h"
#include "pgpe_gppb.h"
#include "pgpe_avsbus_driver.h"
#include "p10_oci_proc_6.H"
#include "p10_oci_proc_7.H"
#include "p10_scom_eq_7.H"
#include "p10_scom_eq_3.H"
#include "p10_scom_eq_b.H"
#include "p10_scom_c_4.H"
#include "p10_scom_proc_a.H"
#include "p10_scom_proc_b.H"
#include "pgpe_resclk.h"
#include "pgpe_thr_ctrl.h"
#include "pgpe_wov_ocs.h"
#include "pgpe_dds.h"
#include "pgpe_error.h"
#include "errldefs.h"
#include "errlutil.h"
#include "p10_scom_proc_9.H"

extern  uint64_t  g_oimr_override;

//Local Functions
void pgpe_process_clip_update_post_actuate();
uint32_t pgpe_process_wof_enable();
uint32_t pgpe_process_wof_disable();
void pgpe_process_wof_ctrl_post_actuate();
void pgpe_process_wof_vrt_post_actuate();


void pgpe_process_pstate_start_stop(void* eargs)
{
    PK_TRACE_INF("PEP: PS Start Stop");

    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    //Start
    if (args->action == PGPE_ACTION_PSTATE_START)
    {
        //If NOT immediate mode, then process this IPC. Otherwise, we ACK back with success
        if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
        {

            //Check for PMCR onwer validity
            if ((args->pmcr_owner == PMCR_OWNER_HOST) ||
                (args->pmcr_owner == PMCR_OWNER_OCC)  ||
                (args->pmcr_owner == PMCR_OWNER_CHAR))
            {
                dpll_mode_t dpll_mode = pgpe_dpll_get_mode();
                pgpe_opt_set_word(0, 0);
                pgpe_opt_set_byte(0, ((uint8_t)args->pmcr_owner) + 0x1);
                pgpe_opt_set_byte(1, pgpe_pstate_get(pstate_curr));
                pgpe_opt_set_byte(2, PGPE_OPT_START_STOP_SRC_IPC);
                pgpe_opt_set_byte(3, (uint8_t)dpll_mode);
                ppe_trace_op(PGPE_OPT_START_STOP, pgpe_opt_get());

                //If pstate is NOT enabled, run pstate start protocol.
                //Otherwise, only update owner
                if(!pgpe_pstate_is_pstate_enabled())
                {
                    pgpe_process_pstate_start();
                }

                pgpe_process_set_pmcr_owner(args->pmcr_owner);

            }
            else
            {
                PK_TRACE_ERR("PEP: Invalid PMCR Owner");
                args->msg_cb.rc = PGPE_RC_INVALID_PMCR_OWNER;
                pgpe_error_info_log(PGPE_ERR_CODE_PGPE_INVALID_PMCR_OWNER);
                pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_INVALID_PMCR_OWNER);
            }
        }
        else
        {
            PK_TRACE("PEP: PS Start Imm Mode");
            pgpe_pstate_set(pstate_status, PSTATE_STATUS_ENABLED);
        }

    }
    //Stop
    else
    {
        //If NOT immediate mode, then process this IPC. Otherwise, we ACK back with success
        if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
        {
            pgpe_opt_set_word(0, 0);
            pgpe_opt_set_byte(1, pgpe_pstate_get(pstate_curr));
            pgpe_opt_set_byte(2, PGPE_OPT_START_STOP_SRC_IPC);
            ppe_trace_op(PGPE_OPT_START_STOP, pgpe_opt_get());

            //Only run Pstate Stop protocol if Pstate is enabled.
            //Otherwise, just ACK back
            if(pgpe_pstate_is_pstate_enabled())
            {
                pgpe_process_pstate_stop();
            }
            else
            {
                //The operation is effectively a nop, so we return a good RC to OCC.
                //we create an info log
                pgpe_error_info_log(PGPE_ERR_CODE_PGPE_PSTATE_STOP_IN_PSTATE_STOPPED);
                pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_PSTATE_STOP_IN_PSTATE_STOPPED);
            }
        }
        else
        {
            PK_TRACE("PEP: PS Stop Imm Mode");
            pgpe_pstate_set(pstate_status, PSTATE_STATUS_DISABLED);
        }
    }


    pgpe_event_tbl_set_status(EV_IPC_PSTATE_START_STOP, EVENT_INACTIVE);
    pgpe_occ_send_ipc_ack_cmd(cmd);
    ppe_trace_op(PGPE_OPT_START_STOP_ACK, 0);
}

void pgpe_process_pstate_start()
{
    PK_TRACE_INF("PEP: PS Start");
    uint32_t sync_pstate;
    uint32_t voltage, vcs_before_vdd = 0;
    int32_t move_frequency;
    dpll_mode_t dpll_mode;
    int32_t delta_mv;

    //1.Set slewrate
    pgpe_dpll_set_slewrate(0x4, 0x4);
    pgpe_dpll_clear_dpll_lock_sel();

    //2. Determine the highest pstate that matches with the read DPLL frequency
    //Read DPLL frequency
    dpll_stat_t dpll;
    dpll.value = pgpe_dpll_get_dpll_stat();

    if (dpll.fields.freqout > pgpe_gppb_get_dpll_pstate0_value())
    {
        sync_pstate = 0;
        move_frequency = -1;
    }
    else
    {
        sync_pstate = pgpe_gppb_get_dpll_pstate0_value() - dpll.fields.freqout;
        move_frequency = 0;
    }

    dpll_mode = pgpe_dpll_get_mode();
    PK_TRACE_INF("PEP: DPLL=0x%x DPLL0=0x%x Mode=%u, syncPS=0x%x", dpll.fields.freqout,
                 pgpe_gppb_get_dpll_pstate0_value(), dpll_mode, sync_pstate);

    //3. Clip the pstate and determine the pstate closest to the frequency read
    if (sync_pstate < pgpe_pstate_get(clip_min))
    {
        sync_pstate = pgpe_pstate_get(clip_min);
        PK_TRACE_INF("PEP: sync_ps < clip_min=0x%x, setting sync_ps=0x%x", pgpe_pstate_get(clip_min), sync_pstate);
        move_frequency = -1;
    }

    uint32_t clip_max = pgpe_pstate_get(clip_max) < pgpe_pstate_get(pstate_safe) ?
                        pgpe_pstate_get(clip_max) : pgpe_pstate_get(pstate_safe);

    if (sync_pstate > clip_max)
    {
        sync_pstate = clip_max;
        PK_TRACE_INF("PEP: sync_ps > clip_max=0x%x, setting sync_ps=0x%x", clip_max, sync_pstate);
        move_frequency = 1;
    }

    pgpe_pstate_set(pstate_target, sync_pstate);
    pgpe_pstate_set(pstate_next, sync_pstate);

    //4. Read the external VDD and VCS
    pgpe_avsbus_voltage_read(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                             pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                             &voltage, RUNTIME_RAIL_VDD);
    pgpe_pstate_set(vdd_curr_ext, voltage);
    pgpe_avsbus_voltage_read(pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num(),
                             pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail(),
                             &voltage, RUNTIME_RAIL_VCS);
    pgpe_pstate_set(vcs_curr_ext, voltage);

    PK_TRACE_INF("PEP: Read vdd=%u vcs=%u", pgpe_pstate_get(vdd_curr_ext), pgpe_pstate_get(vcs_curr_ext));

    //5. If frequency moving down, then adjust frequency
    if (move_frequency < 0 )
    {
        //Write new frequency
        pgpe_dpll_write_dpll_freq_ps(pgpe_pstate_get(pstate_next));

        //Switch DPLL mode to 2
        if (dpll_mode == DPLL_MODE_1)
        {
            pgpe_dpll_set_mode(DPLL_MODE_2);
        }
    }


    //6. Determine external VRM set points for sync pstate taking into account the
    //system design parameters
    pgpe_pstate_set(vdd_next, pgpe_pstate_intp_vdd_from_ps(pgpe_pstate_get(pstate_next),
                    VPD_PT_SET_BIASED) ); //\todo use correct format for scale
    pgpe_pstate_set(vcs_next, pgpe_pstate_intp_vcs_from_ps(pgpe_pstate_get(pstate_next),
                    VPD_PT_SET_BIASED) );//\todo use correct format for scale
    pgpe_pstate_set(vdd_next_uplift, pgpe_pstate_intp_vddup_from_ps(pgpe_pstate_get(pstate_next), VPD_PT_SET_BIASED,
                    G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6);
    pgpe_pstate_set(vcs_next_uplift, pgpe_pstate_intp_vcsup_from_ps(pgpe_pstate_get(pstate_next), VPD_PT_SET_BIASED,
                    G_pgpe_pstate.vratio_vcs_loadline_64th) >> 6);
    pgpe_pstate_set(vdd_next_ext, pgpe_pstate_get(vdd_next) + pgpe_pstate_get(vdd_next_uplift));
    pgpe_pstate_set(vcs_next_ext, pgpe_pstate_get(vcs_next) + pgpe_pstate_get(vcs_next_uplift));

    PK_TRACE_INF("PEP: vdd_next=%u vdd_next_up=%u, vdd_next_ext=%u",
                 pgpe_pstate_get(vdd_next),
                 pgpe_pstate_get(vdd_next_uplift),
                 pgpe_pstate_get(vdd_next_ext));
    PK_TRACE_INF("PEP: vcs_next=%u vcs_next_up=%u, vcs_next_ext=%u",
                 pgpe_pstate_get(vcs_next),
                 pgpe_pstate_get(vcs_next_uplift),
                 pgpe_pstate_get(vcs_next_ext));

    //7. Perform voltage adjustment
    //If new external VRM(VDD and VCS) set points different from present value, then
    //move VDD and/or VCS
    if ((pgpe_pstate_get(vdd_curr_ext) > pgpe_pstate_get(vdd_next_ext))
        && (pgpe_pstate_get(vcs_curr_ext) > pgpe_pstate_get(vcs_next_ext)))
    {
        vcs_before_vdd = 0;
    }
    else
    {
        vcs_before_vdd = 1;
    }

    if (pgpe_pstate_get(vdd_next_ext) <= pgpe_gppb_get_array_write_vdd_mv())
    {
        PPE_PUTSCOM_MC_Q(NET_CTRL0_RW_WOR, BIT64(NET_CTRL0_ARRAY_WRITE_ASSIST_EN));
    }

    if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_STATIC_VOLTAGE_ENABLE))
    {
        // As the voltages read may not have been from a Pstate (eg during boot),
        // we'll use that voltage anyway for the delta calcuation as it's the best
        // we have.
        if(vcs_before_vdd)
        {
            delta_mv = G_pgpe_pstate.vcs_next - G_pgpe_pstate.vcs_curr_ext;
            PK_TRACE_INF("PEP: Pstate start VCS first delta %d, next %d curr %d",
                         delta_mv, G_pgpe_pstate.vcs_next, G_pgpe_pstate.vcs_curr);
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail(),
                                      G_pgpe_pstate.vcs_next_ext,
                                      delta_mv,
                                      RUNTIME_RAIL_VCS);

            delta_mv = G_pgpe_pstate.vdd_next - G_pgpe_pstate.vdd_curr_ext;
            PK_TRACE_INF("PEP: Pstate start VDD first delta %d, next %d curr %d",
                         delta_mv, G_pgpe_pstate.vdd_next, G_pgpe_pstate.vdd_curr);
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                                      G_pgpe_pstate.vdd_next_ext,
                                      delta_mv,
                                      RUNTIME_RAIL_VDD);
        }
        else
        {
            delta_mv = G_pgpe_pstate.vdd_next - G_pgpe_pstate.vdd_curr_ext;
            PK_TRACE_INF("PEP: Pstate start VDD first delta %d, next %d curr %d",
                         delta_mv, G_pgpe_pstate.vdd_next, G_pgpe_pstate.vdd_curr);
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                                      G_pgpe_pstate.vdd_next_ext,
                                      delta_mv,
                                      RUNTIME_RAIL_VDD);

            delta_mv = G_pgpe_pstate.vcs_next - G_pgpe_pstate.vcs_curr_ext;
            PK_TRACE_INF("PEP: Pstate start VCS first delta %d, next %d curr %d",
                         delta_mv, G_pgpe_pstate.vcs_next, G_pgpe_pstate.vcs_curr);
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail(),
                                      G_pgpe_pstate.vcs_next_ext,
                                      delta_mv,
                                      RUNTIME_RAIL_VCS);
        }
    }

    //Set initial power_proxy_scale
    cpms_dpcr dpcr;
    dpcr.value = 0;
    uint32_t power_proxy_scale_init;
    uint32_t x = G_pgpe_pstate.vdd_next * G_pgpe_pstate.vdd_next;
    //X>>8 minus X>>11 minus X>>13 plus (X>>7)&0x1 plus (X>>10)&0x1 plus (X>>12)&0x1   // approximate a divide by 295
    power_proxy_scale_init =  (x >> 8) - (x >> 11) - (x >> 13) + ((x >> 7) & 0x1) + ((x >> 10) & 0x1) + ((x >> 12) & 0x1);

    dpcr.fields.proxy_scale_factor = power_proxy_scale_init;
    PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);
    pgpe_pstate_set(power_proxy_scale, power_proxy_scale_init);

    if (pgpe_pstate_get(vdd_next_ext) > pgpe_gppb_get_array_write_vdd_mv())
    {
        PPE_PUTSCOM_MC_Q(NET_CTRL0_RW_WAND, ~BIT64(NET_CTRL0_ARRAY_WRITE_ASSIST_EN));
    }

    //8. If frequency moving up, then adjust frequency
    if (move_frequency > 0 )
    {
        pgpe_dpll_write_dpll_freq_ps(pgpe_pstate_get(pstate_next));

        //Switch DPLL mode to 2
        if (dpll_mode == DPLL_MODE_1)
        {
            pgpe_dpll_set_mode(DPLL_MODE_2);
        }
    }

    pgpe_pstate_update_vdd_vcs_ps(); //Set current equal to next

    //Write PMSR
    pgpe_pstate_pmsr_updt();
    pgpe_pstate_pmsr_write();

    //9. Enable resonant clocks
    pgpe_resclk_enable(pgpe_pstate_get(pstate_curr));

    //10. Switch to DPLL Mode 4 if DDS is enabled
    uint32_t cnt = 0;

    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_DDS_ENABLE))
    {
        pgpe_dds_init(pgpe_pstate_get(pstate_curr));

        if ((pgpe_gppb_get_pgpe_flags(PGPE_FLAG_DDS_SLEW_MODE) == DDS_MODE_SLEW) && dpll_mode == DPLL_MODE_2)
        {
            //1. Checks that flock is asserted (NEST_DPLL_STAT(lock)[bit 63].
            // Poll for 1ms; if timeout, critical error log
            for (cnt = 0; cnt < PLL_LOCK_TIMEOUT_COUNT; ++cnt) //TODO Update Timer Count
            {
                if ((pgpe_dpll_get_dpll_stat() & BIT64(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT_LOCK)) == 1)
                {
                    break;
                }
            }

            if (cnt == PLL_LOCK_TIMEOUT_COUNT)
            {
                //\TODO Jump to the error routine(take out error log, etc)
                //and remove the IOTA_PANIC call below.
            }

            //2. Write NEST.REGS.DPLL_ECHAR[INVERTED_DYNAMIC_ENCODE_INJECT] (61:63) to
            //   001 to have the DDS inputs reflect 110 so as to allow the DPPL to respond to DDS droops
            //   but not allow for any overclocking. Only needed for mode 4
            PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_ECHAR,
                        BITS64(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_ECHAR_INVERTED_DYNAMIC_ENCODE_INJECT,
                               TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_ECHAR_INVERTED_DYNAMIC_ENCODE_INJECT_LEN));

            //3. Move to Mode 4 by setting dynamic slew mode (25) in DPLL_CTRL
            pgpe_dpll_set_mode(DPLL_MODE_4);

            //4. Wait for at least 52.6ns (7 refclks @ 7.5ns (133MHz)) for flock to assert
            //SCOM should complete in roughly 50-70ns, so in ideal case the first SCOM read of
            //DPLL_STAT should have STAT_LOCK bit set. In case, it isn't, then we keep reading and
            //eventually timeout when DPLL_STAT has been read 8 times(~400-500ns), and STAT_LOCK bit
            //is still not set.pgp
            uint32_t cnt = 0;

            for (cnt = 0; cnt < PLL_LOCK_TIMEOUT_COUNT; ++cnt)
            {
                if ((pgpe_dpll_get_dpll_stat() & BIT64(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT_LOCK)) == 1)
                {
                    break;
                }
            }

            if (cnt == PLL_LOCK_TIMEOUT_COUNT)
            {
                //\TODO Jump to the error routine(take out error log, etc)
                //and remove the IOTA_PANIC call below.
            }
        }
    }

    //Enable WOV OCS
    pgpe_wov_ocs_enable();

    //Change pstate status to START
    pgpe_pstate_set(pstate_status, PSTATE_STATUS_ENABLED);

    //Set OCCFLG2[PSTATE_PROTOCOL_ACTIVE]
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR, BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE));

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
            ppe_trace_op(PGPE_OPT_PSTATE_START_HVY, pgpe_opt_get());

            G_pgpe_pstate.start_ttsr_cnt++;
            G_pgpe_pstate.start_ttsr = thr_heavy_loss;
        }
    }
    /*
     *         PK_TRACE_INF("Halting on Pstate Start");
     *         IOTA_PANIC(PGPE_XSTOP_GPE2)
     */

}

void pgpe_process_pstate_stop()
{
    PK_TRACE_INF("PEP: PS Stop");

    //Disable PCB Type1(PMCR)
    out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_OR, BIT32(17));//Disable PCB_Type1

    //Disable resonant clocks
    pgpe_resclk_disable();

    //DDS left untouched

    //Disable WOF
    if (pgpe_pstate_is_wof_enabled())
    {
        pgpe_process_wof_disable();
    }

    //Disable WOV and OCS
    pgpe_wov_ocs_disable();

    //Change pstate status to STOP
    pgpe_pstate_set(pstate_status, PSTATE_STATUS_DISABLED);

    //Clear OCCFLG2[PSTATE_PROTOCOL_ACTIVE]
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_CLEAR, BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE));
}

void pgpe_process_set_pmcr_owner(PMCR_OWNER owner)
{

    PK_TRACE_INF("PEP: PS Owner %u", owner);
    //Set the PMCR owner
    pgpe_pstate_set(pmcr_owner, owner);

    //Enable/Disable PCB_Type1(PMCR Request Processing)
    if ((owner == PMCR_OWNER_HOST) || (owner == PMCR_OWNER_CHAR))
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_CLEAR, BIT32(17));//Enable PCB_Type1
        g_oimr_override &=  ~BIT64(17);
        PPE_PUTSCOM_MC_Q(QME_QMCR_SCOM2, BIT64(8)); //Enable AUTO_PMCR_UPDATE

        //Enable SCOM writes to PMCR if characterization mode. Otherwise, core-shifter updates
        if ((pgpe_pstate_get(pmcr_owner) == PMCR_OWNER_CHAR))
        {
            PPE_PUTSCOM_MC_Q(QME_QMCR_SCOM2, BIT64(0));
        }
        else
        {
            PPE_PUTSCOM_MC_Q(QME_QMCR_WO_CLEAR, BIT64(0));
        }
    }
    else
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_OR, BIT32(17));//Disable PCB_Type1
        g_oimr_override |=  BIT64(17);
        PPE_PUTSCOM_MC_Q(QME_QMCR_WO_CLEAR, BIT64(8)); //Disable AUTO_PMCR_UPDATE
    }
}

void pgpe_process_clip_update(void* eargs)
{
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    PK_TRACE_INF("PEP: Clip Updt");

    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_byte(0, args->ps_val_clip_max);
    pgpe_opt_set_byte(1, args->ps_val_clip_min);
    ppe_trace_op(PGPE_OPT_CLIP_UPDT, pgpe_opt_get());


    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        pgpe_pstate_set(clip_min, args->ps_val_clip_max);
        pgpe_pstate_set(clip_max, args->ps_val_clip_min);

        PK_TRACE_INF("PEP: Clip Min(high_freq)=0x%x Clip_Max(low_freq)=0x%x", args->ps_val_clip_max, args->ps_val_clip_min);
        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
        pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_PENDING_ACTUATION);

        if (pgpe_thr_ctrl_is_enabled())
        {
            pgpe_pstate_set_throttle_clip();
            pgpe_pstate_throttle_compute();
        }
    }
    else
    {
        pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        ppe_trace_op(PGPE_OPT_CLIP_UPDT_ACK, 0);
    }
}

void pgpe_process_clip_update_w_ack(void* eargs)
{
    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    PK_TRACE_INF("PEP: Clip Updt w/ack");

    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_byte(0, args->ps_val_clip_max);
    pgpe_opt_set_byte(1, args->ps_val_clip_min);
    ppe_trace_op(PGPE_OPT_CLIP_UPDT, pgpe_opt_get());

    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        pgpe_pstate_set(clip_min, args->ps_val_clip_max);
        pgpe_pstate_set(clip_max, args->ps_val_clip_min);

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
    }

    pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
    pgpe_occ_send_ipc_ack_cmd(cmd);
    ppe_trace_op(PGPE_OPT_CLIP_UPDT_ACK, 0);
}

void pgpe_process_clip_update_post_actuate()
{
    PK_TRACE_INF("PEP: Clip Updt Post Actuate");

    if(pgpe_pstate_is_clip_bounded())
    {
        PK_TRACE_INF("PEP: PS Clips Bounded");

        /*
        if (pgpe_thr_ctrl_is_enabled())
        {
            uint32_t pstate = (pgpe_pstate_get(clip_min) >= pgpe_pstate_get(pstate_safe)) ? pgpe_pstate_get(
                                  clip_min) : pgpe_pstate_get(pstate_safe);

            if (pgpe_pstate_is_wof_enabled())
            {
                pgpe_thr_ctrl_update(pstate);
            }
            else
            {
                uint32_t overrage = pstate - pgpe_pstate_get(pstate_safe);
                PK_TRACE_INF("PEP: Direct Thr/WCOR Updt over=0x%x, pstate=0x%x,psafe=0x%x", overrage, pstate,
                             pgpe_pstate_get(pstate_safe));
                pgpe_thr_ctrl_set_ceff_ovr_idx(overrage);
                pgpe_thr_ctrl_write_wcor();
            }
        }*/

        //Update PMSR
        pgpe_pstate_pmsr_updt();
        pgpe_pstate_pmsr_write();

        pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
        pgpe_occ_send_ipc_ack_type_rc(EV_IPC_CLIP_UPDT, PGPE_RC_SUCCESS);
        ppe_trace_op(PGPE_OPT_CLIP_UPDT_ACK, 0);

    }
}

void pgpe_process_pmcr_request(void* eargs)
{
    PK_TRACE_INF("PEP: PS PMCR");
    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    uint32_t i = 0;
    uint32_t req_pstate = ((args->pmcr >> 48) & 0x00FF);
    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_byte(0, req_pstate);
    pgpe_opt_set_byte(1, pgpe_pstate_get(pstate_curr));
    ppe_trace_op(PGPE_OPT_SET_PMCR, pgpe_opt_get());

    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        for (i = 0; i < MAX_QUADS; i++)
        {
            pgpe_pstate_set_ps_request(i, req_pstate);
        }

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();

        if (pgpe_thr_ctrl_is_enabled())
        {
            pgpe_pstate_set_throttle_pmcr();
            pgpe_pstate_throttle_compute();
        }
    }

    pgpe_event_tbl_set_status(EV_IPC_SET_PMCR, EVENT_INACTIVE);
    pgpe_occ_send_ipc_ack_cmd(cmd);
}

void pgpe_process_pcb_pmcr_request(void* eargs)
{
    PK_TRACE_INF("PEP: PCB PMCR");
    pcb_set_pmcr_args_t* args = (pcb_set_pmcr_args_t*)eargs;
    PkMachineContext ctx;
    uint32_t q;

    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_byte(1, pgpe_pstate_get(pstate_curr));
    //This is make sure that PCB Type1 interrupt can't
    //come in between and overwrite the PCB args.
    pk_critical_section_enter(&ctx);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(args->ps_valid[q])
        {
            pgpe_pstate_set_ps_request(q, (args->ps_request[q] & 0xFF));
            args->ps_valid[q] = 0;
            pgpe_opt_set_byte(0, q);
            pgpe_opt_set_byte(2, args->ps_request[q]);
            ppe_trace_op(PGPE_OPT_SET_PMCR, pgpe_opt_get());
        }
    }

    pk_critical_section_exit(&ctx);

    pgpe_pstate_compute();
    pgpe_pstate_apply_clips();

    if (pgpe_thr_ctrl_is_enabled())
    {
        pgpe_pstate_set_throttle_pmcr();
        pgpe_pstate_throttle_compute();
    }

    pgpe_event_tbl_set_status(EV_PCB_SET_PMCR, EVENT_INACTIVE);
}

void pgpe_process_wof_ctrl(void* eargs)
{
    PK_TRACE_INF("PEP: WOF CTRL");
    uint32_t rc;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs
    uint32_t ack_now = 1;

    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_byte(1, args->action);
    ppe_trace_op(PGPE_OPT_WOF_CTRL, pgpe_opt_get());

    if(args->action == PGPE_ACTION_WOF_ON)
    {
        if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOF_IPC_IMMEDIATE_MODE) == 0)
        {
            rc = pgpe_process_wof_enable();

            if (rc == PGPE_RC_SUCCESS)
            {
                pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_PENDING_ACTUATION);
                ack_now = 0;
            }
            else
            {
                args->msg_cb.rc = rc;
            }
        }
        else
        {
            pgpe_pstate_set(wof_status, WOF_STATUS_ENABLED);
        }
    }
    else if(args->action == PGPE_ACTION_WOF_OFF)
    {
        args->msg_cb.rc  = pgpe_process_wof_disable();
        pgpe_pstate_set(wof_status, WOF_STATUS_DISABLED);
    }
    else
    {
        //todo RTC: 214435 ERROR
    }

    if(ack_now)
    {
        pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        ppe_trace_op(PGPE_OPT_WOF_CTRL_ACK, 0);
    }
}

uint32_t pgpe_process_wof_enable(ipcmsg_wof_control_t* args)
{
    uint32_t rc;

    if(!pgpe_pstate_is_pstate_enabled())
    {
        pgpe_error_info_log(PGPE_ERR_CODE_PGPE_WOF_VRT_IN_PSTATE_STOPPED);
        pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_WOF_VRT_IN_PSTATE_STOPPED);
        rc = PGPE_RC_PSTATES_NOT_STARTED;
    } //if wof already enabled
    else if(pgpe_pstate_is_wof_enabled())
    {
        pgpe_error_info_log(PGPE_ERR_CODE_PGPE_WOF_CTRL_ENABLE_WHEN_ENABLED);
        pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_WOF_CTRL_ENABLE_WHEN_ENABLED);
        rc = PGPE_RC_SUCCESS;
    }
    else if(pgpe_pstate_get(vrt) == NULL)
    {
        pgpe_error_critical_log(PGPE_ERR_CODE_PGPE_WOF_CTRL_ENABLE_WITHOUT_VRT);
        pgpe_error_notify_critical(PGPE_ERR_CODE_PGPE_WOF_CTRL_ENABLE_WITHOUT_VRT);
        rc = PGPE_RC_NULL_VRT_POINTER;
    }
    else
    {
        //Do wof_calc
        pgpe_pstate_compute_vratio(pgpe_pstate_get(pstate_curr));
        pgpe_pstate_compute_vindex();
        pgpe_pstate_set(clip_wof, pgpe_pstate_get(vrt)->data[pgpe_pstate_get(vindex)]);
        pgpe_opt_set_word(0, 0);
        pgpe_opt_set_half(0, pgpe_pstate_get(vratio_index_format));
        pgpe_opt_set_byte(2, pgpe_pstate_get(vindex));
        pgpe_opt_set_byte(3, pgpe_pstate_get(clip_wof));
        ppe_trace_op(PGPE_OPT_WOF_CALC_DONE, pgpe_opt_get());

        PK_TRACE_INF("PEP: Vratio=0x%x, Vindex=0x%x, Clip_WOF=0x%x", pgpe_pstate_get(vratio_index_format),
                     pgpe_pstate_get(vindex),
                     pgpe_pstate_get(clip_wof));

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
        rc = PGPE_RC_SUCCESS;
    }

    return rc;
}

uint32_t pgpe_process_wof_disable()
{
    uint32_t rc;

    if(!pgpe_pstate_is_wof_enabled())
    {
        pgpe_error_info_log(PGPE_ERR_CODE_PGPE_WOF_CTRL_DISABLE_WHEN_WOF_DISABLED);
        pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_WOF_CTRL_DISABLE_WHEN_WOF_DISABLED);
        rc = PGPE_RC_SUCCESS;
    }
    else if(!pgpe_pstate_is_pstate_enabled())
    {
        pgpe_error_info_log(PGPE_ERR_CODE_PGPE_WOF_CTRL_DISABLE_IN_PSTATE_STOPPED);
        pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_WOF_CTRL_DISABLE_IN_PSTATE_STOPPED);
        rc = PGPE_RC_PSTATES_NOT_STARTED;
    }
    else
    {
        //Set WOF Clip used by pstate actuation to 0(remove clip)
        pgpe_pstate_set(clip_wof, 0);
        rc = PGPE_RC_SUCCESS;
    }

    return rc;
}

void pgpe_process_wof_ctrl_post_actuate()
{
    PK_TRACE_INF("PEP: WOF CTRL Post Actuate");

    if(pgpe_pstate_is_wof_clip_bounded())
    {
        PK_TRACE_INF("PEP: WOF Clip Bounded");
        pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
        pgpe_occ_send_ipc_ack_type_rc(EV_IPC_WOF_CTRL, PGPE_RC_SUCCESS);
        pgpe_pstate_set(wof_status, WOF_STATUS_ENABLED);
        ppe_trace_op(PGPE_OPT_WOF_CTRL_ACK, 0);
    }
}

void pgpe_process_wof_vrt(void* eargs)
{
    PK_TRACE_INF("PEP: WOF VRT");
    uint32_t vindex, ack_back = 0;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_wof_vrt_t* args = (ipcmsg_wof_vrt_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_word(0, (uint32_t)args->idd_vrt_ptr);
    ppe_trace_op(PGPE_OPT_WOF_VRT, pgpe_opt_get());

    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOF_IPC_IMMEDIATE_MODE) == 0)
    {
        //Check that VRT pointer is not NULL
        if (args->idd_vrt_ptr == NULL)
        {
            PK_TRACE_ERR("PEP: NULL VRT");
            pgpe_error_critical_log(PGPE_ERR_CODE_PGPE_WOF_NULL_VRT_PTR);
            pgpe_error_notify_critical(PGPE_ERR_CODE_PGPE_WOF_NULL_VRT_PTR);
            ack_back = 1;
            args->msg_cb.rc = PGPE_RC_NULL_VRT_POINTER;
        }
        else
        {

            pgpe_pstate_set_vrt(args->idd_vrt_ptr);
            PK_TRACE_DBG("PEP: VRT_PTR=0x%x", (uint32_t)args->idd_vrt_ptr);

            //If WOF is enabled
            if(pgpe_pstate_is_wof_enabled())
            {
                //Vratio fixed mode
                if (args->vratio_mode == PGPE_OCC_VRATIO_MODE_FIXED)
                {
                    if (args->fixed_vratio_index > WOF_VRT_SIZE)
                    {
                        //\todo Take out an error log
                        PK_TRACE_ERR("PEP: INVALID VRATIO INDEX"); //todo take critical error log
                        ack_back = 1;
                        args->msg_cb.rc = PGPE_WOF_RC_INVALID_FIXED_VRATIO_INDEX;
                    }
                    else
                    {
                        pgpe_pstate_set(vindex, args->fixed_vratio_index);
                    }
                }
                else
                {
                    if (args->vdd_ceff_ratio == 0 && G_pgpe_occ.ceffratio_info_log_cnt != 0)
                    {
                        pgpe_error_info_log_usrdata(PGPE_ERR_CODE_PGPE_WOF_CEFFRATIO_ZERO_ERROR,
                                                    pgpe_pstate_get(pstate_curr),
                                                    args->idd_vrt_ptr->vrtHeader.fields.vdd_ceff_id,
                                                    (args->idd_vrt_ptr->vrtHeader.fields.ac_id << 16) | args->idd_vrt_ptr->vrtHeader.fields.io_id);
                        G_pgpe_occ.ceffratio_info_log_cnt--;
                    }

                    //Do vratio instantaneous calculation
                    pgpe_pstate_compute_vratio(pgpe_pstate_get(pstate_curr));
                    pgpe_pstate_compute_vindex();
                }

                //If valid vindex, then determine new wof clip
                if (ack_back == 0)
                {
                    vindex = pgpe_pstate_get(vindex);
                    pgpe_pstate_set(clip_wof, args->idd_vrt_ptr->data[vindex]);
                    pgpe_opt_set_word(0, 0);
                    pgpe_opt_set_half(0, pgpe_pstate_get(vratio_index_format));
                    pgpe_opt_set_byte(2, pgpe_pstate_get(vindex));
                    pgpe_opt_set_byte(3, pgpe_pstate_get(clip_wof));
                    ppe_trace_op(PGPE_OPT_WOF_CALC_DONE, pgpe_opt_get());
                    PK_TRACE_INF("PEP: Vratio=0x%x, Vindex=0x%x, Clip_WOF=0x%x", pgpe_pstate_get(vratio_index_format),
                                 pgpe_pstate_get(vindex),
                                 pgpe_pstate_get(clip_wof));
                    pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_PENDING_ACTUATION);

                    pgpe_pstate_compute();
                    pgpe_pstate_apply_clips();

                    if (pgpe_thr_ctrl_is_enabled())
                    {
                        pgpe_pstate_set_throttle_vrt();
                        pgpe_pstate_throttle_compute();
                    }
                }
            }
            else
            {
                ack_back = 1;
            }
        }
    }
    else
    {
        ack_back = 1;
    }

    //If WOF is not enabled yet(just initial VRT), immediate mode or an error, then we ACK back.
    if(ack_back)
    {
        pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        ppe_trace_op(PGPE_OPT_WOF_VRT_ACK, 0);
    }

}

void pgpe_process_wof_vrt_post_actuate()
{
    PK_TRACE_INF("PEP: WOF VRT Post Actuate");

    if(pgpe_pstate_is_wof_clip_bounded())
    {
        PK_TRACE_INF("PEP: WOF Clip Bounded");

        /*
        if (pgpe_thr_ctrl_is_enabled())
        {
            if(pgpe_pstate_get(clip_wof) >= pgpe_pstate_get(pstate_safe))
            {
                pgpe_thr_ctrl_update(pgpe_pstate_get(clip_wof));
            }
            else
            {
                pgpe_thr_ctrl_update(pgpe_pstate_get(pstate_safe));
            }
        }*/

        pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
        pgpe_occ_send_ipc_ack_type_rc(EV_IPC_WOF_VRT, PGPE_RC_SUCCESS);
        ppe_trace_op(PGPE_OPT_WOF_VRT_ACK, 0);
    }
}

void pgpe_process_safe_mode(void* args)
{
    PK_TRACE_INF("PEP: Process Safe Mode");

    if(pgpe_pstate_is_pstate_enabled())
    {
        pgpe_pstate_actuate_safe_mode();
    }
    else
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR, BIT32(PGPE_SAFE_MODE_ERROR));
        pgpe_error_info_log(PGPE_ERR_CODE_PGPE_SAFE_MODE_IN_PSTATE_STOPPED);
        pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_SAFE_MODE_IN_PSTATE_STOPPED);
    }

    //Set Status Bits
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_CLEAR, BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE));
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR, BIT32(PGPE_SAFE_MODE_ACTIVE));
    PK_TRACE_DBG("PEP: Safe Mode Processed");
    ppe_trace_op(PGPE_OPT_SAFE_MODE_DONE, 0);
}

void pgpe_process_occ_fault(enum PGPE_PROCESS_SAFE_MODE safe_mode_flag, void* eargs)
{

    occ_fault_args_t* occ_fault_args = (occ_fault_args_t*)eargs;

    //Mask interrupt except IPC and Error
    pgpe_error_mask_irqs();

    //Take out critical log(except for OCC HB loss)
    if (occ_fault_args->occlfir & (BIT64(TP_TPCHIP_OCC_OCI_SCOM_OCCLFIR_OCB_ERROR) |
                                   BIT64(TP_TPCHIP_OCC_OCI_SCOM_OCCLFIR_SRT_UE) |
                                   BIT64(TP_TPCHIP_OCC_OCI_SCOM_OCCLFIR_OPIT_PARITY_ERROR) |
                                   BIT64(TP_TPCHIP_OCC_OCI_SCOM_OCCLFIR_C405_ECC_UE)))
    {
        pgpe_error_critical_log_usrdata(PGPE_ERR_CODE_PGPE_UNEXPECTED_OCC_FIR_IRQ, occ_fault_args->occlfir, 0, 0);
    }

    //Notify error module
    pgpe_error_notify_critical(PGPE_ERR_CODE_PGPE_UNEXPECTED_OCC_FIR_IRQ);

    //Actuate to Safe Mode
    if(safe_mode_flag == PGPE_PROCESS_SAFE_MODE_TRUE)
    {
        pgpe_pstate_actuate_safe_mode();
    }
}

void pgpe_process_xstop_fault()
{
    //Mask interrupt except IPC and Error
    pgpe_error_mask_irqs();

    //Take out a info log
    pgpe_error_info_log(PGPE_ERR_CODE_PGPE_XSTOP_GPE2);

    //Notify error module
    pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_XSTOP_GPE2);

    //Check whether PGPE should halt
    if (in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_RW) & BIT32(PGPE_DEBUG_HALT_ENABLE))
    {
        PK_TRACE_INF("Halting on System XSTOP");
        IOTA_PANIC(PGPE_XSTOP_GPE2);
    }
}

void pgpe_process_xgpe_fault(enum PGPE_PROCESS_SAFE_MODE safe_mode_flag)
{
    //Take out a critical log with xgpe regs
    errlDataUsrDtls_t usrDtlsSect = {0};
    errlPpeRegs_t xgpeDbgRegs = {{0}};
    getPpeRegsUsrDtls(ERRL_SOURCE_XGPE, 0, &xgpeDbgRegs, &usrDtlsSect);
    pgpe_error_critical_log_usr(PGPE_ERR_CODE_PGPE_GPE3_ERROR, &usrDtlsSect);

    //Mask interrupt except IPC and Error
    pgpe_error_mask_irqs();

    //Notify error module
    pgpe_error_notify_critical(PGPE_ERR_CODE_PGPE_GPE3_ERROR);

    //Actuate to Safe Mode
    if(safe_mode_flag == PGPE_PROCESS_SAFE_MODE_TRUE)
    {
        pgpe_pstate_actuate_safe_mode();
    }

    //Stop Beacon Updates
    pgpe_error_stop_beacon();

    //Ack any pending IPCS with bad rc
    pgpe_error_ack_pending();
}

void pgpe_process_pvref_fault()
{
    //PVREF
    //disable the rVRMs through setting RVCSR[RVID_OVERRIDE]
    PPE_PUTSCOM_MC(CPMS_RVCSR_WO_CLEAR, 0xF, BIT64(CPMS_RVCSR_RVID_OVERRIDE));

    //Take out a log
    pgpe_error_info_log(PGPE_ERR_CODE_PGPE_PVREF_ERROR);

    //Notify error module
    pgpe_error_notify_info(PGPE_ERR_CODE_PGPE_PVREF_ERROR);

}

void pgpe_process_stop_beacon()
{
    PK_TRACE_INF("PEP: Stop Beacon");
    pgpe_pstate_set(update_pgpe_beacon, 0);
    pgpe_event_tbl_set_status(EV_IPC_STOP_BEACON, EVENT_INACTIVE);
    pgpe_occ_send_ipc_ack_type_rc(EV_IPC_STOP_BEACON, PGPE_RC_SUCCESS);
}
