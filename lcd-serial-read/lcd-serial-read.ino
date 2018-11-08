#include <LiquidCrystal.h>

LiquidCrystal lcd_one(7, 6, 5, 4, 3, 2);
String data;

void setup() {
  Serial.begin(9600);
  lcd_one.begin(16,2);
  lcd_one.clear();
}

void loop() {
  if (Serial.available() >0){
    data = Serial.readStringUntil("\n");
    lcd_one.clear();
    lcd_one.setCursor(0,0);
    lcd_one.print(data);  
  }
}
