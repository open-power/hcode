/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/iota/iota_ppe42.S $               */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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
#include "iota.h"
#include "ppe_port.h"
#include "iota_ppe42.h"
#include "iota_panic_codes.h"

.global g_iota_execution_stack

# This routine is called for every interrupt/exception which is a "reason"
# for iota to schedule a task. The current machine state is saved.
# A few pre-conditions must be met:
#   - original r3 value (yet to be saved!) is at _IOTA_TEMPORARY_R3_STACK_OFFSET(sp)
#   - the pointer to location of where to save machine state is in r9
#   - the schedule reason is in r3
#   - d8 is saved
# This routine sets up and calls _zbm_schedule (C-function), upon which's
# return the prior machine state is restored.

.global _iota_schedule

.global __iota_halt
__iota_halt:
    _pk_panic IOTA_SOFTWARE_HALT

## pull in the macro that calculates all the external interrupt config
## defined in <PPE_TYPE>/<PPE_TYPE>_common.h
    .hwmacro_irq_cfg_bitmaps
