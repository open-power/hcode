# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/hwp/p10_qme_ring_traverse.mk $
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

ifeq ($(SCAN_TEST),1)
PROCEDURE=p10_qme_ring_traverse
INC+=$(ROOTPATH)/chips/p10/procedures/ppe/hwp/
INC+=$(ROOTPATH)/chips/p10/procedures/ppe/qme/
INC+=$(ROOTPATH)/chips/p10/procedures/hwp/lib/
INC+=$(ROOTPATH)/hwpf/fapi2/include/
OBJS+=p10_qme_putringutils.o
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/chips/p10/procedures/ppe/hwp/)
$(call ADD_MODULE_INCDIR,$(PROCEDURE),$(INC))
$(call BUILD_PROCEDURE)
endif
