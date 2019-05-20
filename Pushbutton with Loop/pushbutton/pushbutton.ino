int ledPin = 13;
int inPin = 2;
int buttonState = 0;
int i;
int j;

void setup()
{
  pinMode (ledPin, OUTPUT);
  pinMode (inPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(inPin);
  
  if (buttonState == HIGH)
  {
    for (i=1; i<=5; i++){
      for(j=1; j<=i; j++){
    digitalWrite(ledPin, HIGH);
    delay(700);
    digitalWrite(ledPin, LOW);
    delay(700);
  }
  delay(1000);
    }
  }

else {
  
    digitalWrite(ledPin, LOW);
  
  }



  }
