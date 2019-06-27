/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/hw_access.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2012,2020                                                    */
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

/// @file hw_access.H
///
/// @brief Hardware access functions that needs to be specialized for
/// platform implementation.
///

#ifndef _FAPI2_HWACCESS_H_
#define _FAPI2_HWACCESS_H_

//F2//// variable_buffer isn't supported on PPE
//F2//#ifndef __PPE__
//F2//    #include <variable_buffer.H>
//F2//#endif

#include <plat_hw_access.H>
#include <fapi2_hw_access.H>
#include <p10_qme_ring_traverse.H>

namespace fapi2
{
//--------------------------------------------------------------------------
// PIB Error Functions
//--------------------------------------------------------------------------

/// @brief Sets the PIB error mask - platform dependant
/// @param[in]  i_mask     The new error mask
// note: this can be moved  to a C file if desired
inline void setPIBErrorMask(uint8_t i_mask)
{
    PLAT_SET_PIB_ERROR_MASK(i_mask);
}

/// @brief Gets the PIB error mask - platform dependant
/// @return uint8_t The current PIB error mask
// note: this can be moved  to a C file if desired
inline uint8_t getPIBErrorMask(void)
{
    PLAT_GET_PIB_ERROR_MASK(o_pib_mask);
    return o_pib_mask;
}

//--------------------------------------------------------------------------
// Operational Mode Error Functions
//--------------------------------------------------------------------------

/// @brief Sets the operational mode
/// @param[in]  i_mode     The new mode
// note: this can be moved  to a C file if desired
//F2//inline void setOpMode(const OpModes i_mode)
//F2//{
//F2//    // Keeps the compiler from complaining about the unused i_mode
//F2//    static_cast<void>(i_mode);
//F2//
//F2//    // No-op for now. Should set thread-local operational mode
//F2//    return;
//F2//}

/// @brief Gets the operational mode
/// @return the operational mode
// note: this can be moved  to a C file if desired
//F2//inline OpModes getOpMode(void)
//F2//{
//F2//    // No-op for now. Should read thread-local operational mode
//F2//    return NORMAL;
//F2//}

//------------------------------------------------------------------------------
// HW Communication Functions to be implemented at the platform layer.
//------------------------------------------------------------------------------

//PLAT EXTRA//

//PLAT NOTE//
//    HW_ACCESS  | Multicast+CoreSelect Address Overlay
// 1) 32bit MMIO | Yes                  QME LOCAL PER-CORE/CPMS Register
// 2) 32bit MMIO | No                   QME LOCAL QME/QUAD Register
// 3) 64bit SCOM | Yes                  Core/L3   Register(scominit)
// 4) 64bit SCOM | No                   Quad/Perv Register(clkCtrl)

// The functions below are implemented to be substitutes of generic putScom/getScom
// because of the following reasons
// 1) QME platform has to support certain register access in the form of MMIO access
// instead of SCOM access as only local addressing is available.
// 2) QME platform has to support target selection to all per-core registers, while
// it only has to handle the local quad target(no target selection/multicast necessary)
//
// So now instead of still implement putScom/getScom wrappers with conditional
// address overlay for all cases, which is maximum cost for every memory access.
// Here implemented each usage case with their minimum cost
// 1) for all quad related access, there is no need to do targeting/address overlay
// due to courtesy of P10 non-ex qme-per-quad architecture, all quad base addresses
// can be used directly without any need to modify the address further.
// Therefore their target usage is omitted. However, the prototype still include
// target as parameter to be compatible with generic scom prototype, but note the
// function implementation is inline.
// 2) for all core related access, address overlay/targeting is inevitable; however
// the cost for mmio access can be reduced to 32-bit access comparing to scom's 64bit
//
// Conclusion, by implementing each usage with their static optimal cost, instead of
// runtime conditional cost, majority cases are optimized. Otherwise, through
// experiments, compiler cannot always optimize static information out accross
// the boundary of targets/macros/functions/abtraction interfaces.
//
// For high level usage, please refers to the macros in p10_hcd_common.H
// Also refer to plat_target.H for corresponding plat target design and
// implementation for this same very reason.

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void putMmioCore(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        const buffer<uint32_t> i_data)
{
    out32(i_target.get().getLocalAddressOverlay(i_address), i_data);
}

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void getMmioCore(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        buffer<uint32_t>& o_data)
{

    o_data = in32(i_target.get().getLocalAddressOverlay(i_address));
}

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void putMmioQuad(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        const buffer<uint32_t> i_data)
{
    out32(i_address, i_data);
}

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void getMmioQuad(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        buffer<uint32_t>& o_data)
{
    o_data = in32(i_address);
}

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void putScomCore(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        const buffer<uint64_t> i_data)
{
    uint64_t l_data = i_data;
    PPE_STVD(i_target.get().getScomAddressOverlay(i_address), l_data);
}

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void getScomCore(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        buffer<uint64_t>& o_data)
{
    PPE_LVD(i_target.get().getScomAddressOverlay(i_address), o_data);
}

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void putScomQuad(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        const buffer<uint64_t> i_data)
{
    uint64_t l_data = i_data;
    PPE_STVD(i_address, l_data);
}

template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline void getScomQuad(const Target<K, M, V>& i_target,
                        const uint32_t i_address,
                        buffer<uint64_t>& o_data)
{
    PPE_LVD(i_address, o_data);
}





//PLAT END//

///
/// @brief Platform-level implementation of getScom()
/// @tparam K template parameter, passed in target.
/// @param[in]  i_target   HW target to operate on.
/// @param[in]  i_address  SCOM register address to read from.
/// @param[out] o_data     Buffer that holds data read from HW target.
/// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
///
template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline ReturnCode getScom(const Target<K, M, V>& i_target,
                          const uint64_t i_address,
                          buffer<uint64_t>& o_data)
{
    uint64_t l_data = 0;
    PLAT_GETSCOM(current_err, i_target, i_address, l_data);
    o_data = l_data;
    return current_err;
}

/// @brief Platform-level implementation of putScom()
/// @tparam K template parameter, passed in target.
/// @param[in] i_target     HW target to operate on.
/// @param[in] i_address    SCOM register address to write to.
/// @param[in] i_data       Buffer that holds data to write into address.
/// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
inline ReturnCode putScom(const Target<K, M, V>& i_target,
                          const uint64_t i_address,
                          const buffer<uint64_t> i_data)
{
    uint64_t l_data = i_data;
    PLAT_PUTSCOM(current_err, i_target, i_address, l_data);
    return current_err;
}

/// @brief Platform-level implementation of putScomUnderMask()
/// @tparam K template parameter, passed in target.
/// @param[in] i_target     HW target to operate on.
/// @param[in] i_address    SCOM register address to write to.
/// @param[in] i_data       Buffer that holds data to write into address.
/// @param[in] i_mask       Buffer that holds the mask value.
/// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
//F2//template< TargetType K, MulticastType M, typename V >
//F2//inline ReturnCode putScomUnderMask(const Target<K, M, V>& i_target,
//F2//                                   const uint64_t i_address,
//F2//                                   const buffer<uint64_t> i_data,
//F2//                                   const buffer<uint64_t> i_mask)
//F2//{
//F2//    std::cout << std::hex << "   putScomUnderMask "
//F2//              << "target: {" << i_target.getType() << ","
//F2//              << uint64_t(i_target) << "}; "
//F2//              << "address: " << i_address << "; "
//F2//              << "input data: " << uint64_t(i_data) << "; "
//F2//              << "input mask: " << uint64_t(i_mask)
//F2//              << std::dec << std::endl;
//F2//    return FAPI2_RC_SUCCESS;
//F2//}

///
/// @brief Platform-level implementation called by getCfamRegister()
/// Hardware procedures writers will not call this function.
/// @tparam K template parameter, passed in target.
/// @param[in]  i_target   HW target to operate on.
/// @param[in]  i_address  CFAM address to read from.
/// @param[out] o_data     32-bit buffer that holds data read from HW target.
/// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
///
//F2//template< TargetType K, MulticastType M, typename V >
//F2//inline ReturnCode getCfamRegister(const Target<K, M, V>& i_target,
//F2//                                  const uint32_t i_address,
//F2//                                  buffer<uint32_t>& o_data)
//F2//{
//F2//    o_data = 0xFEED0CFA;
//F2//    std::cout << std::hex << "   getCfamRegister "
//F2//              << "target: {" << i_target.getType() << ","
//F2//              << uint64_t(i_target) << "}; "
//F2//              << "address: " << i_address << "; "
//F2//              << "output data: " << uint32_t(o_data)
//F2//              << std::dec << std::endl;
//F2//    return FAPI2_RC_SUCCESS;
//F2//}

///
/// @brief Platform-level implementation of putCfamRegister()
/// Hardware procedures writers will not call this function.
/// @tparam K template parameter, passed in target.
/// @param[in]  i_target   HW target to operate on.
/// @param[in]  i_address  CFAM address to write to.
/// @param[out] i_data     32-bit buffer that holds data to write into address.
/// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
///
//F2//template< TargetType K, MulticastType M, typename V >
//F2//inline ReturnCode putCfamRegister(const Target<K, M, V>& i_target,
//F2//                                  const uint32_t i_address,
//F2//                                  const buffer<uint32_t> i_data)
//F2//{
//F2//    std::cout << std::hex << "   putCfamRegister "
//F2//              << "target: {" << i_target.getType() << ","
//F2//              << uint64_t(i_target) << "}; "
//F2//              << "address: " << i_address << "; "
//F2//              << "input data: " << uint32_t(i_data)
//F2//              << std::dec << std::endl;
//F2//    return FAPI2_RC_SUCCESS;
//F2//}


///
/// @brief Platform-level implementation of modifyCfamRegister()
/// Hardware procedures writers will not call this function.
/// @tparam K template parameter, passed in target.
/// @param[in]  i_target     HW target to operate on.
/// @param[in]  i_address    CFAM register address to modify.
/// @param[out] i_data       32-bit buffer that holds data to modify.
/// @param[in]  i_modifyMode The modify mode (or/and/xor).
/// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
///
//F2//template< TargetType K, MulticastType M, typename V >
//F2//inline ReturnCode modifyCfamRegister(const Target<K, M, V>& i_target,
//F2//                                     const uint32_t i_address,
//F2//                                     const buffer<uint32_t> i_data,
//F2//                                     const fapi2::ChipOpModifyMode i_modifyMode)
//F2//{
//F2//    std::cout << std::hex << "   modifyCfamRegister "
//F2//              << "target: {" << i_target.getType() << ","
//F2//              << uint64_t(i_target) << "}; "
//F2//              << "address: " << i_address << "; "
//F2//              << "input modifying data: " << uint32_t(i_data) << "; "
//F2//              << "input ChipOpModifyMode: " << i_modifyMode
//F2//              << std::dec << std::endl;
//F2//    return FAPI2_RC_SUCCESS;
//F2//}

/// @brief Platform-level implementation  of putRing()
/// Hardware procedures writers will not call this function.
/// @tparam K template parameter, passed in target.
/// @param[in] i_target   Target to operate on.
/// @param[in] i_ringID   Ring ID that will identify the Ring in the image.
/// @param[in] i_ringMode Ring operation mode.
/// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
template< TargetType K, MulticastType M, typename V >
__attribute__((always_inline))
ReturnCode putRing(const Target<K, M, V>& i_target,
                   const RingId_t i_ringID,
                   const RingMode i_ringMode)
{
    ReturnCode l_rc = FAPI2_RC_SUCCESS;

    l_rc = putringQme( i_target, i_ringID, i_ringMode );

    return l_rc;
}
// variable_buffer isn't supported on PPE
#ifndef __PPE__
    ///
    /// @brief Platform-level implementation of getRing()
    /// Hardware procedures writers will not call this function.
    /// @tparam K template parameter, passed in target.
    /// @param[in]  i_target   HW target to operate on.
    /// @param[in]  i_address  Ring address to read from.
    /// @param[out] o_data     Buffer that holds ring data read from HW target.
    /// @param[in]  i_ringMode Ring operation mode.
    /// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
    ///
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode getRing(const Target<K, M, V>& i_target,
    //F2//                          const scanRingId_t i_address,
    //F2//                          variable_buffer& o_data,
    //F2//                          const RingMode i_ringMode)
    //F2//{
    //F2//    o_data.setBit(0);
    //F2//    o_data.setBit(3);
    //F2//    std::cout << std::hex << "   getRing "
    //F2//              << "target: {" << i_target.getType() << ","
    //F2//              << uint64_t(i_target) << "}; "
    //F2//              << "ring address: " << i_address << "; "
    //F2//              << "ring mode: " << i_ringMode << "; "
    //F2//              << "first element of output data: " << o_data()[0]
    //F2//              << std::endl;
    //F2//
    //F2//    return FAPI2_RC_SUCCESS;
    //F2//}

    /// @brief Platform-level implementation of modifyRing()
    /// @tparam K template parameter, passed in target.
    /// @param[in] i_target     Target to operate on.
    /// @param[in] i_address    Ring address to modify.
    /// @param[in] i_data       Buffer that contains RS4 compressed ring data
    ///                         to be modified.
    /// @param[in] i_modifyMode The modify mode (or/and/xor)
    /// @param[in] i_ringMode   Ring operation mode.
    /// @return fapi::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode modifyRing(const Target<K, M, V>& i_target,
    //F2//                             const scanRingId_t i_address,
    //F2//                             const variable_buffer& i_data,
    //F2//                             const ChipOpModifyMode i_modifyMode,
    //F2//                             const RingMode i_ringMode)
    //F2//{
    //F2//    std::cout << std::hex << "   modifyRing "
    //F2//              << "target: {" << i_target.getType() << ","
    //F2//              << uint64_t(i_target) << "}; "
    //F2//              << "address: " << i_address << "; "
    //F2//              << "input ChipOpModifyMode: " << i_modifyMode << "; "
    //F2//              << "ring mode: " << i_ringMode << "; "
    //F2//              << "first element of the input data: " << i_data()[0]
    //F2//              << std::endl;
    //F2//
    //F2//    return FAPI2_RC_SUCCESS;
    //F2//}
#endif

// --------------------------------------------------------------------------
// NOTE:
// Implement platform Spy access functions if platform supports them.
// --------------------------------------------------------------------------

// variable_buffer isn't supported on PPE
#ifndef __PPE__
    /// @brief Reads a spy from a chip.
    /// @tparam K template parameter, passed in target.
    /// @param[in]  i_target   Target to operate on.
    /// @param[in]  i_spyId    Id of the spy whose data to be read.
    /// @param[out] o_data     Buffer that holds data read from HW target.
    /// @return fapi2::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
    ///
    /// @note:  The string version is only supported for cronus.
    ///
    ///         The fapi design to support both FSP and cronus use of get and
    ///         put spy functions is dependant on the SPY names being expanded
    ///         to resemble a valid C identifier. This design places some
    ///         restrictions on the SPY names which can be used.
    ///
    ///         1. if the spy name contains a # procedure writers should replace
    ///         it with an __P__ for example -
    ///
    ///         ABUS.RX0.RXPACKS#0.RXPACK.RD.LC.LC.ACT_DIS
    ///         becomes
    ///         ABUS.RX0.RXPACKS__P__0.RXPACK.RD.LC.LC.ACT_DIS
    ///
    ///         2. if the spy name has a number following a "." it must have an
    ///         underscore prepended to the number.
    ///
    ///         EH.TPCHIP.2KX100_ARY_CLK_EDGES_DLY
    ///         becomes
    ///         EH.TPCHIP._2KX100_ARY_CLK_EDGES_DLY
    ///
    ///         Example SPY name:
    ///         The hardware procedure should call the function like:
    ///
    ///          ABUS.RX0.RXPACKS#0.RXPACK.RD.LC.LC.ACT_DIS
    ///
    ///          fapi2::ReturnCode rc = fapiGetSpy( targ,
    ///                  ABUS.RX0.RXPACKS__P__0.RXPACK.RD.LC.LC.ACT_DIS, data );
    ///
    /// @note The ID is not in quotes the fapi code will handle adding
    ///       the quotes for the cronus environment
    ///
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_ENUM
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode getSpy(const Target<K, M, V>& i_target,
    //F2//                         const spyId_t i_spyId,
    //F2//                         variable_buffer& o_data)
    //F2//{
    //F2//    static_assert(K == 0, "implement getSpy (enum)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//
    //F2//template< TargetType K >
    //F2//inline ReturnCode getSpy(const Target<K>& i_target,
    //F2//                         const spyId_t i_spyId,
    //F2//                         variable_buffer& o_data,
    //F2//                         const RingMode i_ringMode)
    //F2//{
    //F2//    static_assert(K == 0, "implement getSpy (enum)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_STRING
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode getSpy(const Target<K, M, V>& i_target,
    //F2//                         const char* const i_spyId,
    //F2//                         variable_buffer& o_data)
    //F2//{
    //F2//    static_assert(K == 0, "implement getSpy (string)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//
    //F2//template< TargetType K >
    //F2//inline ReturnCode getSpy(const Target<K>& i_target,
    //F2//                         const char* const i_spyId,
    //F2//                         variable_buffer& o_data,
    //F2//                         const RingMode i_ringMode)
    //F2//{
    //F2//    static_assert(K == 0, "implement getSpy (string)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif
    /// @brief Writes a spy on a chip.
    /// @tparam K template parameter, passed in target.
    /// @param[in]  i_target   Target to operate on.
    /// @param[in]  i_spyId    Id of the spy to write data to.
    /// @param[out] i_data     Buffer that holds data to write into spy.
    /// @return fapi2::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
    ///
    /// @note:  The string version is only supported for cronus.
    ///
    ///         The fapi design to support both FSP and cronus use of get and
    ///         put spy functions is dependent on the SPY names being expanded
    ///         to resemble a valid C identifier. This design places some
    ///         restrictions on the SPY names which can be used.
    ///
    ///         1. if the spy name contains a # procedure writers should replace
    ///         is with an __P__ for example -
    ///
    ///         ABUS.RX0.RXPACKS#0.RXPACK.RD.LC.LC.ACT_DIS
    ///         becomes
    ///         ABUS.RX0.RXPACKS__P__0.RXPACK.RD.LC.LC.ACT_DIS
    ///
    ///         2. if the spy name has a number following a "." it must have an
    ///         underscore prepended to the number.
    ///
    ///         EH.TPCHIP.2KX100_ARY_CLK_EDGES_DLY
    ///         becomes
    ///         EH.TPCHIP._2KX100_ARY_CLK_EDGES_DLY
    ///
    ///         Example SPY name:
    ///         The hardware procedure should call the function like:
    ///
    ///          ABUS.RX0.RXPACKS#0.RXPACK.RD.LC.LC.ACT_DIS
    ///
    ///          fapi2::ReturnCode rc = fapiPutSpy( targ,
    ///                  ABUS.RX0.RXPACKS__P__0.RXPACK.RD.LC.LC.ACT_DIS, data );
    ///
    /// @note The ID is not in quotes the fapi code will handle adding
    ///         the quotes for the cronus environment
    ///
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_ENUM
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode putSpy(const Target<K, M, V>& i_target,
    //F2//                         const spyId_t i_spyId,
    //F2//                         const variable_buffer& i_data)
    //F2//{
    //F2//    static_assert(K == 0, "implement putSpy (enum)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_STRING
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode putSpy(const Target<K, M, V>& i_target,
    //F2//                         const char* const i_spyId,
    //F2//                         const variable_buffer& i_data)
    //F2//{
    //F2//    static_assert(K == 0, "implement putSpy (string)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode putSpy(const Target<K, M, V>& i_target,
    //F2//                         const char* const i_spyId,
    //F2//                         const char* i_enum)
    //F2//{
    //F2//    static_assert(K == 0, "implement putSpy (string)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif
    /// @brief Writes spy data into a buffer holding ring data image
    ///        This API is used by L2/L3 repair to put column repair data
    ///        into a ring buffer image.
    /// @tparam K template parameter, passed in target.
    /// @param[in]  i_target      Target to operate on.
    /// @param[in]  i_spyId       Id of the spy.
    /// @param[in]  i_data        Buffer that holds spy data to write into ring
    ///                           image.
    /// @param[out] o_imageData   Buffer that holds updated ring image.
    /// @return fapi2::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
    ///
    /// @note:  The string version is only supported for cronus.
    ///
    ///         The fapi design to support both FSP and cronus use of get and
    ///         put spy functions is dependent on the SPY names being expanded
    ///         to resemble a valid C identifier. This design places some
    ///         restrictions on the SPY names which can be used.
    ///
    ///         See fapiPutSpy for details on spy id specifics.
    ///
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_ENUM
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode putSpyImage(const Target<K, M, V>& i_target,
    //F2//                              const spyId_t i_spyId,
    //F2//                              const variable_buffer& i_data,
    //F2//                              variable_buffer& o_imageData)
    //F2//{
    //F2//    static_assert(K == 0, "implement putSpyImage (enum)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_STRING
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode putSpyImage(const Target<K, M, V>& i_target,
    //F2//                              const char* const i_spyId,
    //F2//                              const variable_buffer& i_data,
    //F2//                              variable_buffer& o_imageData)
    //F2//{
    //F2//    static_assert(K == 0, "implement putSpyImage (string)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif
    /// @brief Reads spy data from a ring image buffer
    /// @param[in]   i_target      Target to operate on
    /// @param[in]   i_spyId       The spy's id
    /// @param[out]  o_data        Buffer that holds data read from ring image.
    /// @param[in]   i_imageData   Buffer that holds ring image to read data
    ///                            from.
    /// @return fapi2::ReturnCode. FAPI2_RC_SUCCESS if success, else error code.
    ///
    /// @note:  The string version is only supported for cronus.
    ///
    ///         The fapi design to support both FSP and cronus use of get and
    ///         put spy functions is dependent on the SPY names being expanded
    ///         to resemble a valid C identifier. This design places some
    ///         restrictions on the SPY names which can be used.
    ///
    ///         See fapiPutSpy for details on spy id specifics.
    ///
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_ENUM
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode getSpyImage(const Target<K, M, V>& i_target,
    //F2//                              const spyId_t i_spyId,
    //F2//                              variable_buffer& o_data,
    //F2//                              const variable_buffer& i_imageData)
    //F2//{
    //F2//    static_assert(K == 0, "implement getSpyImage (enum)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif
    //F2//#ifdef FAPI_SUPPORT_SPY_AS_STRING
    //F2//template< TargetType K, MulticastType M, typename V >
    //F2//inline ReturnCode getSpyImage(const Target<K, M, V>& i_target,
    //F2//                              const char* const i_spyId,
    //F2//                              variable_buffer& o_data,
    //F2//                              const variable_buffer& i_imageData)
    //F2//{
    //F2//    static_assert(K == 0, "implement getSpyImage (string)");
    //F2//    return ~FAPI2_RC_SUCCESS;
    //F2//}
    //F2//#endif

#endif // PPE

} // fapi2 namespace

#endif // _FAPI2_HWACCESS_H_
