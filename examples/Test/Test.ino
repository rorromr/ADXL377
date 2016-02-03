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
  Serial.print("g = ");
  Serial.println(acc.getModule());
  delay(50);
}
