# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/pstate_gpe_p9c10.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2016,2018
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
PSTATE_TARGET:=pstate_gpe_p9c10
IMAGE:=$(PSTATE_TARGET)

#Note: Flags are resolved later - so local variables can't be
# used to build them
$(IMAGE)_COMMONFLAGS+= -DNIMBUS_DD_LEVEL=0
$(IMAGE)_COMMONFLAGS+= -DCUMULUS_DD_LEVEL=10
$(IMAGE)_COMMONFLAGS+= -DAXONE_DD_LEVEL=0
#$(IMAGE)_COMMONFLAGS+= -fstack-usage

include $(PGPE_SRCDIR)/pstate_gpe/pstate_common.mk
$(IMAGE)_COMMONFLAGS += $(PSTATE_COMMONFLAGS)
OBJS := $(PSTATE_OBJS)

$(call BUILD_PPEIMAGE)

# PPMR header edit:
IMAGE=ppmr_header_p9c10
IMAGE_EDITOR=pstate_gpeImgEdit.exe

# Target tool chain
$(IMAGE)_TARGET=PPE

#linkscript to use
$(IMAGE)_LINK_SCRIPT=linkppmr.cmd

OBJS = p9_pgpe_ppmr.o

$(call ADD_BINHEADER_INCDIR,$(IMAGE),\
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
	)

$(call BUILD_BINHEADER,$(IMAGEPATH)/$(PSTATE_TARGET)/$(PSTATE_TARGET).bin)
