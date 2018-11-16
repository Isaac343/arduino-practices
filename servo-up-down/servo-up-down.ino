#include <Servo.h>

Servo servo_one;

void setup() {
 Serial.begin(9600);
 pinMode(A0, INPUT);
 servo_one.attach(12); //pin must be PWM
}

void loop() {
 for(int i = 0; i <= 180; i++){
  servo_one.write(i);
  delay(50);
 }
 for(int i=180; i >= 0; i--){
  servo_one.write(i);
  delay(50);
  }
}


