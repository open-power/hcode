# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/tools/platXML/ppeParseAttributeInfo.mk $
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

include $(XMLTOOL_DIR)/platxmlfiles.mk

GENERATED=ppeParseAttributeInfo_qme
$(GENERATED)_COMMAND_PATH=$(XMLTOOL_DIR)
COMMAND=ppeParseAttributeInfo.pl

SOURCES+=$(ATTRFILES)
TARGETS+=attribute_ids.H
TARGETS+=fapi2ChipEcFeature.C
TARGETS+=fapi2AttributePlatCheck.H
TARGETS+=fapi2AttributesSupported.html
TARGETS+=fapi2AttrInfo.csv
TARGETS+=fapi2AttrEnumInfo.csv

$(GENERATED)_PATH=$(GENPATH)/qme

define ppeParseAttributeInfo_qme_RUN
                $(C1) $$< $$($(GENERATED)_PATH) $(ATTRINFO_DIR)/p10_qme_attributes.xml $(ATTRFILES);
endef
$(call BUILD_GENERATED)



