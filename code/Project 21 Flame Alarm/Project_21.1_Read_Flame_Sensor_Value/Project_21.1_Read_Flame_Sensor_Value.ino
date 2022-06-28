/*
keyestudio STEM Starter Kit 
Project 21.1
Read Flame Sensor Value
http//www.keyestudio.com
*/
int flamepin=0;// initialize analog pin 0
int val=0;// define val, assign initial value 0
void setup()
{
Serial.begin(9600);// set baud rate at 9600
}
void loop()
{
val=analogRead(flamepin);// read the analog value of analog pin 0, and assign it to val 
Serial.println(val);// display val’s value
}
//////////////////////////////////////////////////////////////////
