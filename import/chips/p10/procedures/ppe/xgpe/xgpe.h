/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe.h $                 */
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
#ifndef __XGPE_H__
#define __XGPE_H__


#include "iota.h"
#include "iota_trace.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p10_pm_hcd_flags.h"
#include "p10_hcd_common.H"
#include "gpehw_common.h"
#include "ppe42_scom.h"
#include "xgpe_header.h"




/// ----------------------------------------------
/// @brief Starting point to initialize some of the
//  flg register and invoke other sub functions
/// @return none
/// ---------------------------------------------
void xgpe_init();


/// ----------------------------------------------
/// @brief Fit handler which gets trigggered for every Xus
/// @return none
/// ---------------------------------------------
void xgpe_irq_fit_handler();

/// ----------------------------------------------
/// @brief Handle PM suspend request during mpipl
/// @return none
/// ---------------------------------------------
void handle_pm_suspend();

#endif //
