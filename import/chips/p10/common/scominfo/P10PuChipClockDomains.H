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
    #define P10_FSIVITL_DOMAIN                   CLOCK_DOMAIN_33
    #define P10_FSIALL_DOMAIN                    CLOCK_DOMAIN_34  // FSIA+FSI0+FSI1+FSI0LL+FSI1LL

    // TP chiplet
    #define P10_TPVITL_DOMAIN                    CLOCK_DOMAIN_35
    #define P10_TPSBEPIBOCCNET_DOMAIN            CLOCK_DOMAIN_36  // SBE + PIB + OCC + NET
    #define P10_TPPLL_DOMAIN                     CLOCK_DOMAIN_37  // PLL (SCAN only)

    // NEST N0 chiplet
    #define P10_N0VITL_DOMAIN                    CLOCK_DOMAIN_38
    #define P10_N0NXVASINTNMMU0PE0_DOMAIN        CLOCK_DOMAIN_39  // NX + VAS + INT + NMMU0 + PE0

    // NEST N1 chiplet
    #define P10_N1VITL_DOMAIN                    CLOCK_DOMAIN_40
    #define P10_N1NMMU1_DOMAIN                   CLOCK_DOMAIN_41
    #define P10_N1MCDPE1FBC_DOMAIN               CLOCK_DOMAIN_42  // MCD + PE1 + FBC

    // PCI0 chiplet
    #define P10_PCI0VITL_DOMAIN                  CLOCK_DOMAIN_43
    #define P10_PCI0PH5_DOMAIN                   CLOCK_DOMAIN_44
    #define P10_PCI0IOP_DOMAIN                   CLOCK_DOMAIN_45
    #define P10_PCI0PLL_DOMAIN                   CLOCK_DOMAIN_46  // PLL (SCAN only)

    // PCI1 chiplet
    #define P10_PCI1VITL_DOMAIN                  CLOCK_DOMAIN_47
    #define P10_PCI1PH5_DOMAIN                   CLOCK_DOMAIN_48
    #define P10_PCI1IOP_DOMAIN                   CLOCK_DOMAIN_49
    #define P10_PCI1PLL_DOMAIN                   CLOCK_DOMAIN_50

    // MC0 chiplet
    #define P10_MC0VITL_DOMAIN                   CLOCK_DOMAIN_51
    #define P10_MC0MC_DOMAIN                     CLOCK_DOMAIN_52
    #define P10_MC0ODLIOO_DOMAIN                 CLOCK_DOMAIN_53  // ODL + IOO
    #define P10_MC0PLL_DOMAIN                    CLOCK_DOMAIN_54

    // MC1 chiplet
    #define P10_MC1VITL_DOMAIN                   CLOCK_DOMAIN_55
    #define P10_MC1MC_DOMAIN                     CLOCK_DOMAIN_56
    #define P10_MC1ODLIOO_DOMAIN                 CLOCK_DOMAIN_57  // ODL + IOO
    #define P10_MC1PLL_DOMAIN                    CLOCK_DOMAIN_58

    // MC2 chiplet
    #define P10_MC2VITL_DOMAIN                   CLOCK_DOMAIN_59
    #define P10_MC2MC_DOMAIN                     CLOCK_DOMAIN_60
    #define P10_MC2ODLIOO_DOMAIN                 CLOCK_DOMAIN_61  // ODL + IOO
    #define P10_MC2PLL_DOMAIN                    CLOCK_DOMAIN_62

    // MC3 chiplet
    #define P10_MC3VITL_DOMAIN                   CLOCK_DOMAIN_63
    #define P10_MC3MC_DOMAIN                     CLOCK_DOMAIN_64
    #define P10_MC3ODLIOO_DOMAIN                 CLOCK_DOMAIN_65  // ODL + IOO
    #define P10_MC3PLL_DOMAIN                    CLOCK_DOMAIN_66

    // PAU0 chiplet
    #define P10_PAU0VITL_DOMAIN                  CLOCK_DOMAIN_67
    #define P10_PAU0PAU0NTLOTL_DOMAIN            CLOCK_DOMAIN_68  // PAU0 (NTL,OTL)
    #define P10_PAU0TLPPE_DOMAIN                 CLOCK_DOMAIN_69  // TL (PTL + COMMON) + PPE

    // PAU1 chiplet
    #define P10_PAU1VITL_DOMAIN                  CLOCK_DOMAIN_70
    #define P10_PAU1PAU3NTLOTL_DOMAIN            CLOCK_DOMAIN_71  // PAU3 (NTL,OTL)
    #define P10_PAU1TLPPE_DOMAIN                 CLOCK_DOMAIN_72  // TL (PTL + COMMON) + PPE

    // PAU2 chiplet
    #define P10_PAU2VITL_DOMAIN                  CLOCK_DOMAIN_73
    #define P10_PAU2PAU4NTLOTL_DOMAIN            CLOCK_DOMAIN_74  // PAU4 (NTL,OTL)
    #define P10_PAU2PAU5NTLOTL_DOMAIN            CLOCK_DOMAIN_75  // PAU5 (NTL,OTL)
    #define P10_PAU2TLPPE_DOMAIN                 CLOCK_DOMAIN_76  // TL (PTL + COMMON) + PPE

    // PAU3 chiplet
    #define P10_PAU3VITL_DOMAIN                  CLOCK_DOMAIN_77
    #define P10_PAU3PAU6NTLOTL_DOMAIN            CLOCK_DOMAIN_78  // PAU6 (NTL,OTL)
    #define P10_PAU3PAU7NTLOTL_DOMAIN            CLOCK_DOMAIN_79  // PAU7 (NTL,OTL)
    #define P10_PAU3TLPPE_DOMAIN                 CLOCK_DOMAIN_80  // TL (PTL + COMMON) + PPE

    // AXON0 chiplet
    #define P10_AXON0VITL_DOMAIN                 CLOCK_DOMAIN_81
    #define P10_AXON0IOO_DOMAIN                  CLOCK_DOMAIN_82
    #define P10_AXON0ODL_DOMAIN                  CLOCK_DOMAIN_83
    #define P10_AXON0NDL_DOMAIN                  CLOCK_DOMAIN_84
    #define P10_AXON0PDL_DOMAIN                  CLOCK_DOMAIN_85
    #define P10_AXON0PLL_DOMAIN                  CLOCK_DOMAIN_86

    // AXON1 chiplet
    #define P10_AXON1VITL_DOMAIN                 CLOCK_DOMAIN_87
    #define P10_AXON1IOO_DOMAIN                  CLOCK_DOMAIN_88
    #define P10_AXON1ODL_DOMAIN                  CLOCK_DOMAIN_89
    #define P10_AXON1NDL_DOMAIN                  CLOCK_DOMAIN_90
    #define P10_AXON1PDL_DOMAIN                  CLOCK_DOMAIN_91
    #define P10_AXON1PLL_DOMAIN                  CLOCK_DOMAIN_92

    // AXON2 chiplet
    #define P10_AXON2VITL_DOMAIN                 CLOCK_DOMAIN_93
    #define P10_AXON2IOO_DOMAIN                  CLOCK_DOMAIN_94
    #define P10_AXON2ODL_DOMAIN                  CLOCK_DOMAIN_95
    #define P10_AXON2NDL_DOMAIN                  CLOCK_DOMAIN_96
    #define P10_AXON2PDL_DOMAIN                  CLOCK_DOMAIN_97
    #define P10_AXON2PLL_DOMAIN                  CLOCK_DOMAIN_98

    // AXON3 chiplet
    #define P10_AXON3VITL_DOMAIN                 CLOCK_DOMAIN_99
    #define P10_AXON3IOO_DOMAIN                  CLOCK_DOMAIN_100
    #define P10_AXON3ODL_DOMAIN                  CLOCK_DOMAIN_101
    #define P10_AXON3NDL_DOMAIN                  CLOCK_DOMAIN_102
    #define P10_AXON3PDL_DOMAIN                  CLOCK_DOMAIN_103
    #define P10_AXON3PLL_DOMAIN                  CLOCK_DOMAIN_104

    // AXON4 chiplet
    #define P10_AXON4VITL_DOMAIN                 CLOCK_DOMAIN_105
    #define P10_AXON4IOO_DOMAIN                  CLOCK_DOMAIN_106
    #define P10_AXON4ODL_DOMAIN                  CLOCK_DOMAIN_107
    #define P10_AXON4NDL_DOMAIN                  CLOCK_DOMAIN_108
    #define P10_AXON4PDL_DOMAIN                  CLOCK_DOMAIN_109
    #define P10_AXON4PLL_DOMAIN                  CLOCK_DOMAIN_110

    // AXON5 chiplet
    #define P10_AXON5VITL_DOMAIN                 CLOCK_DOMAIN_111
    #define P10_AXON5IOO_DOMAIN                  CLOCK_DOMAIN_112
    #define P10_AXON5ODL_DOMAIN                  CLOCK_DOMAIN_113
    #define P10_AXON5NDL_DOMAIN                  CLOCK_DOMAIN_114
    #define P10_AXON5PDL_DOMAIN                  CLOCK_DOMAIN_115
    #define P10_AXON5PLL_DOMAIN                  CLOCK_DOMAIN_116

    // AXON6 chiplet
    #define P10_AXON6VITL_DOMAIN                 CLOCK_DOMAIN_117
    #define P10_AXON6IOO_DOMAIN                  CLOCK_DOMAIN_118
    #define P10_AXON6ODL_DOMAIN                  CLOCK_DOMAIN_119
    #define P10_AXON6NDL_DOMAIN                  CLOCK_DOMAIN_120
    #define P10_AXON6PDL_DOMAIN                  CLOCK_DOMAIN_121
    #define P10_AXON6PLL_DOMAIN                  CLOCK_DOMAIN_122

    // AXON7 chiplet
    #define P10_AXON7VITL_DOMAIN                 CLOCK_DOMAIN_123
    #define P10_AXON7IOO_DOMAIN                  CLOCK_DOMAIN_124
    #define P10_AXON7ODL_DOMAIN                  CLOCK_DOMAIN_125
    #define P10_AXON7NDL_DOMAIN                  CLOCK_DOMAIN_126
    #define P10_AXON7PDL_DOMAIN                  CLOCK_DOMAIN_127
    #define P10_AXON7PLL_DOMAIN                  CLOCK_DOMAIN_128

    // EQ0 chiplet
    #define P10_EQ0VITL_DOMAIN                   CLOCK_DOMAIN_129
    #define P10_EQ0ECL20_DOMAIN                  CLOCK_DOMAIN_130
    #define P10_EQ0ECL21_DOMAIN                  CLOCK_DOMAIN_131
    #define P10_EQ0ECL22_DOMAIN                  CLOCK_DOMAIN_132
    #define P10_EQ0ECL23_DOMAIN                  CLOCK_DOMAIN_133
    #define P10_EQ0L30_DOMAIN                    CLOCK_DOMAIN_134
    #define P10_EQ0L31_DOMAIN                    CLOCK_DOMAIN_135
    #define P10_EQ0L32_DOMAIN                    CLOCK_DOMAIN_136
    #define P10_EQ0L33_DOMAIN                    CLOCK_DOMAIN_137
    #define P10_EQ0MMA0_DOMAIN                   CLOCK_DOMAIN_138   // SCAN only
    #define P10_EQ0MMA1_DOMAIN                   CLOCK_DOMAIN_139   // SCAN only
    #define P10_EQ0MMA2_DOMAIN                   CLOCK_DOMAIN_140   // SCAN only
    #define P10_EQ0MMA3_DOMAIN                   CLOCK_DOMAIN_141   // SCAN only
    #define P10_EQ0QME_DOMAIN                    CLOCK_DOMAIN_142

    // EQ1 chiplet
    #define P10_EQ1VITL_DOMAIN                   CLOCK_DOMAIN_143
    #define P10_EQ1ECL20_DOMAIN                  CLOCK_DOMAIN_144
    #define P10_EQ1ECL21_DOMAIN                  CLOCK_DOMAIN_145
    #define P10_EQ1ECL22_DOMAIN                  CLOCK_DOMAIN_146
    #define P10_EQ1ECL23_DOMAIN                  CLOCK_DOMAIN_147
    #define P10_EQ1L30_DOMAIN                    CLOCK_DOMAIN_148
    #define P10_EQ1L31_DOMAIN                    CLOCK_DOMAIN_149
    #define P10_EQ1L32_DOMAIN                    CLOCK_DOMAIN_150
    #define P10_EQ1L33_DOMAIN                    CLOCK_DOMAIN_151
    #define P10_EQ1MMA0_DOMAIN                   CLOCK_DOMAIN_152   // SCAN only
    #define P10_EQ1MMA1_DOMAIN                   CLOCK_DOMAIN_153   // SCAN only
    #define P10_EQ1MMA2_DOMAIN                   CLOCK_DOMAIN_154   // SCAN only
    #define P10_EQ1MMA3_DOMAIN                   CLOCK_DOMAIN_155   // SCAN only
    #define P10_EQ1QME_DOMAIN                    CLOCK_DOMAIN_156

    // EQ2 chiplet
    #define P10_EQ2VITL_DOMAIN                   CLOCK_DOMAIN_157
    #define P10_EQ2ECL20_DOMAIN                  CLOCK_DOMAIN_158
    #define P10_EQ2ECL21_DOMAIN                  CLOCK_DOMAIN_159
    #define P10_EQ2ECL22_DOMAIN                  CLOCK_DOMAIN_160
    #define P10_EQ2ECL23_DOMAIN                  CLOCK_DOMAIN_161
    #define P10_EQ2L30_DOMAIN                    CLOCK_DOMAIN_162
    #define P10_EQ2L31_DOMAIN                    CLOCK_DOMAIN_163
    #define P10_EQ2L32_DOMAIN                    CLOCK_DOMAIN_164
    #define P10_EQ2L33_DOMAIN                    CLOCK_DOMAIN_165
    #define P10_EQ2MMA0_DOMAIN                   CLOCK_DOMAIN_166   // SCAN only
    #define P10_EQ2MMA1_DOMAIN                   CLOCK_DOMAIN_167   // SCAN only
    #define P10_EQ2MMA2_DOMAIN                   CLOCK_DOMAIN_168   // SCAN only
    #define P10_EQ2MMA3_DOMAIN                   CLOCK_DOMAIN_169   // SCAN only
    #define P10_EQ2QME_DOMAIN                    CLOCK_DOMAIN_170

    // EQ3 chiplet
    #define P10_EQ3VITL_DOMAIN                   CLOCK_DOMAIN_171
    #define P10_EQ3ECL20_DOMAIN                  CLOCK_DOMAIN_172
    #define P10_EQ3ECL21_DOMAIN                  CLOCK_DOMAIN_173
    #define P10_EQ3ECL22_DOMAIN                  CLOCK_DOMAIN_174
    #define P10_EQ3ECL23_DOMAIN                  CLOCK_DOMAIN_175
    #define P10_EQ3L30_DOMAIN                    CLOCK_DOMAIN_176
    #define P10_EQ3L31_DOMAIN                    CLOCK_DOMAIN_177
    #define P10_EQ3L32_DOMAIN                    CLOCK_DOMAIN_178
    #define P10_EQ3L33_DOMAIN                    CLOCK_DOMAIN_179
    #define P10_EQ3MMA0_DOMAIN                   CLOCK_DOMAIN_180   // SCAN only
    #define P10_EQ3MMA1_DOMAIN                   CLOCK_DOMAIN_181   // SCAN only
    #define P10_EQ3MMA2_DOMAIN                   CLOCK_DOMAIN_182   // SCAN only
    #define P10_EQ3MMA3_DOMAIN                   CLOCK_DOMAIN_183   // SCAN only
    #define P10_EQ3QME_DOMAIN                    CLOCK_DOMAIN_184

    // EQ4 chiplet
    #define P10_EQ4VITL_DOMAIN                   CLOCK_DOMAIN_185
    #define P10_EQ4ECL20_DOMAIN                  CLOCK_DOMAIN_186
    #define P10_EQ4ECL21_DOMAIN                  CLOCK_DOMAIN_187
    #define P10_EQ4ECL22_DOMAIN                  CLOCK_DOMAIN_188
    #define P10_EQ4ECL23_DOMAIN                  CLOCK_DOMAIN_189
    #define P10_EQ4L30_DOMAIN                    CLOCK_DOMAIN_190
    #define P10_EQ4L31_DOMAIN                    CLOCK_DOMAIN_191
    #define P10_EQ4L32_DOMAIN                    CLOCK_DOMAIN_192
    #define P10_EQ4L33_DOMAIN                    CLOCK_DOMAIN_193
    #define P10_EQ4MMA0_DOMAIN                   CLOCK_DOMAIN_194   // SCAN only
    #define P10_EQ4MMA1_DOMAIN                   CLOCK_DOMAIN_195   // SCAN only
    #define P10_EQ4MMA2_DOMAIN                   CLOCK_DOMAIN_196   // SCAN only
    #define P10_EQ4MMA3_DOMAIN                   CLOCK_DOMAIN_197   // SCAN only
    #define P10_EQ4QME_DOMAIN                    CLOCK_DOMAIN_198

    // EQ5 chiplet
    #define P10_EQ5VITL_DOMAIN                   CLOCK_DOMAIN_199
    #define P10_EQ5ECL20_DOMAIN                  CLOCK_DOMAIN_200
    #define P10_EQ5ECL21_DOMAIN                  CLOCK_DOMAIN_201
    #define P10_EQ5ECL22_DOMAIN                  CLOCK_DOMAIN_202
    #define P10_EQ5ECL23_DOMAIN                  CLOCK_DOMAIN_203
    #define P10_EQ5L30_DOMAIN                    CLOCK_DOMAIN_204
    #define P10_EQ5L31_DOMAIN                    CLOCK_DOMAIN_205
    #define P10_EQ5L32_DOMAIN                    CLOCK_DOMAIN_206
    #define P10_EQ5L33_DOMAIN                    CLOCK_DOMAIN_207
    #define P10_EQ5MMA0_DOMAIN                   CLOCK_DOMAIN_208   // SCAN only
    #define P10_EQ5MMA1_DOMAIN                   CLOCK_DOMAIN_209   // SCAN only
    #define P10_EQ5MMA2_DOMAIN                   CLOCK_DOMAIN_210   // SCAN only
    #define P10_EQ5MMA3_DOMAIN                   CLOCK_DOMAIN_211   // SCAN only
    #define P10_EQ5QME_DOMAIN                    CLOCK_DOMAIN_212

    // EQ6 chiplet
    #define P10_EQ6VITL_DOMAIN                   CLOCK_DOMAIN_213
    #define P10_EQ6ECL20_DOMAIN                  CLOCK_DOMAIN_214
    #define P10_EQ6ECL21_DOMAIN                  CLOCK_DOMAIN_215
    #define P10_EQ6ECL22_DOMAIN                  CLOCK_DOMAIN_216
    #define P10_EQ6ECL23_DOMAIN                  CLOCK_DOMAIN_217
    #define P10_EQ6L30_DOMAIN                    CLOCK_DOMAIN_218
    #define P10_EQ6L31_DOMAIN                    CLOCK_DOMAIN_219
    #define P10_EQ6L32_DOMAIN                    CLOCK_DOMAIN_220
    #define P10_EQ6L33_DOMAIN                    CLOCK_DOMAIN_221
    #define P10_EQ6MMA0_DOMAIN                   CLOCK_DOMAIN_222   // SCAN only
    #define P10_EQ6MMA1_DOMAIN                   CLOCK_DOMAIN_223   // SCAN only
    #define P10_EQ6MMA2_DOMAIN                   CLOCK_DOMAIN_224   // SCAN only
    #define P10_EQ6MMA3_DOMAIN                   CLOCK_DOMAIN_225   // SCAN only
    #define P10_EQ6QME_DOMAIN                    CLOCK_DOMAIN_226

    // EQ7 chiplet
    #define P10_EQ7VITL_DOMAIN                   CLOCK_DOMAIN_227
    #define P10_EQ7ECL20_DOMAIN                  CLOCK_DOMAIN_228
    #define P10_EQ7ECL21_DOMAIN                  CLOCK_DOMAIN_229
    #define P10_EQ7ECL22_DOMAIN                  CLOCK_DOMAIN_230
    #define P10_EQ7ECL23_DOMAIN                  CLOCK_DOMAIN_231
    #define P10_EQ7L30_DOMAIN                    CLOCK_DOMAIN_232
    #define P10_EQ7L31_DOMAIN                    CLOCK_DOMAIN_233
    #define P10_EQ7L32_DOMAIN                    CLOCK_DOMAIN_234
    #define P10_EQ7L33_DOMAIN                    CLOCK_DOMAIN_235
    #define P10_EQ7MMA0_DOMAIN                   CLOCK_DOMAIN_236   // SCAN only
    #define P10_EQ7MMA1_DOMAIN                   CLOCK_DOMAIN_237   // SCAN only
    #define P10_EQ7MMA2_DOMAIN                   CLOCK_DOMAIN_238   // SCAN only
    #define P10_EQ7MMA3_DOMAIN                   CLOCK_DOMAIN_239   // SCAN only
    #define P10_EQ7QME_DOMAIN                    CLOCK_DOMAIN_240

    #define P10_MAXCLOCK_DOMAIN                  CLOCK_DOMAIN_299 // Need to contact Cronus if more is needed.

#endif // _P10PUCHIPCLOCKDOMAINS_H
#define _P10PUCHIPCLOCKDOMAINS_H
