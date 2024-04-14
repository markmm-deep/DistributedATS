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
 * @file Logon.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_DISTRIBUTEDATS_LOGON_LOGON_H_
#define _FAST_DDS_GENERATED_DISTRIBUTEDATS_LOGON_LOGON_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "Header.h"


#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(LOGON_SOURCE)
#define LOGON_DllAPI __declspec( dllexport )
#else
#define LOGON_DllAPI __declspec( dllimport )
#endif // LOGON_SOURCE
#else
#define LOGON_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define LOGON_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace DistributedATS_Logon {



/*!
 * @brief This class represents the structure Logon defined by the user in the IDL file.
 * @ingroup Logon
 */
class Logon
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport Logon();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~Logon();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DistributedATS_Logon::Logon that will be copied.
     */
    eProsima_user_DllExport Logon(
            const Logon& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DistributedATS_Logon::Logon that will be copied.
     */
    eProsima_user_DllExport Logon(
            Logon&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DistributedATS_Logon::Logon that will be copied.
     */
    eProsima_user_DllExport Logon& operator =(
            const Logon& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DistributedATS_Logon::Logon that will be copied.
     */
    eProsima_user_DllExport Logon& operator =(
            Logon&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x DistributedATS_Logon::Logon object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const Logon& x) const;

    /*!
     * @brief Comparison operator.
     * @param x DistributedATS_Logon::Logon object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const Logon& x) const;

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    eProsima_user_DllExport void header(
            const DistributedATS::Header& _header);

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    eProsima_user_DllExport void header(
            DistributedATS::Header&& _header);

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    eProsima_user_DllExport const DistributedATS::Header& header() const;

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    eProsima_user_DllExport DistributedATS::Header& header();


    /*!
     * @brief This function sets a value in member EncryptMethod
     * @param _EncryptMethod New value for member EncryptMethod
     */
    eProsima_user_DllExport void EncryptMethod(
            int32_t _EncryptMethod);

    /*!
     * @brief This function returns the value of member EncryptMethod
     * @return Value of member EncryptMethod
     */
    eProsima_user_DllExport int32_t EncryptMethod() const;

    /*!
     * @brief This function returns a reference to member EncryptMethod
     * @return Reference to member EncryptMethod
     */
    eProsima_user_DllExport int32_t& EncryptMethod();


    /*!
     * @brief This function sets a value in member HeartBtInt
     * @param _HeartBtInt New value for member HeartBtInt
     */
    eProsima_user_DllExport void HeartBtInt(
            int32_t _HeartBtInt);

    /*!
     * @brief This function returns the value of member HeartBtInt
     * @return Value of member HeartBtInt
     */
    eProsima_user_DllExport int32_t HeartBtInt() const;

    /*!
     * @brief This function returns a reference to member HeartBtInt
     * @return Reference to member HeartBtInt
     */
    eProsima_user_DllExport int32_t& HeartBtInt();


    /*!
     * @brief This function copies the value in member RawData
     * @param _RawData New value to be copied in member RawData
     */
    eProsima_user_DllExport void RawData(
            const std::string& _RawData);

    /*!
     * @brief This function moves the value in member RawData
     * @param _RawData New value to be moved in member RawData
     */
    eProsima_user_DllExport void RawData(
            std::string&& _RawData);

    /*!
     * @brief This function returns a constant reference to member RawData
     * @return Constant reference to member RawData
     */
    eProsima_user_DllExport const std::string& RawData() const;

    /*!
     * @brief This function returns a reference to member RawData
     * @return Reference to member RawData
     */
    eProsima_user_DllExport std::string& RawData();


    /*!
     * @brief This function copies the value in member Username
     * @param _Username New value to be copied in member Username
     */
    eProsima_user_DllExport void Username(
            const std::string& _Username);

    /*!
     * @brief This function moves the value in member Username
     * @param _Username New value to be moved in member Username
     */
    eProsima_user_DllExport void Username(
            std::string&& _Username);

    /*!
     * @brief This function returns a constant reference to member Username
     * @return Constant reference to member Username
     */
    eProsima_user_DllExport const std::string& Username() const;

    /*!
     * @brief This function returns a reference to member Username
     * @return Reference to member Username
     */
    eProsima_user_DllExport std::string& Username();


    /*!
     * @brief This function copies the value in member Password
     * @param _Password New value to be copied in member Password
     */
    eProsima_user_DllExport void Password(
            const std::string& _Password);

    /*!
     * @brief This function moves the value in member Password
     * @param _Password New value to be moved in member Password
     */
    eProsima_user_DllExport void Password(
            std::string&& _Password);

    /*!
     * @brief This function returns a constant reference to member Password
     * @return Constant reference to member Password
     */
    eProsima_user_DllExport const std::string& Password() const;

    /*!
     * @brief This function returns a reference to member Password
     * @return Reference to member Password
     */
    eProsima_user_DllExport std::string& Password();

private:

    DistributedATS::Header m_header;
    int32_t m_EncryptMethod{0};
    int32_t m_HeartBtInt{0};
    std::string m_RawData;
    std::string m_Username;
    std::string m_Password;

};

} // namespace DistributedATS_Logon

#endif // _FAST_DDS_GENERATED_DISTRIBUTEDATS_LOGON_LOGON_H_



