/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe.h $                 */
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

#ifndef __PGPE_H__
#define __PGPE_H__

#ifndef __PARSER_TOOL__

    #include "iota.h"
    #include "iota_trace.h"
    #include "ipc_api.h"
    #include "ipc_async_cmd.h"
    #include "pstate_pgpe_occ_api.h"
    #include "p10_pm_hcd_flags.h"
    #include "pgpe_temp_constants.h"
    #include "pgpe_temp_structs.h"
    #include "pstates_pgpe.H"
    #include "pstates_common.H"
    #include "gpehw_common.h"
    #include "ppe42_scom.h"
    #include "ppehw_common.h"
    #include "p10_hcd_common.H"
#endif

#define CORE_MASK(core) \
    (0x80000000 >> core)


#define MAX_DATA_STRUCT 16

enum  DATA_STRUCT_TABLE_IDX
{
    DATA_EVENT_MANAGER      = 0,
    DATA_EVENT_TABLE        = 1,
    DATA_PSTATE             = 2
};

typedef struct data_struct_entry
{
    uint32_t address;
    uint32_t size;
} data_struct_entry_t;

typedef struct data_struct_table
{
    data_struct_entry_t entry[MAX_DATA_STRUCT];
} data_struct_table_t;



#endif //
