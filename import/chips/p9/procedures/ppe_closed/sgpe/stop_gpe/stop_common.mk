# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/stop_common.mk $
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

IMAGE_EDITOR=stop_gpeImgEdit.exe


## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

## PPE_TYPE can be std or gpe
_PPE_TYPE=gpe

$(IMAGE)_LINK_SCRIPT=link.cmd

include $(PK_SRCDIR)/trace/pktracefiles.mk
STOP_OBJS := $(PKTRACE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/trace)

include $(PK_SRCDIR)/kernel/pkkernelfiles.mk
STOP_OBJS += $(PK_OBJECTS)
STOP_OBJS += $(PK_TIMER_OBJECTS)
STOP_OBJS += $(PK_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/kernel)

include $(PK_SRCDIR)/ppe42/pkppe42files.mk
STOP_OBJS += $(PPE42_OBJECTS)
STOP_OBJS += $(PPE42_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/ppe42)

include $(PK_SRCDIR)/$(_PPE_TYPE)/pk$(_PPE_TYPE)files.mk
STOP_OBJS += $(GPE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/$(_PPE_TYPE))

include $(PM_LIBDIR)/common/libcommonfiles.mk
STOP_OBJS += $(LIBCOMMON_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PM_LIBDIR)/common)

include $(PM_LIBDIR)/occlib/liboccfiles.mk
STOP_OBJS += $(LIBOCC_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PM_LIBDIR)/occlib)

include $(HCODE_LIBDIR)/hcodelibfiles.mk
STOP_OBJS += $(HCODE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HCODE_LIBDIR))

include $(P2P_SRCDIR)/p2pfiles.mk
STOP_OBJS += $(P2P_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(P2P_SRCDIR))


#include $(FAPI2_SRCDIR)/fapi2ppefiles.mk
#STOP_OBJS += $(FAPI2LIB_OBJECTS)
#$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(FAPI2_SRCDIR))

include $(FAPI2_PLAT_SRCDIR)/fapi2ppeplatfiles.mk
STOP_OBJS += $(FAPI2PLATLIB_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(FAPI2_PLAT_SRCDIR))
FAPI2PLATLIB_OBJECTS=
FAPI2PLAT-CPP-SOURCES=

# It's important that the final included *.mk is in the $(CME_SCRDIR)
include $(SGPE_SRCDIR)/stop_gpe/topfiles.mk
STOP_OBJS+=$(TOP_OBJECTS)
STOP_OBJS+=$(UTILS_OBJECTS)

$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})


# Options for PK_TRACE

STOP_COMMONFLAGS+= -DPK_TRACE_LEVEL=1
STOP_COMMONFLAGS+= -DPK_TRACE_TIMER_OUTPUT=0
STOP_COMMONFLAGS+= -DDEV_DEBUG=0

# Options for Functions being skipped

STOP_COMMONFLAGS+= -DSTOP_PRIME=0
STOP_COMMONFLAGS+= -DSKIP_HOMER_ACCESS=0
STOP_COMMONFLAGS+= -DSKIP_IPC=0

STOP_COMMONFLAGS+= -DSKIP_L3_PURGE=0
STOP_COMMONFLAGS+= -DSKIP_L3_PURGE_ABORT=0

STOP_COMMONFLAGS+= -DSKIP_ARRAYINIT=0
STOP_COMMONFLAGS+= -DSKIP_SCAN0=0
STOP_COMMONFLAGS+= -DSKIP_INITF=0

STOP_COMMONFLAGS+= -DSKIP_CME_BOOT_STOP11=0
STOP_COMMONFLAGS+= -DSKIP_CME_BOOT_IPL_HB=0

# Options for Kernel support

# The Instance ID of the OCC processor
# that this application is intended to run on
# 0-3 -> GPE, 4 -> 405
STOP_COMMONFLAGS+= -DAPPCFG_OCC_INSTANCE_ID=3

# GPE3 is the SGPE and is the route owner
STOP_COMMONFLAGS+= -DOCCHW_IRQ_ROUTE_OWNER=3

# Force SGPE tasks to use the unified interrupt handler.
STOP_COMMONFLAGS+= -DUNIFIED_IRQ_HANDLER_GPE

# This application will statically initialize
# it's external interrupt table using
# the table defined in p9_sgpe_main.c
STOP_COMMONFLAGS+= -DSTATIC_IRQ_TABLE

# This application will use the external timebase register
# (comment this line out to use the decrementer as timebase)
STOP_COMMONFLAGS+= -DAPPCFG_USE_EXT_TIMEBASE

STOP_COMMONFLAGS+= -DPK_TIMER_SUPPORT=1
STOP_COMMONFLAGS+= -DPK_THREAD_SUPPORT=1
STOP_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
STOP_COMMONFLAGS+= -DUSE_PK_APP_CFG_H=1
STOP_COMMONFLAGS+= -D__PK__=1
STOP_COMMONFLAGS+= -D__PPE_PLAT
STOP_COMMONFLAGS+= -D__PPE_SGPE
STOP_COMMONFLAGS+= -D__PPE__

# Options for FAPI2
STOP_COMMONFLAGS+= -DFAPI2_NO_FFDC=1
##STOP_COMMONFLAGS+= -DFAPI_TRACE_LEVEL_DEF=3
$($(IMAGE)_TARGET)_CXXFLAGS += -Wno-unused-label

# add include paths
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),\
	$(PK_SRCDIR)/kernel \
	$(PK_SRCDIR)/ppe42 \
	$(PK_SRCDIR)/trace \
	$(PK_SRCDIR)/$(_PPE_TYPE) \
	$(PM_LIBDIR)/include \
	$(PM_LIBDIR)/include/registers \
	$(PM_LIBDIR)/common \
	$(PM_LIBDIR)/occlib \
	$(HCODE_LIBDIR) \
	$(HCODE_COMMON_LIBDIR) \
	$(HCODE_UTILS_INCDIR) \
        $(ROOTPATH)/chips/p9/procedures/hwp/lib/ \
	$(FAPI2_SRCDIR) \
	$(FAPI2_PLAT_SRCDIR) \
	$(SGPE_FAPI2_INC) \
	$(FAPI2_INC) \
	$(STD_INC) \
	$(COMMON_INCDIR) \
        $(ROOTPATH)/chips/p9/utils/imageProcs/ \
	)

$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic
#$(IMAGE)_LDFLAGS=-e __system_reset -N -Bstatic

endif
