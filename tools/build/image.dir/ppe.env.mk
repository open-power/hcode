# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ppe.env.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2016,2017
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG
#
PK_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/pk
PM_LIBDIR=$(ROOTPATH)/chips/p9/common/pmlib
HCODE_LIBDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/lib
HCODE_COMMON_LIBDIR=$(ROOTPATH)/chips/p9/procedures/hwp/lib
HCODE_UTILS_INCDIR=$(ROOTPATH)/chips/p9/procedures/utils/
PPE_TOOLS=$(ROOTPATH)/chips/p9/procedures/ppe/tools
PK_TRACEPP=$(EXEPATH)/ppetracepp.exe
P2P_SRCDIR=$(PPE_TOOLS)/PowerPCtoPPE
CME_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/cme
SGPE_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe
IPPE_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/ippe
FAPI2_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/src
FAPI2_PLAT_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/src/plat
PGPE_SRCDIR=$(ROOTPATH)/chips/p9/procedures/ppe_closed/pgpe
SGPE_FAPI2_INC+=$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/include/ \
				$(ROOTPATH)/chips/p9/procedures/ppe/hwpf/include/plat/ \
				$(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/

FAPI2_INC=$(ROOTPATH)/hwpf/fapi2/include/
STD_INC+=$(ROOTPATH)/chips/p9/procedures/ppe/include/std/ \
         $(ROOTPATH)/chips/p9/procedures/ppe/tools/ppetracepp/ \
         $(ROOTPATH)/chips/p9/procedures/hwp/
COMMON_INCDIR=$(ROOTPATH)/chips/p9/common/include/


CPP?=gcc
TCPP?=gcc
AS?=as
OBJCOPY?=objcopy
OBJDUMP?=objdump

PCP=$(P2P_SRCDIR)/ppc-ppe-pcp.py
THASH = $(PPE_TOOLS)/ppetracepp/tracehash.pl
