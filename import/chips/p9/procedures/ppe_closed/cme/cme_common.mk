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

## PPE_TYPE can be std or gpe
_PPE_TYPE=std

$(IMAGE)_LINK_SCRIPT=link.cmd

$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic

include $(PK_SRCDIR)/trace/pktracefiles.mk
CME_OBJS := $(PKTRACE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/trace)
PKTRACE_OBJECTS:=

include $(PK_SRCDIR)/kernel/pkkernelfiles.mk
CME_OBJS += $(PK_OBJECTS)
CME_OBJS += $(PK_TIMER_OBJECTS)
CME_OBJS += $(PK_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/kernel)

include $(PK_SRCDIR)/ppe42/pkppe42files.mk
CME_OBJS += $(PPE42_OBJECTS)
CME_OBJS += $(PPE42_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/ppe42)

include $(PK_SRCDIR)/$(_PPE_TYPE)/pk$(_PPE_TYPE)files.mk
CME_OBJS += $(STD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/$(_PPE_TYPE))

include $(PM_LIBDIR)/common/libcommonfiles.mk
CME_OBJS += $(LIBCOMMON_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PM_LIBDIR)/common)

include $(HCODE_LIBDIR)/hcodelibfiles.mk
CME_OBJS += $(HCODE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HCODE_LIBDIR))

include $(P2P_SRCDIR)/p2pfiles.mk
CME_OBJS += $(P2P_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(P2P_SRCDIR))

# It's important that the final included *.mk is in the $(CME_SCRDIR)
include $(CME_SRCDIR)/topfiles.mk
CME_OBJS+=$(TOP_OBJECTS)
CME_OBJS+=$(PSTATE_OBJECTS)
CME_OBJS+=$(UTILS_OBJECTS)
CME_OBJS+=$(STOP_OBJECTS)

# add include paths
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


$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})

# Note:
# Don't build up COMMONFLAGS based on other local variables.
# The local variables won't be be available/assigned at the time
# they are resolved to build the COMMONFLAGS

# Options for PK_TRACE
CME_COMMONFLAGS = -DPK_TRACE_LEVEL=0
CME_COMMONFLAGS+= -DPK_TRACE_TIMER_OUTPUT=0
CME_COMMONFLAGS+= -DDEV_DEBUG=0

# Options for Functions being skipped

CME_COMMONFLAGS+= -DSPWU_AUTO=0
CME_COMMONFLAGS+= -DSTOP_PRIME=0

CME_COMMONFLAGS+= -DSKIP_ABORT=0
CME_COMMONFLAGS+= -DSKIP_L2_PURGE_ABORT=0

CME_COMMONFLAGS+= -DSKIP_ENTRY_CATCHUP=0
CME_COMMONFLAGS+= -DSKIP_EXIT_CATCHUP=0

CME_COMMONFLAGS+= -DSKIP_ARRAYINIT=0
CME_COMMONFLAGS+= -DSKIP_SCAN0=0
CME_COMMONFLAGS+= -DSKIP_INITF=0

CME_COMMONFLAGS+= -DSKIP_SELF_RESTORE=0
CME_COMMONFLAGS+= -DSKIP_RAM_HRMOR=0

CME_COMMONFLAGS+= -DSKIP_BCE_SCAN_RING=0
CME_COMMONFLAGS+= -DSKIP_BCE_SCOM_RESTORE=0

# Options for Kernel configuration

# Force CME tasks to use the unified interrupt handler
CME_COMMONFLAGS+= -DUNIFIED_IRQ_HANDLER_CME

# This application will statically initialize
# it's external interrupt table using
# the table defined in p9_cme_main.c
CME_COMMONFLAGS+= -DSTATIC_IRQ_TABLE

# This application will use the external timebase register
# (comment this line out to use the decrementer as timebase)
CME_COMMONFLAGS+= -DAPPCFG_USE_EXT_TIMEBASE

CME_COMMONFLAGS+= -DPK_TIMER_SUPPORT=1
CME_COMMONFLAGS+= -DPK_THREAD_SUPPORT=1
CME_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
CME_COMMONFLAGS+= -DUSE_PK_APP_CFG_H=1
CME_COMMONFLAGS+= -D__PK__=1
CME_COMMONFLAGS+= -D__PPE_PLAT
CME_COMMONFLAGS+= -D__PPE_CME

## end ifdef IMAGE
endif
