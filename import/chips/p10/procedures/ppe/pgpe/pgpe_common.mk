# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_common.mk $
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

#IMAGE_EDITOR=pstate_gpeImgEdit.exe

## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

## PPE_TYPE can be std or gpe
_PPE_TYPE=gpe

BASELIB_SRCDIR=$(PPE_SRCDIR)/baselib
BOLTONLIB_SRCDIR=$(PPE_SRCDIR)/boltonlib
POWMANLIB_SRCDIR=$(PPE_SRCDIR)/powmanlib
TRACE_SRCDIR=$(PPE_SRCDIR)/ppetrace

$(IMAGE)_LINK_SCRIPT=link.ld

$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(BASELIB_SRCDIR))

include $(TRACE_SRCDIR)/pktracefiles.mk
PGPE_OBJS := $(PKTRACE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(TRACE_SRCDIR))

PGPE_OBJS += ppe42_gcc.o
PGPE_OBJS += ppe42_init.o
PGPE_OBJS += ppe42_core.o
PGPE_OBJS += ppe42_irq_core.o
PGPE_OBJS += ppe42_irq_init.o
PGPE_OBJS += ppe42_scom.o
PGPE_OBJS += eabi.o
PGPE_OBJS += ppe42_boot.o
PGPE_OBJS += ppe42_timebase.o
PGPE_OBJS += ppe42_thread_init.o
PGPE_OBJS += ppe42_exceptions.o


include $(PK_SRCDIR)/kernel/pkkernelfiles.mk
PGPE_OBJS += $(PK_OBJECTS)
PGPE_OBJS += $(PK_TIMER_OBJECTS)
PGPE_OBJS += $(PK_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/kernel)

#include $(PK_SRCDIR)/ppe42/pkppe42files.mk
#PGPE_OBJS += $(PPE42_OBJECTS)
#PGPE_OBJS += $(PPE42_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/ppe42)

include $(BOLTONLIB_SRCDIR)/$(_PPE_TYPE)/pk$(_PPE_TYPE)files.mk
PGPE_OBJS += $(GPE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(BOLTONLIB_SRCDIR)/$(_PPE_TYPE))

include $(OCC_SRCDIR)/commonlib/libcommonfiles.mk
PGPE_OBJS += $(LIBCOMMON_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(OCC_SRCDIR)/commonlib)

include $(OCC_SRCDIR)/occlib/liboccfiles.mk
PGPE_OBJS += $(LIBOCC_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(OCC_SRCDIR)/occlib)

# It's important that the final included *.mk is in the $(CME_SCRDIR)
include $(PGPE_SRCDIR)/topfiles.mk
PGPE_OBJS+=$(TOP_OBJECTS)

$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})


#Note: Flags are resolved very late - so local variables can't be
# used to build them
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_LEVEL=1
#$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_TIMER_OUTPUT=0
#$(IMAGE)_COMMONFLAGS+= -DPK_TIMER_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DPK_THREAD_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DUSE_PK_APP_CFG_H=1
$(IMAGE)_COMMONFLAGS+= -D__PPE_PLAT
$(IMAGE)_COMMONFLAGS+= -D__PK__=1
$(IMAGE)_COMMONFLAGS+= -DPGPE
$(IMAGE)_COMMONFLAGS+= -DPBASLVCTLN=1



$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),\
	$(PK_SRCDIR)/kernel \
	$(PK_SRCDIR)/ppe42 \
	$(PK_SRCDIR)/../ppetrace \
	$(PK_SRCDIR)/$(_PPE_TYPE) \
	$(PK_SRCDIR)/../boltonlib/$(_PPE_TYPE) \
	$(OCC_SRCDIR) \
	$(OCC_SRCDIR)/registers \
	$(ROOTPATH)/chips/p10/common \
	$(OCC_SRCDIR)/occlib \
	$(ROOTPATH)/chips/p10/common/ppe/powmanlib \
	$(PGPE_SRCDIR) \
	)

$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic


endif
