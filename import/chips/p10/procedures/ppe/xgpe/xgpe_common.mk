# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_common.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019,2020
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

$(IMAGE)_TARGET=PPE
$(IMAGE)_LINK_SCRIPT=link.ld

_PPE_TYPE=gpe

$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_LEVEL=3
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_SZ=2048
$(IMAGE)_COMMONFLAGS+= -DSIMICS_TUNING=0
$(IMAGE)_COMMONFLAGS+= -DUSE_SIMICS_IO=0
$(IMAGE)_COMMONFLAGS+= -DPK_TRACE_SUPPORT=1
$(IMAGE)_COMMONFLAGS+= -DUSE_APP_CFG_H=1
$(IMAGE)_COMMONFLAGS+= -DPK_TIMER_SUPPORT=0
$(IMAGE)_COMMONFLAGS+= -D__IOTA__
$(IMAGE)_COMMONFLAGS+= -D__PPE__
$(IMAGE)_COMMONFLAGS+= -D__PPE_PLAT
$(IMAGE)_COMMONFLAGS+= -D__PPE_HCODE__
$(IMAGE)_COMMONFLAGS+= -DAPPCFG_OCC_INSTANCE_ID=3
$(IMAGE)_COMMONFLAGS+= -DUNIFIED_IRQ_HANDLER_GPE


XGPE_OBJS := $(_PPE_TYPE)_init.o

# system objects
XGPE_OBJS += iota_ppe42.o
XGPE_OBJS += iota_ppe42_vectors.o
XGPE_OBJS += iota.o
XGPE_OBJS += iota_debug_ptrs.o
XGPE_OBJS += eabi.o
XGPE_OBJS += ppe42_math.o
XGPE_OBJS += ppe42_gcc.o
XGPE_OBJS += ppe42_string.o

# Include IPC support
XGPE_OBJS += ipc_core.o
XGPE_OBJS += ipc_init.o

# Include PK trace support
XGPE_OBJS += pk_trace_core.o
XGPE_OBJS += pk_trace_big.o
XGPE_OBJS += pk_trace_binary.o
XGPE_OBJS += errl.o

# Add source code directories for the above objects
PPE_SRCDIR=$(ROOTPATH)/chips/p10/common/ppe
IOTA_SRCDIR=$(PPE_SRCDIR)/iota
TRACE_SRCDIR=$(PPE_SRCDIR)/ppetrace
HWP_SRCDIR=$(ROOTPATH)/chips/p10/procedures/hwp/
REG_SRCDIR=$(ROOTPATH)/chips/p10/common/pmlib/include/registers
SCOM_SRCDIR=$(ROOTPATH)/chips/p10/common/include

$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(IOTA_SRCDIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SRCDIR)/boltonlib/$(_PPE_TYPE))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SRCDIR)/ppetrace)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(OCC_SRCDIR)/occlib)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SRCDIR)/baselib)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(TRACE_SRCDIR))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(PPE_SHARED_LIBDIR))

##################################
# PPE Shared Objects
###################################
include $(PPE_SHARED_LIBDIR)/hcodelibfiles.mk
include $(XGPE_SRCDIR)/xgpe_files.mk

XGPE_OBJS+=$(XGPE_OBJECTS)

# Include paths
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE), \
$(IOTA_SRCDIR) \
$(PPE_SRCDIR)/varietylib/$(_PPE_TYPE) \
$(PPE_SRCDIR)/ppetrace \
$(OCC_SRCDIR)/commonlib/include \
$(OCC_SRCDIR)/commonlib \
$(PPE_SRCDIR)/commonlib \
$(PPE_SRCDIR)/powmanlib \
$(PMLIB_INCDIR)/registers \
$(HWP_SRCDIR)/lib \
$(TRACE_SRCDIR)/ \
$(SCOM_SRCDIR)/ \
$(PPE_SHARED_LIBDIR)/ \
)


$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})

$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic
