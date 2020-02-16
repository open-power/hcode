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

XgpeHeader_t* G_xgpe_header_data;
extern XgpeHeader_t* _XGPE_IMG_HEADER __attribute__ ((section (".xgpe_image_header")));

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

    G_xgpe_header_data = (XgpeHeader_t*)&_XGPE_IMG_HEADER;

    //OCC Shared SRAM address and length
    G_xgpe_header_data->g_xgpe_sharedSramAddress = (uint32_t)OCC_SHARED_SRAM_ADDR_START;;
    G_xgpe_header_data->g_xgpe_sharedSramLength = PGPE_OCC_SHARED_SRAM_SIZE;

    G_xgpe_header_data->g_xgpe_ivprAddress = OCC_SRAM_XGPE_IVPR_ADDR;
    G_xgpe_header_data->g_xgpe_sysResetAddress = OCC_SRAM_XGPE_SYSTEM_RESET_ADDR;

    //GPPB SRAM Address
    G_xgpe_header_data->g_xgpe_gpspbSramAddress = OCC_SRAM_XGPE_GPPB_ADDR;
    G_xgpe_header_data->g_xgpe_gpspbLength =  OCC_SRAM_XGPE_GPPB_LEN;
    //TODO until hcode image build is fixed
    G_xgpe_header_data->g_xgpe_xgpeFlags = 0;
}
