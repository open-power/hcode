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
    BEGINSCOPE_STOP_EXIT        =   0x20,
    ENDSCOPE_STOP_EXIT      =   0x28,
    SX_POWERON      =   0x68,
    SX_CHIPLET_RESET        =   0xe0,
    SX_CHIPLET_RESET_SCAN0      =   0xe8,
    SX_DPLL_SETUP       =   0xf0,
    SX_DPLL_START_DONE      =   0xf8,
    SX_CHIPLET_INITS        =   0x100,
    SX_ARRAY_INIT       =   0x108,
    SX_FUNC_INIT        =   0x110,
    SX_CACHE_STARTCLOCKS        =   0x118,
    SX_CACHE_STARTCLOCKS_REGION     =   0x120,
    SX_L2_STARTCLOCKS       =   0x128,
    SX_L2_STARTCLOCKS_ALIGN     =   0x130,
    SX_L2_STARTCLOCKS_REGION        =   0x138,
    SX_SCOM_INITS       =   0x140,
    SX_CME_BOOT     =   0x148,
    SX_RUNTIME_INITS        =   0x150,
    SX_ENABLE_ANALOG        =   0x168,
    SX_LESSTHAN8_WAIT       =   0x1e0
};


#ifdef EPM_SIM_ENV

const std::vector<SGPE_SX_MARKS> MARKS =
{
    BEGINSCOPE_STOP_EXIT,
    ENDSCOPE_STOP_EXIT,
    SX_POWERON,
    SX_CHIPLET_RESET,
    SX_CHIPLET_RESET_SCAN0,
    SX_DPLL_SETUP,
    SX_DPLL_START_DONE,
    SX_CHIPLET_INITS,
    SX_ARRAY_INIT,
    SX_FUNC_INIT,
    SX_CACHE_STARTCLOCKS,
    SX_CACHE_STARTCLOCKS_REGION,
    SX_L2_STARTCLOCKS,
    SX_L2_STARTCLOCKS_ALIGN,
    SX_L2_STARTCLOCKS_REGION,
    SX_SCOM_INITS,
    SX_CME_BOOT,
    SX_RUNTIME_INITS,
    SX_ENABLE_ANALOG,
    SX_LESSTHAN8_WAIT
};

const std::map<SGPE_SX_MARKS, std::string> mMARKS = boost::assign::map_list_of
        (BEGINSCOPE_STOP_EXIT, "BEGINSCOPE_STOP_EXIT")
        (ENDSCOPE_STOP_EXIT, "ENDSCOPE_STOP_EXIT")
        (SX_POWERON, "SX_POWERON")
        (SX_CHIPLET_RESET, "SX_CHIPLET_RESET")
        (SX_CHIPLET_RESET_SCAN0, "SX_CHIPLET_RESET_SCAN0")
        (SX_DPLL_SETUP, "SX_DPLL_SETUP")
        (SX_DPLL_START_DONE, "SX_DPLL_START_DONE")
        (SX_CHIPLET_INITS, "SX_CHIPLET_INITS")
        (SX_ARRAY_INIT, "SX_ARRAY_INIT")
        (SX_FUNC_INIT, "SX_FUNC_INIT")
        (SX_CACHE_STARTCLOCKS, "SX_CACHE_STARTCLOCKS")
        (SX_CACHE_STARTCLOCKS_REGION, "SX_CACHE_STARTCLOCKS_REGION")
        (SX_L2_STARTCLOCKS, "SX_L2_STARTCLOCKS")
        (SX_L2_STARTCLOCKS_ALIGN, "SX_L2_STARTCLOCKS_ALIGN")
        (SX_L2_STARTCLOCKS_REGION, "SX_L2_STARTCLOCKS_REGION")
        (SX_SCOM_INITS, "SX_SCOM_INITS")
        (SX_CME_BOOT, "SX_CME_BOOT")
        (SX_RUNTIME_INITS, "SX_RUNTIME_INITS")
        (SX_ENABLE_ANALOG, "SX_ENABLE_ANALOG")
        (SX_LESSTHAN8_WAIT, "SX_LESSTHAN8_WAIT");

}
#endif

#endif // __SGPE_STOP_EXIT_MARKS_H__
