/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/iota_lnk_cfg.h $    */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017,2018                                                    */
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
#include "p9_hcd_memmap_cme_sram.H"

#define SRAM_START               CME_SRAM_BASE_ADDR
#define SRAM_LENGTH              CME_SRAM_SIZE
#define PPE_HEADER_IMAGE_OFFSET  CME_HEADER_IMAGE_OFFSET
#define PPE_HEADER_IMAGE_NAME    .cme_image_header
#define PPE_DEBUG_PTRS_OFFSET    CME_DEBUG_PTRS_OFFSET
#define PPE_DEBUG_PTRS_SIZE      CME_DEBUG_PTRS_SIZE

#define PPE_DUMP_PTR_PSTATE_SIZE 0x4C
#define PPE_DUMP_PTR_STOP_SIZE   0x28
#define PPE_DUMP_PTR_COMMON_SIZE 0x8

#endif
