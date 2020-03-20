/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_header.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
#ifndef _PGPE_HEADER_H_
#define _PGPE_HEADER_H_

#include "pgpe.h"
#include "pstates_table.H"


extern PgpeHeader_t* G_pgpe_header_data;

//
//  pgpe_header_init
//
//  This function is called during PGPE boot to initialize
//  pointer to PgpeImageHeader, and also fill some values in
//  PgpeImageHeader
//
void pgpe_header_init();

#define pgpe_header_get(x) G_pgpe_header_data->x
#define pgpe_header_get_ptr() G_pgpe_header_data

#endif //_PGPE_HEADER_H_
