# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/pgpe/boot/p9_pgpe_aux_task.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2016,2017
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

IMAGE=p9_pgpe_aux_task

## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPE

## PPE_TYPE can be std or gpe
_PPE_TYPE=gpe

$(IMAGE)_LINK_SCRIPT=linkaux.cmd

include $(PK_SRCDIR)/ppe42/pkppe42files.mk
OBJS += $(PPE42_OBJECTS)
OBJS += $(PPE42_THREAD_OBJECTS)

$(call ADD_PPEIMAGE_SRCDIR,$(PGPE_SRCDIR)/boot \
	$(PK_SRCDIR)/ppe42 \
	$(HCODE_LIBDIR) \
        )


# It's important that the final included *.mk is in the $(SGPE_SRCDIR)
include $(PGPE_SRCDIR)/boot/topfiles.mk
OBJS=$(AUX_TASK_OBJECTS)

$(IMAGE)_COMMONFLAGS+= -mno-sdata
$(IMAGE)_COMMONFLAGS+= -msdata=none

# add include paths
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(PGPE_SRCDIR)/boot \
        $(PK_SRCDIR)/kernel \
        $(PK_SRCDIR)/ppe42 \
        $(PK_SRCDIR)/ppe \
        $(PK_SRCDIR)/trace \
        $(PK_SRCDIR)/$(_PPE_TYPE) \
        $(PM_LIBDIR)/include \
        $(PM_LIBDIR)/include/registers \
        $(PM_LIBDIR)/common \
        $(PM_LIBDIR)/occlib \
        $(HCODE_LIBDIR) \
        $(HCODE_COMMON_LIBDIR) \
        $(ROOTPATH)/chips/p9/procedures/hwp/lib/ \
        )

$(call BUILD_PPEIMAGE)
