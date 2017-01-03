/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/p9_ringid_sgpe.H $ */
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


#ifndef _P9_RINGID_SGPE_H_
#define _P9_RINGID_SGPE_H_

#include <stdint.h>

typedef enum
{
    COMMON_RING = 0,
    INSTANCE_RING = 1
} RINGTYPE;


///
/// @enum RingID
/// @brief Enumeration of Ring ID values. These values are used to traverse
///        an image having Ring Containers.
// NOTE: Do not change the numbering, the sequence or add new constants to
//       the below enum, unless you know the effect it has on the traversing
//       of the image for Ring Containers.
typedef enum
{

    // Quad Chiplet Rings
    // Common - apply to all Quad instances
    eq_fure = 0,
    eq_gptr = 1,
    eq_time = 2,
    eq_mode = 3,
    ex_l3_fure = 4,
    ex_l3_gptr = 5,
    ex_l3_time = 6,
    ex_l2_mode = 7,
    ex_l2_fure = 8,
    ex_l2_gptr = 9,
    ex_l2_time = 10,
    ex_l3_refr_fure = 11,
    ex_l3_refr_gptr = 12,
    eq_ana_func = 13,
    eq_ana_gptr = 14,
    eq_dpll_func = 15,
    eq_dpll_gptr = 16,
    eq_dpll_mode = 17,
    eq_ana_bndy = 18,
    eq_ana_bndy_bucket_0 = 19,
    eq_ana_bndy_bucket_1 = 20,
    eq_ana_bndy_bucket_2 = 21,
    eq_ana_bndy_bucket_3 = 22,
    eq_ana_bndy_bucket_4 = 23,
    eq_ana_bndy_bucket_5 = 24,
    eq_ana_bndy_bucket_6 = 25,
    eq_ana_bndy_bucket_7 = 26,
    eq_ana_bndy_bucket_8 = 27,
    eq_ana_bndy_bucket_9 = 28,
    eq_ana_bndy_bucket_10 = 29,
    eq_ana_bndy_bucket_11 = 30,
    eq_ana_bndy_bucket_12 = 31,
    eq_ana_bndy_bucket_13 = 32,
    eq_ana_bndy_bucket_14 = 33,
    eq_ana_bndy_bucket_15 = 34,
    eq_ana_bndy_bucket_16 = 35,
    eq_ana_bndy_bucket_17 = 36,
    eq_ana_bndy_bucket_18 = 37,
    eq_ana_bndy_bucket_19 = 38,
    eq_ana_bndy_bucket_20 = 39,
    eq_ana_bndy_bucket_21 = 40,
    eq_ana_bndy_bucket_22 = 41,
    eq_ana_bndy_bucket_23 = 42,
    eq_ana_bndy_bucket_24 = 43,
    eq_ana_bndy_bucket_25 = 44,
    eq_ana_bndy_l3dcc_bucket_26 = 45,
    eq_ana_mode = 46,

    // Quad Chiplet Rings
    // EQ0 - EQ5 instance specific Rings
    eq_repr = 47,
    ex_l3_repr = 48,
    ex_l2_repr = 49,
    ex_l3_refr_repr = 50,
    ex_l3_refr_time = 51,


    P9_NUM_RINGS // This shoud always be the last constant
} RingID; // end of enum RingID

struct CHIPLET_DATA
{
    // This is the chiplet-ID of the first instance of the Chiplet
    uint8_t iv_base_chiplet_number;

    // The no.of common rings for the Chiplet
    uint8_t iv_num_common_rings;

    // The no.of instance rings for the Chiplet
    uint8_t iv_num_instance_rings;

    // Number of variants support
    uint8_t iv_num_variants;
};

// This is used to Set (Mark) the left-most bit
#define INSTANCE_RING_MARK 0x80
//
// This is used to Set (Mark) the left-most bit
#define INSTANCE_RING_MASK 0x7F


typedef enum RingOffset
{
    // Common Rings
    EQ_FURE         = 0,
    EQ_GPTR         = 1,
    EQ_TIME         = 2,
    EQ_MODE         = 3,
    EX_L3_FURE      = 4,
    EX_L3_GPTR      = 5,
    EX_L3_TIME      = 6,
    EX_L2_MODE      = 7,
    EX_L2_FURE      = 8,
    EX_L2_GPTR      = 9,
    EX_L2_TIME      = 10,
    EX_L3_REFR_FURE = 11,
    EX_L3_REFR_GPTR = 12,
    EQ_ANA_FUNC     = 13,
    EQ_ANA_GPTR     = 14,
    EQ_DPLL_FUNC    = 15,
    EQ_DPLL_GPTR    = 16,
    EQ_DPLL_MODE    = 17,
    EQ_ANA_BNDY     = 18,
    EQ_ANA_BNDY_BUCKET_0 = 18,
    EQ_ANA_BNDY_BUCKET_1 = 19,
    EQ_ANA_BNDY_BUCKET_2 = 20,
    EQ_ANA_BNDY_BUCKET_3 = 21,
    EQ_ANA_BNDY_BUCKET_4 = 22,
    EQ_ANA_BNDY_BUCKET_5 = 23,
    EQ_ANA_BNDY_BUCKET_6 = 24,
    EQ_ANA_BNDY_BUCKET_7 = 25,
    EQ_ANA_BNDY_BUCKET_8 = 26,
    EQ_ANA_BNDY_BUCKET_9 = 27,
    EQ_ANA_BNDY_BUCKET_10 = 28,
    EQ_ANA_BNDY_BUCKET_11 = 29,
    EQ_ANA_BNDY_BUCKET_12 = 30,
    EQ_ANA_BNDY_BUCKET_13 = 31,
    EQ_ANA_BNDY_BUCKET_14 = 32,
    EQ_ANA_BNDY_BUCKET_15 = 33,
    EQ_ANA_BNDY_BUCKET_16 = 34,
    EQ_ANA_BNDY_BUCKET_17 = 35,
    EQ_ANA_BNDY_BUCKET_18 = 36,
    EQ_ANA_BNDY_BUCKET_19 = 37,
    EQ_ANA_BNDY_BUCKET_20 = 38,
    EQ_ANA_BNDY_BUCKET_21 = 39,
    EQ_ANA_BNDY_BUCKET_22 = 40,
    EQ_ANA_BNDY_BUCKET_23 = 41,
    EQ_ANA_BNDY_BUCKET_24 = 42,
    EQ_ANA_BNDY_BUCKET_25 = 43,
    EQ_ANA_BNDY_L3DCC_BUCKET_26 = 44,
    EQ_ANA_MODE = 45,

    // Instance Rings
    EQ_REPR         = (0 | INSTANCE_RING_MARK),
    EX_L3_REPR      = (1 | INSTANCE_RING_MARK),
    EX_L2_REPR      = (3 | INSTANCE_RING_MARK),
    EX_L3_REFR_REPR = (5 | INSTANCE_RING_MARK),
    EX_L3_REFR_TIME = (7 | INSTANCE_RING_MARK)
} ringOffset;

static const struct CHIPLET_DATA g_eqData =
{
    16, // Core Chiplet ID range is 32-55. The base ID is 32.
    46,  // 46 common rings for Core chiplet
    5,  // 5 instance specific ring for each Core chiplet
    3   //base CC and risk level variants supported
};


struct ringProperties_t
{
    ringOffset iv_torOffSet;
};

static const struct ringProperties_t RING_PROPERTIES[P9_NUM_RINGS] =
{
    // EQ Ring
    {EQ_FURE},              //0
    {EQ_GPTR},              //1
    {EQ_TIME},              //2
    {EQ_MODE},              //3
    {EX_L3_FURE},           //4
    {EX_L3_GPTR},           //5
    {EX_L3_TIME},           //6
    {EX_L2_MODE},           //7
    {EX_L2_FURE},           //8
    {EX_L2_GPTR},           //9
    {EX_L2_TIME},           //10
    {EX_L3_REFR_FURE},      //11
    {EX_L3_REFR_GPTR},      //12
    {EQ_ANA_FUNC},          //13
    {EQ_ANA_GPTR},          //14
    {EQ_DPLL_FUNC},         //15
    {EQ_DPLL_GPTR},         //16
    {EQ_DPLL_MODE},         //17
    {EQ_ANA_BNDY},          //18
    {EQ_ANA_BNDY_BUCKET_0}, //19
    {EQ_ANA_BNDY_BUCKET_1}, //20
    {EQ_ANA_BNDY_BUCKET_2}, //21
    {EQ_ANA_BNDY_BUCKET_3}, //22
    {EQ_ANA_BNDY_BUCKET_4}, //23
    {EQ_ANA_BNDY_BUCKET_5}, //24
    {EQ_ANA_BNDY_BUCKET_6}, //25
    {EQ_ANA_BNDY_BUCKET_7}, //26
    {EQ_ANA_BNDY_BUCKET_8}, //27
    {EQ_ANA_BNDY_BUCKET_9}, //28
    {EQ_ANA_BNDY_BUCKET_10},//29
    {EQ_ANA_BNDY_BUCKET_11},//30
    {EQ_ANA_BNDY_BUCKET_12},//31
    {EQ_ANA_BNDY_BUCKET_13},//32
    {EQ_ANA_BNDY_BUCKET_14},//33
    {EQ_ANA_BNDY_BUCKET_15},//34
    {EQ_ANA_BNDY_BUCKET_16},//35
    {EQ_ANA_BNDY_BUCKET_17},//36
    {EQ_ANA_BNDY_BUCKET_18},//37
    {EQ_ANA_BNDY_BUCKET_19},//38
    {EQ_ANA_BNDY_BUCKET_20},//39
    {EQ_ANA_BNDY_BUCKET_21},//40
    {EQ_ANA_BNDY_BUCKET_22},//41
    {EQ_ANA_BNDY_BUCKET_23},//42
    {EQ_ANA_BNDY_BUCKET_24},//43
    {EQ_ANA_BNDY_BUCKET_25},//44
    {EQ_ANA_BNDY_L3DCC_BUCKET_26},//45
    {EQ_ANA_MODE},//46
    {EQ_REPR},//47
    {EX_L3_REPR},//48
    {EX_L2_REPR},//49
    {EX_L3_REFR_REPR},//50
    {EX_L3_REFR_TIME},//51
};
#endif
