#include "moteusapi/MoteusAPI_ERT.h"

int main() {
  // Insert your own usbcan dev name
  // With one motor, the default value of ID is 1

  MoteusAPI_ERT_init("/dev/ttyACM0", 1);
  setTorque(0.1);

  return 0;
}