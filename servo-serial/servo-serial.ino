#include <Servo.h>

int entry;
Servo servo_one;

void setup() {
 Serial.begin(9600);
 servo_one.attach(12); //pin must be PWM
}

void loop() {
  if (Serial.available() > 0){
    entry = Serial.parseInt();
      servo_one.write(entry);
      Serial.println(entry);
  }
}
