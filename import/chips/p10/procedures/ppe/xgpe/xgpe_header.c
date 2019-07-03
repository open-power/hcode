/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_header.c $          */
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
#include "xgpe_header.h"

xgpe_header_t* G_xgpe_header_data;
extern xgpe_header_t* _XGPE_IMG_HEADER __attribute__ ((section (".xgpe_image_header")));

//TODO  RTC 212641
#define PGPE_BASE_ADDRESS 0xfff20000
#define PGPE_HCODE_HEADER_OFFSET 0x0180
#define PGPE_HCODE_HEADER_SHARED_SRAM_ADDR_OFFSET 0xC
#define PGPE_HCODE_HEADER_SHARED_SRAM_LENGTH_OFFSET 0x14
#define PGPE_HCODE_HEADER_GPPB_SRAM_ADDR 0x28

//
//  p10_xgpe_header_init
//
//  This function is called during XGPE boot to initialize
//  pointer to XgpeImageHeader, and also fill some values in
//  XgpeImageHeader
//
void xgpe_header_init()
{
    PK_TRACE("HDR: Init");

    G_xgpe_header_data = (xgpe_header_t*)&_XGPE_IMG_HEADER;

    //OCC Shared SRAM address and length
    G_xgpe_header_data->g_xgpe_shared_sram_addr = (uint32_t) (PGPE_BASE_ADDRESS +
            PGPE_HCODE_HEADER_OFFSET + PGPE_HCODE_HEADER_SHARED_SRAM_ADDR_OFFSET);
    G_xgpe_header_data->g_xgpe_shared_sram_len = (uint32_t)(PGPE_BASE_ADDRESS +
            PGPE_HCODE_HEADER_OFFSET + PGPE_HCODE_HEADER_SHARED_SRAM_LENGTH_OFFSET);

    //GPPB SRAM Address
    G_xgpe_header_data->g_xgpe_gppb_sram_addr = (uint32_t)(PGPE_BASE_ADDRESS +
            PGPE_HCODE_HEADER_OFFSET + PGPE_HCODE_HEADER_GPPB_SRAM_ADDR);

    //TODO
    G_xgpe_header_data->g_xgpe_hcode_length = 0x10000;
    G_xgpe_header_data->g_xgpe_gppb_length  = 0x800;
    //TODO until hcode image build is fixed
    G_xgpe_header_data->g_xgpe_flags = XGPE_OCC_PM_SUSPEND_IMMEDIATE_MODE;


}
