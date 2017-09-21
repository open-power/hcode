/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe.h $ */
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
/// \file p9_pgpe.h
/// \brief header of p9_cme_stop_enter_thread.c and p9_cme_stop_exit.c
///

#ifndef _P9_PGPE_H_
#define _P9_PGPE_H_

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

#include "p9_pgpe_irq.h"
#include "pstate_pgpe_cme_api.h"
#include "p9_hcd_memmap_base.H"
#include "p9_pm_hcd_flags.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"

//
//#Defines
//

enum PGPE_DEFINES
{
    QUAD0_MASK        = 0x80,
    QUAD0_EX0_MASK    = 0x800,
    QUAD0_EX1_MASK    = 0x400,
    CORE0_MASK        = 0x80000000,
    QUAD0_ALL_CORES_MASK = 0xF0000000
};

enum PSTATE_START_SOURCE
{
    PSTATE_START_OCC_FLAG  = 0,
    PSTATE_START_OCC_IPC   = 1
};

enum PGPE_WOF_CTRL
{
    WOF_ENABLE      = 0,
    WOF_DISABLE     = 1
};

#define CORE_MASK(core) \
    (CORE0_MASK >> core)

#define QUAD_MASK(quad) \
    (QUAD0_MASK >> quad)

#define QUAD_ALL_CORES_MASK(quad) \
    (QUAD0_ALL_CORES_MASK >> (quad<<2))

#define FIRST_CORE_FROM_QUAD(quad) \
    ((quad) << 2)

#define LAST_CORE_FROM_QUAD(quad) \
    ((quad + 1) << 2)

#define QUAD_EX0_MASK(quad) \
    (QUAD0_EX0_MASK >> (q*2))

#define QUAD_EX1_MASK(quad) \
    (QUAD0_EX1_MASK >> (q*2))

#define PGPE_PANIC_AND_TRACE(val)\
    G_pgpe_optrace_data.word[0] = val; \
    p9_pgpe_optrace(HALT_CONDITION ); \
    PK_PANIC(val);

/// PGPE PState
void p9_pgpe_irq_handler_occ_error(void* arg, PkIrqId irq);
void p9_pgpe_irq_handler_sgpe_halt(void* arg, PkIrqId irq);
void p9_pgpe_irq_handler_xstop_gpe2(void* arg, PkIrqId irq);
void p9_pgpe_irq_handler_pcb_type1(void* arg, PkIrqId irq);
void p9_pgpe_irq_handler_pcb_type4(void* arg, PkIrqId irq);
void p9_pgpe_thread_process_requests(void* arg);
void p9_pgpe_thread_actuate_pstates(void* arg);
void p9_pgpe_thread_safe_mode_and_pm_suspend(void* arg);

///PGPE PState Info
void p9_pgpe_gen_pstate_info();

///PGPE FIT
void p9_pgpe_fit_init();

///PGPE IPC
void p9_pgpe_ipc_init();

//OCB Heartbeat Error
void p9_pgpe_ocb_hb_error_init();

#endif //_P9_PGPE_H_
