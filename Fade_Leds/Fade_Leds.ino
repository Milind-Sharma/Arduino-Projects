int brightness = 0;

void setup()
{
  pinMode (6, OUTPUT);
}

void loop()
{
for ( brightness = 0; brightness <= 255; brightness += 5){
 analogWrite (6, brightness);
 delay(50);
}
for ( brightness = 255; brightness >= 0; brightness -= 5){
  analogWrite (6, brightness);
  delay(50);
}
}
