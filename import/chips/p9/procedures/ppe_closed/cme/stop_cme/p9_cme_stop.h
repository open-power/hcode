/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2021                                                    */
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

#include "pk.h"
#include "ppe42.h"
#include "ppe42_scom.h"

#include "ppehw_common.h"
#include "cmehw_common.h"
#include "cmehw_interrupts.h"
#include "stop_sgpe_cme_api.h"

#include "cme_register_addresses.h"
#include "ppm_register_addresses.h"
#include "cppm_register_addresses.h"

#include "cme_firmware_registers.h"
#include "ppm_firmware_registers.h"
#include "cppm_firmware_registers.h"

#include "p9_hcode_image_defines.H"
#include "p9_pm_hcd_flags.h"
#include "p9_stop_common.h"
#include "p9_cme.h"

// ram_vtid    [0:1]   00
// pre_decode  [2:5]   0000
// spare       [6:7]   00
// instruction [8:39]  0111 11,00 000,1 0101 0100 0,010 1010 011,0
//                     31 | GPR0(0) | SPRD(10101 01000) | MFSPR(339)
// constant    [40:63] 0000 0000 0000 0000 0000 0000
#define RAM_MFSPR_SPRD_GPR0    0x007C1542A6000000
#define RAM_MTSPR_SPRD_GPR0    0x007C1543A6000000

// ram_vtid    [0:1]   00
// pre_decode  [2:5]   0000
// spare       [6:7]   00
// instruction [8:39]  0111 11,00 000,1 1001 0100 1,011 1010 011,0
//                     31 | GPR0(0) | HRMOR(11001 01001) | MTSPR(467)
// constant    [40:63] 0000 0000 0000 0000 0000 0000
#define RAM_MTSPR_HRMOR_GPR0   0x007C194BA6000000

// ram_vtid    [0:1]   00
// pre_decode  [2:5]   0000
// spare       [6:7]   00
// instruction [8:39]  0111 11,00 000,1 0111 1101 0,011 1010 011,0
//                     31 | GPR0(0) | PSSCR(10111 11010) | MTSPR(467)
// constant    [40:63] 0000 0000 0000 0000 0000 0000
#define RAM_MTSPR_PSSCR_GPR0   0x007C17D3A6000000
#define RAM_MFSPR_PSSCR_GPR0   0x007C17D2A6000000

#define RAM_MTSPR_LPIDR_GPR0   0x107C1F4BA6000000
#define RAM_MFSPR_LPIDR_GPR0   0x007C1F4AA6000000

#if HW402407_NDD1_TLBIE_STOP_WORKAROUND
    #define POWMAN_RESERVED_LPID 0xFFF
#endif

/// handcoded addresses TO BE REMOVED

#define PSCOM_MODE_REG         0x20010000

#define CORE_FIRMASK           0x20010A43
#define CORE_ACTION0           0x20010A46
#define CORE_ACTION1           0x20010A47
#define SPATTN_READ            0x20010A99
#define SPATTN_MASK            0x20010A9A

#define C_HANG_CONTROL         0x20010A00
#define RAS_STATUS             0x20010A02
#define RAM_MODEREG            0x20010A4E
#define RAM_CTRL               0x20010A4F
#define RAM_STATUS             0x20010A50
#define SCOM_SPRC              0x20010A80
#define SPR_MODE               0x20010A84
#define SCRATCH0               0x20010A86
#define SCRATCH1               0x20010A87
#define SCRATCH2               0x20010A88
#define SCRATCH3               0x20010A89
#define C_SPATTN_MASK          0x20010A9A
#define THREAD_INFO            0x20010A9B
#define DIRECT_CONTROLS        0x20010A9C
#define SPURR_FREQ_SCALE       0x20010AA0
#define SPURR_FREQ_REF         0x20010AA1
#define IMA_EVENT_MASK         0x20010AA8
#define CORE_THREAD_STATE      0x20010AB3
#define HRMOR                  0x20010AB9
#define URMOR                  0x20010ABA

#define C_SYNC_CONFIG          0x20030000
#define C_OPCG_ALIGN           0x20030001
#define C_SCAN_REGION_TYPE     0x20030005
#define C_CLK_REGION           0x20030006
#define C_CLOCK_STAT_SL        0x20030008
#define C_CLOCK_STAT_NSL       0x20030009
#define C_CLOCK_STAT_ARY       0x2003000a
#define C_BIST                 0x2003000B
#define C_XFIR                 0x20040000
#define C_LFIR_OR              0x2004000C
#define C_THERM_MODE_REG       0x2005000F

#define C_SLAVE_CONFIG_REG     0x200F001E
#define C_ERROR_REG            0x200F001F
#define C_HANG_PULSE_1_REG     0x200F0021
#define C_PPM_CGCR             0x200F0164

#define C_CPLT_CTRL0_OR        0x20000010
#define C_CPLT_CTRL0_CLEAR     0x20000020
#define C_CPLT_CTRL1_OR        0x20000011
#define C_CPLT_CTRL1_CLEAR     0x20000021
#define C_CPLT_CONF0           0x20000008
#define C_CPLT_CONF0_OR        0x20000018
#define C_CPLT_CONF0_CLEAR     0x20000028
#define C_CPLT_STAT0           0x20000100

#define PERV_CPLT_CTRL0_OR     0x20000010
#define PERV_CPLT_CTRL0_CLEAR  0x20000020
#define PERV_CPLT_CTRL1_OR     0x20000011
#define PERV_CPLT_CTRL1_CLEAR  0x20000021
#define PERV_OPCG_REG0         0x20030002
#define PERV_OPCG_REG1         0x20030003
#define PERV_SCAN_REGION_TYPE  0x20030005
#define PERV_CLK_REGION        0x20030006
#define PERV_BIST              0x2003000B
#define PERV_OPCG_CAPT0        0x20030010
#define PERV_OPCG_CAPT1        0x20030011
#define PERV_OPCG_CAPT2        0x20030012
#define PERV_CPLT_STAT0        0x20000100



#define PK_OPTIONAL_DEBUG_HALT(panic_code) \
    if(in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_PM_DEBUG_HALT_ENABLE)) {PK_PANIC(panic_code);}


#if NIMBUS_DD_LEVEL == 10
#define CME_STOP_CORE_ERROR_HANDLER(core, core_error, panic_code) \
    PK_PANIC(panic_code);
#else
#define CME_STOP_CORE_ERROR_HANDLER(core, core_error, panic_code) \
    p9_cme_stop_core_error_handler(core, core_error, panic_code); \
    PK_OPTIONAL_DEBUG_HALT(panic_code)
#endif


#define CME_PM_EXIT_DELAY         \
    asm volatile ("tw 0, 0, 0");  \
    asm volatile ("tw 0, 0, 0");  \
    asm volatile ("tw 0, 0, 0");  \
    asm volatile ("tw 0, 0, 0");



enum CME_IRQ_VECTORS
{
    // if auto mask eimr.spwu else never mask eimr.spwu
#if SPWU_AUTO
    IRQ_VEC_WAKE_C0                  = BIT64(12) | BIT64(14) | BIT64(16),
    IRQ_VEC_WAKE_C1                  = BIT64(13) | BIT64(15) | BIT64(17),
#else
    IRQ_VEC_WAKE_C0                  = BIT64(12) | BIT64(16),
    IRQ_VEC_WAKE_C1                  = BIT64(13) | BIT64(17),
#endif
    IRQ_VEC_SGPE_C0                  = BIT64(12) | BIT64(20),
    IRQ_VEC_SGPE_C1                  = BIT64(13) | BIT64(21),
    IRQ_VEC_PCWU_C0_UPPER            = BIT32(12),
    IRQ_VEC_PCWU_C1_UPPER            = BIT32(13),
    IRQ_VEC_PCWU_C0                  = BIT64(12),
    IRQ_VEC_PCWU_C1                  = BIT64(13),
    IRQ_VEC_SPWU_C0                  = BIT64(14),
    IRQ_VEC_SPWU_C1                  = BIT64(15),
    IRQ_VEC_RGWU_C0                  = BIT64(16),
    IRQ_VEC_RGWU_C1                  = BIT64(17),
    IRQ_VEC_STOP_C0_UPPER            = BIT32(20),
    IRQ_VEC_STOP_C1_UPPER            = BIT32(21),
    IRQ_VEC_STOP_C0                  = BIT64(20),
    IRQ_VEC_STOP_C1                  = BIT64(21)
};

enum CME_STOP_STATE_HISTORY_VECTORS
{
    SSH_EXIT_COMPLETE    = 0,
    SSH_EXIT_IN_SESSION  = (SSH_STOP_GATED  | SSH_TRANS_EXIT),
    SSH_REQ_LEVEL_UPDATE = (SSH_TRANS_ENTRY | SSH_REQ_ENABLE),
    SSH_ACT_LEVEL_UPDATE = (SSH_STOP_GATED  | SSH_ACT_ENABLE),
    //SSH_ACT_LV1_COMPLETE = (SSH_STOP_GATED  | BIT32(7) | BITS32(11, 3)),
    SSH_ACT_LV1_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(11)),
    SSH_ACT_LV2_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(10)),
    SSH_ACT_LV2_CONTINUE = (SSH_ACT_LV2_COMPLETE | SSH_TRANS_ENTRY),
    SSH_ACT_LV3_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BITS32(10, 2)),
    SSH_ACT_LV3_CONTINUE = (SSH_ACT_LV3_COMPLETE | SSH_TRANS_ENTRY),
    SSH_ACT_LV4_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(9)),
    SSH_ACT_LV4_CONTINUE = (SSH_ACT_LV4_COMPLETE | SSH_TRANS_ENTRY),
    SSH_ACT_LV5_CONTINUE = (SSH_ACT_LV4_COMPLETE | SSH_TRANS_SGPE)
};

enum CME_STOP_SRR1
{
    MOST_STATE_LOSS                  = 3,
    SOME_STATE_LOSS_BUT_NOT_TIMEBASE = 2,
    NO_STATE_LOSS                    = 1
};

enum CME_STOP_SUSPEND_BLOCK
{
    STOP_SUSPEND_ENCODE = 0xF, //0bxxxx for command encodings of (un)block or (un)suspend
    STOP_SUSPEND_ACTION = 0x8, //0b1xxY for suspend/block, 0xxY for unsuspend/unblock
    STOP_SUSPEND_EXIT   = 0x4, //0bZ10Y for (un)suspend/(un)block exit
    STOP_SUSPEND_ENTRY  = 0x2, //0bZ01Y for (un)suspend/(un)block entry
    STOP_SUSPEND_SELECT = 0x1  //0bZxx1 for SUSPEND, 0bZxx0 for BLOCK
};

enum SPR_ACTN
{
    SPR_SELF_SAVE       =   0x00,
    SPR_SELF_RESTORE    =   0x01,
};


enum CME_SCOM_RESTORE_CONST
{
    SCOM_REST_SKIP_CODE =   0x60000000,
};


#if TEST_ONLY_BCE_IRR
#define FLAG_BCE_IRR_ENABLE BIT32(18)

typedef struct
{
    uint32_t cmeid;
    uint32_t sbase;
    uint32_t mbase;
    union
    {
        uint32_t word;
        uint8_t  byte[4];
    } data;
} BceIrritator;
#endif

typedef struct
{
    uint32_t scomEntryHeader;
    uint32_t scomEntryAddress;
    uint64_t scomEntryData;
} ScomEntry_t;

/// Stop Score Board Structure
typedef struct
{
    // requested stop levels are read from pm_state,
    // need to be a global state for stop8 detection
    uint8_t       req_level[MAX_CORES_PER_CME];
    // actual stop levels are changed through entry,
    // need to be a global state for aborting entry
    uint8_t       act_level[MAX_CORES_PER_CME];
    // uint8_t above is processed by stb/lbz in asm, no additional shifting
    // mark the start and the end of entry/exit process
    uint32_t      entry_ongoing;
    uint32_t      exit_ongoing;
    // whether core is in running state,
    // used for aborted entry detection or filter wakeup core select in scom address
    uint32_t      core_running;
    // core stop process handoff to sgpe from cme, used to mask pc_intr_pending
    uint32_t      core_stopgpe;
    // core with pc_intr_pending blocked for decrementor stop5 wakeup support
    uint32_t      core_blockpc;
    // core in block wakeup mode, can be used as core select in scom address or data
    uint32_t      core_blockwu;
    // core in block entry mode, can be used as core select in scom address or data
    uint32_t      core_blockey;
    // core in suspend wakeup mode, can be used as core select in scom address or data
    uint32_t      core_suspendwu;
    // core in suspend entry mode, can be used as core select in scom address or data
    uint32_t      core_suspendey;
    // core needs specifical entry masks due to vdm prolonged droop events
    uint32_t      core_vdm_droop;
    // core in special wakeup, can be used as core select in scom address or data
    uint32_t      core_in_spwu;
    // core in error state, prevent it being further processed
    uint32_t      core_stop1prime;
    uint32_t      core_errored;
    // store panic code indicating where and what that certain core encountered error
    // mostly from various xstop detection or failed clock operation through stages of code
    uint32_t      error_code[2];
} CmeStopRecord __attribute__ ((aligned (8)));;


#if HW405292_NDD1_PCBMUX_SAVIOR
    void p9_cme_pcbmux_savior_prologue(uint32_t);
    void p9_cme_pcbmux_savior_epilogue(uint32_t);
#endif

/// CME STOP Entry and Exit Prototypes
void p9_cme_stop_init();
void p9_cme_stop_eval_eimr_override();
void p9_cme_stop_core_error_handler(uint32_t, uint32_t, uint32_t);

void p9_cme_core_livelock_buster();

void p9_cme_stop_entry();
void p9_cme_stop_exit();

void p9_cme_stop_self_execute(uint32_t, uint32_t);
void p9_cme_stop_self_cleanup(uint32_t);

// CME STOP Interrupt Handlers
void p9_cme_stop_enter_handler(void);

void p9_cme_stop_pcwu_handler(void);
void p9_cme_stop_rgwu_handler(void);
void p9_cme_stop_spwu_handler(void);

void p9_cme_stop_db1_handler(void);
void p9_cme_stop_db2_handler(void);

// CME STOP Utility Functions
void p9_hcd_core_scan0(uint32_t, uint64_t, uint64_t);
void p9_hcd_core_pcb_arb(uint32_t, uint8_t); // not used

// CME Error Handler
void p9_cme_pgpe_hb_loss_handler(void*, PkIrqId);
