/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_header.h $          */
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
#ifndef _XGPE_HEADER_H_
#define _XGPE_HEADER_H_

#include "xgpe.h"

#define OCC_SRAM_XGPE_BASE_ADDR     0xfff30000
#define XGPE_IMAGE_SIZE             64*1024

#define OCC_SHARED_SRAM_ADDR_START \
    (OCC_SRAM_XGPE_BASE_ADDR + XGPE_IMAGE_SIZE)

//\todo use the common definition in the hwplib/pm
typedef struct xgpe_header
{
    uint64_t g_xgpe_magic_number;
    uint32_t g_xgpe_sys_reset_addr;
    uint32_t g_xgpe_shared_sram_addr;
    uint32_t g_xgpe_ivpr_address;
    uint32_t g_xgpe_shared_sram_len;
    uint32_t g_xgpe_build_date;
    uint32_t g_xgpe_version;
    uint16_t g_xgpe_flags;
    uint16_t reserved1;
    uint32_t g_xgpe_timebase_hz;
    uint32_t g_xgpe_gppb_sram_addr;
    uint32_t g_xgpe_hcode_length;
    uint32_t reserved2;
    uint32_t g_xgpe_gppb_length;
    uint32_t g_xgpe_core_throttle_asstn_cnt;
    uint32_t g_xgpe_core_throttle_deasstn_cnt;
    uint32_t g_xgpe_char_control;
    uint32_t g_xgpe_optrace_ptr;
    uint32_t g_xgpe_deep_optrace_ppmr_addr;
    uint32_t g_xgpe_deep_optrace_ppmr_len;
} xgpe_header_t;

extern xgpe_header_t* G_xgpe_header_data;

//
//  xgpe_header_init
//
//  This function is called during XGPE boot to initialize
//  pointer to XgpeImageHeader, and also fill some values in
//  XgpeImageHeader
//
void xgpe_header_init();


#endif //_XGPE_HEADER_H_
