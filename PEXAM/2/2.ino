#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x3F 

#define BACKLIGHT_PIN 3


LiquidCrystal_I2C lcd(I2C_ADDR,2,1,0,4,5,6,7);

void setup() {

lcd.begin (16,2);

lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);
lcd.home ();

lcd.setCursor(1,0); 
lcd.print("Hello MDT");

lcd.setCursor(3,1); 
lcd.print("......");

}
void loop() {

}