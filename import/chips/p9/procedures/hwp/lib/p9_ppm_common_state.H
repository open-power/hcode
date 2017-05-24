/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_ppm_common_state.H $    */
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
/// @file  p9_ppm_common_state.H
/// @brief Dump a PPE engine's state.
/// *HWP HW Owner        : Ashish More <ashish.more.@in.ibm.com>
/// *HWP HW Backup Owner : Brian Vanderpool <vanderp@us.ibm.com>
/// *HWP FW Owner        : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team            : PM
/// *HWP Level           : 2
/// *HWP Consumed by     : CMEs, Cronus
#include <p9_ppe_utils.H>
#include <map>

#ifndef __P9_PPM_COMMON_STATE_H__
#define __P9_PPM_COMMON_STATE_H__
// PPM reg addressing
//            *******Core******
//            Core Power Management Mode Register = CPMMR         (200F0106)
//            Error Register =                      ERROR_REG     (200F001F)
//                                                  CPPM_ERRSUM   (200F0120)
//                                                  CPPM_ERR      (200F0121)
//                                                  CPPM_ERRMSK   (200F0122)
//            PPM Indirect controls of PCB Slave    CPPM_NC0INDIR (200F0130)
//                                                  CPPM_NC1INDIR (200F0133)
//            Scratch Register (flag decode)        CPPM_CSAR     (200F0138)
//            CME Doorbell =                        CPPM_CMEDB0   (200F0190)
//                                                  CPPM_CMEDB1   (200F0194)
//                                                  CPPM_CMEDB2   (200F0198)
//                                                  CPPM_CMEDB3   (200F019C)
//            Interrupt Inject( WO so ignoring)
//            Interrupt Source                      CPPM_CISR     (200F01AE)
//            PECE_Shadow                           CPPM_PECES    (200F01AF)
//            Analog Clock Controls =               CPPM_CACCR    (200F0168)
//            Analog clock status =                 CPPM_CACSR    (200F016B)
//            iVRM Local Controls( common regs)
//            Interppm controls                     CPPM_IPPMCMD  (200F01C0)
//                                                  CPPM_IPPMSTAT (200F01C1)



//             *******Quad******
//            Quad Power Management Mode Register =     QPPM_QPMMR      (130F0103)
//            Error Information                         ERROR_REG       (130F001F)
//                                                      QPPM_ERRSUM     (130F0120)
//                                                      QPPM_ERR        (130F0121)
//                                                      QPPM_ERRMSK     (130F0122)
//            DPLL Control/Interface (set/measure freq)
//                                                      QPPM_DPLL_FREQ  (130F0151)
//                                                      QPPM_DPLL_CTRL  (130F0152)
//                                                      QPPM_DPLL_STAT  (130F0155)
//                                                      QPPM_DPLL_OCHAR (130F0156)
//                                                      QPPM_DPLL_ICHAR (130F0157)
//            OCC Heartbeat                             QPPM_OCCHB      (130F015F)
//            Cache Analog Clock Controls               QPPM_QACCR      (130F0160)
//                                                      QPPM_QACSR      (130F0163)
//            Clockgrid Controls                        QPPM_EXCGCR     (130F0165)
//            EDRAM voltage controls                    EDRAM_STATUS    (130F0029)


//             *******common******
//            Address PPMQ 130F0xxx;
//                    PPMC 200F0xxx
//            General Power Management Mode Register    PPM_GPMMR      (130F0100/200F0100)
//            Special Wakeup :                          PPM_SPWKUP_OTR (130F010A/200F010A)
//                                                      PPM_SPWKUP_FSP (130F010B/200F010B)
//                                                      PPM_SPWKUP_OCC (130F010C/200F010C)
//                                                      PPM_SPWKUP_HYP (130F010D/200F010D)
//            Stop State History (don't read the FSP, OCC, HYP versions) - maybe use OTR?
//                                                     PPM_SSHSRC      (130F0110/200F0110)
//                                                     PPM_SSHOTR      (130F0113/200F0113
//            PFET Controls
//                                                     PPM_PFCS        (130F0118/200F0118)
//            Clock Grid Controls
//                                                     PPM_CGCR        (130f0164/200F0164)
//            PCB Interrupt Generation (PIG)           PPM_PIG         (130F0180/200F0180)
//            iVRM Control                             PPM_IVRMCR      (130F01B0/200F01B0)
//                                                     PPM_IVRMST      (130F01B3/200F01B3)
//            VDM Controls                             PPM_VDMCR       (130F01B8/200F01B8)
//            InterPPM Controls(Applicable to CPPM)
//            SCRATCH :                                PPM_SCRATCH0    (200F011E/130F011E)
//                                                     PPM_SCRATCH1    (200F011F/130F011F)

/**
 * @brief Offsets from base address for COMMON_PPM_REGS
 */
enum COMMON_PPM_REGS
{
    PPM_GPMMR       = 0x100,
    PPM_SPWKUP_OTR  = 0x10A,
    PPM_SPWKUP_FSP  = 0x10B,
    PPM_SPWKUP_OCC  = 0x10C,
    PPM_SPWKUP_HYP  = 0x10D,
    PPM_SSHSRC      = 0x110,
    PPM_SSHOTR      = 0x113,
    PPM_PFCS        = 0x118,
    PPM_CGCR        = 0x164,
    PPM_PIG         = 0x180,
    PPM_IVRMCR      = 0x1B0,
    PPM_IVRMST      = 0x1B3,
    PPM_VDMCR       = 0x1B8,
    PPM_SCRATCH0    = 0x11E,
    PPM_SCRATCH1    = 0x11F,
    ERROR_REG       = 0x01F,

};

const std::map<uint16_t, std::string> v_com_ppm_num_name  =
{
    { PPM_GPMMR       , "PPM_GPMMR"      },
    { PPM_SPWKUP_OTR  , "PPM_SPWKUP_OTR" },
    { PPM_SPWKUP_FSP  , "PPM_SPWKUP_FSP" },
    { PPM_SPWKUP_OCC  , "PPM_SPWKUP_OCC" },
    { PPM_SPWKUP_HYP  , "PPM_SPWKUP_HYP" },
    { PPM_SSHSRC      , "PPM_SSHSRC"     },
    { PPM_SSHOTR      , "PPM_SSHOTR"     },
    { PPM_PFCS        , "PPM_PFCS"       },
    { PPM_CGCR        , "PPM_CGCR"       },
    { PPM_PIG         , "PPM_PIG"        },
    { PPM_IVRMCR      , "PPM_IVRMCR"     },
    { PPM_IVRMST      , "PPM_IVRMST"     },
    { PPM_VDMCR       , "PPM_VDMCR"      },
    { PPM_SCRATCH0    , "PPM_SCRATCH0"   },
    { PPM_SCRATCH1    , "PPM_SCRATCH1"   },
    { ERROR_REG       , "ERROR_REG"      },

};

/// @typedef p9_ppm_common_state_FP_t
/// function pointer typedef definition for HWP call support
typedef fapi2::ReturnCode (*p9_ppm_common_state_FP_t) (
    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>&,
    const uint64_t, std::vector<SCOMRegValue_t>& ppm_state_value);

extern "C"
{

/// @brief Dump the CPPM state based on the based base address
/// @param [in] i_target TARGET_TYPE_PROC_CHIP
/// @param [in] i_base_address Base offset to be used for all accesses
/// @return FAPI2_RC_SUCCESS
    fapi2::ReturnCode
    p9_ppm_common_state(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                        const uint64_t i_base_address,  std::vector<SCOMRegValue_t>& ppm_state_value);

} // extern C

#endif  // __P9_PPM_COMMON_STATE_H__
