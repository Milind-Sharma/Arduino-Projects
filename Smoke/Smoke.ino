int redLed = 10;
int greenLed = 13;
int smoke = A0;

int sensorThresh = 200;
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
int sensor = analogRead(A0);

  Serial.print("A0: ");
  Serial.println(sensor);

  if (sensor > sensorThresh)
  {
    digitalWrite(10, HIGH);
    digitalWrite(13, LOW); 
    Serial.println("Smoke Detected");
 
  }
  else
  {
    digitalWrite(10, LOW);
    digitalWrite(13, HIGH);
    Serial.println("No Smoke");
  
  }
  delay(400);
}
