/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop.h $ */
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

#include "pk.h"
#include "ppe42.h"
#include "ppe42_scom.h"

#include "ppehw_common.h"
#include "cmehw_common.h"
#include "cmehw_interrupts.h"

#include "cme_register_addresses.h"
#include "ppm_register_addresses.h"
#include "cppm_register_addresses.h"

#include "cme_firmware_registers.h"
#include "ppm_firmware_registers.h"
#include "cppm_firmware_registers.h"

#include "p9_stop_common.h"

// ram_vtid    [0:1]   00
// pre_decode  [2:5]   0000
// spare       [6:7]   00
// instruction [8:39]  0111 11,00 000,1 0101 0100 0,010 1010 011,0
//                     31 | GPR0(0) | SPRD(10101 01000) | MFSPR(339)
// constant    [40:63] 0000 0000 0000 0000 0000 0000
#define RAM_MFSPR_SPRD_GPR0    0x7C1542A6000000

// ram_vtid    [0:1]   00
// pre_decode  [2:5]   0000
// spare       [6:7]   00
// instruction [8:39]  0111 11,00 000,1 1001 0100 1,011 1010 011,0
//                     31 | GPR0(0) | HRMOR(11001 01001) | MTSPR(467)
// constant    [40:63] 0000 0000 0000 0000 0000 0000
#define RAM_MTSPR_HRMOR_GPR0   0x7C194BA6000000

// ram_vtid    [0:1]   00
// pre_decode  [2:5]   0000
// spare       [6:7]   00
// instruction [8:39]  0111 11,00 000,1 0111 1101 0,011 1010 011,0
//                     31 | GPR0(0) | PSSCR(10111 11010) | MTSPR(467)
// constant    [40:63] 0000 0000 0000 0000 0000 0000
#define RAM_MTSPR_PSSCR_GPR0   0x7C17D3A6000000

/// handcoded addresses TO BE REMOVED

#define RAS_STATUS             0x20010A02
#define RAM_MODEREG            0x20010A4E
#define RAM_CTRL               0x20010A4F
#define RAM_STATUS             0x20010A50
#define SCOM_SPRC              0x20010A80
#define SPR_MODE               0x20010A84
#define SCRACTH0               0x20010A86
#define SCRACTH1               0x20010A87
#define THREAD_INFO            0x20010A9B
#define DIRECT_CONTROLS        0x20010A9C

#define C_SYNC_CONFIG          0x20030000
#define C_OPCG_ALIGN           0x20030001
#define C_SCAN_REGION_TYPE     0x20030005
#define C_CLK_REGION           0x20030006
#define C_CLOCK_STAT_SL        0x20030008
#define C_CLOCK_STAT_NSL       0x20030009
#define C_CLOCK_STAT_ARY       0x2003000a
#define C_BIST                 0x2003000B
#define C_THERM_MODE_REG       0x2005000F

#define C_SLAVE_CONFIG_REG     0x200F001E
#define C_ERROR_REG            0x200F001F
#define C_HANG_PULSE_1_REG     0x200F0021
#define C_PPM_CGCR             0x200F0164

#define C_CPLT_CTRL0_OR        0x20000010
#define C_CPLT_CTRL0_CLEAR     0x20000020
#define C_CPLT_CTRL1_OR        0x20000011
#define C_CPLT_CTRL1_CLEAR     0x20000021
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
#define PERV_CPLT_STAT0        0x20000100

/// Macro to update STOP History
#define CME_STOP_UPDATE_HISTORY(core,gated,trans,req_l,act_l,req_e,act_e) \
    hist.value                   = 0;                                     \
    hist.fields.stop_gated       = gated;                                 \
    hist.fields.stop_transition  = trans;                                 \
    hist.fields.req_stop_level   = req_l;                                 \
    hist.fields.act_stop_level   = act_l;                                 \
    hist.fields.req_write_enable = req_e;                                 \
    hist.fields.act_write_enable = act_e;                                 \
    CME_PUTSCOM(PPM_SSHSRC, core, hist.value);

/// Macro to update PSSCR.PLS
#define CME_STOP_UPDATE_PLS_SRR1(pls, srr1_t0, srr1_t1, srr1_t2, srr1_t3)      \
    ((((uint64_t)pls) << SHIFT64(36)) | (((uint64_t)srr1_t0) << SHIFT64(39)) | \
     (((uint64_t)pls) << SHIFT64(44)) | (((uint64_t)srr1_t1) << SHIFT64(47)) | \
     (((uint64_t)pls) << SHIFT64(52)) | (((uint64_t)srr1_t2) << SHIFT64(55)) | \
     (((uint64_t)pls) << SHIFT64(60)) |  ((uint64_t)srr1_t3)                 | \
     (BIT64(32) | BIT64(40) | BIT64(48) | BIT64(56)))

/// CME STOP Return Codes
enum CME_STOP_RETURN_CODE
{
    CME_STOP_SUCCESS                 = 0
};

/// CME STOP IRQs with shorter names
enum CME_STOP_IRQ_SHORT_NAME
{
    IRQ_DB1_C0                       = CMEHW_IRQ_DOORBELL1_C0,
    IRQ_DB1_C1                       = CMEHW_IRQ_DOORBELL1_C1,
    IRQ_STOP_C0                      = CMEHW_IRQ_PC_PM_STATE_ACTIVE_C0,
    IRQ_STOP_C1                      = CMEHW_IRQ_PC_PM_STATE_ACTIVE_C1,
    IRQ_PC_C0                        = CMEHW_IRQ_PC_INTR_PENDING_C0,
    IRQ_PC_C1                        = CMEHW_IRQ_PC_INTR_PENDING_C1,
    IRQ_RWU_C0                       = CMEHW_IRQ_REG_WAKEUP_C0,
    IRQ_RWU_C1                       = CMEHW_IRQ_REG_WAKEUP_C1,
    IRQ_SWU_C0                       = CMEHW_IRQ_SPECIAL_WAKEUP_C0,
    IRQ_SWU_C1                       = CMEHW_IRQ_SPECIAL_WAKEUP_C1
};

enum CME_IRQ_VECTORS
{
    IRQ_VEC_WAKE_C0 = BIT64(12) | BIT64(14) | BIT64(16),
    IRQ_VEC_WAKE_C1 = BIT64(13) | BIT64(15) | BIT64(17),
    IRQ_VEC_SGPE_C0 = BIT64(12) | BIT64(20),
    IRQ_VEC_SGPE_C1 = BIT64(13) | BIT64(21),
    IRQ_VEC_STOP_C0 = BIT64(20),
    IRQ_VEC_STOP_C1 = BIT64(21)
};

enum CME_STOP_FLAGS
{
    FLAG_STOP_READY                  = BIT32(0),
    FLAG_ENTRY_FIRST_C0              = BIT32(28),
    FLAG_ENTRY_FIRST_C1              = BIT32(29),
    FLAG_PARTIAL_GOOD_C0             = BIT32(30),
    FLAG_PARTIAL_GOOD_C1             = BIT32(31)
};

enum CME_STOP_PIG_TYPES
{
    PIG_TYPE2                        = 2,
    PIG_TYPE3                        = 3
};

enum CME_STOP_SRR1
{
    MOST_STATE_LOSS                  = 3,
    SOME_STATE_LOSS_BUT_NOT_TIMEBASE = 2,
    NO_STATE_LOSS                    = 1
};

typedef struct
{
    uint32_t pad;
    uint32_t addr;
    uint64_t data;
} CmeScomRestore;

/// Stop Score Board Structure
typedef struct
{
    // requested stop levels are read from pm_state,
    // need to be a global state for stop8 detection
    uint8_t       req_level_c0;
    uint8_t       req_level_c1;
    // actual stop levels are changed through entry,
    // need to be a global state for aborting entry
    uint8_t       act_level_c0;
    uint8_t       act_level_c1;
    // whether core is in running state,
    // need to be a global state for aborted entry detection and wakeup masking
    uint32_t      core_running;
    // core stop handoff to sgpe from cme
    // need to be a global state for wakeup and pm_active masking
    uint32_t      core_stopgpe;
    // partial good configuration,
    // todo: consider partial good changed during stop,
    uint32_t      core_enabled;
    PkSemaphore   sem[2];
} CmeStopRecord;


/// CME STOP Entry and Exit Prototypes
void p9_cme_stop_enter_thread(void*);
void p9_cme_stop_exit_thread(void*);
int  p9_cme_stop_entry();
int  p9_cme_stop_exit();

void p9_cme_stop_enter_semaphore_callback(void*);
void p9_cme_stop_exit_semaphore_callback(void*);
void p9_cme_stop_event_handler(void*, PkIrqId);
void p9_cme_stop_doorbell_handler(void*, PkIrqId);

int  p9_hcd_core_scan0(uint32_t, uint64_t, uint64_t);
int  p9_hcd_core_pcb_arb(uint32_t, uint8_t);
int  p9_hcd_core_poweron(uint32_t);
int  p9_hcd_core_chiplet_reset(uint32_t);
int  p9_hcd_core_gptr_time_initf(uint32_t);
int  p9_hcd_core_chiplet_init(uint32_t);
int  p9_hcd_core_repair_initf(uint32_t);
int  p9_hcd_core_arrayinit(uint32_t);
int  p9_hcd_core_initf(uint32_t);
int  p9_hcd_core_startclocks(uint32_t);
int  p9_hcd_core_scominit(uint32_t);
int  p9_hcd_core_scomcust(uint32_t);
int  p9_hcd_core_ras_runtime_scom(uint32_t);
int  p9_hcd_core_occ_runtime_scom(uint32_t);
