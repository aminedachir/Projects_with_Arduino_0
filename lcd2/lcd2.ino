#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup(){
  lcd.begin(2,2);
  int a = 0;
  for (int i=0;i<16;i++){
    lcd.setCursor(a,0);
    delay(200);
    lcd.print("hello");
    a = a + 1;
    delay(100);
  }
}
void loop(){
}
