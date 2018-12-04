#include <SoftwareSerial.h>
SoftwareSerial Wi_Serial(9, 10); // RX, TX
 
void setup(){
   Serial.begin(9600);
   Wi_Serial.begin(9600);
}

void loop(){
   if (Wi_Serial.available()){
      Serial.write(Wi_Serial.read());
   }
   if (Serial.available()){
      Wi_Serial.write(Serial.read());
   }
}
