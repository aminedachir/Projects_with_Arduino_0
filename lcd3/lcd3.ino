#include "LiquidCrystal.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup(){
  lcd.begin(2,2);
}
void loop() {
 int x;
 x = analogRead (0);
 if (x < 60) {lcd.setCursor(3,1);lcd.print("amine");}
 else if (x < 200) {lcd.setCursor(0,0);lcd.print("amine");}
 else if (x < 400){lcd.setCursor(0,1);lcd.print("amine");}
 else if (x < 600){lcd.setCursor(0,1);lcd.print("amine");}
 delay(1500);
 lcd.clear();
} 
