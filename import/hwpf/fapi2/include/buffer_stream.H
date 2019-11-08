/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/fapi2/include/buffer_stream.H $                   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
/**
 * @file buffer_stream.H
 * @brief Utility classes for streaming data into or out of fapi2::variable_buffer
 */

#ifndef BUFFER_STREAM_H_
#define BUFFER_STREAM_H_

#include <fapi2.H>

namespace fapi2
{

/** @name Utility classes for streaming data into or out of fapi2::variable_buffer */
//@{

/**
 * @brief Wrapper class for variable_buffer to write OT-sized chunks into the buffer;
 *        keeps track of write offset and advances it with each put operation.
 */
template<typename OT>
class fixed_buffer_ostream
{
    public:
        typedef fapi2::variable_buffer::bits_type bits_type;
        typedef fapi2::variable_buffer::unit_type unit_type;

        /**
         * @brief Constructor. Initializes write position to zero.
         * @param[in,out] io_buffer      The buffer to wrap
         * @param[in]     i_start_offset Offset (in OTs, not bits) in the buffer to start writing from.
         *                               Defaults to the beginning of the buffer.
         */
        fixed_buffer_ostream(fapi2::variable_buffer& io_buffer, unit_type i_start_offset = 0) :
            iv_buffer(io_buffer), iv_offset(i_start_offset) {}

        /**
         * @brief Write a value into the buffer and advance the write pointer.
         *        The buffer must be appropriately sized to accept the value at the current write pointer.
         * @param[in] i_value The value to write
         * @return the buffer's return code
         */
        fapi2::ReturnCode append(OT i_value)
        {
            return iv_buffer.set<OT>(i_value, iv_offset++);
        }

        /**
         * @brief Return the amount of bits (not OTs) written to the buffer so far
         * @return the amount of bits (not OTs) written to the buffer so far
         */
        bits_type size()
        {
            return iv_offset * sizeof(OT) * 8;
        }

    private:
        fapi2::variable_buffer& iv_buffer;
        fapi2::variable_buffer::unit_type iv_offset;
};

/**
 * @brief Similar to buffer_ostream, but not restricted to fixed chunks.
 *        Slower because it uses insert() instead of set().
 */
class buffer_ostream
{
    public:
        typedef fapi2::variable_buffer::bits_type bits_type;

        /**
         * @brief Constructor. Initializes write position to zero.
         * @param[in,out] io_buffer      The buffer to wrap
         * @param[in]     i_start_offset Offset inside the buffer to start writing from.
         *                               Defaults to the beginning of the buffer.
         */
        buffer_ostream(fapi2::variable_buffer& io_buffer, bits_type i_start_offset = 0) :
            iv_buffer(io_buffer), iv_offset(i_start_offset) {}

        /**
         * @brief Write a left-aligned value into the buffer and advance the write pointer.
         *        The buffer must be appropriately sized to accept the value at the current write pointer.
         * @param[in] i_data        The data to write
         * @param[in] i_len         Amount of bits to write; defaults to ALL OF THEM
         * @param[in] i_sourceStart Start offset at which to start reading from i_data; defaults to zero
         * @return the buffer's return code
         */
        template<typename OT>
        fapi2::ReturnCode append(const OT& i_data, bits_type i_len = ~0, bits_type i_sourceStart = 0)
        {
            if (i_len == static_cast<bits_type>(~0))
            {
                i_len = parameterTraits<OT>::bit_length();
            }

            fapi2::ReturnCode rc = iv_buffer.insert(i_data, iv_offset, i_len, i_sourceStart);

            if (rc == fapi2::FAPI2_RC_SUCCESS)
            {
                iv_offset += i_len;
            }

            return rc;
        }

        /**
         * @brief Write a right-aligned value into the buffer and advance the write pointer.
         *        The buffer must be appropriately sized to accept the value at the current write pointer.
         * @param[in] i_data        The data to write
         * @param[in] i_len         Amount of bits to write; defaults to ALL OF THEM
         * @return the buffer's return code
         */
        template<typename OT>
        fapi2::ReturnCode appendFromRight(const OT& i_data, bits_type i_len = ~0)
        {
            if (i_len == static_cast<bits_type>(~0))
            {
                i_len = parameterTraits<OT>::bit_length();
            }

            fapi2::ReturnCode rc = iv_buffer.insertFromRight(i_data, iv_offset, i_len);

            if (rc == fapi2::FAPI2_RC_SUCCESS)
            {
                iv_offset += i_len;
            }

            return rc;
        }

        /**
         * @brief Return the amount of bits written into the buffer so far
         * @return the amount of bits written into the buffer so far
         */
        bits_type size()
        {
            return iv_offset;
        }

    private:
        fapi2::variable_buffer& iv_buffer;
        bits_type iv_offset;
};

/**
 * @brief Wrapper class for variable_buffer to to read OT-sized chunks out of the buffer;
 *        keeps track of read offset and advances it with each read operation.
 */
template<typename OT>
class fixed_buffer_istream
{
    public:
        typedef fapi2::variable_buffer::bits_type bits_type;
        typedef fapi2::variable_buffer::unit_type unit_type;

        /**
         * @brief Constructor.
         * @param[in,out] io_buffer      The buffer to wrap
         * @param[in]     i_start_offset Offset (in OTs, not bits) in the buffer to start reading from.
         *                               Defaults to the beginning of the buffer.
         */
        fixed_buffer_istream(fapi2::variable_buffer& io_buffer, unit_type i_start_offset = 0) :
            iv_buffer(io_buffer), iv_offset(i_start_offset) {}

        /**
         * @brief Pull the next OT out of the buffer.
         *
         * If there is no more data in the buffer, this will throw an assertion, so
         * you're advised to check for existence of data using hasNext().
         *
         * @return the next value from the buffer
         */
        OT next()
        {
            /* get<OT>() will assert if the offset points beyond the end of the buffer */
            return iv_buffer.get<OT>(iv_offset++);
        }

        /**
         * @brief Return true if there's more data to read
         * @return true if there's more data to read
         */
        bool hasNext()
        {
            return iv_offset < iv_buffer.getLength<OT>();
        }
    private:
        fapi2::variable_buffer& iv_buffer;
        uint32_t iv_offset;
};

//@}

} // namespace fapi2

#endif /* BUFFER_STREAM_H_ */
