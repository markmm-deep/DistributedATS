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
 * @file OrderMassCancelRequestCdrAux.ipp
 * This source file contains some declarations of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_DISTRIBUTEDATS_ORDERMASSCANCELREQUEST_ORDERMASSCANCELREQUESTCDRAUX_IPP_
#define _FAST_DDS_GENERATED_DISTRIBUTEDATS_ORDERMASSCANCELREQUEST_ORDERMASSCANCELREQUESTCDRAUX_IPP_

#include "OrderMassCancelRequestCdrAux.hpp"

#include <fastcdr/Cdr.h>
#include <fastcdr/CdrSizeCalculator.hpp>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

namespace eprosima {
namespace fastcdr {



template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const DistributedATS_OrderMassCancelRequest::OrderMassCancelRequest& data,
        size_t& current_alignment)
{
    using namespace DistributedATS_OrderMassCancelRequest;

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
                data.ClOrdID(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(2),
                data.MassCancelRequestType(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(3),
                data.Symbol(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(4),
                data.SecurityExchange(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(5),
                data.TransactTime(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(6),
                data.Text(), current_alignment);


    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const DistributedATS_OrderMassCancelRequest::OrderMassCancelRequest& data)
{
    using namespace DistributedATS_OrderMassCancelRequest;

    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::DELIMIT_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr
        << eprosima::fastcdr::MemberId(0) << data.header()
        << eprosima::fastcdr::MemberId(1) << data.ClOrdID()
        << eprosima::fastcdr::MemberId(2) << data.MassCancelRequestType()
        << eprosima::fastcdr::MemberId(3) << data.Symbol()
        << eprosima::fastcdr::MemberId(4) << data.SecurityExchange()
        << eprosima::fastcdr::MemberId(5) << data.TransactTime()
        << eprosima::fastcdr::MemberId(6) << data.Text()
;
    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        DistributedATS_OrderMassCancelRequest::OrderMassCancelRequest& data)
{
    using namespace DistributedATS_OrderMassCancelRequest;

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
                                                dcdr >> data.ClOrdID();
                                            break;

                                        case 2:
                                                dcdr >> data.MassCancelRequestType();
                                            break;

                                        case 3:
                                                dcdr >> data.Symbol();
                                            break;

                                        case 4:
                                                dcdr >> data.SecurityExchange();
                                            break;

                                        case 5:
                                                dcdr >> data.TransactTime();
                                            break;

                                        case 6:
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
        const DistributedATS_OrderMassCancelRequest::OrderMassCancelRequest& data)
{
    using namespace DistributedATS_OrderMassCancelRequest;

    static_cast<void>(scdr);
    static_cast<void>(data);
}




} // namespace fastcdr
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_DISTRIBUTEDATS_ORDERMASSCANCELREQUEST_ORDERMASSCANCELREQUESTCDRAUX_IPP_

