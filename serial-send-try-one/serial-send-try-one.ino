int option;
int led = 13;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  //if data exist -> read
  if(Serial.available()>0){
   //entry read 
   option=Serial.read();
   if(option=='a'){
    digitalWrite(led, LOW);
    Serial.println("OFF");
    }
    if(option =='b'){
      digitalWrite(led, HIGH);
      Serial.println("ON");
      } 
   }

}
