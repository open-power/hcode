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
MAKEFILE_PATH += $(ROOTPATH)/hwpf/fapi2/src
MAKEFILE_PATH += $(ROOTPATH)/hwpf/fapi2/tools
#MAKEFILE_PATH += $(ROOTPATH)/hwpf/prcd

# Include proc_scomt
MAKEFILE_PATH += $(ROOTPATH)/chips/common/utils/scomt

#MAKEFILE_PATH += $(ROOTPATH)/hwpf/fapi2/test
#MAKEFILE_PATH += $(ROOTPATH)/tools/ifCompiler/initCompiler
#MAKEFILE_PATH += $(ROOTPATH)/tools/ifCompiler/engd_parser
#MAKEFILE_PATH += $(ROOTPATH)/tools/ifCompiler/plat
#MAKEFILE_PATH += $(ROOTPATH)/tools/ifCompiler
#MAKEFILE_PATH += $(GENPATH)/initfiles
#MAKEFILE_PATH += $(GENPATH)/initfiles/wrapper

ifeq ($(PROJECT_NAME),p9)
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/utils/fir_checking

MAKEFILE_PATH += $(ROOTPATH)/tools/genOverrideImage/
MAKEFILE_PATH += $(ROOTPATH)/tools/genOverrideImage/test
MAKEFILE_PATH += $(ROOTPATH)/tools/genOverrideImage/test/wrapper
MAKEFILE_PATH += $(ROOTPATH)/generic/memory/lib
endif

#ifeq ($(PROJECT_NAME),p9)
# pick up the cmsk procedures
#MAKEFILE_PATH+= $(shell find $(ROOTPATH)/output -path *initfiles/*/* -type d)
#endif

# Pick up procedure, test, wrapper makefiles.
EKB_CHIP_UNITS = $(foreach chip,$(CHIPS),$(wildcard $(ROOTPATH)/chips/$(chip)/procedures/hwp/*))


MAKEFILE_PATH += $(EKB_CHIP_UNITS)
MAKEFILE_PATH += $(addsuffix /tests,$(EKB_CHIP_UNITS))
MAKEFILE_PATH += $(addsuffix /wrapper,$(EKB_CHIP_UNITS))
MAKEFILE_PATH += $(addsuffix /lib,$(EKB_CHIP_UNITS))

# Pick up core IPL image APIs and core IPL image build tools
MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(wildcard $(ROOTPATH)/chips/$(chip)/utils/imageProcs))
MAKEFILE_PATH += $(ROOTPATH)/tools/imageProcs
MAKEFILE_PATH += $(ROOTPATH)/../tools/imageProcs

# Pick up Cronus wrappers for core IPL image APIs
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(wildcard $(ROOTPATH)/chips/$(chip)/utils/imageProcs/wrapper))

# Pick up utility, wrapper makefiles
MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/utils)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/utils/sbeUtils)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/utils/wrapper)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/utils/FabricTraceFormatter)

ifeq ($(PROJECT_NAME),p9)
# Pick up VBU specific procedure makefiles
MAKEFILE_PATH += $(ROOTPATH)/chips/p9/procedures/ppe/tools/ppetracepp
endif

ifeq ($(PROJECT_NAME),p10)
MAKEFILE_PATH += $(ROOTPATH)/chips/p10/common/ppe/ppetrace/ppetracepp
#MAKEFILE_PATH += $(ROOTPATH)/generic/memory/lib
# Include cache- and chip-contained procedures
#MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/utils/contained
# Include abist procedures
#MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/utils/abist
# Include lbist procedures
#MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/utils/lbist
endif

#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/procedures/vbu/sim)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(wildcard $(ROOTPATH)/chips/$(chip)/procedures/vbu/sim/*))

# Pick up scominfo code
MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/common)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/common/include/examples)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/common/scominfo)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/common/scominfo/wrapper)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/common/scominfo/tests)

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
#MAKEFILE_PATH += $(ROOTPATH)/chips/p10/procedures/utils/stopreg/
endif

# Pick up core IPL image APIs and core IPL image build tools
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(wildcard $(ROOTPATH)/chips/$(chip)/utils/imageProcs))
#MAKEFILE_PATH += $(ROOTPATH)/tools/imageProcs

endif

#We intend to build only STOP API Tool on AIX. Code in any other path should not compile.
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/procedures/hwp/pm/tools/stopApi)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/procedures/hwp/pm/tools/stop_recovery/)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/procedures/hwp/pm/tools/extHom)
#MAKEFILE_PATH += $(foreach chip,$(CHIPS),$(ROOTPATH)/chips/$(chip)/procedures/hwp/pm/tools/err_Injector)
