/*
keyestudio STEM Starter Kit 
Project 9
Star Wars Laser Rod
http//www.keyestudio.com
*/
int data = 4;// set pin 4 of 74HC595as data input pin SI 
int clock = 6;// set pin 6 of 74hc595 as clock pin SCK
int latch = 5;// set pin 5 of 74hc595 as output latch RCK 
int ledState = 0;
const int ON = HIGH;
const int OFF = LOW;
void setup()
{
pinMode(data, OUTPUT);
pinMode(clock, OUTPUT);
pinMode(latch, OUTPUT);
}
void loop()
{
for(int i = 0; i < 256; i++)
{
updateLEDs(i);
delay(500);
}
}
void updateLEDs(int value)
{
digitalWrite(latch, LOW);//
shiftOut(data, clock, MSBFIRST, ~value);// serial data “output”, high level first
digitalWrite(latch, HIGH);// latch
}
//////////////////////////////////////////////////////////////////
