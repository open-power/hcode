/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.c $          */
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

#include "pgpe_pstate.h"

//
//Local function prototypes
//
uint32_t pgpe_pstate_is_at_target();
uint32_t pgpe_get_ext_vdd_region(uint32_t vdd);
uint32_t pgpe_get_ext_vcs_region(uint32_t vcs); //\\TBD may be only need vdd region
uint32_t pgpe_get_ext_idd_region(uint32_t idd);
uint32_t pgpe_get_ps_region(uint32_t ps, uint32_t vpt_pt_set);


void pgpe_pstate_set_pstate(uint32_t core)
{
}

void pgpe_pstate_set_clip(uint32_t val, clip_type_t type)
{
}

void pgpe_pstate_actuate_step()
{
}

uint32_t pgpe_pstate_intp_vdd_from_ps(Pstate ps, uint32_t vpd_pt_set)
{
}

uint32_t pgpe_pstate_intp_vcs_from_ps(Pstate ps, uint32_t vpd_pt_set)
{
}

uint32_t pgpe_pstate_intp_ps_from_ext_vdd(uint32_t vdd)
{
}

uint32_t pgpe_pstate_intp_ps_from_ext_vcs(uint32_t vcs)
{
}

uint32_t pgpe_pstate_intp_ps_from_ext_idd(uint32_t idd)
{
}

uint32_t pgpe_pstate_freq_from_ps(uint32_t ps)
{
}

uint32_t pgpe_pstate_is_at_target()
{
}

uint32_t pgpe_get_ext_vdd_region(uint32_t vdd)
{
}

uint32_t pgpe_get_ext_vcs_region(uint32_t vdd)
{
}

uint32_t pgpe_get_ext_idd_region(uint32_t vdd)
{
}

uint32_t pgpe_get_ps_region(uint32_t ps, uint32_t vpt_pt_set)
{
}
