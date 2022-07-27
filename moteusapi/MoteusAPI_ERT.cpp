// Copyright 2022 Loi Do, doloi@fel.cvut.cz.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#include "MoteusAPI_ERT.h"
#include "MoteusAPI.h"
#include <memory>
#include <string>

// Declaration of the global pointer to the API to be initialized
std::unique_ptr<MoteusAPI> apiPtr;

void MoteusAPI_ERT_init(const char *port, int32_T moteus_id) {
    auto port_string = std::string(port); // Recast type from MATLAB type to string
    apiPtr = std::make_unique<MoteusAPI>(port_string, moteus_id);
}

void setTorque(real64_T torque) {
  // Maximal torque argument works only for position/speed control
  apiPtr->SendPositionCommand(0, 0, 0, torque, 0, 0);
}

void setStop() {
  apiPtr->SendStopCommand();
}

void setPosition(real64_T stopPosition, real64_T velocity,  real64_T maxTorque) {
  // Feedforward torque is set to zero
  apiPtr->SendPositionCommand(stopPosition, velocity, maxTorque, 0);
}

// void readSpeed() {
//   apiPtr->ReadState(curr_state.EN_Position());
// };



void MoteusAPI_Terminate() {
    if (apiPtr) {
        apiPtr.release();
    }
}

