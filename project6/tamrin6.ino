#define key1 digitalRead(A0)
void setup() {
  pinMode(A0, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int i, a;
  int dancinglight1[4][4] = {
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 0},
    {1, 0, 0, 0}
  };
  int dancinglight2[2][4] = {
    {0, 1, 1, 0},
    {1, 0, 0, 1}

  };
  int dancinglight3[2][4] = {
    {1, 0, 1, 0},
    {0, 1, 0, 1}
  };
  for (i = 0; i <= 3; i++) {
    digitalWrite(i, 0);
  }
  if (key1 == 0) {
    for (a = 0; (a <= 3); a++){
      for (i = 0; (i <= 3); i++) {
        digitalWrite(i , dancinglight1[a][i]);
      }
    delay(200);
  }
}
}
