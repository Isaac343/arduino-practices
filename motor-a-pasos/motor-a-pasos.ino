#include <Stepper.h>
#define STEPS 48 //El número de pasos depende de cada motor
Stepper motor_one (STEPS, 2, 3, 4, 5);
void setup() {
  motor_one.setSpeed(480); //revoluciones por minuto
}

void loop() {
  motor_one.step(1440); //número de pasos
  delay(500);
  motor_one.step(-1440);
  delay(500);
}
