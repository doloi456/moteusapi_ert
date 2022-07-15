#ifndef MOTEUSAPI_ERT_H__
#define MOTEUSAPI_ERT_H__


#include "rtwtypes.h"


#ifdef __cplusplus
extern "C" {
#endif



void MoteusAPI_ERT_init(const char *port, int32_T moteus_id);

void setTorque(real64_T torque);

void setStop();

void MoteusAPI_Terminate();

void setPosition(real64_T stopPosition, real64_T velocity,  real64_T maxTorque);

// void readSpeed();


#ifdef __cplusplus
}
#endif





#endif
