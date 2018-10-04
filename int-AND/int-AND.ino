int A;
int B;
void setup() {
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
}

void loop() {
 A = digitalRead(9);
 B = digitalRead(10);
 if (A == 1 and B == 1){
    digitalWrite(12, HIGH);
  }
 else{
    digitalWrite(12, LOW);
  } 
}
