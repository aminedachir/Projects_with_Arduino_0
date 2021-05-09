#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup(){
  lcd.begin(2,2);
  for (int i=0;i<15;i++){
    delay(400);
    lcd.setCursor(3,0);
    lcd.print(i);
    delay(500);
  }
}
void loop(){
  //delay(1500);
  //for(int i=i;i<5;i++){
    //lcd.setCursor(0,0);
    //lcd.print("1");
    //delay(1500);
    //lcd.clear();
  //}
}
