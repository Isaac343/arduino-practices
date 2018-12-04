#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial bt_one(10,11); //configura pin 2 como RX, pin 3 como TX
Servo servo_one;
Servo servo_two;
char dato=0;
void setup() {
  bt_one.begin(38400); //valor de comunicación bluetooth
  servo_one.attach(6);
  servo_two.attach(5);
  Serial.begin(9600);
}

void loop() {
  if(bt_one.available()){
    dato = bt_one.read();
    Serial.println(dato);
    if(dato=='0'){
      servo_one.write(90);
      servo_two.write(90);
      delay(10);
      }
    if(dato=='3'){
      for(int i=90; i=180; i++){
        servo_one.write(i);
        servo_two.write(i);
        delay(10);
        }
    }
    if(dato=='4'){
      for(int i=90; i=0; i--){
        servo_one.write(i);
        servo_two.write(i);
        }
      }
  }
  
}
