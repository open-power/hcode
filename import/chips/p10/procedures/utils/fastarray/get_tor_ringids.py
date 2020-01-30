#!/usr/bin/python
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/fastarray/get_tor_ringids.py $
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

"""
Helper script for fast array dump - extracts ring names and IDs from the output of
"ipl_image_tool.exe dissect", applies a name filter and outputs the ringIDs as
-r parameters for "fastarray.py setup".
"""

import sys, re

filters = [re.compile(arg) for arg in sys.argv]

rings = []
ring_id = ring_name = None

for line in sys.stdin:
    if line.startswith("ringId"):
        ring_id = line.split("=")[1].strip()
    elif line.startswith("ringName"):
        ring_name = line.split("=")[1].strip()
    elif line.startswith("-----"):
        ring_id = ring_name = None

    if ring_id and ring_name:
        rings.append((ring_name, ring_id))
        ring_id = ring_name = None

for ring_name, ring_id in rings:
    if any(rex.match(ring_name) for rex in filters):
        sys.stdout.write(" -r " + ring_id)
