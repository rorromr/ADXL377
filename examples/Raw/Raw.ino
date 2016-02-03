/*
* Author: Rodrigo Muñoz
* ADXL Test
* 
*/

#include <ADXL377.h>

ADXL377 acc(A0, A1, A2);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.print("x = ");
  Serial.print(acc.getRawX());
  Serial.print(" | y = ");
  Serial.print(acc.getRawY());
  Serial.print(" | z = ");
  Serial.println(acc.getRawZ());
  delay(50);
}
