# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/iohs/nv/nv.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019
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
IMAGE=nv

# Indicates we are doing an EKB build as opposed to a local build.
# Allow control of which rules to consider.
EKB_BUILD=1

## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

## PPE_TYPE can be std or gpe
_PPE_BOLTON_CFG=standard
_PPE_TYPE=std

$(IMAGE)_LINK_SCRIPT=link_nv.cmd

$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
        | xargs -i printf "%d" 0x{})


OBJS += eabi.o

#Note: Flags are resolved very late - so local variables can't be
# used to build them
$(IMAGE)_COMMONFLAGS+= -DPK_TIMER_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DPK_THREAD_SUPPORT=0
$(IMAGE)_COMMMOFLAGS+= -DPK_STACK_CHECK=0
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_SUPPORT=0
$(IMAGE)_COMMONFLAGS+= -DUSE_PK_APP_CFG_H=1
$(IMAGE)_COMMONFLAGS+= -D__PK__=1
$(IMAGE)_COMMONFLAGS+= -D__PPE_PLAT
$(IMAGE)_COMMONFLAGS+= -DAPPCFG_USE_EXT_TIMEBASE=1
$(IMAGE)_COMMONFLAGS+= -DNO_INIT_DBCR0=1

$(IMAGE)_COMMONFLAGS+= -DNV
$(IMAGE)_COMMONFLAGS+= -DIO_READ_CONFIG=1
$(IMAGE)_COMMONFLAGS+= -DIO_DISABLE_DEBUG=0

include $(PPE_SRCDIR)/ppetrace/pktracefiles.mk
OBJS += $(PKTRACE_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SRCDIR)/ppetrace)
PKTRACE_OBJECTS:=

include $(PK_SRCDIR)/kernel/pkkernelfiles.mk
OBJS += $(PK_OBJECTS)
OBJS += $(PK_TIMER_OBJECTS)
OBJS += $(PK_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/kernel)

include $(PK_SRCDIR)/ppe42/pkppe42files.mk
OBJS += $(PPE42_OBJECTS)
OBJS += $(PPE42_THREAD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PK_SRCDIR)/ppe42)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SRCDIR)/baselib)

include $(PPE_SRCDIR)/boltonlib/$(_PPE_BOLTON_CFG)/pk$(_PPE_TYPE)files.mk
OBJS += $(STD_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SRCDIR)/boltonlib/$(_PPE_BOLTON_CFG))

# It's important that the final included *.mk is in the $(IOHS_SRCDIR)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(IOHS_SRCDIR))
include $(IOHS_SRCDIR)/nv/topfiles.mk
OBJS+=$(TOP_OBJECTS)

# add include paths
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),\
        $(IOHS_SRCDIR)/nv \
        $(PK_SRCDIR)/kernel \
        $(PK_SRCDIR)/ppe42 \
        $(PPE_SRCDIR)/baselib \
        $(PPE_SRCDIR)/ppetrace \
        $(PPE_SRCDIR)/boltonlib/$(_PPE_BOLTON_CFG) \
        )

$(IMAGE)_LDFLAGS=-gc-sections --nostdlib --sort-common -EB -Os -e __system_reset -N -gc-sections -Bstatic

$(call BUILD_PPEIMAGE)
