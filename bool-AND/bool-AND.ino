bool A;
bool B;
bool C;
void setup() {
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
}

void loop() {
  A = digitalRead(9);
  B = digitalRead(10);
  C = A && B;
  digitalWrite(12,C);

}
