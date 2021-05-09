#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup(){
  lcd.begin(2,2);
  int i=0;
}
void loop(){
  for(int i=i;i<5;i++){
    delay(500);
    lcd.setCursor(0,0);
    lcd.print(i);
    delay(500);
    lcd.clear();
  }
}
