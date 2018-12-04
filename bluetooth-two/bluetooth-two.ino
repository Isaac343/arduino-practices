#include <SoftwareSerial.h>
SoftwareSerial bt_one(10,11); //configura pin 2 como RX, pin 3 como TX
int led=13;
char dato=0;
void setup() {
  bt_one.begin(38400); //valor de comunicación bluetooth
  pinMode(led, OUTPUT);
}

void loop() {
  if(bt_one.available()){
    dato = bt_one.read();
    if(dato=='1'){
      digitalWrite(led,HIGH);
    }
    else{
      digitalWrite(led, LOW);
      }
  }
}
