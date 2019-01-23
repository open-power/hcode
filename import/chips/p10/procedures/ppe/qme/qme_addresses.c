/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_addresses.c $         */
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

#include "qme.h"

// Per QME

uint32_t G_QME_LCL_QMCR              = 0xC0000880;
uint32_t G_QME_LCL_QMCR_OR           = 0xC00008A0;
uint32_t G_QME_LCL_QMCR_CLR          = 0xC00008B0;

uint32_t G_QME_LCL_FLAGS             = 0xC0001200;
uint32_t G_QME_LCL_FLAGS_OR          = 0xC0001220;
uint32_t G_QME_LCL_FLAGS_CLR         = 0xC0001230;

uint32_t G_QME_LCL_SCRA              = 0xC0001240;
uint32_t G_QME_LCL_SCRB              = 0xC0001280;

uint32_t G_QME_LCL_SSDR              = 0xC0001400;
uint32_t G_QME_LCL_SCDR              = 0xC0001440;
uint32_t G_QME_LCL_PLSR              = 0xC0001480;

uint32_t G_QME_LCL_TSEL              = 0xC0002400;
uint32_t G_QME_LCL_TBR               = 0xC0002480;

uint32_t G_QME_LCL_EISR              = 0xC0002600;
uint32_t G_QME_LCL_EISR_OR           = 0xC0002620;
uint32_t G_QME_LCL_EISR_CLR          = 0xC0002630;

uint32_t G_QME_LCL_EIMR              = 0xC0002640;
uint32_t G_QME_LCL_EIMR_OR           = 0xC0002660;
uint32_t G_QME_LCL_EIMR_CLR          = 0xC0002670;

uint32_t G_QME_LCL_EIPR              = 0xC0002680;
uint32_t G_QME_LCL_EIPR_OR           = 0xC00026A0;
uint32_t G_QME_LCL_EIPR_CLR          = 0xC00026B0;

uint32_t G_QME_LCL_EITR              = 0xC00026C0;
uint32_t G_QME_LCL_EITR_OR           = 0xC00026E0;
uint32_t G_QME_LCL_EITR_CLR          = 0xC00026F0;

uint32_t G_QME_LCL_EISTR             = 0xC0002700;
uint32_t G_QME_LCL_EINR              = 0xC0002740;

// QME Per-Core

uint32_t G_QME_SSH_SRC               = 0xC00081C0;

uint32_t G_QME_SCSR                  = 0xC0008400;
uint32_t G_QME_SCSR_OR               = 0xC0008420;
uint32_t G_QME_SCSR_CLR              = 0xC0008430;

uint32_t G_QME_PSCRS                 = 0xC0008500;
uint32_t G_QME_DCSR                  = 0xC0008700;

uint32_t G_QME_TFCSR                 = 0xC0008800;
uint32_t G_QME_TFCSR_OR              = 0xC0008820;
uint32_t G_QME_TFCSR_CLR             = 0xC0008830;

// QME CPMS

uint32_t G_QME_CPMS_CGCSR            = 0xC000E000;
uint32_t G_QME_CPMS_CGCSR_CLR        = 0xC000E020;
uint32_t G_QME_CPMS_CGCSR_OR         = 0xC000E030;

uint32_t G_QME_CPMS_RVCSR            = 0xC000E040;
uint32_t G_QME_CPMS_RVCSR_CLR        = 0xC000E060;
uint32_t G_QME_CPMS_RVCSR_OR         = 0xC000E070;

uint32_t G_QME_CPMS_CL2_PFETCNTL     = 0xC000E280;
uint32_t G_QME_CPMS_CL2_PFETCNTL_CLR = 0xC000E2A0;
uint32_t G_QME_CPMS_CL2_PFETCNTL_OR  = 0xC000E2B0;

uint32_t G_QME_CPMS_CL2_PFETSTAT     = 0xC000E2C0;

uint32_t G_QME_CPMS_CUCR             = 0xC000E3C0;
uint32_t G_QME_CPMS_CUCR_CLR         = 0xC000E3E0;
uint32_t G_QME_CPMS_CUCR_OR          = 0xC000E3F0;

// Core

uint32_t G_CPLT_CTRL0                = 0x20000000;
uint32_t G_CPLT_CTRL0_OR             = 0x20000010;
uint32_t G_CPLT_CTRL0_CLR            = 0x20000020;

uint32_t G_CPLT_CTRL1                = 0x20000001;
uint32_t G_CPLT_CTRL1_OR             = 0x20000011;
uint32_t G_CPLT_CTRL1_CLR            = 0x20000021;

uint32_t G_CPLT_CTRL2                = 0x20000002;
uint32_t G_CPLT_CTRL2_OR             = 0x20000012;
uint32_t G_CPLT_CTRL2_CLR            = 0x20000022;

uint32_t G_CPLT_CTRL3                = 0x20000003;
uint32_t G_CPLT_CTRL3_OR             = 0x20000013;
uint32_t G_CPLT_CTRL3_CLR            = 0x20000023;

uint32_t G_CPLT_CTRL4                = 0x20000004;
uint32_t G_CPLT_CTRL4_OR             = 0x20000014;
uint32_t G_CPLT_CTRL4_CLR            = 0x20000024;

uint32_t G_CPLT_STAT0                = 0x20000100;

uint32_t G_SCAN_REGION_TYPE          = 0x20030005;
uint32_t G_CLK_REGION_TYPE           = 0x20030006;
uint32_t G_CLOCK_STAT_SL             = 0x20030008;
uint32_t G_CLOCK_STAT_NSL            = 0x20030009;
uint32_t G_CLOCK_STAT_ARY            = 0x2003000A;
