/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_f_unused.H $     */
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

#ifndef __p10_oci_proc_f_H_UNUSED__
#define __p10_oci_proc_f_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_PBAXICFG]
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG = 0xc0040188ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_PBAX_EN = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVATION_EN = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RESET = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_RESET = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_GROUPID = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_GROUPID_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_CHIPID = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_CHIPID_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_11 = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_BRDCST_GROUP = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_BRDCST_GROUP_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_DATATO_DIV = 20;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_DATATO_DIV_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26 = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26 = 25;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RETRY_COUNT_OVERCOM = 27;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RETRY_THRESH = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RETRY_THRESH_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RSVTO_DIV = 36;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RSVTO_DIV_LEN = 5;
//<< [TP_TPBR_PBA_PBAO_PBAXICFG]
// oci_proc/reg00019.H

//>> [TP_TPBR_PBA_PBAO_PBAXIRCVSTAT]
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT = 0xc00401a0ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_IN_PROGRESS = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_ERROR = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_WRITE_IN_PROGRESS = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_RESERVATION_SET = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_CAPTURE = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_CAPTURE_LEN = 18;
//<< [TP_TPBR_PBA_PBAO_PBAXIRCVSTAT]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1 = 0xc0000030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_SIZE_LEN = 15;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR = 0xc0000190ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30 = 0xc0000438ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_1 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC = 0xc00100d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_TAG_ADDR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_ERR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_POPULATE_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_VALID_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7 = 0xc0010238ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6 = 0xc0010418ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_6_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_7 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_7_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR = 0xc0020118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3 = 0xc0020218ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31 = 0xc0020278ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2 = 0xc0020408ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_2_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_3_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30 = 0xc0030270ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8 = 0xc0030240ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR = 0xc0030128ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0 = 0xc0030110ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0_SPRG0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0_SPRG0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_RO = 0xc0063000ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_WO_CLEAR = 0xc0063008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_7 = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0 = 0xc0062040ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4 = 0xc00620a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4_OCB_OCI_OPIT2Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4_OCB_OCI_OPIT2Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2 = 0xc0062150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6 = 0xc00621b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6_OCB_OCI_OPIT6Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6_OCB_OCI_OPIT6Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR = 0xc0062a80ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_PAYLOAD_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT8C2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2 = 0xc0062210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_PAYLOAD_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT8C2]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR = 0xc0062ac0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_PAYLOAD_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR = 0xc0062a48ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_PAYLOAD_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR = 0xc0062b58ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_PAYLOAD_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR = 0xc0062bb8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_PAYLOAD_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR = 0xc0062b48ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_PAYLOAD_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_RO = 0xc0063300ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_WO_CLEAR = 0xc0063308ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_7 = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_8 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_9 = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_10 = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_11 = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_12 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_13 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_14 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_15 = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_16 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_17 = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_18 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_19 = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_20 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_21 = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_22 = 22;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_23 = 23;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_24 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_25 = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_26 = 26;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_27 = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_28 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_29 = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_30 = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_31 = 31;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPITBSV0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0 = 0xc0062420ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_7_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPITBSV0]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPITIR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR = 0xc0062e00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_CHIPLET_ID = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_CHIPLET_ID_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_PAYLOAD = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_PAYLOAD_LEN = 23;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPITIR]
// oci_proc/reg00019.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00019_unused.H"
#endif
#endif
