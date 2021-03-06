/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_header.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#ifndef _P9_PGPE_HEADER_H_
#define _P9_PGPE_HEADER_H_

#include "pk.h"
#include "p9_hcode_image_defines.H"
#include "p9_hcd_memmap_base.H"

//OCC Shared SRAM starts at bottom 2K of PGPE OCC SRAM space
#define OCC_SHARED_SRAM_ADDR_START \
    (OCC_SRAM_PGPE_BASE_ADDR + OCC_SRAM_PGPE_REGION_SIZE - PGPE_OCC_SHARED_SRAM_SIZE)

//
//  p9_pgpe_header_init
//
//  This function is called during PGPE boot to initialize
//  pointer to PgpeImageHeader, and also fill some values in
//  PgpeImageHeader
//
void p9_pgpe_header_init();

#endif //_P9_PGPE_HEADER_H_
