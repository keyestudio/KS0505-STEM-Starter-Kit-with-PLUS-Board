/*
keyestudio STEM Starter Kit 
Project 20.1

Read Potentiometer Value
http//www.keyestudio.com
*/
int potpin=A1;// initialize analog pin A1
int val=0;// define val, assign initial value 0
void setup()
{
Serial.begin(9600);// set baud rate at 9600
}
void loop()
{
val=analogRead(potpin);// read the analog value of analog pin 1, and assign it to val 
Serial.println(val);// display val’s value
}
//////////////////////////////////////////////////////////////////
