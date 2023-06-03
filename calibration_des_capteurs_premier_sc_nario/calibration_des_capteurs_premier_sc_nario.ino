#include <MQ135.h>
#include <Arduino.h>

const int AIR_SENSOR_PIN_1=A0;
const int AIR_SENSOR_PIN_2=D6;

MQ135 gasSensor1(AIR_SENSOR_PIN_1);
MQ135 gasSensor2(AIR_SENSOR_PIN_2);

void setup(){
  Serial.begin(9600);
  delay(10000);// attendre 10 secondes pour que les capteurs chauffent
  
}
void loop(){
  float R0_1 = gasSensor1.getRZero();
  float R0_2 = gasSensor2.getRZero();

  Serial.print("R0 capteur 1 =");
  Serial.print(R0_1);
  Serial.println("ohms");
  Serial.print("R0 capteur 2 =");
  Serial.print(R0_2);
  Serial.println("ohms");
  delay (1000);
  
  
  
}
