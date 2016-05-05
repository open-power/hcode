# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/imageProcs/cme_image.mk $
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

IMAGE=cme_image

# before appending the various sectoins of the xip image
# we need to wait until the raw xxx_image.bin and the
# various sub images are finished - add a dependancy on both below
CME_BIN_FILE=$(IMAGEPATH)/cme/cme.bin

# adding the build user name is the last thing done to the
# raw cem_image.bin file before we append sections
CME_IMAGE_DEPS=$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_user

CME_IMAGE_DEPS+= $(CME_BIN_FILE)

$(call XIP_TOOL,append,.hcode,$(CME_IMAGE_DEPS),$(CME_BIN_FILE))
$(call XIP_TOOL,report,,$$($(IMAGE)_PATH)/.$(IMAGE).append.hcode)
$(call BUILD_XIPIMAGE)
