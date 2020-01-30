#!/usr/bin/python
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/fastarray/fastarray.py $
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
Fast Array Dump

This Python file can be used in two forms - it can be loaded as a module,
in which case it will export functions for fast array processing. Or it can
be run as a command-line application, in which case it will provide a front-
end for said processing functions.

It provides two functions related to fastarray processing:
  1) Set up a fast array dump. This will generate control data for the
     p10_sbe_fastarray procedure.
  2) Extract a fast array dump. This will extract array data from a dump
     returned by p10_sbe_fastarray and return it as either a virtual ring
     image, or in the form of one hex dump per array (mostly for debugging).

Both these functions require input in the form of Fast Array Definition tables,
which are essentially Python files containing the array definitions.
"""

import re, struct, imp
from argparse import ArgumentParser, ArgumentError
from bitstring import Bits, BitArray, ConstBitStream
from os import listdir, path, mkdir
from collections import defaultdict

DEFAULT_OPT_LIMIT = 6

class ArrayDefError(Exception):
    pass

class _Array(object):
    def __init__(self, entry, ring):
        self.name,       self.cols,  self.rows,  self.firstbit,  self.slowness,  self.fakestart,  self.row_ranges,  self.deswizzle,  self.inversion,  self.inserter = (
            entry.name, entry.cols, entry.rows, entry.firstbit, entry.slowness, entry.fakestart, entry.row_ranges, entry.deswizzle, entry.inversion, entry.inserter)
        self.bits = BitArray(self.nbits)
        self.care_bits = BitArray(ring.length)
        for pos in self.deswizzle:
            self.care_bits[pos + self.firstbit] = True
        self.care_rows = set()
        for firstrow, numrows in self.row_ranges:
            self.care_rows.update(range(firstrow, firstrow + numrows))
        self.firstrow = self.row_ranges[0][0]
        self.complete = True

    @property
    def nbits(self):
        return self.cols * self.rows

def _u32tobytes(value):
    return (value >> 24, (value >> 16) & 0xFF, (value >> 8) & 0xFF, value & 0xFF)

def _u16tobytes(value):
    return ((value >> 8) & 0xFF, value & 0xFF)

class FastArrayDef(object):
    """
    Encapsulates a fast array definition and provides methods to set up a dump and extract data.
    """
    def __init__(self, def_fname):
        """
        Load a definition file from def_fname.
        Raises an ArrayDefError if the file could not be loaded properly.
        """
        try:
            table_mod = imp.load_source("tables", def_fname)
            self.ring_info = table_mod.ring_info
            self.fastarray_defs = [_Array(entry, self.ring_info) for entry in table_mod.fastarray_defs]
        except (ImportError, KeyError) as e:
            raise ArrayDefError("Failed to load array definitions: " + str(e))

    # -------------------------------------------------------------------------------------------------------
    # SETUP
    # -------------------------------------------------------------------------------------------------------

    @staticmethod
    def _optimize(carebits, limit):
        """
        Optimize a run of care bits by eliminating don't care runs
        that are shorter than limit bits. This will yield smaller
        control data at the cost of slightly more dumped bits.
        """
        zerolen = 0
        for i, value in enumerate(carebits):
            if not value:
                zerolen += 1
            else:
                if zerolen > 0 and zerolen <= limit:
                    carebits.set(True, range(i - zerolen, i))
                zerolen = 0

    @staticmethod
    def _gen_care_data(carebits):
        """
        Emit run length data for a string of care bits.
        """
        if carebits[0]:
            raise ValueError("Care bits must not start with a 1")

        prev_bit = carebits[0]
        run_len = 1
        for bit in carebits[1:]:
            if bit != prev_bit:
                yield run_len
                prev_bit = bit
                run_len = 0
            run_len += 1

        yield run_len
        yield 0

    @staticmethod
    def _encode_care_data(care_data):
        """
        Perform variable length integer encoding on care run length values and yield individual bytes.
        Variable length integer encoding corresponds to the one in FAPI2's hwp_bit_ostream.
        """
        for value in care_data:
            for i in (4,3,2,1):
                if value >= 1 << (7*i):
                    yield (value >> 7*i) & 0x7F | 0x80
            yield value & 0x7F

    @staticmethod
    def _get_row_ranges(arrays):
        """
        Extract lower and upper row limits from array information,
        return separate lists with lower and upper limits.
        """
        return list(zip(*[(row_range[0], row_range[0] + row_range[1]) for array in arrays for row_range in array.row_ranges]))

    def select_arrays(self, patterns):
        """
        Select and return all arrays matching one of the supplied wildcard patterns.
        Raises an ArrayDefError if a pattern does not select any arrays.
        """
        selected = set()
        for pattern in patterns:
            rex = re.compile(pattern.upper().replace("*", ".*"))
            found = False
            for array in self.fastarray_defs:
                if rex.match(array.name):
                    found = True
                    selected.add(array)

            if not found:
                raise ArrayDefError("Pattern '%s' did not select any arrays" % pattern)

        # Preserve array order
        return [array for array in self.fastarray_defs if array in selected]

    def generate_control_data(self, arrays, ring_ids=[], opt_limit=DEFAULT_OPT_LIMIT, print_progress=False):
        """
        Generate control data for a given set of arrays. Returns a bytearray containing the control data.

        @param arrays List of arrays to be dumped
        @param opt_limit Care data optimization factor. Short runs of don't-care will be eliminated, trading
                         control data size for unnecessarily dumped ring bits. opt_limit is the maximum
                         length of don't-care runs that will be removed.
        @param print_progress Print progress information during processing and a summary at the end.
        """

        # Figure out total amount of ABIST rows and all rows where an array joins or leaves the party.
        lower_limits, upper_limits = self._get_row_ranges(arrays)
        total_rows = max(upper_limits)
        change_rows = set(lower_limits + upper_limits)

        carebits = BitArray(self.ring_info.length)
        prev_carebits = BitArray(self.ring_info.length)

        max_care_values = 0
        max_care_bytes = 0

        total_carebits = 0
        total_care_values = 0
        total_care_bytes = 0

        prev_row = 0

        # Seed control data with the ring address and number of ring ids
        control_data = bytearray(_u32tobytes(self.ring_info.address) + _u32tobytes(len(ring_ids)))

        # Add ring IDs
        for ring_id in ring_ids:
            control_data.extend(_u32tobytes(ring_id))

        # We only need to look at ABIST cycles where the set of arrays to be dumped might be changing
        for row in sorted(change_rows):

            # Determine full set of care bits and eliminate short runs of don't care
            carebits.set(False)
            for array in arrays:
                if row in array.care_rows:
                    carebits |= array.care_bits
            self._optimize(carebits, opt_limit)

            # After optimization care bits might be the same as before, so only write
            # updated care data if they really changed.
            if carebits != prev_carebits:
                nrows = row - prev_row
                total_carebits += nrows * carebits.count(True)

                # Now write the previous set of care data, since only now we know how many
                # rows it covers.
                care_data = list(self._gen_care_data(prev_carebits))
                care_bytes = bytearray(self._encode_care_data(care_data))
                care_bytes.extend([0] * (-len(care_bytes) & 3)) # Pad to 4 byte boundary

                if print_progress:
                    print("Row %04d: new carebits - %d/%d bits - %d values / %d bytes of care data" %
                          (row, carebits.count(True), len(carebits), len(care_data), len(care_bytes)))

                total_care_values += len(care_data)
                total_care_bytes += len(care_bytes)
                max_care_values = max(max_care_values, len(care_data))
                max_care_bytes = max(max_care_bytes, len(care_bytes))

                if prev_carebits:
                    nwords = len(care_bytes) // 4
                    control_data.extend((nrows >> 8, nrows & 0xFF, nwords >> 8, nwords & 0xFF))
                    control_data.extend(care_bytes)
                else:
                    control_data.extend((nrows >> 8, nrows & 0xFF, 0, 0))

                prev_carebits[:] = carebits
                prev_row = row

        # Write "end of transmission" marker
        control_data.extend((0, 0, 0, 0))

        if print_progress:
            print("Total carebits: %d/%d" % (total_carebits, total_rows * len(carebits)))
            print("Total care data: %d values / %d bytes" % (total_care_values, total_care_bytes))
            print("Total control data: %d bytes" % len(control_data))
            print("Max care data in a row: %d values / %d bytes" % (max_care_values, max_care_bytes))

        return control_data

    # -------------------------------------------------------------------------------------------------------
    # EXTRACTION
    # -------------------------------------------------------------------------------------------------------

    @staticmethod
    def _read_value(bits):
        """
        Read a variable length integer from a bit stream.
        Variable length integer encoding corresponds to the one in FAPI2's hwp_bit_ostream.
        """
        value = 0
        while True:
            byte = bits.read("uint:8")
            value = (value << 7) | (byte & 0x7F)
            if not byte & 0x80:
                return value

    @staticmethod
    def _expand(bits, expansions):
        """
        Expand a string of bits according to an expansion list that reflects don't care information.
        Runs of zeros are inserted at the specified positions.
        """
        for pos, nzeros in expansions:
            bits[pos:pos] = Bits(nzeros)

    def load_sbe_dump(self, dump_bytes):
        """
        SBE dump loader for extract_fastarray_dump.

        @param dump_bytes bytearray containing the full SBE dump data
        @return a generator object to be fed into extract_fastarray_dump
        """
        dump_data = ConstBitStream(bytes=dump_bytes)
        empty = Bits(self.ring_info.length)
        row = 0
        while True:
            nrows, nwords = dump_data.readlist("uint:16, uint:16")

            # Exit if end of transmisison
            if not nrows:
                break

            # If we only skip cycles, yield empty data
            if not nwords:
                for i in range(nrows):
                    yield row, empty, empty
                    row += 1
                continue

            # Otherwise decode care information into an expansion list
            care_values = ConstBitStream(dump_data.read(nwords * 32))
            expansions = []
            pos = 0
            nvalid = 0
            skip = 1
            dump = 1
            while skip and dump:
                skip = self._read_value(care_values)
                dump = self._read_value(care_values) if skip else 0

                expansions.append((pos, skip))
                pos += skip + dump
                nvalid += dump

            # Expand a string of ones to get the care bits
            data_valid = BitArray(int=-1, length=nvalid)
            self._expand(data_valid, expansions)
            assert(len(data_valid) == self.ring_info.length)

            # For each row, expand the compressed bits into ring images
            for i in range(nrows):
                ring_data = BitArray(dump_data.read(nvalid))
                self._expand(ring_data, expansions)
                assert(len(ring_data) == self.ring_info.length)
                yield row, ring_data, data_valid
                row += 1

            # Align read pointer to the next 32-bit boundary
            dump_data.pos += -dump_data.pos & 31

    def extract_fastarray_dump(self, arrays, dump_data, debug=False):
        """
        Extract a fast array dump.

        @param arrays Set of arrays to extract; should be the same set that was used with generate_control_data earlier
        @param dump_data Generator for dump data, usually returned by load_sbe_dump
        @param debug Print debug information

        @return array_contents, fakering, incomplete_arrays
                array_contents:    A list of (str, list(Bits)) tuples containing the array name and row-for-row array data.
                fakering:          A BitArray containing the full fakering data.
                incomplete_arrays: A list with names of arrays for which data was missing in the dump.
        """
        # Figure out the set of rows where care information changes
        lower_limits, upper_limits = self._get_row_ranges(arrays)
        change_rows = set(lower_limits + upper_limits)
        care_arrays = []

        tempbits = BitArray(max(array.cols for array in arrays))
        for row, ring_data, data_valid in dump_data:
            if row in change_rows:
                care_arrays = [array for array in arrays if row in array.care_rows]

            for array in care_arrays:
                # Figure out local row, skip rows on slow arrays
                local_row = row - array.firstrow
                if local_row % array.slowness:
                    continue
                local_row //= array.slowness

                # For each capture latch position, pick the correct bit from the row's ring image (using deswizzle table),
                # then use the inserter to figure out where it goes in the array image, invert if necessary and put it there.
                insert_positions = []
                for col, frombit in enumerate(array.deswizzle):
                    if not data_valid[frombit + array.firstbit]:
                        array.complete = False
                        if debug:
                            print("missing bit! array=%s row=%d col=%d" % (array.name, row, col))
                    insert_pos = array.inserter.get_insert_pos(array, local_row, col)
                    if debug:
                        insert_positions.append(insert_pos)
                    if insert_pos is not None:
                        array.bits[insert_pos] = ring_data[frombit + array.firstbit] ^ (False if array.inversion is None else array.inversion[col])

                if debug:
                    print("%04d"%row, "%03d"%local_row, Bits(ring_data[frombit + array.firstbit] for frombit in array.deswizzle))

        # Post-process data for returning, identify incomplete arrays
        array_contents = []
        combined_bits = BitArray(sum(array.nbits for array in self.fastarray_defs))
        for array in arrays:
            needrow = max(array.care_rows)
            if row < needrow:
                array.complete = False
                if debug:
                    print("Not enough ABIST rows in dump to completely extract %s! row=%d needrow=%d" % (arry.name, row, needrow))

            array_contents.append((array.name, list(array.bits.cut(array.cols))))
            combined_bits[array.fakestart:array.fakestart + array.nbits] = array.bits

        return array_contents, combined_bits, [array.name for array in arrays if not array.complete]

# -------------------------------------------------------------------------------------------------------
# COMMAND LINE INTERFACE
# -------------------------------------------------------------------------------------------------------

def _cmd_setup(array_def, arrays, args):
    print(list(array.name for array in arrays))

    control_data = array_def.generate_control_data(arrays, ring_ids = args.putring, opt_limit = args.optlimit, print_progress = True)

    if args.ctable:
        with open(args.outfile, "w") as f:
            f.write("uint32_t fastarray_control = {\n");
            for i in range(0, len(control_data), 32):
                f.write("    " + " ".join("0x%08X," % word for word in struct.iter_unpack(">L", control_data[i:i+32])) + "\n")
            f.write("};")
    else:
        with open(args.outfile, "wb") as f:
            f.write(control_data)

def _load_debug_dumps(dirname, ring_info):
    """
    Load dumps from a directory containing numbered full ring images.
    """
    rows = dict()
    for fname in listdir(dirname):
        if ring_info.name.lower() not in fname.lower():
            continue

        try:
            row = int(fname.split(".")[1])
            with open(path.join(dirname, fname), "rb") as f:
                rows[row] = Bits(bytes=f.read(), length=ring_info.length)
        except:
            pass

    all_0 = Bits(ring_info.length)
    all_1 = ~all_0

    for row in range(max(rows.keys()) + 1):
        if row in rows:
            yield (row, rows[row], all_1)
        else:
            yield (row, all_0, all_0)

def _hex_left(bits):
    """
    Like bits.hex, but pads to multiple of four bits by appending zeros.
    """
    return (bits + Bits(-len(bits) & 3)).hex

def _cmd_extract(array_def, arrays, args):
    if path.isdir(args.dump):
        dump_data = _load_debug_dumps(args.dump, array_def.ring_info)
    else:
        with open(args.dump, "rb") as f:
            dump_data = array_def.load_sbe_dump(f.read())

    array_contents, fakering, incomplete_arrays = array_def.extract_fastarray_dump(arrays, dump_data, debug=args.debug)

    if args.split:
        try:
            mkdir(args.outfile)
        except OSError:
            pass

        for name, rows in array_contents:
            with open(path.join(args.outfile, name), "w") as f:
                for row in rows:
                    f.write("0x"+_hex_left(row).upper()+"\n")
    else:
        with open(args.outfile, "wb") as f:
            fakering.tofile(f)

    if incomplete_arrays:
        print("Some arrays have incomplete data:", incomplete_arrays)

if __name__ == "__main__":
    parser = ArgumentParser(description="Dump array contents in parallel using ABIST engines")
    parsers = parser.add_subparsers()

    sub = parsers.add_parser("setup", description="Create setup data for the SBE based on a set of arrays to be dumped")
    sub.add_argument("def_file", help="Array definition file to use")
    sub.add_argument("arrays", metavar="array", nargs="*", help="Arrays to dump. May contain the wildcard character '*' to match multiple arrays. Defaults to all.")
    sub.add_argument("--putring", "-r", action="append", type=lambda x: int(x, 0), default=[], help="Perform a putRing for the supplied ring ID before starting dump. "
                     "Multiple rings may be specified this way and will be applied in order.")
    sub.add_argument("--outfile", "-o", default="fastarray.control", help="Name of control file to write, defaults to fastarray.control")
    sub.add_argument("--optlimit", type=int, default=DEFAULT_OPT_LIMIT, help="Optimize care data by eliminating don't-care runs of this many bits or less. Defaults to 6.")
    sub.add_argument("--ctable", "-c", action="store_true", help="Output a C table instead of a binary file")
    sub.set_defaults(func=_cmd_setup)

    sub = parsers.add_parser("extract", description="Extract arrays from a raw dump")
    sub.add_argument("def_file", help="Array definition file to use")
    sub.add_argument("dump", help="Dump file created by p10_sbe_fastarray, or directory with raw ring dumps for debugging")
    sub.add_argument("arrays", metavar="array", nargs="*", help="Arrays to dump. May contain the wildcard character '*' to match multiple arrays. Defaults to all.")
    sub.add_argument("--split", "-s", action="store_true", help="Split arrays into individual hex dumps instead of storing a binary fakering image.")
    sub.add_argument("--outfile", "-o", default="fastarray.dump", help="File or directory name to store output into. Defaults to fastarray.dump")
    sub.add_argument("--debug", action="store_true", help="Print some useless debug information during processing")
    sub.set_defaults(func=_cmd_extract)

    args = parser.parse_args()

    try:
        array_def = FastArrayDef(args.def_file)

        if args.arrays:
            arrays = array_def.select_arrays(args.arrays)
        else:
            arrays = array_def.fastarray_defs

        args.func(array_def, arrays, args)

    except ArrayDefError as e:
        print(e)
        exit(1)
