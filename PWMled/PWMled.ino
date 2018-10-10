void setup() {
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 for (int i = 0; i <= 255; i++){
    analogWrite(12, i);
    delay(10);
  }
for (int i = 255; i >= 0; i--){
    analogWrite(12, i);
    delay(10);
    
  }
 
}
