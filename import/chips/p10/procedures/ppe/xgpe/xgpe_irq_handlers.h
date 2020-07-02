/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers.h $    */
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
#include "xgpe.h"
#include "xgpe_irq.h"

/// ----------------------------------------------
/// @brief Initializes FIT
/// @return none
/// ----------------------------------------------
void  xgpe_irq_fit_init();

/// ----------------------------------------------
/// @brief Initializes IPC
/// @return none
/// ----------------------------------------------
void  xgpe_irq_ipc_init();

/// ----------------------------------------------
/// @brief Handles GPE2 fault and GPE3 XSTOP fault
//         error.
/// @return none
/// ---------------------------------------------
void xgpe_irq_fault_handler();

/// ----------------------------------------------
/// @brief Handles external request to GPE3
/// @return none
/// ---------------------------------------------
void xgpe_gpe3_func_handler();

/// ----------------------------------------------
/// @brief Handles PCB type F interrupt (QME->XGPE)
/// @return none
/// ---------------------------------------------
void xgpe_irq_pcb_typef_handler();
