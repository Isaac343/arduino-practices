#include <Keypad.h>
const byte rows = 4;
const byte cols = 4;
const byte pin_rows[]={10, 9, 8, 7};
const byte pin_cols[]={6, 5, 4, 3};
char keys[rows][cols]=
  {{'1', '2', '3', 'A'},
   {'4', '5', '6', 'B'},
   {'7', '8', '9', 'C'},
   {'*', '0', '#', 'D'}};
Keypad keyboard = Keypad(makeKeymap(keys), pin_rows, pin_cols, rows, cols);
char value;
void setup() {
  Serial.begin(9600);
}

void loop() {
  value= keyboard.getKey();
  if (value != 0){
     Serial.println(value);
    }

}
