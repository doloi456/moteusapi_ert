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


#ifndef MOTEUSAPI_ERT_H__
#define MOTEUSAPI_ERT_H__


#include "rtwtypes.h" // Matlab Types

#ifdef __cplusplus
extern "C" {
#endif


/**
 * Initialize the MoteusAPI by opening the device port for communication.
 * @param port port name
 * @param moteus_id ID of the connected Moteus Driver.
*/
void MoteusAPI_ERT_init(const char *port, int32_T moteus_id);

/**
 * Set the torque on a motor
 * @param torque value of the torque. 
*/
void setTorque(real64_T torque);

/**
 * Stop the motion of the motor 
*/
void setStop();

/**
 * Terminate the Moteus API (closing the port)
*/
void MoteusAPI_Terminate();

/**
 * Set the end position of the motor
 * TODO: insert parameters
*/
void setPosition(real64_T stopPosition, real64_T velocity,  real64_T maxTorque);

// void readSpeed();


#ifdef __cplusplus
}
#endif





#endif
