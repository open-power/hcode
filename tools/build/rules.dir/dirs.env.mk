# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/dirs.env.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2019
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

ifeq ($(PROJECT_NAME),p9)
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/utils/fir_checking

MAKEFILE_PATH += $(ROOTPATH)/tools/genOverrideImage/
MAKEFILE_PATH += $(ROOTPATH)/tools/genOverrideImage/test
MAKEFILE_PATH += $(ROOTPATH)/tools/genOverrideImage/test/wrapper
MAKEFILE_PATH += $(ROOTPATH)/generic/memory/lib
endif

# Pick up core IPL image APIs and core IPL image build tools
MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(wildcard $(ROOTPATH)/chips/$(chip)/utils/imageProcs))
MAKEFILE_PATH += $(ROOTPATH)/tools/imageProcs
MAKEFILE_PATH += $(ROOTPATH)/../tools/imageProcs

ifeq ($(PROJECT_NAME),p9)
# Pick up VBU specific procedure makefiles
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe/tools/ppetracepp
endif

ifeq ($(PROJECT_NAME),p10)
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/common/ppe/ppetrace/ppetracepp
endif

# Pick up scominfo code
MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/common)

ifeq ($(PROJECT_NAME),p9)
# Pick up image build makefiles
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/cme/stop_cme
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/cme
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe/stop_gpe
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/sgpe/boot
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/pgpe/boot
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/ippe/ionv
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/ippe/iox
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe_closed/ippe/ioa
endif

ifeq ($(PROJECT_NAME),p10)
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/common/ppe/boltonlib/gpe/
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/common/ppe/iota/
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/common/ppe/iota/test
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/common/ppe/pk/test
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/tools/platXML
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/qme
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/hwp
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/iohs/ioo
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/iohs/memregs
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/iohs/nv
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/pgpe
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/pgpe/boot
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/xgpe
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/iop
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/ppe/xgpe/boot
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/utils/stopreg/
endif

endif
