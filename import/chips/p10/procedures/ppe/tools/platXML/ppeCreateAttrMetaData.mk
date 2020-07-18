# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/tools/platXML/ppeCreateAttrMetaData.mk $
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

GENERATED=ppeCreateAttrMetaData_qme
$(GENERATED)_COMMAND_PATH=$(XMLTOOL_DIR)
COMMAND=ppeCreateAttrMetaData.py

SOURCES+=$(GENPATH)/qme/attribute_ids.H
TARGETS+=qme_attr_meta.bin

$(GENERATED)_PATH=$(IMAGEPATH)/qme_image

define ppeCreateAttrMetaData_qme_RUN
                $(C1) $$< -e $(ROOTPATH) -o $(OUTPUTPATH) -b $($(GENERATED)_PATH)/qme_attr_meta.bin;
endef
$(call BUILD_GENERATED)
