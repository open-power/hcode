/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/occlib/occhw_shared_data.h $     */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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
#ifndef __OCCHW_OSD_H__
#define __OCCHW_OSD_H__

/// \file occhw_osd.h
/// \brief Common header for shared data within the OCC complex
///

#include "kernel.h"
#include "ipc_structs.h"
#include "occhw_scom_cmd.h"

/// Hardcoded address for the location of the OCC shared data segment
/// This is placed in the non-cacheable aliased region of SRAM space
#ifndef OSD_ADDR
    #define OSD_ADDR 0xf7f00000
#endif

/// Total space of the OCC shared data segment
#define OSD_TOTAL_SHARED_DATA_BYTES 4096

/// Reserve space for IPC data in case it needs to grow
#define OSD_IPC_RESERVED_BYTES 2048

/// Reserve space for Debug
#define OSD_DEBUG_RESERVED_BYTES 512

#define OSD_GPE_SCOM_ADDR (OSD_ADDR + OSD_IPC_RESERVED_BYTES + OSD_DEBUG_RESERVED_BYTES)

#define OSD_GPE_SCOM_RESERVED_BYTES 32

#define OSD_RESERVED_BYTES  1184

#define OSD_OCC_COMPLEX_SHARED_DATA_RESERVED_BYTES  320

#define OSD_OCC_COMPLEX_SHARED_DATA_ADDR  (OSD_ADDR + OSD_TOTAL_SHARED_DATA_BYTES - OSD_OCC_COMPLEX_SHARED_DATA_RESERVED_BYTES)

#ifndef __ASSEMBLER__

//GPE2 knowledge of OCC SRAM region for GPE2
typedef struct gpe2_occ_sram_region_data
{
    uint32_t gpe2_sram_region_start; //GPE2 sram region starting address
    uint32_t gpe2_image_header_addr;
    uint32_t gpe2_debug_header_addr;
    uint8_t  reserved[52];
} gpe2_occ_sram_region_data_t;

//GPE3 knowledge of OCC SRAM region for GPE3
typedef struct gpe3_occ_sram_region_data
{
    uint32_t gpe3_sram_region_start; //GPE3 sram region starting address
    uint32_t gpe3_image_header_addr;
    uint32_t gpe3_debug_header_addr;
    uint8_t  reserved[44];
    uint32_t aux_region_start;
    uint32_t aux_region_length;
} gpe3_occ_sram_region_data_t;

//OCC Complex Shared Data.
typedef struct occ_comp_shr_data
{
    uint8_t  reserved[128]; //reserved
    gpe2_occ_sram_region_data_t gpe2_data; //written by GPE2
    gpe3_occ_sram_region_data_t gpe3_data; //written by GPE3
    uint8_t  reserved1[64]; //reserved
} occ_comp_shr_data_t;

typedef union
{
    struct
    {
        union
        {
            ipc_shared_data_t   ipc_data;   //880 bytes
            uint8_t             ipc_reserved[OSD_IPC_RESERVED_BYTES];
        };
        union
        {
            //debug_shared_data_t debug_data;
            uint8_t             debug_reserved[OSD_DEBUG_RESERVED_BYTES];
        };
        union
        {
            occhw_scom_cmd_t    scom_cmd;
            uint8_t             gpe_scom_reserved[OSD_GPE_SCOM_RESERVED_BYTES];
        };

        union
        {
            uint8_t             reserved[OSD_RESERVED_BYTES];
        };
        union
        {
            occ_comp_shr_data_t occ_comp_shr_data;
            uint8_t             occ_comp_shr_sram[OSD_OCC_COMPLEX_SHARED_DATA_RESERVED_BYTES];
        };
    };
    uint8_t total_reserved[OSD_TOTAL_SHARED_DATA_BYTES];
} occhw_osd_t;

// Fail to compile if ipc_shared_data exceeds the reserved space
KERN_STATIC_ASSERT((sizeof(ipc_shared_data_t) <= OSD_IPC_RESERVED_BYTES));

/// Hardcoded pointer for the location of the OCC shared data segment
#define OSD_PTR ((occhw_osd_t*) OSD_ADDR)

#endif /*__ASSEMBLER__*/

#endif  /* __OCCHW_OSD_H__ */
