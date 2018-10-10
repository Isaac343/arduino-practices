int value=0;

void setup(){ 
  Serial.begin(9600); 
  pinMode(13, OUTPUT);
  Serial.println("Connection established...");
}
 
void loop(){
  while (Serial.available()){
    value = Serial.read();
  } 
  if (value == '1'){
    digitalWrite (13, 255);
  }
  else if (value == '0'){
    digitalWrite (13, 0);
   }
}
