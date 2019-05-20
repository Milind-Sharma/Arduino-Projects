#include <dht.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(0, 1, 9, 10, 11, 12);

dht DHT;

#define DHT11_PIN A1

void setup() 
{
  lcd.begin(16, 2);

}


void loop() 
{ 

int chk = DHT.read11(DHT11_PIN);
lcd.setCursor(0,0);
lcd.print("Humidity:");
lcd.print(DHT.humidity);
lcd.print("%");
lcd.setCursor(0,1);
lcd.print("Temp:");
lcd.print(DHT.temperature);
lcd.print((char)223);
}
