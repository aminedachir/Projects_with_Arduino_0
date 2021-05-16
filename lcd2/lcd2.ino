#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup(){
  lcd.begin(2,2);
}
void loop(){
  int a = 0;int b = -2;
  for (int i=0;i<17;i++){
    lcd.setCursor(a,0);
    delay(400);
    lcd.print("hello");
    a = a + 1;
    b = b + 1;
    lcd.setCursor(b,0);
    lcd.print(" ");
  }
}
