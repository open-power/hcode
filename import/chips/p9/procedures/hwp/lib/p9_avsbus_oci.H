/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_avsbus_oci.H $          */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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

///
/// @file  p9_avsbus_oci.H
/// @brief Specific elements for AVSBus access via OCI
///
// *HW Owner    : Sudheendra K Srivathsa <sudheendraks@in.ibm.com>
// *FW Owner    : Sangeetha T S <sangeet2@in.ibm.com>
// *Team        : PM
// *Consumed by : HB
// *Level       : 2
///

#ifndef __P9_AVSBUS_OCI_H__
#define __P9_AVSBUS_OCI_H__

namespace p9avslib
{
/// @todo  Temporary until the common SCOM address file is available.
/// These are presently OCI addresses like would be used for PGPE.
#define OCB_OCI_BASE 0xC0060000
#define OCB_OISR0 0xc0060000
#define OCB_OISR0_CLR 0xc0060008
#define OCB_OISR0_OR 0xc0060010
#define OCB_OIMR0 0xc0060020
#define OCB_OIMR0_CLR 0xc0060028
#define OCB_OIMR0_OR 0xc0060030
#define OCB_OITR0 0xc0060040
#define OCB_OITR0_CLR 0xc0060048
#define OCB_OITR0_OR 0xc0060050
#define OCB_OIEPR0 0xc0060060
#define OCB_OIEPR0_CLR 0xc0060068
#define OCB_OIEPR0_OR 0xc0060070
#define OCB_OISR1 0xc0060100
#define OCB_OISR1_CLR 0xc0060108
#define OCB_OISR1_OR 0xc0060110
#define OCB_OIMR1 0xc0060120
#define OCB_OIMR1_CLR 0xc0060128
#define OCB_OIMR1_OR 0xc0060130
#define OCB_OITR1 0xc0060140
#define OCB_OITR1_CLR 0xc0060148
#define OCB_OITR1_OR 0xc0060150
#define OCB_OIEPR1 0xc0060160
#define OCB_OIEPR1_CLR 0xc0060168
#define OCB_OIEPR1_OR 0xc0060170

/// @todo  Really should be in a header with all of the OCI addresses defined.
#define OCB_O2SCTRLF0A 0xc0063800
#define OCB_O2SCTRLS0A 0xc0063808
#define OCB_O2SCTRL10A 0xc0063810
#define OCB_O2SCTRL20A 0xc0063818
#define OCB_O2SST0A 0xc0063830
#define OCB_O2SCMD0A 0xc0063838
#define OCB_O2SWD0A 0xc0063840
#define OCB_O2SRD0A 0xc0063848
#define OCB_O2SCTRLF0B 0xc0063880
#define OCB_O2SCTRLS0B 0xc0063888
#define OCB_O2SCTRL10B 0xc0063890
#define OCB_O2SCTRL20B 0xc0063898
#define OCB_O2SST0B 0xc00638b0
#define OCB_O2SCMD0B 0xc00638b8
#define OCB_O2SWD0B 0xc00638c0
#define OCB_O2SRD0B 0xc00638c8
#define OCB_O2SCTRLF1A 0xc0063900
#define OCB_O2SCTRLS1A 0xc0063908
#define OCB_O2SCTRL11A 0xc0063910
#define OCB_O2SCTRL21A 0xc0063918
#define OCB_O2SST1A 0xc0063930
#define OCB_O2SCMD1A 0xc0063938
#define OCB_O2SWD1A 0xc0063940
#define OCB_O2SRD1A 0xc0063948
#define OCB_O2SCTRLF1B 0xc0063980
#define OCB_O2SCTRLS1B 0xc0063988
#define OCB_O2SCTRL11B 0xc0063990
#define OCB_O2SCTRL21B 0xc0063998
#define OCB_O2SST1B 0xc00639b0
#define OCB_O2SCMD1B 0xc00639b8
#define OCB_O2SWD1B 0xc00639c0
#define OCB_O2SRD1B 0xc00639c8

// O2S Control Frame Registers
const uint32_t OCB_O2SCTRLF[2][2] =
{
    OCB_O2SCTRLF0A,
    OCB_O2SCTRLF0B,
    OCB_O2SCTRLF1A,
    OCB_O2SCTRLF1B
};

// O2S Control Status Registers
const uint32_t OCB_O2SCTRLS[2][2] =
{
    OCB_O2SCTRLS0A,
    OCB_O2SCTRLS0B,
    OCB_O2SCTRLS1A,
    OCB_O2SCTRLS1B
};

// O2S Control 1 Registers
const uint32_t OCB_O2SCTRL1[2][2] =
{
    OCB_O2SCTRL10A,
    OCB_O2SCTRL10B,
    OCB_O2SCTRL11A,
    OCB_O2SCTRL11B
};

// O2S Control 2 Registers
const uint32_t OCB_O2SCTRL2[2][2] =
{
    OCB_O2SCTRL20A,
    OCB_O2SCTRL20B,
    OCB_O2SCTRL21A,
    OCB_O2SCTRL21B
};

// O2S Status Registers
const uint32_t OCB_O2SST[2][2] =
{
    OCB_O2SST0A,
    OCB_O2SST0B,
    OCB_O2SST1A,
    OCB_O2SST1B
};

// O2S Command Registers
const uint32_t OCB_O2SCMD[2][2] =
{
    OCB_O2SCMD0A,
    OCB_O2SCMD0B,
    OCB_O2SCMD1A,
    OCB_O2SCMD1B
};

// O2S Write Data Registers
const uint32_t OCB_O2SWD[2][2] =
{
    OCB_O2SWD0A,
    OCB_O2SWD0B,
    OCB_O2SWD1A,
    OCB_O2SWD1B
};

// O2S Read Data Registers
const uint32_t OCB_O2SRD[2][2] =
{
    OCB_O2SRD0A,
    OCB_O2SRD0B,
    OCB_O2SRD1A,
    OCB_O2SRD1A
};
} //end of p9avslib namespace
#endif  // __P9_AVSBUS_OCI_H__
