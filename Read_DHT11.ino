/*
Electronics Studio
@file Read_DHT11.ino
@date  26-11-2024
@url https:https://github.com/electronicsstudio
@url YouTube: https://www.youtube.com/@ElectronicsStudio-v7o/featured
*/

#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 10

void setup(){
  Serial.begin(115200);
}

void loop(){
  DHT.read(DHT11_PIN);
  Serial.print("Temperature:");
  Serial.print(DHT.temperature);
  Serial.print("\n");
  Serial.print("Humidity:");
  Serial.println(DHT.humidity);
  delay(1000);
}
