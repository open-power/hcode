# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_p10dd10.mk $
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
PGPE_TARGET := pgpe_p10dd10
IMAGE:=$(PGPE_TARGET)
IMAGE_EDITOR=pgpeImgEdit.exe

#Select KERNEL
$(IMAGE)_KERNEL:=__IOTA__

# Options for Platforms specific DD lvl
$(IMAGE)_COMMONFLAGS = -DPOWER10_DD_LEVEL=10

include $(PGPE_SRCDIR)/pgpe_common.mk
OBJS := $(PGPE_OBJS)

$(call BUILD_PPEIMAGE)

## ## Bin header
IMAGE=ppmr_hdr_p10dd10
IMAGE_EDITOR=pgpeImgEdit.exe
##
# Target tool chain
$(IMAGE)_TARGET=PPE

## #linkscript to use
$(IMAGE)_LINK_SCRIPT=linkppmr.cmd
OBJS := ppmr_header.o

$(call ADD_BINHEADER_INCDIR,$(IMAGE),\
	$(IOTA_SRCDIR) \
	$(COMLIB_SRCDIR) \
	$(TYPLIB_SRCDIR)/$(_PPE_TYPE) \
	$(POWLIB_SRCDIR) \
	$(TRACE_SRCDIR) \
	$(HCODE_LIBDIR) \
	$(HCODE_COMMON_LIBDIR) \
	$(ROOTPATH)/chips/p10/procedures/hwp/lib/ \
	$(ROOTPATH)/chips/p10/utils/imageProcs/ \
	)

$(call BUILD_BINHEADER, $(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin)

