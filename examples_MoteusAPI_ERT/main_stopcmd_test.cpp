#include "moteusapi/MoteusAPI_ERT.h"

int main() {
  MoteusAPI_ERT_init("/dev/ttyACM0", 1);
  setStop();
  return 0;
}