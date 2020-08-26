/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_header.c $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
#include "pgpe_header.h"
#include "p10_oci_proc_1.H"

PgpeHeader_t* G_pgpe_header_data;
extern PgpeHeader_t* _PGPE_IMG_HEADER __attribute__ ((section (".pgpe_image_header")));


//
//  p9_pgpe_header_init
//
//  This function is called during PGPE boot to initialize
//  pointer to PgpeImageHeader, and also fill some values in
//  PgpeImageHeader
//
void pgpe_header_init()
{
    PK_TRACE("HDR: Init");

    G_pgpe_header_data = (PgpeHeader_t*)&_PGPE_IMG_HEADER;

    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)
                                            OCC_SHARED_SRAM_ADDR_START; //Bottom 2K of PGPE OCC Sram Space

    //OCC Shared SRAM address and length
    G_pgpe_header_data->g_pgpe_sharedSramAddress = (uint32_t)OCC_SHARED_SRAM_ADDR_START;
    G_pgpe_header_data->g_pgpe_sharedLength = PGPE_OCC_SHARED_SRAM_SIZE;


    uint32_t occflg3 = in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW);

    if(!(occflg3 & BIT32(XGPE_ACTIVE)))
    {
        //Clear out the OCC Shared SRAM region by setting everything to zero
        uint32_t i = 0;
        uint64_t* occ_shared_data_indx = (uint64_t*)OCC_SHARED_SRAM_ADDR_START;

        for (i = 0; i < PGPE_OCC_SHARED_SRAM_SIZE / sizeof(uint64_t); ++i)
        {
            *occ_shared_data_indx = 0;
            occ_shared_data_indx++;
        }
    }

    // @TODO Discuss the implications of clearing Shared SRAM in the loop above
    initErrLogging ((uint8_t) ERRL_SOURCE_PGPE, &(occ_shared_data->errlog_idx));

    //GPPB SRAM Address
    G_pgpe_header_data->g_pgpe_gpspbSramAddress = (uint32_t)(OCC_SRAM_PGPE_BASE_ADDR +
            G_pgpe_header_data->g_pgpe_hcodeLength);

    //OCC Pstate table address and length
    G_pgpe_header_data->g_pgpe_opspbTableAddress = (uint32_t)
            &occ_shared_data->pstate_table; //OCC Pstate table address
    G_pgpe_header_data->g_pgpe_opspbTableLength = MAX_OCC_PSTATE_TABLE_ENTRIES * sizeof(
                OCCPstateTable_entry_t); //OCC Pstate table length

    //PGPE Beacon Address
    G_pgpe_header_data->g_pgpe_beaconAddress = (uint32_t)&occ_shared_data->pgpe_beacon;//Beacon

    //PGPE WOF State Address
    G_pgpe_header_data->g_pgpe_pgpeWofStateAddress = (uint32_t)&occ_shared_data->pgpe_wof_values; //PGPE Produced WOF values

    //PGPE WOF Tables Length
    G_pgpe_header_data->g_pgpe_wofTableLength = sizeof(HomerVRTLayout_t);
}
