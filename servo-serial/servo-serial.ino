#include <Servo.h>

int angle;
int entry;
Servo servo_one;

void setup() {
 Serial.begin(9600);
 servo_one.attach(12); //pin must be PWM
}

void loop() {
  if (Serial.available() >0){
    entry = Serial.parseInt();
    if(entry > 180){
      servo_one.write(180);
      Serial.println(entry);
      }
    else{
      servo_one.write(entry);
      Serial.println(entry);
      }
    delay(10);
    }
}
