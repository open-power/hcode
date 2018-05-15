/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/utils/stopreg/link.c $             */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
#define SRESET_HNDLR_OFFSET    0x00
#define SELF_RESTORE_SIZE      0x2400
#define INT_VECT_AREA          THREAD_LAUNCHER_OFFSET
#define THREAD_LAUNCHER_SIZE   1024
#define CACHE_LINE_SIZE        128

OUTPUT_FORMAT(binary)
MEMORY
{
    selfRestoreRegion (rx) : ORIGIN = SRESET_HNDLR_OFFSET, LENGTH = SELF_RESTORE_SIZE
    }

    SECTIONS
{
    . = 0;
    . = ALIGN(CACHE_LINE_SIZE);
    _SELF_RESTORE_START = .;
.selfRestore _SELF_RESTORE_START :
    { *(.selfRestore) } > selfRestoreRegion
}
