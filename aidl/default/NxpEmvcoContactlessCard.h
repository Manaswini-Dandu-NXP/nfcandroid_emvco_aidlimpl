/******************************************************************************
 *
 *  Copyright 2022 NXP
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/
#pragma once
#include <aidl/android/hardware/emvco/BnNxpEmvcoContactlessCard.h>
#include <aidl/android/hardware/emvco/IEmvcoClientCallback.h>

namespace aidl {
namespace android {
namespace hardware {
namespace emvco {

class NxpEmvcoContactlessCard : public BnNxpEmvcoContactlessCard {

public:
  ::ndk::ScopedAStatus doRegisterEMVCoEventListener(
      const std::shared_ptr<IEmvcoClientCallback> &in_clientCallback,
      bool *_aidl_return) override;
  ::ndk::ScopedAStatus transceive(const std::vector<uint8_t> &in_data,
                                  int32_t *_aidl_return) override;
  ::ndk::ScopedAStatus open() override;
  ::ndk::ScopedAStatus close(
      const std::shared_ptr<IEmvcoClientCallback> &in_clientCallback) override;
  ::ndk::ScopedAStatus doSetEMVCoMode(int8_t in_config, bool in_isStartEMVCo);
};

} // namespace emvco
} // namespace hardware
} // namespace android
} // namespace aidl
