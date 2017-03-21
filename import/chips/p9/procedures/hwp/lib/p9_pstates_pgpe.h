/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_pstates_pgpe.h $        */
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
/// @file  p9_pstates_pgpe.h
/// @brief Pstate structures and support routines for PGPE Hcode
///
// *HWP HW Owner        : Rahul Batra <rbatra@us.ibm.com>
// *HWP HW Owner        : Michael Floyd <mfloyd@us.ibm.com>
// *HWP Team            : PM
// *HWP Level           : 1
// *HWP Consumed by     : PGPE:HS


#ifndef __P9_PSTATES_PGPE_H__
#define __P9_PSTATES_PGPE_H__

#include <p9_pstates_common.h>
#include <p9_pstates_cmeqm.h>

/// PstateParmsBlock Magic Number
///
/// This magic number identifies a particular version of the
/// PstateParmsBlock and its substructures.  The version number should be
/// kept up to date as changes are made to the layout or contents of the
/// structure.

#define PSTATE_PARMSBLOCK_MAGIC 0x5053544154453030ull /* PSTATE00 */

#ifndef __ASSEMBLER__
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>


/// Standard options controlling Pstate setup and installation procedures
typedef struct
{

    /// Option flags; See \ref pstate_options
    uint32_t options;

    /// Pad structure to 8 bytes.  Could also be used for other options later.
    uint32_t pad;

} PGPEOptions;

/// UltraTurbo Segment VIDs by Core Count
typedef struct
{

    /// Number of Segment Pstates
    uint8_t     ut_segment_pstates;

    /// Maximum number of core possibly active
    uint8_t     ut_max_cores;

    /// VDD VID modification
    ///      1 core active  = offset 0
    ///      2 cores active = offset 1
    ///         ...
    ///      12 cores active = offset 11
    uint8_t ut_segment_vdd_vid[MAX_UT_PSTATES][NUM_ACTIVE_CORES];

    /// VCS VID modification
    ///      1 core active  = offset 0
    ///      2 cores active = offset 1
    ///         ...
    ///      12 cores active = offset 11
    uint8_t ut_segment_vcs_vid[MAX_UT_PSTATES][NUM_ACTIVE_CORES];

} VIDModificationTable;

/// Workload Optimized Frequency (WOF) Elements
///
/// Structure defining various control elements needed by the WOF algorithm
/// firmware running on the OCC.
///
typedef struct
{

    /// WOF Enablement
    uint8_t wof_enabled;

    /// TDP<>RDP Current Factor
    ///   Value read from ??? VPD
    ///   Defines the scaling factor that converts current (amperage) value from
    ///   the Thermal Design Point to the Regulator Design Point (RDP) as input
    ///   to the Workload Optimization Frequency (WOF) OCC algorithm.
    ///
    ///   This is a ratio value and has a granularity of 0.01 decimal.  Data
    ///   is held in hexidecimal (eg 1.22 is represented as 122 and then converted
    ///   to hex 0x7A).
    uint32_t tdp_rdp_factor;

    /// UltraTurbo Segment VIDs by Core Count
    VIDModificationTable ut_vid_mod;

} WOFElements;


/// Global Pstate Parameter Block
///
/// The GlobalPstateParameterBlock is an abstraction of a set of voltage/frequency
/// operating points along with hardware limits.  Besides the hardware global
/// Pstate table, the abstract table contains enough extra information to make
/// it the self-contained source for setting up and managing voltage and
/// frequency in either Hardware or Firmware Pstate mode.
///
/// When installed in PMC, Global Pstate table indices are adjusted such that
/// the defined Pstates begin with table entry 0. The table need not be full -
/// the \a pmin and \a entries fields define the minimum and maximum Pstates
/// represented in the table.  However at least 1 entry must be defined to
/// create a legal table.
///
/// Note that Global Pstate table structures to be mapped into PMC hardware
/// must be 1KB-aligned.  This requirement is fullfilled by ensuring that
/// instances of this structure are 1KB-aligned.
typedef struct
{


    /// Magic Number
    uint64_t magic;     // the last byte of this number the structure's version.

    /// Pstate options
    ///
    /// The options are included as part of the GlobalPstateTable so that they
    /// are available to upon PGPE initialization.
    PGPEOptions options;

    /// The frequency associated with Pstate[0] in KHz
    uint32_t reference_frequency_khz;

    /// The frequency step in KHz
    uint32_t frequency_step_khz;

    /// Operating points
    ///
    /// VPD operating points are stored without load-line correction.  Frequencies
    /// are in MHz, voltages are specified in units of 5mV, and currents are
    /// in units of 500mA.
    VpdOperatingPoint operating_points[VPD_PV_POINTS];

    /// Biases
    ///
    /// Biases applied to the VPD operating points prior to load-line correction
    /// in setting the external voltages.
    /// Values in 0.5%
    VpdBias ext_biases[VPD_PV_POINTS];

    /// Loadlines and Distribution values for the VDD rail
    SysPowerDistParms vdd_sysparm;

    /// Loadlines and Distribution values for the VCS rail
    SysPowerDistParms vcs_sysparm;

    /// Loadlines and Distribution values for the VDN rail
    SysPowerDistParms vdn_sysparm;

    /// The "Safe" Voltage
    ///
    /// A voltage to be used when safe-mode is activated
    /// @todo Need to detail this out yet.
    uint32_t safe_voltage_mv;

    /// The "Safe" Frequency
    ///
    /// A voltage to be used when safe-mode is activated
    /// @todo Need to detail this out yet.
    uint32_t safe_frequency_khz;

    /// The exponent of the exponential encoding of Pstate stepping delay
    uint8_t vrm_stepdelay_range;

    /// The significand of the exponential encoding of Pstate stepping delay
    uint8_t vrm_stepdelay_value;

    /// VDM Data
    VDMParmBlock vdm;

    /// The following are needed to generated the Pstate Table to HOMER.

    /// Internal Biases
    ///
    /// Biases applied to the VPD operating points that are used for interpolation
    /// in setting the internal voltages (eg Vout to the iVRMs) as part of the
    /// Local Actual Pstate.
    /// Values in 0.5%
    VpdBias int_biases[VPD_PV_POINTS];

    /// IVRM Data
    IvrmParmBlock ivrm;

    /// Resonant Clock Grid Management Setup
    ResonantClockingSetup resclk;

    /// Time b/w ext VRM detects write voltage cmd and when voltage begins to move
    uint32_t ext_vrm_transition_start_ns;

    /// Transition rate for an increasing VDD voltage excursion
    uint32_t ext_vrm_transition_rate_inc_uv_per_us;

    /// Transition rate for an decreasing VDD voltage excursion
    uint32_t ext_vrm_transition_rate_dec_uv_per_us;

    /// Delay to account for VDD rail setting
    uint32_t ext_vrm_stabilization_time_us;

    /// External VRM transition step size
    uint32_t ext_vrm_step_size_mv;

    /// Nest frequency in Mhz. This is used by FIT interrupt
    uint32_t nest_frequency_mhz;

    /// Precalculated Pstate-Voltage Slopes
    uint16_t PsVSlopes[VPD_NUM_SLOPES_SET][VPD_NUM_SLOPES_REGION];

    /// Precalculated Voltage-Pstates Slopes
    uint16_t VPsSlopes[VPD_NUM_SLOPES_SET][VPD_NUM_SLOPES_REGION];

    /// All operating points
    VpdOperatingPoint operating_points_set[NUM_VPD_PTS_SET][VPD_PV_POINTS];

    //DPLL pstate 0 value
    uint32_t dpll_pstate0_value;

    // @todo DPLL Droop Settings.  These need communication to SGPE for STOP

} GlobalPstateParmBlock;


#ifdef __cplusplus
} // end extern C
#endif
#endif    /* __ASSEMBLER__ */
#endif    /* __P9_PSTATES_PGPE_H__ */
