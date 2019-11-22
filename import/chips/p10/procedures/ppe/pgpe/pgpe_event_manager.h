/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_manager.h $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2019                                                    */
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
#ifndef __PGPE_EVENT_MANAGER_H__
#define __PGPE_EVENT_MANAGER_H__

#ifndef __PARSER_TOOL__

    #include "iota.h"

#endif

//
//Data
//

//Types
typedef enum PGPE_STATE_MACHINE
{
    PGPE_SM_INIT        = 0x00000000, //PGPE Booting up
    PGPE_SM_BOOTED      = 0x00000001, //PGPE Booted
    PGPE_SM_ACTIVE      = 0x00000002, //PGPE Pstate Active
    PGPE_SM_STOPPED     = 0x00000004, //PGPE Pstate Stopped
    PGPE_SM_SAFE_MODE   = 0x00000008, //PGPE Safe Mode
    PGPE_SM_PM_SUSPEND  = 0x00000010 //PGPE PM Suspend
} pgpe_state_machine_t;

typedef struct pgpe_event_manager
{
    pgpe_state_machine_t pgpe_state_machine_status;
} pgpe_event_manager_t;

//
//  Functions
//
void pgpe_event_manager_init();
void pgpe_event_manager_run();
void* pgpe_event_manager_data_addr();
void pgpe_event_manager_task_init();

#endif //
