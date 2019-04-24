/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/plat_error_scope.H $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2012,2019                                                    */
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
/**
 * @file plat_error_scope.H
 * @brief platform definitions which create a scope for automatic error handling
 */

#ifndef __FAPI2_PLAT_ERROR_SCOPE__
#define __FAPI2_PLAT_ERROR_SCOPE__


//PLAT NOTE// bypass FAPI_TRY to speed process ppe scoms


/// @cond
#define PLAT_FAPI_TRY_NO_TRACE( __operation__ )                         \
    (__operation__)
/*
//F2//    if ((fapi2::current_err = (__operation__)) != fapi2::FAPI2_RC_SUCCESS) \
//F2//    {                                                                   \
//F2//        goto fapi_try_exit;                                             \
//F2//    }
*/

#define PLAT_FAPI_TRY_TRACE( __operation__, ... )                       \
    (__operation__)
/*
//F2//    if ((fapi2::current_err = (__operation__)) != fapi2::FAPI2_RC_SUCCESS) \
//F2//    {                                                                   \
//F2//        FAPI_ERR(__VA_ARGS__);                                          \
//F2//        goto fapi_try_exit;                                             \
//F2//    }
*/

///
/// @brief Assert a conditional is true.
/// If it is not, the FFDC gathering function is called and the
/// trace is output as a FAPI error trace.
/// @param[in] __conditional__ the condition to assert
/// @param[in] __ffdc__ the FFDC gathering function
/// @param[in] ... varargs, as input to FAPI_ERR
///
#define PLAT_FAPI_ASSERT( __conditional__, __ffdc__, ... )      \
    if (! (__conditional__))                                    \
    {                                                           \
        FAPI_ERR(__VA_ARGS__);                                  \
        goto fapi_try_exit;                                     \
    }

//        (__ffdc__).execute();

///
/// @brief Create an error log based on __conditional__,
/// the FFDC gathering function is called and the
/// trace is output as a FAPI error trace. An error log
/// is created and returned to the caller via the platform
/// log pointer of the fapi2::current_err return code object
/// The caller is responsible for handling the error object.
///
/// @param[in] __conditional__ the condition to assert
/// @param[in] __ffdc__ the FFDC gathering function
/// @param[in] ... varargs, as input to FAPI_ERR
///
/// @note: Plat error, if supported, is stored in RC object. Failing
///        the __conditional__ test does not cause a branch to fapi_try_exit
///
///
#define PLAT_FAPI_ASSERT_NOEXIT( __conditional__, __ffdc__, ... )   \
    if (! (__conditional__))                                        \
    {                                                               \
        __ffdc__.execute(                                           \
                fapi2::FAPI2_ERRL_SEV_UNDEFINED, true);             \
        FAPI_ERR(__VA_ARGS__); \
    }
/// @endcond


#endif
