float rawval;
float firsttemp;
float temp;
float factor;
float ref;
float ref2;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() {
  rawval = analogRead(A0);
  delay(10);
  ref = analogRead(A2);
  delay(10);
  ref2 = (ref * 40.0) / 1023.0;

  firsttemp = ((rawval / 5.03) * 500.0) / 1023.0;
  temp = firsttemp - 20.0;
  factor = temp * 4.25;
  Serial.print("Limiter = ");
  Serial.print(ref2 + 20);
  Serial.print("  Temperatura= ");
  Serial.print(firsttemp);
  Serial.print("    Factor=");
  Serial.println(factor);
  delay(300);
  if (firsttemp <= 60) {
    if (factor >= 0) {
      if (firsttemp >= ref2) {
        analogWrite(12, 100);
      }
      else {
        analogWrite(12, 0);
      }
    }
    else{
      analogWrite(12,0); 
    }
  }
  else {
    analogWrite(12, 180);
  }
}
