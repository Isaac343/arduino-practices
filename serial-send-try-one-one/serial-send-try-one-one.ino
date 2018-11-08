char entry;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  if (Serial.available()>0){  
    entry = Serial.read();
    if(entry == 'a'){
      digitalWrite(13, HIGH);
      Serial.println("ON");
    }
    else{
      digitalWrite(13, LOW);
      Serial.println("OFF");
    }
  }
}
