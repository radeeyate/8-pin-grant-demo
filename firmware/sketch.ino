void setup() {
  pinMode(PIN_PA3, OUTPUT);
  pinMode(PIN_PA6, INPUT_PULLUP);
}

void loop() {
  int delayMs = digitalRead(PIN_PA6) == LOW ? 100 : 500;
  digitalWrite(PIN_PA3, HIGH);
  delay(delayMs);
  digitalWrite(PIN_PA3, LOW);
  delay(delayMs);
}
