/*
* Author: Rodrigo Muñoz
*/

#ifndef ADXL377_h
#define ADXL377_h

#include "Arduino.h"

#define ADXL377_SCALE 0.391006843f // 400/1023

class ADXL377
{ 
  public:
    ADXL377(uint8_t xPin, uint8_t yPin, uint8_t zPin);
    float getModule();
    float getX();
    float getY();
    float getZ();
    uint16_t getRawX();
    uint16_t getRawY();
    uint16_t getRawZ();
  
  private:
    uint8_t xPin_;
    uint8_t yPin_;
    uint8_t zPin_;

    float mapf(uint16_t in);
};

#endif
