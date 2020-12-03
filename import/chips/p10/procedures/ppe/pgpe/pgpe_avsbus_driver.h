/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_avsbus_driver.h $   */
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
#ifndef __PGPE_AVSBUS_DRIVER_H__
#define __PGPE_AVSBUS_DRIVER_H__

#include "pgpe.h"

#define MAX_POLL_COUNT_AVS      10
#define CLOCK_SPIVID_MHZ        10
#define AVS_DRIVER_MAX_EXTERNAL_VOLTAGE  1500
#define AVS_DRIVER_MIN_EXTERNAL_VOLTAGE  500
#define O2S_BUSNUM_OFFSET_SHIFT  8

enum AVSBUS_DRIVER_RETURN_CODES
{
    AVS_RC_SUCCESS              = 0,
    AVS_RC_ONGOING_TIMEOUT      = 1,
    AVS_RC_RESYNC_ERROR         = 2
};

void pgpe_avsbus_init();
void pgpe_avsbus_init_bus(uint32_t bus_num);
void pgpe_avsbus_voltage_write(uint32_t bus_num, uint32_t rail_num, uint32_t volt_mv);
void pgpe_avsbus_voltage_read(uint32_t bus_num, uint32_t rail_num, uint32_t* ret_volt);
void pgpe_avsbus_current_read(uint32_t bus_num, uint32_t rail_num, uint32_t* ret_current, uint32_t current_scale_idx);

#endif
