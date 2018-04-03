# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/cme/cme_p9n21.mk $
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

CME_IMAGE:=cme_p9n21
IMAGE:=$(CME_IMAGE)
IMAGE_EDITOR:=cmeImgEdit.exe

#Select KERNEL
$(IMAGE)_KERNEL:=__IOTA__
#$(IMAGE)_KERNEL:=__PK__

# Options for Platforms specific tuning


$(IMAGE)_COMMONFLAGS = -DNIMBUS_DD_LEVEL=21
$(IMAGE)_COMMONFLAGS+= -DCUMULUS_DD_LEVEL=0
$(IMAGE)_COMMONFLAGS+= -DAXONE_DD_LEVEL=0

$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_LEVEL=1

$(IMAGE)_COMMONFLAGS+= -DLAB_P9_TUNING=0
$(IMAGE)_COMMONFLAGS+= -DEPM_P9_TUNING=0
$(IMAGE)_COMMONFLAGS+= -DEPM_BROADSIDE_SCAN0=0

$(IMAGE)_COMMONFLAGS+= -DSIMICS_TUNING=0
$(IMAGE)_COMMONFLAGS+= -DUSE_SIMICS_IO=0

include $(CME_SRCDIR)/cme_common.mk
OBJS := $(CME_OBJS)

$(call BUILD_PPEIMAGE)

## ## Bin header
 IMAGE=cpmr_header_p9n21
 IMAGE_EDITOR=cmeImgEdit.exe
##
## # Target tool chain
 $(IMAGE)_TARGET=PPE
##
## #linkscript to use
 $(IMAGE)_LINK_SCRIPT=linkcpmr.cmd
##
 OBJS = stop_cme/p9_cme_cpmr.o

$(call ADD_BINHEADER_INCDIR,$(IMAGE),\
    $(CME_SRCDIR)/stop_cme \
	$(CME_SRCDIR)/pstate_cme \
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

 $(call BUILD_BINHEADER,$(IMAGEPATH)/$(CME_IMAGE)/$(CME_IMAGE).bin,$(ROOTPATH)/chips/p9/procedures/utils/stopreg/selfRest.bin)
