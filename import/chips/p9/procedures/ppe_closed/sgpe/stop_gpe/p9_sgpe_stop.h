/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
///
/// \file p9_cme_stop.h
/// \brief header of p9_cme_stop_enter_thread.c and p9_cme_stop_exit.c
///

#ifdef __cplusplus
extern "C" {
#endif

#include "pk.h"
#include "ppe42.h"
#include "ppe42_scom.h"

#include "ppehw_common.h"
#include "gpehw_common.h"
#include "occhw_interrupts.h"

#include "ocb_register_addresses.h"
#include "cme_register_addresses.h"
#include "ppm_register_addresses.h"
#include "cppm_register_addresses.h"
#include "qppm_register_addresses.h"

#include "ocb_firmware_registers.h"
#include "cme_firmware_registers.h"
#include "ppm_firmware_registers.h"
#include "cppm_firmware_registers.h"
#include "qppm_firmware_registers.h"

#include "p9_stop_common.h"

#define EQ_RING_FENCE_MASK_LATCH 0x10010008
#define EQ_SYNC_CONFIG           0x10030000
#define EQ_OPCG_ALIGN            0x10030001
#define EQ_SCAN_REGION_TYPE      0x10030005
#define EQ_CLK_REGION            0x10030006
#define EQ_CLOCK_STAT_SL         0x10030008
#define EQ_CLOCK_STAT_ARY        0x1003000A
#define EQ_THERM_MODE_REG        0x1005000F

#define EQ_BIST                  0x100F000B
#define EQ_HANG_PULSE_6_REG      0x100F0026
#define EQ_NET_CTRL0_WAND        0x100F0041
#define EQ_NET_CTRL0_WOR         0x100F0042
#define C_NET_CTRL0              0x200F0040
#define C_NET_CTRL0_WAND         0x200F0041
#define C_NET_CTRL0_WOR          0x200F0042
#define EQ_NET_CTRL1_WAND        0x100F0045
#define EQ_NET_CTRL1_WOR         0x100F0046

#define EQ_CPLT_CTRL0_OR         0x10000010
#define EQ_CPLT_CTRL0_CLEAR      0x10000020
#define EQ_CPLT_CTRL1_OR         0x10000011
#define EQ_CPLT_CTRL1_CLEAR      0x10000021
#define EQ_CPLT_CONF0_OR         0x10000018
#define EQ_CPLT_CONF0_CLEAR      0x10000028
#define EQ_CPLT_STAT0            0x10000100

#define EQ_QPPM_DPLL_CTRL_CLEAR  0x100F0153
#define EQ_QPPM_DPLL_CTRL_OR     0x100F0154
#define EQ_QPPM_DPLL_STAT        0x100F0155
#define EQ_QPPM_QACCR_SCOM1      0x100F0161
#define EQ_QPPM_QACCR_SCOM2      0x100F0162
#define EQ_QPPM_QACSR            0x100F0163
#define EQ_PPM_CGCR              0x100F0164
#define EQ_QPPM_EXCGCR           0x100F0165
#define EQ_QPPM_EXCGCR_CLR       0x100F0166
#define EQ_QPPM_EXCGCR_OR        0x100F0167
#define EQ_QPPM_QCCR             0x100F01BD
#define EQ_QPPM_QCCR_WCLEAR      0x100F01BE
#define EQ_QPPM_QCCR_WOR         0x100F01BF

#define EX_NCU_STATUS_REG        0x1001100F
#define EX_L3_MODE_REG1          0x1001180A
#define EX_DRAM_REF_REG          0x1001180F
#define EX_PM_PURGE_REG          0x10011813
#define EX_PM_LCO_DIS_REG        0x10011816
#define EX_PM_L2_RCMD_DIS_REG    0x10011818

#define PERV_CPLT_CTRL0_OR       0x10000010
#define PERV_CPLT_CTRL0_CLEAR    0x10000020
#define PERV_CPLT_CTRL1_OR       0x10000011
#define PERV_CPLT_CTRL1_CLEAR    0x10000021
#define PERV_OPCG_REG0           0x10030002
#define PERV_OPCG_REG1           0x10030003
#define PERV_SCAN_REGION_TYPE    0x10030005
#define PERV_CLK_REGION          0x10030006
#define PERV_BIST                0x1003000B
#define PERV_OPCG_CAPT0          0x10030010
#define PERV_OPCG_CAPT1          0x10030011
#define PERV_OPCG_CAPT2          0x10030012
#define PERV_CPLT_STAT0          0x10000100
#define PERV_NET_CTRL1_WAND      0x000F0045

/// Macro to update STOP History
#define SGPE_STOP_UPDATE_HISTORY(id,base,gated,trans,req_l,act_l,req_e,act_e) \
    hist.value                   = 0;                                         \
    hist.fields.stop_gated       = gated;                                     \
    hist.fields.stop_transition  = trans;                                     \
    hist.fields.req_stop_level   = req_l;                                     \
    hist.fields.act_stop_level   = act_l;                                     \
    hist.fields.req_write_enable = req_e;                                     \
    hist.fields.act_write_enable = act_e;                                     \
    GPE_PUTSCOM_VAR(PPM_SSHSRC, base, id, 0, hist.value);

enum SGPE_STOP_RETURN_CODES
{
    SGPE_STOP_SUCCESS                 = 0
};

enum SGPE_STOP_IRQ_SHORT_NAMES
{
    IRQ_STOP_TYPE2                    = OCCHW_IRQ_PMC_PCB_INTR_TYPE2_PENDING,
    IRQ_STOP_TYPE3                    = OCCHW_IRQ_PMC_PCB_INTR_TYPE3_PENDING,
    IRQ_STOP_TYPE6                    = OCCHW_IRQ_PMC_PCB_INTR_TYPE6_PENDING
};

enum SGPE_STOP_IRQ_PAYLOAD_MASKS
{
    TYPE2_PAYLOAD_EXIT_EVENT          = 0xC00,
    TYPE2_PAYLOAD_STOP_LEVEL          = 0xF,
    TYPE3_PAYLOAD_EXIT_EVENT          = 0xC00,
    TYPE6_PAYLOAD_EXIT_EVENT          = 0xF
};

enum SGPE_STOP_EVENT_LEVELS
{
    LEVEL_EX_BASE                     = 8,
    LEVEL_EQ_BASE                     = 11
};

enum SGPE_STOP_CME_FLAGS
{
    CME_CORE0_ENTRY_FIRST             = BIT64(28),
    CME_CORE1_ENTRY_FIRST             = BIT64(29),
    CME_CORE0_ENABLE                  = BIT64(30),
    CME_CORE1_ENABLE                  = BIT64(31),
    CME_EX1_INDICATOR                 = BIT64(26)
};

enum SGPE_STOP_PSCOM_MASK
{
    PSCOM_MASK_ALL_L2                 = BITS64(2, 2) | BITS64(10, 2),
    PSCOM_MASK_EX0_L2                 = BIT64(2) | BIT64(10),
    PSCOM_MASK_EX1_L2                 = BIT64(3) | BIT64(11),
    PSCOM_MASK_EX0_L3                 = BIT64(4) | BIT64(6) | BIT64(8),
    PSCOM_MASK_EX1_L3                 = BIT64(5) | BIT64(7) | BIT64(9)
};


enum SGPE_STOP_VECTOR_INDEX
{
    VECTOR_EXIT                       = 0,
    VECTOR_ENTRY                      = 1,
    VECTOR_CONFIG                     = 2
};

#if HW386311_DD1_PBIE_RW_PTR_STOP11_FIX
#define EXTRACT_RING_BITS(mask, ring, save) save = (ring) & (mask);
#define RESTORE_RING_BITS(mask, ring, save) ring = (((ring) & (~mask)) | (save));
#endif

typedef struct
{
    // requested stop state calculated from core stop levels
    uint8_t req_state_x0;
    uint8_t req_state_x1;
    uint8_t req_state_q;
    // actual stop state
    uint8_t act_state_x0;
    uint8_t act_state_x1;
    uint8_t act_state_q;
    // both cme_flags: first(0:3) | enable(4:7)
    uint8_t cme_flags;
} sgpe_state_t;

typedef struct
{
    uint32_t core[3]; // 24 bits
    uint32_t ex_l[3]; // 6 bits
    uint32_t ex_r[3]; // 6 bits
    uint32_t ex_b[3]; // 12 bits
    uint32_t quad[3]; // 6 bits
    uint32_t qswu[3]; // 6 bits
} sgpe_group_t;

/// SGPE Stop Score Board Structure
typedef struct
{
    // requested stop level for all cores in all quads
    // needs to be global variable for ex/quad stop evaluation
    uint8_t      level[MAX_QUADS][CORES_PER_QUAD];
    // requested and actual state of quad stop
    sgpe_state_t state[MAX_QUADS];
    // group of ex and quad entering or exiting the stop
    sgpe_group_t group;
    PkSemaphore  sem[2];
} SgpeStopRecord;


/// SGPE STOP Entry and Exit Prototypes
void p9_sgpe_stop_pig_handler(void*, PkIrqId);
void p9_sgpe_stop_enter_thread(void*);
void p9_sgpe_stop_exit_thread(void*);
int  p9_sgpe_stop_entry();
int  p9_sgpe_stop_exit();

int  p9_hcd_cache_scan0(uint32_t, uint64_t, uint64_t);
int  p9_hcd_cache_poweron(uint32_t);
int  p9_hcd_cache_chiplet_reset(uint32_t, uint32_t);
int  p9_hcd_cache_chiplet_l3_dcc_setup(uint32_t);
int  p9_hcd_cache_gptr_time_initf(uint32_t);
int  p9_hcd_cache_dpll_initf(uint32_t);
int  p9_hcd_cache_dpll_setup(uint32_t);
int  p9_hcd_cache_dcc_skewadjust_setup(uint32_t);
int  p9_hcd_cache_chiplet_init(uint32_t);
int  p9_hcd_cache_repair_initf(uint32_t);
int  p9_hcd_cache_arrayinit(uint32_t, uint32_t ex);
int  p9_hcd_cache_initf(uint32_t);
int  p9_hcd_cache_startclocks(uint32_t, uint32_t);
int  p9_hcd_cache_l2_startclocks(uint32_t, uint32_t, uint32_t);
int  p9_hcd_cache_scominit(uint32_t, uint32_t);
int  p9_hcd_cache_scomcust(uint32_t);
int  p9_hcd_cache_ras_runtime_scom(uint32_t);
int  p9_hcd_cache_occ_runtime_scom(uint32_t);

#ifdef __cplusplus
}  // extern "C"
#endif
