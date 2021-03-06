/*
 * Copyright 2017 deepstreamHub GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef DEEPSTREAM_BASIC_ERROR_HANDLER_HPP
#define DEEPSTREAM_BASIC_ERROR_HANDLER_HPP

#include <deepstream/core/error_handler.hpp>

#include <iostream>
#include <string>
#include <system_error>

namespace deepstream {

    /**
     * This basic error handler simply logs the error message to stderr
     */
    struct BasicErrorHandler : public ErrorHandler {
        BasicErrorHandler() : ErrorHandler()
        {}

        ~BasicErrorHandler() = default;

        void on_error(const std::string &what)
        {
            std::cout << " –– DS CLIENT ERROR –– " << what << std::endl;
        }
    };
}

#endif
