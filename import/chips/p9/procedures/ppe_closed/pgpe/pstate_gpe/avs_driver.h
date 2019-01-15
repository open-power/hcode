/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/avs_driver.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2019                                                    */
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
//
// Setup and enable the O2S bridge on the AVS bus.
//


#ifndef _AVS_DRIVER_H_
#define _AVS_DRIVER_H_

#include "pstate_pgpe_occ_api.h"

#define MAX_POLL_COUNT_AVS      10
#define AVS_RAIL_NUM_MASK       0xF
#define AVS_BUS_NUM_MASK        0x10
enum AVS_DRIVER
{
    AVS_DRIVER_MAX_EXTERNAL_VOLTAGE = 1500,
    AVS_DRIVER_MIN_EXTERNAL_VOLTAGE = 500,
    O2S_BUSNUM_OFFSET_SHIFT = 8
};

enum AVS_DRIVER_RETURN_CODES
{
    AVS_RC_SUCCESS              = 0,
    AVS_RC_ONGOING_TIMEOUT      = 1,
    AVS_RC_RESYNC_ERROR         = 2
};

void avs_driver_init();

void avs_driver_bus_init(uint32_t BusNum);

void
avs_driver_voltage_write(uint32_t BusNum, uint32_t RailNum, uint32_t VoltMV);

void
avs_driver_voltage_read(uint32_t BusNum, uint32_t RailNum, uint32_t* RetVolt);

void
avs_driver_current_read(uint32_t BusNum, uint32_t RailNum, uint32_t* RetCurrent);

#endif //_AVS_DRIVER_H_
