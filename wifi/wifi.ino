#include <SoftwareSerial.h>
SoftwareSerial WI1(3,2); // RX, TX
String W="";
char w;
 
void setup(){
   Serial.begin(9600);
   WI1.begin(9600);
   pinMode(13, OUTPUT);
}

void loop(){
   if(WI1.available()){
    w=WI1.read();
    Serial.print(w);
    W 
    }
}
