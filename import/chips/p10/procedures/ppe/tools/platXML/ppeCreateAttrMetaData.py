#!/usr/bin/python
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/tools/platXML/ppeCreateAttrMetaData.py $
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

import re
import struct

COMMENTS = re.compile(r'''
    (//[^\n]*(?:\n|$))    # Everything between // and the end of the line/file
    |                     # or
    (/\*.*?\*/)           # Everything between /* and */
''', re.VERBOSE)

META_MAGIC_WORD   = "QMEATMT"
META_SCOPE_WORD   = ["QMEASYS", "QMEAPRC", "QMEAPRV", "QMEAEC_", "QMEAEX_", "QMEAEQ_"]
META_DATA_VERSION = 1
DUMMY_BUFFER_SIZE = 32

#name, data_size, array_dim, data_var, byte_swap0, byte_swap1
attr_list = []

attr_meta = {
  "TARGET_TYPE_SYSTEM"    : [],
  "TARGET_TYPE_PROC_CHIP" : [],
  "TARGET_TYPE_PERV"      : [],
  "TARGET_TYPE_CORE"      : [],
  "TARGET_TYPE_EX"        : [],
  "TARGET_TYPE_EQ"        : []
}

target_type = {
  "QMEASYS" : ["TARGET_TYPE_SYSTEM",    "l_sys_tgt",   "l_sys_bytes"],
  "QMEAPRC" : ["TARGET_TYPE_PROC_CHIP", "i_chip_tgt",  "l_proc_bytes"],
  "QMEAPRV" : ["TARGET_TYPE_PERV",      "l_perv_tgts", "l_perv_bytes"],
  "QMEAEC_" : ["TARGET_TYPE_CORE",      "l_ec_tgts",   "l_ec_bytes"],
  "QMEAEX_" : ["TARGET_TYPE_EX",        "l_ex_tgts",   "l_ex_bytes"],
  "QMEAEQ_" : ["TARGET_TYPE_EQ",        "l_eq_tgts",   "l_eq_bytes"]
}

data_type = {
  "uint8_t" : [1, "uint8_",  " ", " "],
  "uint16_t": [2, "uint16_", "htobe16(", ")"],
  "uint32_t": [4, "uint32_", "htobe32(", ")"],
  "uint64_t": [8, "uint64_", "htobe64(", ")"],
  "int8_t"  : [1, "int8_",   " ", " "],
  "int16_t" : [2, "int16_",  "htobe16(", ")"],
  "int32_t" : [4, "int32_",  "htobe32(", ")"],
  "int64_t" : [8, "int64_",  "htobe64(", ")"]
}


def parse_attr(attrIdFile):
  hash_start = 0
  print "Parsing " + attrIdFile
  attr_id = open(attrIdFile)
  for line in attr_id:
    if "enum AttributeId" in line:
      hash_start = 1
      continue
    if "};" in line and hash_start == 1:
      hash_start = 0
      index = 0
      #print attr_list
      continue
    if hash_start == 1 and "ATTR_" in line:
      words  = line.split()
      #print words
      attr_list.append([words[0]])
      continue
    if hash_start == 0:
      if "typedef" in line:
        words = line.split()
        #print words
        attr_list[index].append(data_type[words[1]][0])
        dim = re.split("[\[\]]", words[2])
        #print dim
        if len(dim) > 2:
          attr_list[index].append(int(dim[1]))
        else:
          attr_list[index].append(0)
        attr_list[index].append(data_type[words[1]][1])
        attr_list[index].append(data_type[words[1]][2])
        attr_list[index].append(data_type[words[1]][3])
      if "TARGET_TYPE_" in line:
        words = line.split()
        #print words
        target = words[4].split(';')
        entry  = attr_list[index]
        #print attr_list
        attr_meta[target[0]].append(entry)
        index += 1
    continue
  attr_id.close()
  print attr_meta

def write_meta(binaryFile, hwPrcdFile):
  hwp_file  = open(hwPrcdFile, "wb")
  meta_data = open(binaryFile, "wb")

  magic_word = [ord(c) for c in META_MAGIC_WORD]
  #for num in magic_word:
  #  print(hex(num)),
  meta_data.write(bytearray(magic_word))
  meta_data.write(struct.pack('>b', META_DATA_VERSION))

  # do this to avoid stupid tagging tool think this is tagging
  hwp_file.write("/* IBM_PRO" + "LOG_BEGIN_TAG                                                   */\n")
  hwp_file.write("""/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: chips/p10/procedures/hwp/pm/p10_qme_build_attributes.C $      */
/*                                                                        */
/* IBM CONFIDENTIAL                                                       */
/*                                                                        */
/* EKB Project                                                            */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* The source code for this program is not published or otherwise         */
/* divested of its trade secrets, irrespective of what has been           */
/* deposited with the U.S. Copyright Office.                              */
/*                                                                        */\n""")
  hwp_file.write("/* IBM_PRO" + "LOG_END_TAG                                                     */\n")

  hwp_file.write("\n\n#include \"p10_qme_build_attributes.H\"\n")
  hwp_file.write("#include <endian.h>\n\n")

  hwp_file.write("// This function is auto-gen via chips/p10/procedures/ppe/tools/platXML/ppeCreateAttrMetaData.py\n")
  hwp_file.write("// and it is only used as a support function for Hcode_image_build.C\n\n")

  hwp_file.write("const uint8_t  HCODE_IMAGE_BUILD_ATTR_VERSION = " + str(META_DATA_VERSION) + ";\n\n")
  hwp_file.write("const uint32_t COREQ_DUMMY_BUFFER_SIZE        = " + str(DUMMY_BUFFER_SIZE) + ";\n\n")

  hwp_file.write("fapi2::ReturnCode\n")
  hwp_file.write("p10_qme_build_attributes(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_chip_tgt,\n")
  hwp_file.write("                         void* i_pQmeAttrTank, QmeAttrMeta_t* i_pQmeAttrMeta)\n")
  hwp_file.write("{\n")
  hwp_file.write("    FAPI_INF(\">>p10_qme_build_attributes\")\n\n")
  hwp_file.write("    const uint16_t l_hw_image_meta_ver = i_pQmeAttrMeta->meta_data_version;\n")
  hwp_file.write("    const uint16_t l_sys_bytes         = htobe16(i_pQmeAttrMeta->system_num_of_bytes);\n")
  hwp_file.write("    const uint16_t l_proc_bytes        = htobe16(i_pQmeAttrMeta->proc_chip_num_of_bytes);\n")
  hwp_file.write("    const uint16_t l_perv_bytes        = htobe16(i_pQmeAttrMeta->perv_num_of_bytes);\n")
  hwp_file.write("    const uint16_t l_ec_bytes          = htobe16(i_pQmeAttrMeta->ec_num_of_bytes);\n")
  hwp_file.write("    const uint16_t l_ex_bytes          = htobe16(i_pQmeAttrMeta->ex_num_of_bytes);\n")
  hwp_file.write("    const uint16_t l_eq_bytes          = htobe16(i_pQmeAttrMeta->eq_num_of_bytes);\n\n")
  hwp_file.write("    uint16_t       skip_size           = 0;\n")
  hwp_file.write("    uint16_t       alignment           = 0;\n")
  hwp_file.write("    uint16_t       leftover            = 0;\n\n")
  hwp_file.write("    fapi2::Target<fapi2::TARGET_TYPE_SYSTEM> l_sys_tgt;\n")
  hwp_file.write("    auto l_perv_tgts = i_chip_tgt.getChildren<fapi2::TARGET_TYPE_PERV>(fapi2::TARGET_STATE_FUNCTIONAL);\n")
  hwp_file.write("    auto l_ec_tgts = i_chip_tgt.getChildren<fapi2::TARGET_TYPE_CORE>(fapi2::TARGET_STATE_FUNCTIONAL);\n")
  hwp_file.write("    auto l_eq_tgts = i_chip_tgt.getChildren<fapi2::TARGET_TYPE_EQ>(fapi2::TARGET_STATE_FUNCTIONAL);\n")
  hwp_file.write("    //Assume all attributes share the same value between cores\n")
  hwp_file.write("    //If that assumption is wrong, then should consider using\n")
  hwp_file.write("    //system/proc_chip level attribute array like the topology_vector\n")

  hwp_file.write("\n\n    if( l_hw_image_meta_ver != HCODE_IMAGE_BUILD_ATTR_VERSION )\n")
  hwp_file.write("    {\n")
  hwp_file.write("        FAPI_INF(\"CAREFUL!!! hw_image attr ver %x, hcode_image_build attr ver %x\",\n")
  hwp_file.write("                 l_hw_image_meta_ver, HCODE_IMAGE_BUILD_ATTR_VERSION);\n")
  hwp_file.write("    }\n")

  for scope in META_SCOPE_WORD:
    #print target_type[scope][0], target_type[scope][1]
    target     = target_type[scope][0]
    target_var = target_type[scope][1]
    target_byte= target_type[scope][2]
    attr_data  = attr_meta[target]
    entries    = len(attr_data)
    total_size = 0

    for index in range(entries):
      attr_name  = attr_data[index][0]                       #name
      data_size  = attr_data[index][1]                       #num of bytes
      array_dim  = attr_data[index][2]                       #dim
      data_var   = attr_data[index][3]                       #uintX_t
      byte_swap0 = attr_data[index][4]                       #func to BE
      byte_swap1 = attr_data[index][5]                       #func to BE

      if attr_name == "ATTR_NAME" or attr_name == "ATTR_EC":
        privileged = "_PRIVILEGED"
      else:
        privileged = ""

      if target == "TARGET_TYPE_SYSTEM" or target == "TARGET_TYPE_PROC_CHIP":
        direct = 1
      else:
        direct = 0

      if data_size == 8:
        print_format = "ll"
      else:
        print_format = ""

      # block per attribute
      hwp_file.write("\n    {\n")
      align_size = 0
      if data_size == 8 or data_size == 4:
        align_size = total_size % 4
        if align_size:
          align_size = 4 - align_size
      if data_size == 2:
        align_size = (total_size % 2)
        if align_size:
          align_size = 2 - align_size
  
      if align_size:
        total_size += align_size
        hwp_file.write("        // 32b/64b data align at 4, 16b data align at 2\n")
        hwp_file.write("        i_pQmeAttrTank = (uint8_t*)i_pQmeAttrTank + " + str(align_size) + ";\n\n")
   
      if array_dim:
        total_size += data_size * array_dim
        print attr_name, str(total_size), str(data_size), str(array_dim)
        hwp_file.write("        " + data_var + "t " + "l_" + data_var + "data[" + str(array_dim)  + "] = {0};\n")
        if direct:
          hwp_file.write("        FAPI_TRY(FAPI_ATTR_GET" + privileged + "(fapi2::" + attr_name + ", " +\
                                              target_var + ", l_" + data_var + "data),\n")
          hwp_file.write("                 \"Error From FAPI_ATTR_GET For " + attr_name + "\");\n\n")
        else:
          hwp_file.write("\n")
          hwp_file.write("        if (" + target_var + ".size())\n")
          hwp_file.write("        {\n")
          hwp_file.write("            FAPI_TRY(FAPI_ATTR_GET" + privileged + "(fapi2::" + attr_name + ", " +\
                                                target_var + ".front(), l_" + data_var + "data),\n")
          hwp_file.write("                   \"Error From FAPI_ATTR_GET For " + attr_name + "\");\n")
          hwp_file.write("        }\n\n")
        hwp_file.write("        for( int index = 0; index < " + str(array_dim) + "; index++ )\n")
        hwp_file.write("        {\n")
        hwp_file.write("            FAPI_DBG(\"" + attr_name + " " + data_var + \
                                               " Attribute Value: %" + print_format + "x, Copy to Address: %x\",\n")
        hwp_file.write("                     l_" + data_var + "data[index], i_pQmeAttrTank);\n")
        hwp_file.write("            *(" + data_var + "t*)i_pQmeAttrTank = " +\
                                          byte_swap0 + "l_" + data_var + "data[index]" + byte_swap1 + ";\n")
        hwp_file.write("            i_pQmeAttrTank = (uint8_t*)i_pQmeAttrTank + " + str(data_size) + ";\n")
        hwp_file.write("        }\n")
      else:
        total_size += data_size
        print attr_name, str(total_size)
        hwp_file.write("        " + data_var + "t " + "l_" + data_var + "data = 0;\n")
        if direct:
          hwp_file.write("        FAPI_TRY(FAPI_ATTR_GET" + privileged + "(fapi2::" + attr_name + ", " +\
                                              target_var + ", l_" + data_var + "data),\n")
          hwp_file.write("                 \"Error From FAPI_ATTR_GET For " + attr_name + "\");\n\n")
        else:
          hwp_file.write("\n")
          hwp_file.write("        if (" + target_var + ".size())\n")
          hwp_file.write("        {\n")
          hwp_file.write("            FAPI_TRY(FAPI_ATTR_GET" + privileged + "(fapi2::" + attr_name + ", " +\
                                                target_var + ".front(), l_" + data_var + "data),\n")
          hwp_file.write("                     \"Error From FAPI_ATTR_GET For " + attr_name + "\");\n")
          hwp_file.write("        }\n\n")
        hwp_file.write("        FAPI_DBG(\"" + attr_name + " " + data_var + \
                                           " Attribute Value: %" + print_format + "x, Copy to Address: %x\",\n")
        hwp_file.write("                 l_" + data_var + "data, i_pQmeAttrTank);\n")
        hwp_file.write("        *(" + data_var + "t*)i_pQmeAttrTank = " +\
                                      byte_swap0 + "l_" + data_var + "data" + byte_swap1 + ";\n")
        hwp_file.write("        i_pQmeAttrTank = (uint8_t*)i_pQmeAttrTank + " + str(data_size) + ";\n")
      hwp_file.write("    }\n")
  
    meta_data.write(struct.pack('>h', entries))
    meta_data.write(struct.pack('>h', total_size))
    print "Alignment is currently: " + str(total_size)
    leftover  = (8 - (total_size % 8)) % 8
    print "Alignment is off by: " + str(leftover)
    limit_size = total_size - DUMMY_BUFFER_SIZE

    hwp_file.write("\n    //Co-req detection\n")
    hwp_file.write("    //IF bytes of QME_Image knows > bytes of Hcode_Image_build knowns\n")
    hwp_file.write("    //  meaning QME_Image updated with new attribute added\n")
    hwp_file.write("    //  as the result, Hcode_Image_Build needs to move pointer pass it\n")
    hwp_file.write("    //  thus the hwp needs to be updated to update the new attribute\n")
    hwp_file.write("    //  therefore, skip_size = dummy_size + (QI_size - HIB_size)\n")
    hwp_file.write("    //IF bytes of QME_Image knows < bytes of Hcode_Image_build knows\n")
    hwp_file.write("    //  meaning Hcode_Image_Build updated with new attribute added\n")
    hwp_file.write("    //  as the result, Hcode_Image_Build needs to write to dummy attribute\n")
    hwp_file.write("    //  for now until Qme_Image updated to create structure entry for it\n")
    hwp_file.write("    //  therefore, skip_size = dummy_size - (HIB_size - QI_size)\n\n")

    hwp_file.write("    {\n")
    hwp_file.write("        const uint32_t " + target + "_ATTR_TOTAL_SIZE = " + str(total_size) + ";\n")
    if limit_size > 0:
      hwp_file.write("        const uint32_t " + target + "_ATTR_LIMIT_SIZE = " + str(limit_size) + ";\n")
    hwp_file.write("\n")
    hwp_file.write("        if( " + target_byte + " >= " + target + "_ATTR_TOTAL_SIZE )\n")
    hwp_file.write("        {\n")
    hwp_file.write("            //it is ok if tank is much bigger than expected, just skip ahead\n")
    hwp_file.write("            skip_size = COREQ_DUMMY_BUFFER_SIZE + ( " + target_byte + " - " + \
                                            target + "_ATTR_TOTAL_SIZE );\n")
    hwp_file.write("        }\n")
    hwp_file.write("        else\n")
    hwp_file.write("        {\n")

    if limit_size > 0:
      hwp_file.write("            //it is not ok if tank is COREQ_DUMMY_BUFFER_SIZE more smaller than expected,\n")
      hwp_file.write("            //meaning our dummy buffer for co-req protection isnt enough\n\n")
      hwp_file.write("            if( " + target_byte + " < " + target + "_ATTR_LIMIT_SIZE )\n")
      hwp_file.write("            {\n")
      hwp_file.write("                FAPI_INF(\"ERROR: " + target + " Attribute Co-Req Detected,\\\n")
      hwp_file.write("                         hw_image attr size %x, hcode_image_build attr size " +\
                                               str(total_size) + "\", " + target_byte + ");\n")
      hwp_file.write("                FAPI_ASSERT(0, fapi2::QME_META_COREQ_PROTECT_FAIL()\n")
      #hwp_file.write("                        .set_TARGET(" + target_var  + ")\n")
      hwp_file.write("                            .set_HW_IMAGE_ATTR_SIZE(" + target_byte + ")\n")
      hwp_file.write("                            .set_HCD_BUILD_ATTR_SIZE(" + target + "_ATTR_TOTAL_SIZE),\n")
      hwp_file.write("                            \"Fail to protect QME Attribute Co-Req\");\n")
      hwp_file.write("            }\n\n")

    hwp_file.write("            skip_size = COREQ_DUMMY_BUFFER_SIZE - ( " + \
                                            target + "_ATTR_TOTAL_SIZE - " + target_byte + " );\n")
    hwp_file.write("        }\n\n")

    hwp_file.write("        //Skip Dummy Buffer for structure of " + target + "\n")
    hwp_file.write("        //and realign pointer to next structure at 8 byte boundary\n")
    hwp_file.write("        alignment = COREQ_DUMMY_BUFFER_SIZE + " + target_byte + ";\n")
    hwp_file.write("        leftover  = (8 - (alignment % 8)) % 8;\n")
    hwp_file.write("        i_pQmeAttrTank = (uint8_t*)i_pQmeAttrTank + skip_size + leftover;\n\n")

    hwp_file.write("        FAPI_DBG(\"" + target + " Image_Byte %d Build_Byte " + str(total_size) +\
                                       " Skip_Size %d Alignment %d Leftover %d\",\n")
    hwp_file.write("                 " + target_byte + ", skip_size, alignment, leftover);\n")
    hwp_file.write("    }\n\n")


  hwp_file.write("fapi_try_exit:\n")
  hwp_file.write("    FAPI_INF(\"<<p10_qme_build_attributes\");\n")
  hwp_file.write("    return fapi2::current_err;\n");
  hwp_file.write("}\n")

  hwp_file.close()
  meta_data.close()

def attr2meta():
  from optparse import OptionParser
  usage  = "usage: %prog [options]"
  parser = OptionParser(usage=usage)
  parser.add_option("-e", "--ekb_root",  type="string", dest="ekbRoot",
                    help="ekb root directory")
  parser.add_option("-o", "--outuput_path",  type="string", dest="outputPath",
                    help="ekb output directory")
  parser.add_option("-b", "--output_binary",  type="string", dest="binFile",
                    help="path and filename of attribute meta data binary")
  parser.add_option("-p", "--output_hwp",  type="string", dest="hwpFile",
                    help="path and filename of attribute meta data hwp")
  (options, args) = parser.parse_args()

  if options.ekbRoot:
    print "EkbRoot " + options.ekbRoot
    hwPrcdFile = options.ekbRoot + "/chips/p10/procedures/hwp/pm/p10_qme_build_attributes.C"
  else:
    print "ERROR: Please specify EKB root directory path with -e option"
    return

  if options.outputPath:
    print "outputPath " + options.outputPath
    attrIdFile = options.outputPath + "/gen/qme/attribute_ids.H"
  else:
    print "ERROR: Please specify EKB output directory path with -o option"
    return

  if options.binFile:
    print "binFile " + options.binFile
    binaryFile = options.binFile
  else:
    print "ERROR: Please specify output binary filename and path with -b option"
    return

  parse_attr(attrIdFile)
  write_meta(binaryFile, hwPrcdFile)

if __name__ == '__main__':
  attr2meta()
