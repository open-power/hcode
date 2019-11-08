/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/iota_lnk_cfg.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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
#if !defined(__IOTA_LNK_CFG__)
#define __IOTA_LNK_CFG__
/**
 * @file iota_lnk_cfg.h
 * @brief Control IOTA linkerscript configuration
 */
/*TBD
#include "p10_hcd_memmap_qme_sram.H"
*/

//QME_SRAM_BASE_ADDR
//QME_SRAM_SIZE
//QME_HEADER_IMAGE_OFFSET
//QME_DEBUG_PTRS_OFFSET
//QME_DEBUG_PTRS_SIZE

#define SRAM_START               0xFFFF0000
#define SRAM_LENGTH              0x10000
#define PPE_HEADER_IMAGE_OFFSET  0x200
#define PPE_HEADER_IMAGE_NAME    .qme_image_header
#define PPE_DEBUG_PTRS_OFFSET    0x200
#define PPE_DEBUG_PTRS_SIZE      0x20
#define PPE_DUMP_PTRS_SIZE       0x150

#endif
