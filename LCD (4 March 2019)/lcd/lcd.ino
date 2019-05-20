#include<LiquidCrystal.h>

LiquidCrystal lcd(0, 1, 9, 10, 11, 12);  // sets the interfacing pins

void setup()
{
 lcd.begin(16, 2);  // initializes the 16x2 LCD
}

void loop()
{
  lcd.setCursor(5,0);           //sets the cursor at row 0 column 0
  lcd.print("HELLO"); // prints 16x2 LCD MODULE
  lcd.setCursor(5,1);           //sets the cursor at row 1 column 2
  lcd.print("WORLD!");     // prints HELLO WORLD
}
