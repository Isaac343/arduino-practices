#include <SoftwareSerial.h>
SoftwareSerial bt_one(10,11); //configura pin 2 como RX, pin 3 como TX

void setup() {
  bt_one.begin(38400); //valor de comunicación bluetooth
  Serial.begin(9600); 
}

void loop() {
  if(bt_one.available()){
    Serial.write(bt_one.read());
    } 
  if(Serial.available()){
    bt_one.write(Serial.read());
    }
}
