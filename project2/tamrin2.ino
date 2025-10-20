const int ledPin = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char incomingByte = Serial.read();
    if(incomingByte =='H'){
      digitalWrite(ledPin, HIGH);
    }else if(incomingByte == 'L'){
      digitalWrite(ledPin, LOW);
    }
  }
}

