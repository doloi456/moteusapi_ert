
#include "MoteusAPI_ERT.h"
#include "MoteusAPI.h"
#include <memory>
#include <string>


std::unique_ptr<MoteusAPI> apiPtr;

void MoteusAPI_ERT_init(const char *port, int32_T moteus_id) {
    auto port_string = std::string(port);
    apiPtr = std::make_unique<MoteusAPI>(port_string, moteus_id);
}

void setTorque(real64_T torque) {
  // Maximal torque probably works only for position/speed control
  apiPtr->SendPositionCommand(0, 0, 0, torque, 0, 0);
}

void setStop() {
  apiPtr->SendStopCommand();
}

void MoteusAPI_Terminate() {
    if (apiPtr) {
        apiPtr.release();
    }
}
