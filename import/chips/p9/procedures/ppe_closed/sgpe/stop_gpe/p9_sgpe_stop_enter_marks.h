/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_enter_marks.h $ */
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
#ifndef __SGPE_STOP_ENTRY_MARKS_H__
#define __SGPE_STOP_ENTRY_MARKS_H__

#ifdef EPM_SIM_ENV

#include <vector>
namespace SGPE_STOP_ENTRY_MARKS
{

#endif


enum SGPE_SE_MARKS
{
    BEGINSCOPE_STOP_ENTRY       =   0x10,
    ENDSCOPE_STOP_ENTRY     =   0x18,
    STOP_PIG_TYPE2_HANDLER        =   0x20,
    STOP_PIG_TYPE3_HANDLER        =   0x28,
    STOP_PIG_TYPE0_HANDLER        =   0x30,
    STOP_PIG_TYPE6_HANDLER        =   0x38,
    SE_LESSTHAN8_DONE       =   0x68,
    SE_STOP_L2_CLKS     =   0xe0,
    SE_STOP_L2_GRID     =   0xe8,
    SE_STOP8_DONE       =   0xf0,
    SE_PURGE_L3     =   0xf8,
    SE_PURGE_L3_ABORT       =   0x100,
    SE_PURGE_L3_ABORT_DONE      =   0x108,
    SE_PGPE_QUAD_NOTIFY      =   0x110,
    SE_WAIT_PGPE_QUAD_NOTIFY        =   0x118,
    SE_PURGE_PB     =   0x120,
    SE_QUIESCE_QUAD     =   0x128,
    SE_STOP_CACHE_CLKS      =   0x130,
    SE_POWER_OFF_CACHE      =   0x138,
    SE_STOP11_DONE      =   0x140
};


#ifdef EPM_SIM_ENV

const std::vector<SGPE_SE_MARKS> MARKS =
{
    BEGINSCOPE_STOP_ENTRY,
    ENDSCOPE_STOP_ENTRY,
    STOP_PIG_TYPE2_HANDLER,
    STOP_PIG_TYPE3_HANDLER,
    STOP_PIG_TYPE0_HANDLER,
    STOP_PIG_TYPE6_HANDLER,
    SE_LESSTHAN8_DONE,
    SE_STOP_L2_CLKS,
    SE_STOP_L2_GRID,
    SE_STOP8_DONE,
    SE_PURGE_L3,
    SE_PURGE_L3_ABORT,
    SE_PURGE_L3_ABORT_DONE,
    SE_PGPE_QUAD_NOTIFY,
    SE_WAIT_PGPE_QUAD_NOTIFY,
    SE_PURGE_PB,
    SE_QUIESCE_QUAD,
    SE_STOP_CACHE_CLKS,
    SE_POWER_OFF_CACHE,
    SE_STOP11_DONE
};

const std::map<SGPE_SE_MARKS, std::string> mMARKS = boost::assign::map_list_of
        (BEGINSCOPE_STOP_ENTRY, "BEGINSCOPE_STOP_ENTRY")
        (ENDSCOPE_STOP_ENTRY, "ENDSCOPE_STOP_ENTRY")
        (STOP_PIG_TYPE2_HANDLER, "STOP_PIG_TYPE2_HANDLER")
        (STOP_PIG_TYPE3_HANDLER, "STOP_PIG_TYPE3_HANDLER")
        (STOP_PIG_TYPE0_HANDLER, "STOP_PIG_TYPE0_HANDLER")
        (STOP_PIG_TYPE6_HANDLER, "STOP_PIG_TYPE6_HANDLER")
        (SE_LESSTHAN8_DONE, "SE_LESSTHAN8_DONE")
        (SE_STOP_L2_CLKS, "SE_STOP_L2_CLKS")
        (SE_STOP_L2_GRID, "SE_STOP_L2_GRID")
        (SE_STOP8_DONE, "SE_STOP8_DONE")
        (SE_PURGE_L3, "SE_PURGE_L3")
        (SE_PURGE_L3_ABORT, "SE_PURGE_L3_ABORT")
        (SE_PURGE_L3_ABORT_DONE, "SE_PURGE_L3_ABORT_DONE")
        (SE_PGPE_QUAD_NOTIFY, "SE_PGPE_QUAD_NOTIFY")
        (SE_WAIT_PGPE_QUAD_NOTIFY, "SE_WAIT_PGPE_QUAD_NOTIFY")
        (SE_PURGE_PB, "SE_PURGE_PB")
        (SE_QUIESCE_QUAD, "SE_QUIESCE_QUAD")
        (SE_STOP_CACHE_CLKS, "SE_STOP_CACHE_CLKS")
        (SE_POWER_OFF_CACHE, "SE_POWER_OFF_CACHE")
        (SE_STOP11_DONE, "SE_STOP11_DONE");

}
#endif

#endif // __SGPE_STOP_ENTRY_MARKS_H__
