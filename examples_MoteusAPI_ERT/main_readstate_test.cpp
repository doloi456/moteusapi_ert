#include <moteusapi/MoteusAPI_ERT.h>
//#include <moteusapi/MoteusAPI.h>

// The API is declared as a global variable in moteusAPI_ert.cpp


int main() {
  
  // Insert your own usbcan dev name
  // With one motor, the default value of ID is 1
  // api.MoteusAPI_init("/dev/ttyACM0", 1);
  /*
  
  // define a state object
  State curr_state;

  // only read current position
  api.ReadState(curr_state.EN_Position());
  cout << "position: " << curr_state.position << endl;

  // reset the state and only read velocity and torque
  curr_state.Reset();
  api.ReadState(curr_state.EN_Velocity().EN_Torque());

  // read temperature in addition to velocity and torque
  api.ReadState(curr_state.EN_Temp());

  // print everyting
  cout << "velocity: " << curr_state.velocity << endl;
  cout << "torque: " << curr_state.torque << endl;
  cout << "temperature: " << curr_state.temperature << endl;
  */
  return 0;
}