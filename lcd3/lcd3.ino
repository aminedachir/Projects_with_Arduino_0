#include "LiquidCrystal.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup(){
  lcd.begin(2,2);
  lcd.setCursor(0,0);
  lcd.print("amine");
  int a = 0;
  int b = 0;
}
void loop() {
  int a=a;
  int b=b;
    int x;
    x = analogRead(0);
    if (x < 60) {lcd.clear();delay(1000);lcd.setCursor(a+1,0);lcd.print("amine");}
    // else if(x<200){lcd.clear();delay(1000);lcd.setCursor(a,b);lcd.print("amine");}
    // else if(x<400){b=b+1;lcd.clear();delay(1000);lcd.setCursor(a,b);lcd.print("amine");}
    // else if(x<600){a=a-1;lcd.clear();delay(1000);lcd.setCursor(a,0);lcd.print("amine");}  
} 
