#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp32.h>
char auth[]="YourAuthToken";
char ssid[]="YourNetworkName";
char pass[]="YourPassword";
void setup(){
  Blynk.begin(auth,ssid,pass);}
void loop(){
  Blynk.run();}
  
