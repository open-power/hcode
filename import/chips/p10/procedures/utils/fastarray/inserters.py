# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/fastarray/inserters.py $
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

from collections import namedtuple
from bitstring import Bits, BitArray

# Named tuples for array definition entries
Ring = namedtuple("Ring", "name address length")
Array = namedtuple("Array", "name cols rows firstbit slowness fakestart row_ranges deswizzle inversion inserter")

def ziprange(from1, to1, step1, from2, to2, step2):
    "Create a list of two interleaved number ranges"
    list1 = list(range(from1, to1, step1))
    list2 = list(range(from2, to2, step2))
    result = list1 + list2
    result[0::2] = list1
    result[1::2] = list2
    return result

# Constants for InterleavedInserter
INTERLEAVE = 1
SLICE = 2

class ArrayInserter(object):
    "Trivial array inserter that assumes one full array row coming out on capture latches per cycle"
    def get_insert_pos(self, array_info, row, col):
        return row * array_info.cols + col

# Address mappings translate a steadily increasing address into the way the array address increases during ABIST.
# This is helpful if the array address bits are swizzled between the ABIST engine and the array.
def icache_address_map(abist_row):
    return ((abist_row >> 3) & 0x1F) | ((abist_row & 0x7) << 5)

def dcache_address_map(abist_row):
    return ((abist_row & 0x40) >> 1) | ((abist_row & 0x20) << 1) | (abist_row & 0x1F)

class InterleavedInserter(object):
    """
    Generalized inserter for arrays that put out their data in some interleaved fashion.

    The basic assumption is that each row of array data is split into so-called "slices".

    bit_swizzle and bit_factor specify how this slicing happens:
      INTERLEAVE --> bits are assigned to slices round robin
      bit_swizzle == INTERLEAVE, bit_factor == 4:
        array row ABCDABCDABCDABCDABCDABCD -> slices AAAAAA, BBBBBB, CCCCCC, DDDDDD
      bit_swizzle == INTERLEAVE, bit_factor == 6:
        array row ABCDEFABCDEFABCDEFABCDEF -> slices AAAA, BBBB, CCCC, DDDD, EEEE, FFFF

      Special case: If bit_factor is negative, the round robin is reverse:
      bit_swizzle == INTERLEAVE, bit_factor == 4:
        array row DCBADCBADCBADCBADCBADCBA -> slices AAAAAA, BBBBBB, CCCCCC, DDDDDD

      SLICE --> the array row is chopped into N equally sized parts
      bit_swizzle == SLICE, bit_factor == 4:
        array row AAAAAABBBBBBCCCCCCDDDDDD -> slices AAAAAA, BBBBBB, CCCCCC, DDDDDD
      bit_swizzle == SLICE, bit_factor == 6:
        array row AAAABBBBCCCCDDDDEEEEFFFF -> slices AAAA, BBBB, CCCC, DDDD, EEEE, FFFF

    row_swizzle and row_factor specify how these slices come out on the capture latches:
      row_swizzle == INTERLEAVE:
        All slices for row 0 come out, then all slices for row 1, ...
        row_factor is usually equal to bit_factor
      row_swizzle == SLICE:
        First all the first slices come out for all rows in order, then all the second slices, ...
        row_factor denotes the distance from row 0 in one set of slices to row 0 in the next set.
        Note that row_factor may be greater than the number of array rows if there are gaps
        between slice sets.
    """
    def __init__(self, bit_swizzle, bit_factor, row_swizzle, row_factor, address_mapping):
        self.bit_swizzle      = bit_swizzle
        self.bit_factor       = abs(bit_factor)
        self.row_swizzle      = row_swizzle
        self.row_factor       = row_factor
        slice_distance        = row_factor if row_swizzle == SLICE else 1
        self.slice_distance   = -slice_distance if bit_factor < 0 else slice_distance
        self.slice_correction = 1 if bit_factor < 0 else 0
        self.address_mapping  = address_mapping or (lambda x: x)

    def get_insert_pos(self, array_info, row, col):
        if self.row_swizzle == INTERLEAVE:
            array_row = row // self.row_factor
        elif self.row_swizzle == SLICE:
            array_row = row % self.slice_distance

        array_row = self.address_mapping(array_row)

        slice_idx = ((row + self.slice_correction) // self.slice_distance) % self.bit_factor

        if self.bit_swizzle == INTERLEAVE:
            insert_col = (col * self.bit_factor) + slice_idx
        elif self.bit_swizzle == SLICE:
            insert_col = slice_idx * (array_info.cols // self.bit_factor) + col

        return (array_row * array_info.cols + insert_col if insert_col < array_info.cols else None)
