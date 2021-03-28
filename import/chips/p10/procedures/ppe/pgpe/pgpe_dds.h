/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_dds.h $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#ifndef __PGPE_DDS_H__
#define __PGPE_DDS_H__

#ifndef __PARSER_TOOL__
    #include "pgpe.h"
#else
    #define CORES_PER_QUAD  4
    #define MAX_QUADS   8
#endif

enum DDS_MODE
{
    DDS_MODE_NONE   =   0x0,
    DDS_MODE_JUMP   =   0x1,
    DDS_MODE_SLEW   =   0x2
};

enum  PGPE_DDS_OTHER_IDX
{
    PGPE_DDS_OTHER_TRIP_IDX         =   0x0,
    PGPE_DDS_OTHER_LARGE_DROOP_IDX  =   0x1,
    PGPE_DDS_OTHER_MAX              =   0x2
};

typedef struct pgpe_dds
{
    qme_fdcr_t fdcr[MAX_QUADS][CORES_PER_QUAD];
    qme_ducr_t ducr[MAX_QUADS];
    uint32_t delay[MAX_QUADS][CORES_PER_QUAD], delay_prev[MAX_QUADS][CORES_PER_QUAD];
    uint32_t cal_adjust[MAX_QUADS][CORES_PER_QUAD], cal_adjust_prev[MAX_QUADS][CORES_PER_QUAD];
    uint32_t any_delay_larger[MAX_QUADS], any_delay_smaller[MAX_QUADS];
    uint32_t any_cal_later[MAX_QUADS], any_cal_earlier[MAX_QUADS];
    uint32_t other[PGPE_DDS_OTHER_MAX][MAX_QUADS][CORES_PER_QUAD],
             other_prev[PGPE_DDS_OTHER_MAX][MAX_QUADS][CORES_PER_QUAD];
    uint32_t any_other_larger[PGPE_DDS_OTHER_MAX][MAX_QUADS][CORES_PER_QUAD],
             any_other_smaller[PGPE_DDS_OTHER_MAX][MAX_QUADS][CORES_PER_QUAD];

    uint32_t other_chip[PGPE_DDS_OTHER_MAX], other_chip_prev[PGPE_DDS_OTHER_MAX];
    uint32_t any_other_larger_chip[PGPE_DDS_OTHER_MAX], any_other_smaller_chip[PGPE_DDS_OTHER_MAX];
    qme_fdcr_t fdcr_chip;
} pgpe_dds_t;

extern pgpe_dds_t G_pgpe_dds;

void pgpe_dds_init(uint32_t pstate);
void* pgpe_dds_data_addr();
void pgpe_dds_compute(uint32_t pstate);
void pgpe_dds_update_pre(uint32_t pstate);
void pgpe_dds_update_post(uint32_t pstate);
void pgpe_dds_poll_done();

#endif
