/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/registers/pba_register_addresses.h $ */
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
#ifndef __PBA_REGISTER_ADDRESSES_H__
#define __PBA_REGISTER_ADDRESSES_H__

// $Id$
// $Source$
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2015
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file pba_register_addresses.h
/// \brief Symbolic addresses for the PBA unit

// *** WARNING *** - This file is generated automatically, do not edit.


#define PBA_OCI_BASE 0xC0040000
#define PBA_MODE 0xc0040000
#define PBA_SLVRST 0xc0040008
#define PBA_SLVCTLN(n) (PBA_SLVCTL0 + ((PBA_SLVCTL1 - PBA_SLVCTL0) * (n)))
#define PBA_SLVCTL0 0xc0040020
#define PBA_SLVCTL1 0xc0040028
#define PBA_SLVCTL2 0xc0040030
#define PBA_SLVCTL3 0xc0040038
#define PBA_BCDE_CTL 0xc0040080
#define PBA_BCDE_SET 0xc0040088
#define PBA_BCDE_STAT 0xc0040090
#define PBA_BCDE_PBADR 0xc0040098
#define PBA_BCDE_OCIBAR 0xc00400a0
#define PBA_BCUE_CTL 0xc00400a8
#define PBA_BCUE_SET 0xc00400b0
#define PBA_BCUE_STAT 0xc00400b8
#define PBA_BCUE_PBADR 0xc00400c0
#define PBA_BCUE_OCIBAR 0xc00400c8
#define PBA_PBOCRN(n) (PBA_PBOCR0 + ((PBA_PBOCR1 - PBA_PBOCR0) * (n)))
#define PBA_PBOCR0 0xc00400d0
#define PBA_PBOCR1 0xc00400d8
#define PBA_PBOCR2 0xc00400e0
#define PBA_PBOCR3 0xc00400e8
#define PBA_PBOCR4 0xc00400f0
#define PBA_PBOCR5 0xc00400f8
#define PBA_XSNDTX 0xc0040100
#define PBA_XCFG 0xc0040108
#define PBA_XSNDSTAT 0xc0040110
#define PBA_XSNDDAT 0xc0040118
#define PBA_XRCVSTAT 0xc0040120
#define PBA_XSHBRN(n) (PBA_XSHBR0 + ((PBA_XSHBR1 - PBA_XSHBR0) * (n)))
#define PBA_XSHBR0 0xc0040130
#define PBA_XSHBR1 0xc0040150
#define PBA_XSHCSN(n) (PBA_XSHCS0 + ((PBA_XSHCS1 - PBA_XSHCS0) * (n)))
#define PBA_XSHCS0 0xc0040138
#define PBA_XSHCS1 0xc0040158
#define PBA_XSHINCN(n) (PBA_XSHINC0 + ((PBA_XSHINC1 - PBA_XSHINC0) * (n)))
#define PBA_XSHINC0 0xc0040140
#define PBA_XSHINC1 0xc0040160


// The following are only available via SCOM
// #define PBA_PIB_BASE 0x68000
#define PBA_PIB_BASE 0x05012840
#define PBA_FIR PBA_PIB_BASE
#define PBA_FIR_AND (PBA_PIB_BASE + 1)
#define PBA_FIR_OR  (PBA_PIB_BASE + 2)
#define PBA_FIRMASK (PBA_PIB_BASE + 3)
#define PBA_FIRMASK_AND (PBA_PIB_BASE + 4)
#define PBA_FIRMASK_OR (PBA_PIB_BASE + 5)
#define PBA_FIRACT0 (PBA_PIB_BASE + 6)
#define PBA_FIRACT1 (PBA_PIB_BASE + 7)
#define PBA_OCCACT (PBA_PIB_BASE + 0xa)
#define PBA_CFG (PBA_PIB_BASE + 0xb)
#define PBA_ERRRPT0 (PBA_PIB_BASE + 0xc)
#define PBA_ERRRPT1 (PBA_PIB_BASE + 0xd)
#define PBA_ERRRPT2 (PBA_PIB_BASE + 0xe)
#define PBA_RBUFVALN(n) (PBA_RBUFVAL0 + ((PBA_RBUFVAL1 - PBA_RBUFVAL0) * (n)))
#define PBA_RBUFVAL0 (PBA_PIB_BASE + 0x10)
#define PBA_RBUFVAL1 (PBA_PIB_BASE + 0x11)
#define PBA_RBUFVAL2 (PBA_PIB_BASE + 0x12)
#define PBA_RBUFVAL3 (PBA_PIB_BASE + 0x13)
#define PBA_RBUFVAL4 (PBA_PIB_BASE + 0x14)
#define PBA_RBUFVAL5 (PBA_PIB_BASE + 0x15)
#define PBA_WBUFVALN(n) (PBA_WBUFVAL0 + ((PBA_WBUFVAL1 - PBA_WBUFVAL0) * (n)))
#define PBA_WBUFVAL0 (PBA_PIB_BASE + 0x18)
#define PBA_WBUFVAL1 (PBA_PIB_BASE + 0x19)
//#define PBA_TRUSTEDPIB_BASE 0x68020
#define PBA_TRUSTEDPIB_BASE 0x05012B00
#define PBA_BARN(n) (PBA_BAR0 + ((PBA_BAR1 - PBA_BAR0) * (n)))
#define PBA_BAR0 (PBA_TRUSTEDPIB_BASE)
#define PBA_BAR1 (PBA_TRUSTEDPIB_BASE + 1)
#define PBA_BAR2 (PBA_TRUSTEDPIB_BASE + 2)
#define PBA_BAR3 (PBA_TRUSTEDPIB_BASE + 3)
#define PBA_BARMSKN(n) (PBA_BARMSK0 + ((PBA_BARMSK1 - PBA_BARMSK0) * (n)))
#define PBA_BARMSK0 (PBA_TRUSTEDPIB_BASE + 4)
#define PBA_BARMSK1 (PBA_TRUSTEDPIB_BASE + 5)
#define PBA_BARMSK2 (PBA_TRUSTEDPIB_BASE + 6)
#define PBA_BARMSK3 (PBA_TRUSTEDPIB_BASE + 7)

#endif // __PBA_REGISTER_ADDRESSES_H__
