int GREEN = 3;
int YELLOW = 5;
int RED = 10;
int DELAY_GREEN = 5000;
int DELAY_YELLOW = 2000;
int DELAY_RED = 5000;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()

{
  green_light();
  delay(DELAY_GREEN);
  yellow_light();
  delay(DELAY_YELLOW);
  red_light();
  delay(DELAY_RED);
}

void green_light()
{
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
}

void yellow_light()
{
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(10, LOW);
}

void red_light()
{
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10,LOW);
}
