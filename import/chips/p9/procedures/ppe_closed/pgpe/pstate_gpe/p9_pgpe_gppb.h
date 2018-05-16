/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_gppb.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
#ifndef _P9_PGPE_GPPB_H_
#define _P9_PGPE_GPPB_H_

#include "pk.h"
#include "p9_pstates_pgpe.h"

//  This is called during PGPE boot to initialize Global Pstate Parameter block pointer
//  and external vrm increment and decrement rates
void p9_pgpe_gppb_init();

// Interpolate Voltage from Pstate.
//
//  ps - Pstate from which to interpolate voltage
//
//  vpd_st_set - Type of VPD point set to use
//      VPD_PT_SET_RAW(VPD point with no biases or system parameters)
//      VPD_PT_SET_BIASED(VPD point with biases applied)
//      VPD_PT_SET_SYSP(VPD point with system parameters applied)
//      VPD_PT_SET_BIASED_SYSP(VPD point with biases and system parameters applied)
uint32_t p9_pgpe_gppb_intp_vdd_from_ps(Pstate ps, uint8_t vpd_pt_set);

//  Interpolate pstate from external vdd
//
//  Note: This function is hardcoded to use biased with system parameters applied
//  VPD points because currently interpolating pstate from vdd is only needed
//  for biased with system parameter applied VPD point
//
//  ext_vdd - External Voltage for which pstate is to be interpolated
//
//  retval - Pstate interpolated corresponding to external voltage
uint8_t p9_pgpe_gppb_intp_ps_from_ext_vdd(uint16_t ext_vdd);

#endif //_P9_PGPE_GPPB_H_
