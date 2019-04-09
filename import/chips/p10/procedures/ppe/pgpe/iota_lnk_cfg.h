/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/iota_lnk_cfg.h $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2022                                                    */
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

#define SRAM_START               0xfff20000
#define SRAM_LENGTH              (64*1024)
#define PGPE_HEADER_IMAGE_OFFSET  0x0180
#define PGPE_HEADER_IMAGE_NAME    .pgpe_image_header
#define PGPE_DEBUG_PTRS_OFFSET    0x0200
#define PGPE_DEBUG_PTRS_SIZE      (PPE_HEADER_IMAGE_OFFSET-PPE_DEBUG_PTRS_OFFSET)


#endif
