/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/examples/p10_example.C $      */
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
#include "fapi2.H"
#include "p10_example.H"
#include "p10_scom_perv.H"
#include "p10_scom_c_0.H"
#include "p10_scom_iohs_3.H"
#include "p10_scom_nmmu_a.H"
#include <target_filters.H>

fapi2::ReturnCode p10_test_chip(
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target)
{
    using namespace scomt;
    using namespace scomt::perv;

    fapi2::buffer<uint64_t> l_data;
    uint64_t l_read_data0 = 0;
    uint64_t l_read_data1 = 0;
    bool l_bitv = false;

    FAPI_TRY(GET_DPLL_CNTL_PAU_REGS_CTRL_RW(i_target, l_data));

    SET_DPLL_CNTL_PAU_REGS_CTRL_DPLL_LOCK_SEL(l_data);       // Set a bit
    CLEAR_DPLL_CNTL_PAU_REGS_CTRL_DCO_OVERRIDE(l_data);      // Clear a bit
    SET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_DN(0xAB, l_data);// insertFromRight value
    SET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_UP(0xBA, l_data);
    SET_DPLL_CNTL_PAU_REGS_CTRL_DCO_INCR(0x1, l_data);       // Set a bit from value

    FAPI_TRY(PUT_DPLL_CNTL_PAU_REGS_CTRL_WO_OR(i_target, l_data)); //May write a different address for the register

    GET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_DN(l_data, l_read_data0); // extractToRight
    GET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_UP(l_data, l_read_data1);

    //bool bit value
    l_bitv = GET_DPLL_CNTL_PAU_REGS_CTRL_DCO_INCR(l_data);

    printf("SLEWRATE_DN: %lx SLEWRATE_UP: %lx  DCO_INCR: %d\n", l_read_data0, l_read_data1, l_bitv);

fapi_try_exit:
    return fapi2::current_err;

}

fapi2::ReturnCode p10_nmmu(
    const fapi2::Target<fapi2::TARGET_TYPE_NMMU>& i_target)
{
    using namespace scomt;
    using namespace scomt::nmmu;

    fapi2::buffer<uint64_t> l_data;

    FAPI_TRY(GET_FIR1_REG_RW(i_target, l_data));
    SET_FIR1_REG_FBC_XLAT_ARY_ECC_CE_DET(l_data);
    CLEAR_FIR1_REG_FBC_CQRD_ARY_ECC_CE_DET(l_data);
    FAPI_TRY(PUT_FIR1_REG_WO_OR(i_target, l_data));

fapi_try_exit:
    return fapi2::current_err;

}

fapi2::ReturnCode p10_test_perv(
    const fapi2::Target<fapi2::TARGET_TYPE_PERV>& i_target)
{
    using namespace scomt;
    using namespace scomt::perv;

    fapi2::buffer<uint64_t> l_data;
    uint64_t l_read_data0 = 0;
    uint64_t l_read_data1 = 0;
    bool l_bitv = false;

    FAPI_TRY(GET_DPLL_CNTL_PAU_REGS_CTRL_RW(i_target, l_data));

    SET_DPLL_CNTL_PAU_REGS_CTRL_DPLL_LOCK_SEL(l_data);       // Set a bit
    CLEAR_DPLL_CNTL_PAU_REGS_CTRL_DCO_OVERRIDE(l_data);      // Clear a bit
    SET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_DN(0xAB, l_data);// insertFromRight value
    SET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_UP(0xBA, l_data);
    SET_DPLL_CNTL_PAU_REGS_CTRL_DCO_INCR(0x1, l_data);       // Set a bit from value

    FAPI_TRY(PUT_DPLL_CNTL_PAU_REGS_CTRL_WO_OR(i_target, l_data)); //May write a different address for the register

    GET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_DN(l_data, l_read_data0); // extractToRight
    GET_DPLL_CNTL_PAU_REGS_CTRL_FF_SLEWRATE_UP(l_data, l_read_data1);

    //bool bit value
    l_bitv = GET_DPLL_CNTL_PAU_REGS_CTRL_DCO_INCR(l_data);

    printf("SLEWRATE_DN: %lx SLEWRATE_UP: %lx  DCO_INCR: %d\n", l_read_data0, l_read_data1, l_bitv);

fapi_try_exit:
    return fapi2::current_err;

}

fapi2::ReturnCode p10_test_core(
    const fapi2::Target<fapi2::TARGET_TYPE_CORE>& i_target)
{
    using namespace scomt;
    using namespace scomt::c;

    fapi2::buffer<uint64_t> l_data;

    FAPI_TRY(GET_CPMS_L3_PFETCNTL(i_target, l_data));
    SET_CPMS_L3_PFETCNTL_VDD_PFET_SEQ_STATE(0xF, l_data);
    FAPI_TRY(PUT_CPMS_L3_PFETCNTL(i_target, l_data));

fapi_try_exit:
    return fapi2::current_err;
}

fapi2::ReturnCode p10_test_iohs(
    const fapi2::Target<fapi2::TARGET_TYPE_IOHS>& i_target)
{
    using namespace scomt;
    using namespace scomt::iohs;

    fapi2::buffer<uint64_t> l_data;

    FAPI_TRY(GET_AXON_EPS_FIR_MODE_REG(i_target, l_data));
    SET_AXON_EPS_FIR_MODE_REG_XSTOP_LOCK(l_data);
    FAPI_TRY(PUT_AXON_EPS_FIR_MODE_REG(i_target, l_data));

fapi_try_exit:
    return fapi2::current_err;
}

fapi2::ReturnCode p10_example(
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target)
{
    FAPI_TRY(p10_test_chip(i_target));

    for (auto& l_chplt_target : i_target.getChildren<fapi2::TARGET_TYPE_PERV>
         (static_cast<fapi2::TargetFilter>(fapi2::TARGET_FILTER_TP |
                                           fapi2::TARGET_FILTER_ALL_NEST |
                                           fapi2::TARGET_FILTER_ALL_IOHS |
                                           fapi2::TARGET_FILTER_ALL_MC |
                                           fapi2::TARGET_FILTER_ALL_PCI),
          fapi2::TARGET_STATE_FUNCTIONAL))
    {
        FAPI_TRY(p10_test_perv(l_chplt_target));
    }

    for (auto& l_chplt_target : i_target.getChildren<fapi2::TARGET_TYPE_PERV>())
    {
        FAPI_TRY(p10_test_perv(l_chplt_target));
    }

    for (auto& l_core_target : i_target.getChildren<fapi2::TARGET_TYPE_CORE>())
    {
        FAPI_TRY(p10_test_core(l_core_target));
    }

    for (auto& l_core_target : i_target.getChildren<fapi2::TARGET_TYPE_IOHS>())
    {
        FAPI_TRY(p10_test_iohs(l_core_target));
    }

    for (auto& l_nmmu_target : i_target.getChildren<fapi2::TARGET_TYPE_NMMU>())
    {
        FAPI_TRY(p10_nmmu(l_nmmu_target));
    }

fapi_try_exit:
    return fapi2::current_err;
}

