#include <MQ135.h>

#include <Arduino.h>

const int AIR SENSOR_PIN_1  = A0;
const int AIR_SENSOR_PIN_3  = D7;
MQ135 gasSensorl (AIR_SENSOR_PIN_1);
MQ135 gasSensor2 (AIR_SENSOR_PIN_2);
MQ135 gasSensor3 (AIR_SENSOR_PIN_3);

void setup() {
Serial.begin(9600);

delay(10000); // Attendre 10 secondes pour que les capteurs chauffenT
}
void loop() {

float R0_ 1 = gassensor.getRZero();
float R0_ 2  = gasSensor2.getR2ezo();
float R0 _3 = gassensor3.getRZero();
Serial.print ("RO capteur 1 =");
Serial.print (R0_1);
Serial.println(" ohms");
Serial.print ("RO capteur 2 =") ;
Serial.print (R0_2);
Serial.println(" ohms");
Serial.print ("RO capteur 3 =");
Serial.print (R0_3);
Serial.println(" ohms");
delay (1000);


}
