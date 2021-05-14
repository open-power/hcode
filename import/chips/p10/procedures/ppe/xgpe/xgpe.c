/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe.c $                 */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020,2021                                                    */
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
#include "pstate_pgpe_xgpe_api.h"
#include "ppe42_cache.h"


extern uint32_t G_OCB_OCCFLG3_OR;

GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_xgpe_pgpe);
GPE_BUFFER(ipcmsg_req_beacon_stop_t G_xgpe_beacon_req);

//
//  xgpe_pgpe_beacon_stop_req
//
//  IPC function called to PGPE for beacon stop
//
//
void xgpe_pgpe_beacon_stop_req()
{
    PK_TRACE("IPC BEACON req");
    int rc;
    G_xgpe_beacon_req.fields.return_code = 0;
    G_xgpe_beacon_req.fields.req_type = REQUEST_BEACON_STOP;
    G_ipc_msg_xgpe_pgpe.cmd_data = &G_xgpe_beacon_req;
    ipc_init_msg(&G_ipc_msg_xgpe_pgpe.cmd,
                 IPC_MSGID_XGPE_PGPE_BEACON_STOP,
                 (void*)NULL,
                 (void*)NULL);

    //send the command
    rc = ipc_send_cmd(&G_ipc_msg_xgpe_pgpe.cmd);

    if(rc)
    {
        PK_TRACE_ERR("Failed to send beacon req to pgpe");
        //TODO: Error Log
    }
}

//
// __xgpe_machine_check_handler
//
// Machine check handler for scom issue
//
void
__xgpe_machine_check_handler()
{
    uint32_t edr = mfspr(SPRN_EDR);
    uint32_t srr0 = mfspr(SPRN_SRR0);
    uint32_t sprg0 = mfspr(SPRN_SPRG0);

    xgpe_errl_create(XGPE_SCOM_MACHINE_CHECK_ERROR,
                     0, XGPE_HCODE_SCOM,
                     edr, srr0, sprg0, ERRL_SEV_UNRECOVERABLE);

}

extern XgpeHeader_t* _XGPE_IMG_HEADER __attribute__ ((section (".xgpe_image_header")));

//
//  xgpe_errl_create => error handling
//
//
uint32_t xgpe_errl_create(const uint32_t i_rc,
                          const uint32_t i_extRc,
                          const uint32_t i_modId,
                          const uint32_t i_usrd1,
                          const uint32_t i_usrd2,
                          const uint32_t i_usrd3,
                          const uint32_t i_sev)
{
    uint32_t status = ERRL_STATUS_SUCCESS;

    if ( i_sev == ERRL_SEV_UNRECOVERABLE)
    {
        XgpeHeader_t* l_header = (XgpeHeader_t*)&_XGPE_IMG_HEADER;
        uint32_t tdp_idx = l_header->g_xgpe_wofTdpIoIndex;
        HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*) OCC_SHARED_SRAM_ADDR_START;
        xgpe_wof_values_t* wof_io_values = (xgpe_wof_values_t*)&occ_shared_data->xgpe_wof_values;
        wof_io_values->fields.io_power_proxy_0p01w = 0;
        wof_io_values->fields.io_index = 0; //SRAM→io_index(4:6)
        wof_io_values->fields.io_index = (uint8_t)tdp_idx << 4; //OCC Shared SRAM→io_index(1:3)

        //Mask interrupts in OIMR
        out32(G_OCB_OCCFLG3_OR, BIT32(XGPE_HCODE_FAULT_STATE));

        //Create error log
        PPE_LOG_ERR_CRITICAL ( i_rc, i_extRc, i_modId,
                               i_usrd1, i_usrd2, i_usrd3,
                               NULL, NULL, status );

        //send becaon stop request
        xgpe_pgpe_beacon_stop_req ();

        while(1)
        {
        }
    }

    if ( i_sev == ERRL_SEV_INFORMATIONAL)
    {
        PPE_LOG_ERR_INF ( i_rc, i_extRc, i_modId,
                          i_usrd1, i_usrd2, i_usrd3,
                          NULL, status );
    }

    return status;
}
