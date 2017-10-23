# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/dirs.env.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2015,2017
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

# Makefile to define additional paths to find global makefiles.

# Pick up fapi2 makefiles.
ifeq ($(UNAME),Linux)

# Pick up image build makefiles
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/cme/stop_cme
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/cme
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe/stop_gpe
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe/boot
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/pgpe/boot
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/ippe/iox
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/ippe/ioa
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe/tools/ppetracepp
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/xip
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/utils/imageProcs
MAKEFILE_PATH += $(ROOTPATH)/tools/imageProcs
MAKEFILE_PATH += $(BASEPATH)/tools/imageProcs
MAKEFILE_PATH += $(BASEPATH)/rings/
endif


