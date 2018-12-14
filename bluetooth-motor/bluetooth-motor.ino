#include <SoftwareSerial.h>
SoftwareSerial bt_one(10,11); //configura pin 2 como RX, pin 3 como TX
int led=13;
char dato=0;
void setup() {
  bt_one.begin(38400); //valor de comunicación bluetooth
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(bt_one.available()){
    dato = bt_one.read();
    delay(50);
    if(dato=='1'){
      delay(50);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
      delay(50);
    }
    if(dato=='2'){
      delay(50);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      delay(50);
    }
    if(dato=='0'){
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
    }
  }
}
