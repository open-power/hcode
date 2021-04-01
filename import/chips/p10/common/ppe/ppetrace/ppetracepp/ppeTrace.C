/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/ppeTrace.C $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */
#include "ppeTrace.H"
#include "fspTrace.H"
#include "ppeOpCodes.H"
#include <fstream>
#include <arpa/inet.h>
#include <string.h>
#include <iomanip>

typedef uint32_t u32;
typedef uint8_t u8;
#include "jhash.h"

#ifdef hz
    #undef hz
#endif

PpeTrace::PpeTrace(ostream& i_info, Trex& i_trex)
    : iv_info(i_info),
      iv_alloc(NULL),
      iv_buffer(NULL),
      iv_version(0),
      iv_endIndex(0),
      iv_minIndex(0),
      iv_cbwSize(0),
      iv_savedTimeStamp(0),
      iv_trex(i_trex)
{
}

PpeTrace::~PpeTrace()
{
    delete[] (char*)iv_alloc;
}

bool PpeTrace::loadFile(const char* filepath)
{
    ifstream bin(filepath, ios::binary);

    if(!bin)
    {
        iv_info << "Could not open " << filepath << endl;
        return false;
    }

    //iv_info << "Opened " << filepath << endl;

    bin.seekg(0, bin.end);
    int binSize = bin.tellg();
    bin.seekg(0, bin.beg);
    iv_alloc = new char[binSize];
    iv_buffer = reinterpret_cast<PkTraceBuffer*>(iv_alloc);
    bin.read(iv_alloc, binSize);

    if(!bin)
    {
        iv_info << "Could not read entire file " << filepath << endl;
        bin.close();
        return false;
    }

    //iv_info << "Read in " << binSize << " bytes" << endl;
    bin.close();

    // trace buffer must be bigger than header
    if(((char*)(iv_buffer->cb) - (char*)iv_alloc) > binSize)
    {
        iv_info << filepath << " does not have a valid size." << endl;
        iv_info << "Expecting >= " << sizeof(PkTraceBuffer)
                << " Actual " << binSize << endl;
        return false;
    }

    ostringstream errInfo;

    if(!isValid(errInfo))
    {
        // maybe is dump - check for debug pointers
        if(HCODE_DEBUG_PTRS < binSize)
        {
            uint32_t* debugPtrs = reinterpret_cast<uint32_t*>(iv_alloc + HCODE_DEBUG_PTRS);
            uint32_t traceBufAddr = ntohl(debugPtrs[1]);
            uint32_t offset = traceBufAddr & 0xffff0000;

            //iv_info << "Checking offset " << hex << HCODE_DEBUG_PTRS << " traceBufAddr "
            //        << traceBufAddr << " offset " << offset << endl;
            // probably need something better than this for unmatching addresses
            if( offset == QME_BASE_SRAM )
            {
                offset = traceBufAddr - QME_BASE_SRAM;
            }
            else if ( offset == XGPE_BASE_SRAM )
            {
                offset = traceBufAddr - XGPE_BASE_SRAM;
            }
            else if ( offset == PGPE_BASE_SRAM )
            {
                offset = traceBufAddr - PGPE_BASE_SRAM;
            }
            else
            {
                debugPtrs = reinterpret_cast<uint32_t*>(iv_alloc + OCCGPE_DEBUG_PTRS);
                traceBufAddr = ntohl(debugPtrs[1]);
                offset = traceBufAddr & 0xffff0000;
                //iv_info << "Checking offset " << hex << OCCGPE_DEBUG_PTRS << " traceBufAddr "
                //        << traceBufAddr << " offset " << offset << endl;

                if( offset == GPE1_BASE_SRAM )
                {
                    offset = traceBufAddr - GPE1_BASE_SRAM;
                }
                else if( traceBufAddr > GPE0_BASE_SRAM &&
                         traceBufAddr < GPE1_BASE_SRAM)
                {
                    offset = traceBufAddr - GPE0_BASE_SRAM;
                }
                else
                {
                    iv_info << "This does not look like a pktrace or SRAM dump" << endl;
                    iv_info << errInfo.str() << endl;
                    return false;
                }
            }

            // offset within buffer?
            if((int)offset < binSize)
            {
                iv_buffer = reinterpret_cast<PkTraceBuffer*>(&iv_alloc[offset]);
            }
            else
            {
                iv_info << "trace buffer was not found within binary image" << endl;
                return false;
            }

            ostringstream osIgnore;

            if(false == isValid(osIgnore))
            {
                iv_info << "pk_trace buffer not valid" << endl;
                iv_info << errInfo.str() << endl;
                return false;
            }
        }
    }

    iv_version = extractVersion();
    iv_cbwSize = circularBufferSize() / 4;
    iv_endIndex = entryEndIndex() / 4;

    if(iv_cbwSize > iv_endIndex)
    {
        iv_minIndex = 0;
    }
    else
    {
        iv_minIndex = iv_endIndex - iv_cbwSize;
    }

    string compName;
    componentName(compName, false); // don't purge underscores

    map<std::string, mark_hash_t*> markInfoMap;
    getOpCodeTables(markInfoMap);
    mark_hash_t* markInfo = markInfoMap[compName];

    if(markInfo == NULL)
    {
        componentName(compName, true); // purge underscores
        markInfo = markInfoMap[compName];

        if(markInfo == NULL)
        {
            markInfo = markInfoMap[string("default")];
        }
    }

    if(markInfo)
    {
        while(markInfo->mark)
        {
            iv_markHash[markInfo->mark] = markInfo->hash;
            int fieldCount = sizeof(markInfo->fieldSize) / sizeof(markInfo->fieldSize[0]);
            vector<int> fieldSizes;

            for(int i = 0; i < fieldCount; ++i)
            {
                if(markInfo->fieldSize[i] == 0)
                {
                    break;
                }

                fieldSizes.push_back(markInfo->fieldSize[i]);
            }

            iv_markFieldSizes[markInfo->mark] = fieldSizes;
            ++markInfo;
        }
    }

    parseEntries();
    return true;
}

bool PpeTrace::isValid(ostream& errInfo)
{
    bool result = true;

    // version must be valid
    int version = extractVersion();

    if(version != 2 && version != 3)
    {
        errInfo << "Unsupported pk_trace version: " << version << endl;
        result = false;
    }

    if(result)
    {
        //Component name cannot be blank or have non-printable chars
        string compName;
        componentName(compName, false);

        if(compName.length() == 0 || compName[0] == 0)
        {
            errInfo << "Component name is NULL" << endl;
            result = false;
        }
        else
        {
            for(string::const_iterator s = compName.begin();
                s != compName.end();
                ++s)
            {
                if(*s == 0)
                {
                    break;
                }

                // non-printable characters
                if(*s < 0x20 || *s > 126)
                {
                    result = false;
                    errInfo << "Component name contains unprintable characers" << endl;
                    break;
                }
            }
        }
    }

    return result;
}

int PpeTrace::extractVersion() const
{
    return ntohs(iv_buffer->version);
}


void PpeTrace::componentName(string& o_compName,
                             bool i_purgeUnderscore) const
{
    string name;

    for(int i = 0; i < PK_TRACE_IMG_STR_SZ; ++i)
    {
        char c = iv_buffer->image_str[i];

        if(!i_purgeUnderscore || c != '_')
        {
            name.push_back(c);
        }
    }

    while(name.size() < PK_TRACE_IMG_STR_SZ)
    {
        name.push_back(0);
    }

    o_compName = name;
}

int PpeTrace::instanceId() const
{
    return ntohs(iv_buffer->instance_id);
}

uint32_t PpeTrace::partialTraceHash() const
{
    return stringHash(ntohs(iv_buffer->partial_trace_hash));
}

uint32_t PpeTrace::stringHash(uint16_t i_lower) const
{
    uint32_t hash = ntohs(iv_buffer->hash_prefix);
    hash <<= 16;
    return hash + i_lower;
}

int PpeTrace::circularBufferSize() const
{
    return ntohs(iv_buffer->size);
}

uint32_t PpeTrace::maxTimeChange() const
{
    return ntohl(iv_buffer->max_time_change);
}

uint32_t PpeTrace::timeBaseFrequency() const
{
    return ntohl(iv_buffer->hz);
}

uint64_t PpeTrace::timeAdjust() const
{
    if(ntohl(1) == 1)
    {
        return iv_buffer->time_adj64;
    }

    uint64_t val = iv_buffer->time_adj64;
    val = ((val << 8) & 0xff00ff00ff00ff00ULL) | ((val >> 8) & 0x00ff00ff00ff00ffULL);
    val = ((val << 16) & 0xffff0000ffff0000ULL) | ((val >> 16) & 0x0000ffff0000ffffULL);
    return (val << 32) | (val >> 32);
}

uint64_t PpeTrace::timeStamp(uint32_t i_lower32) const
{
    uint64_t ts = ntohl(iv_buffer->state.tbu32);
    ts <<= 32;
    ts += i_lower32;
    return ts + timeAdjust();
}

int PpeTrace::entryEndIndex() const
{
    return ntohl(iv_buffer->state.offset);
}

bool PpeTrace::getWord(int i_index, uint32_t& o_word)
{
    bool result = false;

    if(i_index < iv_minIndex)
    {
        o_word = 0;
    }
    else
    {
        result = true;
        uint32_t* p = reinterpret_cast<uint32_t*>(&(iv_buffer->cb[0]));
        o_word = p[i_index % iv_cbwSize];
    }

    return result;
}

//void pushIt(PpeTraceEntry & pte, uint32_t data, int size)
//{
//    if(size == 4)
//    {
//        pte.pushFrontParm(data & 0x000000ff);
//    }
//    data >>= 8;
//    pte.pushFrontParm(data & 0x000000ff);
//    data >>= 8;
//    pte.pushFrontParm(data & 0x000000ff);
//    data >>= 8;
//    pte.pushFrontParm(data & 0x000000ff);
//}

void PpeTrace::parseEntries()
{
    int index = iv_endIndex - 1;
    uint32_t word = 0;

    while( getWord(index, word) )
    {
        // Entry may have one or two footer words
        uint32_t footer = ntohl(word);
        int parmCount = 0;
        PpeTraceEntry pte;

        --index;
        bool done = !getWord(index, word);
        uint32_t footer1 = word;
        PkTraceBinaryParms bParms;
        bParms.word32 = footer1;

        //iv_info << "footer " << hex << footer << " " << footer1 << endl;
        //iv_info << "stringid " << bParms.string_id << " size " << (int)bParms.num_bytes << endl;

        if(iv_version == 2)
        {
            // bail out if there is not enough to handle partial trace entry
            if(done)
            {
                break;
            }

            pte.addHash(stringHash(ntohs(bParms.string_id)));

            // Handle timestamp
            uint32_t time_stamp = PK_GET_TRACE_TIME(footer);
            pte.addTimeStamp(timeStamp(time_stamp), timeBaseFrequency());

            int format = PK_GET_TRACE_FORMAT(footer);

            if(format == PK_TRACE_FORMAT_TINY)
            {
                PkTraceTinyParms tiny;
                tiny.word32 = footer1;
                pte.pushFrontParm(ntohs(tiny.parm));
            }
            else // big or binary
            {
                parmCount = bParms.num_bytes; // byte or word count;

                if(format == PK_TRACE_FORMAT_BINARY)
                {
                    //Round up and convert to word count
                    parmCount = ((parmCount + 3) & 0x3ll) / 4;
                    pte.setBinary();
                }

                // v2 entrees are 8 byte aligned so for odd num parms
                // back up one more word.
                if(parmCount % 2)
                {
                    --index;
                }

                for(int i = 0; i < parmCount; ++i)
                {
                    --index;
                    getWord(index, word);
                    pte.pushFrontParm(ntohl(word));
                }
            }

        }
        else if(iv_version == 3)
        {
            op_trace_mark_t mark;
            mark.byte = footer;

            //iv_info << "Mark " << (int)mark.byte;

            if(mark.byte == PPE_TRACE_TINY_MARK ||
               mark.byte == PPE_TRACE_BIG_MARK ||
               mark.byte == PPE_TRACE_BIN_MARK)
            {
                // not enough entry data to handle partial trace entry
                if(done)
                {
                    break;
                }

                PkTraceTinyParms tp;
                tp.word32 = footer1;
                //uint32_t hash = ntohs(tp.string_id);
                pte.addHash(stringHash(ntohs(tp.string_id)));
            }

            if(mark.fields.timestamp)
            {
                // Handle timestamp
                uint32_t time_stamp = PK_GET_TRACE_V3_TIME(footer);
                uint64_t timeStamp64 = timeStamp(time_stamp);
                timeStamp64 >>= PK_TRACE_V3_TIME_SHIFT;
                pte.addTimeStamp(timeStamp64, timeBaseFrequency());
                iv_savedTimeStamp = timeStamp64;
            }
            else
            {
                pte.addTimeStamp(iv_savedTimeStamp, timeBaseFrequency());
            }

            switch(mark.byte)
            {
                case PPE_TRACE_TINY_MARK:
                    {
                        PkTraceTinyParms tiny;
                        tiny.word32 = word;
                        pte.pushFrontParm(ntohs(tiny.parm));

                    }
                    break;

                case PPE_TRACE_BIN_MARK:
                case PPE_TRACE_BIG_MARK:
                    {
                        parmCount = bParms.num_bytes; // byte or word count;

                        if(mark.byte == PPE_TRACE_BIN_MARK)
                        {
                            //Round up and convert to word count
                            parmCount = (parmCount + 3) / 4;
                            pte.setBinary();
                        }

                        //iv_info << " PARMCOUNT " << parmCount << endl;
                        for(int i = 0; i < parmCount; ++i)
                        {
                            --index;
                            getWord(index, word);
                            pte.pushFrontParm(ntohl(word));
                        }
                    }
                    break;

                default: // all other marks
                    {
                        //pte.setOpTrace();
                        //pte.setBinary();
                        // TODO what if no hash? use default?
                        vector<int> fieldSizes = iv_markFieldSizes[mark.byte];
                        pte.addHash(iv_markHash[mark.byte]);
                        ++index; // footer1 is not used.
                        parmCount = mark.fields.word_count;

                        // Need to collect the trace data
                        list<uint32_t> data8;


                        if(!mark.fields.timestamp)
                        {
                            // timestamp field has parm data
                            word = PK_GET_TRACE_V3_TIME(footer);
                            data8.push_back(word >> 24);
                            data8.push_back((word >> 16) & 0xff);
                            data8.push_back((word >> 8) & 0xff);
                        }

                        for(int i = 0; i < parmCount; ++i)
                        {
                            --index;
                            getWord(index, word);
                            word = ntohl(word);
                            //pte.pushFrontParm(word);
                            data8.push_front(word & 0xff);
                            data8.push_front((word >> 8)  & 0xff);
                            data8.push_front((word >> 16) & 0xff);
                            data8.push_front(word >> 24);
                        }

                        list<uint32_t>::const_iterator n = data8.begin();

                        for(vector<int>::const_iterator f = fieldSizes.begin();
                            f != fieldSizes.end(); ++f)
                        {
                            uint64_t word64 = 0;
                            int bytecount = *f;

                            if(bytecount > 8)
                            {
                                bytecount = 8;
                            }

                            for(int i = 0; i < bytecount; ++i)
                            {
                                word64 <<= 8;
                                word64 |= *n++;

                                if(n == data8.end())
                                {
                                    break;
                                }
                            }

                            //if(1 != htonl(1))
                            //{
                            //    pte.pushBackParm((uint32_t)word64);
                            //}

                            if(bytecount > 4)
                            {
                                pte.pushBackParm(word64 >> 32);
                            }

                            //if(1 == htonl(1))
                            //{
                            pte.pushBackParm((uint32_t)word64);
                            //}
                        }
                    }
                    break;
            }

        }
        else
        {
            iv_info << "Unsupported version " << iv_version << endl;
            break;
        }

        iv_entries.push_front(pte);
        --index;
    }
}

void PpeTrace::trexIt()
{
    iv_info << "------------------|------------------|-----------" << endl;
    iv_info << "Time min.microsec |Diff min.microsec |Description" << endl;
    iv_info << "------------------|------------------|-----------" << endl;

    for(list<PpeTraceEntry>::iterator i = iv_entries.begin(); i != iv_entries.end(); ++i)
    {
        iv_trex.print(*i);//     i->getHash(),i->parmCount(),i->parms());
    }
}

void PpeTrace::genFspTrace(ostream& i_out)
{
    string name;
    componentName(name);

    FspTrace fspTrace(iv_info, name);

    for(list<PpeTraceEntry>::iterator i = iv_entries.begin(); i != iv_entries.end(); ++i)
    {
        const uint8_t* bentry = NULL;
        int esize = i->createFspEntry(bentry);
        string entry((const char*)bentry, esize);
        fspTrace.addEntry(entry);
    }

    fspTrace.write(i_out);
}

void PpeTrace::dumpMarkHashInfo(ostream& i_out)
{
    for(map<int, uint32_t>::const_iterator i = iv_markHash.begin();
        i != iv_markHash.end(); ++i)
    {
        i_out << "Mark " << hex << setfill('0') << setw(2) << i->first;
        i_out << " hash " << setw(8) << i->second;

        vector<int> fieldSize = iv_markFieldSizes[i->first];

        if(fieldSize.size())
        {
            i_out << " field sizes ";

            for(vector<int>::const_iterator n = fieldSize.begin();
                n != fieldSize.end(); ++n)
            {
                i_out << *n << ' ';
            }
        }

        i_out << endl;
    }
}

const char* usage = "\nusage1 - Convert ppe_trace binary to fsp_trace binary:\n"
                    "    ppe-trace.exe <ppe_trace.bin>  >  <fsp_trace.bin>\n"
                    "\nUsage2 - Parse ppe_trace binary to text:\n"
                    "    ppe-trace.exe <ppe_trace.bin> -s <trexStringFile>\n";

int main(int narg, char* argv[])
{
    if(narg < 2)
    {
        cout << usage << endl;
        return -1;
    }

    string filePath(argv[1]);
    string trexPath;

    if(filePath.substr(0, 2) == "-h" ||
       filePath.substr(0, 3) == "--h" ||
       filePath == "--usage")
    {
        cout << usage << endl;
        return -1;
    }

    for(int i = 2; i < narg; ++i)
    {
        string arg(argv[i]);

        if(arg == string("-s"))
        {
            trexPath = string(argv[i + 1]);
            ++i;
        }
    }

    bool trexLoaded = false;
    Trex trex(cout);

    if(trexPath.length())
    {
        trexLoaded = trex.load(trexPath);
    }

    PpeTrace theTrace(cout, trex);

    //cout << "Loading trace...." << endl;
    if(!theTrace.loadFile(filePath.c_str()))
    {
        cout << usage << endl;
        return -1;
    }

    //theTrace.dumpMarkHashInfo(cout);

    if(trexLoaded)
    {
        theTrace.trexIt();
    }
    else
    {
        theTrace.genFspTrace(std::cout);
    }

    //trex.dump(std::cout);
}
