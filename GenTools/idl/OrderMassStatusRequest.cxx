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
 * @file OrderMassStatusRequest.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "OrderMassStatusRequest.h"

#include "OrderMassStatusRequestTypeObject.h"

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


namespace DistributedATS_OrderMassStatusRequest {



OrderMassStatusRequest::OrderMassStatusRequest()
{
    // Just to register all known types
    registerOrderMassStatusRequestTypes();
}

OrderMassStatusRequest::~OrderMassStatusRequest()
{
}

OrderMassStatusRequest::OrderMassStatusRequest(
        const OrderMassStatusRequest& x)
{
    m_header = x.m_header;
    m_MassStatusReqID = x.m_MassStatusReqID;
    m_MassStatusReqType = x.m_MassStatusReqType;
    m_Symbol = x.m_Symbol;
    m_SecurityExchange = x.m_SecurityExchange;
}

OrderMassStatusRequest::OrderMassStatusRequest(
        OrderMassStatusRequest&& x) noexcept
{
    m_header = std::move(x.m_header);
    m_MassStatusReqID = std::move(x.m_MassStatusReqID);
    m_MassStatusReqType = x.m_MassStatusReqType;
    m_Symbol = std::move(x.m_Symbol);
    m_SecurityExchange = std::move(x.m_SecurityExchange);
}

OrderMassStatusRequest& OrderMassStatusRequest::operator =(
        const OrderMassStatusRequest& x)
{

    m_header = x.m_header;
    m_MassStatusReqID = x.m_MassStatusReqID;
    m_MassStatusReqType = x.m_MassStatusReqType;
    m_Symbol = x.m_Symbol;
    m_SecurityExchange = x.m_SecurityExchange;
    return *this;
}

OrderMassStatusRequest& OrderMassStatusRequest::operator =(
        OrderMassStatusRequest&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_MassStatusReqID = std::move(x.m_MassStatusReqID);
    m_MassStatusReqType = x.m_MassStatusReqType;
    m_Symbol = std::move(x.m_Symbol);
    m_SecurityExchange = std::move(x.m_SecurityExchange);
    return *this;
}

bool OrderMassStatusRequest::operator ==(
        const OrderMassStatusRequest& x) const
{
    return (m_header == x.m_header &&
           m_MassStatusReqID == x.m_MassStatusReqID &&
           m_MassStatusReqType == x.m_MassStatusReqType &&
           m_Symbol == x.m_Symbol &&
           m_SecurityExchange == x.m_SecurityExchange);
}

bool OrderMassStatusRequest::operator !=(
        const OrderMassStatusRequest& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void OrderMassStatusRequest::header(
        const DistributedATS::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void OrderMassStatusRequest::header(
        DistributedATS::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const DistributedATS::Header& OrderMassStatusRequest::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
DistributedATS::Header& OrderMassStatusRequest::header()
{
    return m_header;
}


/*!
 * @brief This function copies the value in member MassStatusReqID
 * @param _MassStatusReqID New value to be copied in member MassStatusReqID
 */
void OrderMassStatusRequest::MassStatusReqID(
        const std::string& _MassStatusReqID)
{
    m_MassStatusReqID = _MassStatusReqID;
}

/*!
 * @brief This function moves the value in member MassStatusReqID
 * @param _MassStatusReqID New value to be moved in member MassStatusReqID
 */
void OrderMassStatusRequest::MassStatusReqID(
        std::string&& _MassStatusReqID)
{
    m_MassStatusReqID = std::move(_MassStatusReqID);
}

/*!
 * @brief This function returns a constant reference to member MassStatusReqID
 * @return Constant reference to member MassStatusReqID
 */
const std::string& OrderMassStatusRequest::MassStatusReqID() const
{
    return m_MassStatusReqID;
}

/*!
 * @brief This function returns a reference to member MassStatusReqID
 * @return Reference to member MassStatusReqID
 */
std::string& OrderMassStatusRequest::MassStatusReqID()
{
    return m_MassStatusReqID;
}


/*!
 * @brief This function sets a value in member MassStatusReqType
 * @param _MassStatusReqType New value for member MassStatusReqType
 */
void OrderMassStatusRequest::MassStatusReqType(
        int32_t _MassStatusReqType)
{
    m_MassStatusReqType = _MassStatusReqType;
}

/*!
 * @brief This function returns the value of member MassStatusReqType
 * @return Value of member MassStatusReqType
 */
int32_t OrderMassStatusRequest::MassStatusReqType() const
{
    return m_MassStatusReqType;
}

/*!
 * @brief This function returns a reference to member MassStatusReqType
 * @return Reference to member MassStatusReqType
 */
int32_t& OrderMassStatusRequest::MassStatusReqType()
{
    return m_MassStatusReqType;
}


/*!
 * @brief This function copies the value in member Symbol
 * @param _Symbol New value to be copied in member Symbol
 */
void OrderMassStatusRequest::Symbol(
        const std::string& _Symbol)
{
    m_Symbol = _Symbol;
}

/*!
 * @brief This function moves the value in member Symbol
 * @param _Symbol New value to be moved in member Symbol
 */
void OrderMassStatusRequest::Symbol(
        std::string&& _Symbol)
{
    m_Symbol = std::move(_Symbol);
}

/*!
 * @brief This function returns a constant reference to member Symbol
 * @return Constant reference to member Symbol
 */
const std::string& OrderMassStatusRequest::Symbol() const
{
    return m_Symbol;
}

/*!
 * @brief This function returns a reference to member Symbol
 * @return Reference to member Symbol
 */
std::string& OrderMassStatusRequest::Symbol()
{
    return m_Symbol;
}


/*!
 * @brief This function copies the value in member SecurityExchange
 * @param _SecurityExchange New value to be copied in member SecurityExchange
 */
void OrderMassStatusRequest::SecurityExchange(
        const std::string& _SecurityExchange)
{
    m_SecurityExchange = _SecurityExchange;
}

/*!
 * @brief This function moves the value in member SecurityExchange
 * @param _SecurityExchange New value to be moved in member SecurityExchange
 */
void OrderMassStatusRequest::SecurityExchange(
        std::string&& _SecurityExchange)
{
    m_SecurityExchange = std::move(_SecurityExchange);
}

/*!
 * @brief This function returns a constant reference to member SecurityExchange
 * @return Constant reference to member SecurityExchange
 */
const std::string& OrderMassStatusRequest::SecurityExchange() const
{
    return m_SecurityExchange;
}

/*!
 * @brief This function returns a reference to member SecurityExchange
 * @return Reference to member SecurityExchange
 */
std::string& OrderMassStatusRequest::SecurityExchange()
{
    return m_SecurityExchange;
}




} // namespace DistributedATS_OrderMassStatusRequest
// Include auxiliary functions like for serializing/deserializing.
#include "OrderMassStatusRequestCdrAux.ipp"

