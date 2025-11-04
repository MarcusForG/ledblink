int ledPin = 33;
int ledPin2 = 34;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH)
  delay(5000);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW)
  delay(5000);
}

// add a coment