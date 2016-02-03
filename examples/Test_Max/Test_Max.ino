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

float max = 0.0f, aux = 0.0f;

void loop()
{
  aux = acc.getModule();
  if (aux > max)
  {
  	max = aux;
  	Serial.print("g_max = ");
  	Serial.println(max);
  }
}
