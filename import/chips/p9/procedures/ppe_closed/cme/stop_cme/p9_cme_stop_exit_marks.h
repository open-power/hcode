/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_exit_marks.h $ */
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
#ifndef __CME_STOP_EXIT_MARKS_H__
#define __CME_STOP_EXIT_MARKS_H__

#ifdef EPM_SIM_ENV

#include <vector>
namespace CME_STOP_EXIT_MARKS
{

#endif


enum CME_SX_MARKS
{
    SX_WAKEUP_START     =   0x0,
    SX_POWERON      =   0x8,
    SX_POWERON_DONE     =   0x10,
    SX_POWERON_PG_SEL       =   0x18,
    SX_POWERON_END      =   0x20,
    SX_CHIPLET_RESET        =   0x28,
    SX_CHIPLET_RESET_GLSMUX_RESET       =   0x30,
    SX_CHIPLET_RESET_SCAN0      =   0x38,
    SX_CHIPLET_RESET_END        =   0x40,
    SX_GPTR_TIME_INITF      =   0x48,
    SX_GPTR_TIME_INITF_END      =   0x50,
    SX_CHIPLET_INIT     =   0x68,
    SX_CHIPLET_INIT_SCAN0       =   0xe0,
    SX_CHIPLET_INIT_END     =   0xe8,
    SX_REPAIR_INITF     =   0xf0,
    SX_REPAIR_INITF_END     =   0xf8,
    SX_ARRAY_INIT       =   0x100,
    SX_ARRAY_INIT_SUBMODULE     =   0x108,
    SX_ARRAY_INIT_SCAN0     =   0x110,
    SX_ARRAY_INIT_END       =   0x118,
    SX_INITF        =   0x120,
    SX_INITF_END        =   0x128,
    SX_STARTCLOCKS      =   0x130,
    SX_STARTCLOCKS_DONE     =   0x138,
    SX_STARTCLOCKS_END      =   0x140,
    SX_SCOMINIT     =   0x148,
    SX_SCOMINIT_END     =   0x150,
    SX_SCOMCUST     =   0x168,
    SX_SCOMCUST_END     =   0x1e0,
    SX_RAS_RUNTIME_SCOM     =   0x1e8,
    SX_RAS_RUNTIME_SCOM_END     =   0x230,
    SX_OCC_RUNTIME_SCOM     =   0x238,
    SX_OCC_RUNTIME_SCOM_END     =   0x200,
    SX_SELFRESTORE      =   0x208,
    SX_RAM_HRMOR        =   0x210,
    SX_SRESET_THREADS       =   0x218,
    SX_STOP15_THREADS       =   0x220,
    SX_SELFRESTORE_END      =   0x228,
    BEGINSCOPE_STOP_EXIT        =   0x1f28,
    ENDSCOPE_STOP_EXIT      =   0x1f30
};


#ifdef EPM_SIM_ENV

const std::vector<CME_SX_MARKS> MARKS =
{
    SX_WAKEUP_START,
    SX_POWERON,
    SX_POWERON_DONE,
    SX_POWERON_PG_SEL,
    SX_POWERON_END,
    SX_CHIPLET_RESET,
    SX_CHIPLET_RESET_GLSMUX_RESET,
    SX_CHIPLET_RESET_SCAN0,
    SX_CHIPLET_RESET_END,
    SX_GPTR_TIME_INITF,
    SX_GPTR_TIME_INITF_END,
    SX_CHIPLET_INIT,
    SX_CHIPLET_INIT_SCAN0,
    SX_CHIPLET_INIT_END,
    SX_REPAIR_INITF,
    SX_REPAIR_INITF_END,
    SX_ARRAY_INIT,
    SX_ARRAY_INIT_SUBMODULE,
    SX_ARRAY_INIT_SCAN0,
    SX_ARRAY_INIT_END,
    SX_INITF,
    SX_INITF_END,
    SX_STARTCLOCKS,
    SX_STARTCLOCKS_DONE,
    SX_STARTCLOCKS_END,
    SX_SCOMINIT,
    SX_SCOMINIT_END,
    SX_SCOMCUST,
    SX_SCOMCUST_END,
    SX_RAS_RUNTIME_SCOM,
    SX_RAS_RUNTIME_SCOM_END,
    SX_OCC_RUNTIME_SCOM,
    SX_OCC_RUNTIME_SCOM_END,
    SX_SELFRESTORE,
    SX_RAM_HRMOR,
    SX_SRESET_THREADS,
    SX_STOP15_THREADS,
    SX_SELFRESTORE_END,
    BEGINSCOPE_STOP_EXIT,
    ENDSCOPE_STOP_EXIT
};

}
#endif

#endif // __CME_STOP_EXIT_MARKS_H__
