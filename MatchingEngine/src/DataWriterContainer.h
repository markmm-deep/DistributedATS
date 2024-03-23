/*
   Copyright (C) 2021 Mike Kipnis

   This file is part of DistributedATS, a free-software/open-source project
   that integrates QuickFIX and LiquiBook over OpenDDS. This project simplifies
   the process of having multiple FIX gateways communicating with multiple
   matching engines in realtime.
   
   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.
*/

#ifndef DataWriterContainer_h
#define DataWriterContainer_h

#include <map>
#include <memory>

#include <Logon.h>
#include <MarketDataIncrementalRefresh.h>
#include <MarketDataRequest.h>
#include <NewOrderSingle.h>
#include <OrderCancelRequest.h>
#include <OrderMassCancelRequest.h>
#include <OrderMassStatusRequest.h>
#include <OrderMassCancelReportAdapter.hpp>
#include <SecurityListRequest.h>
#include <OrderCancelReplaceRequest.h>

#include <BasicDomainParticipant.h>
#include <Common.h>

namespace DistributedATS {

struct DataWriterContainer
{
    /*
    void setExecutionReportDataWriter(
                                      distributed_ats_utils::data_writer_ptr execution_report_dw) {
      _execution_report_dw = execution_report_dw;
    }

    void setMarketDataIncrementalRefreshDataWriter(
                                                   distributed_ats_utils::data_writer_ptr  marketdata_incremental_refresh_dw) {
      _marketdata_incremental_refresh_dw = marketdata_incremental_refresh_dw;
    }

    void setOrderCancelRejectDataWriter(
                                        distributed_ats_utils::data_writer_ptr  order_cancel_reject_dw) {
      _order_cancel_reject_dw = order_cancel_reject_dw;
    }

    void setOrderMassCancelReportDataWriter(
                                            distributed_ats_utils::data_writer_ptr order_mass_cancel_report_dw) {
      _order_mass_cancel_report_dw = order_mass_cancel_report_dw;
    }

    void setSecurityListRequestDataWriter(
                                          distributed_ats_utils::data_writer_ptr  security_list_request_dw) {
      _security_list_request_dw = security_list_request_dw;
    }

    void setMarketDataRequestDataWriter(
                                        distributed_ats_utils::data_writer_ptr market_date_request_dw) {
      _market_date_request_dw = market_date_request_dw;
    }*/
    
    distributed_ats_utils::data_writer_ptr execution_report_dw;
    distributed_ats_utils::data_writer_ptr order_cancel_reject_dw;
    distributed_ats_utils::data_writer_ptr order_mass_cancel_report_dw;
    distributed_ats_utils::data_writer_ptr market_data_incremental_refresh_dw;
    distributed_ats_utils::data_writer_ptr security_list_request_dw;
    distributed_ats_utils::data_writer_ptr market_data_request_dw;
};

typedef std::shared_ptr<DataWriterContainer> DataWriterContainerPtr;
};

#endif
