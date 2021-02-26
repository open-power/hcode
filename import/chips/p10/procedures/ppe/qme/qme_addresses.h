/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_addresses.h $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

// Core/Cache/PC SCOM Addresses:

extern uint32_t IMA_EVENT_MASK;
extern uint32_t CORE_THREAD_STATE;
extern uint32_t CORE_FIR_OR;
extern uint32_t DIRECT_CONTROLS;
extern uint32_t SCRATCH0;
extern uint32_t SCRATCH1;
extern uint32_t SPATTN_MASK;
extern uint32_t EC_PC_TFX_SM;
extern uint32_t LOCAL_XSTOP;
extern uint32_t PMC_UPDATE;

// QME Local Addresses:
extern uint32_t QME_LCL_QSCR;
extern uint32_t QME_LCL_QSCR_OR;
extern uint32_t QME_LCL_QSCR_CLR;

// QME Per-Quad

extern uint32_t QME_LCL_LFIR;
extern uint32_t QME_LCL_LFIR_AND;
extern uint32_t QME_LCL_LFIR_OR;

extern uint32_t QME_LCL_LFIRMASK;
extern uint32_t QME_LCL_LFIRMASK_AND;
extern uint32_t QME_LCL_LFIRMASK_OR;

extern uint32_t QME_LCL_PIG;
extern uint32_t QME_LCL_BCEBAR0;
extern uint32_t QME_LCL_BCEBAR1;
extern uint32_t QME_LCL_BCECSR;

extern uint32_t QME_LCL_QSCR;
extern uint32_t QME_LCL_QSCR_OR;
extern uint32_t QME_LCL_QSCR_CLR;

extern uint32_t QME_LCL_QMCR;
extern uint32_t QME_LCL_QMCR_OR;
extern uint32_t QME_LCL_QMCR_CLR;

extern uint32_t QME_LCL_DB0;
extern uint32_t QME_LCL_DB1;
extern uint32_t QME_LCL_DB2;

extern uint32_t QME_LCL_FLAGS;
extern uint32_t QME_LCL_FLAGS_OR;
extern uint32_t QME_LCL_FLAGS_CLR;
extern uint32_t QME_LCL_SCRA;
extern uint32_t QME_LCL_SCRA_OR;
extern uint32_t QME_LCL_SCRA_CLR;
extern uint32_t QME_LCL_SCRB;
extern uint32_t QME_LCL_SCRB_OR;
extern uint32_t QME_LCL_SCRB_CLR;
extern uint32_t QME_LCL_SSDR;
extern uint32_t QME_LCL_SCDR;
extern uint32_t QME_LCL_PLSR;

extern uint32_t QME_LCL_TSEL;
extern uint32_t QME_LCL_TBR;
extern uint32_t QME_LCL_EISR;
extern uint32_t QME_LCL_EISR_OR;
extern uint32_t QME_LCL_EISR_CLR;
extern uint32_t QME_LCL_EIMR;
extern uint32_t QME_LCL_EIMR_OR;
extern uint32_t QME_LCL_EIMR_CLR;
extern uint32_t QME_LCL_EIPR;
extern uint32_t QME_LCL_EIPR_OR;
extern uint32_t QME_LCL_EIPR_CLR;
extern uint32_t QME_LCL_EITR;
extern uint32_t QME_LCL_EITR_OR;
extern uint32_t QME_LCL_EITR_CLR;
extern uint32_t QME_LCL_EISTR;
extern uint32_t QME_LCL_EINR;

extern uint32_t QME_LCL_RCMR;
extern uint32_t QME_LCL_RCMR_OR;
extern uint32_t QME_LCL_RCMR_CLR;

static const uint32_t QME_RCMR_STEP_ENABLE = 0;
static const uint32_t QME_RCMR_AUTO_DONE_DISABLE = 3;

extern uint32_t QME_LCL_RCSCR;
extern uint32_t QME_LCL_RCSCR_OR;
extern uint32_t QME_LCL_RCSCR_CLR;

static const uint32_t QME_RCSCR_CHANGE_DONE = 4;
static const uint32_t QME_RCSCR_CHANGE_DONE_LEN = 4;

// QME Per-Core
extern uint32_t QME_LCL_SCR;
extern uint32_t QME_LCL_SCR_OR;
extern uint32_t QME_LCL_SCR_CLEAR;

extern uint32_t QME_SSH_SRC;
extern uint32_t QME_SPWU_OTR;
extern uint32_t QME_PSCRS;
extern uint32_t QME_RMOR;
extern uint32_t QME_DCSR;

extern uint32_t QME_SCSR;
extern uint32_t QME_SCSR_WO_OR;
extern uint32_t QME_SCSR_WO_CLEAR;
extern uint32_t QME_CISR;

extern uint32_t QME_TFCSR;
extern uint32_t QME_TFCSR_WO_OR;
extern uint32_t QME_TFCSR_WO_CLEAR;

extern uint32_t CPMS_MMAR;
extern uint32_t CPMS_MMAR_WO_CLEAR;
extern uint32_t CPMS_MMAR_WO_OR;
