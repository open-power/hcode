# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ppe_object.rules.mk $
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

# Makefile that defines how we build .o files from .S and .c
#    Currently, we are using power-pc ppe assembler
#
# Macros:
#    __GENERATE_PPE_OBJECTRULES: Macro to compiler .S/.c into .o
#    Extra step required for PPC2PPE environment .s to .es to .o
#
#    For the PPE native compiler, it is anticipated that eventually
#    the .o will be generated directly from source, but until it's
#    mature, an intermediate .s is generated.
#
#    The Trace strings are also extracted at this point.
#
# Inputs:
#    $1 == output path
#    $2 == src path
#    $3 == TARGET tool chain
# $1/%.o: private LOCALCOMMONFLAGS += $$($$(@F)_COMMONFLAGS)

define __GENERATE_PPE_OBJECTRULES
.PRECIOUS: $(1)/%.s

$1/%.s : $(2)/%.S | ppetracepp
		$(C2) "    GEN        $$(@F)"
		$(C1) mkdir -p $$(@D)
		$(C1) $$(PK_TRACEPP) $$($(3)_PREFIX)$$(CC) -E $$(LOCALCOMMONFLAGS) \
			-o $$@ $$^

$(1)/%.s: $(2)/%.c | ppetracepp
		$(C2) "    DEP        $$(@F:.s=.dep)"
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(3)_PREFIX)$$(CC) -M -MP -MT $$@ \
			$$(COMMONFLAGS) $$(CFLAGS) \
			$$(LOCALCOMMONFLAGS) $$(LOCALCFLAGS) \
			$$< -o $$(subst .s,.dep,$$@)

		$(C2) "    CC$(3)      $$(@F)"
		$(C1) $$(PK_TRACEPP) $$($(3)_PREFIX)$$(CC) $$(COMMONFLAGS) \
			$$(CFLAGS) $$(LOCALCOMMONFLAGS) $$(LOCALCFLAGS) \
			$$< -S -o $$@


ifeq "PPE" "$(3)"
$1/%.o : $1/%.s
		$(C2) "    GEN        $$(@F)"
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(3)_PREFIX)$$(AS) $$(ASFLAGS) -o $$@ $$^

$(1)/%.s: $(2)/%.C | ppetracepp
		$(C2) "    DEP        $$(@F:.s=.dep)"
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(3)_PREFIX)$$(CXX) -M -MP -MT $$@ \
			$$(COMMONFLAGS) $$(CFLAGS) \
			$$(LOCALCOMMONFLAGS) $$(LOCALCFLAGS) \
			$$< -o $$(subst .s,.dep,$$@)

		$(C2) "    C++$(3)     $$(@F)"
		$(C1) $$(PK_TRACEPP) $$($(3)_PREFIX)$$(CXX) $$(COMMONFLAGS) \
			$$(CFLAGS) $$(LOCALCOMMONFLAGS) $$(LOCALCFLAGS) $$(PPE_CXXFLAGS) \
			$$< -S -o $$@

else

.PRECIOUS: $(1)/%.es

$(1)/%.es: $(1)/%.s
		$(C2) "    PCP        $$(@F)"
		$(C1) $(PCP) -e -b -f $$< > /dev/null

$(1)/%.o: $(1)/%.es
		$(C2) "    GEN        $$(@F)"
		$(C1) $$(PPE_BINUTILS_PREFIX)$$(AS) $$(ASFLAGS) -o $$@ $$<

endif

endef

