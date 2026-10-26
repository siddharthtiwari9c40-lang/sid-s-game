#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init(); 
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("hello sid"); 
  delay(3000);
  lcd.setCursor(0, 1);
  lcd.print("how are you");
  delay(3000); 
  lcd.clear(); 
  delay(1000); 
}

void loop(){

}