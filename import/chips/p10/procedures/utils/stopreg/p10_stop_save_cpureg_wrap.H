/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/utils/stopreg/p10_stop_save_cpureg_wrap.H $ */
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
#include <fapi2.H>
#include <p10_stop_api.H>

extern "C"
{
    typedef  fapi2::ReturnCode (*p10_stop_save_cpureg_wrap_FP_t)(void* const i_pImage,
            const stopImageSection::CpuReg_t i_regId,
            const uint64_t i_regData,
            const uint64_t i_pir);

    fapi2::ReturnCode p10_stop_save_cpureg_wrap(void* const i_pImage, const stopImageSection::CpuReg_t i_regId,
            const uint64_t i_regData, const uint64_t i_pir);
};
