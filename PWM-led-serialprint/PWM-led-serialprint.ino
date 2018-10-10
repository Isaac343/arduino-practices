void setup() {
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 for (int i = 0; i <= 255; i++){
    analogWrite(12, i);
    delay(50);
    Serial.println(i);
  }
for (int i = 255; i >= 0; i--){
    analogWrite(12, i);
    delay(50);
    Serial.println(i);
    
  }
}
