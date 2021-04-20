/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_errl_utils.h $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2021                                                         */
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
#ifndef _QME_ERRL_UTILS_H
#define _QME_ERRL_UTILS_H

// used by non fapi qme code
#define QME_ERROR_HANDLER(panic_code, func_data0, func_data1, func_data2) \
    {                                                                     \
        G_qme_record.errl_panic = panic_code;                             \
        G_qme_record.errl_data0 = func_data0;                             \
        G_qme_record.errl_data1 = func_data1;                             \
        G_qme_record.errl_data2 = func_data2;                             \
        qme_errlog();                                                     \
        IOTA_PANIC(panic_code);                                           \
    }

// QME Error Handling
void qme_fault_inject(uint32_t, uint32_t);
void qme_machine_check_handler();
void qme_errlog();

#endif // _QME_ERRL_UTILS_H
