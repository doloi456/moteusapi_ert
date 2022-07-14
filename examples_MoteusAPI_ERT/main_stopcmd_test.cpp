
/*
//#include <moteusapi/moteusAPI_ERT.h>
#include <moteusapi/moteusAPI.h>


// The API is declared as a global variable in moteusAPI_ert.cpp
//extern MoteusAPI_ERT api;

int main() {
  
  // Insert your own usbcan dev name
  // With one motor, the default value of ID is 1
  api.MoteusAPI_init("/dev/ttyACM0", 1);

  // send one stop command
  api.SendStopCommand();

  return 0;
}
*/

#include "moteusapi/MoteusAPI_ERT.h"
#include <memory>

// std::unique_ptr<MoteusAPI> apiPtr;

// void MoteusAPI_ERT_init(const char *port, int32_T moteus_id) {
//     apiPtr = std::make_unique<MoteusAPI>(port, moteus_id);
// }

// void setTorque(real64_T torque) {
//   // Maximal torque probably works only for position/speed control
//   apiPtr->SendPositionCommand(0, 0, 0, torque, 0, 0);
// }





//#include <moteusapi/moteusAPI_ERT.h>
// #include <moteusapi/MoteusAPI.h>

// The API is declared as a global variable in moteusAPI_ert.cpp
//extern MoteusAPI_ERT api; 
// extern MoteusAPI api;

int main() {
  MoteusAPI_ERT_init("/dev/ttyACM0", 1);
  setStop();
  /*
  // Insert your own usbcan dev name
  // With one motor, the default value of ID is 1
  api.MoteusAPI_init("/dev/ttyACM0", 1);

  // send one position with speed and torque limits
  double stop_position = 0;
  double velocity = 0.05;
  double max_torque = 1;
  double feedforward_torque = 0;
  api.SendPositionCommand(stop_position, velocity, max_torque,
                          feedforward_torque);
  */
  return 0;
}