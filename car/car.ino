#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial bt_one(10,11); //RX|TX
Servo servo_left;
Servo servo_right;
char dato;
int motor_part_a = 8;
int motor_part_b = 9;

void setup() {
  bt_one.begin(38400);
  servo_left.attach(6);
  servo_right.attach(5);
}

void loop() {
  if (bt_one.available()){
    dato = bt_one.read();
    Serial.println(dato);
    switch(dato){
      case 's':
        servo_left.write(90);
        servo_right.write(90);
        digitalWrite(motor_part_a, LOW);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'a':
        servo_left.write(50);
        servo_right.write(50);
        digitalWrite(motor_part_a, HIGH);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'f':
        servo_left.write(90);
        servo_right.write(90);
        digitalWrite(motor_part_a, HIGH);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'e':
        servo_left.write(130);
        servo_right.write(130);
        digitalWrite(motor_part_a, HIGH);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'l':
        servo_left.write(40);
        servo_right.write(40);
        digitalWrite(motor_part_a, HIGH);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'r':
        servo_left.write(140);
        servo_right.write(140);
        digitalWrite(motor_part_a, HIGH);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'i':
        servo_left.write(40);
        servo_right.write(40);
        digitalWrite(motor_part_a, LOW);
        digitalWrite(motor_part_b, HIGH);
      break;
      case 'b':
        servo_left.write(90);
        servo_right.write(90);
        digitalWrite(motor_part_a, LOW);
        digitalWrite(motor_part_b, HIGH); 
       break;
       case 'o':
         servo_left.write(130);
         servo_right.write(130);
         digitalWrite(motor_part_a, LOW);
         digitalWrite(motor_part_b, HIGH);
       break;
      }
  }
}
