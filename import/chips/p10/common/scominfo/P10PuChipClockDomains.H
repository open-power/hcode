/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/P10PuChipClockDomains.H $    */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
/// @file P10PuChipClockDomains.H
/// @brief Clock domain definitions
///
/// HWP HW Maintainer: Thi Tran <thi@us.ibm.com>
/// HWP FW Maintainer:
/// HWP Consumed by: CRONUS
///
#ifndef _P10PUCHIPCLOCKDOMAINS_H
    #define _P10PUCHIPCLOCKDOMAINS_H

    // Due to Cronus legacy, we need to start at CLOCK_DOMAIN_32
    #define P10_FAKE_DOMAIN                      CLOCK_DOMAIN_32
    #define P10_FAKE_DOMAIN_MASK                 0x00000000

    // FSI
    #define P10_FSI_VITL_DOMAIN                  CLOCK_DOMAIN_33
    #define P10_FSI_ALL_DOMAIN                   CLOCK_DOMAIN_34  // FSIA+FSI0+FSI1+FSI0LL+FSI1LL

    // TP chiplet
    #define P10_TP_VITL_DOMAIN                   CLOCK_DOMAIN_35
    #define P10_TP_SBEPIBOCCNET_DOMAIN           CLOCK_DOMAIN_36  // SBE + PIB + OCC + NET
    #define P10_TP_PLL_DOMAIN                    CLOCK_DOMAIN_37  // PLL (SCAN only)

    // NEST N0 chiplet
    #define P10_N0_VITL_DOMAIN                   CLOCK_DOMAIN_38
    #define P10_N0_NXVASINTNMMU0PE0_DOMAIN       CLOCK_DOMAIN_39  // NX + VAS + INT + NMMU0 + PE0

    // NEST N1 chiplet
    #define P10_N1_VITL_DOMAIN                   CLOCK_DOMAIN_40
    #define P10_N1_NMMU1_DOMAIN                  CLOCK_DOMAIN_41
    #define P10_N1_MCDPE1FBC_DOMAIN              CLOCK_DOMAIN_42  // MCD + PE1 + FBC

    // PCI0 chiplet
    #define P10_PCI0_VITL_DOMAIN                 CLOCK_DOMAIN_43
    #define P10_PCI0_PH5_DOMAIN                  CLOCK_DOMAIN_44
    #define P10_PCI0_IOP_DOMAIN                  CLOCK_DOMAIN_45
    #define P10_PCI0_PLL_DOMAIN                  CLOCK_DOMAIN_46  // PLL (SCAN only)

    // PCI1 chiplet
    #define P10_PCI1_VITL_DOMAIN                 CLOCK_DOMAIN_47
    #define P10_PCI1_PH5_DOMAIN                  CLOCK_DOMAIN_48
    #define P10_PCI1_IOP_DOMAIN                  CLOCK_DOMAIN_49
    #define P10_PCI1_PLL_DOMAIN                  CLOCK_DOMAIN_50

    // MC0 chiplet
    #define P10_MC0_VITL_DOMAIN                  CLOCK_DOMAIN_51
    #define P10_MC0_MC_DOMAIN                    CLOCK_DOMAIN_52
    #define P10_MC0_ODLIOO_DOMAIN                CLOCK_DOMAIN_53  // ODL + IOO
    #define P10_MC0_PLL_DOMAIN                   CLOCK_DOMAIN_54

    // MC1 chiplet
    #define P10_MC1_VITL_DOMAIN                  CLOCK_DOMAIN_55
    #define P10_MC1_MC_DOMAIN                    CLOCK_DOMAIN_56
    #define P10_MC1_ODLIOO_DOMAIN                CLOCK_DOMAIN_57  // ODL + IOO
    #define P10_MC1_PLL_DOMAIN                   CLOCK_DOMAIN_58

    // MC2 chiplet
    #define P10_MC2_VITL_DOMAIN                  CLOCK_DOMAIN_59
    #define P10_MC2_MC_DOMAIN                    CLOCK_DOMAIN_60
    #define P10_MC2_ODLIOO_DOMAIN                CLOCK_DOMAIN_61  // ODL + IOO
    #define P10_MC2_PLL_DOMAIN                   CLOCK_DOMAIN_62

    // MC3 chiplet
    #define P10_MC3_VITL_DOMAIN                  CLOCK_DOMAIN_63
    #define P10_MC3_MC_DOMAIN                    CLOCK_DOMAIN_64
    #define P10_MC3_ODLIOO_DOMAIN                CLOCK_DOMAIN_65  // ODL + IOO
    #define P10_MC3_PLL_DOMAIN                   CLOCK_DOMAIN_66

    // PAU0 chiplet
    #define P10_PAU0_VITL_DOMAIN                 CLOCK_DOMAIN_67
    #define P10_PAU0_PAU0_NTLOTL_DOMAIN          CLOCK_DOMAIN_68  // PAU0 (NTL,OTL)
    #define P10_PAU0_TLPPE_DOMAIN                CLOCK_DOMAIN_69  // TL (PTL + COMMON) + PPE

    // PAU1 chiplet
    #define P10_PAU1_VITL_DOMAIN                 CLOCK_DOMAIN_70
    #define P10_PAU1_PAU3_NTLOTL_DOMAIN          CLOCK_DOMAIN_71  // PAU3 (NTL,OTL)
    #define P10_PAU1_TLPPE_DOMAIN                CLOCK_DOMAIN_72  // TL (PTL + COMMON) + PPE

    // PAU2 chiplet
    #define P10_PAU2_VITL_DOMAIN                 CLOCK_DOMAIN_73
    #define P10_PAU2_PAU4_NTLOTL_DOMAIN          CLOCK_DOMAIN_74  // PAU4 (NTL,OTL)
    #define P10_PAU2_PAU5_NTLOTL_DOMAIN          CLOCK_DOMAIN_75  // PAU5 (NTL,OTL)
    #define P10_PAU2_TLPPE_DOMAIN                CLOCK_DOMAIN_76  // TL (PTL + COMMON) + PPE

    // PAU3 chiplet
    #define P10_PAU3_VITL_DOMAIN                 CLOCK_DOMAIN_77
    #define P10_PAU3_PAU6_NTLOTL_DOMAIN          CLOCK_DOMAIN_78  // PAU6 (NTL,OTL)
    #define P10_PAU3_PAU7_NTLOTL_DOMAIN          CLOCK_DOMAIN_79  // PAU7 (NTL,OTL)
    #define P10_PAU3_TLPPE_DOMAIN                CLOCK_DOMAIN_80  // TL (PTL + COMMON) + PPE

    // AXON0 chiplet
    #define P10_AXON0_VITL_DOMAIN                CLOCK_DOMAIN_81
    #define P10_AXON0_IOO_DOMAIN                 CLOCK_DOMAIN_82
    #define P10_AXON0_ODL_DOMAIN                 CLOCK_DOMAIN_83
    #define P10_AXON0_NDL_DOMAIN                 CLOCK_DOMAIN_84
    #define P10_AXON0_PDL_DOMAIN                 CLOCK_DOMAIN_85
    #define P10_AXON0_PLL_DOMAIN                 CLOCK_DOMAIN_86

    // AXON1 chiplet
    #define P10_AXON1_VITL_DOMAIN                CLOCK_DOMAIN_87
    #define P10_AXON1_IOO_DOMAIN                 CLOCK_DOMAIN_88
    #define P10_AXON1_ODL_DOMAIN                 CLOCK_DOMAIN_89
    #define P10_AXON1_NDL_DOMAIN                 CLOCK_DOMAIN_90
    #define P10_AXON1_PDL_DOMAIN                 CLOCK_DOMAIN_91
    #define P10_AXON1_PLL_DOMAIN                 CLOCK_DOMAIN_92

    // AXON2 chiplet
    #define P10_AXON2_VITL_DOMAIN                CLOCK_DOMAIN_93
    #define P10_AXON2_IOO_DOMAIN                 CLOCK_DOMAIN_94
    #define P10_AXON2_ODL_DOMAIN                 CLOCK_DOMAIN_95
    #define P10_AXON2_NDL_DOMAIN                 CLOCK_DOMAIN_96
    #define P10_AXON2_PDL_DOMAIN                 CLOCK_DOMAIN_97
    #define P10_AXON2_PLL_DOMAIN                 CLOCK_DOMAIN_98

    // AXON3 chiplet
    #define P10_AXON3_VITL_DOMAIN                CLOCK_DOMAIN_99
    #define P10_AXON3_IOO_DOMAIN                 CLOCK_DOMAIN_100
    #define P10_AXON3_ODL_DOMAIN                 CLOCK_DOMAIN_101
    #define P10_AXON3_NDL_DOMAIN                 CLOCK_DOMAIN_102
    #define P10_AXON3_PDL_DOMAIN                 CLOCK_DOMAIN_103
    #define P10_AXON3_PLL_DOMAIN                 CLOCK_DOMAIN_104

    // AXON4 chiplet
    #define P10_AXON4_VITL_DOMAIN                CLOCK_DOMAIN_105
    #define P10_AXON4_IOO_DOMAIN                 CLOCK_DOMAIN_106
    #define P10_AXON4_ODL_DOMAIN                 CLOCK_DOMAIN_107
    #define P10_AXON4_NDL_DOMAIN                 CLOCK_DOMAIN_108
    #define P10_AXON4_PDL_DOMAIN                 CLOCK_DOMAIN_109
    #define P10_AXON4_PLL_DOMAIN                 CLOCK_DOMAIN_110

    // AXON5 chiplet
    #define P10_AXON5_VITL_DOMAIN                CLOCK_DOMAIN_111
    #define P10_AXON5_IOO_DOMAIN                 CLOCK_DOMAIN_112
    #define P10_AXON5_ODL_DOMAIN                 CLOCK_DOMAIN_113
    #define P10_AXON5_NDL_DOMAIN                 CLOCK_DOMAIN_114
    #define P10_AXON5_PDL_DOMAIN                 CLOCK_DOMAIN_115
    #define P10_AXON5_PLL_DOMAIN                 CLOCK_DOMAIN_116

    // AXON6 chiplet
    #define P10_AXON6_VITL_DOMAIN                CLOCK_DOMAIN_117
    #define P10_AXON6_IOO_DOMAIN                 CLOCK_DOMAIN_118
    #define P10_AXON6_ODL_DOMAIN                 CLOCK_DOMAIN_119
    #define P10_AXON6_NDL_DOMAIN                 CLOCK_DOMAIN_120
    #define P10_AXON6_PDL_DOMAIN                 CLOCK_DOMAIN_121
    #define P10_AXON6_PLL_DOMAIN                 CLOCK_DOMAIN_122

    // AXON7 chiplet
    #define P10_AXON7_VITL_DOMAIN                CLOCK_DOMAIN_123
    #define P10_AXON7_IOO_DOMAIN                 CLOCK_DOMAIN_124
    #define P10_AXON7_ODL_DOMAIN                 CLOCK_DOMAIN_125
    #define P10_AXON7_NDL_DOMAIN                 CLOCK_DOMAIN_126
    #define P10_AXON7_PDL_DOMAIN                 CLOCK_DOMAIN_127
    #define P10_AXON7_PLL_DOMAIN                 CLOCK_DOMAIN_128

    // EQ0 chiplet
    #define P10_EQ0_VITL_DOMAIN                  CLOCK_DOMAIN_129
    #define P10_EQ0_ECL20_DOMAIN                 CLOCK_DOMAIN_130
    #define P10_EQ0_ECL21_DOMAIN                 CLOCK_DOMAIN_131
    #define P10_EQ0_ECL22_DOMAIN                 CLOCK_DOMAIN_132
    #define P10_EQ0_ECL23_DOMAIN                 CLOCK_DOMAIN_133
    #define P10_EQ0_L30_DOMAIN                   CLOCK_DOMAIN_134
    #define P10_EQ0_L31_DOMAIN                   CLOCK_DOMAIN_135
    #define P10_EQ0_L32_DOMAIN                   CLOCK_DOMAIN_136
    #define P10_EQ0_L33_DOMAIN                   CLOCK_DOMAIN_137
    #define P10_EQ0_MMA0_DOMAIN                  CLOCK_DOMAIN_138   // SCAN only
    #define P10_EQ0_MMA1_DOMAIN                  CLOCK_DOMAIN_139   // SCAN only
    #define P10_EQ0_MMA2_DOMAIN                  CLOCK_DOMAIN_140   // SCAN only
    #define P10_EQ0_MMA3_DOMAIN                  CLOCK_DOMAIN_141   // SCAN only
    #define P10_EQ0_QME_DOMAIN                   CLOCK_DOMAIN_142

    // EQ1 chiplet
    #define P10_EQ1_VITL_DOMAIN                  CLOCK_DOMAIN_143
    #define P10_EQ1_ECL20_DOMAIN                 CLOCK_DOMAIN_144
    #define P10_EQ1_ECL21_DOMAIN                 CLOCK_DOMAIN_145
    #define P10_EQ1_ECL22_DOMAIN                 CLOCK_DOMAIN_146
    #define P10_EQ1_ECL23_DOMAIN                 CLOCK_DOMAIN_147
    #define P10_EQ1_L30_DOMAIN                   CLOCK_DOMAIN_148
    #define P10_EQ1_L31_DOMAIN                   CLOCK_DOMAIN_149
    #define P10_EQ1_L32_DOMAIN                   CLOCK_DOMAIN_150
    #define P10_EQ1_L33_DOMAIN                   CLOCK_DOMAIN_151
    #define P10_EQ1_MMA0_DOMAIN                  CLOCK_DOMAIN_152   // SCAN only
    #define P10_EQ1_MMA1_DOMAIN                  CLOCK_DOMAIN_153   // SCAN only
    #define P10_EQ1_MMA2_DOMAIN                  CLOCK_DOMAIN_154   // SCAN only
    #define P10_EQ1_MMA3_DOMAIN                  CLOCK_DOMAIN_155   // SCAN only
    #define P10_EQ1_QME_DOMAIN                   CLOCK_DOMAIN_156

    // EQ2 chiplet
    #define P10_EQ2_VITL_DOMAIN                  CLOCK_DOMAIN_157
    #define P10_EQ2_ECL20_DOMAIN                 CLOCK_DOMAIN_158
    #define P10_EQ2_ECL21_DOMAIN                 CLOCK_DOMAIN_159
    #define P10_EQ2_ECL22_DOMAIN                 CLOCK_DOMAIN_160
    #define P10_EQ2_ECL23_DOMAIN                 CLOCK_DOMAIN_161
    #define P10_EQ2_L30_DOMAIN                   CLOCK_DOMAIN_162
    #define P10_EQ2_L31_DOMAIN                   CLOCK_DOMAIN_163
    #define P10_EQ2_L32_DOMAIN                   CLOCK_DOMAIN_164
    #define P10_EQ2_L33_DOMAIN                   CLOCK_DOMAIN_165
    #define P10_EQ2_MMA0_DOMAIN                  CLOCK_DOMAIN_166   // SCAN only
    #define P10_EQ2_MMA1_DOMAIN                  CLOCK_DOMAIN_167   // SCAN only
    #define P10_EQ2_MMA2_DOMAIN                  CLOCK_DOMAIN_168   // SCAN only
    #define P10_EQ2_MMA3_DOMAIN                  CLOCK_DOMAIN_169   // SCAN only
    #define P10_EQ2_QME_DOMAIN                   CLOCK_DOMAIN_170

    // EQ3 chiplet
    #define P10_EQ3_VITL_DOMAIN                  CLOCK_DOMAIN_171
    #define P10_EQ3_ECL20_DOMAIN                 CLOCK_DOMAIN_172
    #define P10_EQ3_ECL21_DOMAIN                 CLOCK_DOMAIN_173
    #define P10_EQ3_ECL22_DOMAIN                 CLOCK_DOMAIN_174
    #define P10_EQ3_ECL23_DOMAIN                 CLOCK_DOMAIN_175
    #define P10_EQ3_L30_DOMAIN                   CLOCK_DOMAIN_176
    #define P10_EQ3_L31_DOMAIN                   CLOCK_DOMAIN_177
    #define P10_EQ3_L32_DOMAIN                   CLOCK_DOMAIN_178
    #define P10_EQ3_L33_DOMAIN                   CLOCK_DOMAIN_179
    #define P10_EQ3_MMA0_DOMAIN                  CLOCK_DOMAIN_180   // SCAN only
    #define P10_EQ3_MMA1_DOMAIN                  CLOCK_DOMAIN_181   // SCAN only
    #define P10_EQ3_MMA2_DOMAIN                  CLOCK_DOMAIN_182   // SCAN only
    #define P10_EQ3_MMA3_DOMAIN                  CLOCK_DOMAIN_183   // SCAN only
    #define P10_EQ3_QME_DOMAIN                   CLOCK_DOMAIN_184

    // EQ4 chiplet
    #define P10_EQ4_VITL_DOMAIN                  CLOCK_DOMAIN_185
    #define P10_EQ4_ECL20_DOMAIN                 CLOCK_DOMAIN_186
    #define P10_EQ4_ECL21_DOMAIN                 CLOCK_DOMAIN_187
    #define P10_EQ4_ECL22_DOMAIN                 CLOCK_DOMAIN_188
    #define P10_EQ4_ECL23_DOMAIN                 CLOCK_DOMAIN_189
    #define P10_EQ4_L30_DOMAIN                   CLOCK_DOMAIN_190
    #define P10_EQ4_L31_DOMAIN                   CLOCK_DOMAIN_191
    #define P10_EQ4_L32_DOMAIN                   CLOCK_DOMAIN_192
    #define P10_EQ4_L33_DOMAIN                   CLOCK_DOMAIN_193
    #define P10_EQ4_MMA0_DOMAIN                  CLOCK_DOMAIN_194   // SCAN only
    #define P10_EQ4_MMA1_DOMAIN                  CLOCK_DOMAIN_195   // SCAN only
    #define P10_EQ4_MMA2_DOMAIN                  CLOCK_DOMAIN_196   // SCAN only
    #define P10_EQ4_MMA3_DOMAIN                  CLOCK_DOMAIN_197   // SCAN only
    #define P10_EQ4_QME_DOMAIN                   CLOCK_DOMAIN_198

    // EQ5 chiplet
    #define P10_EQ5_VITL_DOMAIN                  CLOCK_DOMAIN_199
    #define P10_EQ5_ECL20_DOMAIN                 CLOCK_DOMAIN_200
    #define P10_EQ5_ECL21_DOMAIN                 CLOCK_DOMAIN_201
    #define P10_EQ5_ECL22_DOMAIN                 CLOCK_DOMAIN_202
    #define P10_EQ5_ECL23_DOMAIN                 CLOCK_DOMAIN_203
    #define P10_EQ5_L30_DOMAIN                   CLOCK_DOMAIN_204
    #define P10_EQ5_L31_DOMAIN                   CLOCK_DOMAIN_205
    #define P10_EQ5_L32_DOMAIN                   CLOCK_DOMAIN_206
    #define P10_EQ5_L33_DOMAIN                   CLOCK_DOMAIN_207
    #define P10_EQ5_MMA0_DOMAIN                  CLOCK_DOMAIN_208   // SCAN only
    #define P10_EQ5_MMA1_DOMAIN                  CLOCK_DOMAIN_209   // SCAN only
    #define P10_EQ5_MMA2_DOMAIN                  CLOCK_DOMAIN_210   // SCAN only
    #define P10_EQ5_MMA3_DOMAIN                  CLOCK_DOMAIN_211   // SCAN only
    #define P10_EQ5_QME_DOMAIN                   CLOCK_DOMAIN_212

    // EQ6 chiplet
    #define P10_EQ6_VITL_DOMAIN                  CLOCK_DOMAIN_213
    #define P10_EQ6_ECL20_DOMAIN                 CLOCK_DOMAIN_214
    #define P10_EQ6_ECL21_DOMAIN                 CLOCK_DOMAIN_215
    #define P10_EQ6_ECL22_DOMAIN                 CLOCK_DOMAIN_216
    #define P10_EQ6_ECL23_DOMAIN                 CLOCK_DOMAIN_217
    #define P10_EQ6_L30_DOMAIN                   CLOCK_DOMAIN_218
    #define P10_EQ6_L31_DOMAIN                   CLOCK_DOMAIN_219
    #define P10_EQ6_L32_DOMAIN                   CLOCK_DOMAIN_220
    #define P10_EQ6_L33_DOMAIN                   CLOCK_DOMAIN_221
    #define P10_EQ6_MMA0_DOMAIN                  CLOCK_DOMAIN_222   // SCAN only
    #define P10_EQ6_MMA1_DOMAIN                  CLOCK_DOMAIN_223   // SCAN only
    #define P10_EQ6_MMA2_DOMAIN                  CLOCK_DOMAIN_224   // SCAN only
    #define P10_EQ6_MMA3_DOMAIN                  CLOCK_DOMAIN_225   // SCAN only
    #define P10_EQ6_QME_DOMAIN                   CLOCK_DOMAIN_226

    // EQ7 chiplet
    #define P10_EQ7_VITL_DOMAIN                  CLOCK_DOMAIN_227
    #define P10_EQ7_ECL20_DOMAIN                 CLOCK_DOMAIN_228
    #define P10_EQ7_ECL21_DOMAIN                 CLOCK_DOMAIN_229
    #define P10_EQ7_ECL22_DOMAIN                 CLOCK_DOMAIN_230
    #define P10_EQ7_ECL23_DOMAIN                 CLOCK_DOMAIN_231
    #define P10_EQ7_L30_DOMAIN                   CLOCK_DOMAIN_232
    #define P10_EQ7_L31_DOMAIN                   CLOCK_DOMAIN_233
    #define P10_EQ7_L32_DOMAIN                   CLOCK_DOMAIN_234
    #define P10_EQ7_L33_DOMAIN                   CLOCK_DOMAIN_235
    #define P10_EQ7_MMA0_DOMAIN                  CLOCK_DOMAIN_236   // SCAN only
    #define P10_EQ7_MMA1_DOMAIN                  CLOCK_DOMAIN_237   // SCAN only
    #define P10_EQ7_MMA2_DOMAIN                  CLOCK_DOMAIN_238   // SCAN only
    #define P10_EQ7_MMA3_DOMAIN                  CLOCK_DOMAIN_239   // SCAN only
    #define P10_EQ7_QME_DOMAIN                   CLOCK_DOMAIN_240

    #define P10_MAX_CLOCK_DOMAIN                 CLOCK_DOMAIN_299 // Need to contact Cronus if more is needed.

#endif // _P10PUCHIPCLOCKDOMAINS_H
#define _P10PUCHIPCLOCKDOMAINS_H
