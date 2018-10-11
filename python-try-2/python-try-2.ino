int a;

void setup(){ 
  Serial.begin(9600); 
  pinMode(13, OUTPUT);
  Serial.println("Connection established...");
}
 
void loop(){
  while (Serial.available()){
    a = Serial.read();
    digitalWrite(13,a);
  }
}
