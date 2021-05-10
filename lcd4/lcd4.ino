#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup(){
  lcd.begin(2,2);
  lcd.setCursor(9,0);
  lcd.print(':');
  lcd.setCursor(6,0);
  lcd.print(':');
  int a=0;
  for (int i=0;i<600;i++){
    delay(400);
    lcd.setCursor(10,0);
    lcd.print(i);
    delay(500);
    if(i==5){
      i=0;
      a=a+1;
      lcd.setCursor(7,0);
      lcd.print(a);
    }
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
