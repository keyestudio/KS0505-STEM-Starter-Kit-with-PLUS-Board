/*
keyestudio STEM Starter Kit 
Project 27.2
Temperature Humidity Meters
http//www.keyestudio.com
*/
#include <dht11.h>
dht11 DHT11;
#define DHT11PIN 11
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
 }
void loop()
{
  int chk = DHT11.read(DHT11PIN);
  lcd.setCursor(2,0);
  lcd.print("Humi: ");
  lcd.print((float)DHT11.humidity, 2);
  lcd.setCursor(2,1);
  lcd.print("Temp: ");
  lcd.print((float)DHT11.temperature, 2);
  delay(2000);
}
//////////////////////////////////////////////////////////
