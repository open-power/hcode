# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/imageProcs/restore_image.mk $
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
IMAGE=restore_image

# create dependency on the restore image hcode and the final step in the
# raw image.bin creation
SELF_REST_DEPS=$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_user

SELF_RESTORE_BIN=$(ROOTPATH)/chips/p9/procedures/utils/stopreg/selfRest.bin
CPRM_HEADER_BIN=$(IMAGEPATH)/cpmr_header/cpmr_header.bin

# apending the cpmr header is also dependent on the raw image being complete
CPMR_HEADER_DEPS=$(SELF_REST_DEPS)
CPMR_HEADER_DEPS+=$(CPRM_HEADER_BIN)

# make sure we append the restore image after the cpmr header
SELF_RESTORE_DEPS+=$$($(IMAGE)_PATH)/.restore_image.append.cpmr

$(call XIP_TOOL,append,.cpmr,$(CPMR_HEADER_DEPS),$(CPRM_HEADER_BIN))
$(call XIP_TOOL,append,.self_restore,$(SELF_RESTORE_DEPS),$(SELF_RESTORE_BIN))
$(call XIP_TOOL,report,,$$($(IMAGE)_PATH)/.$(IMAGE).append.self_restore)

$(call BUILD_XIPIMAGE)
