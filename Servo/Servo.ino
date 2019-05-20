#include <Servo.h>

Servo motor; 


void setup()
{
  motor.attach(8);
}

void loop()
{
  
  motor.write(10);
  delay(1000);
  motor.write(255);
  delay(1000);
}
