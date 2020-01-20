# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/tools/platXML/platxmlfiles.mk $
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

#xml preprocessor for attributes and errors
ERRORINFO_DIR=$(ROOTPATH)/chips/p10/procedures/xml/error_info/
ATTRINFO_DIR=$(ROOTPATH)/chips/p10/procedures/xml/attribute_info/
ATTRFAPI_DIR=$(ROOTPATH)/hwpf/fapi2/xml/attribute_info/

ATTRFILES := $(ATTRINFO_DIR)/p10_ipl_attributes.xml
ATTRFILES += $(ATTRINFO_DIR)/p10_runn_attributes.xml
ATTRFILES += $(ATTRINFO_DIR)/p10_chip_ec_attributes.xml
ATTRFILES += $(ATTRINFO_DIR)/p10_pervasive_attributes.xml
ATTRFILES += $(ATTRINFO_DIR)/p10_nest_attributes.xml
ATTRFILES += $(ATTRINFO_DIR)/pm_hwp_attributes.xml
ATTRFILES += $(ATTRFAPI_DIR)/unit_attributes.xml
ATTRFILES += $(ATTRFAPI_DIR)/chip_attributes.xml
ATTRFILES += $(ATTRFAPI_DIR)/system_attributes.xml
ERRORFILES_HCD:=$(sort $(ERRORFILES) $(wildcard $(ERRORINFO_DIR)/p10_hcd_*.xml))
#add this for ffdc in ring library
ERRORFILES_SBE:=$(ERRORINFO_DIR)/p10_sbe_ring_errors.xml
