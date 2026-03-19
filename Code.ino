// C++ code
//
void setup()
{
  pinMode(2, INPUT);
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
  delay(10); // Delay a little bit to improve simulation performance
}
