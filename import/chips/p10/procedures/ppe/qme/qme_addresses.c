/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_addresses.c $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2020                                                    */
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

#include <stdint.h>

// Core/Cache/PC SCOM Addresses:

uint32_t IMA_EVENT_MASK                 = 0x20020400;
uint32_t CORE_THREAD_STATE              = 0x20020412;
uint32_t CORE_FIR_OR                    = 0x20020442;
uint32_t DIRECT_CONTROLS                = 0x20020449;
uint32_t SCRATCH0                       = 0x20020486;
uint32_t SCRATCH1                       = 0x20020487;
uint32_t SPATTN_MASK                    = 0x2002049A;
uint32_t EC_PC_TFX_SM                   = 0x2002049b;
uint32_t PMC_UPDATE                     = 0x20028414;
// QME Local Addresses:

// QME Per-Quad

uint32_t QME_LCL_PIG                    = 0xC0000300;
uint32_t QME_LCL_BCEBAR0                = 0xC0000600;
uint32_t QME_LCL_BCEBAR1                = 0xC0000640;
uint32_t QME_LCL_BCECSR                 = 0xC0000680;

uint32_t QME_LCL_QSCR                   = 0xC0000700;
uint32_t QME_LCL_QSCR_OR                = 0xC0000720;
uint32_t QME_LCL_QSCR_CLR               = 0xC0000730;

uint32_t QME_LCL_QMCR                   = 0xC0000880;
uint32_t QME_LCL_QMCR_OR                = 0xC00008A0;
uint32_t QME_LCL_QMCR_CLR               = 0xC00008B0;

uint32_t QME_LCL_DB0                    = 0xC0001000;
uint32_t QME_LCL_DB1                    = 0xC0001040;
uint32_t QME_LCL_DB2                    = 0xC0001080;

uint32_t QME_LCL_FLAGS                  = 0xC0001200;
uint32_t QME_LCL_FLAGS_OR               = 0xC0001220;
uint32_t QME_LCL_FLAGS_CLR              = 0xC0001230;

uint32_t QME_LCL_SCRA                   = 0xC0001240;
uint32_t QME_LCL_SCRA_OR                = 0xC0001260;
uint32_t QME_LCL_SCRA_CLR               = 0xC0001270;
uint32_t QME_LCL_SCRB                   = 0xC0001280;
uint32_t QME_LCL_SCRB_OR                = 0xC00012A0;
uint32_t QME_LCL_SCRB_CLR               = 0xC00012B0;

uint32_t QME_LCL_SSDR                   = 0xC0001400;
uint32_t QME_LCL_SCDR                   = 0xC0001440;
uint32_t QME_LCL_PLSR                   = 0xC0001480;

uint32_t QME_LCL_TSEL                   = 0xC0002400;
uint32_t QME_LCL_TBR                    = 0xC0002480;

uint32_t QME_LCL_EISR                   = 0xC0002600;
uint32_t QME_LCL_EISR_OR                = 0xC0002620;
uint32_t QME_LCL_EISR_CLR               = 0xC0002630;

uint32_t QME_LCL_EIMR                   = 0xC0002640;
uint32_t QME_LCL_EIMR_OR                = 0xC0002660;
uint32_t QME_LCL_EIMR_CLR               = 0xC0002670;

uint32_t QME_LCL_EIPR                   = 0xC0002680;
uint32_t QME_LCL_EIPR_OR                = 0xC00026A0;
uint32_t QME_LCL_EIPR_CLR               = 0xC00026B0;

uint32_t QME_LCL_EITR                   = 0xC00026C0;
uint32_t QME_LCL_EITR_OR                = 0xC00026E0;
uint32_t QME_LCL_EITR_CLR               = 0xC00026F0;

uint32_t QME_LCL_EISTR                  = 0xC0002700;
uint32_t QME_LCL_EINR                   = 0xC0002740;

// QME Per-Core

uint32_t QME_SSH_SRC                    = 0xC00081C0;
uint32_t QME_SPWU_OTR                   = 0xC0008300;
uint32_t QME_PSCRS                      = 0xC0008500;
uint32_t QME_RMOR                       = 0xC0008680;
uint32_t QME_DCSR                       = 0xC0008700;

uint32_t QME_SCSR                       = 0xC0008400;
uint32_t QME_SCSR_WO_CLEAR              = 0xC0008430;
uint32_t QME_SCSR_WO_OR                 = 0xC0008420;
uint32_t QME_CISR                       = 0xC0008780;

uint32_t QME_TFCSR                      = 0xC0008800;
uint32_t QME_TFCSR_WO_CLEAR             = 0xC0008830;
uint32_t QME_TFCSR_WO_OR                = 0xC0008820;

uint32_t QME_LCL_SCR                    = 0xC00880C0;
uint32_t QME_LCL_SCR_OR                 = 0xC00880E0;
uint32_t QME_LCL_SCR_CLEAR              = 0xC00880F0;
