/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_boot_temp.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#ifndef _P9_PGPE_BOOT_TEMP_H_
#define _P9_PGPE_BOOT_TEMP_H_

//
//p9_pgpe_boot_temp
//
//This is to be used for development and testing/verif if
//Global Pstate Parameter Block is not initialized through other means.
//
//In real system this all will be done before PGPE HCode is given control. Then
//subsequent p9_pgpe_gppb_init call reads data out of Global Pstate Parameter Block
//
void p9_pgpe_boot_temp();


#endif //_P9_PGPE_BOOT_TEMP_H_
