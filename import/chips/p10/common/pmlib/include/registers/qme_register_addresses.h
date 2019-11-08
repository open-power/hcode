/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/pmlib/include/registers/qme_register_addresses.h $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2015,2019                                                    */
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
#ifndef __QME_REGISTER_ADDRESSES_H__
#define __QME_REGISTER_ADDRESSES_H__

/// \file cme_register_addresses.h
/// \brief Symbolic addresses for the CME unit

#define QME_FIRPIB_BASE 0x10012000
#define QME_SCOM_LFIR 0x10012000
#define QME_SCOM_LFIR_AND 0x10012001
#define QME_SCOM_LFIR_OR 0x10012002
#define QME_SCOM_LFIRMASK 0x10012003
#define QME_SCOM_LFIRMASK_AND 0x10012004
#define QME_SCOM_LFIRMASK_OR 0x10012005
#define QME_SCOM_LFIRACT0 0x10012006
#define QME_SCOM_LFIRACT1 0x10012007
#define QME_PIB_BASE 0x10012000
#define QME_SCOM_CSCR 0x1001200a
#define QME_SCOM_CSCR_CLR 0x1001200b
#define QME_SCOM_CSCR_OR 0x1001200c
#define QME_SCOM_CSAR 0x1001200d
#define QME_SCOM_CSDR 0x1001200e
#define QME_SCOM_BCECSR 0x1001200f
#define QME_SCOM_XIXCR 0x10012010
#define QME_SCOM_XIRAMRA 0x10012011
#define QME_SCOM_XIRAMGA 0x10012012
#define QME_SCOM_XIRAMDBG 0x10012013
#define QME_SCOM_XIRAMEDR 0x10012014
#define QME_SCOM_XIDBGPRO 0x10012015
#define QME_SCOM_XISIB 0x10012016
#define QME_SCOM_XIMEM 0x10012017
#define QME_SCOM_CMEXISGB 0x10012018
#define QME_SCOM_XIICAC 0x10012019
#define QME_SCOM_XIPCBQ0 0x1001201a
#define QME_SCOM_XIPCBQ1 0x1001201b
#define QME_SCOM_XIPCBMD0 0x1001201c
#define QME_SCOM_XIPCBMD1 0x1001201d
#define QME_SCOM_XIPCBMI0 0x1001201e
#define QME_SCOM_XIPCBMI1 0x1001201f
#define QME_SCOM_FLAGS 0x10012020
#define QME_SCOM_FLAGS_CLR 0x10012021
#define QME_SCOM_FLAGS_OR 0x10012022
#define QME_SCOM_SRTCH0 0x10012023
#define QME_SCOM_SRTCH1 0x10012024
#define QME_SCOM_EISR 0x10012025
#define QME_SCOM_EIMR 0x10012026
#define QME_SCOM_EIPR 0x10012027
#define QME_SCOM_EITR 0x10012028
#define QME_SCOM_EISTR 0x10012029
#define QME_SCOM_EINR 0x1001202a
#define QME_SCOM_EIIR 0x1001202b
#define QME_SCOM_VCCR 0x1001202c
#define QME_SCOM_IDCR 0x1001202d
#define QME_SCOM_CIDSR 0x1001202e
#define QME_SCOM_QIDSR 0x1001202f
#define QME_SCOM_BCEBAR0 0x10012030
#define QME_SCOM_BCEBAR1 0x10012031
#define QME_SCOM_QFMR 0x10012032
#define QME_SCOM_AFSR 0x10012033
#define QME_SCOM_AFTR 0x10012034
#define QME_SCOM_VDCR 0x10012035
#define QME_SCOM_VNCR 0x10012036
#define QME_SCOM_VDSR 0x10012037
#define QME_SCOM_VECR 0x10012038
#define QME_SCOM_VCTR 0x10012039
#define QME_SCOM_LMCR 0x1001203a
#define QME_SCOM_LMCR_CLR 0x1001203b
#define QME_SCOM_LMCR_OR 0x1001203c
#define QME_SCOM_SICR 0x1001203d
#define QME_SCOM_SICR_CLR 0x1001203e
#define QME_SCOM_SICR_OR 0x1001203f
#define QME_SCOM_PMSRS0 0x10012040
#define QME_SCOM_PMSRS1 0x10012041
#define QME_SCOM_PMCRS0 0x10012042
#define QME_SCOM_PMCRS1 0x10012043
#define QME_SCOM_PSCRS00 0x10012044
#define QME_SCOM_PSCRS01 0x10012045
#define QME_SCOM_PSCRS02 0x10012046
#define QME_SCOM_PSCRS03 0x10012047
#define QME_SCOM_PSCRS10 0x10012048
#define QME_SCOM_PSCRS11 0x10012049
#define QME_SCOM_PSCRS12 0x1001204a
#define QME_SCOM_PSCRS13 0x1001204b
#define QME_SCOM_SISR 0x1001204c
#define QME_SCOM_ICRR 0x1001204d
#define QME_LOCAL_BASE 0xC0000000
#define QME_LCL_EISR 0xc0000000
#define QME_LCL_EISR_OR 0xc0000010
#define QME_LCL_EISR_CLR 0xc0000018
#define QME_LCL_EIMR 0xc0000020
#define QME_LCL_EIMR_OR 0xc0000030
#define QME_LCL_EIMR_CLR 0xc0000038
#define QME_LCL_EIPR 0xc0000040
#define QME_LCL_EIPR_OR 0xc0000050
#define QME_LCL_EIPR_CLR 0xc0000058
#define QME_LCL_EITR 0xc0000060
#define QME_LCL_EITR_OR 0xc0000070
#define QME_LCL_EITR_CLR 0xc0000078
#define QME_LCL_EISTR 0xc0000080
#define QME_LCL_EINR 0xc00000a0
#define QME_LCL_TSEL 0xc0000100
#define QME_LCL_DBG 0xc0000120
#define QME_LCL_DBG_OR 0xc0000130
#define QME_LCL_DBG_CLR 0xc0000138
#define QME_LCL_TBR 0xc0000140
#define QME_LCL_AFSR 0xc0000160
#define QME_LCL_AFTR 0xc0000180
#define QME_LCL_LMCR 0xc00001a0
#define QME_LCL_LMCR_OR 0xc00001b0
#define QME_LCL_LMCR_CLR 0xc00001b8
#define QME_LCL_BCECSR 0xc00001e0
#define QME_LCL_PMSRS0 0xc0000200
#define QME_LCL_PMSRS1 0xc0000220
#define QME_LCL_PMCRS0 0xc0000240
#define QME_LCL_PMCRS1 0xc0000260
#define QME_LCL_PECESR0 0xc0000280
#define QME_LCL_PECESR1 0xc00002a0
#define QME_LCL_PSCRS00 0xc0000300
#define QME_LCL_PSCRS10 0xc0000320
#define QME_LCL_PSCRS20 0xc0000340
#define QME_LCL_PSCRS30 0xc0000360
#define QME_LCL_PSCRS01 0xc0000380
#define QME_LCL_PSCRS11 0xc00003a0
#define QME_LCL_PSCRS21 0xc00003c0
#define QME_LCL_PSCRS31 0xc00003e0
#define QME_LCL_FLAGS 0xc0000400
#define QME_LCL_FLAGS_OR 0xc0000410
#define QME_LCL_FLAGS_CLR 0xc0000418
#define QME_LCL_SRTCH0 0xc0000420
#define QME_LCL_SRTCH1 0xc0000440
#define QME_LCL_SICR 0xc0000500
#define QME_LCL_SICR_OR 0xc0000510
#define QME_LCL_SICR_CLR 0xc0000518
#define QME_LCL_SISR 0xc0000520
#define QME_LCL_XIPCBMD0 0xc0000580
#define QME_LCL_XIPCBMD1 0xc00005a0
#define QME_LCL_XIPCBMI0 0xc00005c0
#define QME_LCL_XIPCBMI1 0xc00005e0
#define QME_LCL_VDCR 0xc0000600
#define QME_LCL_VNCR 0xc0000620
#define QME_LCL_VDSR 0xc0000640
#define QME_LCL_VECR 0xc0000660
#define QME_LCL_VCCR 0xc0000680
#define QME_LCL_IDCR 0xc00006a0
#define QME_LCL_CIDSR 0xc00006c0
#define QME_LCL_QIDSR 0xc00006e0
#define QME_LCL_ICCR 0xc0000700
#define QME_LCL_ICCR_OR 0xc0000710
#define QME_LCL_ICCR_CLR 0xc0000718
#define QME_LCL_ICSR 0xc0000720
#define QME_LCL_ICRR 0xc0000740
#define QME_DERP     0xc0002500
#define QME_DORP     0xc0002540

#endif // __QME_REGISTER_ADDRESSES_H__

