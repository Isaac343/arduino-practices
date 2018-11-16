#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Servo.h>

LiquidCrystal lcd_one(7, 6, 5, 4, 3, 2); //(RS, E DB4, DB5, DB6, DB7)
const byte rows = 4;
const byte cols = 4;
const byte pin_rows[]={36, 34, 32, 30};
const byte pin_cols[]={28, 26, 24, 22};
char keys[rows][cols]=
  {{'1', '2', '3', 'A'},
   {'4', '5', '6', 'B'},
   {'7', '8', '9', 'C'},
   {'*', '0', '#', 'D'}};
Keypad keyboard = Keypad(makeKeymap(keys), pin_rows, pin_cols, rows, cols);
char value;
String container, a;
String angle_one;
int angle;

Servo servo_one;
void setup() {
  Serial.begin(9600);
  lcd_one.begin(16, 2);
  lcd_one.clear();
  lcd_one.print("Angle = ");
  servo_one.attach(12);
}

void loop() {
  value = keyboard.getKey();
  a = value;
  if(value != 0){
    if (value == 'D'){
      angle = container.toInt();
      lcd_one.clear();
      lcd_one.print("Angle = ");
      lcd_one.setCursor(7, 0);
      lcd_one.print(angle);
      servo_one.write(angle);
    }
    if (value == 'C'){
      angle = 0;
      container = '0';
      lcd_one.clear();
      lcd_one.print("Angle = ");
      lcd_one.setCursor(7, 0);
      lcd_one.print(angle);
      servo_one.write(angle);
    }
    else{
      container += value;
    }
   }
    
}
