#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial bt_one(10,11);         //RX|TX
Servo servo_left;                     //declaracion de servo
Servo servo_right;                    //declaracion de servo
char dato;                            //comando
int motor_part_a = 8;                 //variable motor derecho
int motor_part_b = 9;                 //variable motor izquierdo
int vel;                              //variable para velocidad

void setup() {
  bt_one.begin(38400);                //comunicacion bluetooth
  servo_left.attach(6);               //pin a servo 
  servo_right.attach(5);              //pin a servo
  Serial.begin(9600);
  pinMode(A2, OUTPUT);                //pin para buzzer
}

void loop() {
  if (bt_one.available()){
    dato = bt_one.read();             //lectura de comando
    Serial.println(dato);             
    if (dato == 'A'){                 //seleción de velocidad
      vel = 148;
      }
    else if (dato == 'B'){
      vel = 185;
      }
     else if (dato == 'C'){
       vel = 255;
      }
     Serial.println(vel);
    switch(dato){
      case 's':                       //stop
        servo_left.write(90);
        servo_right.write(90);
        digitalWrite(motor_part_a, LOW);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'a':                      //frente izquierda
        servo_left.write(60);
        servo_right.write(60);
        analogWrite(motor_part_a, vel);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'f':                     //frente
        servo_left.write(90);
        servo_right.write(90);
        analogWrite(motor_part_a, vel);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'e':                     //frente derecha
        servo_left.write(120);
        servo_right.write(120);
        analogWrite(motor_part_a, vel);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'l':                     //frente izquierda pronunciada
        servo_left.write(40);
        servo_right.write(40);
        analogWrite(motor_part_a, vel);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'r':                     //frente derecha pronunciada
        servo_left.write(140);
        servo_right.write(140);
        analogWrite(motor_part_a, vel);
        digitalWrite(motor_part_b, LOW);
      break;
      case 'i':                     //atras izquierda
        servo_left.write(40);
        servo_right.write(40);
        digitalWrite(motor_part_a, LOW);
        analogWrite(motor_part_b, vel);
      break;
      case 'b':                     //atras
        servo_left.write(90);
        servo_right.write(90);
        digitalWrite(motor_part_a, LOW);
        analogWrite(motor_part_b, vel); 
       break;
       case 'o':                    //atras derecha
         servo_left.write(130);
         servo_right.write(130);
         digitalWrite(motor_part_a, LOW);
         analogWrite(motor_part_b, vel);
       break;
       case 'u':                    //buzzer
         analogWrite(A2, 1023);
         delay(50);
         analogWrite(A2, 0);
       break;
      }
  }
}
