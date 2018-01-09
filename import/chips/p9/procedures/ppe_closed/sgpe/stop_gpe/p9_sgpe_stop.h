/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop.h $ */
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

#include "stop_sgpe_cme_api.h"
#include "wof_sgpe_pgpe_api.h"

#include "ocb_register_addresses.h"
#include "cme_register_addresses.h"
#include "ppm_register_addresses.h"
#include "cppm_register_addresses.h"
#include "qppm_register_addresses.h"
#include "gpe_register_addresses.h"

#include "ocb_firmware_registers.h"
#include "cme_firmware_registers.h"
#include "ppm_firmware_registers.h"
#include "cppm_firmware_registers.h"
#include "qppm_firmware_registers.h"

#include "ipc_api.h"
#include "ipc_async_cmd.h"

#include "p9_hcode_image_defines.H"
#include "p9_pm_hcd_flags.h"
#include "p9_stop_common.h"
#include "p9_dd1_doorbell_wr.h"

#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX || NDD1_FUSED_CORE_MODE_SCAN_FIX

#define EXTRACT_RING_BITS(mask, ring, save) save = (ring) & (mask);
#define RESTORE_RING_BITS(mask, ring, save) ring = (((ring) & (~mask)) | (save));

#endif


#define DEBUG_TRACE_CONTROL         0x100107D0
#define L3TRA_TRACE_TRCTRL_CONFIG   0x10010402
#define L3TRA_TRACE_TRDATA_CONFIG_0 0x10010403
#define L3TRA_TRACE_TRDATA_CONFIG_1 0x10010404
#define L3TRA_TRACE_TRDATA_CONFIG_4 0x10010407
#define L3TRA_TRACE_TRDATA_CONFIG_5 0x10010408
#define L3TRA_TRACE_TRDATA_CONFIG_9 0x10010409

#define EQ_RING_FENCE_MASK_LATCH 0x10010008
#define EQ_SYNC_CONFIG           0x10030000
#define EQ_OPCG_ALIGN            0x10030001
#define EQ_SCAN_REGION_TYPE      0x10030005
#define EQ_CLK_REGION            0x10030006
#define EQ_CLOCK_STAT_SL         0x10030008
#define EQ_CLOCK_STAT_ARY        0x1003000A
#define EQ_CC_ATOMIC_LOCK        0x100303FF
#define EQ_XFIR                  0x10040000
#define EQ_FIR_MASK              0x10040002
#define EQ_HOST_ATTN             0x10040009
#define EQ_LOCAL_XSTOP_ERR       0x10040018
#define EQ_THERM_MODE_REG        0x1005000F

#define EQ_BIST                  0x100F000B
#define EQ_SLAVE_CONFIG_REG      0x100F001E
#define EQ_ERROR_REG             0x100F001F
#define EQ_HANG_PULSE_6_REG      0x100F0026
#define EQ_NET_CTRL0_WAND        0x100F0041
#define EQ_NET_CTRL0_WOR         0x100F0042

#define C_SLAVE_CONFIG           0x200F001E
#define C_NET_CTRL0              0x200F0040
#define C_NET_CTRL0_WAND         0x200F0041
#define C_NET_CTRL0_WOR          0x200F0042
#define EQ_NET_CTRL1_WAND        0x100F0045
#define EQ_NET_CTRL1_WOR         0x100F0046

#define EQ_CPLT_CTRL0_OR         0x10000010
#define EQ_CPLT_CTRL0_CLEAR      0x10000020
#define EQ_CPLT_CTRL1_OR         0x10000011
#define EQ_CPLT_CTRL1_CLEAR      0x10000021
#define EQ_CPLT_CONF0            0x10000008
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
#define EQ_QPPM_ATOMIC_LOCK      0x100F03FF

#define EX_L2_MODE_REG0          0x1001080A
#define EX_L2_MODE_REG1          0x1001080B
#define EX_L2_RD_EPS_REG         0x10010810
#define EX_L2_WR_EPS_REG         0x10010811

#define EX_L3_RD_EPSILON_CFG_REG 0x10011829
#define EX_L3_WR_EPSILON_CFG_REG 0x1001182A
#define EX_L3_MODE_REG0          0x1001182B
#define EX_L3_MODE_REG1          0x1001180A

#define EX_NCU_MODE_REG          0x1001100A
#define EX_NCU_MODE_REG2         0x1001100B
#define EX_NCU_MODE_REG3         0x1001100C
#define EX_NCU_STATUS_REG        0x1001100F

#define EX_DRAM_REF_REG          0x1001180F
#define EX_PM_PURGE_REG          0x10011813
#define EX_PM_LCO_DIS_REG        0x10011816
#define EX_PM_L2_RCMD_DIS_REG    0x10011818

#define EX_CHTM0_MODE_REG        0x10012200
#define EX_CHTM1_MODE_REG        0x10012300
#define EX_CHTM0_MEM_REG         0x10012201
#define EX_CHTM1_MEM_REG         0x10012301
#define EX_CHTM0_STAT_REG        0x10012202
#define EX_CHTM1_STAT_REG        0x10012302
#define EX_CHTM0_LAST_REG        0x10012203
#define EX_CHTM1_LAST_REG        0x10012303
#define EX_CHTM0_TRIG_REG        0x10012204
#define EX_CHTM1_TRIG_REG        0x10012304
#define EX_CHTM0_CTRL_REG        0x10012205
#define EX_CHTM1_CTRL_REG        0x10012305

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


#define PK_OPTIONAL_DEBUG_HALT(panic_code) \
    if (in32(OCB_OCCS2) & BIT32(PM_DEBUG_HALT_ENABLE)) {PK_PANIC(panic_code);}


#define SGPE_STOP_QUAD_ERROR_HANDLER(quad_error, panic_code) \
    G_sgpe_stop_record.group.quad[VECTOR_ERROR]  |=  BIT32(quad_error); \
    G_sgpe_stop_record.group.quad[VECTOR_CONFIG] &= ~BIT32(quad_error); \
    G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] &= ~BIT32(quad_error); \
    G_sgpe_stop_record.state[quad_error].error_code     = panic_code;   \
    PK_OPTIONAL_DEBUG_HALT(panic_code)

enum SGPE_STOP_STATE_HISTORY_VECTORS
{
    SSH_EXIT_COMPLETE     = 0,
    SSH_EXIT_IN_SESSION   = (SSH_STOP_GATED  | SSH_TRANS_EXIT),
    SSH_ENTRY_IN_SESSION  = (SSH_STOP_GATED  | SSH_TRANS_ENTRY),
    SSH_REQ_LEVEL_UPDATE  = (SSH_STOP_GATED  | SSH_TRANS_ENTRY | SSH_REQ_ENABLE),
    SSH_ACT_LEVEL_UPDATE  = (SSH_STOP_GATED  | SSH_ACT_ENABLE),
    SSH_ACT_LV5_COMPLETE  = (SSH_ACT_LEVEL_UPDATE | BIT32(9) | BIT32(11)),
    SSH_ACT_LV5_CONTINUE  = (SSH_ACT_LV5_COMPLETE | SSH_ENTRY_IN_SESSION),
    SSH_ACT_LV8_COMPLETE  = (SSH_ACT_LEVEL_UPDATE | BIT32(8)),
    SSH_ACT_LV11_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(8) | BITS32(10, 2))
};

enum SGPE_STOP_EVENT_LEVELS
{
    LEVEL_EX_BASE                     = 8,
    LEVEL_EQ_BASE                     = 11
};

enum SGPE_STOP_PSCOM_MASK
{
    PSCOM_MASK_ALL_L2                 = BITS32(2, 2) | BITS32(10, 2),
    PSCOM_MASK_EX0_L2                 = BIT32(2) | BIT32(10),
    PSCOM_MASK_EX1_L2                 = BIT32(3) | BIT32(11),
    PSCOM_MASK_EX0_L3                 = BIT32(4) | BIT32(6) | BIT32(8),
    PSCOM_MASK_EX1_L3                 = BIT32(5) | BIT32(7) | BIT32(9)
};

enum SGPE_WOF_ACTIVE_UPDATE_STATUS
{
    IPC_SGPE_PGPE_UPDATE_QUAD_ENABLED = 0x2,
    IPC_SGPE_PGPE_UPDATE_CORE_ENABLED = 0x1,
    // Reserved_4_Do_Not_Use
    IPC_SGPE_PGPE_UPDATE_CTRL_ONGOING = 0x8,
    IPC_SGPE_PGPE_UPDATE_PGPE_HALTED  = 0xF0
};

enum SGPE_SUSPEND_FUNCTION_STATUS
{
    STATUS_IDLE                       = 0,
    STATUS_PROCESSING                 = 1,
    STATUS_SUSPENDING                 = 2,
    STATUS_SUSPENDED                  = 3
};

enum SGPE_STOP_VECTOR_INDEX
{
    VECTOR_BLOCKE                     = 0, //(core_save,   quad_req, qswu_save, qex01)
    VECTOR_BLOCKX                     = 1, //(core_save,   quad_req, qswu_save, qex01)
    VECTOR_ENTRY                      = 2, //(core_ipc,    quad,     qswu)
    VECTOR_EXIT                       = 3, //(core,        quad_ipc  qswu)
    VECTOR_ACTIVE                     = 4, //(core_ipc,    quad_ipc, qswu_active)
    VECTOR_CONFIG                     = 5, //(core,        quad)
    VECTOR_ERROR                      = 6, //(             quad)

#if !DISABLE_STOP8

    VECTOR_PIGE                       = 7, //(core)
    VECTOR_PIGX                       = 8, //(core)
    VECTOR_PCWU                       = 9  //(core)

#else

    VECTOR_RCLKE                      = 7, //(core_blocke, quad)
    VECTOR_RCLKX                      = 8, //(core_blockx, quad)
    VECTOR_PIGE                       = 9, //(core)
    VECTOR_PIGX                       = 10,//(core)
    VECTOR_PCWU                       = 11 //(core)

#endif

};

enum VECTOR_RCLKE_QUAD_OFFSETS
{
    RCLK_DIS_REQ_OFFSET   = 0,
    RCLK_DIS_DONE_OFFSET  = 8,
    QUAD_IN_STOP11_OFFSET = 16
};

enum SCOM_RESTORE_CONST
{
    SCOM_ENTRY_MARK             =   0xDEADDEAD,
    SCOM_REST_SIZE_PER_EQ       =   0x300,    //default size
    SCOM_REST_SKIP_CODE         =   0x60000000,
};

typedef struct
{
    // requested stop state calculated from core stop levels
    uint8_t  req_state_x0;
    uint8_t  req_state_x1;
    uint8_t  req_state_q;
    // actual stop state
    uint8_t  act_state_x0;
    uint8_t  act_state_x1;
    uint8_t  act_state_q;
    // both cme_flags: first(0:3) | enable(4:7)
    uint8_t  cme_flags;
    uint32_t error_code;
} sgpe_state_t;

typedef struct
{
    uint32_t expg[6]; // 2  bits
    uint32_t ex01[6]; // 2  bits
    uint32_t qex0[2]; // 6  bits
    uint32_t qex1[2]; // 6  bits
    uint32_t qswu[5]; // 6  bits

#if !DISABLE_STOP8

    uint32_t quad[7]; // 6  bits
    uint32_t core[10];// 24 bits

#else

    uint32_t quad[9]; // 6  bits
    uint32_t core[12];// 24 bits

#endif

} sgpe_group_t;

typedef struct
{
    // function status(idle, processing, suspending, suspended)
    uint8_t    status_stop;
    // sgpe-pgpe interlock status(quad/core updates enable/disable)
    uint8_t    update_pgpe;
    ipc_msg_t* updates_cmd;
    ipc_msg_t* suspend_cmd;
} sgpe_wof_t;

typedef struct
{
    uint32_t starve_counter;
    uint8_t  entry_pending;
} sgpe_fit_t;

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
    sgpe_wof_t   wof;
    sgpe_fit_t   fit;
    PkSemaphore  sem[2];
} SgpeStopRecord __attribute__ ((aligned (8)));

/// SCOM restore entry header description
typedef struct __attribute__((__packed__)) ScomRestoreHeader
{
    uint32_t entryType: 1;      // 0 - 0xDEADDEAD, 1 - under version control
    uint32_t entryVersion: 3;   // version number
    uint32_t reserved: 20;      // reserved
    uint32_t entryLimit: 8;     // Max scom entries allowed
} ScomRestoreHeader_t;

typedef union __attribute__((__packed__)) ScomRestValdityMark
{
    ScomRestoreHeader_t scomRestHeader;
    uint32_t            scomRestHeaderValue;
}  ScomRestValdityMark_t;

/// SCOM restore entry description
typedef struct __attribute__((__packed__)) ScomEntry
{
    ScomRestValdityMark_t scomEntryHeader;
    uint32_t scomEntryAddress;
    uint64_t scomEntryData;
} ScomEntry_t;


#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX
// Types for PB EQ asynch work-around
struct ring_save
{
    uint64_t element[MAX_QUADS][8];
};
#endif


/// SGPE to PGPE IPC handlers
void p9_sgpe_ipc_uih_done_hook();
void p9_sgpe_ipc_pgpe_ctrl_stop_updates(ipc_msg_t*, void*);
void p9_sgpe_ack_pgpe_ctrl_stop_updates();
void p9_sgpe_ipc_pgpe_update_active_cores(const uint32_t);
void p9_sgpe_ipc_pgpe_update_active_cores_poll_ack();
void p9_sgpe_ipc_pgpe_update_active_quads(const uint32_t, const uint32_t);
void p9_sgpe_ipc_pgpe_update_active_quads_poll_ack();
void p9_sgpe_ipc_pgpe_suspend_stop(ipc_msg_t*, void*);
void p9_sgpe_stop_suspend_all_cmes();

/// SGPE STOP Interrupt Handlers
void p9_sgpe_fit_handler();
void p9_sgpe_pgpe_halt_handler(void*, PkIrqId);
void p9_sgpe_checkstop_handler(void*, PkIrqId);
void p9_sgpe_pig_type2_handler(void*, PkIrqId);
void p9_sgpe_pig_type3_handler(void*, PkIrqId);
void p9_sgpe_pig_type5_handler(void*, PkIrqId);
void p9_sgpe_pig_type6_handler(void*, PkIrqId);
void p9_sgpe_ipi3_low_handler(void*, PkIrqId);
void p9_sgpe_stop_suspend_db1_cme(uint32_t, uint32_t);

/// SGPE STOP Entry and Exit Prototypes
void p9_sgpe_stop_init();
void p9_sgpe_stop_cme_scominit(uint32_t, uint32_t, uint32_t);

void p9_sgpe_stop_enter_thread(void*);
void p9_sgpe_stop_entry();

void p9_sgpe_stop_exit_thread(void*);
void p9_sgpe_stop_exit();
void p9_sgpe_stop_exit_handoff_cme(uint32_t);

/// Procedures shared between Istep4 and SGPE Stop
void p9_hcd_cache_chiplet_l3_dcc_setup(uint32_t);
void p9_hcd_cache_gptr_time_initf(uint32_t);
void p9_hcd_cache_dpll_initf(uint32_t);
void p9_hcd_cache_dcc_skewadjust_setup(uint32_t);
void p9_hcd_cache_repair_initf(uint32_t);
void p9_hcd_cache_initf(uint32_t);
void p9_hcd_cache_scan0(uint32_t, uint64_t, uint64_t);

#ifdef __cplusplus
}  // extern "C"
#endif
