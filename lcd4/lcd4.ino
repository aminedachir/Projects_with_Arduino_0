#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void loop(){
  int x;
  x = analogRead(0);
  if(x<600){lcd.setCursor(0,0);lcd.print("amine");}
  delay(2000);
  lcd.clear();
}

void setup(){
  lcd.begin(2,2);
  lcd.setCursor(9,0);
  lcd.print(':');
  lcd.setCursor(6,0);
  lcd.print(':');
  int b=0;int a=0;
  lcd.setCursor(7,0);
      lcd.print(a);
  lcd.setCursor(4,0);
      lcd.print(b);
  for (int i=0;i<600;i++){
    delay(400);
    lcd.setCursor(10,0);
    lcd.print(i);
    delay(500);
    if(i==20){i=0;a=a+1;lcd.setCursor(7,0);lcd.print(a);}
    else if(a==12){i=0;a=0;lcd.setCursor(4,0);lcd.print(b);}
  }
}
