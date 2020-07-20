# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/imageProcs/qme_common.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2017,2020
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
ifdef IMAGE


# common cme compile directives
IMAGE_EDITOR=qmeImgEdit.exe

# set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

# PPE_TYPE is standard for QME
_PPE_TYPE=standard

######################################################
# IOTA and PPE kernel base/bolton objects
######################################################

$(IMAGE)_LINK_SCRIPT=link.ld
#$(IMAGE)_LINK_SCRIPT=../../../common/ppe/iota/test/link.ld

# system objects in ppe/kernel directories below
# iota objects
QME_OBJS := iota_ppe42.o
QME_OBJS += iota_ppe42_vectors.o
QME_OBJS += iota.o
QME_OBJS += iota_debug_ptrs.o
# ppe kernel base objects
QME_OBJS += eabi.o
QME_OBJS += div32.o
QME_OBJS += ppe42_math.o
QME_OBJS += ppe42_gcc.o
QME_OBJS += ppe42_string.o
# ppe kernel bolton objects
QME_OBJS += std_init.o
# component objects at $(QME_SCRDIR)
QME_OBJS += iota_uih_priority_table.o
QME_OBJS += iota_unified_irq_handler.o
QME_OBJS += errl.o

REGFILES_DIR=$(PMLIB_INCDIR)/registers

# Add source code directories for the above objects
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(IOTA_SRCDIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(BASELIB_SRCDIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(BOLTONLIB_SRCDIR)/$(_PPE_TYPE))

# Add include paths
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(REGFILES_DIR))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(IOTA_SRCDIR)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(BASELIB_SRCDIR))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(BOLTONLIB_SRCDIR)/$(_PPE_TYPE))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(POWMANLIB_SRCDIR))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(IMAGE_PROCS_INCDIR)) 

##############################
# PPE TRACE
##############################
include $(PPETRACE_SRCDIR)/pktracefiles.mk
QME_OBJS += $(PKTRACE_OBJECTS)
PKTRACE_OBJECTS:=

$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPETRACE_SRCDIR))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(PPETRACE_SRCDIR))

##############################
# QME HWPF
##############################
# note srcdir is searched before incdir
include $(PPE_HWPF_SRCDIR)/fapi2ppeplatfiles.mk
QME_OBJS += $(FAPI2PLATLIB_OBJECTS)
FAPI2PLATLIB_OBJECTS=
FAPI2PLAT-CPP-SOURCES=

# VERY IMPORTANT: Add genfiles path before adding hwpf path
# Be aware that if there are multiple files with the same name, 
# the include path order below will determine which file 
# will be included if a file is firstly found on next path in line.
#
# Then other files with the same name in the following paths will
# be ignored. This is very important with fapi2 and platform files
# and they should always go with this order in the include paths 
# GENFILES, PLATFILES, FAPI2FILES  
#
# Do NOT solve this problem by changing the file name
# as certain base file is automatically modified by the tool
# to generate the real include file in the genfile path,
# thus the path is placed before other pathes to avoid
# base file being included without expected content
GENFILES_DIR=$(OUTPUTPATH)/gen/qme/
RING_INCDIR=$(ROOTPATH)/chips/p10/utils/imageProcs/

$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(GENFILES_DIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_HWPF_SRCDIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HWP_SCAN_DIR))

$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(GENFILES_DIR))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(PPE_HWPF_INCDIR)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(FAPI2_INC)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(PPE_STDLIB_INCDIR)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(HWP_SCAN_DIR))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(RING_INCDIR))

##################################
# PPE Shared Objects
##################################
include $(PPE_SHARED_LIBDIR)/hcodelibfiles.mk
###QME_OBJS+= $(PPE_SHARED_OBJECTS) ## fails rhel7 op-build
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(PPE_SHARED_LIBDIR)) 
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SHARED_LIBDIR)) 

####################################
# QME Objects
####################################
# It's important that the final included *.mk is in the $(QME_SCRDIR)
include $(QME_SRCDIR)/qme_files.mk
QME_OBJS+=$(QME_OBJECTS)
QME_OBJECTS:=

####################################
# HWP Objects
####################################
# HWP_OBJECTS in qme_files.mk above
QME_OBJS+=$(HWP_OBJECTS)
HWP_OBJECTS:=

HWP_INIT_DIR=$(ROOTPATH)/chips/p10/procedures/hwp/initfiles/
HWP_NEST_DIR=$(ROOTPATH)/chips/p10/procedures/hwp/nest/
HWP_PERV_DIR=$(ROOTPATH)/chips/p10/procedures/hwp/perv/

$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HWP_COMMON_LIBDIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HWP_CORECACHE_DIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HWP_INIT_DIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HWP_NEST_DIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HWP_PERV_DIR))

$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(HWP_ADDRESS_INCDIR)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(HWP_COMMON_LIBDIR)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(HWP_CORECACHE_DIR)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(HWP_INIT_DIR))
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(HWP_NEST_DIR)) 
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(HWP_PERV_DIR)) 


####################################
# Build Processors
####################################

#Note:
#These need to be done before the build flags below
$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})

GIT_HEAD := $(ROOTPATH)/../tools/build/head_commit.txt
GIT_HEAD_HASH := $(shell git log -n1 --pretty=format:%b | egrep Change-Id | head -1 \
        | cut -f2 -d' ' | cut -c2-6)
ifeq ($(GIT_HEAD_HASH),)
	GIT_HEAD_HASH := $(shell cat ${GIT_HEAD} | grep Change-Id: | cut -c11-)
endif

####################################
# Build Flags
####################################
 
# Note:
# Don't build up COMMONFLAGS based on other local variables.
# The local variables won't be be available/assigned at the time
# they are resolved to build the COMMONFLAGS
QME_COMMONFLAGS:=

# Common to both __PK__ and __IOTA__
$(IMAGE)_COMMONFLAGS+= -D__PPE_PLAT
$(IMAGE)_COMMONFLAGS+= -D__PPE_QME
$(IMAGE)_COMMONFLAGS+= -D__PPE__

# Kernel 
$(IMAGE)_COMMONFLAGS+= -D__IOTA__
$(IMAGE)_COMMONFLAGS+= -DUSE_APP_CFG_H=1
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DPK_TIMER_SUPPORT=0

#QME Inits 
# the following functions are always enabled once working
# (unless earlier DD level condition undef them below
$(IMAGE)_COMMONFLAGS+= -DCURRENT_GIT_HEAD=0x$(GIT_HEAD_HASH)
$(IMAGE)_COMMONFLAGS+= -DUSE_PPE_IMPRECISE_MODE
$(IMAGE)_COMMONFLAGS+= -DUSE_QME_QUEUED_SCAN
#$(IMAGE)_COMMONFLAGS+= -DUSE_QME_QUEUED_SCOM
#$(IMAGE)_COMMONFLAGS+= -DQME_EDGE_TRIGGER_INTERRUPT

#VBU Workaround
#$(IMAGE)_COMMONFLAGS+= -DEQ_CLOCK_STAT_DISABLE
#$(IMAGE)_COMMONFLAGS+= -DEQ_SKEW_ADJUST_DISABLE
#$(IMAGE)_COMMONFLAGS+= -DPFET_SENSE_POLL_DISABLE

#EPM Workaround
$(IMAGE)_COMMONFLAGS+= -DHCD_QME_SKIP_BCE_SCOM
#$(IMAGE)_COMMONFLAGS+= -DPOWER_LOSS_DISABLE # MMA

# Options for Functions being skipped
#$(IMAGE)_COMMONFLAGS+= -DP10_HCD_CORECACHE_SKIP_INITF
#$(IMAGE)_COMMONFLAGS+= -DP10_HCD_CORECACHE_SKIP_ARRAY
#$(IMAGE)_COMMONFLAGS+= -DP10_HCD_CORECACHE_SKIP_FLUSH

# Options for FAPI2
$(IMAGE)_COMMONFLAGS+= -DFAPI2_NO_FFDC=1
#$(IMAGE)_COMMONFLAGS+= -DMINIMUM_FFDC=1
$(IMAGE)_COMMONFLAGS+= -DPLAT_NO_THREAD_LOCAL_STORAGE=1

#Compiler
$($(IMAGE)_TARGET)_CXXFLAGS += -Wno-unused-label

#Linker
$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic

## end ifdef IMAGE
endif

