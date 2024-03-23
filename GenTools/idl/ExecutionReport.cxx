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
 * @file ExecutionReport.cpp
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

#include "ExecutionReport.h"

#include "ExecutionReportTypeObject.h"

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


namespace DistributedATS_ExecutionReport {



ExecutionReport::ExecutionReport()
{
    // Just to register all known types
    registerExecutionReportTypes();
}

ExecutionReport::~ExecutionReport()
{
}

ExecutionReport::ExecutionReport(
        const ExecutionReport& x)
{
    m_header = x.m_header;
    m_OrderID = x.m_OrderID;
    m_OrigClOrdID = x.m_OrigClOrdID;
    m_ExecID = x.m_ExecID;
    m_ExecType = x.m_ExecType;
    m_OrdStatus = x.m_OrdStatus;
    m_OrdRejReason = x.m_OrdRejReason;
    m_Symbol = x.m_Symbol;
    m_SecurityExchange = x.m_SecurityExchange;
    m_Side = x.m_Side;
    m_OrderQty = x.m_OrderQty;
    m_OrdType = x.m_OrdType;
    m_Price = x.m_Price;
    m_StopPx = x.m_StopPx;
    m_TimeInForce = x.m_TimeInForce;
    m_ExecInst = x.m_ExecInst;
    m_LastQty = x.m_LastQty;
    m_LastPx = x.m_LastPx;
    m_LeavesQty = x.m_LeavesQty;
    m_CumQty = x.m_CumQty;
    m_AvgPx = x.m_AvgPx;
    m_TransactTime = x.m_TransactTime;
    m_Text = x.m_Text;
}

ExecutionReport::ExecutionReport(
        ExecutionReport&& x) noexcept
{
    m_header = std::move(x.m_header);
    m_OrderID = std::move(x.m_OrderID);
    m_OrigClOrdID = std::move(x.m_OrigClOrdID);
    m_ExecID = std::move(x.m_ExecID);
    m_ExecType = x.m_ExecType;
    m_OrdStatus = x.m_OrdStatus;
    m_OrdRejReason = x.m_OrdRejReason;
    m_Symbol = std::move(x.m_Symbol);
    m_SecurityExchange = std::move(x.m_SecurityExchange);
    m_Side = x.m_Side;
    m_OrderQty = x.m_OrderQty;
    m_OrdType = x.m_OrdType;
    m_Price = x.m_Price;
    m_StopPx = x.m_StopPx;
    m_TimeInForce = x.m_TimeInForce;
    m_ExecInst = std::move(x.m_ExecInst);
    m_LastQty = x.m_LastQty;
    m_LastPx = x.m_LastPx;
    m_LeavesQty = x.m_LeavesQty;
    m_CumQty = x.m_CumQty;
    m_AvgPx = x.m_AvgPx;
    m_TransactTime = x.m_TransactTime;
    m_Text = std::move(x.m_Text);
}

ExecutionReport& ExecutionReport::operator =(
        const ExecutionReport& x)
{

    m_header = x.m_header;
    m_OrderID = x.m_OrderID;
    m_OrigClOrdID = x.m_OrigClOrdID;
    m_ExecID = x.m_ExecID;
    m_ExecType = x.m_ExecType;
    m_OrdStatus = x.m_OrdStatus;
    m_OrdRejReason = x.m_OrdRejReason;
    m_Symbol = x.m_Symbol;
    m_SecurityExchange = x.m_SecurityExchange;
    m_Side = x.m_Side;
    m_OrderQty = x.m_OrderQty;
    m_OrdType = x.m_OrdType;
    m_Price = x.m_Price;
    m_StopPx = x.m_StopPx;
    m_TimeInForce = x.m_TimeInForce;
    m_ExecInst = x.m_ExecInst;
    m_LastQty = x.m_LastQty;
    m_LastPx = x.m_LastPx;
    m_LeavesQty = x.m_LeavesQty;
    m_CumQty = x.m_CumQty;
    m_AvgPx = x.m_AvgPx;
    m_TransactTime = x.m_TransactTime;
    m_Text = x.m_Text;
    return *this;
}

ExecutionReport& ExecutionReport::operator =(
        ExecutionReport&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_OrderID = std::move(x.m_OrderID);
    m_OrigClOrdID = std::move(x.m_OrigClOrdID);
    m_ExecID = std::move(x.m_ExecID);
    m_ExecType = x.m_ExecType;
    m_OrdStatus = x.m_OrdStatus;
    m_OrdRejReason = x.m_OrdRejReason;
    m_Symbol = std::move(x.m_Symbol);
    m_SecurityExchange = std::move(x.m_SecurityExchange);
    m_Side = x.m_Side;
    m_OrderQty = x.m_OrderQty;
    m_OrdType = x.m_OrdType;
    m_Price = x.m_Price;
    m_StopPx = x.m_StopPx;
    m_TimeInForce = x.m_TimeInForce;
    m_ExecInst = std::move(x.m_ExecInst);
    m_LastQty = x.m_LastQty;
    m_LastPx = x.m_LastPx;
    m_LeavesQty = x.m_LeavesQty;
    m_CumQty = x.m_CumQty;
    m_AvgPx = x.m_AvgPx;
    m_TransactTime = x.m_TransactTime;
    m_Text = std::move(x.m_Text);
    return *this;
}

bool ExecutionReport::operator ==(
        const ExecutionReport& x) const
{
    return (m_header == x.m_header &&
           m_OrderID == x.m_OrderID &&
           m_OrigClOrdID == x.m_OrigClOrdID &&
           m_ExecID == x.m_ExecID &&
           m_ExecType == x.m_ExecType &&
           m_OrdStatus == x.m_OrdStatus &&
           m_OrdRejReason == x.m_OrdRejReason &&
           m_Symbol == x.m_Symbol &&
           m_SecurityExchange == x.m_SecurityExchange &&
           m_Side == x.m_Side &&
           m_OrderQty == x.m_OrderQty &&
           m_OrdType == x.m_OrdType &&
           m_Price == x.m_Price &&
           m_StopPx == x.m_StopPx &&
           m_TimeInForce == x.m_TimeInForce &&
           m_ExecInst == x.m_ExecInst &&
           m_LastQty == x.m_LastQty &&
           m_LastPx == x.m_LastPx &&
           m_LeavesQty == x.m_LeavesQty &&
           m_CumQty == x.m_CumQty &&
           m_AvgPx == x.m_AvgPx &&
           m_TransactTime == x.m_TransactTime &&
           m_Text == x.m_Text);
}

bool ExecutionReport::operator !=(
        const ExecutionReport& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void ExecutionReport::header(
        const DistributedATS::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void ExecutionReport::header(
        DistributedATS::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const DistributedATS::Header& ExecutionReport::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
DistributedATS::Header& ExecutionReport::header()
{
    return m_header;
}


/*!
 * @brief This function copies the value in member OrderID
 * @param _OrderID New value to be copied in member OrderID
 */
void ExecutionReport::OrderID(
        const std::string& _OrderID)
{
    m_OrderID = _OrderID;
}

/*!
 * @brief This function moves the value in member OrderID
 * @param _OrderID New value to be moved in member OrderID
 */
void ExecutionReport::OrderID(
        std::string&& _OrderID)
{
    m_OrderID = std::move(_OrderID);
}

/*!
 * @brief This function returns a constant reference to member OrderID
 * @return Constant reference to member OrderID
 */
const std::string& ExecutionReport::OrderID() const
{
    return m_OrderID;
}

/*!
 * @brief This function returns a reference to member OrderID
 * @return Reference to member OrderID
 */
std::string& ExecutionReport::OrderID()
{
    return m_OrderID;
}


/*!
 * @brief This function copies the value in member OrigClOrdID
 * @param _OrigClOrdID New value to be copied in member OrigClOrdID
 */
void ExecutionReport::OrigClOrdID(
        const std::string& _OrigClOrdID)
{
    m_OrigClOrdID = _OrigClOrdID;
}

/*!
 * @brief This function moves the value in member OrigClOrdID
 * @param _OrigClOrdID New value to be moved in member OrigClOrdID
 */
void ExecutionReport::OrigClOrdID(
        std::string&& _OrigClOrdID)
{
    m_OrigClOrdID = std::move(_OrigClOrdID);
}

/*!
 * @brief This function returns a constant reference to member OrigClOrdID
 * @return Constant reference to member OrigClOrdID
 */
const std::string& ExecutionReport::OrigClOrdID() const
{
    return m_OrigClOrdID;
}

/*!
 * @brief This function returns a reference to member OrigClOrdID
 * @return Reference to member OrigClOrdID
 */
std::string& ExecutionReport::OrigClOrdID()
{
    return m_OrigClOrdID;
}


/*!
 * @brief This function copies the value in member ExecID
 * @param _ExecID New value to be copied in member ExecID
 */
void ExecutionReport::ExecID(
        const std::string& _ExecID)
{
    m_ExecID = _ExecID;
}

/*!
 * @brief This function moves the value in member ExecID
 * @param _ExecID New value to be moved in member ExecID
 */
void ExecutionReport::ExecID(
        std::string&& _ExecID)
{
    m_ExecID = std::move(_ExecID);
}

/*!
 * @brief This function returns a constant reference to member ExecID
 * @return Constant reference to member ExecID
 */
const std::string& ExecutionReport::ExecID() const
{
    return m_ExecID;
}

/*!
 * @brief This function returns a reference to member ExecID
 * @return Reference to member ExecID
 */
std::string& ExecutionReport::ExecID()
{
    return m_ExecID;
}


/*!
 * @brief This function sets a value in member ExecType
 * @param _ExecType New value for member ExecType
 */
void ExecutionReport::ExecType(
        char _ExecType)
{
    m_ExecType = _ExecType;
}

/*!
 * @brief This function returns the value of member ExecType
 * @return Value of member ExecType
 */
char ExecutionReport::ExecType() const
{
    return m_ExecType;
}

/*!
 * @brief This function returns a reference to member ExecType
 * @return Reference to member ExecType
 */
char& ExecutionReport::ExecType()
{
    return m_ExecType;
}


/*!
 * @brief This function sets a value in member OrdStatus
 * @param _OrdStatus New value for member OrdStatus
 */
void ExecutionReport::OrdStatus(
        char _OrdStatus)
{
    m_OrdStatus = _OrdStatus;
}

/*!
 * @brief This function returns the value of member OrdStatus
 * @return Value of member OrdStatus
 */
char ExecutionReport::OrdStatus() const
{
    return m_OrdStatus;
}

/*!
 * @brief This function returns a reference to member OrdStatus
 * @return Reference to member OrdStatus
 */
char& ExecutionReport::OrdStatus()
{
    return m_OrdStatus;
}


/*!
 * @brief This function sets a value in member OrdRejReason
 * @param _OrdRejReason New value for member OrdRejReason
 */
void ExecutionReport::OrdRejReason(
        int32_t _OrdRejReason)
{
    m_OrdRejReason = _OrdRejReason;
}

/*!
 * @brief This function returns the value of member OrdRejReason
 * @return Value of member OrdRejReason
 */
int32_t ExecutionReport::OrdRejReason() const
{
    return m_OrdRejReason;
}

/*!
 * @brief This function returns a reference to member OrdRejReason
 * @return Reference to member OrdRejReason
 */
int32_t& ExecutionReport::OrdRejReason()
{
    return m_OrdRejReason;
}


/*!
 * @brief This function copies the value in member Symbol
 * @param _Symbol New value to be copied in member Symbol
 */
void ExecutionReport::Symbol(
        const std::string& _Symbol)
{
    m_Symbol = _Symbol;
}

/*!
 * @brief This function moves the value in member Symbol
 * @param _Symbol New value to be moved in member Symbol
 */
void ExecutionReport::Symbol(
        std::string&& _Symbol)
{
    m_Symbol = std::move(_Symbol);
}

/*!
 * @brief This function returns a constant reference to member Symbol
 * @return Constant reference to member Symbol
 */
const std::string& ExecutionReport::Symbol() const
{
    return m_Symbol;
}

/*!
 * @brief This function returns a reference to member Symbol
 * @return Reference to member Symbol
 */
std::string& ExecutionReport::Symbol()
{
    return m_Symbol;
}


/*!
 * @brief This function copies the value in member SecurityExchange
 * @param _SecurityExchange New value to be copied in member SecurityExchange
 */
void ExecutionReport::SecurityExchange(
        const std::string& _SecurityExchange)
{
    m_SecurityExchange = _SecurityExchange;
}

/*!
 * @brief This function moves the value in member SecurityExchange
 * @param _SecurityExchange New value to be moved in member SecurityExchange
 */
void ExecutionReport::SecurityExchange(
        std::string&& _SecurityExchange)
{
    m_SecurityExchange = std::move(_SecurityExchange);
}

/*!
 * @brief This function returns a constant reference to member SecurityExchange
 * @return Constant reference to member SecurityExchange
 */
const std::string& ExecutionReport::SecurityExchange() const
{
    return m_SecurityExchange;
}

/*!
 * @brief This function returns a reference to member SecurityExchange
 * @return Reference to member SecurityExchange
 */
std::string& ExecutionReport::SecurityExchange()
{
    return m_SecurityExchange;
}


/*!
 * @brief This function sets a value in member Side
 * @param _Side New value for member Side
 */
void ExecutionReport::Side(
        char _Side)
{
    m_Side = _Side;
}

/*!
 * @brief This function returns the value of member Side
 * @return Value of member Side
 */
char ExecutionReport::Side() const
{
    return m_Side;
}

/*!
 * @brief This function returns a reference to member Side
 * @return Reference to member Side
 */
char& ExecutionReport::Side()
{
    return m_Side;
}


/*!
 * @brief This function sets a value in member OrderQty
 * @param _OrderQty New value for member OrderQty
 */
void ExecutionReport::OrderQty(
        int32_t _OrderQty)
{
    m_OrderQty = _OrderQty;
}

/*!
 * @brief This function returns the value of member OrderQty
 * @return Value of member OrderQty
 */
int32_t ExecutionReport::OrderQty() const
{
    return m_OrderQty;
}

/*!
 * @brief This function returns a reference to member OrderQty
 * @return Reference to member OrderQty
 */
int32_t& ExecutionReport::OrderQty()
{
    return m_OrderQty;
}


/*!
 * @brief This function sets a value in member OrdType
 * @param _OrdType New value for member OrdType
 */
void ExecutionReport::OrdType(
        char _OrdType)
{
    m_OrdType = _OrdType;
}

/*!
 * @brief This function returns the value of member OrdType
 * @return Value of member OrdType
 */
char ExecutionReport::OrdType() const
{
    return m_OrdType;
}

/*!
 * @brief This function returns a reference to member OrdType
 * @return Reference to member OrdType
 */
char& ExecutionReport::OrdType()
{
    return m_OrdType;
}


/*!
 * @brief This function sets a value in member Price
 * @param _Price New value for member Price
 */
void ExecutionReport::Price(
        float _Price)
{
    m_Price = _Price;
}

/*!
 * @brief This function returns the value of member Price
 * @return Value of member Price
 */
float ExecutionReport::Price() const
{
    return m_Price;
}

/*!
 * @brief This function returns a reference to member Price
 * @return Reference to member Price
 */
float& ExecutionReport::Price()
{
    return m_Price;
}


/*!
 * @brief This function sets a value in member StopPx
 * @param _StopPx New value for member StopPx
 */
void ExecutionReport::StopPx(
        float _StopPx)
{
    m_StopPx = _StopPx;
}

/*!
 * @brief This function returns the value of member StopPx
 * @return Value of member StopPx
 */
float ExecutionReport::StopPx() const
{
    return m_StopPx;
}

/*!
 * @brief This function returns a reference to member StopPx
 * @return Reference to member StopPx
 */
float& ExecutionReport::StopPx()
{
    return m_StopPx;
}


/*!
 * @brief This function sets a value in member TimeInForce
 * @param _TimeInForce New value for member TimeInForce
 */
void ExecutionReport::TimeInForce(
        char _TimeInForce)
{
    m_TimeInForce = _TimeInForce;
}

/*!
 * @brief This function returns the value of member TimeInForce
 * @return Value of member TimeInForce
 */
char ExecutionReport::TimeInForce() const
{
    return m_TimeInForce;
}

/*!
 * @brief This function returns a reference to member TimeInForce
 * @return Reference to member TimeInForce
 */
char& ExecutionReport::TimeInForce()
{
    return m_TimeInForce;
}


/*!
 * @brief This function copies the value in member ExecInst
 * @param _ExecInst New value to be copied in member ExecInst
 */
void ExecutionReport::ExecInst(
        const std::string& _ExecInst)
{
    m_ExecInst = _ExecInst;
}

/*!
 * @brief This function moves the value in member ExecInst
 * @param _ExecInst New value to be moved in member ExecInst
 */
void ExecutionReport::ExecInst(
        std::string&& _ExecInst)
{
    m_ExecInst = std::move(_ExecInst);
}

/*!
 * @brief This function returns a constant reference to member ExecInst
 * @return Constant reference to member ExecInst
 */
const std::string& ExecutionReport::ExecInst() const
{
    return m_ExecInst;
}

/*!
 * @brief This function returns a reference to member ExecInst
 * @return Reference to member ExecInst
 */
std::string& ExecutionReport::ExecInst()
{
    return m_ExecInst;
}


/*!
 * @brief This function sets a value in member LastQty
 * @param _LastQty New value for member LastQty
 */
void ExecutionReport::LastQty(
        int32_t _LastQty)
{
    m_LastQty = _LastQty;
}

/*!
 * @brief This function returns the value of member LastQty
 * @return Value of member LastQty
 */
int32_t ExecutionReport::LastQty() const
{
    return m_LastQty;
}

/*!
 * @brief This function returns a reference to member LastQty
 * @return Reference to member LastQty
 */
int32_t& ExecutionReport::LastQty()
{
    return m_LastQty;
}


/*!
 * @brief This function sets a value in member LastPx
 * @param _LastPx New value for member LastPx
 */
void ExecutionReport::LastPx(
        float _LastPx)
{
    m_LastPx = _LastPx;
}

/*!
 * @brief This function returns the value of member LastPx
 * @return Value of member LastPx
 */
float ExecutionReport::LastPx() const
{
    return m_LastPx;
}

/*!
 * @brief This function returns a reference to member LastPx
 * @return Reference to member LastPx
 */
float& ExecutionReport::LastPx()
{
    return m_LastPx;
}


/*!
 * @brief This function sets a value in member LeavesQty
 * @param _LeavesQty New value for member LeavesQty
 */
void ExecutionReport::LeavesQty(
        int32_t _LeavesQty)
{
    m_LeavesQty = _LeavesQty;
}

/*!
 * @brief This function returns the value of member LeavesQty
 * @return Value of member LeavesQty
 */
int32_t ExecutionReport::LeavesQty() const
{
    return m_LeavesQty;
}

/*!
 * @brief This function returns a reference to member LeavesQty
 * @return Reference to member LeavesQty
 */
int32_t& ExecutionReport::LeavesQty()
{
    return m_LeavesQty;
}


/*!
 * @brief This function sets a value in member CumQty
 * @param _CumQty New value for member CumQty
 */
void ExecutionReport::CumQty(
        int32_t _CumQty)
{
    m_CumQty = _CumQty;
}

/*!
 * @brief This function returns the value of member CumQty
 * @return Value of member CumQty
 */
int32_t ExecutionReport::CumQty() const
{
    return m_CumQty;
}

/*!
 * @brief This function returns a reference to member CumQty
 * @return Reference to member CumQty
 */
int32_t& ExecutionReport::CumQty()
{
    return m_CumQty;
}


/*!
 * @brief This function sets a value in member AvgPx
 * @param _AvgPx New value for member AvgPx
 */
void ExecutionReport::AvgPx(
        float _AvgPx)
{
    m_AvgPx = _AvgPx;
}

/*!
 * @brief This function returns the value of member AvgPx
 * @return Value of member AvgPx
 */
float ExecutionReport::AvgPx() const
{
    return m_AvgPx;
}

/*!
 * @brief This function returns a reference to member AvgPx
 * @return Reference to member AvgPx
 */
float& ExecutionReport::AvgPx()
{
    return m_AvgPx;
}


/*!
 * @brief This function sets a value in member TransactTime
 * @param _TransactTime New value for member TransactTime
 */
void ExecutionReport::TransactTime(
        uint64_t _TransactTime)
{
    m_TransactTime = _TransactTime;
}

/*!
 * @brief This function returns the value of member TransactTime
 * @return Value of member TransactTime
 */
uint64_t ExecutionReport::TransactTime() const
{
    return m_TransactTime;
}

/*!
 * @brief This function returns a reference to member TransactTime
 * @return Reference to member TransactTime
 */
uint64_t& ExecutionReport::TransactTime()
{
    return m_TransactTime;
}


/*!
 * @brief This function copies the value in member Text
 * @param _Text New value to be copied in member Text
 */
void ExecutionReport::Text(
        const std::string& _Text)
{
    m_Text = _Text;
}

/*!
 * @brief This function moves the value in member Text
 * @param _Text New value to be moved in member Text
 */
void ExecutionReport::Text(
        std::string&& _Text)
{
    m_Text = std::move(_Text);
}

/*!
 * @brief This function returns a constant reference to member Text
 * @return Constant reference to member Text
 */
const std::string& ExecutionReport::Text() const
{
    return m_Text;
}

/*!
 * @brief This function returns a reference to member Text
 * @return Reference to member Text
 */
std::string& ExecutionReport::Text()
{
    return m_Text;
}




} // namespace DistributedATS_ExecutionReport
// Include auxiliary functions like for serializing/deserializing.
#include "ExecutionReportCdrAux.ipp"

