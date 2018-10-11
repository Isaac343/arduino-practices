float a;
float b;
int c;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
 a = analogRead(A0);
 b = (a * 5) / 1023;
 c = (a * 255) / 1023;
 analogWrite(12, c);
 Serial.println(float(b),2);
 delay(100);
}
