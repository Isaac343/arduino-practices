#include <SoftwareSerial.h>
SoftwareSerial Wi_Serial(0,1); // RX, TX
String orders[]= 
         {  "AT+CWMODE=3",
            "AT+CWQAP", 
            "AT+CWJAP=\"dlink-0A48\",\"yojtg87630\"",
            "ATĆIFSR",
            "AT+CIPMUX=1"
            "AT+CIPSERVER=1,80"
            "END"
         };
 
void setup(){
   Serial.begin(9600);
   Wi_Serial.begin(9600);
   int index = 0;
   while(orders[index] != "END"){
    WIFI1.println(orders[index++]);
    while(true){
      String s = GetLineWIFI();
      if(s!= "")Serial.println(s);
      if(s.startsWith("no change"))
          break;
      if(s.startsWith("OK"))
          break;
      if(s.startsWith("ready"))
          break;
      }
     Serial.println("..............");
   }
}

void loop(){
   if (Wi_Serial.available()){
      Serial.write(Wi_Serial.read());
   }
   if (Serial.available()){
      Wi_Serial.write(Serial.read());
   }
}
