#include <DHT.h>

#include <LiquidCrystal.h>


#define DHTPIN A1   

LiquidCrystal lcd(0, 1, 9, 10, 11, 12);

DHT DHT1;
void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);  //16 by 2 character display
  
}
 
void loop()
{
   float h = DHT1.humidity();
  
  float t = DHT1.temperature();  
  
  Serial.println(h);
  Serial.println(t);
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(t);  //printing temperarture to the LCD display
  lcd.print("'C");
  
  lcd.setCursor(0,1);
  lcd.print("Humid: ");
  lcd.print(h);  //printing humidity to the LCD display
  lcd.print("%");
}
