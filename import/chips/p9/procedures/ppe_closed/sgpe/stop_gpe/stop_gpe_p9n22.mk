# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/stop_gpe_p9n22.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2017,2018
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
#
## IMAGE=qpmr_header
##
## # Target tool chain
## $(IMAGE)_TARGET=PPE
##
## #linkscript to use
## $(IMAGE)_LINK_SCRIPT=linkqpmr.cmd
##
## OBJS = p9_sgpe_qpmr.o
## $(call BUILD_BINHEADER)


STOP_TARGET := stop_gpe_p9n22
IMAGE := $(STOP_TARGET)

# Options for Platforms specific tuning

$(IMAGE)_COMMONFLAGS+= -DNIMBUS_DD_LEVEL=22
$(IMAGE)_COMMONFLAGS+= -DCUMULUS_DD_LEVEL=0
$(IMAGE)_COMMONFLAGS+= -DAXONE_DD_LEVEL=0

$(IMAGE)_COMMONFLAGS+= -DLAB_P9_TUNING=0

$(IMAGE)_COMMONFLAGS+= -DEPM_P9_TUNING=0
$(IMAGE)_COMMONFLAGS+= -DEPM_BROADSIDE_SCAN0=0

$(IMAGE)_COMMONFLAGS+= -DSIMICS_TUNING=0
$(IMAGE)_COMMONFLAGS+= -DUSE_SIMICS_IO=0


include $(SGPE_SRCDIR)/stop_gpe/stop_common.mk
$(IMAGE)_COMMONFLAGS += $(STOP_COMMONFLAGS)
OBJS := $(STOP_OBJS)

$(call BUILD_PPEIMAGE)



# QPMR header edit:
IMAGE=qpmr_header_p9n22
IMAGE_EDITOR=stop_gpeImgEdit.exe

# Target tool chain
$(IMAGE)_TARGET=PPE

#linkscript to use
$(IMAGE)_LINK_SCRIPT=linkqpmr.cmd

OBJS = p9_sgpe_qpmr.o


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
        $(ROOTPATH)/chips/p9/utils/imageProcs/ \
	)

$(call BUILD_BINHEADER,$(IMAGEPATH)/$(STOP_TARGET)/$(STOP_TARGET).bin)
