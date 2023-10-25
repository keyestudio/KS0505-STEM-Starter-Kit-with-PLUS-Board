/*
keyestudio STEM Starter Kit
Project 22.1
Read Photocell value
http//www.keyestudio.com
*/
int photocellpin=0;// initialize analog pin 0, connected with photocell
int val=0;// initialize variable va
void setup()
{
Serial.begin(9600);// set baud rate at “9600”
}
void loop()
{
val=analogRead(photocellpin);// read the value of the sensor and assign it to val
Serial.println(val);// display the value of val
delay(1000);// wait for 1 s
}
//////////////////////////////////////////////////////////////////
