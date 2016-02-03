/*
* Author: Rodrigo Muñoz
* ADXL Test
* 
*/

#include <ADXL377.h>

ADXL377 acc1(A0, A1, A2);
ADXL377 acc2(A3, A4, A5);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.print("x1 = ");
  Serial.print(acc1.getRawX());
  Serial.print(" | y1 = ");
  Serial.print(acc1.getRawY());
  Serial.print(" | z1 = ");
  Serial.print(acc1.getRawZ());
  Serial.print("| x2 = ");
  Serial.print(acc2.getRawX());
  Serial.print(" | y2 = ");
  Serial.print(acc2.getRawY());
  Serial.print(" | z2 = ");
  Serial.println(acc2.getRawZ());
  delay(50);
}