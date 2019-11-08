/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/test/proc_chip_ec_feature.C $               */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
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
#include <stdint.h>
#include <fapi2.H>
#include <attribute_ids.H>
#include <fapi2_chip_ec_feature.H>
#include <proc_chip_ec_feature.H>

using namespace fapi2;
using fapi2::TARGET_TYPE_PROC_CHIP;
using fapi2::FAPI2_RC_FALSE;



extern "C"
{
    fapi2::ReturnCode proc_chip_ec_feature(
        const fapi2::Target<TARGET_TYPE_PROC_CHIP>& i_target)
    {
        ATTR_CHIP_EC_FEATURE_TEST1_Type val = 0;
        ATTR_CHIP_EC_FEATURE_TEST2_Type val2 = 0;

        FAPI_TRY(FAPI_ATTR_GET(ATTR_CHIP_EC_FEATURE_TEST1, i_target, val));

        if(val)
        {
            FAPI_INF("this processor has the ATTR_EC_FEATURE_TEST1 feature");
        }
        else
        {
            FAPI_INF("this processor does not the ATTR_EC_FEATURE_TEST1 feature ");
        }


        FAPI_TRY(FAPI_ATTR_GET(ATTR_CHIP_EC_FEATURE_TEST2, i_target, val2));

        if(val2)
        {
            FAPI_INF("this processor has the ATTR_EC_FEATURE_TEST2 feature");
        }
        else
        {
            FAPI_INF("this processor does not have the ATTR_EC_FEATURE_TEST2 feature");
        }

    fapi_try_exit:
        return fapi2::current_err;

    }
}
