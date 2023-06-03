#define BLYNK TEMPLATE ID "TMPL21HUZeLUE" //L'identifiant du modèle de projet dans le cloud Blynk

#define BLYNK_TEMPLATE_NAME "C02"// nom du modèle de projet Blynk

#define BLYNK_AUTH_TOKEN "1hIW7Qq2uj80QU38qX1R7nWowHep"//jeton d'authentification pour accéder au projet Blynk dans le cloud Blynk

#define BLYNK PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

#include <MQ135.h>

char ssid[] "inwi Home 40740F3B"; // Remplacer avec votre nom de réseau WiFi
char pass[] = "47512017"; // Remplacer avec votre mot de passe WiFi
char auth[] = BLYNK_AUTH_TOKEN;
BlynkTimer timer;
const int MQ135_PIN = A0;
MQ135 mq135 (MQ135_PIN);

void sendSensor () {
float N_CO2= mq135.getPPM();
Blynk.virtualWrite(VO, N_CO2);
Serial.print("ppm = ");
Serial.println(N_C02);
if (N_CO2> 600) {

Serial.println("alerte de pollution, changez votre  place ou prenez les précautions nécessaires");

Blynk.logEvent ("alerte_de_pollution_");

}

}

void setup(){

Serial.begin(115200);

pinMode (MQ135_PIN, INPUT);

Blynk.begin(auth, ssid, pass); timer.setInterval (5000L, sendSensor);

}

void loop() {

Blynk.run();

timer.run();

}
