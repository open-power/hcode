/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/gpehw_common.h $         */
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
#ifndef __GPEHW_COMMON_H__
#define __GPEHW_COMMON_H__

enum GPE_PIG_TYPES
{
    GPE_PIG_PSTATE_PHASE1       = 0,
    GPE_PIG_PSTATE_PHASE2       = 1,
    GPE_PIG_STOP_STATE_CHANGE   = 2,
    GPE_PIG_CME_REQUEST         = 3,
    GPE_PIG_CME_ACK             = 4,
    GPE_PIG_CME_ERROR           = 5,
    GPE_PIG_QUAD_PPM_MSG        = 6,
    GPE_PIG_QUAD_PPM_ERROR      = 7
};


enum GPE_CHIPLET_CONFIGS
{
    CORES_PER_EX                 = 2,
    EXES_PER_QUAD                = 2,
    CORES_PER_QUAD               = 4,
    MAX_QUADS                    = 6,
    MAX_EXES                     = 12,
    MAX_CORES                    = 24
};

enum GPE_CHIPLET_MASKS
{
    FST_CORE_IN_EX               = 0x2,
    SND_CORE_IN_EX               = 0x1,
    BOTH_CORES_IN_EX             = 0x3,
    FST_EX_IN_QUAD               = 0x2,
    SND_EX_IN_QUAD               = 0x1,
    BOTH_EXES_IN_QUAD            = 0x3
};


enum GPE_SCOM_ADDRESS_PARAMETERS
{
    CORE_ADDR_BASE              = 0x20000000,
    CORE_ADDR_OFFSET            = 0x01000000,
    QUAD_ADDR_BASE              = 0x10000000,
    QUAD_ADDR_OFFSET            = 0x01000000,
    EX_ADDR_BASE                = 0x10010000,
    EX0_ADDR_OFFSET             = 0x00000000,
    EX1_ADDR_OFFSET             = 0x00000400,
    L2_ADDR_BASE                = 0x10010800,
    NCU_ADDR_BASE               = 0x10011000,
    L3_ADDR_BASE                = 0x10011800,
    L2_TRA_ADDR_BASE            = 0x10012800,
    CME_ADDR_BASE               = 0x10012000,
    CME0_ADDR_OFFSET            = 0x00000000,
    CME1_ADDR_OFFSET            = 0x00000400
};

enum GPE_ERR_INJ_BIT_POS
{
    SGPE_HCODE_ERR_INJ_BIT      =   0x00000002,
    PGPE_HCODE_ERR_INJ_BIT      =   0x00000001,
};


/// GPE SCOM
#define GPE_SCOM_ADDR(addr, cplt_base, cq_offset, ex_select) \
    (addr | cplt_base | (cq_offset << 24) | (ex_select << 10))

#define GPE_SCOM_ADDR_CORE(addr, core) \
    GPE_SCOM_ADDR(addr, CORE_ADDR_BASE, core, 0)

#define GPE_SCOM_ADDR_EX(addr, quad, ex) \
    GPE_SCOM_ADDR(addr, EX_ADDR_BASE, quad, ex)

#define GPE_SCOM_ADDR_QUAD(addr, quad) \
    GPE_SCOM_ADDR(addr, QUAD_ADDR_BASE, quad, 0)

#define GPE_SCOM_ADDR_CME(addr, quad, cme) \
    GPE_SCOM_ADDR(addr, CME_ADDR_BASE, quad, cme)

#define GPE_GETSCOM(addr, data)   PPE_LVD(addr, data);

#define GPE_PUTSCOM(addr, data)   putscom_norc(addr, data);

#define GPE_GETSCOM_VAR(addr, cplt_base, cq_offset, ex_select, data) \
    PPE_LVD(GPE_SCOM_ADDR(addr, cplt_base, cq_offset, ex_select), data);

#define GPE_PUTSCOM_VAR(addr, cplt_base, cq_offset, ex_select, data) \
    putscom_norc(GPE_SCOM_ADDR(addr, cplt_base, cq_offset, ex_select), data);

/// GPE data buffer in SRAM(mostly for IPC)
#define GPE_BUFFER(declaration) \
    declaration __attribute__ ((__aligned__(8))) __attribute__ ((section (".noncacheable")))


#endif  /* __GPEHW_COMMON_H__ */
