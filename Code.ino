void setup()
{
  pinMode(2, INPUT); //PIR input
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH) {
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
  } else {
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
  }
}
