/*
keyestudio STEM Starter Kit
Project 22.2
Light Lamp
http//www.keyestudio.com
*/
int photocellpin=0;// initialize analog pin 0, connected with photocell
int ledpin=11;// initialize digital pin 11, 
int val=0;// initialize variable va
void setup()
{
pinMode(ledpin,OUTPUT);// set digital pin 11 as “output”
Serial.begin(9600);// set baud rate at “9600”
}
void loop()
{
  val=analogRead(photocellpin);// read the value of the sensor
Serial.println(val);// display the value of val
analogWrite(ledpin,val/4);// set up brightness（maximum
delay(10);// wait


  
//val=analogRead(photocellpin);// read the value of the sensor and assign it to val
//Serial.println(val);// display the value of val
//if(val<100){
//analogWrite(ledpin,255);// set up brightness（maximum value 255）
//delay(10);// wait for 0.01s
//}
//else analogWrite(ledpin,LOW);
}
//////////////////////////////////////////////////////////////////
