/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_avsbus_driver.c $   */
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

#include "pgpe_avsbus_driver.h"
#include "pgpe_gppb.h"
#include "p10_oci_proc.H"
#include "pgpe_error.h"

//Local Functions
uint32_t pgpe_avsbus_calc_crc(uint32_t data);
uint32_t pgpe_avsbus_poll_trans_done(uint32_t bus_num);
uint32_t pgpe_avsbus_drive_idle_frame(uint32_t bus_num);
uint32_t pgpe_avsbus_drive_write(uint32_t cmd_data_type, uint32_t cmd_data, uint32_t bus_num, uint32_t rail_num);
uint32_t pgpe_avsbus_drive_read(uint32_t cmd_data_type, uint32_t* cmd_data, uint32_t bus_num, uint32_t rail_num);

static uint32_t AVS_CONTROL_RETRIES = 500;
static uint32_t AVS_RESYNC_RETRIES = 1;

pgpe_avsbus_t G_pgpe_avsbus __attribute__((section (".data_structs")));

uint32_t pgpe_avsbus_calc_crc(uint32_t data)
{
    //Polynomial =  x^3 + x^2 + 1 = 1*x^3 + 0*x^2 + 1*x^1 + 1*x^0  = divisor(1011)
    uint32_t crc_value = 0;
    uint32_t polynomial = 0xb0000000;
    uint32_t msb = 0x80000000;

    crc_value = data & 0xfffffff8ull;

    while (crc_value & 0xfffffff8ull)
    {
        if (crc_value & msb)
        {
            //if msb is 1'b1, divide by polynomial and shift polynomial to the right
            crc_value = crc_value ^ polynomial;
            polynomial = polynomial >> 1;
        }
        else
        {
            // if msb is zero, shift polynomial
            polynomial = polynomial >> 1;
        }

        msb = msb >> 1;
    }

    return crc_value;
}

//#################################################################################################
// Function polls OCB status register O2SST for o2s_ongoing=0
//#################################################################################################
uint32_t pgpe_avsbus_poll_trans_done(uint32_t bus_num)
{
    uint32_t rc = 0;
    uint32_t ocb_o2sst0a = 0;
    uint32_t ongoing = 1;
    uint32_t count = 0;
    uint32_t bus_mask = bus_num << O2S_BUSNUM_OFFSET_SHIFT;

    // The point of MAX_POLL_COUNT_AVS is to verify that ongoingFlag turns to
    //   zero very fast. Otherwise, something wrong with this i/f and error out.
    //PK_TRACE_INF("PV:OCB_O2SST0A =0x%x",OCB_O2SST0A | BusMask);
    while (ongoing || (count <= MAX_POLL_COUNT_AVS))
    {
        ocb_o2sst0a = in32(TP_TPCHIP_OCC_OCI_OCB_O2SST0A | bus_mask);
        ocb_o2sst0a = ocb_o2sst0a & 0x80000000;

        if (!ocb_o2sst0a )
        {
            ongoing = 0;
        }

        count++;
    }

    if (ongoing)
    {
        rc = AVS_RC_ONGOING_TIMEOUT;
    }
    else
    {
        rc = AVS_RC_SUCCESS;
    }

    return rc;
}

//#################################################################################################
// Function which writes to OCB registers to initialize the AVS Slave with an idle frame
//#################################################################################################
uint32_t pgpe_avsbus_drive_idle_frame(uint32_t bus_num)
{
    uint32_t rc = 0;
    uint32_t idleframe = 0xFFFFFFFF;
    uint32_t bus_mask = bus_num << O2S_BUSNUM_OFFSET_SHIFT;

    // Clear sticky bits in o2s_status_reg
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A | bus_mask, 0x40000000);

    // Compose and send frame
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SWD0A  | bus_mask, idleframe);

    // Wait on o2s_ongoing = 0
    rc = pgpe_avsbus_poll_trans_done(bus_num);

    return rc;
}

//#################################################################################################
// Function which writes to OCB registers to initiate a AVS write transaction
//#################################################################################################
uint32_t pgpe_avsbus_drive_write(uint32_t cmd_data_type, uint32_t cmd_data, uint32_t bus_num, uint32_t rail_num)
{
    uint8_t  rc = 0, retry_cnt = 0, done = 0, retry_cnt_avsbus_not_in_ctrl = 0;
    uint32_t cmd_frame = 0;
    uint32_t slave_ack  = 0;

    uint32_t rail_select =  rail_num;
    uint32_t start_code  = 1;
    uint32_t cmd_type = 0; // 0:write+commit, 1:write+hold, 2: d/c, 3:read
    uint32_t cmd_group = 0;
    uint32_t crc = 0;
    uint32_t bus_mask = bus_num << O2S_BUSNUM_OFFSET_SHIFT;


    // Clear sticky bits in o2s_status_reg
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A  | bus_mask, 0x40000000);

    // Compose frame
    // CRC(31:29), CmdData(28:13), RailSelect(12:9), CmdDataType(8:5),
    //   CmdGroup(4), CmdType(3:2), StartCode(1:0)
    cmd_frame = (start_code << 30) | (cmd_type << 28) | (cmd_group << 27) |
                (cmd_data_type << 23) | (rail_select << 19) | (cmd_data << 3);

    // Generate CRC
    crc = pgpe_avsbus_calc_crc(cmd_frame);
    cmd_frame = cmd_frame | crc;

    PK_TRACE_DBG("AVS: Drive_W Cmd_Frame=0x%08x", cmd_frame);

    do
    {
        // Send frame
        out32(TP_TPCHIP_OCC_OCI_OCB_O2SWD0A | bus_mask, cmd_frame);

        // Wait on o2s_ongoing = 0
        rc = pgpe_avsbus_poll_trans_done(bus_num);

        if (rc)
        {
            done = 1;
        }
        else
        {
            slave_ack = in32(TP_TPCHIP_OCC_OCI_OCB_O2SRD0A | bus_mask);

            //Non-zero SlaveAck
            if(slave_ack & 0xC0000000)
            {

                //If AVSBUS Control taken away then retry multiple times
                if (!(slave_ack & 0x04000000))
                {
                    if (retry_cnt_avsbus_not_in_ctrl < AVS_CONTROL_RETRIES)
                    {
                        PK_TRACE_INF("AVS: Drive_W, Not in PGPE Control, retry_cnt=(%u/%u)", retry_cnt_avsbus_not_in_ctrl, AVS_CONTROL_RETRIES);
                        retry_cnt_avsbus_not_in_ctrl++;
                    }
                    else
                    {
                        PK_TRACE_INF("AVS: Drive_W Error, Not in PGPE Control, retry_cnt=(%u/%u)", retry_cnt_avsbus_not_in_ctrl,
                                     AVS_CONTROL_RETRIES);
                        rc = AVS_RC_AVSBUS_NOT_IN_PGPE_CONTROL;
                        done = 1;
                    }
                }
                else if (retry_cnt > AVS_RESYNC_RETRIES)
                {
                    PK_TRACE_INF("AVS: Drive_W Error Slave Ack, O2SRD0A=0x%04x", slave_ack);

                    if(slave_ack & 0x40000000)
                    {
                        rc = AVS_RC_NO_ACTION;
                    }
                    else
                    {
                        rc = AVS_RC_RESYNC_ERROR;
                    }

                    done = 1;
                }
                //Retry once on resync error
                else
                {
                    retry_cnt++;
                    rc = pgpe_avsbus_drive_idle_frame(bus_num);

                    if (rc)
                    {
                        done = 1;
                    }
                }
            }
            else
            {
                done = 1;
            }
        }
    }
    while(!done);

    return rc;
}

//#################################################################################################
// Function which writes to OCB registers to initiate a AVS read transaction
//#################################################################################################
uint32_t pgpe_avsbus_drive_read(uint32_t cmd_data_type, uint32_t* cmd_data, uint32_t bus_num, uint32_t rail_num)
{
    uint8_t  rc = 0, retry_cnt = 0, done = 0 , retry_cnt_avsbus_not_in_ctrl = 0 ;
    uint32_t cmd_frame = 0;
    uint32_t slave_ack = 0;

    uint32_t rail_select    = rail_num;
    uint32_t start_code     = 1;
    uint32_t cmd_type       = 3; // 0:write+commit, 1:write+hold, 2: d/c, 3:read
    uint32_t cmd_group      = 0;
    uint32_t reserved       = 0xFFFF;
    uint32_t crc            = 0;

    uint32_t bus_mask = bus_num << O2S_BUSNUM_OFFSET_SHIFT;

    // Clear sticky bits in o2s_status_reg
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A  | bus_mask, 0x40000000);

    // Compose frame
    // CRC(31:29), Reserved(28:13), RailSelect(12:9), CmdDataType(8:5),
    //   CmdGroup(4),CmdType(3:2),StartCode(1:0)
    cmd_frame = (start_code << 30) | (cmd_type << 28) | (cmd_group << 27) |
                (cmd_data_type << 23) | (rail_select << 19) | (reserved << 3);

    // Generate CRC
    crc = pgpe_avsbus_calc_crc(cmd_frame);
    cmd_frame = cmd_frame | crc;

    PK_TRACE_DBG("AVS: Drive_R Cmd_Frame=0x%08x", cmd_frame);

    do
    {
        // Send frame
        out32(TP_TPCHIP_OCC_OCI_OCB_O2SWD0A  | bus_mask, cmd_frame);

        // Wait on o2s_ongoing = 0
        rc = pgpe_avsbus_poll_trans_done(bus_num);

        if (rc)
        {
            done = 1;
        }
        else
        {
            // Read returned voltage value from Read frame
            slave_ack = in32(TP_TPCHIP_OCC_OCI_OCB_O2SRD0A  | bus_mask);

            //Non-zero SlaveAck
            if(slave_ack & 0xC0000000)
            {

                //If AVSBUS Control taken away then retry multiple times
                if (!(slave_ack & 0x04000000))
                {
                    if (retry_cnt_avsbus_not_in_ctrl < AVS_CONTROL_RETRIES)
                    {
                        PK_TRACE_INF("AVS: Drive_R, Not in PGPE Control, retry_cnt=(%u,%u)", retry_cnt_avsbus_not_in_ctrl, AVS_CONTROL_RETRIES);
                        retry_cnt_avsbus_not_in_ctrl++;
                    }
                    else
                    {
                        PK_TRACE_INF("AVS: Drive_R Error, Not in PGPE Control, retry_cnt=(%u,%u)", retry_cnt_avsbus_not_in_ctrl,
                                     AVS_CONTROL_RETRIES);
                        rc = AVS_RC_AVSBUS_NOT_IN_PGPE_CONTROL;
                        done = 1;
                    }
                }
                else if (retry_cnt > AVS_RESYNC_RETRIES)
                {
                    PK_TRACE_INF("AVS: Drive_R Error Slave Ack, O2SRD0A=0x%04x", slave_ack);
                    rc = AVS_RC_RESYNC_ERROR;
                    done = 1;
                }
                //Retry one-time for resync error
                else
                {
                    retry_cnt++;
                    rc = pgpe_avsbus_drive_idle_frame(bus_num);

                    if (rc)
                    {
                        done = 1;
                    }
                }
            }
            else
            {
                *cmd_data = (slave_ack >> 8) & 0x0000FFFF;
                done = 1;
            }
        }
    }
    while(!done);

    return rc;
}

void* pgpe_avsbus_data_addr()
{
    return &G_pgpe_avsbus;
}

void pgpe_avsbus_init()
{
    PK_TRACE_INF("AVS: Init");
    PK_TRACE_INF("AVS: VDDBUS=%u,VDNBUS=%u,VCSBUS=%u", pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                 pgpe_gppb_get_avs_bus_topology_vdn_avsbus_num(), pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num());

    G_pgpe_avsbus.voltage_zero_cnt = 0;
    G_pgpe_avsbus.current_zero_cnt = 0;
    G_pgpe_avsbus.idd_current_thrshd = 0;
    G_pgpe_avsbus.ics_current_thrshd = 0;

    //Initialize VDD
    if (pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num() != 0xFF)
    {
        pgpe_avsbus_init_bus(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num());
    }
    else
    {
        PK_TRACE_ERR("AVS: VDD Bus Not Available, BusNum=0xFF");
        pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VDD_INVALID_BUSNUM);
        pgpe_error_state_loop();
    }

    //Initialize VDN
    if (pgpe_gppb_get_avs_bus_topology_vdn_avsbus_num() != 0xFF)
    {
        pgpe_avsbus_init_bus(pgpe_gppb_get_avs_bus_topology_vdn_avsbus_num());
    }
    else
    {
        //This is expected on some systems, and PGPE will simply report 0s
        //for any voltage and current reads on VDN Bus
        PK_TRACE_INF("AVS: VDN Bus Not Available");
    }

    //Initialize VCS
    if (pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num() != 0xFF)
    {
        pgpe_avsbus_init_bus(pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num());
    }
    else
    {
        PK_TRACE_ERR("AVS: VCS Bus Not Available, BusNum=0xFF");
        pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VCS_INVALID_BUSNUM);
        pgpe_error_state_loop();
    }
}



void pgpe_avsbus_init_bus(uint32_t bus_num)
{
    uint32_t   rc = 0;

    uint32_t  data = 0;
    uint32_t  O2SCTRLF_value = 0b10000010000011111100000000000000; //0x820FC000
    uint32_t  O2SCTRLS_value = 0b00000000000010000000000000000000; //0x00080000
    uint32_t  O2SCTRL2_value = 0b00000000000000000000000000000000; //0x00000000
    uint32_t  O2SCTRL1_value = 0b10000000000000000100000000000000 |
                               (pgpe_gppb_get_occ_complex_frequency_mhz() / (8 * CLOCK_SPIVID_MHZ) - 1) << 18;

    // OCI to SPIPMBus (O2S) bridge initialization
    uint32_t bus_mask = bus_num << O2S_BUSNUM_OFFSET_SHIFT;

    // O2SCTRLF
    data = in32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0 | bus_mask);
    data = (0x000000FF & data) | O2SCTRLF_value;
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0  | bus_mask, data);

    // O2SCTRLS
    data = in32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0 | bus_mask);
    data = (0x00003FFF & data) | O2SCTRLS_value;
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0 | bus_mask, data);

    // O2SCTRL2
    data = in32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20 | bus_mask);
    data = (0x00007FFF & data) | O2SCTRL2_value;
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20 | bus_mask, data);

    // O2SCTRL1
    data = in32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10 | bus_mask);
    data = (0x4FFCBFFF & data) | O2SCTRL1_value;
    out32(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10 | bus_mask, data);

    //
    // AVS slave initialization
    //
    // Drive AVS transaction with a frame value 0xFFFFFFFF (idle frame)
    // to initialize the AVS slave.
    rc = pgpe_avsbus_drive_idle_frame(bus_num);

    if (rc)
    {
        PK_TRACE_ERR("AVS: Init Bus, DriveIdleFrame FAIL");
        pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_INIT_ERR);
        pgpe_error_state_loop();
    }
    else
    {
        PK_TRACE("AVS: Initialized bus_num=0x%x", bus_num);
    }
}

void pgpe_avsbus_voltage_write(uint32_t bus_num, uint32_t rail_num, uint32_t volt_mv)
{
    PkMachineContext ctx;
    pk_critical_section_enter(&ctx);
    uint32_t  rc = 0;
    uint32_t  cmd_data_type = 0; // 0b0000=Target rail voltage

    if (bus_num != 0xFF)
    {
        if (volt_mv > AVS_DRIVER_MAX_EXTERNAL_VOLTAGE  ||
            volt_mv < AVS_DRIVER_MIN_EXTERNAL_VOLTAGE)
        {
            pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_OUT_OF_BOUNDS);
            pgpe_error_state_loop();
        }

        // Drive write transaction with a target voltage on a particular rail and wait on o2s_ongoing=0
        rc = pgpe_avsbus_drive_write(cmd_data_type, volt_mv, bus_num, rail_num);

        switch (rc)
        {
            case AVS_RC_SUCCESS:
                PK_TRACE_DBG("AVS: Volt_W Success!");
                break;

            case AVS_RC_ONGOING_TIMEOUT:
                PK_TRACE_ERR("AVS: Volt_W Flag Timeout");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_ONGOING_TIMEOUT);
                pgpe_error_state_loop();
                break;

            case AVS_RC_NO_ACTION:
                PK_TRACE_ERR("AVS: Volt_W, Good CRC, but no action");
                pgpe_error_handle_fault_w_safe_mode(PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_GOOD_CRC_NO_ACTION);
                pgpe_error_state_loop();
                break;

            case AVS_RC_RESYNC_ERROR:
                PK_TRACE_ERR("AVS: Volt_W Resync Error");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_RESYNC_ERROR);
                pgpe_error_state_loop();
                break;

            case AVS_RC_AVSBUS_NOT_IN_PGPE_CONTROL:
                PK_TRACE_ERR("AVS: Volt_W, Not in PGPE Control");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_NOT_IN_PGPE_CONTROL);
                pgpe_error_state_loop();
                break;

            default:
                PK_TRACE_ERR("AVS: Volt_W, Unknown Error");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_UNKNOWN_ERROR);
                pgpe_error_state_loop();
                break;
        }
    }
    else
    {
        PK_TRACE_ERR("AVS: Volt_W bus_num=%u not available", bus_num)
    }

    pk_critical_section_exit(&ctx);
}

void pgpe_avsbus_voltage_read(uint32_t bus_num, uint32_t rail_num, uint32_t* ret_volt)
{
    PkMachineContext ctx;
    pk_critical_section_enter(&ctx);
    uint32_t rc = 0;

    if (bus_num != 0xFF)
    {
        rc = pgpe_avsbus_drive_read(0x0, ret_volt, bus_num, rail_num);

        switch (rc)
        {
            case AVS_RC_SUCCESS:
                PK_TRACE_DBG("AVS: Volt_R, Success!");

                if(*ret_volt == 0)
                {
                    pgpe_error_info_log_usrdata(PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_ZERO_VALUE, bus_num, rail_num,
                                                G_pgpe_avsbus.voltage_zero_cnt);
                    pgpe_error_notify_info(PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_ZERO_VALUE);
                }

                break;

            case AVS_RC_ONGOING_TIMEOUT:
                PK_TRACE_ERR("AVS: Volt_R, OnGoing Flag Timeout");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_ONGOING_TIMEOUT);
                pgpe_error_state_loop();
                break;

            case AVS_RC_NO_ACTION:
                PK_TRACE_ERR("AVS: Volt_R, OnGoing Flag Timeout");
                pgpe_error_handle_fault_w_safe_mode(PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_GOOD_CRC_NO_ACTION);
                pgpe_error_state_loop();
                break;

            case AVS_RC_RESYNC_ERROR:
                PK_TRACE_ERR("AVS: Volt_R, Resync Error");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_RESYNC_ERROR);
                pgpe_error_state_loop();
                break;

            case AVS_RC_AVSBUS_NOT_IN_PGPE_CONTROL:
                PK_TRACE_ERR("AVS: Volt_R, Not in PGPE Control");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_NOT_IN_PGPE_CONTROL);
                pgpe_error_state_loop();
                break;

            default:
                PK_TRACE_ERR("AVS: Volt_R, Unknown Error");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_UNKNOWN_ERROR);
                pgpe_error_state_loop();
                break;
        }
    }
    else
    {
        PK_TRACE_ERR("AVS: Volt_R, bus_num=%u not available", bus_num)
        *ret_volt = 0;
    }

    pk_critical_section_exit(&ctx);

}

void pgpe_avsbus_current_read(uint32_t bus_num, uint32_t rail_num, uint32_t* ret_current, uint32_t current_scale_idx)
{
    PkMachineContext ctx;
    pk_critical_section_enter(&ctx);

    uint32_t rc = 0;

    if (bus_num != 0xFF)
    {
        rc = pgpe_avsbus_drive_read(0x2, ret_current, bus_num, rail_num);

        switch (rc)
        {
            case AVS_RC_SUCCESS:
                PK_TRACE_DBG("AVS: Curr_R, Success!");

                if(*ret_current)
                {
                    *ret_current = *ret_current * pgpe_gppb_get_current_scale_factor(current_scale_idx);
                }

                break;

            case AVS_RC_ONGOING_TIMEOUT:
                PK_TRACE_ERR("AVS: Curr_R, OnGoing Flag Timeout Error");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_CURRENT_READ_ONGOING_TIMEOUT);
                pgpe_error_state_loop();
                break;

            case AVS_RC_RESYNC_ERROR:
                PK_TRACE_ERR("AVS: Curr_R, Resync Error");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_CURRENT_READ_RESYNC_ERROR);
                pgpe_error_state_loop();
                break;

            case AVS_RC_AVSBUS_NOT_IN_PGPE_CONTROL:
                PK_TRACE_ERR("AVS: Curr_R, Not In PGPE Control");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_CURRENT_READ_NOT_IN_PGPE_CONTROL);
                pgpe_error_state_loop();
                break;

            default:
                PK_TRACE_ERR("AVS: Curr_R, Unknown Error");
                pgpe_error_handle_fault(PGPE_ERR_CODE_AVSBUS_CURRENT_READ_UNKNOWN_ERROR);
                pgpe_error_state_loop();
                break;
        }

        //PK_TRACE("AVS_READ_CURRENT: bus_num=%u, rail_num=%u,current=%u scale=%u",bus_num, rail_num, *ret_current,pgpe_gppb_get_current_scale_factor(current_scale_idx));
    }
    else
    {
        PK_TRACE_ERR("AVS: Curr_R, bus_num=%u not available", bus_num)
        *ret_current = 0;
    }

    pk_critical_section_exit(&ctx);
}
