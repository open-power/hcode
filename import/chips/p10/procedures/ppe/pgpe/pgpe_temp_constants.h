/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_temp_constants.h $  */
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
#ifndef __PGPE_TEMP_CONSTANTS_H__
#define __PGPE_TEMP_CONSTANTS_H__

#define GPPB_SRAM_ADDR              0xfff2a000
#define OCC_SHARED_SRAM_ADDR        0xfff2c000

#define PGPE_AUX_TASK_SIZE          2*1024
#define PGPE_OCC_SHARED_SRAM_SIZE   2*1024
#define PGPE_IMAGE_SIZE             54*1024 - PGPE_AUX_TASK_SIZE - PGPE_OCC_SHARED_SRAM_SIZE

#define OCC_SRAM_PGPE_BASE_ADDR     0xfff20000
#define OCC_SRAM_PGPE_REGION_SIZE PGPE_IMAGE_SIZE + PGPE_AUX_TASK_SIZE + PGPE_OCC_SHARED_SRAM_SIZE

//PGPE FLAGS
#define PGPE_FLAG_RESCLK_ENABLE              0x8000
#define PGPE_FLAG_IVRM_ENABLE                0x4000
#define PGPE_FLAG_VDM_ENABLE                 0x2000
#define PGPE_FLAG_WOF_ENABLE                 0x1000
#define PGPE_FLAG_DPLL_DYNAMIC_FMAX_ENABLE   0x0800
#define PGPE_FLAG_DPLL_DYNAMIC_FMIN_ENABLE   0x0400
#define PGPE_FLAG_DPLL_DROOP_PROTECT_ENABLE  0x0200
#define PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE     0x0080
#define PGPE_FLAG_WOF_IPC_IMMEDIATE_MODE     0x0040
#define PGPE_FLAG_ENABLE_FRATIO              0x0020
#define PGPE_FLAG_ENABLE_VRATIO              0x0010
#define PGPE_FLAG_VRATIO_MODIFIER            0x0008
#define PGPE_FLAG_WOV_UNDERVOLT_ENABLE       0x0004
#define PGPE_FLAG_WOV_OVERVOLT_ENABLE        0x0002
#define PGPE_FLAG_PHANTOM_HALT_ENABLE        0x0001

#define MAX_PSTATE_TABLE_ENTRIES        128

//REGISTERS
#define G_OCB_OCCFLG2               0xC0060590
#define TPC_DPLL_FREQ_CTRL_REG      0x01000051
#define TPC_DPLL_CTRL_REG           0x01000052
#define TPC_DPLL_CTRL_REG_CLR       0x01000053
#define TPC_DPLL_CTRL_REG_OR        0x01000054
#define TPC_DPLL_STAT_REG           0x01000055

#define OCB_OCI_CCSR                0xC0060480
#define OCB_OCI_OPITASV0            0xC0062400
#define OCB_OCI_OPITASV1            0xC0062401
#define OCB_OCI_OPITASV2            0xC0062402
#define OCB_OCI_OPITASV3            0xC0062403

#define QME_PMSRS                   0x200E0864
#endif //
