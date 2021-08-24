#include <moteusapi/MoteusAPI.h>

int main() {
  string dev_name("/dev/tty.usbmodemBE6118CD1");
  int moteus_id = 1;
  MoteusAPI api(dev_name, moteus_id);

  // send one torque command
  api.SendPositionCommand(0, 0, 1, 0.02, 0, 0);

  return 0;
}