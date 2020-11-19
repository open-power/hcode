/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_logger.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
// *!---------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2016
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : io_logger.c
// *! TITLE       :
// *! DESCRIPTION : Debug Logger
// *!
// *! OWNER NAME  : Chris Steffen       Email: cwsteffen@us.ibm.com
// *! BACKUP NAME :
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// vbr20111700 |vbr     | Added extern keyword on linker symbol for debuglog address
// cws18071000 |cws     | Initial Rev
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
//#include <stdbool.h>

//#include "io_lib.h"
#include "pk.h"

#include "io_logger.h"

#include "ppe_img_reg_const_pkg.h"


//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------
#define DEBUG_LOG_SIZE 127

extern t_log _debug_log_start __attribute__ ((section ("debuglog")));
volatile t_log* g_io_logs = &_debug_log_start;


//------------------------------------------------------------------------------
// Function Definitions
//------------------------------------------------------------------------------
void _add_log(const uint8_t i_type,
              t_gcr_addr* i_gcr_addr,
              const uint16_t i_data)
{
    uint32_t l_log_num = img_field_get(ppe_debug_log_num);

    if (l_log_num >= DEBUG_LOG_SIZE)
    {
        return;
    }

    // Save current reg ID
    int l_reg_id = get_gcr_addr_reg_id(i_gcr_addr);
    // Update reg ID to the rx group so we can access rx regs
    set_gcr_addr_reg_id(i_gcr_addr, rx_group);

    t_log l_new_log;
    l_new_log.type = i_type;
    l_new_log.unit = get_gcr_addr_bus_id(i_gcr_addr);
    l_new_log.lane = get_gcr_addr_lane(i_gcr_addr);
    l_new_log.bank = get_ptr_field(i_gcr_addr, rx_bank_sel_a);
    l_new_log.trained = mem_pl_field_get(rx_init_done, l_new_log.lane);
    l_new_log.data = i_data;
    l_new_log.timestamp = (uint32_t)(pk_timebase_get() >> 10);
    g_io_logs[l_log_num] = l_new_log;
    // Return reg ID to original value
    set_gcr_addr_reg_id(i_gcr_addr, l_reg_id);

    img_field_put(ppe_debug_log_num, ++l_log_num);

    //while(l_log_num == DEBUG_LOG_SIZE) {
    //    l_log_num = img_field_get(ppe_debug_log_num);
    //}
    return;
}

void _add_log_no_gcr_addr(const uint8_t i_type,
                          const uint16_t i_data)
{
    uint32_t l_log_num = img_field_get(ppe_debug_log_num);

    if (l_log_num >= DEBUG_LOG_SIZE)
    {
        return;
    }

    t_log l_new_log;
    l_new_log.type = i_type;
    l_new_log.unit = 0x0;
    l_new_log.lane = 0x0;
    l_new_log.bank = 0x0;
    l_new_log.trained = 0x0;
    l_new_log.data = i_data;
    l_new_log.timestamp = (uint32_t)(pk_timebase_get() >> 10);
    g_io_logs[l_log_num] = l_new_log;

    img_field_put(ppe_debug_log_num, ++l_log_num);

    //while(l_log_num == DEBUG_LOG_SIZE) {
    //    l_log_num = img_field_get(ppe_debug_log_num);
    //}
    return;
}
