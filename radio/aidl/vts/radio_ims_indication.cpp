/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "radio_ims_utils.h"

RadioImsIndication::RadioImsIndication(RadioServiceTest& parent) : parent_ims(parent) {}

ndk::ScopedAStatus RadioImsIndication::onConnectionSetupFailure(RadioIndicationType /*type*/,
        const std::string& /*token*/, const ConnectionFailureInfo& /*info*/) {
    return ndk::ScopedAStatus::ok();
}

ndk::ScopedAStatus RadioImsIndication::notifyAnbr(RadioIndicationType /*type*/,
        ImsStreamType /*mediaType*/, ImsStreamDirection /*direction*/, int /*bitsPerSecond*/) {
    return ndk::ScopedAStatus::ok();
}

ndk::ScopedAStatus RadioImsIndication::triggerImsDeregistration(RadioIndicationType /*type*/,
        ImsDeregistrationReason /*reason*/) {
    return ndk::ScopedAStatus::ok();
}