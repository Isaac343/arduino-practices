String data;
int led = 13;
int i;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.readStringUntil("\n");
    if (data == "on") {
      digitalWrite(13, HIGH);
      delay(1000);
    }
    if (data == "sos") {
      Serial.print("SOS");
    }
  }
  else {
    digitalWrite(led, LOW);
  }

}
