/*
 *Copyright (C) 2016 Hewlett-Packard Development Company, L.P.
 *All Rights Reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License"); you may
 *   not use this file except in compliance with the License. You may obtain
 *   a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *   WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *   License for the specific language governing permissions and limitations
 *   under the License.
 */

#ifndef ICONFIGQUEUE_H
#define ICONFIGQUEUE_H

/**********************************
*System Includes
**********************************/
#include <string>

/**********************************
*Local Includes
**********************************/
#include "ops-ipsecd.h"

/**
 * Base Interface Class for Configuration Queue
 */
class IConfigQueue
{
    public:

        /**
         * Default Constructor
         */
        IConfigQueue() {}

        /**
         * Default Destructor
         */
        virtual ~IConfigQueue() {}

        /**
         * Starts the Configuration Thread Dispatcher
         */
        virtual ipsec_ret start_thread() = 0;

        /**
         * Stops the Configuration Thread Dispatcher
         */
        virtual ipsec_ret stop_thread() = 0;

        /**
         * Adds a configuration task to the queue
         *
         * @param task Configuration Task
         *
         * @return ipsec_ret::OK if successful, otherwise an error code
         */
        virtual ipsec_ret add_task(ConfigTask* task) = 0;

};

#endif /* ICONFIGQUEUE_H */