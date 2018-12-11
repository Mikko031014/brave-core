/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#pragma once

#include <string>
#include <vector>

#include "bat/confirmations/export.h"

namespace confirmations {

struct CONFIRMATIONS_EXPORT AdInfo {
  AdInfo();
  AdInfo(const AdInfo& info);
  ~AdInfo();

  std::string creative_set_id;
  std::string start_timestamp;
  std::string end_timestamp;
  std::vector<std::string> regions;
  std::string advertiser;
  std::string notification_text;
  std::string notification_url;
  std::string uuid;
};

}  // namespace confirmations
