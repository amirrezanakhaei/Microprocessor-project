const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    int value = command.toInt();
    if (command == "SABZ") {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    } else if (value == 50) {
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF");
    } else {
      Serial.println("invalid cammand");
    }
  }
}
