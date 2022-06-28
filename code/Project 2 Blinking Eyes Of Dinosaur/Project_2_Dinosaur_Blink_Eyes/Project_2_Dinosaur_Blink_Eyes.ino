/*
keyestudio STEM Starter Kit
Project 2
Dinosaur Blink Eyes
http//www.keyestudio.com
*/
int ledPin = 10; // define digital pin 10.
void setup()
{
pinMode(ledPin, OUTPUT);// define led pin as output.
}
void loop()
{
digitalWrite(ledPin, HIGH); // set the LED on.
delay(1000); // wait for a second.
digitalWrite(ledPin, LOW); // set the LED off.
delay(1000); // wait for a second
}
//////////////////////////////////////////////////////////////////
