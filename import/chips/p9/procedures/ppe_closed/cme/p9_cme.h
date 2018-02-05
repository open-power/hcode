/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme.h $          */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017,2018                                                    */
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
#ifndef _P9_CME_H_
#define _P9_CME_H_

#include "pk.h"
#include "p9_pm_hcd_flags.h"

#if !DISABLE_PERIODIC_CORE_QUIESCE && (NIMBUS_DD_LEVEL == 20 || NIMBUS_DD_LEVEL == 21 || CUMULUS_DD_LEVEL == 10)

typedef struct
{
    uint32_t core_quiesce_fit_trigger;
    uint32_t core_quiesce_total_count;
    uint32_t core_quiesce_time_latest;
    uint32_t core_quiesce_time_max;
    uint32_t core_quiesce_time_min;
    uint32_t core_quiesce_failed_count;
} CmeFitRecord;

#endif



typedef struct
{
    // target mask of enabled cores, used to filter 2bit core select in scom address
    uint32_t     core_enabled;
    uint32_t     spurr_freq_ref_upper;

} CmeRecord;


#endif //_P9_CME_H_
