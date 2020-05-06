/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_optrace.h $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
#ifndef __PGPE_OPTRACE_H__
#define __PGPE_OPTRACE_H__

#if !defined(__PPE2FSP__)
    #include "iota.h"
#endif

enum PGPE_OPT_CODES
{
    PGPE_OPT_ERROR_MODE             = 0x5e,
    PGPE_OPT_SAFE_MODE              = 0x5f,
    PGPE_OPT_HALT_CONDITION         = 0x50,
    PGPE_OPT_UNEXP_EVENT            = 0x51,
    PGPE_OPT_WOF_CTRL               = 0x54,
    PGPE_OPT_WOV                    = 0x65,
    PGPE_OPT_PCB_TYPE1              = 0x56,
    PGPE_OPT_START_STOP             = 0x58,
    PGPE_OPT_SEV_FAULT              = 0x6d,
    PGPE_OPT_WOF_VRT                = 0x52,
    PGPE_OPT_SET_PMCR               = 0x59,
    PGPE_OPT_ACTUATE_STEP_DONE      = 0x63,
    PGPE_OPT_CLIP_UPDT              = 0x57,

    PGPE_OPT_AUCTION_DONE           = 0x90,
    PGPE_OPT_WOF_CALC_DONE          = 0xA1,
    PGPE_OPT_OCS_THRESH_TRANS       = 0x92,
    PGPE_OPT_OCS_DIRTY_TYPE         = 0x93,
    PGPE_OPT_OCS_DROOP_COND         = 0x9e,
    PGPE_OPT_CEFF_OVERAGE_UPDT      = 0x9f,

    PGPE_OPT_WOF_VRT_ACK            = 0xc2,
    PGPE_OPT_WOF_CTRL_ACK           = 0xc4,
    PGPE_OPT_PGPE_BOOTED            = 0xc5,
    PGPE_OPT_CLIP_UPDT_ACK          = 0xc7,
    PGPE_OPT_START_STOP_ACK         = 0xc8,
    PGPE_OPT_MEM_TRACE_LOSS         = 0xcd,
    PGPE_OPT_ERROR_MODE_DONE        = 0xce,
    PGPE_OPT_SAFE_MODE_DONE         = 0xcf,
};

typedef union
{
    uint8_t byte[16];
    uint16_t half[8];
    uint32_t word[4];
} optrace_payload_t;


extern optrace_payload_t G_pgpe_opt_data;

#define pgpe_opt_set_byte(idx,value) G_pgpe_opt_data.byte[idx] = value
#define pgpe_opt_set_half(idx,value) G_pgpe_opt_data.half[idx] = value
#define pgpe_opt_set_word(idx,value) G_pgpe_opt_data.word[idx] = value
#define pgpe_opt_get() (uint32_t*)&G_pgpe_opt_data.word
#endif //
