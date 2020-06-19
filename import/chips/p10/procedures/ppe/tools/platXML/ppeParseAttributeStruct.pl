#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/tools/platXML/ppeParseAttributeStruct.pl $
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
# Purpose:  This perl script will parse HWP Attribute XML files and
# initfile attr files and create the fapiGetInitFileAttr() function
# in a file called fapiAttributeService.C

use strict;

#------------------------------------------------------------------------------
# Print Command Line Help
#------------------------------------------------------------------------------
my $numArgs = $#ARGV + 1;
if ($numArgs < 3)
{
    print ("Usage: ppeParseAttributeStruct.pl <output dir>\n");
    print ("           [<if-attr-file1> <if-attr-file2> ...]\n");
    print ("           -a <attr-xml-file1> [<attr-xml-file2> ...]\n");
    print ("  This perl script will parse if-attr files (containing the\n");
    print ("  attributes used by the initfile) and attribute XML files\n");
    print ("  (containing all HWPF attributes) and create the\n");
    print ("  fapiGetInitFileAttr() function in a file called\n");
    print ("  fapiAttributeService.C. Only the attributes specified in\n");
    print ("  the if-attr files are supported. If no if-attr files are\n");
    print ("  specified then all attributes are supported\n");
    exit(1);
}

#------------------------------------------------------------------------------
# Specify perl modules to use
#------------------------------------------------------------------------------
use XML::Simple;
my $xml = new XML::Simple (KeyAttr=>[]);

# Uncomment to enable debug output
#use Data::Dumper;

#------------------------------------------------------------------------------
# Open output file for writing
#------------------------------------------------------------------------------
my $sysFile = $ARGV[0];
$sysFile .= "/";
$sysFile .= "ppe_attribute_system.H";
open(SYFILE, ">", $sysFile);

my $chipFile = $ARGV[0];
$chipFile .= "/";
$chipFile .= "ppe_attribute_proc_chip.H";
open(CHFILE, ">", $chipFile);

my $exFile = $ARGV[0];
$exFile .= "/";
$exFile .= "ppe_attribute_ex.H";
open(EXFILE, ">", $exFile);

my $coreFile = $ARGV[0];
$coreFile .= "/";
$coreFile .= "ppe_attribute_core.H";
open(COFILE, ">", $coreFile);

my $eqFile = $ARGV[0];
$eqFile .= "/";
$eqFile .= "ppe_attribute_eq.H";
open(EQFILE, ">", $eqFile);

my $pervFile = $ARGV[0];
$pervFile .= "/";
$pervFile .= "ppe_attribute_perv.H";
open(PEFILE, ">", $pervFile);



my $xmlFiles = 0;
my $attCount = 0;
my $numIfAttrFiles = 0;
my @attrSystemIds;
my @attrChipIds;
my @attrExIds;
my @attrCoreIds;
my @attrEqIds;
my @attrPervIds;



#------------------------------------------------------------------------------
# Element names
#------------------------------------------------------------------------------
my $attribute = 'attribute';

#------------------------------------------------------------------------------
# For each argument
#------------------------------------------------------------------------------
my $argfile = $ARGV[1];
my $entries = $xml->XMLin($argfile, ForceArray => ['entry']);
foreach my $entr (@{$entries->{entry}}) {

    my $inname = $entr->{name};

    # Skip virtual attributes
    if(exists $entr->{virtual})
    {
        next;
    }

    # read XML file. The ForceArray option ensures that there is an array of
    # elements even if there is only one such element in the file

    foreach my $argnum (2 .. $#ARGV)
    {
        my $infile = $ARGV[$argnum];

        my $attributes = $xml->XMLin($infile, ForceArray => ['attribute']);

        # Uncomment to get debug output of all attributes
        #print "\nFile: ", $infile, "\n", Dumper($attributes), "\n";

        #--------------------------------------------------------------------------
        # For each Attribute
        #--------------------------------------------------------------------------
        foreach my $attr (@{$attributes->{attribute}})
        {

            if($attr->{id} eq $inname) {

                #------------------------------------------------------------------
                # Check that the AttributeId exists
                #------------------------------------------------------------------
                if (! exists $attr->{id})
                {
                    print ("fapiParseAttributeInfo.pl ERROR. Att 'id' missing\n");
                    exit(1);
                }

                my @targets = split(",", $attr->{targetType});
                my $targetTypeMatched = 0;

                foreach my $target (@targets)
                {
                    # Remove newlines and leading/trailing whitespace
                    $target =~ s/\n//;
                    $target =~ s/^\s+//;
                    $target =~ s/\s+$//;

                    if ($target eq "TARGET_TYPE_SYSTEM") {

                        push(@attrSystemIds, $attr);
                        $targetTypeMatched = 1;
                        last;

                    } elsif ($target eq "TARGET_TYPE_PROC_CHIP") {

                        push(@attrChipIds, $attr);
                        $targetTypeMatched = 1;
                        last;

                    } elsif ($target eq "TARGET_TYPE_CORE") {

                        push(@attrCoreIds, $attr);
                        $targetTypeMatched = 1;
                        last;

                    } elsif ($target eq "TARGET_TYPE_EQ") {

                        push(@attrEqIds, $attr);
                        $targetTypeMatched = 1;
                        last;

                    } elsif ($target eq "TARGET_TYPE_EX") {

                        push(@attrExIds, $attr);
                        $targetTypeMatched = 1;
                        last;

                    } elsif ($target eq "TARGET_TYPE_PERV") {

                        push(@attrPervIds, $attr);
                        $targetTypeMatched = 1;
                        last;

                    } else {

                        print ("ppeParseAttributeStruct.pl WARNING. Unsupported ".
                            "target type: $target for attribute $inname in $infile\n");
                        next;

                    }
                }
                if($targetTypeMatched eq 0)
                {
                        print ("ppeParseAttributeStruct.pl ERROR. Unsupported ".
                            "target type: $attr->{targetType} for attribute $inname in $infile\n");
                        exit(1);
                }
            }
        }
    }
}


print SYFILE "// ppe_attribute_system.H\n";
print SYFILE "// This file is generated by perl script ppeParseAttributeStruct.pl\n\n";
print SYFILE "#ifndef __PPE_ATTRIBUTE_SYSTEM_H__\n";
print SYFILE "#define __PPE_ATTRIBUTE_SYSTEM_H__\n\n";
foreach my $attr (@attrSystemIds)
{
    #Check if the attribute is an array type.
    my $value = uc $attr->{valueType};
    if($attr->{array} == "")
    {

        print SYFILE "PPE_ATTRIBUTE_$value($attr->{id});\n"
    }
    else
    {
        print SYFILE "PPE_ATTRIBUTE_$value\_VECTOR($attr->{id}, $attr->{array});\n"
    }
}
print SYFILE "\n#endif  // __PPE_ATTRIBUTE_SYSTEM_H__";

print CHFILE "// ppe_attribute_proc_chip.H\n";
print CHFILE "// This file is generated by perl script ppeParseAttributeStruct.pl\n\n";
print CHFILE "#ifndef __PPE_ATTRIBUTE_PROC_CHIP_H__\n";
print CHFILE "#define __PPE_ATTRIBUTE_PROC_CHIP_H__\n\n";
foreach my $attr (@attrChipIds)
{
    #Check if the attribute is an array type.
    my $value = uc $attr->{valueType};
    if($attr->{array} == "")
    {

        print CHFILE "PPE_ATTRIBUTE_$value($attr->{id});\n"
    }
    else
    {
        print CHFILE "PPE_ATTRIBUTE_$value\_VECTOR($attr->{id}, $attr->{array});\n"
    }
}
print CHFILE "\n#endif  // __PPE_ATTRIBUTE_PROC_CHIP_H__";

print EXFILE "// ppe_attribute_ex.H\n";
print EXFILE "// This file is generated by perl script ppeParseAttributeStruct.pl\n\n";
print EXFILE "#ifndef __PPE_ATTRIBUTE_EX_H__\n";
print EXFILE "#define __PPE_ATTRIBUTE_EX_H__\n\n";
foreach my $attr (@attrExIds)
{

    my $value = uc $attr->{valueType};
    print EXFILE "PPE_ATTRIBUTE_TARGET_$value($attr->{id}, EX_TARGET_COUNT);\n"


}
print EXFILE "\n#endif  // __PPE_ATTRIBUTE_EX_H__";


print COFILE "// ppe_attribute_co.H\n";
print COFILE "// This file is generated by perl script ppeParseAttributeStruct.pl\n\n";
print COFILE "#ifndef __PPE_ATTRIBUTE_CORE_H__\n";
print COFILE "#define __PPE_ATTRIBUTE_CORE_H__\n\n";
foreach my $attr (@attrCoreIds)
{

    my $value = uc $attr->{valueType};
    print COFILE "PPE_ATTRIBUTE_TARGET_$value($attr->{id}, CORE_TARGET_COUNT);\n"


}
print COFILE "\n#endif  // __PPE_ATTRIBUTE_CORE_H__";



print EQFILE "// ppe_attribute_eq.H\n";
print EQFILE "// This file is generated by perl script ppeParseAttributeStruct.pl\n\n";
print EQFILE "#ifndef __PPE_ATTRIBUTE_EQ_H__\n";
print EQFILE "#define __PPE_ATTRIBUTE_EQ_H__\n\n";
foreach my $attr (@attrEqIds)
{

    my $value = uc $attr->{valueType};
    print EQFILE "PPE_ATTRIBUTE_TARGET_$value($attr->{id}, EQ_TARGET_COUNT);\n"


}
print EQFILE "\n#endif  // __PPE_ATTRIBUTE_EQ_H__";



print PEFILE "// ppe_attribute_perv.H\n";
print PEFILE "// This file is generated by perl script ppeParseAttributeStruct.pl\n\n";
print PEFILE "#ifndef __PPE_ATTRIBUTE_PERV_H__\n";
print PEFILE "#define __PPE_ATTRIBUTE_PERV_H__\n";
foreach my $attr (@attrPervIds)
{

    my $value = uc $attr->{valueType};
    print PEFILE "PPE_ATTRIBUTE_TARGET_$value($attr->{id}, MAX_PERV_CHIPLETS);\n"


}
print PEFILE "\n#endif  // __PPE_ATTRIBUTE_PERV_H__";


#print ASFILE "#endif  // __PPE_ATTRIBUTE_H__";


#------------------------------------------------------------------------------
# Close output file
#------------------------------------------------------------------------------
close(CHFILE);
close(COFILE);
close(EXFILE);
close(PEFILE);
close(EQFILE);
