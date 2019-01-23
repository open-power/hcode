/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_addresses.h $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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

// QME

extern uint32_t G_QME_LCL_QMCR;
extern uint32_t G_QME_LCL_QMCR_OR;
extern uint32_t G_QME_LCL_QMCR_CLR;

extern uint32_t G_QME_LCL_FLAGS;
extern uint32_t G_QME_LCL_FLAGS_OR;
extern uint32_t G_QME_LCL_FLAGS_CLR;
extern uint32_t G_QME_LCL_SCRA;
extern uint32_t G_QME_LCL_SCRB;
extern uint32_t G_QME_LCL_SSDR;
extern uint32_t G_QME_LCL_SCDR;
extern uint32_t G_QME_LCL_PLSR;

extern uint32_t G_QME_LCL_TSEL;
extern uint32_t G_QME_LCL_TBR;
extern uint32_t G_QME_LCL_EISR;
extern uint32_t G_QME_LCL_EISR_OR;
extern uint32_t G_QME_LCL_EISR_CLR;
extern uint32_t G_QME_LCL_EIMR;
extern uint32_t G_QME_LCL_EIMR_OR;
extern uint32_t G_QME_LCL_EIMR_CLR;
extern uint32_t G_QME_LCL_EIPR;
extern uint32_t G_QME_LCL_EIPR_OR;
extern uint32_t G_QME_LCL_EIPR_CLR;
extern uint32_t G_QME_LCL_EITR;
extern uint32_t G_QME_LCL_EITR_OR;
extern uint32_t G_QME_LCL_EITR_CLR;
extern uint32_t G_QME_LCL_EISTR;
extern uint32_t G_QME_LCL_EINR;

// QME per-core

extern uint32_t G_QME_SSH_SRC;
extern uint32_t G_QME_SCSR    ;
extern uint32_t G_QME_SCSR_OR ;
extern uint32_t G_QME_SCSR_CLR;
extern uint32_t G_QME_PSCRS;
extern uint32_t G_QME_DCSR;
extern uint32_t G_QME_TFCSR;
extern uint32_t G_QME_TFCSR_OR;
extern uint32_t G_QME_TFCSR_CLR;

// QME CPMS

extern uint32_t G_QME_CPMS_CGCSR    ;
extern uint32_t G_QME_CPMS_CGCSR_CLR;
extern uint32_t G_QME_CPMS_CGCSR_OR ;
extern uint32_t G_QME_CPMS_RVCSR    ;
extern uint32_t G_QME_CPMS_RVCSR_CLR;
extern uint32_t G_QME_CPMS_RVCSR_OR ;
extern uint32_t G_QME_CPMS_CL2_PFETCNTL     ;
extern uint32_t G_QME_CPMS_CL2_PFETCNTL_CLR ;
extern uint32_t G_QME_CPMS_CL2_PFETCNTL_OR  ;
extern uint32_t G_QME_CPMS_CL2_PFETSTAT     ;
extern uint32_t G_QME_CPMS_CUCR;
extern uint32_t G_QME_CPMS_CUCR_CLR;
extern uint32_t G_QME_CPMS_CUCR_OR;


// Core

extern uint32_t G_CPLT_CTRL0      ;
extern uint32_t G_CPLT_CTRL0_OR   ;
extern uint32_t G_CPLT_CTRL0_CLR  ;
extern uint32_t G_CPLT_CTRL1      ;
extern uint32_t G_CPLT_CTRL1_OR   ;
extern uint32_t G_CPLT_CTRL1_CLR  ;
extern uint32_t G_CPLT_CTRL2      ;
extern uint32_t G_CPLT_CTRL2_OR   ;
extern uint32_t G_CPLT_CTRL2_CLR  ;
extern uint32_t G_CPLT_CTRL3      ;
extern uint32_t G_CPLT_CTRL3_OR   ;
extern uint32_t G_CPLT_CTRL3_CLR  ;
extern uint32_t G_CPLT_CTRL4      ;
extern uint32_t G_CPLT_CTRL4_OR   ;
extern uint32_t G_CPLT_CTRL4_CLR  ;
extern uint32_t G_CPLT_STAT0      ;

extern uint32_t G_SCAN_REGION_TYPE;
extern uint32_t G_CLK_REGION_TYPE ;
extern uint32_t G_CLOCK_STAT_SL   ;
extern uint32_t G_CLOCK_STAT_NSL  ;
extern uint32_t G_CLOCK_STAT_ARY  ;
