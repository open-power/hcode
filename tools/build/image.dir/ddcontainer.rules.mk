# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ddcontainer.rules.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2017
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG

DD_CONTAINER_TOOL = $(eval $(call _DD_CONTAINER_TOOL,$1,$2,$3))

# call p9_dd_container_tool.exe to create specified container
#
# outdated container is always removed first, because the tool
# retains an existing container, and hence it complains about
# duplicate dd levels being added to an existing container
#
# $1 dependencies (usually blocks to be added)
# $2 container to be created
# $3 blocks and DD levels to be added
define _DD_CONTAINER_TOOL
$2 : $(EXEPATH)/p9_dd_container_tool.exe $1
	$(C2) "    GEN        $$(@F)"
	$(C1) rm -f $2
	$(C1) $(EXEPATH)/p9_dd_container_tool.exe --cont $2 --command add $3

$(call __CLEAN_TARGET,$2)
endef

BUILD_DD_LEVEL_CONTAINER = $(eval $(call _BUILD_DD_LEVEL_CONTAINER,$1,$2))

# creates parameters for p9_dd_container_tool command line, e.g.
#
# $(IMAGE)_DD_CONT = --cont output/images/sgpe_image/p9n.stop_gpe.bin
# $(IMAGE)_DD_ADD  = --dd 10 --block output/images/stop_gpe_p9n10/stop_gpe_p9n10.bin \
#                    --dd 20 --block output/images/stop_gpe_p9n20/stop_gpe_p9n20.bin
#
# assuming this directory structure and these file names:
#
# output/images/<base file name>_<chip id><ec level>/<base file name>_<chip id><ec level>.bin
#
# $1 == chipId
# $2 == base name of file without chipid/dd suffix

define _BUILD_DD_LEVEL_CONTAINER
$(eval $(IMAGE)_DD_CONT_$2?=$$($(IMAGE)_PATH)/$1.$2.bin)
$(eval $(IMAGE)_DD_ADD_$2?=)
$(eval $(IMAGE)_DD_DEPS_$2?=)

$(foreach ec, $($(1)_EC),\
        $(eval $(IMAGE)_DD_FILE_$2_$(ec)=$(IMAGEPATH)/$2_$1$(ec)/$2_$1$(ec).bin)\
        $(eval $(IMAGE)_DD_DEPS_$2+= $$($(IMAGE)_DD_FILE_$2_$(ec)))\
	$(eval $(IMAGE)_DD_ADD_$2+= --dd 0x$(ec) --block $$($(IMAGE)_DD_FILE_$2_$(ec))))

$(eval $(call DD_CONTAINER_TOOL,$$($(IMAGE)_DD_DEPS_$2),$$($(IMAGE)_DD_CONT_$2),$$($(IMAGE)_DD_ADD_$2)))
endef

