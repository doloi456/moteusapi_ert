#include "moteusapi/MoteusAPI_ERT.h"

int main() {
  // Insert your own usbcan dev name
  // With one motor, the default value of ID is 1

  MoteusAPI_ERT_init("/dev/ttyACM0", 1);
  double stop_position = 0;
  double velocity = 0.5;
  double max_torque = 0.1;
  setPosition(stop_position, velocity, max_torque);

  return 0;
}

