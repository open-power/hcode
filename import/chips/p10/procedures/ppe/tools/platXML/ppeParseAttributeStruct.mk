# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/tools/platXML/ppeParseAttributeStruct.mk $
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

GENERATED=ppeParseAttributeStruct_qme
$(GENERATED)_COMMAND_PATH=$(XMLTOOL_DIR)
COMMAND=ppeParseAttributeStruct.pl

SOURCES+=$(ATTRFILES)
TARGETS+=ppe_attribute_system.H
TARGETS+=ppe_attribute_proc_chip.H
TARGETS+=ppe_attribute_perv.H
TARGETS+=ppe_attribute_eq.H
TARGETS+=ppe_attribute_ex.H
TARGETS+=ppe_attribute_core.H

$(GENERATED)_PATH=$(GENPATH)/qme

define ppeParseAttributeStruct_qme_RUN
                $(C1) $$< $$($(GENERATED)_PATH) $(ATTRINFO_DIR)/p10_qme_attributes.xml $(ATTRFILES);
endef
$(call BUILD_GENERATED)



