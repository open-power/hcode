#!/bin/sh
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/fastarray/reset2putlatch.sh $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2020
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

# Translate reset files into eCmd scripts that use putlatch for override
# image generation, apply some transformations in the process

echo "ecmd -stdin <<EOF"
echo "ringcache enable"
cat $@ | grep -v SPARE_PIPE_ABIST_AT_SPEED | sed 's/B0.C0.S0.P0.E10.EX00./ECP./;s/ECP\.EC\.MU/ECP.EC.mu/;s/^ALTER /putlatch pu.c -cft -ib -quiet /;s/(.*)//;s/ B$//;'
echo "ringcache disable"
echo "EOF"
