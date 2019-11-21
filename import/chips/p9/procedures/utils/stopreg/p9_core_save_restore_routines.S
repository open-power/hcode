# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/utils/stopreg/p9_core_save_restore_routines.S $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2015,2020
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
                .set HMER,                          336
                .set URMOR,                         505 # Ultravisor
                .set USRR0,                         506
                .set USRR1,                         507
                .set SMFCTRL,                       511 # Ultravisor
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

                .set STOP,                          0x4C0002E4
                .set ATTN,                          0x00000200
                .set urfid,                         0x4C000264
                .set SECURE_MODE_CONST,             0x0040  # bit 41, note: must be shifted left 16 bits
                .set MACHINE_CHECK_ENABLE_CONST,    0x1000  # bit 51
                .set ERR_CODE_SMF_E_NOT_SET,        0x0001  # Core is SMF capable but SMF[E] not SET
                .set ERR_CODE_SMF_BAD_B62_63_CFG,   0x0002  # Core is not configured to exit UV mode
                .set SMFCTRL_ENABLE_BIT,            0
                .set MSR_SECURITY_BIT,              41
                .set SCRATCH_RUNTIME_MODE_BIT,      59
                .set HV_EXIT_WITH_SMF_ENABLE_BIT,   58  #0 : HV exit with SMFCTRL[E] bit SET to 0b01
                                                        #1 : HV exit with SMFCTRL[E] bit SET to 0b00

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
                .set HILE_BIT_POS,                  4
                .set LE_BIT_POS,                    63
                .set MF_HRMOR_R1,                   0xa64a397c
                .set CLEAR_MSR_LE,                  0xa407b57a
                .set MT_SRR1,                       0xa603bb7e
                .set ADDI_R1_32,                    0x20012138
                .set MT_SRR0_R1,                    0xa6033a7c
                .set RFID,                          0x2400004c
                .set TRAP_LE,                       0x0800e07f
                .set MFMSR_R21,                     0xa600a07e
                .set OFFSET_SMF_EN_SLAVE_THREADS,   0x04
                .set SECURE_ADDR_BIT,               0x0f


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
                .set RMOR_INIT_REG,                 r20
                .set MSR_INIT_REG,                  r21
                .set MSR_SECURITY_ENABLE_REG,       r23
                .set TEST_REG,                      r24
                .set SELF_REST_ERR_REG,             r25
                .set SELF_REST_VER_REG,             r26
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
#  0x20                     CME Hcode Offset       | CME Hcode Length
#-------------------------------------------------------------------------------
#  0x28                     CME Common Rings       | CME Common Rings Section
#                           Section Offset         | Length
#-------------------------------------------------------------------------------
#  0x30                     CME Quad Pstate Region | CME Quad Pstate Region
#                           Offset                   Length
#-------------------------------------------------------------------------------
# 0x38-0xF8                          Reserved( Filled with ATTN instructions )
#-------------------------------------------------------------------------------#
_start:

#--------------------------------------------------------------------#

#SRESET handler routine
#In wakeup and STOP  path, CME generates reset signal for P9 CORE. It generates
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
beq         uv_init_error                          # Core is initialization is not consistent

li          TEMP_REG2,      ERR_CODE_SMF_BAD_B62_63_CFG
extrdi      TEMP_REG1,      SMF_VAL_REG, 2, 62
cmpwi       TEMP_REG1,      0x02
beq         uv_core_init

uv_init_error:

#Put error code in a specific GPR
#SPATTN to halt as the inits and the mode are not consistent

mr SELF_REST_ERR_REG, TEMP_REG2
.long       ATTN                                        # Error out and block self restore completion

hv_core_init:
mfspr       RMOR_INIT_REG,   HRMOR                      # Get Stop_HRMOR (placed by CME)
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
.long ATTN

#--------------------------------------------------------------------#
#       Data Storage
#--------------------------------------------------------------------#
.org _start + 0x0300
.long ATTN

#--------------------------------------------------------------------#
#       Data Segment
#--------------------------------------------------------------------#
.org _start + 0x0380
.long ATTN

#--------------------------------------------------------------------#
#       Instruction Storage
#--------------------------------------------------------------------#
.org _start + 0x0400
.long ATTN

#--------------------------------------------------------------------#
#       Instruction Segment
#--------------------------------------------------------------------#
.org _start + 0x0480
.long ATTN

#--------------------------------------------------------------------#
#       External
#--------------------------------------------------------------------#
.org _start + 0x0500
.long ATTN

#--------------------------------------------------------------------#
#       Alignment
#--------------------------------------------------------------------#
.org _start + 0x0600
.long ATTN

#--------------------------------------------------------------------#
#       Program
#--------------------------------------------------------------------#
.org _start + 0x0700
.long ATTN

#--------------------------------------------------------------------#
#       Floating Point Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0800
.long ATTN

#--------------------------------------------------------------------#
#       Decrementer
#--------------------------------------------------------------------#
.org _start + 0x0900
.long ATTN

#--------------------------------------------------------------------#
#       Ultravisor Decrementer
#--------------------------------------------------------------------#
.org _start + 0x0980
.long ATTN

#--------------------------------------------------------------------#
#       Directed Priviledged Doorbell
#--------------------------------------------------------------------#
.org _start + 0x0A00
.long ATTN

#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0B00
.long ATTN

#--------------------------------------------------------------------#
#       System Call
#--------------------------------------------------------------------#
.org _start + 0x0C00
b _sreset_hndlr

#--------------------------------------------------------------------#
#       Trace
#--------------------------------------------------------------------#
.org _start + 0x0D00
.long ATTN

#--------------------------------------------------------------------#
#       Ultravisor Data Storage
#--------------------------------------------------------------------#
.org _start + 0x0E00
.long ATTN

#--------------------------------------------------------------------#
#       Ultravisor Instruction Storage
#--------------------------------------------------------------------#
.org _start + 0x0E20
.long ATTN

#--------------------------------------------------------------------#
#       Ultravisor Emulation Assistance
#--------------------------------------------------------------------#
.org _start + 0x0E40
.long ATTN

#--------------------------------------------------------------------#
#       Ultravisor Maintenance
#--------------------------------------------------------------------#
.org _start + 0x0E60
.long ATTN

#--------------------------------------------------------------------#
#       Directed Ultravisor Doorbell
#--------------------------------------------------------------------#
.org _start + 0x0E80
.long ATTN

#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0EA0
.long ATTN

#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0EC0
.long ATTN

#--------------------------------------------------------------------#
#       Reserved
#--------------------------------------------------------------------#
.org _start + 0x0EE0
.long ATTN

#--------------------------------------------------------------------#
#       Performance Monitoring
#--------------------------------------------------------------------#
.org _start + 0x0F00
.long ATTN

#--------------------------------------------------------------------#
#       Vector Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F20
.long ATTN

#--------------------------------------------------------------------#
#       VSX Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F40
.long ATTN

#--------------------------------------------------------------------#
#       Facility Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F60
.long ATTN

#--------------------------------------------------------------------#
#       Ultravisor Facility Unavailable
#--------------------------------------------------------------------#
.org _start + 0x0F80
.long ATTN


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
#
# common code for thread restoration
#
#---------------------------------------------------------------------

.org _start + THREAD_LAUNCHER_START_OFFSET

thread_launcher_start:
mfspr PIR_VAL_REG, PIR       #Processor Identification Register
#Select to read the Thread State Status register in PC using SPRC & SPRD
li          TEMP_REG1,          CORE_THREAD_STATE_REG_ID
mtspr       SPRC,               TEMP_REG1
mfspr       FUSED_STATUS_REG,   SPRD
extrdi.     FUSED_STATUS_REG,   FUSED_STATUS_REG, 1, 63
beq         core_is_not_fused

core_is_fused:
#core is fused. Find physical core number from PIR bits.
#Bit 60:        Fuse Core Select within the Quad
#Bit 61:62      Thread select within a core chiplet
#Bit 63         chip select within the fused core

#Multiply the fused core select bit (bit 60) by 2 since there are two core chiplets in
#a pair forming the fused core. Bit 63 selects even or odd core within the pair.
#Physical core id = 2 * (bit 60) + (bit 63)

extrdi      CORE_ID_REG,    PIR_VAL_REG,  1, 60
sldi        CORE_ID_REG,    CORE_ID_REG,  1
extrdi      TEMP_REG1,      PIR_VAL_REG,  1, 63
add         CORE_ID_REG,    CORE_ID_REG,  TEMP_REG1

# thread id = 2 * (bit 61 ) + bit 62
extrdi THREAD_ID_REG, PIR_VAL_REG, 2, 61
b thread_restore

core_is_not_fused:
#core is not fused. Find relative id within Quad
#bit 60:61 core chiplet select within a Quad.
#bit 62:63 thread select within a core chiplet.

extrdi      CORE_ID_REG,    PIR_VAL_REG,    2, 60
extrdi      THREAD_ID_REG,  PIR_VAL_REG,    2, 62

#********* Determining core id relative to P9 chip  by using quad info **************
# bit 57:59 Quad Select within the P9 Chip

thread_restore:
extrdi      TEMP_REG1,       PIR_VAL_REG,    3, 57         # get quad bits
sldi        TEMP_REG1,       TEMP_REG1,       2            # quad id * 4 core chiplets per quad
add         CORE_ID_REG,     CORE_ID_REG,    TEMP_REG1     # P9 core id = 4 * quad id + index within Quad

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

thread_restore_base:
li          TEMP_REG1,   CORE_THREAD_STATE_REG_ID
mtspr       SPRC,        TEMP_REG1
mtlr        THREAD_SCOPE_RESTORE_ADDR_REG
blrl                               ## branch to thread register restore area

# return here after thread register restoration
thread_restore_return:
cmpwi       THREAD_ID_REG, 0            # if thread in question is not 0, skip core shared reg restore
bne         restore_done                # else wait for other threads to be stopped again


wait_until_single_thread:
mfspr       TEMP_REG1,    SPRD
extrdi      TEMP_REG1,    TEMP_REG1,    4, 56
cmpwi       TEMP_REG1,    OTHER_THREADS_STOPPED
bne         wait_until_single_thread       # wait until all threads are done restoring

mtlr        CORE_SCOPE_RESTORE_ADDR_REG
blrl                               # branch to core shared register restore area


# return here after shared core register restoration
restore_done:                      # now all regs are restored except URMOR & MSR

# Use RFID to restore the requested MSR and, if thread0, to finally restore the URMOR
# before executing STOP again to indicate completion to CME.  Always override the given
# MSR value to remain in Big Endian and Secure Mode so we can complete the self restore
# (although override is really only needed for the case of non-secure HV-only Linux
# systems, since the Hypervisor cannot set the Secure bit and Linux will set LE)
# Note: SRESET on the eventual wakeup will properly configure the LE and S bits in the MSR

addi        TEMP_REG1,      0,  -2  # = 0xF...FFFE, create a mask excluding bit 63
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
insrdi      SMF_VAL_REG,    TEMP_REG1,  1,  SMFCTRL_ENABLE_BIT
mtspr       SMFCTRL,        SMF_VAL_REG #SMFCTRL[E] is cleared

#In this case HOMER is expected in regular unsecure region.
li          TEMP_REG2,      HRMOR_RESTORE_OFFSET
cmplwi      THREAD_ID_REG,  0
bne         update_usrrx
addi        TEMP_REG2,      TEMP_REG2, SKIP_HRMOR_UPDATE_OFFSET  # branch where slave threads STOPs
b update_usrrx

wakeup_hv_smf_enable_mode:
mfspr       TEMP_REG2,  URMOR  #Check if  Un-Secure HOMER location
extrdi.     TEMP_REG1, TEMP_REG2, 1, SECURE_ADDR_BIT
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
li           TEMP_REG2, HRMOR_RESTORE_OFFSET

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
