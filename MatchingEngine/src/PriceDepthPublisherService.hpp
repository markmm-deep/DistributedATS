/*
   Copyright (C) 2021 Mike Kipnis

   This file is part of DistributedATS, a free-software/open-source project
   that integrates QuickFIX and LiquiBook over DDS. This project simplifies
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

#pragma once

#include <stdio.h>
#include <thread>

#include "MarketDataIncrementalRefresh.h"

#include "Market.h"

namespace DistributedATS {

//
// Market Data Publisher Thread - Price Depth
//
class PriceDepthPublisherService {
public:
    PriceDepthPublisherService(eprosima::fastdds::dds::DataWriter*
                        market_data_incremental_refresh_dw,
                        PriceDepthPublisherQueuePtr price_depth_publisher_queue_ptr,
                        int price_depth_pub_interval);
    
    ~PriceDepthPublisherService();

    int service();

private:
    PriceDepthPublisherQueuePtr _price_depth_publisher_queue_ptr;
    eprosima::fastdds::dds::DataWriter* _market_data_incremental_refresh_dw;
    
    std::atomic<bool> _is_running;
    std::thread _publisher_thread;
    
    
    int _price_depth_pub_interval;
};

} // namespace DistributedATS
