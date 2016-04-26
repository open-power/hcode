/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_hcd_core_scan0.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

#include "p9_cme_stop.h"
#include "p9_cme_stop_exit_marks.h"

int
p9_hcd_core_scan0(uint32_t core, uint64_t regions, uint64_t scan_type)
{
    int rc = CME_STOP_SUCCESS;
    uint64_t scom_data;

    PK_TRACE("raise Vital clock region fence");
    CME_PUTSCOM(PERV_CPLT_CTRL1_OR, core, BIT64(3));

    PK_TRACE("Raise region fences for scanned regions");
    CME_PUTSCOM(PERV_CPLT_CTRL1_OR,  core, BITS64(4, 11));

    PK_TRACE("Setup all Clock Domains and Clock Types");
    CME_GETSCOM(PERV_CLK_REGION, core, CME_SCOM_AND, scom_data);
    scom_data |= ((regions << SHIFT64(14)) | BITS64(48, 3));
    CME_PUTSCOM(PERV_CLK_REGION, core, scom_data);

    PK_TRACE("Write scan select register");
    scom_data = (scan_type << SHIFT64(59)) | (regions << SHIFT64(14));
    CME_PUTSCOM(PERV_SCAN_REGION_TYPE, core, scom_data);

    PK_TRACE("set OPCG_REG0 register bit 0='0'");
    CME_GETSCOM(PERV_OPCG_REG0, core, CME_SCOM_AND, scom_data);
    scom_data &= ~BIT64(0);
    CME_PUTSCOM(PERV_OPCG_REG0, core, scom_data);

    PK_TRACE("trigger Scan0");
    CME_GETSCOM(PERV_OPCG_REG0, core, CME_SCOM_AND, scom_data);
    scom_data |= BIT64(2);
    CME_PUTSCOM(PERV_OPCG_REG0, core, scom_data);

    PK_TRACE("Poll OPCG done bit to check for run-N completeness");

    do
    {
        CME_GETSCOM(PERV_CPLT_STAT0, core, CME_SCOM_AND, scom_data);
    }
    while(!(scom_data & BIT64(8)));

    PK_TRACE("clear all clock REGIONS and type");
    CME_PUTSCOM(PERV_CLK_REGION, core, 0);

    PK_TRACE("Clear Scan Select Register");
    CME_PUTSCOM(PERV_SCAN_REGION_TYPE, core, 0);

    return rc;
}
