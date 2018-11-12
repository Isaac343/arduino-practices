
int value, one;
String alfa;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() >0){
    for (int i=0; i>3; i++){
      one = Serial.parseInt();
      alfa.concat(one); 
      Serial.println(alfa); 
    }
  }
}

