# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/iop/iop_bin_current.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019,2025
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

GENERATED = gen_iop_bin_current
COMMAND = gen_iop_bin
SOURCES += $(ROOTPATH)/chips/p10/procedures/ppe/iop/iop_current.fw

OUTPUT_DIR=$(IMAGEPATH)/$(GENERATED)
OUTPUT_BIN=$(OUTPUT_DIR)/iop_fw.bin

TARGETS += $(OUTPUT_BIN)

define $(GENERATED)_RUN
		$(C1) mkdir -p $(OUTPUT_DIR)
		$(C1) $$< --output-file=$(OUTPUT_BIN) $$(filter-out $$<,$$^)
endef

$(call BUILD_GENERATED)
