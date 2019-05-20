#include<dht.h>
dht DHT;
float dht11 = 5;

void setup() {
  
 Serial.begin(9600);
}

void loop() {
  
 int a = DHT.read11(dht11);
 float temp1 = DHT.temperature;
  Serial.println(temp1);
  Serial.println("--");
 delay(500);
 float temp2 = DHT.temperature;
  Serial.println(temp2);
  Serial.println("---");
 Serial.println(temp2 - temp1);
 Serial.println("----");
}
