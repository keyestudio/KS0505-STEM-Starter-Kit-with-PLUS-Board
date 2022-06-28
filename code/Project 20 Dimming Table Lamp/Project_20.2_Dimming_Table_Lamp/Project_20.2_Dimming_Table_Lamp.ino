/*
keyestudio STEM Starter Kit 
Project 20.2
Dimming Table Lamp
http//www.keyestudio.com
*/
int potpin=A1;// initialize analog pin A1
int ledpin=11;// initialize digital pin 11
int val=0;// define val, assign initial value 0
void setup()
{
pinMode(ledpin,OUTPUT);// set digital pin as “output”
Serial.begin(9600);// set baud rate at 9600
}
void loop()
{
val=analogRead(potpin);// read the analog value of analog pin 1, and assign it to val 
analogWrite(ledpin,val/4);
Serial.println(val);// display val’s value
}
//////////////////////////////////////////////////////////////////
