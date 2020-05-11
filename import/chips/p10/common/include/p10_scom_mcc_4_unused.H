/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mcc_4_unused.H $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_scom_mcc_4_H_UNUSED__
#define __p10_scom_mcc_4_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> [ATCL_CL_CLSCOM_MCPERF4]
static const uint64_t ATCL_CL_CLSCOM_MCPERF4 = 0x0c010c22ull;

static const uint32_t ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY = 0;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY = 1;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ = 2;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ_LEN = 6;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE = 8;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE_LEN = 6;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF = 14;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF_LEN = 6;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF = 20;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF_LEN = 6;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31 = 26;
static const uint32_t ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31_LEN = 6;
//<< [ATCL_CL_CLSCOM_MCPERF4]
// mcc/reg00004.H

//>> [CRYPTO_ENCRYPT_CRYPTOKEY2A]
static const uint64_t CRYPTO_ENCRYPT_CRYPTOKEY2A = 0x0c010f54ull;

static const uint32_t CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A = 0;
static const uint32_t CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A_LEN = 64;
//<< [CRYPTO_ENCRYPT_CRYPTOKEY2A]
// mcc/reg00004.H

//>> [USTL_USTLFIRACT2]
static const uint64_t USTL_USTLFIRACT2 = 0x0c010e09ull;

static const uint32_t USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2 = 0;
static const uint32_t USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2_LEN = 62;
//<< [USTL_USTLFIRACT2]
// mcc/reg00004.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mcc/reg00004_unused.H"
#endif
#endif
