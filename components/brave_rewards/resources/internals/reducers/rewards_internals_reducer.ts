/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

import { Reducer } from 'redux'

// Constants
import { types } from '../constants/rewards_internals_types'

// Utils
import * as storage from '../storage'

const rewardsInternalsReducer: Reducer<RewardsInternals.State | undefined> = (state: RewardsInternals.State | undefined, action) => {
  if (state === undefined) {
    state = storage.load()
  }

  const startingState = state
  switch (action.type) {
    case types.REWARDS_INTERNALS_STATE_UPDATED:
      state = storage.getLoadTimeData(state)
      break
    default:
      break
  }

  if (state !== startingState) {
    storage.debouncedSave(state)
  }

  return state
}

export default rewardsInternalsReducer
