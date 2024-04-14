// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file MarketDataIncrementalRefreshCdrAux.ipp
 * This source file contains some declarations of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_DISTRIBUTEDATS_MARKETDATAINCREMENTALREFRESH_MARKETDATAINCREMENTALREFRESHCDRAUX_IPP_
#define _FAST_DDS_GENERATED_DISTRIBUTEDATS_MARKETDATAINCREMENTALREFRESH_MARKETDATAINCREMENTALREFRESHCDRAUX_IPP_

#include "MarketDataIncrementalRefreshCdrAux.hpp"

#include <fastcdr/Cdr.h>
#include <fastcdr/CdrSizeCalculator.hpp>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

namespace eprosima {
namespace fastcdr {



template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const DistributedATS_MarketDataIncrementalRefresh::NoMDEntries& data,
        size_t& current_alignment)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    static_cast<void>(data);

    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::DELIMIT_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};


        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0),
                data.MDUpdateAction(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(1),
                data.MDEntryType(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(2),
                data.Symbol(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(3),
                data.SecurityExchange(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(4),
                data.MDEntryPx(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(5),
                data.MDEntrySize(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(6),
                data.TimeInForce(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(7),
                data.ExecInst(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(8),
                data.Text(), current_alignment);


    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const DistributedATS_MarketDataIncrementalRefresh::NoMDEntries& data)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::DELIMIT_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr
        << eprosima::fastcdr::MemberId(0) << data.MDUpdateAction()
        << eprosima::fastcdr::MemberId(1) << data.MDEntryType()
        << eprosima::fastcdr::MemberId(2) << data.Symbol()
        << eprosima::fastcdr::MemberId(3) << data.SecurityExchange()
        << eprosima::fastcdr::MemberId(4) << data.MDEntryPx()
        << eprosima::fastcdr::MemberId(5) << data.MDEntrySize()
        << eprosima::fastcdr::MemberId(6) << data.TimeInForce()
        << eprosima::fastcdr::MemberId(7) << data.ExecInst()
        << eprosima::fastcdr::MemberId(8) << data.Text()
;
    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        DistributedATS_MarketDataIncrementalRefresh::NoMDEntries& data)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::DELIMIT_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                                        case 0:
                                                dcdr >> data.MDUpdateAction();
                                            break;

                                        case 1:
                                                dcdr >> data.MDEntryType();
                                            break;

                                        case 2:
                                                dcdr >> data.Symbol();
                                            break;

                                        case 3:
                                                dcdr >> data.SecurityExchange();
                                            break;

                                        case 4:
                                                dcdr >> data.MDEntryPx();
                                            break;

                                        case 5:
                                                dcdr >> data.MDEntrySize();
                                            break;

                                        case 6:
                                                dcdr >> data.TimeInForce();
                                            break;

                                        case 7:
                                                dcdr >> data.ExecInst();
                                            break;

                                        case 8:
                                                dcdr >> data.Text();
                                            break;

                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}

void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const DistributedATS_MarketDataIncrementalRefresh::NoMDEntries& data)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    static_cast<void>(scdr);
    static_cast<void>(data);
}








template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const DistributedATS_MarketDataIncrementalRefresh::MarketDataIncrementalRefresh& data,
        size_t& current_alignment)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    static_cast<void>(data);

    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::DELIMIT_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};


        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0),
                data.header(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(1),
                data.MDReqID(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(2),
                data.c_NoMDEntries(), current_alignment);


    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const DistributedATS_MarketDataIncrementalRefresh::MarketDataIncrementalRefresh& data)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::DELIMIT_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr
        << eprosima::fastcdr::MemberId(0) << data.header()
        << eprosima::fastcdr::MemberId(1) << data.MDReqID()
        << eprosima::fastcdr::MemberId(2) << data.c_NoMDEntries()
;
    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        DistributedATS_MarketDataIncrementalRefresh::MarketDataIncrementalRefresh& data)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::DELIMIT_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                                        case 0:
                                                dcdr >> data.header();
                                            break;

                                        case 1:
                                                dcdr >> data.MDReqID();
                                            break;

                                        case 2:
                                                dcdr >> data.c_NoMDEntries();
                                            break;

                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}

void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const DistributedATS_MarketDataIncrementalRefresh::MarketDataIncrementalRefresh& data)
{
    using namespace DistributedATS_MarketDataIncrementalRefresh;

    static_cast<void>(scdr);
    static_cast<void>(data);
}




} // namespace fastcdr
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_DISTRIBUTEDATS_MARKETDATAINCREMENTALREFRESH_MARKETDATAINCREMENTALREFRESHCDRAUX_IPP_

