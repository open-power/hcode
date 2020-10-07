# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/stopreg/p10_core_save_restore_routines.S $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2021
# [+] International Business Machines Corp.
#
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#
# IBM_PROLOG_END_TAG

                .set r0,    0
                .set r1,    1
                .set r2,    2
                .set r3,    3
                .set r4,    4
                .set r5,    5
                .set r6,    6
                .set r7,    7
                .set r8,    8
                .set r9,    9
                .set r10,   10
                .set r11,   11
                .set r12,   12
                .set r13,   13
                .set r14,   14
                .set r15,   15
                .set r16,   16
                .set r17,   17
                .set r18,   18
                .set r19,   19
                .set r20,   20
                .set r21,   21
                .set r22,   22
                .set r23,   23
                .set r24,   24
                .set r25,   25
                .set r26,   26
                .set r27,   27
                .set r28,   28
                .set r29,   29
                .set r30,   30
                .set r31,   31

                .set f0,    0
                .set f1,    1
                .set f2,    2
                .set f3,    3
                .set f4,    4
                .set f5,    5
                .set f6,    6
                .set f7,    7
                .set f8,    8
                .set f9,    9
                .set f10,   10
                .set f11,   11
                .set f12,   12
                .set f13,   13
                .set f14,   14
                .set f15,   15
                .set f16,   16
                .set f17,   17
                .set f18,   18
                .set f19,   19
                .set f20,   20
                .set f21,   21
                .set f22,   22
                .set f23,   23
                .set f24,   24
                .set f25,   25
                .set f26,   26
                .set f27,   27
                .set f28,   28
                .set f29,   29
                .set f30,   30
                .set f31,   31

#--------------------------------------------------------------------#
#  SPR Constants                                                     #
#--------------------------------------------------------------------#

                .set XER,                           1
                .set LR,                            8
                .set CTR,                           9
                .set DSISR,                         18
                .set DAR,                           19
                .set DEC,                           22
                .set SDR1,                          25
                .set SRR0,                          26
                .set SRR1,                          27
                .set CFAR,                          28
                .set HFSCR,                         190
                .set TB,                            268
                .set SPRG0,                         272
                .set SPRG1,                         273
                .set SPRG2,                         274
                .set SPRG3,                         275
                .set SPRC,                          276
                .set SPRD,                          277
                .set EAR,                           282
                .set TBL,                           284
                .set TBU,                           285
                .set PVR,                           287
                .set HSPRG0,                        304
                .set HSPRG1,                        305
                .set HDSISR,                        306
                .set HDEC,                          310
                .set HRMOR,                         313
                .set HSRR0,                         314
                .set HSRR1,                         315
                .set TFMR,                          317
                .set HMER,                          336
                .set URMOR,                         505 # Ultravisor
                .set USRR0,                         506
                .set USRR1,                         507
                .set SMFCTRL,                       511 # Ultravisor
                .set HEIR,                          339
                .set HID,                           1008
                .set PIR,                           1023

#--------------------SPR definition ends---------------------------------------

#--------------------constants begin ------------------------------------------

                 #offset wrt to start of HOMER at which thread launcher code
                 #is located.
                .set THREAD_LAUNCHER_START_OFFSET,  0x2000
                .set THREAD_LAUNCHER_SIZE_OFFSET,   1024
                .set CORE_SPR_OFFSET,               1024
                .set SPR_RESTORE_OFFSET,            THREAD_LAUNCHER_START_OFFSET + THREAD_LAUNCHER_SIZE_OFFSET
                .set HRMOR_RESTORE_OFFSET,          0x1200
                .set URMOR_RESTORE_OFFSET,          0x1280
                .set SKIP_HRMOR_UPDATE_OFFSET,      4
                .set SKIP_URMOR_UPDATE_OFFSET,      8
                .set SPR_SAVE_ROUTINE_OFFSET,       0x2300
                .set SELF_SAVE_RESTORE_COLLECT_FFDC,0x1400

                .set STOP,                          0x4C0002E4
                .set ATTN,                          0x00000200
                .set TRAP,                          0x7FE00008
                .set urfid,                         0x4C000264
                .set SECURE_MODE_CONST,             0x0040  # bit 41, note: must be shifted left 16 bits
                .set MACHINE_CHECK_ENABLE_CONST,    0x1000  # bit 51
                .set ERR_CODE_SMF_E_NOT_SET,        0x0001  # Core is SMF capable but SMF[E] not SET
                .set SMFCTRL_ENABLE_BIT,            0
                .set MSR_SECURITY_BIT,              41
                .set TRIGGER_FFDC_COLLECTION,       55  #Thread Scratch register bit 55
                .set SCRATCH_SLV_THDS_COMPLETE_BIT, 56
                .set SCRATCH_RUNTIME_MODE_BIT,      59
                .set HV_EXIT_WITH_SMF_ENABLE_BIT,   58  #0 : HV exit with SMFCTRL[E] bit SET to 0b01
                                                        #1 : HV exit with SMFCTRL[E] bit SET to 0b00
                .set OFFSET_SMF_EN_SLAVE_THREADS,    4

                .set OTHER_THREADS_STOPPED,         0x07
                .set CORE_THREAD_STATE_REG_ID,      0x01E0
                .set CONFIG_CORE_SCRATCH_REG0,      0x0000
                .set CONFIG_CORE_SCRATCH_REG1,      0x0008
                .set SECURE_THREAD_SPR_REGION_SIZE, 9216    # 9216 Bytes ( Interrupt Region ) + 1024 Bytes ( Thread Launch Size )
                .set CORE_SELF_RESTORE_OFFSET,      0xC00
                .set CORE_SELF_SAVE_OFFSET,         0xE00   # 3.5KB
                .set THREAD_SELF_SAVE_SIZE,         256
                .set SELF_REST_VER_INFO_OFFSET,     0x1C
                .set SMF_SIGNATURE_OFFSET,          0x1300
                .set SMF_SIGNATURE_CONST,           0x5f534d46 # '_SMF'
                .set START_FFDC_CONST,              0x5448
                .set THREAD_NUM_BASE_ASCII,         0x3030
                .set HILE_BIT_POS,                  4
                .set LE_BIT_POS,                    63
                .set SECURE_ADDR_BIT,               15
                .set MF_HRMOR_R1,                   0xa64a397c
                .set CLEAR_MSR_LE,                  0xa407b57a
                .set MT_SRR1,                       0xa603bb7e
                .set ADDI_R1_32,                    0x20012138
                .set MT_SRR0_R1,                    0xa6033a7c
                .set RFID,                          0x2400004c
                .set TRAP_LE,                       0x0800e07f
                .set MFMSR_R21,                     0xa600a07e
                .set SHIFT_ATTN_ENABLE_BIT_POS,     60  #HID[3]
                .set FFDC_COLLECTED_CONST,          0x55aa
                .set FFDC_AVBL_BIT_MASK,            0x02
                .set TFAC_BUG_TFMR_BIT_POS_28,      28  #28:31 indicates tb_get_tod state of tbst
                .set TFAC_TFMR_BUG_BIT_LEN,         4
                .set TFAC_TFMR_BUG_BIT_CONST,       7
                .set SIMICS_ENV_BIT_MASK,           0x04

                .set SPR_SAVE_SCRATCH_REG,          r0
                .set SPR_DATA_REG,                  r1
                .set PIR_VAL_REG,                   r2
                .set CPMR_BASE_REG,                 r3
                .set FUSED_STATUS_REG,              r4
                .set CORE_ID_REG,                   r5
                .set THREAD_ID_REG,                 r6
                .set BASE_ADDR_REG,                 r7
                .set TEMP_REG1,                     r8
                .set URMOR_RESTORE_REG,             r9
                .set HRMOR_RESTORE_REG,             r10
                .set THREAD_ACTIVE_STATE_REG,       r11
                .set CORE_SCOPE_RESTORE_ADDR_REG,   r12
                .set THREAD_SCOPE_RESTORE_ADDR_REG, r13
                .set THREAD_SELF_SAVE_BASE_ADDR,    r14
                .set CORE_SELF_SAVE_BASE_ADDR,      r15
                .set SMF_VAL_REG,                   r16
                .set TEMP_REG2,                     r17
                .set THREAD_SCRATCH_VAL_REG,        r18
                .set TEMP_REG3,                     r19
                .set RMOR_INIT_REG,                 r20
                .set MSR_INIT_REG,                  r21
                .set VIRT_THREAD_ID_REG,            r22
                .set MSR_SECURITY_ENABLE_REG,       r23
                .set TEST_REG,                      r24
                .set SELF_REST_ERR_REG,             r25
                .set SELF_REST_VER_REG,             r26
                .set FFDC_BASE_ADDRES_REG,          r27
                .set CORE_FFDC_OFFSET_REG,          r28
                .set GPR_29_REG,                    r29
                .set SELF_SAVE_ADDR_REG,            r30
                .set SELF_RESTORE_ADDR_REG,         r31

#--------------------------------------------------------------------#
#
#                   Interrupt Vectors
#
#-----------------------------------------------------------------------#
                .set SRESET,                        0x0100

#--------------------------------------------------------------------#
#
#  CR Register Constants
#
#--------------------------------------------------------------------#

                .set cr0,               0
                .set cr1,               1
                .set cr2,               2
                .set cr3,               3
                .set cr4,               4
                .set cr5,               5
                .set cr6,               6
                .set cr7,               7
                .set lt,                0
                .set gt,                1
                .set eq,                2
                .set so,                3

#--------------------------------------------------------------------#
.section ".selfRestore" , "ax"
.global _start

#There is CPMR header just before SRESET handler. Below is its layout.
#------------------------------CPMR Header ------------------------------------
# Address Offset                        Contents
#-----------------------------------------------------------------------------
#  0x00                     ATTN Opcode             ATTN Opcode
#------------------------------------------------------------------------------
#  0x08                     Magic Number
#------------------------------------------------------------------------------
#  0x10                     Build Date              Version
#-------------------------------------------------------------------------------
#  0x18                     Resvd|Resvd|Resvd|Resvd|Resvd|Resvd|Resvd|Fused Flag
#-------------------------------------------------------------------------------
#  0x20                     QME Hcode Offset       | QME Hcode Length
#-------------------------------------------------------------------------------
#  0x28                     QME Common Rings       | QME Common Rings Section
#                           Section Offset         | Length
#-------------------------------------------------------------------------------
#  0x30                     QME Quad Pstate Region | QME Quad Pstate Region
#                           Offset                   Length
#-------------------------------------------------------------------------------
# 0x38-0xF8                          Reserved( Filled with ATTN instructions )
#-------------------------------------------------------------------------------#
_start:

#--------------------------------------------------------------------#

#SRESET handler routine
#In wakeup and STOP  path, QME generates reset signal for P10 CORE. It generates
#SRESET interrupt for all threads of the core.

#At the beginning of SRESET, thread executing this code determines its privilege level.
#Once privilege level is known, execution is steered towards common thread launcher.

#If thread executing the code is working with Hyp privilege, thread launcher address is
#calculated using contents of HRMOR where as if thread is executing code as Ultravisor,
#thread prepares to exit ultavisor mode using trampoline sequence. Thread launcher address
#is computed using URMOR. Refer to table below

#----------------------------------------------------------------------------
#   Privilege                 SPR Src                 SPR Dest
#----------------------------------------------------------------------------
#   Hyp*                       HRMOR                 SRR0
#                              MSR                   SRR1
#---------------------------------------------------------------------------
#   Ultravisor**               URMOR                 USRR0
#                              MSR                   USRR1
#---------------------------------------------------------------------------
#
# *     Copy is initiated by rfid instruction
# **    Copy is initiated by urfid instruction
#---------------------------------------------------------------------------

# Assume scan init: MSR[Secure]==1 and MSR[HV]=1 and SMFCTRL[E]==0

.org _start + SRESET

_sreset_hndlr:
# In case of OPAL, during STOP entry, core will hit here in LE mode.
# 'b big_endian_start' is executed by LE core as instruction 'subic'
# It behaves like a NOP allowing an LE core to continue execution of
# instructions starting under label 'little_endian_start'. These
# instructions transition core from LE to BE by clearing LE bit in MSR.
# Regardless of core endianess at label '_sreset_hndlr', endianess will
# be BE while hitting 'big_endian_start'.

b big_endian_start

little_endian_start:
.long MF_HRMOR_R1
.long MFMSR_R21
.long CLEAR_MSR_LE
.long MT_SRR1
.long ADDI_R1_32
.long MT_SRR0_R1
.long RFID

#Note: below are instructions for swizzled machine code used above for
#LE core entering STOP
#mfspr   r1,        HRMOR
#mfmsr    MSR_INIT_REG
#clrrdi   MSR_INIT_REG, MSR_INIT_REG, 1
#mtsrr1   MSR_INIT_REG
#addi     r1, r1, 288
#mtsrr0   r1
#rfid



big_endian_start:
mfspr       SPR_DATA_REG,   HID
li          TEMP_REG1,   0
insrdi      SPR_DATA_REG,   TEMP_REG1,  1,  HILE_BIT_POS
mtspr       HID,        SPR_DATA_REG                                        # Cleared HILE bit position
mfmsr       MSR_INIT_REG
ori         MSR_INIT_REG,    MSR_INIT_REG, MACHINE_CHECK_ENABLE_CONST       # Set the ME bit
extrdi.     MSR_SECURITY_ENABLE_REG,   MSR_INIT_REG, 1, MSR_SECURITY_BIT    # read Secure Bit (S) of MSR
beq         hv_core_init                                                    # it is a non-secure mode system

uv_core_check:
#Check For SMF enable bit
#SMFCTRL[E]=1?

li          TEMP_REG2,      ERR_CODE_SMF_E_NOT_SET
mfspr       SMF_VAL_REG,    SMFCTRL
extrdi.     TEMP_REG1,      SMF_VAL_REG, 1, SMFCTRL_ENABLE_BIT
cmpwi       TEMP_REG1,      0x01
beq         uv_core_init
# We have MSR[S] bit SET but SMFCTRL[E] bit CLEAR. This is an undefined state.
# Considering it as HW initialization issue.

uv_init_error:
#Put error code in a specific GPR
#SPATTN to halt as the inits and the mode are not consistent

mr SELF_REST_ERR_REG, TEMP_REG2
.long       ATTN                                        # Error out and block self restore completion

hv_core_init:
mfspr       RMOR_INIT_REG,   HRMOR                      # Get Stop_HRMOR (placed by QME)
addi        TEMP_REG2,       RMOR_INIT_REG,  0x2000     # Thread Launcher offset
mtsrr0      TEMP_REG2                                   # Save Thread Launcher address to SRR0
mtsrr1      MSR_INIT_REG                                # Save MSR to SRR1
rfid                                                    # Invoke Thread Launcher with ME=1 in HV mode

uv_core_init:
mfspr       RMOR_INIT_REG,   URMOR
addi        TEMP_REG1,       RMOR_INIT_REG, 0x2000   # Thread Launcher offset
mtspr       USRR0,           TEMP_REG1               # Save Thread Launcher address to USRR0
mtspr       USRR1,           MSR_INIT_REG            # Save MSR to USRR1
.long urfid                                          # Invoke Thread Launcher with ME=1 in UV mode

#--------------------------------------------------------------------#

#Error handling for other interrupt vectors.

#--------------------------------------------------------------------#
#       Machine Check
#--------------------------------------------------------------------#
.org _start + 0x0200

enable_attn:
li          TEMP_REG3,    0x01
sldi        TEMP_REG3,    TEMP_REG3, SHIFT_ATTN_ENABLE_BIT_POS
mfspr       TEMP_REG2,    HID
or          TEMP_REG2,    TEMP_REG2, TEMP_REG3
mtspr       HID,          TEMP_REG2
b collect_ffdc

#--------------------------------------------------------------------#
#       Data Storage
#--------------------------------------------------------------------#
.org _start + 0x0300
li SELF_REST_ERR_REG, 0x300
b   enable_attn

#--------------------------------------------------------------------#
#       Data Segment
#--------------------------------------------------------------------#
.org _start + 0x0380
li SELF_REST_ERR_REG, 0x380
b   enable_attn

#--------------------------------------------------------------------#
#       Instruction Storage
#--------------------------------------------------------------------#
.org _start + 0x0400
li SELF_REST_ERR_REG, 0x400
b   enable_attn

#--------------------------------------------------------------------#
#       Instruction Segment
#--------------------------------------------------------------------#
.org _start + 0x0480
li SELF_REST_ERR_REG, 0x480
b   enable_attn

#--------------------------------------------------------------------#
#       External
#--------------------------------------------------------------------#
.org _start + 0x0500
li SELF_REST_ERR_REG, 0x500
b   enable_attn

#--------------------------------------------------------------------#
#       Alignment
#--------------------------------------------------------------------#
.org _start + 0x0600
li SELF_REST_ERR_REG, 0x600
b   enable_attn

#--------------------------------------------------------------------#
#       Program
#--------------------------------------------------------------------#
.org _start + 0x0700
cmplwi TEMP_REG1, FFDC_COLLECTED_CONST  #did we come here due to FFDC collection
beq ffdc_done
#we came here due to a program interrupt and not due to FFDC collection
li SELF_REST_ERR_REG, 0x700
b   enable_attn

ffdc_done:
.long STOP

#--------------------------------------------------------------------#
#       Floating Point Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0800
li SELF_REST_ERR_REG, 0x800
b   enable_attn

#--------------------------------------------------------------------#
#       Decrementer
#--------------------------------------------------------------------#
.org _start + 0x0900
li SELF_REST_ERR_REG, 0x900
b   enable_attn

#--------------------------------------------------------------------#
#       Ultravisor Decrementer
#--------------------------------------------------------------------#
.org _start + 0x0980
li SELF_REST_ERR_REG, 0x980
b   enable_attn

#--------------------------------------------------------------------#
#       Directed Priviledged Doorbell
#--------------------------------------------------------------------#
.org _start + 0x0A00
li SELF_REST_ERR_REG, 0xA00
b   enable_attn

#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0B00
li SELF_REST_ERR_REG, 0xB00
b   enable_attn

#--------------------------------------------------------------------#
#       System Call
#--------------------------------------------------------------------#
.org _start + 0x0C00
b _sreset_hndlr

#--------------------------------------------------------------------#
#       Trace
#--------------------------------------------------------------------#
.org _start + 0x0D00
li SELF_REST_ERR_REG, 0xD00
b   enable_attn

#--------------------------------------------------------------------#
#       Ultravisor Data Storage
#--------------------------------------------------------------------#
.org _start + 0x0E00
li SELF_REST_ERR_REG, 0xE00
b   enable_attn

#--------------------------------------------------------------------#
#       Ultravisor Instruction Storage
#--------------------------------------------------------------------#
.org _start + 0x0E20
li SELF_REST_ERR_REG, 0xE20
b   enable_attn

#--------------------------------------------------------------------#
#       Ultravisor Emulation Assistance
#--------------------------------------------------------------------#
.org _start + 0x0E40
li SELF_REST_ERR_REG, 0xE40
b   enable_attn

#--------------------------------------------------------------------#
#       Ultravisor Maintenance
#--------------------------------------------------------------------#
.org _start + 0x0E60
li SELF_REST_ERR_REG, 0xE60
b   enable_attn

#--------------------------------------------------------------------#
#       Directed Ultravisor Doorbell
#--------------------------------------------------------------------#
.org _start + 0x0E80
li SELF_REST_ERR_REG, 0x0E80
b   enable_attn
#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0EA0
li SELF_REST_ERR_REG, 0xEA0
b   enable_attn

#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0EC0
li SELF_REST_ERR_REG, 0x0EC0
b   enable_attn

#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0EE0
li SELF_REST_ERR_REG, 0xEE0
b   enable_attn

#--------------------------------------------------------------------#
#       Performance Monitoring
#--------------------------------------------------------------------#
.org _start + 0x0F00
li SELF_REST_ERR_REG, 0xF00
b   enable_attn

#--------------------------------------------------------------------#
#       Vector Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F20
li SELF_REST_ERR_REG, 0xF20
b   enable_attn

#--------------------------------------------------------------------#
#       VSX Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F40
li SELF_REST_ERR_REG, 0xF40
b   enable_attn

#--------------------------------------------------------------------#
#       Facility Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F60
li SELF_REST_ERR_REG, 0xF60
b   enable_attn

#--------------------------------------------------------------------#
#       Ultravisor Facility Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F80
li SELF_REST_ERR_REG, 0xF80
b   enable_attn

#--------------------------------------------------------------------#
#       Ultravisor Directed Priviledged Doorbell
#--------------------------------------------------------------------#
.org _start + 0x0FA0
li SELF_REST_ERR_REG, 0xFA0
b   enable_attn

#--------------------------------------------------------------------#
#       Self Restore Completion
#--------------------------------------------------------------------#
.org _start + HRMOR_RESTORE_OFFSET

#restore the URMOR/HRMOR to the value needed by the Ultravisor upon wakeup
#there can be no future I-fetches after this point, so no more than 7
#instructions after this

mtspr HRMOR,     HRMOR_RESTORE_REG

#necessary to invalidate stale translations in the ERATs that were created
#during the self-restore code execution.

save_restore_done:
slbia
.long STOP                  # Core entering STOP state from HV state
.long ATTN
#--------------------------------------------------------------------

.org _start + URMOR_RESTORE_OFFSET
mtspr HRMOR,     HRMOR_RESTORE_REG
mtspr URMOR,     URMOR_RESTORE_REG
slbia
.long STOP                  # Core entering STOP from UV state
.long ATTN

#---------------------------------------------------------------------

.org _start + SMF_SIGNATURE_OFFSET
## A signature indicating that self save-restore image supports SMF.

.long   SMF_SIGNATURE_CONST

#---------------------------------------------------------------------

.org _start + SELF_SAVE_RESTORE_COLLECT_FFDC
# FFDC region starts at an ofset of 224KB from CPMR base. Each cores has been
# allocated 1KB. Each core region is divided in to two halves. One half is meant
# for critical FFDC and other is meant for additional FFDC. Each half is further
# divided into 4 threads region. Each thread region is of size 128B.
# Thread uses its region to populate GPR and SPR values.

collect_ffdc:
li      FFDC_BASE_ADDRES_REG,   0x3800      //FFDC region starts at 224KB from CPMR base
sldi    FFDC_BASE_ADDRES_REG,   FFDC_BASE_ADDRES_REG, 4
or      FFDC_BASE_ADDRES_REG,   FFDC_BASE_ADDRES_REG, RMOR_INIT_REG
sldi    CORE_FFDC_OFFSET_REG,   CORE_ID_REG,  10 // each cores has been allocated 1KB
add     FFDC_BASE_ADDRES_REG,   CORE_FFDC_OFFSET_REG, FFDC_BASE_ADDRES_REG
sldi    CORE_FFDC_OFFSET_REG,   THREAD_ID_REG, 7
add     FFDC_BASE_ADDRES_REG,   CORE_FFDC_OFFSET_REG, FFDC_BASE_ADDRES_REG
mr      CORE_FFDC_OFFSET_REG,   FFDC_BASE_ADDRES_REG

collect_non_uv_ffdc:
#R28
stdu    CORE_FFDC_OFFSET_REG,   8 ( CORE_FFDC_OFFSET_REG )

#R8
stdu    TEMP_REG1,              8 ( CORE_FFDC_OFFSET_REG )

#mark FFDC start eye catcher "THxx"
li       TEMP_REG1,   START_FFDC_CONST
sldi     TEMP_REG1,   TEMP_REG1, 16
ori      TEMP_REG1,   TEMP_REG1, THREAD_NUM_BASE_ASCII
or       TEMP_REG1,   THREAD_ID_REG, TEMP_REG1
std      TEMP_REG1,  -16 ( CORE_FFDC_OFFSET_REG )

#R13
stdu    THREAD_SCOPE_RESTORE_ADDR_REG, 8 ( CORE_FFDC_OFFSET_REG )

#R14
stdu    THREAD_SELF_SAVE_BASE_ADDR, 8 ( CORE_FFDC_OFFSET_REG )

#R16
stdu    SMF_VAL_REG,            8 ( CORE_FFDC_OFFSET_REG )

#R17
stdu    TEMP_REG2,              8 ( CORE_FFDC_OFFSET_REG )

#R18
stdu    THREAD_SCRATCH_VAL_REG, 8 ( CORE_FFDC_OFFSET_REG )

#R31
stdu    SELF_RESTORE_ADDR_REG,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  HRMOR
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfmsr   TEMP_REG1
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  PVR
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  HSRR0
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  HSRR1
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  HID
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

addi    FFDC_BASE_ADDRES_REG,   FFDC_BASE_ADDRES_REG, 512
mr      CORE_FFDC_OFFSET_REG,   FFDC_BASE_ADDRES_REG

//Collection of additional FFDC

mfspr   TEMP_REG1,  PIR
stdu    TEMP_REG1,  0 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  SRR0
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  SRR1
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  HEIR
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

#R20
stdu    RMOR_INIT_REG,          8 ( CORE_FFDC_OFFSET_REG )

#R21
stdu    MSR_INIT_REG,           8 ( CORE_FFDC_OFFSET_REG )

#R25
stdu    SELF_REST_ERR_REG,      8 ( CORE_FFDC_OFFSET_REG )

#R9
stdu    URMOR_RESTORE_REG,      8 ( CORE_FFDC_OFFSET_REG )

#R10
stdu    HRMOR_RESTORE_REG,      8 ( CORE_FFDC_OFFSET_REG )

#R30
stdu    SELF_SAVE_ADDR_REG,     8 ( CORE_FFDC_OFFSET_REG )

#If in UV mode, then collect UV level SPRs else skip it
cmplwi  MSR_SECURITY_ENABLE_REG,    0
beq end_ffdc

collect_uv_ffdc:

mfspr   TEMP_REG1,  URMOR
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  USRR0
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

mfspr   TEMP_REG1,  USRR1
stdu    TEMP_REG1,  8 ( CORE_FFDC_OFFSET_REG )

end_ffdc:
mfspr   THREAD_SCRATCH_VAL_REG, SPRD
ori     THREAD_SCRATCH_VAL_REG, THREAD_SCRATCH_VAL_REG, FFDC_AVBL_BIT_MASK  #Setting FFDC available
mtspr   SPRD, THREAD_SCRATCH_VAL_REG
li      TEMP_REG1,   FFDC_COLLECTED_CONST
.long ATTN  #to let Host know

#---------------------------------------------------------------------
#
# common code for thread restoration
#
#---------------------------------------------------------------------

.org _start + THREAD_LAUNCHER_START_OFFSET

thread_launcher_start:

mfspr       PIR_VAL_REG, PIR       #Processor Identification Register
mfspr       FUSED_STATUS_REG,   PVR
extrdi.     FUSED_STATUS_REG,   FUSED_STATUS_REG, 1, 51
# Bit 51 is 0 if fused; 1 if non-fused
bne         core_is_not_fused

core_is_fused:
#core is fused. Find physical core number from PIR bits.
#Bit 60:        Fuse Core Select within the Quad
#Bit 61:62      Thread select within a core chiplet
#Bit 63         chip select within the fused core
#Bit 61:63      Virtual thread number across within the fused core

#Multiply the fused core select bit (bit 60) by 2 since there are two core chiplets in
#a pair forming the fused core. Bit 63 selects even or odd core within the pair.
#Physical core id = 2 * (bit 60) + (bit 63)

extrdi      CORE_ID_REG,    PIR_VAL_REG,  1, 60
sldi        CORE_ID_REG,    CORE_ID_REG,  1
extrdi      TEMP_REG1,      PIR_VAL_REG,  1, 63
add         CORE_ID_REG,    CORE_ID_REG,  TEMP_REG1

# thread id = 2 * (bit 61 ) + bit 62
extrdi      THREAD_ID_REG, PIR_VAL_REG, 2, 61
extrdi      VIRT_THREAD_ID_REG, PIR_VAL_REG, 3, 61

b thread_restore

core_is_not_fused:
#core is not fused. Find relative id within Quad
#bit 60:61 core chiplet select within a Quad.
#bit 62:63 thread select within a core chiplet.

extrdi      CORE_ID_REG,    PIR_VAL_REG,    2, 60
extrdi      THREAD_ID_REG,  PIR_VAL_REG,    2, 62
mr          VIRT_THREAD_ID_REG, THREAD_ID_REG

#********* Determining core id relative to P10 chip  by using quad info **************
# bit 57:59 Quad Select within the P10 Chip

thread_restore:
extrdi      TEMP_REG1,       PIR_VAL_REG,    3, 57         # get quad bits
sldi        TEMP_REG1,       TEMP_REG1,       2            # quad id * 4 core chiplets per quad
add         CORE_ID_REG,     CORE_ID_REG,    TEMP_REG1     # P10 core id = 4 * quad id + index within Quad

#***************** find address where restore instructions are present **************

#found core id and thread id . Calculate offset associated with restore area

#Below is a representation of UV & HV register restore section layout
#************************************************************ core base address ( b )
#*********************************End of core interrupt region ********************** b
#                               Core 0 Thread 0 Self Restore
#------------------------------------------------------------------------------------ b + 512B
#                               Core 0 Thread 1 Self Restore
#------------------------------------------------------------------------------------ b + 1024B
#                               Core 0 Thread 2 Self Restore
#------------------------------------------------------------------------------------ b + 1536B
#                               Core 0 Thread 3 Self Restore
#------------------------------------------------------------------------------------ b + 2048B
#                               Core 0 Thread 0 Self Save
#------------------------------------------------------------------------------------ b + 2304B
#                               Core 0 Thread 1 Self Save
#------------------------------------------------------------------------------------ b + 2560B
#                               Core 0 Thread 2 Self Save
#------------------------------------------------------------------------------------ b + 2816B
#                               Core 0 Thread 3 Self Save
#------------------------------------------------------------------------------------ b + 3072B
#                               Core 0 Self Restore 256
#------------------------------------------------------------------------------------ b + 3584B
#                               Core 0 Self Save 128
#------------------------------------------------------------------------------------ b + 4096B
#                               Core 1 Thread 0 Self Restore
#------------------------------------------------------------------------------------ b + 4608B
#                               Core 1 Thread 1 Self Restore
#------------------------------------------------------------------------------------ b + 5120B
#                                        .
#                                        .
#                                        .
#                                        .
#                                        .
#                                        .
#------------------------------------------------------------------------------------

sldi    BASE_ADDR_REG,  CORE_ID_REG,    12                    # times 2K   = 2^12
addi    BASE_ADDR_REG,  BASE_ADDR_REG,  SECURE_THREAD_SPR_REGION_SIZE
add     BASE_ADDR_REG,  BASE_ADDR_REG,  RMOR_INIT_REG         # plus CPMR Base

calculate_thread_save_addr:                                   # 256 * thread id
sldi    THREAD_SELF_SAVE_BASE_ADDR,     THREAD_ID_REG, 8
add     THREAD_SELF_SAVE_BASE_ADDR,     THREAD_SELF_SAVE_BASE_ADDR, BASE_ADDR_REG
addi    THREAD_SELF_SAVE_BASE_ADDR,     THREAD_SELF_SAVE_BASE_ADDR, 2048

calculate_core_self_save_addr:
mr          CORE_SELF_SAVE_BASE_ADDR,       BASE_ADDR_REG
addi        CORE_SELF_SAVE_BASE_ADDR,       CORE_SELF_SAVE_BASE_ADDR, CORE_SELF_SAVE_OFFSET

calculate_self_restore_address:
mr          THREAD_SCOPE_RESTORE_ADDR_REG, BASE_ADDR_REG
sldi        TEMP_REG1,          THREAD_ID_REG,       9
add         THREAD_SCOPE_RESTORE_ADDR_REG,  THREAD_SCOPE_RESTORE_ADDR_REG, TEMP_REG1
addi        CORE_SCOPE_RESTORE_ADDR_REG,    BASE_ADDR_REG, CORE_SELF_RESTORE_OFFSET

##read register scratch0 for even core and scratch1 for odd core
mr          TEMP_REG1,   CORE_ID_REG
andi.       TEMP_REG1,   TEMP_REG1, 0x01
cmplwi      TEMP_REG1,   0x00
beq         set_scratch_reg0

set_scratch_reg1:
li          TEMP_REG1, CONFIG_CORE_SCRATCH_REG1
mtspr       SPRC,   TEMP_REG1
b           read_scratch_reg

set_scratch_reg0:
li          TEMP_REG1, CONFIG_CORE_SCRATCH_REG0
mtspr       SPRC,   TEMP_REG1

read_scratch_reg:
mfspr       THREAD_SCRATCH_VAL_REG,   SPRD
li          TEMP_REG2,   0x01
and         TEMP_REG1,   THREAD_SCRATCH_VAL_REG, TEMP_REG2
cmpwi       TEMP_REG1,   0x00
bne         find_self_save

#TODO RTC 257096 Enable conditional compile and DD-level specific image for self-save-restore image

thread_restore_base:
cmpwi       THREAD_ID_REG, 0     # if thread in question is 0 then handle workaround for HW534619
bne         restore_thread_spr

li          TEMP_REG2,   SIMICS_ENV_BIT_MASK
and         TEMP_REG1,   THREAD_SCRATCH_VAL_REG, TEMP_REG2
cmpwi       TEMP_REG1,   SIMICS_ENV_BIT_MASK
beq         restore_thread_spr   # if it is SIMICS, workaround for HW534619 is not necessary

#=====================================  HW534619 DD1 Workaround ========================================
# Only execute if on virtual thread 0 (fused = core 0, thread 0; normal, thread 0)
or.         VIRT_THREAD_ID_REG, VIRT_THREAD_ID_REG, VIRT_THREAD_ID_REG
bne         restore_thread_spr

work_around_HW534619:
li          TEMP_REG2,   0x05                 # r2 0b0101 for bit14:TB_ECLIPZ, bit16
sldi        TEMP_REG3,  TEMP_REG2,  47        # r3 0002 8000 0000 0000 0x5 << 47
lis         TEMP_REG2,   0x00ff               # r2 0000 00ff 0000 0000 MAX_CYC_BET_STEPS=ff at bit7
ori         TEMP_REG2,  TEMP_REG2, 0x0220     # r2 0000 00ff 0000 0220
mfspr       TEMP_REG1,  TFMR                  # r1 save trmr base
or          TEMP_REG3,  TEMP_REG1,  TEMP_REG3 # r3 0002 8000 0000 0000 overlay bit14/16
mtspr       TFMR,       TEMP_REG3             # bit 14 and 16 SET

#wait for bit 16 to be cleared by HW
wait_tfmr_bit16_clr:
mfspr       THREAD_SCRATCH_VAL_REG,   SPRD
extrdi.     TEMP_REG1,  THREAD_SCRATCH_VAL_REG, 1, TRIGGER_FFDC_COLLECTION
cmpwi       TEMP_REG1,  0x01
beq         collect_ffdc  #QME declared timeout, so collect FFDC

mfspr       TEMP_REG1,  TFMR
extrdi.     TEMP_REG3,  TEMP_REG1,  1,  16    # Check for bit 16 to be cleared by HW
cmpwi       TEMP_REG3,  0x01
beq         wait_tfmr_bit16_clr

#bit 16 has been cleared by hw. proceed with next step.

mfspr       TEMP_REG1,  TFMR
sldi        TEMP_REG2,  TEMP_REG2,  40        # 0000 0500 0000 0000
or          TEMP_REG3,  TEMP_REG1,  TEMP_REG2 # 0002 2000 0000 0000 bit14 18
mtspr       TFMR,       TEMP_REG3             # setting bit TFMR[0:7,14,18]

wait_tfmr:
mfspr       THREAD_SCRATCH_VAL_REG,   SPRD
extrdi.     TEMP_REG1,  THREAD_SCRATCH_VAL_REG, 1, TRIGGER_FFDC_COLLECTION
cmpwi       TEMP_REG1,  0x01
beq         collect_ffdc  #QME declared timeout, so collect FFDC

mfspr       TEMP_REG1,  TFMR
extrdi.     TEMP_REG2,  TEMP_REG1,  TFAC_TFMR_BUG_BIT_LEN,  TFAC_BUG_TFMR_BIT_POS_28
cmpwi       TEMP_REG2,  TFAC_TFMR_BUG_BIT_CONST
bne         wait_tfmr


#=====================================  HW534619 DD1 Workaround Ends ======================================

restore_thread_spr:
mtlr        THREAD_SCOPE_RESTORE_ADDR_REG
blrl                               ## branch to thread register restore area

# return here after thread register restoration
thread_restore_return:
cmpwi       THREAD_ID_REG, 0            # if thread in question is not 0, skip core shared reg restore
bne         restore_done                # else wait for other threads to be stopped again

wait_until_single_thread:
mfspr       THREAD_SCRATCH_VAL_REG,   SPRD
extrdi.     TEMP_REG1,  THREAD_SCRATCH_VAL_REG, 1, TRIGGER_FFDC_COLLECTION
cmpwi       TEMP_REG1,  0x01
beq         collect_ffdc                #QME declared timeout, so collect FFDC

#otherwise check if slave threads are done with self-restore
extrdi.     TEMP_REG1,    THREAD_SCRATCH_VAL_REG, 1, SCRATCH_SLV_THDS_COMPLETE_BIT    # Check Slave Thread STOP bit
cmpwi       TEMP_REG1,    1
bne         wait_until_single_thread    # wait until all threads are done restoring

mtlr        CORE_SCOPE_RESTORE_ADDR_REG
blrl                                    # branch to core shared register restore area


# return here after shared core register restoration
restore_done:                      # now all regs are restored except URMOR & MSR

# Use RFID to restore the requested MSR and, if thread0, to finally restore the URMOR
# before executing STOP again to indicate completion to QME.  Always override the given
# MSR value to remain in Big Endian and Secure Mode so we can complete the self restore
# (although override is really only needed for the case of non-secure HV-only Linux
# systems, since the Hypervisor cannot set the Secure bit and Linux will set LE)
# Note: SRESET on the eventual wakeup will properly configure the LE and S bits in the MSR

addi        TEMP_REG1,      0,  -2  # = 0xF...FFFE, create a mask excluding bit 63until
and.        MSR_INIT_REG,   MSR_INIT_REG, TEMP_REG1           # to clear LE bit
cmplwi      MSR_SECURITY_ENABLE_REG,    0
beq         initiate_hv_compatibility_mode                              # HV compatibility mode , SMCTRL[E] is 0b0

extrdi.     TEMP_REG2,      THREAD_SCRATCH_VAL_REG,  1,  SCRATCH_RUNTIME_MODE_BIT    # Check Run-Time Wakeup Mode
beq         initiate_urmor_restore

initiate_runtime_hv_wakeup:

#------------------------------------------------------------------------------------
# HW Bug Workaround: With MSR[S] bit ON, clearing SMFCTRL[E] bit leads to
# Checksttop. Clearing of SMFCTRL[E] is must for exit as HV. Inorder to
# accomplish it, following workaround has been implemented :
#   (1). Slave threads should not attempt to clear SMFCTRL[E]. Only master thread
#        should do that.
#   (2). Before clearing SMFCTRl[E], clear bit 41 in SPR HSRR1 and SRR1.
#------------------------------------------------------------------------------------
li          TEMP_REG1,      0
mfsrr1      TEMP_REG2
insrdi      TEMP_REG2,      TEMP_REG1,  1,  MSR_SECURITY_BIT
mtsrr1      TEMP_REG2
mfspr       TEMP_REG2,      HSRR1
insrdi      TEMP_REG2,      TEMP_REG1,  1,  MSR_SECURITY_BIT
mtspr       HSRR1,          TEMP_REG2
insrdi      MSR_INIT_REG,   TEMP_REG1,  1,  MSR_SECURITY_BIT

extrdi.     TEMP_REG2,      THREAD_SCRATCH_VAL_REG,  1,  HV_EXIT_WITH_SMF_ENABLE_BIT
beq         wakeup_hv_smf_enable_mode

wakeup_hv_smf_disable_mode:
#In this case HOMER is expected in regular unsecure region.

cmplwi      THREAD_ID_REG,  0
bne         ipl_stop_exit
insrdi      SMF_VAL_REG,    TEMP_REG1,  1,  SMFCTRL_ENABLE_BIT
mtspr       SMFCTRL,        SMF_VAL_REG #SMFCTRL[E] is cleared by only master thread
b ipl_stop_exit

wakeup_hv_smf_enable_mode:
mfspr       TEMP_REG2,  URMOR  #Check if  Un-Secure HOMER location
extrdi.     TEMP_REG1,  TEMP_REG2, 1, SECURE_ADDR_BIT
cmplwi      TEMP_REG1,  0
beq         ipl_stop_exit

runtime_stop_exit:
mfspr       TEMP_REG2,  HRMOR  #Get Un-Secure HOMER location
ori         TEMP_REG2,  TEMP_REG2,  0x200 #Exit Routine Offset
mtspr       HRMOR,      TEMP_REG2
b hrmor_restore_hv

#In an SMF enabled system, for compatbility reasons, during IPL HOMER is built in regular memory
#and gets moved to secure memory later during HOMER rebuild pahse. However, in istep 16 cores exits STOP
#in UV mode. Code below support HV exit just in case it is useful.

ipl_stop_exit:
addi        TEMP_REG2, RMOR_INIT_REG, HRMOR_RESTORE_OFFSET

hrmor_restore_hv:

cmplwi      THREAD_ID_REG,  0
beq         update_usrrx
addi        TEMP_REG2,      TEMP_REG2, OFFSET_SMF_EN_SLAVE_THREADS  # branch where slave threads STOPs

update_usrrx:
mtspr       USRR0,     TEMP_REG2
mtspr       USRR1,     MSR_INIT_REG
mtspr       SRR1,      MSR_INIT_REG

#------------------------------ Trampoline Sequence Start -------------------------------

exit_to_thread_stop:
isync
.long urfid
#------------------------------ Trampoline Sequence End ----------------------------------
.long ATTN


initiate_hv_compatibility_mode:

addi        TEMP_REG1,      RMOR_INIT_REG,  HRMOR_RESTORE_OFFSET
cmplwi      THREAD_ID_REG,  0
beq         update_srrx
addi        TEMP_REG1,      TEMP_REG1, SKIP_HRMOR_UPDATE_OFFSET # restore HRMOR only if thread0

update_srrx:
mtsrr0      TEMP_REG1
mtsrr1      MSR_INIT_REG
rfid
.long ATTN

initiate_urmor_restore:
addi        TEMP_REG1,      RMOR_INIT_REG,  URMOR_RESTORE_OFFSET
cmplwi      THREAD_ID_REG,  0
beq         update_uv_exit
addi        TEMP_REG1,      TEMP_REG1,      SKIP_URMOR_UPDATE_OFFSET # restore URMOR only if thread0

update_uv_exit:
mtspr       USRR0,          TEMP_REG1
mtspr       USRR1,          MSR_INIT_REG
.long       urfid
.long       ATTN


# THREAD_LAUNCHER_SIZE_OFFSET must be >= (4 * number of instructions between
# here and thread_launcher_start)

find_self_save:
addi        SELF_RESTORE_ADDR_REG,      THREAD_SCOPE_RESTORE_ADDR_REG, 8
mtlr        THREAD_SELF_SAVE_BASE_ADDR
blrl
cmpwi       THREAD_ID_REG,  0               # if thread in question is 0, also, save core SPRs
bne         save_restore_done               # else saving of SPRs is done

wait_slave_thd_entry_complete:
#wait until all the slave threads are DONE with self-save
mfspr       THREAD_SCRATCH_VAL_REG,   SPRD
extrdi.     TEMP_REG1,  THREAD_SCRATCH_VAL_REG, 1, TRIGGER_FFDC_COLLECTION
cmpwi       TEMP_REG1,  0x01
beq         collect_ffdc  #QME declared timeout, so collect FFDC

#otherwise check if slave threads are done with self-save
extrdi.     TEMP_REG1,    THREAD_SCRATCH_VAL_REG, 1, SCRATCH_SLV_THDS_COMPLETE_BIT    # Check Slave Thread STOP bit
cmpwi       TEMP_REG1,    1
bne         wait_slave_thd_entry_complete

save_core_spr:
# 8B  for mflr r30
# 32B for skipping HRMOR restore entry
# Self save should start at an offset 8B + 32B = 40B
addi        SELF_RESTORE_ADDR_REG,  CORE_SCOPE_RESTORE_ADDR_REG, 40
mtlr        CORE_SELF_SAVE_BASE_ADDR
blrl

b           save_restore_done

#-------------------- Self Save Routine --------------------------------

## This is a common routine which can edit SPR restore entry for an SPR
## of scope core or thread. It basically edits parts of the SPR restore
## entry which contains the data to which given SPR needs to be restored.

.org _start + SPR_SAVE_ROUTINE_OFFSET

li          SPR_SAVE_SCRATCH_REG,   0x0278
oris        SPR_SAVE_SCRATCH_REG,   SPR_SAVE_SCRATCH_REG,   0x7c00
stw         SPR_SAVE_SCRATCH_REG,   -4 (SELF_RESTORE_ADDR_REG)
extrdi      SPR_SAVE_SCRATCH_REG,   SPR_DATA_REG,   16, 0
oris        SPR_SAVE_SCRATCH_REG,   SPR_SAVE_SCRATCH_REG, 0x6400
sthu        SPR_SAVE_SCRATCH_REG,   2( SELF_RESTORE_ADDR_REG )
extrdi      SPR_SAVE_SCRATCH_REG,   SPR_DATA_REG,   16, 16
sthu        SPR_SAVE_SCRATCH_REG,   4( SELF_RESTORE_ADDR_REG )
extrdi      SPR_SAVE_SCRATCH_REG,   SPR_DATA_REG,   16, 32
sthu        SPR_SAVE_SCRATCH_REG,   8( SELF_RESTORE_ADDR_REG )
extrdi      SPR_SAVE_SCRATCH_REG,   SPR_DATA_REG ,  16, 48
sthu        SPR_SAVE_SCRATCH_REG,   4( SELF_RESTORE_ADDR_REG )
addi        SELF_RESTORE_ADDR_REG,  SELF_RESTORE_ADDR_REG, 14
blr

#--------------------------------- End Thread Launcher ---------------
