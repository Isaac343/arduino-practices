#include <LiquidCrystal.h>

LiquidCrystal lcd_one(7, 6, 5, 4, 3, 2); //nombre(RS, E, DB4, DB5, DB6, DB7);

void setup() {
  lcd_one.begin(16,2);
  lcd_one.clear();

}

void loop() {
  lcd_one.print("Hola mundo");
  delay(10);
  //lcd_one.clear();
}
