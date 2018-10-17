int entrada = A0;
int b;
float a;
void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  a = analogRead(entrada);
  b = ((a/1023)*255);
  Serial.println(b);
  analogWrite(12, b);

}
