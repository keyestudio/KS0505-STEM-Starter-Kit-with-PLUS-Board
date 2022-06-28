/*
keyestudio STEM Starter Kit 
Project 18
Car Speed Dial
http//www.keyestudio.com
*/
#include <Servo.h>
Servo myservo;// define servo variable name
void setup()
{
myservo.attach(9);// select servo pin(9 )
}
void loop()
{
myservo.write(0);// set rotate angle of the motor
delay(500);
myservo.write(45);// set rotate angle of the motor
delay(500);
myservo.write(90);// set rotate angle of the motor
delay(500);
myservo.write(135);// set rotate angle of the motor
delay(500);
myservo.write(180);// set rotate angle of the motor
delay(500);
}
//////////////////////////////////////////////////////////
