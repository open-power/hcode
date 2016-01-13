/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_exit_marks.h $ */
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
#ifndef __SGPE_STOP_EXIT_MARKS_H__
#define __SGPE_STOP_EXIT_MARKS_H__

#ifdef EPM_SIM_ENV

#include <vector>
namespace SGPE_STOP_EXIT_MARKS
{

#endif


enum SGPE_SX_MARKS
{
    SX_LV11_WAKEUP_START        =   0x0,
    SX_POWERON_DONE     =   0x8,
    SX_POWERON_PG_SEL       =   0x10,
    SX_POWERON_END      =   0x18,
    SX_CHIPLET_RESET_GLSMUX_RESET       =   0x20,
    SX_CHIPLET_RESET_SCAN0      =   0x28,
    SX_CHIPLET_RESET_END        =   0x30,
    SX_GPTR_TIME_INITF_END      =   0x38,
    SX_DPLL_START_DONE      =   0x40,
    SX_DPLL_SETUP_END       =   0x48,
    SX_CHIPLET_INIT_SCAN0       =   0x50,
    SX_CHIPLET_INIT_END     =   0x68,
    SX_REPAIR_INITF_END     =   0xe0,
    SX_ARRAYINIT_SUBMODULE      =   0xe8,
    SX_ARRAYINIT_SCAN0      =   0xf0,
    SX_ARRAYINIT_END        =   0xf8,
    SX_INITF_END        =   0x100,
    SX_LV9_WAKEUP_START     =   0x108,
    SX_STARTCLOCKS_DONE     =   0x110,
    SX_STARTCLOCKS_END      =   0x118,
    SX_LV8_WAKEUP_START     =   0x120,
    SX_L2_STARTCLOCKS_DONE      =   0x128,
    SX_L2_STARTCLOCKS_END       =   0x130,
    SX_LV11_WAKEUP_CONTINUE     =   0x138,
    SX_SCOMINIT_END     =   0x140,
    SX_SCOMCUST_END     =   0x148,
    SX_CME_BOOT_END     =   0x150,
    SX_RAS_RUNTIME_SCOM_END     =   0x168,
    SX_OCC_RUNTIME_SCOM_END     =   0x1e0,
    BEGINSCOPE_STOP_EXIT        =   0x1f20,
    ENDSCOPE_STOP_EXIT      =   0x1f28
};


#ifdef EPM_SIM_ENV

const std::vector<SGPE_SX_MARKS> MARKS =
{
    SX_LV11_WAKEUP_START,
    SX_POWERON_DONE,
    SX_POWERON_PG_SEL,
    SX_POWERON_END,
    SX_CHIPLET_RESET_GLSMUX_RESET,
    SX_CHIPLET_RESET_SCAN0,
    SX_CHIPLET_RESET_END,
    SX_GPTR_TIME_INITF_END,
    SX_DPLL_START_DONE,
    SX_DPLL_SETUP_END,
    SX_CHIPLET_INIT_SCAN0,
    SX_CHIPLET_INIT_END,
    SX_REPAIR_INITF_END,
    SX_ARRAYINIT_SUBMODULE,
    SX_ARRAYINIT_SCAN0,
    SX_ARRAYINIT_END,
    SX_INITF_END,
    SX_LV9_WAKEUP_START,
    SX_STARTCLOCKS_DONE,
    SX_STARTCLOCKS_END,
    SX_LV8_WAKEUP_START,
    SX_L2_STARTCLOCKS_DONE,
    SX_L2_STARTCLOCKS_END,
    SX_LV11_WAKEUP_CONTINUE,
    SX_SCOMINIT_END,
    SX_SCOMCUST_END,
    SX_CME_BOOT_END,
    SX_RAS_RUNTIME_SCOM_END,
    SX_OCC_RUNTIME_SCOM_END,
    BEGINSCOPE_STOP_EXIT,
    ENDSCOPE_STOP_EXIT
};

}
#endif

#endif // __SGPE_STOP_EXIT_MARKS_H__
