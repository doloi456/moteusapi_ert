
#ifndef MOTEUSAPI_ERT_H__
#define MOTEUSAPI_ERT_H__


#include "rtwtypes.h"

// ------------------------
#ifdef __cplusplus
extern "C" {
#endif
// ------------------------


void MoteusAPI_ERT_init(const char *port, int32_T moteus_id);

void setTorque(real64_T torque);

void setStop();

void MoteusAPI_Terminate();

// ------------------------
#ifdef __cplusplus
}
#endif
// ------------------------




#endif