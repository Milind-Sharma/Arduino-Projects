#include <dht.h>
dht DHT;

#define DHT11_PIN A1

void setup()
{
  Serial.begin(9600);
  for (int DigitalPin = 7; DigitalPin <= 9; DigitalPin++) 
 {
  pinMode(DigitalPin, OUTPUT);
 }

}
 
void loop()
{
  delay(1000);
  
int a = DHT.read11(DHT11_PIN); 

  Serial.print("Temperature: ");
  Serial.print(DHT.temperature);
 
  Serial.println(" degree c");
  
  

//the 3-led setup process
  if (DHT.temperature>=31)
  {
  digitalWrite(7, HIGH); //red
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  Serial.println("High Temperature");
  }
  else if (DHT.temperature>29)
  {
  digitalWrite(8, HIGH); //yellow
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  Serial.println("Medium Temperature");
  }
  else if (DHT.temperature<=29)
  {
  digitalWrite(9, HIGH); //green
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  Serial.println("Low Temperature");
  } 
  
}
