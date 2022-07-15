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

