# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/cme/cme_common.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2017
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
IMAGE_EDITOR=cmeImgEdit.exe

## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

## PPE_TYPE is std for CME
_PPE_TYPE=std

ifeq "__IOTA__" "$($(IMAGE)_KERNEL)"
######################################################
# IOTA and carefully picked PK objects
######################################################
IOTA_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/iota

$(IMAGE)_LINK_SCRIPT=../../ppe/iota/link.ld

CME_OBJS:= iota_ppe42.o
CME_OBJS += iota_ppe42_vectors.o
CME_OBJS += iota_uih.o
CME_OBJS += iota.o
CME_OBJS += iota_debug_ptrs.o
CME_OBJS += eabi.o
CME_OBJS += math.o
CME_OBJS += div32.o
CME_OBJS += ppe42_gcc.o
CME_OBJS += ppe42_string.o
CME_OBJS += p9_cme_iota_main.o
CME_OBJS += std_init.o

# Add source code directories for the above objects
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(IOTA_SRCDIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/ppe42)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/$(_PPE_TYPE))

else
#  __PK__
$(IMAGE)_LINK_SCRIPT=link.cmd
################################
# PK KERNEL
################################
include $(PK_SRCDIR)/kernel/pkkernelfiles.mk
CME_OBJS := $(PK_OBJECTS)
CME_OBJS += $(PK_TIMER_OBJECTS)
CME_OBJS += $(PK_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/kernel)

###################################
# PK PPE42
###################################
include $(PK_SRCDIR)/ppe42/pkppe42files.mk
CME_OBJS += $(PPE42_OBJECTS)
CME_OBJS += $(PPE42_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/ppe42)

###############################
# PK PPE_TYPE
###############################
include $(PK_SRCDIR)/$(_PPE_TYPE)/pk$(_PPE_TYPE)files.mk
CME_OBJS += $(STD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/$(_PPE_TYPE))

endif

$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic

##############################
# PK TRACE
##############################
include $(PK_SRCDIR)/trace/pktracefiles.mk
CME_OBJS += $(PKTRACE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/trace)
PKTRACE_OBJECTS:=

#include $(PM_LIBDIR)/common/libcommonfiles.mk
#CME_OBJS += $(LIBCOMMON_OBJECTS)
#$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PM_LIBDIR)/common)

##################################
# HCODE LIB
##################################
include $(HCODE_LIBDIR)/hcodelibfiles.mk
CME_OBJS += $(HCODE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HCODE_LIBDIR))

####################################
# CME files
####################################
# It's important that the final included *.mk is in the $(CME_SCRDIR)
include $(CME_SRCDIR)/topfiles.mk

ifeq "__PK__" "$($(IMAGE)_KERNEL)"
CME_OBJS+=$(TOP_OBJECTS)
endif

CME_OBJS+=$(PSTATE_OBJECTS)
CME_OBJS+=$(UTILS_OBJECTS)
CME_OBJS+=$(STOP_OBJECTS)


# add include paths
ifeq "__PK__" "$($(IMAGE)_KERNEL)"
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),\
	$(CME_SRCDIR)/stop_cme \
	$(CME_SRCDIR)/pstate_cme \
	$(CME_SRCDIR)/utils \
	$(PK_SRCDIR)/kernel \
	$(PK_SRCDIR)/ppe42 \
	$(PK_SRCDIR)/trace \
	$(PK_SRCDIR)/$(_PPE_TYPE) \
	$(PM_LIBDIR)/include \
	$(PM_LIBDIR)/include/registers \
	$(PM_LIBDIR)/common \
	$(HCODE_LIBDIR) \
	$(HCODE_COMMON_LIBDIR) \
        $(ROOTPATH)/chips/p9/procedures/hwp/lib/ \
        $(ROOTPATH)/chips/p9/utils/imageProcs/ \
	)
else
# __IOTA__
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),\
	$(CME_SRCDIR)/stop_cme \
	$(CME_SRCDIR)/pstate_cme \
	$(CME_SRCDIR)/utils \
	$(IOTA_SRCDIR) \
	$(PK_SRCDIR)/ppe42 \
	$(PK_SRCDIR)$(_PPE_TYPE) \
	$(PM_LIBDIR)/include/registers \
	$(PK_SRCDIR)/trace \
	$(PM_LIBDIR)/include \
	$(PM_LIBDIR)/include/registers \
	$(PM_LIBDIR)/common \
	$(HCODE_LIBDIR) \
	$(HCODE_COMMON_LIBDIR) \
	$(ROOTPATH)/chips/p9/utils/imageProcs/ \
	)
endif

$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})

# Note:
# Don't build up COMMONFLAGS based on other local variables.
# The local variables won't be be available/assigned at the time
# they are resolved to build the COMMONFLAGS
CME_COMMONFLAGS:=

ifeq "__PK__" "$($(IMAGE)_KERNEL)"
# Options for PK_TRACE
#CME_COMMONFLAGS+= -DPK_TRACE_LEVEL=0
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_TIMER_OUTPUT=0
$(IMAGE)_COMMONFLAGS+= -DDEV_DEBUG=0

# Options for Kernel configuration

# Force CME tasks to use the unified interrupt handler
$(IMAGE)_COMMONFLAGS+= -DUNIFIED_IRQ_HANDLER_CME

# This application will statically initialize
# it's external interrupt table using
# the table defined in p9_cme_main.c
$(IMAGE)_COMMONFLAGS+= -DSTATIC_IRQ_TABLE

# This application will use the external timebase register
# (comment this line out to use the decrementer as timebase)
$(IMAGE)_COMMONFLAGS+= -DAPPCFG_USE_EXT_TIMEBASE

$(IMAGE)_COMMONFLAGS+= -DPK_TIMER_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DPK_THREAD_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DUSE_PK_APP_CFG_H=1
$(IMAGE)_COMMONFLAGS+= -D__PK__=1
else
#__IOTA__
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DUSE_PK_APP_CFG_H=1
$(IMAGE)_COMMONFLAGS+= -DPK_TIMER_SUPPORT=0
$(IMAGE)_COMMONFLAGS+= -D__IOTA__
#__IOTA__
endif

## Common to both __PK__ and __IOTA__
$(IMAGE)_COMMONFLAGS+= -D__PPE_PLAT
$(IMAGE)_COMMONFLAGS+= -D__PPE_CME
# Options for Functions being skipped

$(IMAGE)_COMMONFLAGS+= -DSPWU_AUTO=0
$(IMAGE)_COMMONFLAGS+= -DSTOP_PRIME=0

$(IMAGE)_COMMONFLAGS+= -DSKIP_ABORT=0
$(IMAGE)_COMMONFLAGS+= -DSKIP_L2_PURGE_ABORT=0

$(IMAGE)_COMMONFLAGS+= -DSKIP_ENTRY_CATCHUP=0
$(IMAGE)_COMMONFLAGS+= -DSKIP_EXIT_CATCHUP=0

$(IMAGE)_COMMONFLAGS+= -DSKIP_ARRAYINIT=0
$(IMAGE)_COMMONFLAGS+= -DSKIP_SCAN0=0
$(IMAGE)_COMMONFLAGS+= -DSKIP_INITF=0

$(IMAGE)_COMMONFLAGS+= -DSKIP_SELF_RESTORE=0
$(IMAGE)_COMMONFLAGS+= -DSKIP_RAM_HRMOR=0

$(IMAGE)_COMMONFLAGS+= -DSKIP_BCE_SCAN_RING=0
$(IMAGE)_COMMONFLAGS+= -DSKIP_BCE_SCOM_RESTORE=0

## end ifdef IMAGE
endif
