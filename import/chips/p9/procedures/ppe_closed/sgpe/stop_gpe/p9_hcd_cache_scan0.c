/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_scan0.c $ */
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

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"

int
p9_hcd_cache_scan0(uint32_t quad, uint64_t regions, uint64_t scan_type)
{
    int rc = SGPE_STOP_SUCCESS;
#if BROADSIDE_SCAN0
    // clean up the scan region
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_SCAN_REGION_TYPE, quad), 0);

    // clean up OPCG capture reg0
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_CAPT0, quad), 0);
    // clean up OPCG capture reg1
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_CAPT1, quad), 0);
    // clean up OPCG capture reg2
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_CAPT2, quad), 0);

    // all regions    + ARY/NSL
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CLK_REGION, quad), (BITS64(4, 11) | BITS64(49, 2)));
    // NSL fill for 16 cycles, scan_count=0
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG1,  quad), BIT64(59));
    // OPCG GO, LBIST mode
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0,  quad), BIT64(1));
#else
    uint64_t scom_data;
    PK_TRACE("raise Vital clock region fence");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_CTRL1_OR, quad), BIT64(3));

    PK_TRACE("Raise region fences for scanned regions");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_CTRL1_OR,  quad), BITS64(4, 11));

    PK_TRACE("Setup all Clock Domains and Clock Types");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_CLK_REGION, quad), scom_data);
    scom_data |= ((regions << SHIFT64(14)) | BITS64(48, 3));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CLK_REGION, quad), scom_data);

    PK_TRACE("Write scan select register");
    scom_data = (scan_type << SHIFT64(59)) | (regions << SHIFT64(14));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_SCAN_REGION_TYPE, quad), scom_data);

    PK_TRACE("set OPCG_REG0 register bit 0='0'");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);
    scom_data &= ~BIT64(0);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);

    PK_TRACE("trigger Scan0");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);
    scom_data |= BIT64(2);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_OPCG_REG0, quad), scom_data);

    PK_TRACE("Poll OPCG done bit to check for run-N completeness");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_STAT0, quad), scom_data);
    }
    while(!(scom_data & BIT64(8)));

    PK_TRACE("clear all clock REGIONS and type");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_CLK_REGION, quad), 0);

    PK_TRACE("Clear Scan Select Register");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PERV_SCAN_REGION_TYPE, quad), 0);
#endif
    return rc;
}
