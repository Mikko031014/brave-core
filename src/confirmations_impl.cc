/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "confirmations_impl.h"
#include "bat/confirmations/confirmations_client.h"
#include "logging.h"
#include "static_values.h"

namespace confirmations {

ConfirmationsImpl::ConfirmationsImpl(
      ConfirmationsClient* confirmations_client) :
    is_initialized_(false),
    confirmations_client_(confirmations_client) {
}

ConfirmationsImpl::~ConfirmationsImpl() = default;

void ConfirmationsImpl::Initialize() {
  if (is_initialized_) {
    LOG(WARNING) << "Already initialized";
    return;
  }

  is_initialized_ = true;
}

}  // namespace confirmations
