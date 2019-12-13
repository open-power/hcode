# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/fapi2.env.mk $
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

# Makefile to define all the variables and paths for building FAPI2 under
# Cronus.

# Attribute XML files.
# Filter out Temp defaults XML file from Attribute XML files.
# NOTE: The hb_temp_defaults.xml file is not a normal attribute file with the
#       normal structures that define the attribute itself.  It temporarily
#       provides default values for new attributes defined in other files.
FAPI2_ATTR_XML += $(wildcard $(addsuffix /procedures/xml/attribute_info/*.xml, \
	$(addprefix $(ROOTPATH)/chips/,$(CHIPS))))
FAPI2_ATTR_XML += $(filter-out \
        $(ROOTPATH)/hwpf/fapi2/xml/attribute_info/hb_temp_defaults.xml, \
        $(wildcard $(ROOTPATH)/hwpf/fapi2/xml/attribute_info/*.xml))
FAPI2_ATTR_XML += $(wildcard $(ROOTPATH)/generic/procedures/xml/attribute_info/*.xml)

# Error XML files.
FAPI2_ERROR_XML += $(wildcard $(addsuffix /procedures/xml/error_info/*.xml, \
	$(addprefix $(ROOTPATH)/chips/,$(CHIPS))))
FAPI2_ERROR_XML += $(wildcard $(ROOTPATH)/hwpf/fapi2/xml/error_info/*.xml)
FAPI2_ERROR_XML += $(wildcard $(ROOTPATH)/generic/procedures/xml/error_info/*.xml)

# MRW XML files.
FAPI2_MRW_XML += $(wildcard $(addsuffix /procedures/xml/mrw/*.xml, \
	$(addprefix $(ROOTPATH)/chips/,$(CHIPS))))

# Chip SCOM address header files.
FAPI2_PLAT_INCLUDE += $(addsuffix /common/include, \
	$(addprefix $(ROOTPATH)/chips/,$(CHIPS)))

# HW Init header files.
FAPI2_PLAT_INCLUDE += $(addsuffix /procedures/hwp/initfiles, \
	$(addprefix $(ROOTPATH)/chips/,$(CHIPS)))

# Utils header files
FAPI2_PLAT_INCLUDE += $(addsuffix /utils, \
	$(addprefix $(ROOTPATH)/chips/,$(CHIPS)))

# Scan Rings header files
FAPI2_PLAT_INCLUDE += $(addsuffix /utils/imageProcs, \
	$(addprefix $(ROOTPATH)/chips/,$(CHIPS)))

# include the ffdc collection procedures
FAPI2_PLAT_INCLUDE += $(addsuffix /procedures/hwp/ffdc, \
					  $(addprefix $(ROOTPATH)/chips/,$(CHIPS)))

# FAPI2 paths
FAPI2_PATH = $(ROOTPATH)/hwpf/fapi2
FAPI2_PLAT_INCLUDE += $(FAPI2_PATH)/include

# FAPI2 paths from Cronus.
#FAPI2_PLAT_INCLUDE += $(ECMD_PLAT_INCLUDE)
#FAPI2_PLAT_INCLUDE += $(CTEPATH)/tools/ecmd/$(ECMD_RELEASE)/ext/fapi2/capi
#FAPI2_PLAT_INCLUDE += $(FAPI2_PATH)/include/plat
#FAPI2_PLAT_LIB = $(ECMD_PLAT_LIB)
#FAPI2_SCRIPT_PATH += \
#	$(CTEPATH)/tools/ecmd/$(ECMD_RELEASE)/ext/fapi2/capi/scripts

# Extra libraries to link against for Cronus.
#FAPI2_REQUIRED_LIBS += $(ECMD_REQUIRED_LIBS)
#FAPI2_REQUIRED_LIBS += $(FAPI2_PLAT_LIB)/fapi2ClientCapi.a
#FAPI2_REQUIRED_LIBS += $(FAPI2_PLAT_LIB)/libfapi2.so
