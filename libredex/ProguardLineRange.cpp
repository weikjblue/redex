/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#include "ProguardLineRange.h"

ProguardLineRange::ProguardLineRange(uint32_t s,
                                     uint32_t e,
                                     uint32_t os,
                                     uint32_t oe)
    : start(s), end(e), original_start(os), original_end(oe) {}

bool ProguardLineRange::operator==(const ProguardLineRange& other) const {
  return this->start == other.start && this->end == other.end &&
         this->original_start == other.original_start &&
         this->original_end == other.original_end;
}
