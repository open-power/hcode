# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ppe.env.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2016,2019
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
ifeq ($(PROJECT_NAME),p9)
PK_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/pk
PM_LIBDIR=$(ROOTPATH)/chips/p9/common/pmlib

HCODE_LIBDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/lib
HCODE_COMMON_LIBDIR=$(ROOTPATH)/chips/p9/procedures/hwp/lib
HCODE_UTILS_INCDIR=$(ROOTPATH)/chips/p9/procedures/utils/

PPE_TOOLS=$(ROOTPATH)/chips/p9/procedures/ppe/tools
PK_TRACEPP=$(EXEPATH)/ppetracepp.exe
THASH = $(PPE_TOOLS)/ppetracepp/tracehash.pl
P2P_SRCDIR=$(PPE_TOOLS)/PowerPCtoPPE
PCP=$(P2P_SRCDIR)/ppc-ppe-pcp.py

CME_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/cme
SGPE_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe
IPPE_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/ippe
endif

ifeq ($(PROJECT_NAME),p10)
PMLIB_INCDIR=$(ROOTPATH)/chips/p10/common/pmlib/include/
IOTA_SRCDIR=$(ROOTPATH)/chips/p10/common/ppe/iota
OCC_SRCDIR=$(ROOTPATH)/chips/p10/common/occ
PK_SRCDIR=$(ROOTPATH)/chips/p10/common/ppe/pk
BASELIB_SRCDIR=$(ROOTPATH)/chips/p10/common/ppe/baselib
BOLTONLIB_SRCDIR=$(ROOTPATH)/chips/p10/common/ppe/boltonlib
POWMANLIB_SRCDIR=$(ROOTPATH)/chips/p10/common/ppe/powmanlib
PPETRACE_SRCDIR=$(ROOTPATH)/chips/p10/common/ppe/ppetrace

PPE_SHARED_LIBDIR=$(ROOTPATH)/chips/p10/procedures/ppe/sharedlib
HWP_COMMON_LIBDIR=$(ROOTPATH)/chips/p10/procedures/hwp/lib
HCODE_UTILS_INCDIR=$(ROOTPATH)/chips/p10/procedures/utils/

P2P_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/tools/PowerPCtoPPE
#PCP=$(P2P_SRCDIR)/ppc-ppe-pcp.py
PK_TRACEPP=$(EXEPATH)/ppetracepp.exe
THASH = $(ROOTPATH)/chips/p10/common/ppe/ppetrace/ppetracepp/tracehash.pl

QME_SRCDIR=$(ROOTPATH)/chips/p10/procedures/ppe/qme
PGPE_SRCDIR=$(ROOTPATH)/chips/p10/procedures/ppe/pgpe
XGPE_SRCDIR=$(ROOTPATH)/chips/p10/procedures/ppe/xgpe
IOHS_SRCDIR=$(ROOTPATH)/chips/${PROJECT_NAME}/procedures/ppe/iohs
endif

ifeq ($(PROJECT_NAME),p9)
FAPI2_INC=$(ROOTPATH)/hwpf/fapi2/include/ $(ROOTPATH)/hwpf/fapi2/include/plat
FAPI2_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/src
FAPI2_PLAT_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/src/plat
PGPE_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/pgpe
SGPE_FAPI2_INC+=$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/include/ \
				$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/include/plat/ \
				$(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/
endif

ifeq ($(PROJECT_NAME),p10)
XMLTOOL_DIR=$(ROOTPATH)/chips/p10/procedures/ppe/tools/platXML/
FAPI2_INC=$(ROOTPATH)/hwpf/fapi2/include/ 
PPE_HWPF_SRCDIR=$(ROOTPATH)/chips/p10/procedures/ppe/hwpf/
PPE_HWPF_INCDIR=$(ROOTPATH)/chips/p10/procedures/ppe/hwpf/ 
HWP_CORECACHE_DIR=$(ROOTPATH)/chips/p10/procedures/hwp/corecache/
IMAGE_PROCS_INCDIR=$(ROOTPATH)/chips/p10/utils/imageProcs/ \
                   $(ROOTPATH)/chips/common/utils/imageProcs/
HWP_SCAN_DIR=$(ROOTPATH)/chips/p10/procedures/ppe/hwp/
endif

ifeq ($(PROJECT_NAME),p9)
STD_INC+=$(ROOTPATH)/chips/p9/procedures/ppe/include/std/ \
         $(ROOTPATH)/chips/p9/procedures/ppe/tools/ppetracepp/ \
         $(ROOTPATH)/chips/p9/procedures/hwp/
COMMON_INCDIR=$(ROOTPATH)/chips/p9/common/include/
endif

ifeq ($(PROJECT_NAME),p10)
PPE_STDLIB_INCDIR=$(ROOTPATH)/chips/p10/procedures/ppe/include/std/ \
                  $(ROOTPATH)/chips/p10/common/ppe/ppetrace/ppetracepp/ \
                  $(ROOTPATH)/chips/p10/procedures/hwp/
HWP_ADDRESS_INCDIR=$(ROOTPATH)/chips/p10/common/include/ \
                   $(ROOTPATH)/chips/common/utils/scomt/
endif

CPP?=gcc
TCPP?=gcc
AS?=as
OBJCOPY?=objcopy
OBJDUMP?=objdump


