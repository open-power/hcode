/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_gppb.c $            */
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


#include "pgpe_gppb.h"


//
//
//
void pgpe_gppb_init()
{
    //\\TBDGet GPPB pointer from PGPE Image header
    //and Main Memory Address


    pgpe_gppb_pstate_tbl();
    pgpe_gppb_occ_tbl();
}


//
//Get a field of GPPB
//
//\\TBD Make this a generic macro,so that any
//GPPB field can be accessed. Or, just create a
//number of #defines each of  which map a field name
//to the specific GPPB field. Or, just use the P9 way
void pgpe_gppb_get()
{
}

//
//Generate Pstate Table
//
//\\TBD
void pgpe_gppb_pstate_tbl()
{
}

//
//Generate OCC Table
//
//\\TBD
void pgpe_gppb_occ_tbl()
{
}
