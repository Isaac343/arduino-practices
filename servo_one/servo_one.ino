#include <Servo.h>

int power_value;
float entry;
Servo servo_one;

void setup() {
 Serial.begin(9600);
 pinMode(A0, INPUT);
 servo_one.attach(12); //pin must be PWM
}

void loop() {
  entry = analogRead(A0);
  power_value = ((entry * 180)/1023);
  Serial.print("entry = ");
  Serial.print(entry);
  Serial.print(" value = ");
  Serial.println(power_value);
  servo_one.write(power_value);
  delay(10);
  
}
