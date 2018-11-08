#include <LiquidCrystal.h>

LiquidCrystal lcd_one(7, 6, 5, 4, 3, 2);
int entry;
int voltage;

void setup() {
  //Serial.begin(9600);
  lcd_one.begin(16,2);
  lcd_one.clear();
  lcd_one.print("Temp: ");
}

void loop() {
  entry = analogRead(A0);
  delay(25);
  voltage = ((entry*503))/1023;
  //Serial.println(voltage);
  lcd_one.setCursor(6, 0);//setCursor(columna, fila)
  lcd_one.print(voltage);
  delay(25);
  //lcd_one.clear();
  

}
