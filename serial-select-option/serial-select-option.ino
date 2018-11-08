char entry;
int led = 13;
int i;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    entry = Serial.read();
    entry = entry;
    switch(entry){
      case 'a':
        digitalWrite(led, HIGH);
        Serial.println("ON");
        delay(1000);
      break;
      case 'b':
        for(int e=0; e<=2; e++){
          for(int f=0; f<=2; f++){
            digitalWrite(led, HIGH);
            delay(200);
            digitalWrite(led,LOW);
            delay(200);
            Serial.print(".");
          }
          for(int g=0; g<=2; g++){
            digitalWrite(led, HIGH);
            delay(400);
            digitalWrite(led,LOW);
            delay(400);
            Serial.print("-");
          }
          for(int h=0; h<=2; h++){
            digitalWrite(led, HIGH);
            delay(200);
            digitalWrite(led,LOW);
            delay(200);
            Serial.print(".");
          }
          Serial.print(" ");
          delay(500); 
        }
      break;
      case 'c':
        for(int d=0; d <= 255; d++){
            analogWrite(led, d);
            Serial.println(d);
            delay(10);
        }  
      break;  
    }
  }
  else{
    digitalWrite(led, LOW);
    }

}
