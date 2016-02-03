/*
* Author: Rodrigo Muñoz
*/

#include "ADXL377.h"

ADXL377::ADXL377(uint8_t xPin, uint8_t yPin, uint8_t zPin):
  xPin_(xPin), yPin_(yPin), zPin_(zPin)
{
  analogReference(EXTERNAL);
}

float ADXL377::getModule()
{
  float x = getX();
  float y = getY();
  float z = getZ();
  return sqrt(x*x + y*y + z*z);
}

float ADXL377::getX()
{
  return mapf(analogRead(xPin_));
}

float ADXL377::getY()
{
  return mapf(analogRead(yPin_));
}

float ADXL377::getZ()
{
  return mapf(analogRead(zPin_));
}

uint16_t ADXL377::getRawX()
{
  return analogRead(xPin_);
}
uint16_t ADXL377::getRawZ()
{
  return analogRead(yPin_);
}
uint16_t ADXL377::getRawY()
{
  return analogRead(zPin_);
}

float ADXL377::mapf(uint16_t in)
{
  return (in * ADXL377_SCALE) - 200.0f;
}
