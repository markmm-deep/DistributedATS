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
 * @file Logon.cpp
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

#include "Logon.h"

#include "LogonTypeObject.h"

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


namespace DistributedATS_Logon {



Logon::Logon()
{
    // Just to register all known types
    registerLogonTypes();
}

Logon::~Logon()
{
}

Logon::Logon(
        const Logon& x)
{
    m_header = x.m_header;
    m_EncryptMethod = x.m_EncryptMethod;
    m_HeartBtInt = x.m_HeartBtInt;
    m_RawData = x.m_RawData;
    m_Username = x.m_Username;
    m_Password = x.m_Password;
}

Logon::Logon(
        Logon&& x) noexcept
{
    m_header = std::move(x.m_header);
    m_EncryptMethod = x.m_EncryptMethod;
    m_HeartBtInt = x.m_HeartBtInt;
    m_RawData = std::move(x.m_RawData);
    m_Username = std::move(x.m_Username);
    m_Password = std::move(x.m_Password);
}

Logon& Logon::operator =(
        const Logon& x)
{

    m_header = x.m_header;
    m_EncryptMethod = x.m_EncryptMethod;
    m_HeartBtInt = x.m_HeartBtInt;
    m_RawData = x.m_RawData;
    m_Username = x.m_Username;
    m_Password = x.m_Password;
    return *this;
}

Logon& Logon::operator =(
        Logon&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_EncryptMethod = x.m_EncryptMethod;
    m_HeartBtInt = x.m_HeartBtInt;
    m_RawData = std::move(x.m_RawData);
    m_Username = std::move(x.m_Username);
    m_Password = std::move(x.m_Password);
    return *this;
}

bool Logon::operator ==(
        const Logon& x) const
{
    return (m_header == x.m_header &&
           m_EncryptMethod == x.m_EncryptMethod &&
           m_HeartBtInt == x.m_HeartBtInt &&
           m_RawData == x.m_RawData &&
           m_Username == x.m_Username &&
           m_Password == x.m_Password);
}

bool Logon::operator !=(
        const Logon& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void Logon::header(
        const DistributedATS::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void Logon::header(
        DistributedATS::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const DistributedATS::Header& Logon::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
DistributedATS::Header& Logon::header()
{
    return m_header;
}


/*!
 * @brief This function sets a value in member EncryptMethod
 * @param _EncryptMethod New value for member EncryptMethod
 */
void Logon::EncryptMethod(
        int32_t _EncryptMethod)
{
    m_EncryptMethod = _EncryptMethod;
}

/*!
 * @brief This function returns the value of member EncryptMethod
 * @return Value of member EncryptMethod
 */
int32_t Logon::EncryptMethod() const
{
    return m_EncryptMethod;
}

/*!
 * @brief This function returns a reference to member EncryptMethod
 * @return Reference to member EncryptMethod
 */
int32_t& Logon::EncryptMethod()
{
    return m_EncryptMethod;
}


/*!
 * @brief This function sets a value in member HeartBtInt
 * @param _HeartBtInt New value for member HeartBtInt
 */
void Logon::HeartBtInt(
        int32_t _HeartBtInt)
{
    m_HeartBtInt = _HeartBtInt;
}

/*!
 * @brief This function returns the value of member HeartBtInt
 * @return Value of member HeartBtInt
 */
int32_t Logon::HeartBtInt() const
{
    return m_HeartBtInt;
}

/*!
 * @brief This function returns a reference to member HeartBtInt
 * @return Reference to member HeartBtInt
 */
int32_t& Logon::HeartBtInt()
{
    return m_HeartBtInt;
}


/*!
 * @brief This function copies the value in member RawData
 * @param _RawData New value to be copied in member RawData
 */
void Logon::RawData(
        const std::string& _RawData)
{
    m_RawData = _RawData;
}

/*!
 * @brief This function moves the value in member RawData
 * @param _RawData New value to be moved in member RawData
 */
void Logon::RawData(
        std::string&& _RawData)
{
    m_RawData = std::move(_RawData);
}

/*!
 * @brief This function returns a constant reference to member RawData
 * @return Constant reference to member RawData
 */
const std::string& Logon::RawData() const
{
    return m_RawData;
}

/*!
 * @brief This function returns a reference to member RawData
 * @return Reference to member RawData
 */
std::string& Logon::RawData()
{
    return m_RawData;
}


/*!
 * @brief This function copies the value in member Username
 * @param _Username New value to be copied in member Username
 */
void Logon::Username(
        const std::string& _Username)
{
    m_Username = _Username;
}

/*!
 * @brief This function moves the value in member Username
 * @param _Username New value to be moved in member Username
 */
void Logon::Username(
        std::string&& _Username)
{
    m_Username = std::move(_Username);
}

/*!
 * @brief This function returns a constant reference to member Username
 * @return Constant reference to member Username
 */
const std::string& Logon::Username() const
{
    return m_Username;
}

/*!
 * @brief This function returns a reference to member Username
 * @return Reference to member Username
 */
std::string& Logon::Username()
{
    return m_Username;
}


/*!
 * @brief This function copies the value in member Password
 * @param _Password New value to be copied in member Password
 */
void Logon::Password(
        const std::string& _Password)
{
    m_Password = _Password;
}

/*!
 * @brief This function moves the value in member Password
 * @param _Password New value to be moved in member Password
 */
void Logon::Password(
        std::string&& _Password)
{
    m_Password = std::move(_Password);
}

/*!
 * @brief This function returns a constant reference to member Password
 * @return Constant reference to member Password
 */
const std::string& Logon::Password() const
{
    return m_Password;
}

/*!
 * @brief This function returns a reference to member Password
 * @return Reference to member Password
 */
std::string& Logon::Password()
{
    return m_Password;
}




} // namespace DistributedATS_Logon
// Include auxiliary functions like for serializing/deserializing.
#include "LogonCdrAux.ipp"

