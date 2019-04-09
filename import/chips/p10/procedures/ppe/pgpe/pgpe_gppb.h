/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_gppb.h $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

#ifndef __PGPE_GPPB_H__
#define __PGPE_GPPB_H__

#include "pgpe.h"

extern GlobalPstateParmBlock_t* G_gppb;

void pgpe_gppb_init();

//Macro accessor function
#define pgpe_gppb_get(x) G_gppb->x
#define pgpe_gppb_get_psv_slope(rail, pt_set, region) G_gppb->ps_voltage_slopes[rail][pt_set][region]
#define pgpe_gppb_get_vps_slope(rail, pt_set, region) G_gppb->voltage_ps_slopes[rail][pt_set][region]
#define pgpe_gppb_get_ops_ps(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].pstate
#define pgpe_gppb_get_ops_vdd(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].vdd_mv
#define pgpe_gppb_get_ops_vcs(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].vcs_mv

#endif
