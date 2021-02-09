# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/xgpe/boot/p10_xgpe_aux_task.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2016,2021
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

IMAGE=xgpe_aux_task

## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

## PPE_TYPE can be std or gpe
_PPE_TYPE=gpe

$(IMAGE)_LINK_SCRIPT=linkaux.cmd

$(call ADD_PPEIMAGE_SRCDIR,$(XGPE_SRCDIR)/boot \
	$(IOTA_SRCDIR) \
	$(HCODE_LIBDIR) \
        )


include $(XGPE_SRCDIR)/boot/topfiles.mk
OBJS=$(AUX_TASK_OBJECTS)

$(IMAGE)_COMMONFLAGS+= -mno-sdata
$(IMAGE)_COMMONFLAGS+= -msdata=none

# add include paths
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

$(call BUILD_PPEIMAGE)
