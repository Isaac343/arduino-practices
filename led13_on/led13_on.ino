int led = 13;
int entrada;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(10, INPUT);

}
void loop() {
  entrada = digitalRead(10);
  if (entrada == HIGH){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);
    }
}
