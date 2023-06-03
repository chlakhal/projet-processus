#define BLYNK_TEMPLATE_ID "TMPL2cSkbbj1H"
#define BLYNK_TEMPLATE_NAME "PPM"
#define BLYNK_AUTH_TOKEN "PcG5J2oc5AGKVdbP5g59uwpyEWYD257v"

#define  BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include<MQ135.h>
char ssid[]= "inwi Home 4G740F3B"//NOM DU RéSEAU WIFI
char pass[]="47512017"// MOT DE PASSE WIFI
 char auth[]=BLYNK_AUTH_TOKEN;
 BlynkTimer timer;
 const int MQ135_PIN1=A0;
 const int MQ135_PIN2=A1;
 MQ135 1mq135("MQ135_PIN1);
 MQ135 2mq135("MQ135_PIN2);
 void sendSensor()
 {
  float ppm =(1mq135.getPPM()+2mq135()/2):
  String vitesse1;
  float ppm (Img135.getPPM()+2mg135.getPPM()/2);
  String vitessel;
 Blynk. virtualWrite(V0, ppm);
 Serial.print("pps = ") ;
 Serial println (ppm);
 String vitesse ="120 KM";
 if (ppm <1200) {
  vitesse="120KM/H";
  vitessel="co2 normal";

} else { 
  vitesse = "60KM/H"; 
  vitessel "pic de co2!";

}

Blynk.virtualWrite (V1, vitesse); 
Blynk.virtualWrite (V2, vitesse1);

}

void setup()

Serial.begin(115200);
Serial.begin(115200);

Blynk.begin(auth, ssid, pass); 
timer.setInterval(1000L, sendSensor);

}

void loop()
{
  

Blynk.run();

timer.run();
}
 

 
