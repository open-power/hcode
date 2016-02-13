# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/utils/stopreg/p9_core_restore_routines.S $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2015,2017
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
                .set HID0,                          1008
                .set PIR,                           1023

#--------------------SPR definition ends---------------------------------------

#--------------------constants begin ------------------------------------------

                .set ONE_KB,                                1024
                .set THREAD_LAUNCHER_SIZE_OFFSET,           256
                .set OTHER_THREADS_STOPPED,                 0x07
                .set CORE_THREAD_STATE_REG_ID_CONST,        0x0001E0

                 #offset wrt to start of HOMER at which thread launcher code
                 #is located.
                .set THREAD_LAUNCHER_START_OFFSET,      0x2000
                .set MACHINE_CHECK_ENABLE_CONST,        0x1000
                .set CORE_RESTORE_OFFSET,           THREAD_LAUNCHER_START_OFFSET + THREAD_LAUNCHER_SIZE_OFFSET
                .set PIR_VAL_REG,                   r2
                .set CPMR_BASE_REG,                 r3
                .set FUSED_STATUS_REG,              r4
                .set CORE_ID_REG,                   r5
                .set THREAD_ID_REG,                 r6
                .set CORE_RESTORE_BASE_ADDR_REG,    r7
                .set TEMP_REG,                      r8
                .set HRMOR_REST_REG,                r9
                .set FUSED_MODE_CONST,              0xBB #Chose this flag to be an arbitrary unique value
                .set NEXT_INST_ADDRESS_REG,         r10
                .set THREAD_ACTIVE_STATE_REG,       r11
                .set CORE_SCOPE_RESTORE_ADDR_REG,               r12
                .set STOP,                          0x4C0002E4
                .set ATTN,                          0x00000200
#--------------------------------------------------------------------#
#
#                   Interrupt Vectors
#
#-----------------------------------------------------------------------#
                .set SRESET,                        0x00000100


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
#In wakeup path CME generates reset signal for P9 CORE. It generates SRESET
#interrupt for all threads of the core. Routine below loads status register SRR0
#with the start addresses of common thread launcher routine. Bit position
#associated with Machine Check is set in status register SRR1. Execution of
#Return from interrupt double word(RFID) copies SRR1 to MSR and address in
#SRR0 becomes next instruction to be executed.

.org _start + SRESET

_sreset_hndlr:
mfspr r2, HRMOR
addi  r2, r2, THREAD_LAUNCHER_START_OFFSET
mtsrr0 r2
mfmsr r2
ori r2, r2, MACHINE_CHECK_ENABLE_CONST
mtsrr1 r2
rfid

#--------------------------------------------------------------------#

#Error handling for other interrupt vectors.

.org _start + 0x0180
.long ATTN

.org _start + 0x0200
.long ATTN

.org _start + 0x0280
.long ATTN

.org _start + 0x0300
.long ATTN

.org _start + 0x0380
.long ATTN

.org _start + 0x0400
.long ATTN

.org _start + 0x0480
.long ATTN

.org _start + 0x0500
.long ATTN

.org _start + 0x0580
.long ATTN

.org _start + 0x0600
.long ATTN

.org _start + 0x0680
.long ATTN

.org _start + 0x0700
.long ATTN

.org _start + 0x0780
.long ATTN

.org _start + 0x0800
.long ATTN

.org _start + 0x0880
.long ATTN
.org _start + 0x0900
.long ATTN

.long _start + 0x0980
.long ATTN

#-----------------------------------------------------------------------------
#
# common code for thread restoration
#
#----------------------------------------------------------------------------

.org _start + THREAD_LAUNCHER_START_OFFSET

thread_launcher_start:

mfspr PIR_VAL_REG, PIR       #Processor Identification Register
mfspr CPMR_BASE_REG, HRMOR
lbz FUSED_STATUS_REG, 31(CPMR_BASE_REG)
cmpwi FUSED_STATUS_REG, FUSED_MODE_CONST
bne core_is_not_fused

core_is_fused:
#core is fused. Find physical core number from PIR bits.
#Bit 60:        Fuse Core Select within the Quad
#Bit 61:62      Thread select within a core chiplet
#Bit 63         chip select within the fused core

#Multiply the fused core select bit (bit 60) by 2 since there are two core chiplets in
#a pair forming the fused core. Bit 63 selects even or odd core within the pair.
#Physical core id = 2 * (bit 60) + (bit 63)

extrdi CORE_ID_REG, PIR_VAL_REG, 1, 60
sldi CORE_ID_REG, CORE_ID_REG,  1
extrdi TEMP_REG, PIR_VAL_REG, 1, 63
add CORE_ID_REG, CORE_ID_REG, TEMP_REG

# thread id = 2 * (bit 61 ) + bit 62
extrdi THREAD_ID_REG, PIR_VAL_REG, 2, 61
b jump_thread_restore

core_is_not_fused:
#core is not fused. Find relative id within Quad
#bit 60:61 core chiplet select within a Quad.
#bit 62:63 thread select within a core chiplet.

extrdi CORE_ID_REG, PIR_VAL_REG, 2, 60
extrdi THREAD_ID_REG, PIR_VAL_REG, 2, 62

#*********Determining core id relative to P9 chip  by using quad info*********
# bit 57:59 Quad Select within the P9 Chip

jump_thread_restore:
extrdi TEMP_REG, PIR_VAL_REG, 3, 57 # get quad bits
sldi TEMP_REG, TEMP_REG, 2          # quad id * 4 core chiplets per quad
add CORE_ID_REG, CORE_ID_REG, TEMP_REG # P9 core id = 4 * quad id + index within Quad

#************* find address where restore instructions are present**********

#found core id and thread id . Calculate offset associated with restore area

#Below is  a representation of HV register restore section layout
#***************************************************************** core base address (B)
#   Core X thread0 restore area
#---------------------------------------------------------( B + 1 K)
#   Core X register restore area
#------------------------------------------------------------------------- (B +  2K)
#   Core X thread1 restore area
#----------------------------------------------------------( B + 3K )
#   ------unpopulated------
#-------------------------------------------------------------------------( B + 4K )
#   Core X thread2 restore area
#-----------------------------------------------------------( B +5 K )
#   ------unpopulated------
#-------------------------------------------------------------------------( B + 6 K )
#   Core X thread3 restore area
#-----------------------------------------------------------( B + 7K )
#   ------unpopulated------
#--------------------------------------------------------------------------( B + 8K )

sldi CORE_RESTORE_BASE_ADDR_REG, CORE_ID_REG, 13
add CORE_RESTORE_BASE_ADDR_REG, CORE_RESTORE_BASE_ADDR_REG, CPMR_BASE_REG
addi CORE_RESTORE_BASE_ADDR_REG, CORE_RESTORE_BASE_ADDR_REG, CORE_RESTORE_OFFSET
sldi TEMP_REG, THREAD_ID_REG, 11
add TEMP_REG, CORE_RESTORE_BASE_ADDR_REG, TEMP_REG   # got thread reg restore address
addi CORE_SCOPE_RESTORE_ADDR_REG, TEMP_REG, ONE_KB   # got core register restore address.
                                                     # It is used by thread0 only.

mtlr TEMP_REG                                 #start address of thread restore area
blrl                                          #branch to thread register restore area

#return here after thread register restoration
thread_restore_return:
cmpwi THREAD_ID_REG, 0                        # is it thread 0
bne enter_stop_state                          # if thread not in STOP 15
li TEMP_REG, CORE_THREAD_STATE_REG_ID_CONST   # thread 0 has more to do

#Select to read the Thread State Status register in PC using SPRC & SPRD
mtspr SPRC, TEMP_REG

wait_until_single_thread:          # wait till all threads are done restoring
mfspr TEMP_REG, SPRD
extrdi TEMP_REG, TEMP_REG, 4,56
cmpwi TEMP_REG, OTHER_THREADS_STOPPED
bne wait_until_single_thread

#**************** all threads restored thread scope register *****************

mtlr CORE_SCOPE_RESTORE_ADDR_REG
blrl                                # branch to core register restore area

#********************************* enter STOP State **************************
# following pseudo-op aligns next opcode to 2^4 = 16B boundary. Each opcode
# takes 4B. So, next four opcodes will always start at 16B boundary and
# also never cross 128B cache line.

.align 4

core_reg_restore_return:        #so far core reg restored except HRMOR
mtspr HRMOR, HRMOR_REST_REG

enter_stop_state:

#necessary to invalidate stale translations in the ERATs that were created
#during the self-restore code execution.
slbia
.long STOP
.long ATTN

# THREAD_LAUNCHER_SIZE_OFFSET must be >= (4 * number of instructions between
# here and thread_launcher_start)

#***************************** finished entered STOP State **************

#********************************* End Thread Launcher **********************
