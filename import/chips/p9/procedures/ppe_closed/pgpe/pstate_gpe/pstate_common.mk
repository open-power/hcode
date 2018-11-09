# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/pstate_common.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2017,2019
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

IMAGE_EDITOR=pstate_gpeImgEdit.exe

## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

## PPE_TYPE can be std or gpe
_PPE_TYPE=gpe

$(IMAGE)_LINK_SCRIPT=link.cmd

include $(PK_SRCDIR)/trace/pktracefiles.mk
PSTATE_OBJS := $(PKTRACE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/trace)

include $(PK_SRCDIR)/kernel/pkkernelfiles.mk
PSTATE_OBJS += $(PK_OBJECTS)
PSTATE_OBJS += $(PK_TIMER_OBJECTS)
PSTATE_OBJS += $(PK_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/kernel)

include $(PK_SRCDIR)/ppe42/pkppe42files.mk
PSTATE_OBJS += $(PPE42_OBJECTS)
PSTATE_OBJS += $(PPE42_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/ppe42)

include $(PK_SRCDIR)/$(_PPE_TYPE)/pk$(_PPE_TYPE)files.mk
PSTATE_OBJS += $(GPE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/$(_PPE_TYPE))

include $(PM_LIBDIR)/common/libcommonfiles.mk
PSTATE_OBJS += $(LIBCOMMON_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PM_LIBDIR)/common)

include $(PM_LIBDIR)/occlib/liboccfiles.mk
PSTATE_OBJS += $(LIBOCC_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PM_LIBDIR)/occlib)

include $(HCODE_LIBDIR)/hcodelibfiles.mk
PSTATE_OBJS += $(HCODE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(HCODE_LIBDIR))

include $(P2P_SRCDIR)/p2pfiles.mk
PSTATE_OBJS += $(P2P_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(P2P_SRCDIR))

# It's important that the final included *.mk is in the $(CME_SCRDIR)
include $(PGPE_SRCDIR)/pstate_gpe/topfiles.mk
PSTATE_OBJS+=$(TOP_OBJECTS)

$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})


# Options for PK_TRACE
PSTATE_COMMONFLAGS+= -DPK_TRACE_LEVEL=1
PSTATE_COMMONFLAGS+= -DPK_TRACE_TIMER_OUTPUT=0


#Note: Flags are resolved very late - so local variables can't be
# used to build them
PSTATE_COMMONFLAGS+= -DPK_TIMER_SUPPORT=1
PSTATE_COMMONFLAGS+= -DPK_THREAD_SUPPORT=1
PSTATE_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
PSTATE_COMMONFLAGS+= -DUSE_PK_APP_CFG_H=1
PSTATE_COMMONFLAGS+= -D__PPE_PLAT
PSTATE_COMMONFLAGS+= -D__PPE__
PSTATE_COMMONFLAGS+= -D__PK__=1
PSTATE_COMMONFLAGS+= -DPK_TRACE_SZ=2048
PSTATE_COMMONFLAGS+= -DPSTATE_GPE


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
	$(PGPE_SRCDIR) \
	)

$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic


endif
